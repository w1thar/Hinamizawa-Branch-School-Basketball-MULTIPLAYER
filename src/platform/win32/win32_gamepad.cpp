// Gamepads on Windows: XInput (Xbox-style pads) plus PlayStation DualShock 4 / DualSense read
// directly as HID devices, over USB or Bluetooth. hid.dll and xinput are loaded at run time.
#define WIN32_LEAN_AND_MEAN
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <setupapi.h>

#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

#include "platform/platform.h"

namespace plat {

namespace {

// ---- XInput ---------------------------------------------------------------------------------
struct XGamepad { WORD buttons; BYTE lt, rt; SHORT lx, ly, rx, ry; };
struct XState { DWORD packet; XGamepad pad; };
typedef DWORD(WINAPI *XInputGetStateFn)(DWORD, XState *);
XInputGetStateFn g_xinputGetState;
bool g_xinputTried;

void LoadXInput()
{
    if (g_xinputTried) return;
    g_xinputTried = true;
    const wchar_t *dlls[] = {L"xinput1_4.dll", L"xinput1_3.dll", L"xinput9_1_0.dll"};
    for (const wchar_t *d : dlls) {
        HMODULE m = LoadLibraryW(d);
        if (m) {
            g_xinputGetState = (XInputGetStateFn)(void *)GetProcAddress(m, "XInputGetState");
            if (g_xinputGetState) return;
        }
    }
}

bool ReadXInput(int slot, GamepadState &s)
{
    XState st;
    if (!g_xinputGetState || g_xinputGetState((DWORD)slot, &st) != ERROR_SUCCESS) return false;
    WORD b = st.pad.buttons;
    s = GamepadState();
    s.buttons[PAD_DPAD_UP] = (b & 0x0001) != 0;
    s.buttons[PAD_DPAD_DOWN] = (b & 0x0002) != 0;
    s.buttons[PAD_DPAD_LEFT] = (b & 0x0004) != 0;
    s.buttons[PAD_DPAD_RIGHT] = (b & 0x0008) != 0;
    s.buttons[PAD_START] = (b & 0x0010) != 0;
    s.buttons[PAD_SELECT] = (b & 0x0020) != 0;
    s.buttons[PAD_L3] = (b & 0x0040) != 0;
    s.buttons[PAD_R3] = (b & 0x0080) != 0;
    s.buttons[PAD_L1] = (b & 0x0100) != 0;
    s.buttons[PAD_R1] = (b & 0x0200) != 0;
    s.buttons[PAD_SOUTH] = (b & 0x1000) != 0;
    s.buttons[PAD_EAST] = (b & 0x2000) != 0;
    s.buttons[PAD_WEST] = (b & 0x4000) != 0;
    s.buttons[PAD_NORTH] = (b & 0x8000) != 0;
    s.buttons[PAD_L2] = st.pad.lt > 64;
    s.buttons[PAD_R2] = st.pad.rt > 64;
    s.lx = st.pad.lx / 32768.0f;
    s.ly = -st.pad.ly / 32768.0f;
    return true;
}

// ---- HID (PlayStation pads) -----------------------------------------------------------------
struct HiddAttributes { ULONG size; USHORT vendor, product, version; };
struct HidpCaps {
    USHORT usage, usagePage, inputLen, outputLen, featureLen;
    USHORT reserved[17];
    USHORT counts[10];
};
typedef BOOLEAN(__stdcall *HidD_GetAttributesFn)(HANDLE, HiddAttributes *);
typedef BOOLEAN(__stdcall *HidD_GetPreparsedDataFn)(HANDLE, void **);
typedef BOOLEAN(__stdcall *HidD_FreePreparsedDataFn)(void *);
typedef LONG(__stdcall *HidP_GetCapsFn)(void *, HidpCaps *);
typedef BOOLEAN(__stdcall *HidD_GetFeatureFn)(HANDLE, void *, ULONG);
HidD_GetAttributesFn pGetAttributes;
HidD_GetPreparsedDataFn pGetPreparsed;
HidD_FreePreparsedDataFn pFreePreparsed;
HidP_GetCapsFn pGetCaps;
HidD_GetFeatureFn pGetFeature;

bool LoadHid()
{
    static int state = 0;   // 0 untried, 1 ok, -1 unavailable
    if (state) return state > 0;
    HMODULE m = LoadLibraryW(L"hid.dll");
    if (m) {
        pGetAttributes = (HidD_GetAttributesFn)(void *)GetProcAddress(m, "HidD_GetAttributes");
        pGetPreparsed = (HidD_GetPreparsedDataFn)(void *)GetProcAddress(m, "HidD_GetPreparsedData");
        pFreePreparsed = (HidD_FreePreparsedDataFn)(void *)GetProcAddress(m, "HidD_FreePreparsedData");
        pGetCaps = (HidP_GetCapsFn)(void *)GetProcAddress(m, "HidP_GetCaps");
        pGetFeature = (HidD_GetFeatureFn)(void *)GetProcAddress(m, "HidD_GetFeature");
    }
    state = (pGetAttributes && pGetPreparsed && pFreePreparsed && pGetCaps) ? 1 : -1;
    return state > 0;
}

struct HidPad {
    int id;
    PadType type;
    std::string path;
    HANDLE handle = INVALID_HANDLE_VALUE;
    HANDLE thread = nullptr;
    int inputLen = 0;
    volatile bool alive = true;
    CRITICAL_SECTION lock;
    unsigned char report[128] = {};
    int reportLen = 0;
};

std::vector<HidPad *> g_hidPads;
int g_nextHidId = 100;
DWORD g_lastScan;

DWORD WINAPI HidReadThread(LPVOID param)
{
    HidPad *pad = (HidPad *)param;
    std::vector<unsigned char> buf(pad->inputLen > 0 ? pad->inputLen : 128);
    while (pad->alive) {
        DWORD n = 0;
        if (!ReadFile(pad->handle, buf.data(), (DWORD)buf.size(), &n, nullptr) || n == 0) break;
        EnterCriticalSection(&pad->lock);
        pad->reportLen = (int)(n < sizeof(pad->report) ? n : sizeof(pad->report));
        memcpy(pad->report, buf.data(), pad->reportLen);
        LeaveCriticalSection(&pad->lock);
    }
    pad->alive = false;
    return 0;
}

void RemoveDeadHidPads()
{
    for (size_t i = 0; i < g_hidPads.size();) {
        HidPad *p = g_hidPads[i];
        if (!p->alive) {
            CancelIoEx(p->handle, nullptr);
            WaitForSingleObject(p->thread, 500);
            CloseHandle(p->thread);
            CloseHandle(p->handle);
            DeleteCriticalSection(&p->lock);
            delete p;
            g_hidPads.erase(g_hidPads.begin() + i);
        } else {
            i++;
        }
    }
}

void ScanHid()
{
    if (!LoadHid()) return;
    static const GUID hidGuid = {0x4D1E55B2, 0xF16F, 0x11CF, {0x88, 0xCB, 0x00, 0x11, 0x11, 0x00, 0x00, 0x30}};
    HDEVINFO set = SetupDiGetClassDevsW(&hidGuid, nullptr, nullptr, DIGCF_PRESENT | DIGCF_DEVICEINTERFACE);
    if (set == INVALID_HANDLE_VALUE) return;
    SP_DEVICE_INTERFACE_DATA ifd;
    ifd.cbSize = sizeof(ifd);
    for (DWORD i = 0; SetupDiEnumDeviceInterfaces(set, nullptr, &hidGuid, i, &ifd); i++) {
        DWORD need = 0;
        SetupDiGetDeviceInterfaceDetailW(set, &ifd, nullptr, 0, &need, nullptr);
        std::vector<unsigned char> mem(need);
        auto *detail = (SP_DEVICE_INTERFACE_DETAIL_DATA_W *)mem.data();
        detail->cbSize = sizeof(SP_DEVICE_INTERFACE_DETAIL_DATA_W);
        if (!SetupDiGetDeviceInterfaceDetailW(set, &ifd, detail, need, nullptr, nullptr)) continue;
        std::wstring wpath = detail->DevicePath;
        std::string path(wpath.begin(), wpath.end());
        bool known = false;
        for (HidPad *p : g_hidPads)
            if (p->path == path) known = true;
        if (known) continue;

        HANDLE h = CreateFileW(wpath.c_str(), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr,
                               OPEN_EXISTING, 0, nullptr);
        if (h == INVALID_HANDLE_VALUE)
            h = CreateFileW(wpath.c_str(), GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, OPEN_EXISTING, 0, nullptr);
        if (h == INVALID_HANDLE_VALUE) continue;
        HiddAttributes attr = {sizeof(attr)};
        bool sony = pGetAttributes(h, &attr) && attr.vendor == 0x054C;
        PadType type = PADTYPE_DUALSHOCK4;
        if (sony && (attr.product == 0x05C4 || attr.product == 0x09CC || attr.product == 0x0BA0)) type = PADTYPE_DUALSHOCK4;
        else if (sony && (attr.product == 0x0CE6 || attr.product == 0x0DF2)) type = PADTYPE_DUALSENSE;
        else sony = false;
        if (!sony) {
            CloseHandle(h);
            continue;
        }
        HidPad *pad = new HidPad;
        pad->id = g_nextHidId++;
        pad->type = type;
        pad->path = path;
        pad->handle = h;
        void *pre = nullptr;
        if (pGetPreparsed(h, &pre)) {
            HidpCaps caps = {};
            if (pGetCaps(pre, &caps) >= 0) pad->inputLen = caps.inputLen;
            pFreePreparsed(pre);
        }
        // Reading feature report 0x05 switches a Bluetooth DualSense into its full input report;
        // 0x02 does the same for a DualShock 4. Harmless over USB, ignored if it fails.
        if (pGetFeature) {
            unsigned char feat[80] = {(unsigned char)(type == PADTYPE_DUALSENSE ? 0x05 : 0x02)};
            pGetFeature(h, feat, type == PADTYPE_DUALSENSE ? 41 : 37);
        }
        InitializeCriticalSection(&pad->lock);
        pad->thread = CreateThread(nullptr, 0, HidReadThread, pad, 0, nullptr);
        g_hidPads.push_back(pad);
    }
    SetupDiDestroyDeviceInfoList(set);
}

void DecodeDpad(int hat, GamepadState &s)
{
    s.buttons[PAD_DPAD_UP] = hat == 0 || hat == 1 || hat == 7;
    s.buttons[PAD_DPAD_RIGHT] = hat == 1 || hat == 2 || hat == 3;
    s.buttons[PAD_DPAD_DOWN] = hat == 3 || hat == 4 || hat == 5;
    s.buttons[PAD_DPAD_LEFT] = hat == 5 || hat == 6 || hat == 7;
}

// Buttons in the common PlayStation layout: b0 = hat + face buttons, b1 = shoulders/sticks/menu,
// b2 = PS button.
void DecodeButtons(unsigned char b0, unsigned char b1, unsigned char b2, GamepadState &s)
{
    DecodeDpad(b0 & 0x0f, s);
    s.buttons[PAD_WEST] = (b0 & 0x10) != 0;    // Square
    s.buttons[PAD_SOUTH] = (b0 & 0x20) != 0;   // Cross
    s.buttons[PAD_EAST] = (b0 & 0x40) != 0;    // Circle
    s.buttons[PAD_NORTH] = (b0 & 0x80) != 0;   // Triangle
    s.buttons[PAD_L1] = (b1 & 0x01) != 0;
    s.buttons[PAD_R1] = (b1 & 0x02) != 0;
    s.buttons[PAD_L2] = (b1 & 0x04) != 0;
    s.buttons[PAD_R2] = (b1 & 0x08) != 0;
    s.buttons[PAD_SELECT] = (b1 & 0x10) != 0;  // Share / Create
    s.buttons[PAD_START] = (b1 & 0x20) != 0;   // Options
    s.buttons[PAD_L3] = (b1 & 0x40) != 0;
    s.buttons[PAD_R3] = (b1 & 0x80) != 0;
    s.buttons[PAD_HOME] = (b2 & 0x01) != 0;
}

bool DecodeHid(const HidPad &pad, const unsigned char *r, int len, GamepadState &s)
{
    s = GamepadState();
    if (len < 10) return false;
    int stick = -1, btn = -1;
    if (pad.type == PADTYPE_DUALSHOCK4) {
        if (r[0] == 0x01) { stick = 1; btn = 5; }
        else if (r[0] == 0x11 && len >= 13) { stick = 3; btn = 7; }
    } else {
        bool bluetooth = pad.inputLen > 64;
        if (r[0] == 0x01 && !bluetooth && len >= 11) { stick = 1; btn = 8; }
        else if (r[0] == 0x01 && bluetooth) { stick = 1; btn = 5; }   // basic Bluetooth report
        else if (r[0] == 0x31 && len >= 12) { stick = 2; btn = 9; }
    }
    if (stick < 0) return false;
    s.lx = (r[stick] - 128) / 128.0f;
    s.ly = (r[stick + 1] - 128) / 128.0f;
    DecodeButtons(r[btn], r[btn + 1], r[btn + 2], s);
    return true;
}

const char *TypeName(PadType t)
{
    switch (t) {
    case PADTYPE_DUALSHOCK4: return "DUALSHOCK 4";
    case PADTYPE_DUALSENSE: return "DualSense";
    default: return "Xbox controller";
    }
}

}  // namespace

int ListGamepads(GamepadInfo *out, int max)
{
    LoadXInput();
    DWORD now = GetTickCount();
    RemoveDeadHidPads();
    if (g_lastScan == 0 || now - g_lastScan > 2000) {
        g_lastScan = now;
        ScanHid();
    }
    int n = 0;
    for (HidPad *p : g_hidPads) {
        if (n >= max || !p->alive) continue;
        out[n].id = p->id;
        out[n].type = p->type;
        snprintf(out[n].name, sizeof(out[n].name), "%s", TypeName(p->type));
        n++;
    }
    for (int slot = 0; slot < 4 && n < max; slot++) {
        GamepadState s;
        if (!ReadXInput(slot, s)) continue;
        out[n].id = slot;
        out[n].type = PADTYPE_XINPUT;
        snprintf(out[n].name, sizeof(out[n].name), "%s %d", TypeName(PADTYPE_XINPUT), slot + 1);
        n++;
    }
    return n;
}

bool ReadGamepad(int id, GamepadState &state)
{
    if (id < 4) {
        LoadXInput();
        return ReadXInput(id, state);
    }
    for (HidPad *p : g_hidPads) {
        if (p->id != id) continue;
        if (!p->alive) return false;
        unsigned char r[128];
        EnterCriticalSection(&p->lock);
        int len = p->reportLen;
        memcpy(r, p->report, len);
        LeaveCriticalSection(&p->lock);
        if (!DecodeHid(*p, r, len, state)) state = GamepadState();   // no report yet: neutral
        return true;
    }
    return false;
}

}  // namespace plat
