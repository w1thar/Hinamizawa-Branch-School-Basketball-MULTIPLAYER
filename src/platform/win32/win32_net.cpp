// Win32 networking for the mod's online play: Winsock UDP sockets, the PC's LAN address, UPnP
// (IGD) port mapping and a STUN lookup of the public address.
#define WIN32_LEAN_AND_MEAN
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <winsock2.h>
#include <ws2tcpip.h>
#include <windows.h>
#include <winhttp.h>

#include <cstdio>
#include <cstring>
#include <ctime>
#include <string>
#include <vector>

#include "platform/platform.h"

namespace plat {

namespace {

bool g_wsa;

SOCKET Sock(int s) { return (SOCKET)(intptr_t)s; }

sockaddr_in ToSockaddr(const NetAddr &a)
{
    sockaddr_in sa = {};
    sa.sin_family = AF_INET;
    sa.sin_addr.s_addr = htonl(a.ip);
    sa.sin_port = htons(a.port);
    return sa;
}

// ---- tiny blocking TCP / HTTP helpers for UPnP (short timeouts, background thread only) ----
bool HttpRequest(uint32_t ip, uint16_t port, const std::string &req, std::string &resp)
{
    SOCKET s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (s == INVALID_SOCKET) return false;
    DWORD tmo = 3000;
    setsockopt(s, SOL_SOCKET, SO_RCVTIMEO, (const char *)&tmo, sizeof(tmo));
    setsockopt(s, SOL_SOCKET, SO_SNDTIMEO, (const char *)&tmo, sizeof(tmo));
    NetAddr a;
    a.ip = ip;
    a.port = port;
    sockaddr_in sa = ToSockaddr(a);
    if (connect(s, (sockaddr *)&sa, sizeof(sa)) != 0) {
        closesocket(s);
        return false;
    }
    send(s, req.data(), (int)req.size(), 0);
    resp.clear();
    char buf[4096];
    for (;;) {
        int n = recv(s, buf, sizeof(buf), 0);
        if (n <= 0) break;
        resp.append(buf, n);
        if (resp.size() > 256 * 1024) break;
    }
    closesocket(s);
    return !resp.empty();
}

bool ParseUrl(const std::string &url, uint32_t &ip, uint16_t &port, std::string &path)
{
    size_t p = url.find("://");
    if (p == std::string::npos) return false;
    std::string rest = url.substr(p + 3);
    size_t slash = rest.find('/');
    std::string hostport = slash == std::string::npos ? rest : rest.substr(0, slash);
    path = slash == std::string::npos ? "/" : rest.substr(slash);
    size_t colon = hostport.find(':');
    std::string host = colon == std::string::npos ? hostport : hostport.substr(0, colon);
    port = colon == std::string::npos ? 80 : (uint16_t)atoi(hostport.c_str() + colon + 1);
    NetAddr a;
    if (!NetResolve(host.c_str(), port, a)) return false;
    ip = a.ip;
    return true;
}

std::string Between(const std::string &s, const std::string &a, const std::string &b, size_t from = 0)
{
    size_t i = s.find(a, from);
    if (i == std::string::npos) return std::string();
    i += a.size();
    size_t j = s.find(b, i);
    if (j == std::string::npos) return std::string();
    return s.substr(i, j - i);
}

std::string Lower(std::string s)
{
    for (char &c : s) c = (char)tolower((unsigned char)c);
    return s;
}

struct Igd {
    bool ok = false;
    uint32_t ip = 0;
    uint16_t port = 0;
    std::string controlPath;
    std::string service;
};

// SSDP search for an Internet Gateway Device, then find its WAN(IP|PPP)Connection control URL.
Igd FindIgd()
{
    Igd igd;
    SOCKET s = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (s == INVALID_SOCKET) return igd;
    DWORD tmo = 1500;
    setsockopt(s, SOL_SOCKET, SO_RCVTIMEO, (const char *)&tmo, sizeof(tmo));
    const char *targets[] = {"urn:schemas-upnp-org:device:InternetGatewayDevice:1",
                             "urn:schemas-upnp-org:service:WANIPConnection:1",
                             "urn:schemas-upnp-org:service:WANPPPConnection:1"};
    NetAddr mc;
    mc.ip = (239u << 24) | (255u << 16) | (255u << 8) | 250u;
    mc.port = 1900;
    sockaddr_in sa = ToSockaddr(mc);
    for (const char *st : targets) {
        char msg[512];
        snprintf(msg, sizeof(msg),
                 "M-SEARCH * HTTP/1.1\r\nHOST: 239.255.255.250:1900\r\nST: %s\r\nMAN: \"ssdp:discover\"\r\nMX: 2\r\n\r\n", st);
        sendto(s, msg, (int)strlen(msg), 0, (sockaddr *)&sa, sizeof(sa));
    }
    std::string location;
    for (int tries = 0; tries < 6 && location.empty(); tries++) {
        char buf[2048];
        int n = recv(s, buf, sizeof(buf) - 1, 0);
        if (n <= 0) break;
        buf[n] = 0;
        std::string r = buf, lr = Lower(r);
        size_t i = lr.find("\nlocation:");
        if (i == std::string::npos) continue;
        i += 10;
        size_t j = r.find('\r', i);
        location = r.substr(i, j - i);
        while (!location.empty() && location[0] == ' ') location.erase(0, 1);
    }
    closesocket(s);
    if (location.empty()) return igd;

    uint32_t ip;
    uint16_t port;
    std::string path;
    if (!ParseUrl(location, ip, port, path)) return igd;
    char req[512];
    snprintf(req, sizeof(req), "GET %s HTTP/1.1\r\nHost: %s:%u\r\nConnection: close\r\n\r\n", path.c_str(),
             NetAddrString(ip).c_str(), port);
    std::string xml;
    if (!HttpRequest(ip, port, req, xml)) return igd;
    for (const char *svc : {"urn:schemas-upnp-org:service:WANIPConnection:1",
                            "urn:schemas-upnp-org:service:WANIPConnection:2",
                            "urn:schemas-upnp-org:service:WANPPPConnection:1"}) {
        size_t i = xml.find(svc);
        if (i == std::string::npos) continue;
        std::string ctl = Between(xml, "<controlURL>", "</controlURL>", i);
        if (ctl.empty()) continue;
        if (ctl.find("://") != std::string::npos) {
            uint32_t cip;
            uint16_t cport;
            if (!ParseUrl(ctl, cip, cport, ctl)) continue;
        } else if (ctl[0] != '/') {
            ctl = "/" + ctl;
        }
        igd.ok = true;
        igd.ip = ip;
        igd.port = port;
        igd.controlPath = ctl;
        igd.service = svc;
        return igd;
    }
    return igd;
}

bool Soap(const Igd &igd, const char *action, const std::string &args, std::string &resp)
{
    std::string body = "<?xml version=\"1.0\"?>\r\n"
                       "<s:Envelope xmlns:s=\"http://schemas.xmlsoap.org/soap/envelope/\" "
                       "s:encodingStyle=\"http://schemas.xmlsoap.org/soap/encoding/\"><s:Body>"
                       "<u:" + std::string(action) + " xmlns:u=\"" + igd.service + "\">" + args +
                       "</u:" + action + "></s:Body></s:Envelope>\r\n";
    char head[768];
    snprintf(head, sizeof(head),
             "POST %s HTTP/1.1\r\nHost: %s:%u\r\nContent-Type: text/xml; charset=\"utf-8\"\r\n"
             "SOAPAction: \"%s#%s\"\r\nContent-Length: %u\r\nConnection: close\r\n\r\n",
             igd.controlPath.c_str(), NetAddrString(igd.ip).c_str(), igd.port, igd.service.c_str(), action,
             (unsigned)body.size());
    if (!HttpRequest(igd.ip, igd.port, head + body, resp)) return false;
    return resp.find(" 200 ") != std::string::npos;
}

// STUN binding request (RFC 5389) to learn the public address.
uint32_t StunPublicIP()
{
    const char *servers[] = {"stun.l.google.com", "stun1.l.google.com", "stun.cloudflare.com"};
    const uint16_t ports[] = {19302, 19302, 3478};
    SOCKET s = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (s == INVALID_SOCKET) return 0;
    DWORD tmo = 1500;
    setsockopt(s, SOL_SOCKET, SO_RCVTIMEO, (const char *)&tmo, sizeof(tmo));
    uint32_t result = 0;
    for (int k = 0; k < 3 && !result; k++) {
        NetAddr a;
        if (!NetResolve(servers[k], ports[k], a)) continue;
        unsigned char req[20] = {0x00, 0x01, 0x00, 0x00, 0x21, 0x12, 0xa4, 0x42};
        for (int i = 8; i < 20; i++) req[i] = (unsigned char)(GetTickCount() * (i + 7) >> 3);
        sockaddr_in sa = ToSockaddr(a);
        sendto(s, (const char *)req, 20, 0, (sockaddr *)&sa, sizeof(sa));
        unsigned char buf[512];
        int n = recv(s, (char *)buf, sizeof(buf), 0);
        if (n < 20 || buf[0] != 0x01 || buf[1] != 0x01) continue;
        int len = (buf[2] << 8) | buf[3];
        for (int i = 20; i + 4 <= 20 + len && i + 4 <= n;) {
            int type = (buf[i] << 8) | buf[i + 1], alen = (buf[i + 2] << 8) | buf[i + 3];
            const unsigned char *v = buf + i + 4;
            if (i + 4 + alen > n) break;
            if ((type == 0x0020 || type == 0x0001) && alen >= 8 && v[1] == 0x01) {
                uint32_t ip = ((uint32_t)v[4] << 24) | ((uint32_t)v[5] << 16) | ((uint32_t)v[6] << 8) | v[7];
                if (type == 0x0020) ip ^= 0x2112a442u;
                result = ip;
                break;
            }
            i += 4 + ((alen + 3) & ~3);
        }
    }
    closesocket(s);
    return result;
}

volatile LONG g_mapStatus;   // 0 working, 1 mapped, 2 not mapped
volatile uint32_t g_mapIp;
uint16_t g_mapPort;
Igd g_igd;
bool g_mapped;
HANDLE g_mapThread;

DWORD WINAPI MapThread(LPVOID)
{
    uint32_t local = NetLocalIP();
    Igd igd = FindIgd();
    if (igd.ok && local) {
        char args[768];
        snprintf(args, sizeof(args),
                 "<NewRemoteHost></NewRemoteHost><NewExternalPort>%u</NewExternalPort><NewProtocol>UDP</NewProtocol>"
                 "<NewInternalPort>%u</NewInternalPort><NewInternalClient>%s</NewInternalClient>"
                 "<NewEnabled>1</NewEnabled><NewPortMappingDescription>Hinamizawa Basketball</NewPortMappingDescription>"
                 "<NewLeaseDuration>0</NewLeaseDuration>",
                 g_mapPort, g_mapPort, NetAddrString(local).c_str());
        std::string resp;
        if (Soap(igd, "AddPortMapping", args, resp)) {
            g_igd = igd;
            g_mapped = true;
            std::string r2;
            if (Soap(igd, "GetExternalIPAddress", "", r2)) {
                std::string ext = Between(r2, "<NewExternalIPAddress>", "</NewExternalIPAddress>");
                NetAddr a;
                if (!ext.empty() && NetResolve(ext.c_str(), 0, a)) g_mapIp = a.ip;
            }
            if (!g_mapIp) g_mapIp = StunPublicIP();
            InterlockedExchange(&g_mapStatus, 1);
            return 0;
        }
    }
    g_mapIp = StunPublicIP();
    InterlockedExchange(&g_mapStatus, 2);
    return 0;
}

}  // namespace

bool NetInit()
{
    if (g_wsa) return true;
    WSADATA wd;
    g_wsa = WSAStartup(MAKEWORD(2, 2), &wd) == 0;
    return g_wsa;
}

int UdpOpen(uint16_t port, bool broadcast)
{
    if (!NetInit()) return -1;
    SOCKET s = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (s == INVALID_SOCKET) return -1;
    u_long nb = 1;
    ioctlsocket(s, FIONBIO, &nb);
    BOOL on = TRUE;
    if (broadcast) setsockopt(s, SOL_SOCKET, SO_BROADCAST, (const char *)&on, sizeof(on));
    // Don't let an ICMP "port unreachable" from a vanished peer kill the socket (WSAECONNRESET).
    DWORD off = 0, ret = 0;
    WSAIoctl(s, _WSAIOW(IOC_VENDOR, 12), &off, sizeof(off), nullptr, 0, &ret, nullptr, nullptr);
    sockaddr_in sa = {};
    sa.sin_family = AF_INET;
    sa.sin_addr.s_addr = htonl(INADDR_ANY);
    sa.sin_port = htons(port);
    if (bind(s, (sockaddr *)&sa, sizeof(sa)) != 0) {
        closesocket(s);
        return -1;
    }
    return (int)(intptr_t)s;
}

void UdpClose(int sock)
{
    if (sock >= 0) closesocket(Sock(sock));
}

bool UdpSend(int sock, const NetAddr &to, const void *data, int len)
{
    sockaddr_in sa = ToSockaddr(to);
    return sendto(Sock(sock), (const char *)data, len, 0, (sockaddr *)&sa, sizeof(sa)) == len;
}

int UdpRecv(int sock, NetAddr &from, void *buf, int max)
{
    sockaddr_in sa = {};
    int sl = sizeof(sa);
    int n = recvfrom(Sock(sock), (char *)buf, max, 0, (sockaddr *)&sa, &sl);
    if (n < 0) return -1;
    from.ip = ntohl(sa.sin_addr.s_addr);
    from.port = ntohs(sa.sin_port);
    return n;
}

uint16_t UdpLocalPort(int sock)
{
    sockaddr_in sa = {};
    int sl = sizeof(sa);
    if (getsockname(Sock(sock), (sockaddr *)&sa, &sl) != 0) return 0;
    return ntohs(sa.sin_port);
}

bool NetResolve(const char *host, uint16_t port, NetAddr &out)
{
    if (!NetInit()) return false;
    addrinfo hints = {}, *res = nullptr;
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_DGRAM;
    if (getaddrinfo(host, nullptr, &hints, &res) != 0 || !res) return false;
    out.ip = ntohl(((sockaddr_in *)res->ai_addr)->sin_addr.s_addr);
    out.port = port;
    freeaddrinfo(res);
    return true;
}

uint32_t NetLocalIP()
{
    if (!NetInit()) return 0;
    // The address Windows would use to reach the internet (no packet is sent by a UDP connect).
    SOCKET s = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (s == INVALID_SOCKET) return 0;
    sockaddr_in sa = {};
    sa.sin_family = AF_INET;
    sa.sin_addr.s_addr = htonl((8u << 24) | (8u << 16) | (8u << 8) | 8u);
    sa.sin_port = htons(53);
    uint32_t ip = 0;
    if (connect(s, (sockaddr *)&sa, sizeof(sa)) == 0) {
        sockaddr_in me = {};
        int sl = sizeof(me);
        if (getsockname(s, (sockaddr *)&me, &sl) == 0) ip = ntohl(me.sin_addr.s_addr);
    }
    closesocket(s);
    return ip;
}

std::string NetAddrString(uint32_t ip)
{
    char b[32];
    snprintf(b, sizeof(b), "%u.%u.%u.%u", ip >> 24, (ip >> 16) & 255, (ip >> 8) & 255, ip & 255);
    return b;
}

void NetStartPortMapping(uint16_t port)
{
    if (g_mapThread) return;
    NetInit();
    g_mapPort = port;
    g_mapIp = 0;
    g_mapped = false;
    InterlockedExchange(&g_mapStatus, 0);
    g_mapThread = CreateThread(nullptr, 0, MapThread, nullptr, 0, nullptr);
    if (!g_mapThread) InterlockedExchange(&g_mapStatus, 2);
}

int NetPortMappingStatus(uint32_t &externalIp)
{
    LONG st = InterlockedCompareExchange(&g_mapStatus, 0, 0);
    externalIp = st ? g_mapIp : 0;
    return (int)st;
}

void NetStopPortMapping()
{
    if (g_mapThread) {
        WaitForSingleObject(g_mapThread, 8000);
        CloseHandle(g_mapThread);
        g_mapThread = nullptr;
    }
    if (g_mapped) {
        char args[256];
        snprintf(args, sizeof(args),
                 "<NewRemoteHost></NewRemoteHost><NewExternalPort>%u</NewExternalPort><NewProtocol>UDP</NewProtocol>",
                 g_mapPort);
        std::string resp;
        Soap(g_igd, "DeletePortMapping", args, resp);
        g_mapped = false;
    }
}

}  // namespace plat

// ---- STUN from the game socket ----------------------------------------------------------------
namespace plat {

namespace {

NetAddr g_stun[2];
volatile LONG g_stunReady;
HANDLE g_stunThread;

DWORD WINAPI StunResolveThread(LPVOID)
{
    NetAddr a;
    if (NetResolve("stun.l.google.com", 19302, a)) g_stun[0] = a;
    if (NetResolve("stun.cloudflare.com", 3478, a)) g_stun[1] = a;
    if (!g_stun[0].ip) g_stun[0] = g_stun[1];
    if (!g_stun[1].ip) g_stun[1] = g_stun[0];
    InterlockedExchange(&g_stunReady, 1);
    return 0;
}

}  // namespace

void NetStunPrepare()
{
    if (g_stunThread) return;
    NetInit();
    g_stunThread = CreateThread(nullptr, 0, StunResolveThread, nullptr, 0, nullptr);
}

bool NetStunServer(NetAddr &out, int index)
{
    if (!InterlockedCompareExchange(&g_stunReady, 0, 0)) return false;
    out = g_stun[index & 1];
    return out.ip != 0;
}

int StunBuildRequest(uint8_t *buf)
{
    static uint32_t counter = 0x5eed1234u;
    const uint8_t head[8] = {0x00, 0x01, 0x00, 0x00, 0x21, 0x12, 0xa4, 0x42};
    memcpy(buf, head, 8);
    for (int i = 8; i < 20; i++) {
        counter = counter * 1103515245u + 12345u + GetTickCount();
        buf[i] = (uint8_t)(counter >> 16);
    }
    return 20;
}

bool StunParseResponse(const uint8_t *buf, int n, NetAddr &mapped)
{
    if (n < 20 || buf[0] != 0x01 || buf[1] != 0x01 || buf[4] != 0x21 || buf[5] != 0x12 || buf[6] != 0xa4 ||
        buf[7] != 0x42)
        return false;
    int len = (buf[2] << 8) | buf[3];
    for (int i = 20; i + 4 <= 20 + len && i + 4 <= n;) {
        int type = (buf[i] << 8) | buf[i + 1], alen = (buf[i + 2] << 8) | buf[i + 3];
        const uint8_t *v = buf + i + 4;
        if (i + 4 + alen > n) break;
        if ((type == 0x0020 || type == 0x0001) && alen >= 8 && v[1] == 0x01) {
            uint16_t port = (uint16_t)((v[2] << 8) | v[3]);
            uint32_t ip = ((uint32_t)v[4] << 24) | ((uint32_t)v[5] << 16) | ((uint32_t)v[6] << 8) | v[7];
            if (type == 0x0020) {
                port ^= 0x2112;
                ip ^= 0x2112a442u;
            }
            mapped.ip = ip;
            mapped.port = port;
            return true;
        }
        i += 4 + ((alen + 3) & ~3);
    }
    return false;
}

// ---- ntfy.sh signalling --------------------------------------------------------------------------
namespace {

bool Https(const wchar_t *method, const std::string &path, const std::string &body, std::string &out)
{
    out.clear();
    HINTERNET ses = WinHttpOpen(L"HinamizawaBasketball/1.0", WINHTTP_ACCESS_TYPE_DEFAULT_PROXY,
                                WINHTTP_NO_PROXY_NAME, WINHTTP_NO_PROXY_BYPASS, 0);
    if (!ses) return false;
    WinHttpSetTimeouts(ses, 4000, 4000, 4000, 6000);
    bool ok = false;
    HINTERNET con = WinHttpConnect(ses, L"ntfy.sh", INTERNET_DEFAULT_HTTPS_PORT, 0);
    if (con) {
        std::wstring wpath(path.begin(), path.end());
        HINTERNET req = WinHttpOpenRequest(con, method, wpath.c_str(), nullptr, WINHTTP_NO_REFERER,
                                           WINHTTP_DEFAULT_ACCEPT_TYPES, WINHTTP_FLAG_SECURE);
        if (req) {
            if (WinHttpSendRequest(req, WINHTTP_NO_ADDITIONAL_HEADERS, 0, (LPVOID)body.data(), (DWORD)body.size(),
                                   (DWORD)body.size(), 0) &&
                WinHttpReceiveResponse(req, nullptr)) {
                DWORD status = 0, sz = sizeof(status);
                WinHttpQueryHeaders(req, WINHTTP_QUERY_STATUS_CODE | WINHTTP_QUERY_FLAG_NUMBER, nullptr, &status, &sz,
                                    nullptr);
                for (;;) {
                    DWORD avail = 0;
                    if (!WinHttpQueryDataAvailable(req, &avail) || avail == 0) break;
                    std::vector<char> b(avail);
                    DWORD got = 0;
                    if (!WinHttpReadData(req, b.data(), avail, &got) || got == 0) break;
                    out.append(b.data(), got);
                    if (out.size() > 64 * 1024) break;
                }
                ok = status >= 200 && status < 300;
            }
            WinHttpCloseHandle(req);
        }
        WinHttpCloseHandle(con);
    }
    WinHttpCloseHandle(ses);
    return ok;
}

CRITICAL_SECTION g_sigLock;
bool g_sigLockInit;
volatile LONG g_sigRun;
HANDLE g_sigThread;
std::string g_sigTopics;
std::vector<NetAddr> g_sigQueue;

void SigLock()
{
    if (!g_sigLockInit) {
        InitializeCriticalSection(&g_sigLock);
        g_sigLockInit = true;
    }
    EnterCriticalSection(&g_sigLock);
}
void SigUnlock() { LeaveCriticalSection(&g_sigLock); }

std::string JsonField(const std::string &line, const char *key)
{
    std::string k = std::string("\"") + key + "\":";
    size_t i = line.find(k);
    if (i == std::string::npos) return std::string();
    i += k.size();
    if (i < line.size() && line[i] == '"') {
        size_t j = line.find('"', i + 1);
        return j == std::string::npos ? std::string() : line.substr(i + 1, j - i - 1);
    }
    size_t j = line.find_first_of(",}", i);
    return line.substr(i, j - i);
}

DWORD WINAPI SignalHostThread(LPVOID)
{
    std::string since = std::to_string((long long)time(nullptr) - 2);
    while (InterlockedCompareExchange(&g_sigRun, 0, 0)) {
        SigLock();
        std::string topics = g_sigTopics;   // may change while hosting (UPnP finishing later)
        SigUnlock();
        std::string resp;
        if (Https(L"GET", "/" + topics + "/json?poll=1&since=" + since, std::string(), resp)) {
            size_t pos = 0;
            while (pos < resp.size()) {
                size_t nl = resp.find('\n', pos);
                std::string line = resp.substr(pos, nl == std::string::npos ? std::string::npos : nl - pos);
                pos = nl == std::string::npos ? resp.size() : nl + 1;
                if (JsonField(line, "event") != "message") continue;
                std::string id = JsonField(line, "id"), msg = JsonField(line, "message");
                if (!id.empty()) since = id;
                // "hbk J a.b.c.d:port"
                if (msg.compare(0, 6, "hbk J ") != 0) continue;
                std::string addr = msg.substr(6);
                size_t colon = addr.find(':');
                if (colon == std::string::npos) continue;
                NetAddr a;
                if (!NetResolve(addr.substr(0, colon).c_str(), (uint16_t)atoi(addr.c_str() + colon + 1), a)) continue;
                SigLock();
                if (g_sigQueue.size() < 32) g_sigQueue.push_back(a);
                SigUnlock();
            }
        }
        for (int k = 0; k < 15 && InterlockedCompareExchange(&g_sigRun, 0, 0); k++) Sleep(100);
    }
    return 0;
}

struct Announce {
    std::string topic, body;
};

DWORD WINAPI AnnounceThread(LPVOID p)
{
    Announce *a = (Announce *)p;
    for (int tries = 0; tries < 3; tries++) {
        std::string resp;
        if (Https(L"POST", "/" + a->topic, a->body, resp)) break;
        Sleep(1500);
    }
    delete a;
    return 0;
}

}  // namespace

void NetSignalHost(const std::string &topics)
{
    SigLock();
    g_sigTopics = topics;
    SigUnlock();
    if (g_sigThread && WaitForSingleObject(g_sigThread, 0) == WAIT_TIMEOUT && InterlockedCompareExchange(&g_sigRun, 0, 0))
        return;   // already polling: it picks up the new topics on its next round
    if (g_sigThread) {
        WaitForSingleObject(g_sigThread, 7000);   // a stopped thread finishing its last request
        CloseHandle(g_sigThread);
        g_sigThread = nullptr;
    }
    SigLock();
    g_sigQueue.clear();
    SigUnlock();
    InterlockedExchange(&g_sigRun, 1);
    g_sigThread = CreateThread(nullptr, 0, SignalHostThread, nullptr, 0, nullptr);
}

bool NetSignalPoll(NetAddr &joiner)
{
    SigLock();
    bool got = !g_sigQueue.empty();
    if (got) {
        joiner = g_sigQueue.front();
        g_sigQueue.erase(g_sigQueue.begin());
    }
    SigUnlock();
    return got;
}

void NetSignalAnnounce(const std::string &topic, const NetAddr &me)
{
    Announce *a = new Announce;
    a->topic = topic;
    a->body = "hbk J " + NetAddrString(me.ip) + ":" + std::to_string(me.port);
    HANDLE t = CreateThread(nullptr, 0, AnnounceThread, a, 0, nullptr);
    if (t) CloseHandle(t);
    else delete a;
}

void NetSignalStop() { InterlockedExchange(&g_sigRun, 0); }

}  // namespace plat
