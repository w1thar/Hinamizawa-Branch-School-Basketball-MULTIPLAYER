// Non-match game states.
//   1 title setup        0x4271d0     5 tip-off           0x41fe31
//   2 title / attract    0x427475     7 half time         0x4228f0
//   3 play mode select   0x427e4d     8 results           0x422fc2
//   4 team select        0x41e9c0     9 ending / credits  0x423d53
// State 6 (the match itself) lives in match.cpp.
#include <cmath>

#include "core/d3dmath.h"
#include "game/game.h"
#include "game/settings.h"

static float Atan2(float y, float x) { return (float)atan2((double)y, (double)x); }

static bool AnyActionPushed(const Game *g)
{
    return g->keyX == KEY_PUSH || g->keyZ == KEY_PUSH || g->keyC == KEY_PUSH || g->keySpace == KEY_PUSH ||
           g->keyEnter == KEY_PUSH;
}

// ---- 1: set up the title scene --------------------------------------------------------------
void Game::State1_Title()
{
    players[0]->SetPos(-40.0f, 0.0f, -30.0f, 1.035f);
    players[1]->SetPos(-44.0f, 0.0f, -26.0f, 0.835f);
    players[2]->SetPos(-46.0f, 0.0f, -24.0f, 0.735f);
    players[3]->SetPos(-48.0f, 0.0f, -22.0f, 0.585f);
    players[4]->SetPos(-42.0f, 0.0f, -28.0f, 0.885f);
    players[5]->SetPos(-50.0f, 0.0f, -20.0f, 0.485f);
    for (int i = 0; i < 6; i++) players[i]->Motion_4312d5();
    for (int i = 0; i < 6; i++) {   // mod: 1v1 / 2v2 benches and multiplayer end here
        players[i]->benched = false;
        players[i]->pickedB = false;
        ctrl[i] = -1;
    }
    mpActive = mpVersus = mpSplit = false;
    mpHumans = 0;
    mpMenuOwner = -1;
    camPos = Vec3(-48.0f, 20.0f, -28.0f);
    camDir = Vec3(1.0f, 0.0f, 1.0f);
    v24c.y = 6.0f;
    f258 = 0.0f;
    f25c = 0.0f;
    f260 = 0.0f;
    f264 = 0.0f;
    i3b0 = 0;
    sound->OpenMp3("WAV\\LP\\1.mp3");
    f394 = 1.0f;
    f390 = 0.0f;
    b3a4 = false;
    b3a7 = false;
    i3ac = 0;
    i268 = -1;
    state = 2;
}

// ---- 2: attract sequence; free camera after 32s, restarts at 140s -----------------------------
void Game::State2()
{
    float yawAngle = Atan2(camDir.x, camDir.z);
    v24c.y = 6.0f;
    f25c = 0.0f;
    f390 = f390 + dt;
    if (7.0f < f390 && f390 < 8.0f && !b398) {
        b398 = true;
        sound->Play(0);
    }
    if (12.0f < f390 && f390 < 17.0f) {
        if (0.01f < f394) f394 = f394 - dt * 0.2f;
        b398 = false;
    }
    if (17.5f < f390 && f390 < 18.5f && !b399) {
        b399 = true;
        sound->PlayMp3();
        for (int i = 0; i < 6; i++) players[i]->animTime = 2.0f;
    }
    if (17.0f < f390 && f390 < 22.3f) camPos.y = camPos.y - dt * 3.0f;
    if (24.8 < f390 && f390 < 25.3f) {
        b399 = false;
        camPos.x = camPos.x - sinf(yawAngle) * 13.0f * dt;
        camPos.z = camPos.z - cosf(yawAngle) * 13.0f * dt;
    }
    if (28.8f < f390 && f390 < 29.3f) {
        camPos.x = camPos.x - sinf(yawAngle) * 13.0f * dt;
        camPos.z = camPos.z - cosf(yawAngle) * 13.0f * dt;
    }
    if (29.3f < f390 && f390 < 31.5f) camPos.y = camPos.y + dt;
    if (32.0f < f390 && f390 < 140.0f) {
        b39a = 1;
        if (keyUp == KEY_HOLD || keyNum8 == KEY_HOLD) {
            camPos.x = sinf(yawAngle) * 25.0f * dt + camPos.x;
            camPos.z = cosf(yawAngle) * 25.0f * dt + camPos.z;
        }
        if (keyDown == KEY_HOLD || keyNum2 == KEY_HOLD) {
            camPos.x = camPos.x - sinf(yawAngle) * 25.0f * dt;
            camPos.z = camPos.z - cosf(yawAngle) * 25.0f * dt;
        }
        if (keyRight == KEY_HOLD || keyNum6 == KEY_HOLD) {
            yawAngle = dt * 2.0f + yawAngle;
            camDir.x = sinf(yawAngle);
            camDir.z = cosf(yawAngle);
        }
        if (keyLeft == KEY_HOLD || keyNum4 == KEY_HOLD) {
            yawAngle = yawAngle - dt * 2.0f;
            camDir.x = sinf(yawAngle);
            camDir.z = cosf(yawAngle);
        }
    }
    if (135.0f < f390 && f390 < 140.0f && f394 < 0.98f) f394 = dt * 0.2f + f394;
    if (140.0f < f390) {
        state = 1;
        sound->StopMp3();
        b39a = 0;
    }
    if (AnyActionPushed(this)) {
        sound->Play(1);
        for (int i = 0; i < 6; i++) {
            players[i]->Motion_Stand();
            players[i]->animTime = 0.0f;
        }
        // Keep the free camera if it is inside the area in front of the stands, else reset it.
        if (-50.0f <= camPos.x || camPos.x <= -65.0f || 10.0f <= camPos.y || camPos.y <= 0.0f ||
            -30.0f <= camPos.z || camPos.z <= -45.0f) {
            camPos.x = -57.0f;
            camPos.z = -37.0f;
            camPos.y = 6.0f;
        }
        camDir = Vec3(1.0f, 0.0f, 1.0f);
        sound->PlayMp3();
        sound->OpenMp3("WAV\\LP\\2.mp3");
        f390 = 0.0f;
        sound->PlayMp3();
        f394 = 0.0f;
        f400 = 4.0f;
        b398 = false;
        b399 = false;
        b39a = 1;
        state = 3;
    }
}

// ---- 3: play mode select (0 normal, 1 club, 2 practice); faces change with the selection -------
static void SetFaces(Game *g, int t0, int t1, int t2, int t3)
{
    for (int i = 0; i < 6; i++) {
        g->players[i]->SetTex0(t0);
        g->players[i]->SetTex1(t1);
        g->players[i]->SetTex2(t2);
        g->players[i]->SetTex3(t3);
        g->f400 = 4.0f;
    }
}

void Game::State3()
{
    f390 = f390 + dt;
    if (v24c.y < 1.0f && -1.0f < f25c && f25c < 7.0f) f25c = 25.0f;   // keep the ball bouncing
    if ((keyUp == KEY_PUSH || keyNum8 == KEY_PUSH) && 0 < i3b0) {
        i3b0 = i3b0 - 1;
        sound->Play(2);
        if (i3b0 == 0) SetFaces(this, 0, 0, 0, 0);
        if (i3b0 == 1) SetFaces(this, 0, 1, 1, -1);
        if (i3b0 == 2) SetFaces(this, 1, 0, 0, 0);   // mod: reachable from below now
        if (i3b0 >= 3) SetFaces(this, 0, 0, 0, 0);
    }
    if ((keyDown == KEY_PUSH || keyNum2 == KEY_PUSH) && i3b0 < MODE_LAST) {
        i3b0 = i3b0 + 1;
        sound->Play(2);
        if (i3b0 == 1) SetFaces(this, 0, 1, 1, -1);
        if (i3b0 == 2) SetFaces(this, 1, 0, 0, 0);
        if (i3b0 >= 3) SetFaces(this, 0, 0, 0, 0);
    }
    // Mod: entries below the original three open the mod's own screens.
    if (b39a != 0 && i3b0 == MODE_LOCAL && AnyActionPushed(this)) {
        sound->Play(1);
        menuSel = 0;
        // Default devices: 1P on the first gamepad (else the keyboard), 2P on the next one.
        plat::GamepadInfo pads[16];
        int n = plat::ListGamepads(pads, 16);
        auto connected = [&](int dev) {
            if (dev == DEVICE_KEYBOARD) return true;
            for (int i = 0; i < n; i++)
                if (pads[i].id == dev) return true;
            return false;
        };
        if (!connected(localDev[0]) || localDev[0] == DEVICE_NONE) localDev[0] = n > 0 ? pads[0].id : DEVICE_KEYBOARD;
        if (!connected(localDev[1]) || localDev[1] == DEVICE_NONE || localDev[1] == localDev[0]) {
            localDev[1] = DEVICE_KEYBOARD;
            for (int i = 0; i < n && localDev[1] == localDev[0]; i++)
                if (pads[i].id != localDev[0]) localDev[1] = pads[i].id;
            if (localDev[1] == localDev[0]) localDev[1] = DEVICE_NONE;
        }
        state = 13;
        return;
    }
    if (b39a != 0 && i3b0 == MODE_SETTINGS && AnyActionPushed(this)) {
        sound->Play(1);
        menuSel = 0;
        state = 11;
        return;
    }
    if (b39a != 0 && (i3b0 == MODE_NORMAL || i3b0 == MODE_CLUB) && AnyActionPushed(this)) {
        sound->Play(1);
        menuSel = teamSize - 1;
        state = 12;
        return;
    }
    if (AnyActionPushed(this)) {
        if (i3b0 == MODE_PRACTICE) teamSize = 3;   // the practice drills are built for 3 players
        StartTeamSelect();
    }
    if (b39a == 0 && 0.5f < f390) {
        camPos = Vec3(0.0f, 3.5f, -30.0f);
        camDir = Vec3(0.0f, 0.0f, 1.0f);
        f390 = 0.0f;
        f394 = 0.0f;
        v24c.y = 0.7f;
        f25c = 0.0f;
        state = 4;
        i3b8 = 0;
        sound->PlayMp3();
        for (int i = 0; i < 6; i++) {
            players[i]->SetTex0(0);
            players[i]->SetTex1(0);
            players[i]->SetTex2(0);
            players[i]->SetTex3(0);
            players[i]->Motion_Stand();
            players[i]->SetPos(2.0f, 0.0f, -30.0f, 0.0f);
            players[i]->b154 = false;
            players[i]->pickedB = false;
            i3b4 = 0;
        }
        players[i3b4]->SetPos(-2.0f, 0.0f, -20.0f, f390);
        if (mpActive) MpBeginPicks();
    }
}

// Mode chosen: fade out, then State3 moves on to team select (the original's confirm in state 3).
void Game::StartTeamSelect()
{
    sound->Play(1);
    f390 = 0.0f;
    f394 = 1.0f;
    b39a = 0;
    sound->OpenMp3("WAV\\LP\\mion.mp3");
    state = 3;
}

// Mod, 1v1 / 2v2: team[0..n-1] were picked by YOU. COM gets n random players from the rest; the
// others sit out (benched, hidden) and fill the unused team[] entries.
void Game::PickSmallTeams()
{
    int rest[6], nRest = 0;
    for (int i = 0; i < 6; i++)
        if (!players[i]->b154) rest[nRest++] = i;
    for (int i = nRest - 1; i > 0; i--) {   // shuffle
        int j = crt_rand() % (i + 1);
        int t = rest[i];
        rest[i] = rest[j];
        rest[j] = t;
    }
    int r = 0;
    for (int k = 0; k < teamSize; k++) team[3 + k] = rest[r++];
    for (int k = teamSize; k < 3; k++) team[k] = rest[r++];
    for (int k = teamSize; k < 3; k++) team[3 + k] = rest[r++];
    for (int k = 0; k < teamSize; k++) {
        Player *p = players[team[3 + k]];
        float yaw = Atan2((float)k * 2.0f + (-3.0f - (float)k * 3.0f) + 2.0f, -30.0f);
        p->SetPos((float)k * 2.0f + 2.0f, 0.0f, -30.0f, yaw);
        p->Motion_42dfc0();
    }
    for (int k = teamSize; k < 3; k++) {
        players[team[k]]->benched = true;
        players[team[3 + k]]->benched = true;
    }
}

// ---- 12 (mod): team size for Normal / Club mode. Up/Down select, X confirms -------------------
void Game::State12_TeamSize()
{
    f390 = f390 + dt;
    if (v24c.y < 1.0f && -1.0f < f25c && f25c < 7.0f) f25c = 25.0f;   // same backdrop as state 3

    const int ITEMS = 4;   // 1v1, 2v2, 3v3, back
    if ((keyUp == KEY_PUSH || keyNum8 == KEY_PUSH) && menuSel > 0) {
        menuSel--;
        sound->Play(2);
    }
    if ((keyDown == KEY_PUSH || keyNum2 == KEY_PUSH) && menuSel < ITEMS - 1) {
        menuSel++;
        sound->Play(2);
    }
    if (!AnyActionPushed(this)) return;
    if (menuSel == ITEMS - 1) {
        sound->Play(1);
        state = 3;
        return;
    }
    teamSize = menuSel + 1;
    StartTeamSelect();
}

// ---- 13 (mod): local multiplayer setup ------------------------------------------------------------
// Rows: 1P device, 2P device, mode (co-op / versus), team size, start, back. Up/Down select,
// Left/Right change, X confirms. Anyone's device can drive this screen.
void Game::State13_LocalSetup()
{
    f390 = f390 + dt;
    if (v24c.y < 1.0f && -1.0f < f25c && f25c < 7.0f) f25c = 25.0f;   // same backdrop as state 3

    const int ITEMS = 6;
    if ((keyUp == KEY_PUSH || keyNum8 == KEY_PUSH) && menuSel > 0) {
        menuSel--;
        sound->Play(2);
    }
    if ((keyDown == KEY_PUSH || keyNum2 == KEY_PUSH) && menuSel < ITEMS - 1) {
        menuSel++;
        sound->Play(2);
    }
    int dir = 0;
    if (keyLeft == KEY_PUSH || keyNum4 == KEY_PUSH) dir = -1;
    if (keyRight == KEY_PUSH || keyNum6 == KEY_PUSH) dir = 1;
    if (menuSel <= 3 && AnyActionPushed(this)) dir = 1;   // X also cycles the value

    int minSize = localVersus ? 1 : 2;   // co-op needs room for both players on one team
    if (localSize < minSize) localSize = minSize;
    if (dir != 0) {
        if (menuSel <= 1) {
            // Keyboard, then each connected pad.
            int opts[17], n = 0;
            opts[n++] = DEVICE_KEYBOARD;
            plat::GamepadInfo pads[16];
            int np = plat::ListGamepads(pads, 16);
            for (int i = 0; i < np; i++) opts[n++] = pads[i].id;
            int cur = 0;
            for (int i = 0; i < n; i++)
                if (opts[i] == localDev[menuSel]) cur = i;
            cur = (cur + dir + n) % n;
            localDev[menuSel] = opts[cur];
        } else if (menuSel == 2) {
            localVersus = !localVersus;
            minSize = localVersus ? 1 : 2;
            if (localSize < minSize) localSize = minSize;
        } else if (menuSel == 3) {
            localSize += dir;
            if (localSize > 3) localSize = minSize;
            if (localSize < minSize) localSize = 3;
        }
        if (menuSel <= 3) sound->Play(2);
    }
    if (menuSel == 5 && AnyActionPushed(this)) {
        sound->Play(1);
        state = 3;
        return;
    }
    bool valid = localDev[0] != DEVICE_NONE && localDev[1] != DEVICE_NONE && localDev[0] != localDev[1];
    if (menuSel == 4 && AnyActionPushed(this)) {
        if (!valid) {
            sound->Play(3);
            return;
        }
        mpActive = true;
        mpVersus = localVersus;
        mpSplit = true;
        mpHumans = 2;
        for (int h = 0; h < 6; h++) hum[h] = MpHuman();
        hum[0].device = localDev[0];
        hum[1].device = localDev[1];
        for (int &c : ctrl) c = -1;
        teamSize = localSize;
        i3b0 = MODE_NORMAL;
        SetFaces(this, 0, 0, 0, 0);
        StartTeamSelect();
    }
}

// Team select order. Co-op: 1P and 2P each pick their own character, then (3v3) 1P picks the third
// teammate; COM gets the rest. Versus: 1P and 2P take turns, the first pick of each is their own.
void Game::MpBeginPicks()
{
    mpPickCount = 0;
    if (mpVersus) {
        for (int k = 0; k < teamSize; k++) {
            mpPicks[mpPickCount++] = {true, 0, k == 0 ? 0 : -1};
            mpPicks[mpPickCount++] = {false, 1, k == 0 ? 1 : -1};
        }
    } else {
        mpPicks[mpPickCount++] = {true, 0, 0};
        mpPicks[mpPickCount++] = {true, 1, 1};
        for (int k = 2; k < teamSize; k++) mpPicks[mpPickCount++] = {true, 0, -1};
    }
    mpPickIdx = 0;
    mpMenuOwner = mpPicks[0].owner;
    for (int h = 0; h < mpHumans; h++) hum[h].player = -1;
}

// The candidate i3b4 was chosen for the current pick.
void Game::MpPickChosen()
{
    const MpPick &pk = mpPicks[mpPickIdx];
    Player *pl = players[i3b4];
    int nA = 0, nB = 0;
    for (int i = 0; i < 6; i++) {
        if (players[i]->b154) nA++;
        if (players[i]->pickedB) nB++;
    }
    if (pk.teamA) {
        pl->b154 = true;
        pl->yaw = Atan2(((float)nA * 6.0f + 3.0f) - 2.0f, -20.0f);
        team[nA] = i3b4;
    } else {
        pl->pickedB = true;
        pl->yaw = Atan2(-((float)nB * 6.0f + 3.0f) - 2.0f, -20.0f);
        team[3 + nB] = i3b4;
    }
    pl->Motion_42dfc0();
    if (pk.lock >= 0) hum[pk.lock].player = i3b4;
    mpPickIdx++;

    if (mpPickIdx < mpPickCount) {
        mpMenuOwner = mpPicks[mpPickIdx].owner;
        do {
            i3b4 = i3b4 + 1;
            if (5 < i3b4) i3b4 = 0;
        } while (players[i3b4]->b154 || players[i3b4]->pickedB);
        players[i3b4]->SetPos(-2.0f, 0.0f, -20.0f, f390);
        return;
    }

    // All picks made. Co-op: COM gets teamSize of the rest (random for 1v1 / 2v2, as in
    // single player; all three for 3v3). Whoever is left sits out.
    mpMenuOwner = -1;
    if (!mpVersus) {
        int rest[6], n = 0;
        for (int i = 0; i < 6; i++)
            if (!players[i]->b154) rest[n++] = i;
        for (int i = n - 1; i > 0; i--) {
            int j = crt_rand() % (i + 1);
            int t = rest[i];
            rest[i] = rest[j];
            rest[j] = t;
        }
        for (int k = 0; k < teamSize; k++) {
            team[3 + k] = rest[k];
            Player *p = players[rest[k]];
            float yaw = Atan2((float)k * 2.0f + (-3.0f - (float)k * 3.0f) + 2.0f, -30.0f);
            p->SetPos((float)k * 2.0f + 2.0f, 0.0f, -30.0f, yaw);
            p->Motion_42dfc0();
        }
    }
    // Unused team[] entries take the players sitting out.
    int r = 0;
    int out[6], nOut = 0;
    for (int i = 0; i < 6; i++) {
        bool inA = players[i]->b154;
        bool inB = false;
        for (int k = 0; k < teamSize; k++)
            if (team[3 + k] == i) inB = true;
        if (!inA && !inB) out[nOut++] = i;
    }
    for (int k = teamSize; k < 3; k++) team[k] = out[r++];
    for (int k = teamSize; k < 3; k++) team[3 + k] = out[r++];
    for (int k = teamSize; k < 3; k++) {
        players[team[k]]->benched = true;
        players[team[3 + k]]->benched = true;
    }
    for (int i = 0; i < 6; i++) players[i]->pickedB = false;   // team B is now simply !b154
    for (int &c : ctrl) c = -1;
    for (int h = 0; h < mpHumans; h++)
        if (hum[h].player >= 0) ctrl[hum[h].player] = h;
    i3b8 = 3;
}

// The tip-off jumpers (slot 2 / 5) should be humans where possible, so they get to jump.
void Game::MpPlaceHumansInCentre()
{
    for (int side = 0; side < 2; side++) {
        int *s = slot + side * 3;
        if (ctrl[s[2]] >= 0) continue;
        for (int k = 0; k < 2; k++) {
            if (ctrl[s[k]] >= 0 && !players[s[k]]->benched) {
                int t = s[k];
                s[k] = s[2];
                s[2] = t;
                break;
            }
        }
    }
}

// Scoreboard names: YOU / COM, or 1P / 2P in a versus match.
const char *Game::TeamLabel(bool teamA) const
{
    if (mpActive && mpVersus) return teamA ? "１Ｐ" : "２Ｐ";
    return teamA ? "ＹＯＵ" : "ＣＯＭ";
}

// ---- 11 (mod): settings. Up/Down select, Left/Right change, X/Enter on "Back" saves -------------
void Game::State11_Settings()
{
    f390 = f390 + dt;
    if (v24c.y < 1.0f && -1.0f < f25c && f25c < 7.0f) f25c = 25.0f;   // same backdrop as state 3
    if (SettingsMenu()) state = 3;
}

// The settings page, shared by the title menu (state 11) and the pause menu.
bool Game::SettingsMenu()
{
    const int ITEMS = 5;   // master, music, sfx, language, back
    if ((keyUp == KEY_PUSH || keyNum8 == KEY_PUSH) && menuSel > 0) {
        menuSel--;
        sound->Play(2);
    }
    if ((keyDown == KEY_PUSH || keyNum2 == KEY_PUSH) && menuSel < ITEMS - 1) {
        menuSel++;
        sound->Play(2);
    }
    int dir = 0;
    if (keyLeft == KEY_PUSH || keyNum4 == KEY_PUSH) dir = -1;
    if (keyRight == KEY_PUSH || keyNum6 == KEY_PUSH) dir = 1;
    if (dir != 0) {
        int *vol = menuSel == 0 ? &g_settings.masterVolume : menuSel == 1 ? &g_settings.musicVolume
                 : menuSel == 2 ? &g_settings.sfxVolume : nullptr;
        if (vol) {
            *vol += dir * 10;
            if (*vol < 0) *vol = 0;
            if (*vol > 100) *vol = 100;
            Settings_ApplyAudio();
            sound->Play(2);   // audible feedback at the new volume
        } else if (menuSel == 3) {
            g_settings.language = g_settings.language == LANG_ENGLISH ? LANG_JAPANESE : LANG_ENGLISH;
            sound->Play(2);
        }
    }
    if (menuSel == 3 && AnyActionPushed(this)) {
        g_settings.language = g_settings.language == LANG_ENGLISH ? LANG_JAPANESE : LANG_ENGLISH;
        sound->Play(2);
    }
    // "Back", or ESC / Options anywhere on the page.
    if ((menuSel == ITEMS - 1 && AnyActionPushed(this)) || keyPause == KEY_PUSH) {
        Settings_Save();
        sound->Play(1);
        return true;
    }
    return false;
}

// ---- pause menu (mod): ESC / Options freezes the game ------------------------------------------
enum { PAUSE_RESUME, PAUSE_SETTINGS, PAUSE_TITLE, PAUSE_QUIT };

int Game::PauseItems(int *ids)
{
    int n = 0;
    ids[n++] = PAUSE_RESUME;
    ids[n++] = PAUSE_SETTINGS;
    if (state >= 4 && state <= 9) ids[n++] = PAUSE_TITLE;   // not on the title screens themselves
    ids[n++] = PAUSE_QUIT;
    return n;
}

bool Game::UpdatePause()
{
    if (!paused) {
        // In the title's settings page ESC just goes back (handled by SettingsMenu).
        if (keyPause != KEY_PUSH || state < 2 || state == 11) return false;
        paused = true;
        pausePage = 0;
        pauseSel = 0;
        sound->Play(2);
        return true;
    }
    if (pausePage == 1) {
        if (SettingsMenu()) pausePage = 0;
        return true;
    }
    int ids[4];
    int n = PauseItems(ids);
    if (pauseSel >= n) pauseSel = n - 1;
    if ((keyUp == KEY_PUSH || keyNum8 == KEY_PUSH) && pauseSel > 0) {
        pauseSel--;
        sound->Play(2);
    }
    if ((keyDown == KEY_PUSH || keyNum2 == KEY_PUSH) && pauseSel < n - 1) {
        pauseSel++;
        sound->Play(2);
    }
    int pick = -1;
    if (keyPause == KEY_PUSH || keyC == KEY_PUSH) pick = PAUSE_RESUME;   // ESC / Options / Circle: back to the game
    else if (keyX == KEY_PUSH || keyZ == KEY_PUSH || keySpace == KEY_PUSH || keyEnter == KEY_PUSH) pick = ids[pauseSel];
    switch (pick) {
    case PAUSE_RESUME:
        sound->Play(1);
        paused = false;
        inputLock = true;
        break;
    case PAUSE_SETTINGS:
        sound->Play(1);
        pausePage = 1;
        menuSel = 0;
        break;
    case PAUSE_TITLE:
        sound->Play(1);
        paused = false;
        inputLock = true;
        ReturnToTitle();
        break;
    case PAUSE_QUIT:
        quit = true;
        break;
    }
    return paused;
}

// Abandons the current match: the same reset the original does after a lost match (state 8).
void Game::ReturnToTitle()
{
    sound->StopMp3();
    LoadSoundSet(0);
    for (int i = 0; i < 6; i++) {
        players[i]->SetTex1(0);
        players[i]->SetTex2(0);
        players[i]->b154 = false;
        players[i]->i190 = 7;
        players[i]->Motion_Stand();
    }
    camPos = Vec3(0.0f, 0.0f, 0.0f);
    camDir = Vec3(1.0f, 0.0f, 1.0f);
    v240 = Vec3(0.0f, 6.0f, 0.0f);
    v24c = Vec3(0.0f, 6.0f, 0.0f);
    f260 = 0.0f;
    f264 = 0.0f;
    f258 = 0.0f;
    f25c = 0.0f;
    i268 = -1;
    v370 = Vec3(0.0f, 0.0f, 0.0f);
    lightDir = Vec3(1.0f, -1.0f, 1.0f);
    v37c = Vec3(0.0f, 0.0f, 0.0f);
    f390 = 0.0f;
    f394 = 1.0f;
    b398 = false;
    b399 = false;
    b39a = 0;
    b3a4 = false;
    b3a5 = false;
    b3a6 = 0;
    b3a7 = false;
    i3ac = 0;
    i3b8 = 0;
    f3bc = 0.0f;
    i39c = 0;
    f3a0 = -1.0f;
    i3b0 = 0;
    i3b4 = 0;
    f3e0 = 300.0f;
    i3d8 = 0;
    i3dc = 0;
    f400 = 4.0f;
    i40c = 0;
    b414 = false;
    i418 = -1;
    state = 1;
}

// ---- 4: team select. i3b8 = number picked (0..2), 3 = "OK?" yes, 4 = no, 5 = confirmed --------
void Game::State4()
{
    f390 = f390 + dt;
    f260 = f260 - dt;
    if (i3b8 < 3) players[i3b4]->yaw = f390;   // candidate spins on the spot

    auto showCandidate = [&](int step) {
        players[i3b4]->SetPos(2.0f, 0.0f, -30.0f, 0.0f);
        do {
            i3b4 += step;
            if (5 < i3b4) i3b4 = 0;
            if (i3b4 < 0) i3b4 = 5;
        } while (players[i3b4]->b154 || players[i3b4]->pickedB);
        players[i3b4]->SetPos(-2.0f, 0.0f, -20.0f, f390);
    };
    if (i3b8 < 3 && (keyRight == KEY_PUSH || keyNum6 == KEY_PUSH)) {
        sound->Play(2);
        showCandidate(1);
    }
    if (i3b8 < 3 && (keyLeft == KEY_PUSH || keyNum4 == KEY_PUSH)) {
        sound->Play(2);
        showCandidate(-1);
    }
    if (i3b8 < 3) {
        if (keyRight == KEY_HOLD || keyNum6 == KEY_HOLD) i39c = -2;
        else if (keyLeft == KEY_HOLD || keyNum4 == KEY_HOLD) i39c = -3;
        else i39c = -1;
    } else {
        i39c = 0;
    }

    if (i3b8 < 3 && mpActive && AnyActionPushed(this)) {
        sound->Play(4);
        MpPickChosen();
    } else if (i3b8 < 3 && AnyActionPushed(this)) {
        sound->Play(4);
        if (i3b8 < teamSize - 1) {
            players[i3b4]->b154 = true;
            players[i3b4]->yaw = Atan2(((float)i3b8 * 6.0f + 3.0f) - 2.0f, -20.0f);
            players[i3b4]->Motion_42dfc0();
            if (teamSize < 3) team[i3b8] = i3b4;   // mod: smaller teams fill team[] in pick order
            else if (i3b8 == 0) team[2] = i3b4;
            else team[0] = i3b4;
            i3b8 = i3b8 + 1;
            do {
                i3b4 = i3b4 + 1;
                if (5 < i3b4) i3b4 = 0;
            } while (players[i3b4]->b154);
            players[i3b4]->SetPos(-2.0f, 0.0f, -20.0f, f390);
        } else {
            players[i3b4]->b154 = true;
            players[i3b4]->yaw = Atan2(4.0f, -20.0f);
            players[i3b4]->Motion_42dfc0();
            if (teamSize < 3) {
                team[teamSize - 1] = i3b4;
                PickSmallTeams();
                i3b8 = 3;
            } else {
                team[1] = i3b4;
                i3b8 = 0;
                for (int i = 0; i < 6; i++) {
                    if (!players[i]->b154) {
                        float yaw = Atan2((float)i3b8 * 2.0f + (-3.0f - (float)i3b8 * 3.0f) + 2.0f, -30.0f);
                        players[i]->SetPos((float)i3b8 * 2.0f + 2.0f, 0.0f, -30.0f, yaw);
                        players[i]->Motion_42dfc0();
                        team[3 + i3b8] = i;
                        i3b8 = i3b8 + 1;
                    }
                }
                i3b8 = 3;
            }
        }
    }

    // Picked players (and everyone once the teams are complete) walk onto the court.
    for (int i = 0; i < 6; i++) {
        Player *p = players[i];
        if (2 < i3b8 || p->b154 || p->pickedB) {
            if (p->pos.z <= 0.0f) {
                p->pos.x = p->pos.x - sinf(p->yaw) * p->stat168 * dt;
                p->pos.z = p->pos.z - cosf(p->yaw) * p->stat168 * dt;
            } else {
                p->yaw = 0.0f;
                p->Motion_Stand();
            }
        }
    }
    if (2 < i3b8 && camPos.z <= -20.0f) {
        camPos.z = dt * 2.0f + camPos.z;
        camPos.y = dt * 0.5f + camPos.y;
    }
    if (-20.0f < camPos.z && (keyUp == KEY_PUSH || keyNum8 == KEY_PUSH)) {
        i3b8 = 3;
        sound->Play(2);
    }
    if (-20.0f < camPos.z && (keyDown == KEY_PUSH || keyNum2 == KEY_PUSH)) {
        i3b8 = 4;
        sound->Play(2);
    }
    if (i3b8 == 3 && -20.0f < camPos.z && AnyActionPushed(this)) {
        sound->Play(5);
        i3b8 = 5;
        f390 = 0.0f;
        f394 = 1.0f;
        if (i3b0 == 2) sound->OpenMp3("WAV\\LP\\Rika.mp3");
        else sound->OpenMp3("WAV\\LP\\4.mp3");
    }
    if (i3b8 == 4 && AnyActionPushed(this)) {
        state = 1;
        sound->Play(2);
    }
    if (-20.0f < camPos.z) b3a4 = true;
    if (i3b8 == 5 && 1.0f < f390 && !b398) {
        b398 = true;
        sound->Play(3);
    }
    if (i3b8 == 5 && 3.0f < f390) {
        b3a6 = 0;
        f390 = 0.0f;
        i3b8 = 5;
        i418 = 0;
        for (int i = 0; i < 6; i++) slot[i] = team[i];
        if (teamSize < 3) {
            // Mod: the n players in the match take slots 3-n..2 (and 6-n..5) so the centre, who
            // jumps at the tip-off, always plays; Satoko / Rika only jump when they must.
            for (int side = 0; side < 2; side++) {
                int *t = team + side * 3, *s = slot + side * 3;
                for (int k = 0; k < 3; k++) s[k] = t[(k + teamSize) % 3];
                if (teamSize == 2 && (s[2] == 3 || s[2] == 4) && s[1] != 3 && s[1] != 4) {
                    int tmp = s[1];
                    s[1] = s[2];
                    s[2] = tmp;
                }
            }
        }
        // Satoko (3) and Rika (4) never take the centre (slot 2 / 5): rotate the line-up.
        while (teamSize == 3 && (slot[2] == 3 || slot[2] == 4)) {
            i3fc = slot[2];
            slot[2] = slot[1];
            slot[1] = slot[0];
            slot[0] = i3fc;
        }
        while (teamSize == 3 && (slot[5] == 3 || slot[5] == 4)) {
            i3fc = slot[5];
            slot[5] = slot[4];
            slot[4] = slot[3];
            slot[3] = i3fc;
        }
        if (mpActive) MpPlaceHumansInCentre();
        if (i3b0 == 2) {
            // Practice: skip the tip-off, YOU start with the ball.
            players[slot[0]]->SetPos(-7.0f, 0.0f, -7.0f, -2.355f);
            players[slot[1]]->SetPos(-7.0f, 0.0f, 7.0f, -0.785f);
            players[slot[2]]->SetPos(2.0f, 0.0f, 0.0f, 1.571f);
            players[slot[3]]->SetPos(0.0f, 0.0f, 23.0f, 0.0f);
            players[slot[4]]->SetPos(-3.0f, 0.0f, 23.0f, 0.0f);
            players[slot[5]]->SetPos(3.0f, 0.0f, 23.0f, 0.0f);
            sound->PlayMp3();
            LoadSoundSet(1);
            b398 = false;
            b3a5 = true;
            b3a4 = true;
            b3a7 = true;
            i39c = 0;
            f3e0 = 90.0f;
            b414 = false;
            f394 = 0.0f;
            f260 = 0.0f;
            f258 = 0.0f;
            i268 = slot[2];
            f3a0 = 0.0f;
            for (int i = 0; i < 6; i++) {
                players[slot[i]]->Motion_Stand();
                players[slot[i]]->i190 = 7;
            }
            players[slot[2]]->i190 = 0;
            camPos = Vec3(0.0f, 12.0f, -20.0f);
            camDir = Vec3(0.0f, -0.5f, 1.0f);
            i3b8 = 0;
            i3ac = 1;
            i404 = slot[2];
            i40c = 0;
            b414 = false;
            state = 6;
        } else {
            state = 5;
        }
    }
}

// ---- 5: tip-off. Camera spirals down, then a jump ball between slot 2 (YOU) and slot 5 (COM) ----
void Game::State5()
{
    f390 = f390 + dt;
    if (i3b8 == 5) {
        sound->PlayMp3();
        LoadSoundSet(1);
        b398 = false;
        b3a5 = true;
        b3a4 = true;
        i39c = 0;
        f3e0 = i3b0 == 2 ? 180.0f : 300.0f;   // half length in seconds
        b414 = false;
        f394 = 0.0f;
        camPos.y = 155.0f;
        f260 = 0.0f;
        v24c.y = 0.7f;
        i268 = -1;
        f41c = 0.0f;
        for (int i = 0; i < 6; i++) {
            players[i]->i190 = 0;
            players[i]->Motion_Stand();
            players[i]->SetTex3(0);
            players[i]->SetTex2(0);
            players[i]->SetTex1(0);
            players[i]->SetTex0(0);
        }
        if (b3a6 == 0) {
            i3d8 = 0;
            i3dc = 0;
            players[slot[0]]->SetPos(7.0f, 0.0f, -7.0f, 2.355f);
            players[slot[1]]->SetPos(7.0f, 0.0f, 7.0f, 0.785f);
            players[slot[2]]->SetPos(-2.0f, 0.0f, 0.0f, -1.571f);
            players[slot[3]]->SetPos(-7.0f, 0.0f, -7.0f, -2.355f);
            players[slot[4]]->SetPos(-7.0f, 0.0f, 7.0f, -0.785f);
            players[slot[5]]->SetPos(2.0f, 0.0f, 0.0f, 1.571f);
        } else {
            players[slot[0]]->SetPos(-7.0f, 0.0f, -7.0f, -2.355f);
            players[slot[1]]->SetPos(-7.0f, 0.0f, 7.0f, -0.785f);
            players[slot[2]]->SetPos(2.0f, 0.0f, 0.0f, 1.571f);
            if (i3b0 == 2) {
                players[slot[3]]->SetPos(-2.0f, 0.0f, 23.0f, 0.0f);
                players[slot[4]]->SetPos(2.0f, 0.0f, 23.0f, 0.0f);
            } else {
                players[slot[3]]->SetPos(7.0f, 0.0f, -7.0f, 2.355f);
                players[slot[4]]->SetPos(7.0f, 0.0f, 7.0f, 0.785f);
            }
            players[slot[5]]->SetPos(-2.0f, 0.0f, 0.0f, -1.571f);
        }
        i3b8 = 0;
    }

    if (camPos.y > 65.0f && i3b8 == 0) {
        camPos.y = camPos.y - dt * 30.0f;
        camPos.x = sinf((f390 - 3.0f) * 1.57f) * 0.001f;
        camPos.z = cosf((f390 - 3.0f) * 1.57f) * 0.001f;
        camDir.x = -camPos.x;
        camDir.z = -camPos.z;
        camDir.y = 5.0f - camPos.y;
    } else if (camPos.y > 5.0f && i3b8 == 0) {
        camPos.y = camPos.y - dt * 30.0f;
        camPos.x = sinf((f390 - 3.0f) * 1.57f) * ((f390 - 3.0f) * 10.0f);
        camPos.z = cosf((f390 - 3.0f) * 1.57f) * ((f390 - 3.0f) * 10.0f);
        camDir.x = -camPos.x;
        camDir.z = -camPos.z;
        camDir.y = 5.0f - camPos.y;
    } else if (i3b8 == 0) {
        f390 = 0.0f;
        sound->Play(0);
        camDir.y = 0.0f;
        for (int i = 0; i < 6; i++) players[i]->i190 = 7;
        i3b8 = 1;
    } else if (f390 > 1.0f && i3b8 == 1) {
        // Ball goes up; COM's jumper gets a random jump strength and reaction delay.
        i3b8 = 2;
        sound->Play(1);
        f25c = 23.0f;
        v24c.y = 0.7f;
        f3a0 = 0.0f;
        b3a7 = true;
        Player *com = players[slot[5]];
        if (i3b0 == 1)
            com->f18c = (((float)crt_rand() * 0.2f) / 32767.0f + 0.85f) * com->stat16c;
        else
            com->f18c = (((float)crt_rand() * 0.2f) / 32767.0f + 0.8f) * com->stat16c;
        f3bc = ((float)crt_rand() * 0.2f) / 32767.0f;
    } else {
        f3e0 = f3e0 - dt;
        Player *you = players[slot[2]], *com = players[slot[5]];
        // Mod: in multiplayer each jumper that a human controls uses that human's device.
        int hA = mpActive ? ctrl[slot[2]] : -1, hB = mpActive ? ctrl[slot[5]] : -1;
        auto tipHeld = [&](int h) {
            if (h < 0) return keyX == KEY_HOLD || keyZ == KEY_HOLD || keyC == KEY_HOLD;
            const VirtualPad &k = hum[h].pad;
            return k.pass == KEY_HOLD || k.shoot == KEY_HOLD || k.alt == KEY_HOLD;
        };
        auto tipReleased = [&](int h) {
            if (h < 0) return keyX == KEY_RELEASE || keyZ == KEY_RELEASE || keyC == KEY_RELEASE;
            const VirtualPad &k = hum[h].pad;
            return k.pass == KEY_RELEASE || k.shoot == KEY_RELEASE || k.alt == KEY_RELEASE;
        };
        if (i3b8 == 2 && tipHeld(hA)) {
            you->Motion_43006a();   // crouch, charging the jump
            f3a0 = f3a0 + dt;
            if (1.0f < f3a0) f3a0 = 0.001f;
        }
        if (i3b8 == 2 && tipReleased(hA)) {
            you->Motion_4301cb();   // jump
            you->f18c = you->stat16c * f3a0;
            sound->Play(2);
            i3b8 = 3;
        }
        if (i3b8 == 3) {
            if (you->pos.y <= -0.001f) {
                you->Motion_Stand();
                i3b8 = 2;
                you->pos.y = 0.0f;
            } else {
                you->f18c = you->f18c - dt * 20.0f;
                you->pos.y = you->f18c * dt + you->pos.y;
            }
        }
        // Whoever reaches within 5 units of the ball first tips it towards their goal.
        auto comTouch = [&]() {
            if (v24c.y - com->pos.y < 5.0f) {
                if (b3a6 == 0) f260 = -0.5f - ((float)crt_rand() * 2.0f) / 32767.0f;
                else f260 = ((float)crt_rand() * 2.0f) / 32767.0f + 0.5f;
                f258 = 8.0f;
                i268 = -1;
                f3a0 = 0.0f;
                you->Motion_Stand();
                com->Motion_Stand();
                you->pos.y = 0.0f;
                com->pos.y = 0.0f;
                you->i190 = 15;
                com->i190 = i3b0 == 2 ? 7 : 15;
                camPos = Vec3(0.0f, 12.0f, -20.0f);
                camDir = Vec3(0.0f, -0.5f, 1.0f);
                i3b8 = 0;
                i3ac = 1;
                i404 = slot[5];
                i40c = 0;
                b414 = false;
                state = 6;
            }
        };
        auto youTouch = [&]() {
            if (v24c.y - you->pos.y < 5.0f) {
                if (b3a6 == 0) f260 = ((float)crt_rand() * 2.0f) / 32767.0f + 0.5f;
                else f260 = -0.5f - ((float)crt_rand() * 2.0f) / 32767.0f;
                f258 = 8.0f;
                i268 = -1;
                f3a0 = 0.0f;
                you->Motion_Stand();
                com->Motion_Stand();
                you->pos.y = 0.0f;
                com->pos.y = 0.0f;
                you->i190 = 15;
                com->i190 = 15;
                camPos = Vec3(0.0f, 12.0f, -20.0f);
                camDir = Vec3(0.0f, -0.5f, 1.0f);
                i3b8 = 0;
                i3ac = 1;
                i404 = slot[2];
                i40c = 0;
                b414 = false;
                state = 6;
            }
        };
        if (hB >= 0) {
            // A human jumps for team B: the same crouch / release as team A.
            MpHuman &m = hum[hB];
            if (m.tipState == 0 && tipHeld(hB)) {
                com->Motion_43006a();
                m.power = m.power + dt;
                if (1.0f < m.power) m.power = 0.001f;
            }
            if (m.tipState == 0 && tipReleased(hB)) {
                com->Motion_4301cb();
                com->f18c = com->stat16c * m.power;
                sound->Play(2);
                m.tipState = 1;
            }
            if (m.tipState == 1) {
                if (com->pos.y <= -0.001f) {
                    com->Motion_Stand();
                    m.tipState = 0;
                    com->pos.y = 0.0f;
                } else {
                    com->f18c = com->f18c - dt * 20.0f;
                    com->pos.y = com->f18c * dt + com->pos.y;
                }
            }
            // As with COM, nobody can reach the ball before it comes back down.
            if (1.2f < f390 && f25c < 0.0f) {
                comTouch();
                youTouch();
            }
            if (state == 6) {
                m.tipState = 0;
                m.power = 0.0f;
            }
        } else if (f390 <= f3bc + 1.75f) {
            if (1.2f < f390) com->Motion_43006a();
        } else {
            if (com->pos.y < 0.1f) {
                com->Motion_4301cb();
                sound->Play(2);
            }
            if (-0.001f < com->pos.y) {
                com->f18c = com->f18c - dt * 20.0f;
                com->pos.y = com->f18c * dt + com->pos.y;
            }
            comTouch();
            youTouch();
        }
    }
}

// ---- 7: half time: free camera, X/Z/C starts the second half ------------------------------------
void Game::State7()
{
    f390 = f390 + dt;
    if (i3b8 == 0) {
        f390 = 0.0f;
        b3a5 = true;
        b3a4 = true;
        b3a6 = 1;
        b398 = false;
        b399 = false;
        i3ac = 0;
        f394 = 1.0f;
        sound->OpenMp3("WAV\\LP\\Satoko.mp3");
        players[0]->SetPos(0.0f, 0.0f, 17.0f, 0.0f);
        players[1]->SetPos(-3.0f, 0.0f, 17.0f, -0.2f);
        players[2]->SetPos(-1.0f, 0.0f, 8.0f, 3.14f);
        players[3]->SetPos(-5.0f, 0.0f, 15.0f, -1.0f);
        players[4]->SetPos(4.0f, 0.0f, 12.0f, 2.0f);
        players[5]->SetPos(3.0f, 0.0f, 16.0f, 0.5f);
        players[0]->Motion_430c40();
        players[1]->Motion_430c40();
        players[2]->Motion_430c40();
        players[3]->Motion_Stand();
        players[4]->Motion_Stand();
        players[5]->Motion_430c40();
        players[0]->SetTex1(1);
        players[0]->SetTex2(1);
        players[1]->SetTex1(1);
        players[1]->SetTex3(-1);
        players[1]->SetTex2(1);
        players[2]->SetTex2(1);
        players[3]->SetTex2(1);
        players[4]->SetTex2(1);
        camPos = Vec3(16.6f, 5.5f, 27.4f);
        camDir = Vec3(-0.76f, 0.0f, -0.62f);
        v24c.x = 0.0f;
        v24c.z = 0.0f;
        f25c = 0.0f;
        f258 = 0.0f;
        i268 = 0;
        i3b8 = 1;
    } else if (i3b8 == 1 && f390 > 1.0f) {
        i3b8 = 2;
        f394 = 0.0f;
        sound->PlayMp3();
        f390 = 0.0f;
    } else if (i3b8 == 5 && 1.0f < f390) {
        f390 = 0.0f;
        i3b8 = 5;
        state = 5;
        i418 = 0;
    }
    v24c.y = 5.5f;
    float yawAngle = Atan2(camDir.x, camDir.z);
    if (keyUp == KEY_HOLD || keyNum8 == KEY_HOLD) {
        camPos.x = sinf(yawAngle) * 15.0f * dt + camPos.x;
        camPos.z = cosf(yawAngle) * 15.0f * dt + camPos.z;
    }
    if (keyDown == KEY_HOLD || keyNum2 == KEY_HOLD) {
        camPos.x = camPos.x - sinf(yawAngle) * 15.0f * dt;
        camPos.z = camPos.z - cosf(yawAngle) * 15.0f * dt;
    }
    if (keyRight == KEY_HOLD || keyNum6 == KEY_HOLD) {
        yawAngle = dt * 2.0f + yawAngle;
        camDir.x = sinf(yawAngle);
        camDir.z = cosf(yawAngle);
    }
    if (keyLeft == KEY_HOLD || keyNum4 == KEY_HOLD) {
        yawAngle = yawAngle - dt * 2.0f;
        camDir.x = sinf(yawAngle);
        camDir.z = cosf(yawAngle);
    }
    if (keyX == KEY_PUSH || keyZ == KEY_PUSH || keyC == KEY_PUSH) {
        sound->Play(7);
        i3b8 = 5;
        f390 = 0.0f;
        f394 = 1.0f;
        sound->OpenMp3("WAV\\LP\\4.mp3");
    }
}

// ---- 8: results. i3b8: 0 wait, 1 line up, 2 pause, 3 show result, 4 fade, 5 decide, 6 game over --
void Game::State8()
{
    f390 = f390 + dt;
    if (i3b8 == 0 && f390 > 1.0f) {
        f3a0 = 0.0f;
        i39c = 0;
        f390 = 0.0f;
        i3b8 = 1;
    } else if (i3b8 == 1) {
        int arrived = 0;
        for (int i = 0; i < 3; i++) {   // YOU line up at x = 0,3,6 / z = -3
            Player *p = players[team[i]];
            if (p->benched) {
                arrived++;
                continue;
            }
            float dx = p->pos.x - (float)i * 3.0f, dz = p->pos.z + 3.0f;
            if (sqrtf(dx * dx + dz * dz) <= 0.5f) {
                p->yaw = 0.0f;
                p->Motion_Stand();
                arrived++;
            } else {
                p->yaw = Atan2(p->pos.x - (float)i * 3.0f, p->pos.z + 3.0f);
                p->pos.x = p->pos.x - sinf(p->yaw) * p->stat168 * dt;
                p->pos.y = 0.0f;
                p->pos.z = p->pos.z - cosf(p->yaw) * p->stat168 * dt;
                p->Motion_42dfc0();
            }
        }
        for (int i = 0; i < 3; i++) {   // COM line up at x = -1.5,-4.5,-7.5 / z = 1
            Player *p = players[team[5 - i]];
            if (p->benched) {
                arrived++;
                continue;
            }
            float dx = (float)i * 3.0f + 1.5f + p->pos.x, dz = p->pos.z - 1.0f;
            if (sqrtf(dx * dx + dz * dz) <= 0.5f) {
                p->yaw = 0.0f;
                p->Motion_Stand();
                arrived++;
            } else {
                p->yaw = Atan2((float)i * 3.0f + 1.5f + p->pos.x, p->pos.z - 1.0f);
                p->pos.x = p->pos.x - sinf(p->yaw) * p->stat168 * dt;
                p->pos.y = 0.0f;
                p->pos.z = p->pos.z - cosf(p->yaw) * p->stat168 * dt;
                p->Motion_42dfc0();
            }
        }
        if (arrived == 6) {
            f390 = 0.0f;
            i3b8 = 2;
        }
    } else if (i3b8 == 2 && f390 > 2.0f) {
        sound->Play(7);
        f390 = 0.0f;
        i3b8 = 3;
        if (i3dc < i3d8) {           // YOU win: celebrate, COM sulks
            for (int i = 0; i < 3; i++) {
                players[team[i]]->Motion_431118();
                players[team[i]]->SetTex1(1);
                players[team[i]]->SetTex2(1);
            }
            for (int i = 3; i < 6; i++) players[team[i]]->Motion_430e6d();
        } else if (i3d8 < i3dc) {
            for (int i = 0; i < 3; i++) players[team[i]]->Motion_430e6d();
            for (int i = 3; i < 6; i++) {
                players[team[i]]->Motion_431118();
                players[team[i]]->SetTex1(1);
                players[team[i]]->SetTex2(1);
            }
        } else {
            for (int i = 0; i < 6; i++) players[team[i]]->Motion_43030b();
        }
    } else if (i3b8 == 3) {
        if (keyX == KEY_PUSH || keyZ == KEY_PUSH || keyC == KEY_PUSH) i3b8 = 4;
    } else if (i3b8 == 4) {
        f394 = dt * 0.3f + f394;
        if (1.0f < f394) {
            f394 = 1.0f;
            i3b8 = 5;
        }
    } else if (i3b8 == 5) {
        sound->StopMp3();
        if (i3dc < i3d8 && i3b0 != 2 && !(mpActive && mpVersus)) {   // won a real match: ending
            i3b8 = 0;
            f390 = 0.0f;
            state = 9;
            for (int i = 0; i < 6; i++) players[i]->benched = false;
        } else {
            i3b8 = 6;
            sound->Play(7);
            f390 = 0.0f;
        }
    } else if (i3b8 == 6 && 4.0f < f390) {
        for (int i = 0; i < 6; i++) {
            players[team[i]]->SetTex1(0);
            players[team[i]]->SetTex2(0);
        }
        camPos = Vec3(0.0f, 0.0f, 0.0f);
        camDir = Vec3(1.0f, 0.0f, 1.0f);
        v240 = Vec3(0.0f, 6.0f, 0.0f);
        v24c = Vec3(0.0f, 6.0f, 0.0f);
        f260 = 0.0f;
        f264 = 0.0f;
        f258 = 0.0f;
        f25c = 0.0f;
        i268 = -1;
        v370 = Vec3(0.0f, 0.0f, 0.0f);
        lightDir = Vec3(1.0f, -1.0f, 1.0f);
        v37c = Vec3(0.0f, 0.0f, 0.0f);
        f390 = 0.0f;
        f394 = 1.0f;
        b398 = false;
        b399 = false;
        b39a = 0;
        b3a4 = false;
        b3a5 = false;
        b3a6 = 0;
        b3a7 = false;
        i3ac = 0;
        i3b8 = 0;
        f3bc = 0.0f;
        i39c = 0;
        f3a0 = -1.0f;
        i3b0 = 0;
        i3b4 = 0;
        f3e0 = 300.0f;
        i3d8 = 0;
        i3dc = 0;
        f400 = 4.0f;
        i40c = 0;
        b414 = false;
        i418 = -1;
        state = 1;
    }
}

static void SetShadowMatrix(Mat4 &m, const Vec3 &l)
{
    float *s = m.m;
    s[0] = 1.0f;  s[1] = 0.0f;  s[2] = 0.0f;  s[3] = 0.0f;
    s[4] = -l.x / l.y;  s[5] = 0.0f;  s[6] = -l.z / l.y;  s[7] = 0.0f;
    s[8] = 0.0f;  s[9] = 0.0f;  s[10] = 1.0f;  s[11] = 0.0f;
    s[12] = 0.0f; s[13] = 0.05f; s[14] = 0.0f; s[15] = 1.0f;
}

// ---- 9: ending (only after winning a normal/club match): sunset, credits, 265s or X to skip ------
void Game::State9()
{
    f390 = f390 + dt;
    if (i3b8 == 0) {
        f390 = 0.0f;
        b3a5 = false;
        b3a4 = false;
        b3a6 = 0;
        b398 = false;
        b399 = false;
        i3ac = 0;
        f394 = 1.0f;
        lightDir = Vec3(1.0f, -0.8f, -1.0f);
        light.direction = lightDir;
        light.diffuse.r = 0.8f; light.diffuse.g = 0.5f; light.diffuse.b = 0.5f;
        light.ambient.r = 0.5f; light.ambient.g = 0.3f; light.ambient.b = 0.3f;
        SetShadowMatrix(matShadow, lightDir);
        sound->OpenMp3("WAV\\LP\\5.mp3");
        players[0]->SetPos(0.0f, 0.0f, 17.0f, 0.0f);
        players[1]->SetPos(-3.0f, 0.0f, 17.0f, -0.2f);
        players[2]->SetPos(-1.0f, 0.0f, 8.0f, 3.14f);
        players[3]->SetPos(-5.0f, 0.0f, 15.0f, -1.0f);
        players[4]->SetPos(4.0f, 0.0f, 12.0f, 2.0f);
        players[5]->SetPos(3.0f, 0.0f, 16.0f, 0.5f);
        players[0]->Motion_430c40();
        players[1]->Motion_430c40();
        players[2]->Motion_430c40();
        players[3]->Motion_Stand();
        players[4]->Motion_Stand();
        players[5]->Motion_430c40();
        camPos = Vec3(20.0f, 10.0f, -57.0f);
        camDir = Vec3(-0.43f, 0.0f, 0.9f);
        v24c = Vec3(0.0f, 0.7f, 0.0f);
        f25c = 0.0f;
        f258 = 0.0f;
        i268 = 0;
        i3b8 = 1;
    } else if (i3b8 == 1 && f390 > 1.0f) {
        i3b8 = 2;
        f394 = 0.0f;
        sound->PlayMp3();
        f390 = 0.0f;
    } else if (i3b8 == 2 && f390 > 265.0f) {
        i3b8 = 3;
    } else if (i3b8 == 3) {
        f394 = dt * 0.2f + f394;
        if (1.0f < f394) {
            f394 = 1.0f;
            i3b8 = 4;
        }
    } else if (i3b8 == 4) {
        sound->StopMp3();
        f394 = 1.0f;
        sound->OpenMp3("WAV\\LP\\1.mp3");
        for (int i = 0; i < 6; i++) {
            players[team[i]]->SetTex1(0);
            players[team[i]]->SetTex2(0);
        }
        camPos = Vec3(0.0f, 0.0f, 0.0f);
        camDir = Vec3(1.0f, 0.0f, 1.0f);
        lightDir = Vec3(1.0f, -1.0f, 1.0f);
        light.direction = lightDir;
        light.diffuse.r = 0.8f; light.diffuse.g = 0.8f; light.diffuse.b = 0.8f;
        light.ambient.r = 0.5f; light.ambient.g = 0.5f; light.ambient.b = 0.5f;
        SetShadowMatrix(matShadow, lightDir);
        v240 = Vec3(0.0f, 6.0f, 0.0f);
        v24c = Vec3(0.0f, 6.0f, 0.0f);
        f260 = 0.0f;
        f264 = 0.0f;
        f258 = 0.0f;
        f25c = 0.0f;
        i268 = -1;
        v370 = Vec3(0.0f, 0.0f, 0.0f);
        lightDir = Vec3(1.0f, -1.0f, 1.0f);
        v37c = Vec3(0.0f, 0.0f, 0.0f);
        f390 = 0.0f;
        f394 = 1.0f;
        b398 = false;
        b399 = false;
        b39a = 0;
        b3a4 = false;
        b3a5 = false;
        b3a6 = 0;
        b3a7 = false;
        i3ac = 0;
        i3b8 = 0;
        f3bc = 0.0f;
        i39c = 0;
        f3a0 = -1.0f;
        i3b0 = 0;
        i3b4 = 0;
        f3e0 = 300.0f;
        i3d8 = 0;
        i3dc = 0;
        f400 = 4.0f;
        i40c = 0;
        b414 = false;
        i418 = -1;
        state = 1;
    }
    if (i3b8 == 2) {   // the sun sets over the credits
        lightDir.y = dt * 0.002222f + lightDir.y;
        light.direction = lightDir;
        light.ambient.r = light.ambient.r - dt * 0.00074074f;
        light.ambient.g = light.ambient.g - dt * 0.00037037f;
        light.ambient.b = light.ambient.b - dt * 0.00037037f;
        SetShadowMatrix(matShadow, lightDir);
    }
    if (keyX == KEY_PUSH || keyZ == KEY_PUSH || keyC == KEY_PUSH) i3b8 = 3;
}
