// Platform abstraction: window/display, input, timing, audio output, text rasterization and the
// embedded asset archive. One implementation per target (win32/ for Windows).
#pragma once

#include <cstddef>
#include <cstdint>
#include <string>
#include <vector>

namespace plat {

// Virtual key codes (Win32 VK_* values, the game was written against GetKeyState()).
enum Key {
    KEY_LBUTTON = 0x01,
    KEY_RBUTTON = 0x02,
    KEY_RETURN = 0x0d,
    KEY_ESCAPE = 0x1b,
    KEY_SPACE = 0x20,
    KEY_LEFT = 0x25,
    KEY_UP = 0x26,
    KEY_RIGHT = 0x27,
    KEY_DOWN = 0x28,
    KEY_C = 0x43,
    KEY_X = 0x58,
    KEY_Z = 0x5a,
    KEY_NUMPAD2 = 0x62,
    KEY_NUMPAD4 = 0x64,
    KEY_NUMPAD6 = 0x66,
    KEY_NUMPAD8 = 0x68,
};

struct Config {
    bool fullscreen = false;
    int windowScale = 0;        // 0 = pick the largest integer scale that fits the desktop
    bool vsync = true;
};

// Logical resolution of the original game; the backend scales it to the window.
const int SCREEN_W = 640;
const int SCREEN_H = 480;

bool Init(const Config &cfg);
void Shutdown();

// Processes OS events. Returns false once the user closed the window.
bool PumpEvents();
void Present();
void ToggleFullscreen();

bool KeyDown(int key);
double TimeSeconds();
void SleepMs(int ms);

void ErrorBox(const char *utf8);

// Audio: the backend pulls interleaved stereo s16 frames from the callback on its own thread.
typedef void (*AudioCallback)(int16_t *out, int frames, void *user);
const int AUDIO_RATE = 44100;
bool AudioOpen(AudioCallback cb, void *user);
void AudioClose();
void AudioLock();
void AudioUnlock();

// Renders a UTF-8 string. Output is an 8-bit coverage bitmap (w*h bytes, top-down).
// `height` is the GDI cell height in pixels. FONT_JAPANESE is the original's gothic; FONT_LATIN is
// a proportional UI font used for the English translation.
enum Font { FONT_JAPANESE = 0, FONT_LATIN = 1 };
bool RasterText(const char *utf8, int height, Font font, std::vector<uint8_t> &alpha, int &w, int &h);

// Gamepads (added by the mod). Buttons use positional names: SOUTH = Cross / A, EAST = Circle / B,
// WEST = Square / X, NORTH = Triangle / Y.
enum PadButton {
    PAD_SOUTH, PAD_EAST, PAD_WEST, PAD_NORTH, PAD_L1, PAD_R1, PAD_L2, PAD_R2,
    PAD_SELECT, PAD_START, PAD_L3, PAD_R3, PAD_HOME,
    PAD_DPAD_UP, PAD_DPAD_DOWN, PAD_DPAD_LEFT, PAD_DPAD_RIGHT,
    PAD_BUTTON_COUNT
};
enum PadType { PADTYPE_XINPUT, PADTYPE_DUALSHOCK4, PADTYPE_DUALSENSE };
struct GamepadState {
    float lx = 0, ly = 0;   // left stick, -1..1, +y = down
    bool buttons[PAD_BUTTON_COUNT] = {};
};
struct GamepadInfo {
    int id;                 // stable while the pad stays connected
    PadType type;
    char name[48];
};
// Lists connected pads (re-scans for new ones at most every couple of seconds).
int ListGamepads(GamepadInfo *out, int max);
// False if the pad with this id is gone.
bool ReadGamepad(int id, GamepadState &state);

// Per-user folder for settings, with a trailing path separator; created if missing.
std::string ConfigDir();
// The user's login name (UTF-8), for a default player name.
std::string UserName();

// Typed text (added by the mod, for entering join codes): characters typed since the last call,
// one per call as a Unicode code point (0 = none). Backspace is 8, Ctrl+V is 0x16.
unsigned PollChar();
std::string ClipboardText();

// UDP networking (added by the mod). Addresses are IPv4 in host byte order.
struct NetAddr {
    uint32_t ip = 0;
    uint16_t port = 0;
    bool operator==(const NetAddr &o) const { return ip == o.ip && port == o.port; }
};
const uint32_t NET_BROADCAST = 0xffffffffu;
bool NetInit();
// Opens a non-blocking UDP socket on `port` (0 = any free port); -1 on failure.
int UdpOpen(uint16_t port, bool broadcast);
void UdpClose(int sock);
bool UdpSend(int sock, const NetAddr &to, const void *data, int len);
// Next waiting datagram, or -1 if there is none.
int UdpRecv(int sock, NetAddr &from, void *buf, int max);
uint16_t UdpLocalPort(int sock);
bool NetResolve(const char *host, uint16_t port, NetAddr &out);
uint32_t NetLocalIP();   // this PC's main LAN address (0 if unknown)
std::string NetAddrString(uint32_t ip);

// Making a hosted game reachable from the internet, done on a background thread:
// UPnP port mapping on the router (and its external address), else the public address seen by a
// STUN server. Status: 0 working, 1 port mapped (ip = router's external address), 2 no mapping
// (ip = public address from STUN, or 0 if that failed too).
void NetStartPortMapping(uint16_t port);
int NetPortMappingStatus(uint32_t &externalIp);
void NetStopPortMapping();   // removes the mapping again (blocking, short timeouts)

// The asset archive linked into the executable.
const uint8_t *PakData(size_t *size);

}  // namespace plat
