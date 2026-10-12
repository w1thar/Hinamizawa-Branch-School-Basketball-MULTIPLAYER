// Online play (mod): one player hosts on their own PC, up to five others join over UDP.
//
// The host runs the whole game (State6MP with remote humans) and every frame sends each client a
// snapshot of what is on screen: players (position, facing, animation, expression), the ball,
// clock / score / state, that client's camera and shot markers, sound effects and music. Clients
// only send their buttons and draw what they get; they never simulate.
//
// Joining: an invite code (the host's public IPv4 + port, base-32), a plain IP[:port], or a LAN
// search (broadcast). The host tries to open its port with UPnP and shows the result.
//
// States: 14 = online menu (host / join by code / LAN search / name), 15 = lobby.
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>

#include "core/d3dmath.h"
#include "game/game.h"
#include "game/input.h"
#include "game/lang.h"
#include "game/settings.h"
#include "platform/platform.h"

static void DefaultName();

namespace {

const uint32_t MAGIC = 0x314d4248u;   // "HBM1"
const int VERSION = 2;
const double TIMEOUT = 6.0;

enum Packet {
    P_HELLO = 1,       // c->h: version, name
    P_WELCOME,         // h->c: slot
    P_REJECT,          // h->c: reason
    P_INPUT,           // c->h: buttons + stick
    P_LOBBYREQ,        // c->h: wanted team / character / ready
    P_LOBBY,           // h->c: lobby state
    P_SNAP,            // h->c: game state
    P_BYE,             // either way
    P_DISCOVER,        // c->broadcast
    P_DISCOVER_REPLY,  // h->c: name, players, in match
};
enum Reject { REJ_FULL = 1, REJ_IN_MATCH, REJ_VERSION };

enum Role { ROLE_NONE, ROLE_HOST, ROLE_CLIENT };
enum Page { PAGE_MAIN, PAGE_CODE, PAGE_LAN, PAGE_MESSAGE, PAGE_NAME, PAGE_CONNECTING };

const char *const kCharNames[6] = {"圭一", "魅音", "レナ", "沙都子", "梨花", "詩音"};

struct LobbyPlayer {
    bool used;
    char name[24];
    uint8_t team;   // 0 = A, 1 = B
    uint8_t chr;
    bool ready;
};

struct Peer {
    bool used;
    plat::NetAddr addr;
    double lastHeard;
    RawControls raw;
};

struct Found {
    plat::NetAddr addr;
    char name[24];
    int players;
    bool inMatch;
    double seen;
};

struct SoundEvent {
    uint16_t id;
    uint8_t slot;
};

struct State {
    int role = ROLE_NONE;
    int sock = -1;
    uint16_t port = 0;
    LobbyPlayer lp[6] = {};
    int teamSize = 3, timeSel = 0;
    bool autoSwitch = true;
    int mySlot = 0;
    // host
    Peer peers[6] = {};
    double lobbySend = 0;
    SoundEvent ev[32] = {};
    int evCount = 0;
    uint16_t evNext = 1;
    int soundSet = 0;
    int humSlot[6] = {};
    // client
    plat::NetAddr host;
    double lastHeard = 0, helloSent = 0, joinStart = 0, reqSent = 0;
    bool welcomed = false, view = false;
    int wantTeam = 0, wantChr = 0;
    bool wantReady = false;
    uint8_t snap[2048];
    int snapLen = 0;
    bool snapNew = false;
    uint16_t lastEv = 0;
    bool evSynced = false;
    int musicGen = -1;
    int clientSoundSet = -1;
    // menus
    int page = PAGE_MAIN;
    std::string text;      // code / name being typed
    std::string message;   // PAGE_MESSAGE
    Found found[8] = {};
    int nFound = 0;
    double discoverSent = 0;
    int lanSock = -1;
} O;

// ---- byte buffers ----
struct Writer {
    uint8_t buf[2048];
    int n = 0;
    void u8(int v) { if (n < (int)sizeof(buf)) buf[n++] = (uint8_t)v; }
    void u16(int v) { u8(v & 255); u8((v >> 8) & 255); }
    void u32(uint32_t v) { u16(v & 0xffff); u16(v >> 16); }
    void f32(float f) { uint32_t v; memcpy(&v, &f, 4); u32(v); }
    void str(const char *s, int fixed) {
        for (int i = 0; i < fixed; i++) u8(s && i < (int)strlen(s) ? s[i] : 0);
    }
    void vec(const Vec3 &v) { f32(v.x); f32(v.y); f32(v.z); }
};
struct Reader {
    const uint8_t *p;
    int n, i = 0;
    bool bad = false;
    Reader(const uint8_t *d, int len) : p(d), n(len) {}
    int u8() { if (i >= n) { bad = true; return 0; } return p[i++]; }
    int s8() { return (int8_t)u8(); }
    int u16() { int a = u8(); return a | (u8() << 8); }
    uint32_t u32() { uint32_t a = u16(); return a | ((uint32_t)u16() << 16); }
    float f32() { uint32_t v = u32(); float f; memcpy(&f, &v, 4); return f; }
    void str(char *out, int fixed) {
        for (int k = 0; k < fixed; k++) out[k] = (char)u8();
        out[fixed - 1] = 0;
    }
    Vec3 vec() { float x = f32(), y = f32(); return Vec3(x, y, f32()); }
};

void Begin(Writer &w, int type)
{
    w.u32(MAGIC);
    w.u8(type);
}

void Send(const plat::NetAddr &to, const Writer &w) { plat::UdpSend(O.sock, to, w.buf, w.n); }

// ---- invite codes: IPv4 + port as 10 base-32 characters ----
const char kAlphabet[] = "ABCDEFGHJKLMNPQRSTUVWXYZ23456789";

std::string EncodeCode(uint32_t ip, uint16_t port)
{
    uint64_t v = ((uint64_t)ip << 16) | port;
    std::string s;
    for (int i = 0; i < 10; i++) {
        s += kAlphabet[(v >> (45 - i * 5)) & 31];
        if (i == 4) s += '-';
    }
    return s;
}

bool DecodeAddress(const std::string &in, plat::NetAddr &out)
{
    std::string t;
    for (char c : in)
        if (c != ' ' && c != '-' && c != '\t' && c != '\r' && c != '\n') t += c;
    if (t.empty()) return false;
    if (t.find('.') != std::string::npos) {   // plain IP[:port]
        size_t colon = t.find(':');
        std::string hostPart = colon == std::string::npos ? t : t.substr(0, colon);
        int port = colon == std::string::npos ? g_settings.netPort : atoi(t.c_str() + colon + 1);
        if (port <= 0 || port > 65535) return false;
        return plat::NetResolve(hostPart.c_str(), (uint16_t)port, out);
    }
    if (t.size() != 10) return false;
    uint64_t v = 0;
    for (char c : t) {
        c = (char)toupper((unsigned char)c);
        const char *f = strchr(kAlphabet, c);
        if (!f || !c) return false;
        v = (v << 5) | (uint64_t)(f - kAlphabet);
    }
    out.ip = (uint32_t)(v >> 16);
    out.port = (uint16_t)(v & 0xffff);
    return out.ip != 0 && out.port != 0;
}

bool PrivateIp(uint32_t ip)
{
    return (ip >> 24) == 10 || (ip >> 20) == ((172u << 4) | 1) || (ip >> 16) == ((192u << 8) | 168) ||
           (ip >> 22) == ((100u << 2) | 1);   // 100.64.0.0/10: carrier-grade NAT
}

void AppendUtf8(std::string &s, unsigned c)
{
    if (c < 0x80) s += (char)c;
    else if (c < 0x800) {
        s += (char)(0xc0 | (c >> 6));
        s += (char)(0x80 | (c & 63));
    } else {
        s += (char)(0xe0 | (c >> 12));
        s += (char)(0x80 | ((c >> 6) & 63));
        s += (char)(0x80 | (c & 63));
    }
}

void PopUtf8(std::string &s)
{
    while (!s.empty() && ((unsigned char)s.back() & 0xc0) == 0x80) s.pop_back();
    if (!s.empty()) s.pop_back();
}

int CountTeam(int team)
{
    int n = 0;
    for (const LobbyPlayer &p : O.lp)
        if (p.used && p.team == team) n++;
    return n;
}

bool CharTaken(int chr, int exceptSlot)
{
    for (int s = 0; s < 6; s++)
        if (s != exceptSlot && O.lp[s].used && O.lp[s].chr == chr) return true;
    return false;
}

int FreeChar(int from, int dir, int slot)
{
    for (int k = 0; k < 6; k++) {
        int c = ((from + dir * k) % 6 + 6) % 6;
        if (!CharTaken(c, slot)) return c;
    }
    return from;
}

void HostSoundHook(int slot)
{
    if (O.role != ROLE_HOST) return;
    if (O.evCount == 32) {
        memmove(O.ev, O.ev + 1, sizeof(SoundEvent) * 31);
        O.evCount--;
    }
    O.ev[O.evCount++] = {O.evNext++, (uint8_t)slot};
}

void CloseSockets()
{
    if (O.sock >= 0) plat::UdpClose(O.sock);
    if (O.lanSock >= 0) plat::UdpClose(O.lanSock);
    O.sock = O.lanSock = -1;
}

}  // namespace

// ================================================================================================
bool Game::OnlineActive() const { return O.role != ROLE_NONE; }
bool Game::OnlineIsHost() const { return O.role == ROLE_HOST; }
bool Game::OnlineClientView() const { return O.role == ROLE_CLIENT && O.view; }
bool Game::OnlineTextEntry() const { return state == 14 && (O.page == PAGE_CODE || O.page == PAGE_NAME); }

void Game::OnlineNoteSoundSet(int set)
{
    O.soundSet = set;
}

// Back to a quiet lobby scene (after joining, hosting, or a finished match).
void Game::OnlineLobbyScene()
{
    for (int i = 0; i < 6; i++) {
        players[i]->benched = false;
        players[i]->pickedB = false;
        players[i]->b154 = false;
        players[i]->i190 = 7;
        ctrl[i] = -1;
    }
    mpActive = mpVersus = mpSplit = false;
    mpAutoSwitch = false;
    if (O.role == ROLE_CLIENT) mpHumans = 0;
    i3b8 = 0;
    i3ac = 0;
    i39c = 0;
    f3a0 = 0.0f;
    f394 = 0.0f;
    f41c = 0.0f;
    b39a = 0;
    b3a4 = b3a5 = false;
    paused = false;
    LoadSoundSet(0);
    sound->ForceTrack("WAV\\LP\\mion.mp3");
    menuSel = 0;
    state = 15;
}

void Game::OnlineLeave()
{
    if (O.role == ROLE_NONE) return;
    Writer w;
    Begin(w, P_BYE);
    if (O.role == ROLE_HOST) {
        for (int s = 1; s < 6; s++)
            if (O.peers[s].used) Send(O.peers[s].addr, w);
        plat::NetStopPortMapping();
    } else if (O.welcomed) {
        Send(O.host, w);
    }
    Sound::playHook = nullptr;
    CloseSockets();
    O.role = ROLE_NONE;
    O.view = false;
    mpHumans = 0;
}

// Leaves the session and shows a message on the online menu.
void Game::OnlineFail(const char *msg)
{
    bool inGame = state != 14 && state != 15;
    OnlineLeave();
    if (inGame) {
        ReturnToTitle();
        State1_Title();
        b39a = 1;
        f394 = 0.0f;
    }
    O.page = PAGE_MESSAGE;
    O.message = msg;
    state = 14;
}

// ---- host ------------------------------------------------------------------------------------
static void HostRemovePeer(Game *g, int s)
{
    O.peers[s].used = false;
    O.lp[s].used = false;
    // In a match the player's character is taken over by the AI.
    for (int h = 0; h < g->mpHumans; h++) {
        if (O.humSlot[h] == s && g->hum[h].device == DEVICE_REMOTE && !g->hum[h].gone) {
            if (g->hum[h].player >= 0) g->ctrl[g->hum[h].player] = -1;
            g->hum[h].player = -1;
            g->hum[h].gone = true;
        }
    }
}

void Game::OnlineHostReceive()
{
    uint8_t buf[2048];
    plat::NetAddr from;
    int n;
    double now = plat::TimeSeconds();
    while ((n = plat::UdpRecv(O.sock, from, buf, sizeof(buf))) >= 0) {
        Reader r(buf, n);
        if (r.u32() != MAGIC) continue;
        int type = r.u8();
        int slot = -1;
        for (int s = 1; s < 6; s++)
            if (O.peers[s].used && O.peers[s].addr == from) slot = s;
        if (slot >= 0) O.peers[slot].lastHeard = now;

        if (type == P_DISCOVER) {
            Writer w;
            Begin(w, P_DISCOVER_REPLY);
            w.str(O.lp[0].name, 24);
            int count = 0;
            for (const LobbyPlayer &p : O.lp) count += p.used;
            w.u8(count);
            w.u8(state != 15);
            Send(from, w);
        } else if (type == P_HELLO) {
            int ver = r.u16();
            char name[24];
            r.str(name, 24);
            Writer w;
            if (ver != VERSION) {
                Begin(w, P_REJECT);
                w.u8(REJ_VERSION);
            } else if (slot < 0 && state != 15) {
                Begin(w, P_REJECT);
                w.u8(REJ_IN_MATCH);
            } else {
                if (slot < 0) {
                    for (int s = 1; s < 6 && slot < 0; s++)
                        if (!O.lp[s].used) slot = s;
                }
                if (slot < 0) {
                    Begin(w, P_REJECT);
                    w.u8(REJ_FULL);
                } else {
                    if (!O.peers[slot].used) {
                        O.peers[slot] = Peer();
                        O.peers[slot].used = true;
                        O.peers[slot].addr = from;
                        O.peers[slot].lastHeard = now;
                        LobbyPlayer &p = O.lp[slot];
                        p = LobbyPlayer();
                        p.used = true;
                        snprintf(p.name, sizeof(p.name), "%s", name[0] ? name : "Player");
                        // Join the smaller team (team A on a tie) with a free character.
                        p.team = CountTeam(1) < CountTeam(0) ? 1 : 0;
                        if (CountTeam(p.team) >= 3) p.team = 1 - p.team;
                        p.chr = (uint8_t)FreeChar(slot, 1, slot);
                        p.ready = false;
                        if (CountTeam(p.team) > O.teamSize) O.teamSize = CountTeam(p.team);
                        sound->Play(2);
                    }
                    Begin(w, P_WELCOME);
                    w.u8(slot);
                }
            }
            Send(from, w);
        } else if (slot < 0) {
            continue;
        } else if (type == P_INPUT) {
            r.u32();
            int bits = r.u8();
            RawControls &c = O.peers[slot].raw;
            c = RawControls();
            c.up = bits & 1;
            c.down = (bits >> 1) & 1;
            c.left = (bits >> 2) & 1;
            c.right = (bits >> 3) & 1;
            c.pass = (bits >> 4) & 1;
            c.shoot = (bits >> 5) & 1;
            c.alt = (bits >> 6) & 1;
            c.moveX = r.f32();
            c.moveY = r.f32();
            if (r.bad) c = RawControls();
        } else if (type == P_LOBBYREQ && state == 15) {
            int team = r.u8() & 1, chr = r.u8(), ready = r.u8();
            if (r.bad || chr > 5) continue;
            LobbyPlayer &p = O.lp[slot];
            if (team != p.team && CountTeam(team) < 3) {
                p.team = (uint8_t)team;
                if (CountTeam(team) > O.teamSize) O.teamSize = CountTeam(team);
            }
            if (!CharTaken(chr, slot)) p.chr = (uint8_t)chr;
            p.ready = ready != 0;
        } else if (type == P_BYE) {
            HostRemovePeer(this, slot);
        }
    }
    for (int s = 1; s < 6; s++)
        if (O.peers[s].used && now - O.peers[s].lastHeard > TIMEOUT) HostRemovePeer(this, s);
    // Remote humans' buttons for this frame.
    for (int h = 0; h < mpHumans; h++)
        netRaw[h] = hum[h].device == DEVICE_REMOTE && O.peers[O.humSlot[h]].used ? O.peers[O.humSlot[h]].raw : RawControls();
}

void Game::OnlineHostSend()
{
    double now = plat::TimeSeconds();
    if (state == 15) {
        if (now - O.lobbySend < 0.1) return;
        O.lobbySend = now;
        Writer w;
        Begin(w, P_LOBBY);
        w.u8(O.teamSize);
        w.u8(O.timeSel);
        w.u8(O.autoSwitch);
        for (const LobbyPlayer &p : O.lp) {
            w.u8(p.used);
            w.str(p.name, 24);
            w.u8(p.team);
            w.u8(p.chr);
            w.u8(p.ready);
        }
        for (int s = 1; s < 6; s++)
            if (O.peers[s].used) Send(O.peers[s].addr, w);
        return;
    }

    // ---- snapshot ----
    Writer w;
    Begin(w, P_SNAP);
    w.u8(state);
    w.u8(i3b8);
    w.u8(b3a6);
    w.u8(b414);
    w.u8(i418 & 255);
    w.u8((b3a4 ? 1 : 0) | (b3a5 ? 2 : 0) | (b39a ? 4 : 0) | (mpVersus ? 8 : 0));
    w.u8(teamSize);
    w.u8(mpMinutes);
    w.u8(i3b0);
    w.u8(O.soundSet);
    w.f32(f390);
    w.f32(f394);
    w.f32(f3e0);
    w.f32(f41c);
    w.u16(i3d8);
    w.u16(i3dc);
    w.vec(camPos);
    w.vec(camDir);
    w.vec(v24c);
    w.f32(f260);
    w.f32(f264);
    w.f32(f3a0);
    for (int i = 0; i < 6; i++) w.u8(team[i]);
    for (int i = 0; i < 6; i++) {
        Player *p = players[i];
        w.u8((p->benched ? 1 : 0) | (p->b154 ? 2 : 0));
        w.vec(p->pos);
        w.f32(p->yaw);
        w.f32(p->animTime);
        w.u8(p->motionId);
        for (int k = 0; k < 4; k++) w.u8(p->texFrame[k] & 255);
    }
    w.u8(O.evCount);
    for (int k = 0; k < O.evCount; k++) {
        w.u16(O.ev[k].id);
        w.u8(O.ev[k].slot);
    }
    int gen;
    const char *track = Sound::CurrentTrack(gen);
    w.u16(gen & 0xffff);
    int tl = (int)strlen(track);
    if (tl > 100) tl = 100;
    w.u8(tl);
    for (int k = 0; k < tl; k++) w.u8(track[k]);
    w.u8(mpHumans);
    for (int h = 0; h < mpHumans; h++) {
        const MpHuman &m = hum[h];
        w.u8(O.humSlot[h]);
        w.u8(m.player & 255);
        w.u8(m.marker);
        w.u8(m.gauge & 255);
        w.f32(m.power);
        w.vec(m.cam);
        w.vec(m.camDir);
        w.vec(m.markerPos);
    }
    for (int s = 1; s < 6; s++)
        if (O.peers[s].used) Send(O.peers[s].addr, w);
}

// The match: humans from the lobby, COM fills the teams up to the team size, the rest sit out.
void Game::OnlineStartMatch()
{
    static const int minutes[4] = {0, 3, 5, 10};
    mpActive = true;
    mpSplit = false;
    mpAutoSwitch = O.autoSwitch;
    mpMinutes = minutes[O.timeSel];
    teamSize = O.teamSize;
    mpHumans = 0;
    for (int i = 0; i < 6; i++) {
        players[i]->b154 = false;
        players[i]->benched = false;
        players[i]->pickedB = false;
        ctrl[i] = -1;
    }
    bool used[6] = {};
    int nA = 0, nB = 0;
    for (int s = 0; s < 6; s++) {
        const LobbyPlayer &p = O.lp[s];
        if (!p.used) continue;
        int h = mpHumans++;
        hum[h] = MpHuman();
        hum[h].device = s == 0 ? DEVICE_ANY : DEVICE_REMOTE;
        hum[h].player = p.chr;
        hum[h].teamA = p.team == 0;
        O.humSlot[h] = s;
        used[p.chr] = true;
        ctrl[p.chr] = h;
        if (p.team == 0) {
            players[p.chr]->b154 = true;
            team[nA++] = p.chr;
        } else {
            team[3 + nB++] = p.chr;
        }
    }
    mpVersus = nA > 0 && nB > 0;
    int rest[6], nRest = 0;
    for (int c = 0; c < 6; c++)
        if (!used[c]) rest[nRest++] = c;
    for (int i = nRest - 1; i > 0; i--) {
        int j = crt_rand() % (i + 1);
        int t = rest[i];
        rest[i] = rest[j];
        rest[j] = t;
    }
    int r = 0;
    while (nA < teamSize) {
        players[rest[r]]->b154 = true;
        team[nA++] = rest[r++];
    }
    while (nB < teamSize) team[3 + nB++] = rest[r++];
    for (int k = nA; k < 3; k++) {
        team[k] = rest[r++];
        players[team[k]]->benched = true;
    }
    for (int k = nB; k < 3; k++) {
        team[3 + k] = rest[r++];
        players[team[3 + k]]->benched = true;
    }
    for (int i = 0; i < 6; i++) {
        players[i]->SetTex0(0);
        players[i]->SetTex1(0);
        players[i]->SetTex2(0);
        players[i]->SetTex3(0);
        players[i]->Motion_Stand();
        players[i]->i190 = 7;
    }
    i3b0 = MODE_NORMAL;
    f400 = 4.0f;
    // Reuse the end of team select (state 4, i3b8 = 5): line-up, then the tip-off.
    camPos = Vec3(0.0f, 3.5f, -30.0f);
    camDir = Vec3(0.0f, 0.0f, 1.0f);
    b39a = 0;
    b398 = false;
    f390 = 0.0f;
    f394 = 1.0f;
    i3b8 = 5;
    state = 4;
    sound->Play(5);
    sound->OpenMp3("WAV\\LP\\4.mp3");
}

// After the results: everyone back to the lobby, not ready.
void Game::OnlineMatchOver()
{
    for (int s = 1; s < 6; s++) O.lp[s].ready = false;
    OnlineLobbyScene();
}

// ---- client ----------------------------------------------------------------------------------
void Game::OnlineClientReceive()
{
    uint8_t buf[2048];
    plat::NetAddr from;
    int n;
    double now = plat::TimeSeconds();
    while ((n = plat::UdpRecv(O.sock, from, buf, sizeof(buf))) >= 0) {
        if (!(from == O.host)) continue;
        Reader r(buf, n);
        if (r.u32() != MAGIC) continue;
        int type = r.u8();
        O.lastHeard = now;
        if (type == P_WELCOME) {
            O.mySlot = r.u8();
            if (!O.welcomed) {
                O.welcomed = true;
                O.wantReady = false;
                O.reqSent = 0;
                O.wantTeam = -1;   // take whatever the host assigned
                OnlineLobbyScene();
            }
        } else if (type == P_REJECT) {
            int why = r.u8();
            OnlineFail(why == REJ_FULL ? "この部屋は満員です" : why == REJ_IN_MATCH ? "この部屋は試合中です" : "ゲームのバージョンが違います");
            return;
        } else if (type == P_BYE) {
            OnlineFail("ホストが部屋を閉じました");
            return;
        } else if (type == P_LOBBY && O.welcomed) {
            O.teamSize = r.u8();
            O.timeSel = r.u8();
            O.autoSwitch = r.u8() != 0;
            for (LobbyPlayer &p : O.lp) {
                p.used = r.u8() != 0;
                r.str(p.name, 24);
                p.team = (uint8_t)r.u8();
                p.chr = (uint8_t)r.u8();
                p.ready = r.u8() != 0;
            }
            if (O.wantTeam < 0) {
                O.wantTeam = O.lp[O.mySlot].team;
                O.wantChr = O.lp[O.mySlot].chr;
            }
            if (O.view) {   // match over: back to the lobby
                O.view = false;
                O.wantReady = false;
                OnlineLobbyScene();
            }
        } else if (type == P_SNAP && O.welcomed && n <= (int)sizeof(O.snap)) {
            memcpy(O.snap, buf, n);
            O.snapLen = n;
            O.snapNew = true;
            if (!O.view) {
                O.view = true;
                O.evSynced = false;
                O.musicGen = -1;
                O.clientSoundSet = -1;
            }
        }
    }
    if (!O.welcomed) {
        if (now - O.joinStart > 8.0) {
            OnlineFail("接続できませんでした");
            return;
        }
        if (now - O.helloSent > 0.5) {
            O.helloSent = now;
            Writer w;
            Begin(w, P_HELLO);
            w.u16(VERSION);
            w.str(g_settings.playerName, 24);
            Send(O.host, w);
        }
    } else if (now - O.lastHeard > TIMEOUT) {
        OnlineFail("ホストとの接続が切れました");
    }
}

void Game::OnlineClientSend()
{
    if (!O.welcomed) return;
    RawControls c;
    if (paused || state == 15 || !Input_ReadRaw(DEVICE_ANY, c)) c = RawControls();
    Writer w;
    Begin(w, P_INPUT);
    w.u32(0);
    w.u8((c.up ? 1 : 0) | (c.down ? 2 : 0) | (c.left ? 4 : 0) | (c.right ? 8 : 0) | (c.pass ? 16 : 0) |
         (c.shoot ? 32 : 0) | (c.alt ? 64 : 0));
    w.f32(c.moveX);
    w.f32(c.moveY);
    Send(O.host, w);
    double now = plat::TimeSeconds();
    if (state == 15 && O.wantTeam >= 0 && now - O.reqSent > 0.2) {
        O.reqSent = now;
        Writer q;
        Begin(q, P_LOBBYREQ);
        q.u8(O.wantTeam);
        q.u8(O.wantChr);
        q.u8(O.wantReady);
        Send(O.host, q);
    }
}

void Game::OnlineApplySnapshot()
{
    if (!O.snapNew) return;
    O.snapNew = false;
    Reader r(O.snap, O.snapLen);
    r.u32();
    r.u8();
    int st = r.u8();
    i3b8 = r.u8();
    b3a6 = (u8)r.u8();
    b414 = r.u8() != 0;
    i418 = r.s8();
    int flags = r.u8();
    b3a4 = flags & 1;
    b3a5 = (flags & 2) != 0;
    b39a = (flags & 4) ? 1 : 0;
    mpVersus = (flags & 8) != 0;
    teamSize = r.u8();
    mpMinutes = r.u8();
    i3b0 = r.u8();
    int set = r.u8();
    f390 = r.f32();
    f394 = r.f32();
    f3e0 = r.f32();
    f41c = r.f32();
    i3d8 = r.u16();
    i3dc = r.u16();
    Vec3 hostCam = r.vec(), hostDir = r.vec();
    v24c = r.vec();
    f260 = r.f32();
    f264 = r.f32();
    float hostPower = r.f32();
    int tm[6];
    for (int &t : tm) t = r.u8();
    struct P {
        int flags, motion, tex[4];
        Vec3 pos;
        float yaw, anim;
    } pl[6];
    for (P &p : pl) {
        p.flags = r.u8();
        p.pos = r.vec();
        p.yaw = r.f32();
        p.anim = r.f32();
        p.motion = r.u8();
        for (int &t : p.tex) t = r.s8();
    }
    int nEv = r.u8();
    SoundEvent ev[32];
    for (int k = 0; k < nEv && k < 32; k++) {
        ev[k].id = (uint16_t)r.u16();
        ev[k].slot = (uint8_t)r.u8();
    }
    int gen = r.u16();
    int tl = r.u8();
    char track[128];
    for (int k = 0; k < tl && k < 127; k++) track[k] = (char)r.u8();
    track[tl < 127 ? tl : 127] = 0;
    int nh = r.u8();
    if (r.bad) return;

    state = st;
    mpActive = true;
    mpSplit = false;
    for (int i = 0; i < 6; i++) team[i] = tm[i] < 6 ? tm[i] : 0;
    for (int i = 0; i < 6; i++) {
        Player *p = players[i];
        p->benched = pl[i].flags & 1;
        p->b154 = (pl[i].flags & 2) != 0;
        if (pl[i].motion != p->motionId) p->ApplyMotion(pl[i].motion);
        float dx = pl[i].pos.x - p->pos.x, dz = pl[i].pos.z - p->pos.z;
        if (dx * dx + dz * dz > 16.0f) {
            p->SetPos(pl[i].pos.x, pl[i].pos.y, pl[i].pos.z, pl[i].yaw);
        } else {
            p->pos = pl[i].pos;
            p->yaw = pl[i].yaw;
        }
        p->animTime = pl[i].anim;
        for (int k = 0; k < 4; k++) {
            if (pl[i].tex[k] == p->texFrame[k]) continue;
            if (k == 0) p->SetTex0(pl[i].tex[k]);
            if (k == 1) p->SetTex1(pl[i].tex[k]);
            if (k == 2) p->SetTex2(pl[i].tex[k]);
            if (k == 3) p->SetTex3(pl[i].tex[k]);
        }
    }
    // Sounds: the set first, then new effects in order (none of the backlog on the first snapshot).
    if (set != O.clientSoundSet) {
        LoadSoundSet(set);
        O.clientSoundSet = set;
    }
    for (int k = 0; k < nEv && k < 32; k++) {
        if (O.evSynced && (int16_t)(ev[k].id - O.lastEv) <= 0) continue;
        if (O.evSynced) sound->Play(ev[k].slot);
        O.lastEv = ev[k].id;
    }
    if (nEv == 0 && !O.evSynced) O.lastEv = 0;
    O.evSynced = true;
    if (gen != O.musicGen) {
        sound->ForceTrack(track);
        O.musicGen = gen;
    }

    // This player's view.
    camPos = hostCam;
    camDir = hostDir;
    i3ac = 0;
    i39c = 0;
    f3a0 = hostPower;
    for (int h = 0; h < nh; h++) {
        int slot = r.u8(), player = r.s8(), marker = r.u8(), gauge = r.u8();
        float power = r.f32();
        Vec3 cam = r.vec(), dir = r.vec(), mpos = r.vec();
        if (r.bad || slot != O.mySlot) continue;
        f3a0 = state == 5 ? hostPower : power;
        if (state == 6 && player >= 0) {
            camPos = cam;
            camDir = dir;
            i3ac = marker;
            i39c = gauge;
            f3a0 = power;
            v240 = mpos;
        }
    }
}

// ---- per frame ---------------------------------------------------------------------------------
void Game::OnlineFrameBegin()
{
    if (O.role == ROLE_HOST) OnlineHostReceive();
    else if (O.role == ROLE_CLIENT) OnlineClientReceive();
    if (O.role == ROLE_CLIENT && O.view) OnlineApplySnapshot();

    // LAN search replies.
    if (O.lanSock >= 0) {
        uint8_t buf[512];
        plat::NetAddr from;
        int n;
        double now = plat::TimeSeconds();
        while ((n = plat::UdpRecv(O.lanSock, from, buf, sizeof(buf))) >= 0) {
            Reader r(buf, n);
            if (r.u32() != MAGIC || r.u8() != P_DISCOVER_REPLY) continue;
            Found f;
            r.str(f.name, 24);
            f.players = r.u8();
            f.inMatch = r.u8() != 0;
            f.addr = from;
            f.seen = now;
            if (r.bad) continue;
            int k = 0;
            while (k < O.nFound && !(O.found[k].addr == from)) k++;
            if (k == O.nFound && O.nFound < 8) O.nFound++;
            if (k < 8) O.found[k] = f;
        }
        for (int k = 0; k < O.nFound;) {   // forget hosts that stopped answering
            if (now - O.found[k].seen > 4.0) O.found[k] = O.found[--O.nFound];
            else k++;
        }
        if (now - O.discoverSent > 1.0) {
            O.discoverSent = now;
            Writer w;
            Begin(w, P_DISCOVER);
            for (int k = 0; k < 4; k++) {
                plat::NetAddr b;
                b.ip = plat::NET_BROADCAST;
                b.port = (uint16_t)(g_settings.netPort + k);
                plat::UdpSend(O.lanSock, b, w.buf, w.n);
            }
        }
    }
}

void Game::OnlineFrameEnd()
{
    if (O.role == ROLE_HOST) OnlineHostSend();
    else if (O.role == ROLE_CLIENT) OnlineClientSend();
}

// ---- starting a session ------------------------------------------------------------------------
static void DefaultName()
{
    if (strcmp(g_settings.playerName, "Player") != 0) return;
    std::string u = plat::UserName();
    if (u.empty()) return;
    if (u.size() > 16) u.resize(16);
    snprintf(g_settings.playerName, sizeof(g_settings.playerName), "%s", u.c_str());
}

void Game::OnlineHost()
{
    CloseSockets();
    for (int k = 0; k < 10 && O.sock < 0; k++) {
        O.sock = plat::UdpOpen((uint16_t)(g_settings.netPort + k), true);
        if (O.sock >= 0) O.port = (uint16_t)(g_settings.netPort + k);
    }
    if (O.sock < 0) {
        O.page = PAGE_MESSAGE;
        O.message = "ポートを開けませんでした";
        return;
    }
    O.role = ROLE_HOST;
    for (Peer &p : O.peers) p = Peer();
    for (LobbyPlayer &p : O.lp) p = LobbyPlayer();
    O.lp[0].used = true;
    snprintf(O.lp[0].name, sizeof(O.lp[0].name), "%s", g_settings.playerName);
    O.lp[0].team = 0;
    O.lp[0].chr = 0;
    O.lp[0].ready = true;
    O.mySlot = 0;
    O.teamSize = 3;
    O.evCount = 0;
    Sound::playHook = HostSoundHook;
    plat::NetStartPortMapping(O.port);
    OnlineLobbyScene();
}

void Game::OnlineJoin(const plat::NetAddr &addr)
{
    CloseSockets();
    O.sock = plat::UdpOpen(0, false);
    if (O.sock < 0) {
        O.page = PAGE_MESSAGE;
        O.message = "ネットワークを使えません";
        return;
    }
    O.role = ROLE_CLIENT;
    O.host = addr;
    O.welcomed = false;
    O.view = false;
    O.joinStart = plat::TimeSeconds();
    O.helloSent = 0;
    O.lastHeard = O.joinStart;
    for (LobbyPlayer &p : O.lp) p = LobbyPlayer();
    O.page = PAGE_CONNECTING;
}

// ---- 14: online menu ---------------------------------------------------------------------------
void Game::State14_Online()
{
    static bool named = false;
    if (!named) {   // first visit: the Windows user name instead of "Player"
        named = true;
        DefaultName();
    }
    f390 = f390 + dt;
    if (v24c.y < 1.0f && -1.0f < f25c && f25c < 7.0f) f25c = 25.0f;   // same backdrop as state 3

    auto back = [&]() {
        if (O.lanSock >= 0) plat::UdpClose(O.lanSock);
        O.lanSock = -1;
        O.page = PAGE_MAIN;
        menuSel = 0;
        sound->Play(1);
    };
    bool action = keyX == KEY_PUSH || keyZ == KEY_PUSH || keyC == KEY_PUSH || keySpace == KEY_PUSH ||
                  keyEnter == KEY_PUSH;

    if (O.page == PAGE_CODE || O.page == PAGE_NAME) {
        // Typing: only the character stream counts (X / Z / C are letters here).
        unsigned c;
        while ((c = plat::PollChar()) != 0) {
            if (c == 27) {
                back();
                return;
            } else if (c == 13) {
                if (O.page == PAGE_NAME) {
                    if (!O.text.empty()) snprintf(g_settings.playerName, sizeof(g_settings.playerName), "%s", O.text.c_str());
                    Settings_Save();
                    back();
                    return;
                }
                plat::NetAddr a;
                if (DecodeAddress(O.text, a)) {
                    sound->Play(1);
                    OnlineJoin(a);
                } else {
                    sound->Play(3);
                    O.message = "コードが正しくありません";
                }
                return;
            } else if (c == 8) {
                PopUtf8(O.text);
            } else if (c == 0x16) {
                std::string clip = plat::ClipboardText();
                for (char ch : clip)
                    if ((unsigned char)ch >= 32 && O.text.size() < 40) O.text += ch;
            } else if (c >= 32 && O.text.size() < (O.page == PAGE_NAME ? 20u : 40u)) {
                AppendUtf8(O.text, c);
            }
        }
        if (keyPause == KEY_PUSH) back();
        return;
    }
    while (plat::PollChar() != 0) {}

    if (O.page == PAGE_CONNECTING) {
        if (keyPause == KEY_PUSH) {
            OnlineLeave();
            back();
        }
        return;   // OnlineClientReceive moves on to the lobby or to an error message
    }
    if (O.page == PAGE_MESSAGE) {
        if (action || keyPause == KEY_PUSH) back();
        return;
    }
    if (O.page == PAGE_LAN) {
        int items = O.nFound + 1;   // hosts + back
        if ((keyUp == KEY_PUSH || keyNum8 == KEY_PUSH) && menuSel > 0) {
            menuSel--;
            sound->Play(2);
        }
        if ((keyDown == KEY_PUSH || keyNum2 == KEY_PUSH) && menuSel < items - 1) {
            menuSel++;
            sound->Play(2);
        }
        if (menuSel > items - 1) menuSel = items - 1;
        if (keyPause == KEY_PUSH || (action && menuSel == items - 1)) {
            back();
        } else if (action && menuSel < O.nFound) {
            sound->Play(1);
            plat::NetAddr a = O.found[menuSel].addr;
            if (O.lanSock >= 0) plat::UdpClose(O.lanSock);
            O.lanSock = -1;
            OnlineJoin(a);
        }
        return;
    }

    // Main page: host, join by code, LAN search, name, back.
    const int ITEMS = 5;
    if ((keyUp == KEY_PUSH || keyNum8 == KEY_PUSH) && menuSel > 0) {
        menuSel--;
        sound->Play(2);
    }
    if ((keyDown == KEY_PUSH || keyNum2 == KEY_PUSH) && menuSel < ITEMS - 1) {
        menuSel++;
        sound->Play(2);
    }
    if (keyPause == KEY_PUSH) {
        sound->Play(1);
        state = 3;
        return;
    }
    if (!action) return;
    sound->Play(1);
    switch (menuSel) {
    case 0: OnlineHost(); break;
    case 1:
        O.page = PAGE_CODE;
        O.text.clear();
        O.message.clear();
        break;
    case 2:
        O.page = PAGE_LAN;
        O.nFound = 0;
        O.discoverSent = 0;
        if (O.lanSock < 0) O.lanSock = plat::UdpOpen(0, true);
        menuSel = 0;
        break;
    case 3:
        O.page = PAGE_NAME;
        O.text = g_settings.playerName;
        break;
    default: state = 3; break;
    }
}

// ---- 15: lobby ---------------------------------------------------------------------------------
// Everyone: team, character. Host: team size, match time, start. Clients: ready. Both: leave.
void Game::State15_Lobby()
{
    f390 = f390 + dt;
    if (v24c.y < 1.0f && -1.0f < f25c && f25c < 7.0f) f25c = 25.0f;
    while (plat::PollChar() != 0) {}
    bool host = O.role == ROLE_HOST;
    if (O.role == ROLE_CLIENT && !O.welcomed) return;
    const int ITEMS = host ? 7 : 4;
    if ((keyUp == KEY_PUSH || keyNum8 == KEY_PUSH) && menuSel > 0) {
        menuSel--;
        sound->Play(2);
    }
    if ((keyDown == KEY_PUSH || keyNum2 == KEY_PUSH) && menuSel < ITEMS - 1) {
        menuSel++;
        sound->Play(2);
    }
    bool action = keyX == KEY_PUSH || keyZ == KEY_PUSH || keyC == KEY_PUSH || keySpace == KEY_PUSH ||
                  keyEnter == KEY_PUSH;
    int dir = 0;
    if (keyLeft == KEY_PUSH || keyNum4 == KEY_PUSH) dir = -1;
    if (keyRight == KEY_PUSH || keyNum6 == KEY_PUSH) dir = 1;
    if (action && menuSel <= (host ? 4 : 2)) dir = 1;

    LobbyPlayer &me = O.lp[O.mySlot];
    int myTeam = host ? me.team : O.wantTeam;
    int myChr = host ? me.chr : O.wantChr;
    if (dir != 0) {
        if (menuSel == 0) {
            int t = 1 - myTeam;
            if (CountTeam(t) - (host ? 0 : (me.team == t)) < 3) {
                myTeam = t;
                sound->Play(2);
            }
        } else if (menuSel == 1) {
            myChr = FreeChar(myChr + dir, dir, O.mySlot);
            sound->Play(2);
        } else if (host && menuSel == 2) {
            int need = CountTeam(0) > CountTeam(1) ? CountTeam(0) : CountTeam(1);
            if (need < 1) need = 1;
            O.teamSize += dir;
            if (O.teamSize > 3) O.teamSize = need;
            if (O.teamSize < need) O.teamSize = 3;
            sound->Play(2);
        } else if (host && menuSel == 3) {
            O.timeSel = (O.timeSel + dir + 4) % 4;
            sound->Play(2);
        } else if (host && menuSel == 4) {
            O.autoSwitch = !O.autoSwitch;
            sound->Play(2);
        } else if (!host && menuSel == 2) {
            O.wantReady = !O.wantReady;
            sound->Play(2);
        }
    }
    if (host) {
        me.team = (uint8_t)myTeam;
        me.chr = (uint8_t)myChr;
        int need = CountTeam(0) > CountTeam(1) ? CountTeam(0) : CountTeam(1);
        if (O.teamSize < need) O.teamSize = need;
    } else {
        O.wantTeam = myTeam;
        O.wantChr = myChr;
    }

    bool leave = (menuSel == ITEMS - 1 && action) || keyPause == KEY_PUSH;
    if (leave) {
        sound->Play(1);
        OnlineLeave();
        O.page = PAGE_MAIN;
        menuSel = 0;
        state = 14;
        sound->ForceTrack("WAV\\LP\\1.mp3");
        return;
    }
    if (host && menuSel == 5 && action) {
        bool allReady = true;
        for (int s = 1; s < 6; s++)
            if (O.lp[s].used && !O.lp[s].ready) allReady = false;
        if (!allReady) {
            sound->Play(3);
            return;
        }
        OnlineStartMatch();
    }
}

// ---- drawing -----------------------------------------------------------------------------------
void Game::DrawOnlineHUD()
{
    int pulseR = (int)(sinf(f390 * 10.0f) * 128.0f + 128.0f), pulseG = (int)(sinf(f390 * 7.0f) * 128.0f + 128.0f),
        pulseB = (int)(sinf(f390 * 3.0f) * 128.0f + 128.0f);
    auto Item = [&](const char *s, int y, bool sel) {
        DrawTextCentered(s, 26, 322, y + 2, 0, 0, 0);
        DrawTextCentered(s, 26, 320, y, 255, sel ? 0 : 255, sel ? 0 : 255);
    };
    auto Shadowed = [&](const char *s, int size, int x, int y, int maxW, int r, int g, int b) {
        DrawTextFit(s, size, x + 2, y + 2, maxW, 0, 0, 0);
        DrawTextFit(s, size, x, y, maxW, r, g, b);
    };

    if (state == 14) {
        DrawTextCentered("オンライン対戦", 28, 320, 170, pulseR, pulseG, pulseB);
        char line[160];
        switch (O.page) {
        case PAGE_MAIN: {
            snprintf(line, sizeof(line), "%s%s", Tr("名前："), g_settings.playerName);
            const char *items[5] = {"部屋を作る", "コードで参加", "ＬＡＮで探す", line, "戻る"};
            for (int i = 0; i < 5; i++) Item(items[i], 230 + i * 36, i == menuSel);
            break;
        }
        case PAGE_CODE:
        case PAGE_NAME: {
            bool name = O.page == PAGE_NAME;
            DrawTextCentered(name ? "名前を入力してください" : "招待コード または IPアドレス を入力してください", 20, 320,
                             240, 255, 255, 255);
            std::string shown = O.text + ((int)(f390 * 2.0f) % 2 ? "_" : " ");
            DrawTextCentered(shown.c_str(), 30, 322, 282, 0, 0, 0);
            DrawTextCentered(shown.c_str(), 30, 320, 280, 255, 255, 180);
            if (!name && !O.message.empty()) DrawTextCentered(O.message.c_str(), 18, 320, 330, 255, 120, 120);
            DrawTextCentered(name ? "Enter：決定　　Esc：戻る" : "Enter：接続　　Ctrl+V：貼り付け　　Esc：戻る", 16, 320, 420,
                             255, 250, 150);
            if (!name) DrawTextCentered("（コードの入力にはキーボードを使います）", 14, 320, 444, 200, 200, 200);
            break;
        }
        case PAGE_LAN: {
            DrawTextCentered("同じネットワークの部屋を探しています…", 18, 320, 215, 255, 255, 255);
            for (int i = 0; i < O.nFound; i++) {
                snprintf(line, sizeof(line), "%s  (%d/6)%s", O.found[i].name, O.found[i].players,
                         O.found[i].inMatch ? Tr("　試合中") : "");
                Item(line, 250 + i * 30, i == menuSel);
            }
            Item("戻る", 250 + O.nFound * 30 + 10, menuSel == O.nFound);
            break;
        }
        case PAGE_CONNECTING:
            DrawTextCentered("接続しています…", 26, 320, 260, 255, 255, 255);
            snprintf(line, sizeof(line), "%s:%u", plat::NetAddrString(O.host.ip).c_str(), O.host.port);
            DrawTextCentered(line, 18, 320, 300, 200, 200, 200);
            DrawTextCentered("Esc：キャンセル", 16, 320, 420, 255, 250, 150);
            break;
        case PAGE_MESSAGE:
            DrawTextCentered(O.message.c_str(), 24, 322, 262, 0, 0, 0);
            DrawTextCentered(O.message.c_str(), 24, 320, 260, 255, 140, 140);
            if (O.message == "接続できませんでした") {
                DrawTextCentered("コード・ホストのポート開放・ファイアウォールを確認してください", 16, 320, 310, 255, 255, 255);
            }
            DrawTextCentered("Ｘ：戻る", 16, 320, 420, 255, 250, 150);
            break;
        }
        return;
    }

    if (state != 15) return;
    bool host = O.role == ROLE_HOST;
    DrawTextCentered("ロビー", 28, 320, 10, pulseR, pulseG, pulseB);
    char line[200];
    if (host) {
        uint32_t ext = 0;
        int st = plat::NetPortMappingStatus(ext);
        if (ext) {
            snprintf(line, sizeof(line), "%s%s", Tr("招待コード："), EncodeCode(ext, O.port).c_str());
            Shadowed(line, 22, 30, 46, 580, 255, 255, 120);
        }
        snprintf(line, sizeof(line), "LAN: %s:%u", plat::NetAddrString(plat::NetLocalIP()).c_str(), O.port);
        Shadowed(line, 16, 30, 74, 580, 220, 220, 220);
        const char *status;
        char port[160];
        if (st == 0) status = "ルーターのポートを開いています…";
        else if (st == 1 && PrivateIp(ext)) status = "注意：回線がCGNATのため、インターネットから参加できない可能性があります";
        else if (st == 1) status = "ポート開放：成功（UPnP）";
        else if (ext) {
            snprintf(port, sizeof(port), Tr("自動ポート開放に失敗：ルーターで UDP %u を開放してください"), O.port);
            status = port;
        } else {
            status = "公開アドレスを取得できませんでした（LAN / VPN のみ）";
        }
        Shadowed(status, 16, 30, 94, 580, 255, st == 1 && !PrivateIp(ext) ? 255 : 170, st == 1 && !PrivateIp(ext) ? 255 : 120);
    } else {
        snprintf(line, sizeof(line), "%s%s:%u", Tr("接続先："), plat::NetAddrString(O.host.ip).c_str(), O.host.port);
        Shadowed(line, 16, 30, 74, 580, 220, 220, 220);
    }

    // Players.
    for (int s = 0; s < 6; s++) {
        const LobbyPlayer &p = O.lp[s];
        int y = 126 + s * 26;
        if (!p.used) {
            Shadowed("－", 18, 40, y, 200, 120, 120, 120);
            continue;
        }
        bool mine = s == O.mySlot;
        int g = mine ? 255 : 230, b = mine ? 120 : 230;
        Shadowed(p.name, 18, 40, y, 200, 255, g, b);
        Shadowed(p.team == 0 ? "チームＡ" : "チームＢ", 18, 250, y, 110, p.team == 0 ? 120 : 255, 200, p.team == 0 ? 255 : 120);
        Shadowed(kCharNames[p.chr % 6], 18, 370, y, 120, 255, 255, 255);
        Shadowed(s == 0 ? "ホスト" : p.ready ? "準備ＯＫ" : "準備中", 18, 500, y, 120, 255, s == 0 || p.ready ? 255 : 150,
                 s == 0 || p.ready ? 255 : 150);
    }

    // My settings.
    static const char *const sizes[3] = {"１対１", "２対２", "３対３"};
    static const char *const times[4] = {"５分×２（ハーフタイムあり）", "３分", "５分", "１０分"};
    const LobbyPlayer &me = O.lp[O.mySlot];
    int myTeam = host ? me.team : O.wantTeam, myChr = host ? me.chr : O.wantChr;
    if (myTeam < 0) myTeam = me.team;
    const char *labels[7];
    const char *values[7] = {};
    int n = 0;
    labels[n] = "チーム";
    values[n++] = myTeam == 0 ? "チームＡ" : "チームＢ";
    labels[n] = "キャラクター";
    values[n++] = kCharNames[myChr % 6];
    if (host) {
        labels[n] = "人数";
        values[n++] = sizes[O.teamSize - 1];
        labels[n] = "試合時間";
        values[n++] = times[O.timeSel];
        labels[n] = "操作";
        values[n++] = O.autoSwitch ? "一人のチームはボールに近いキャラに自動切替" : "選んだキャラで固定";
        labels[n++] = "試合開始";
    } else {
        labels[n] = "準備";
        values[n++] = O.wantReady ? "準備ＯＫ" : "準備中";
    }
    labels[n++] = "部屋を出る";
    for (int i = 0; i < n; i++) {
        int y = 284 + i * 24;
        bool sel = i == menuSel;
        int g = sel ? 0 : 255;
        if (!values[i]) {
            DrawTextCentered(labels[i], 22, 322, y + 2, 0, 0, 0);
            DrawTextCentered(labels[i], 22, 320, y, 255, g, g);
            continue;
        }
        Shadowed(labels[i], 20, 60, y, 170, 255, g, g);
        Shadowed(values[i], 20, 240, y, 380, 255, g, g);
    }
    if (host) {
        int waiting = 0;
        for (int s = 1; s < 6; s++)
            if (O.lp[s].used && !O.lp[s].ready) waiting++;
        if (waiting) DrawTextCentered("全員の準備ＯＫを待っています", 14, 320, 462, 255, 200, 120);
        else DrawTextCentered("人が片方のチームだけなら協力プレイ（ＣＯＭと対戦）、両チームなら対戦です", 14, 320, 462, 200, 200, 200);
    }
}
