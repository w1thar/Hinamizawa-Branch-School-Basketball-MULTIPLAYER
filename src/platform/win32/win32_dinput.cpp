// Every other gamepad on Windows through DirectInput 8: Switch Pro, 8BitDo, generic USB /
// Bluetooth pads, arcade sticks... Pads that XInput or the PlayStation HID reader already handle
// are skipped so nothing shows up twice. Button positions follow the common layout (0 = bottom,
// 1 = right, 2 = left, 3 = top, 4/5 = shoulders, ...); players can remap in Settings.
#define WIN32_LEAN_AND_MEAN
#ifndef NOMINMAX
#define NOMINMAX
#endif
#define DIRECTINPUT_VERSION 0x0800
#include <windows.h>
#include <dinput.h>

#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

#include "platform/platform.h"

namespace plat {

HWND Win32MainWindow();   // win32_platform.cpp

namespace dinput {

namespace {

struct Pad {
    int id;
    GUID instance;
    IDirectInputDevice8W *dev;
    char name[48];
    bool alive;
};

IDirectInput8W *g_di;
bool g_diTried;
std::vector<Pad> g_pads;
int g_nextId = 200;
std::vector<DWORD> g_skip;   // VID/PID (as in guidProduct.Data1) of XInput devices

bool Init()
{
    if (g_di) return true;
    if (g_diTried) return false;
    g_diTried = true;
    return SUCCEEDED(DirectInput8Create(GetModuleHandleW(nullptr), DIRECTINPUT_VERSION, IID_IDirectInput8W,
                                        (void **)&g_di, nullptr)) && g_di;
}

unsigned HexAfter(const std::wstring &s, const wchar_t *key)
{
    size_t i = s.find(key);
    if (i == std::wstring::npos) return 0;
    return (unsigned)wcstoul(s.c_str() + i + wcslen(key), nullptr, 16);
}

// XInput devices have "IG_" in their raw input device name.
void FindXInputDevices()
{
    g_skip.clear();
    UINT n = 0;
    if (GetRawInputDeviceList(nullptr, &n, sizeof(RAWINPUTDEVICELIST)) != 0 || n == 0) return;
    std::vector<RAWINPUTDEVICELIST> list(n);
    if (GetRawInputDeviceList(list.data(), &n, sizeof(RAWINPUTDEVICELIST)) == (UINT)-1) return;
    for (UINT i = 0; i < n; i++) {
        if (list[i].dwType != RIM_TYPEHID) continue;
        wchar_t name[512];
        UINT len = 512;
        if (GetRawInputDeviceInfoW(list[i].hDevice, RIDI_DEVICENAME, name, &len) == (UINT)-1) continue;
        std::wstring s = name;
        for (wchar_t &c : s) c = (wchar_t)towupper(c);
        if (s.find(L"IG_") == std::wstring::npos) continue;
        unsigned vid = HexAfter(s, L"VID_"), pid = HexAfter(s, L"PID_");
        g_skip.push_back(MAKELONG(vid, pid));
    }
}

bool Skipped(const DIDEVICEINSTANCEW &d)
{
    DWORD vp = d.guidProduct.Data1;
    unsigned vid = LOWORD(vp), pid = HIWORD(vp);
    if (vid == 0x054C && (pid == 0x05C4 || pid == 0x09CC || pid == 0x0BA0 || pid == 0x0CE6 || pid == 0x0DF2))
        return true;   // DualShock 4 / DualSense: read as HID
    for (DWORD s : g_skip)
        if (s == vp) return true;
    return false;
}

BOOL CALLBACK EnumAxis(const DIDEVICEOBJECTINSTANCEW *obj, void *ctx)
{
    auto *dev = (IDirectInputDevice8W *)ctx;
    DIPROPRANGE r = {};
    r.diph.dwSize = sizeof(r);
    r.diph.dwHeaderSize = sizeof(DIPROPHEADER);
    r.diph.dwHow = DIPH_BYID;
    r.diph.dwObj = obj->dwType;
    r.lMin = -1000;
    r.lMax = 1000;
    dev->SetProperty(DIPROP_RANGE, &r.diph);
    return DIENUM_CONTINUE;
}

BOOL CALLBACK EnumPad(const DIDEVICEINSTANCEW *d, void *)
{
    for (Pad &p : g_pads)
        if (p.alive && IsEqualGUID(p.instance, d->guidInstance)) return DIENUM_CONTINUE;
    if (Skipped(*d)) return DIENUM_CONTINUE;
    IDirectInputDevice8W *dev = nullptr;
    if (FAILED(g_di->CreateDevice(d->guidInstance, &dev, nullptr)) || !dev) return DIENUM_CONTINUE;
    if (FAILED(dev->SetDataFormat(&c_dfDIJoystick2)) ||
        FAILED(dev->SetCooperativeLevel(Win32MainWindow(), DISCL_BACKGROUND | DISCL_NONEXCLUSIVE))) {
        dev->Release();
        return DIENUM_CONTINUE;
    }
    dev->EnumObjects(EnumAxis, dev, DIDFT_AXIS);
    dev->Acquire();
    Pad p = {};
    p.id = g_nextId++;
    p.instance = d->guidInstance;
    p.dev = dev;
    p.alive = true;
    int n = WideCharToMultiByte(CP_UTF8, 0, d->tszProductName, -1, p.name, sizeof(p.name), nullptr, nullptr);
    if (n <= 1) snprintf(p.name, sizeof(p.name), "Gamepad");
    g_pads.push_back(p);
    return DIENUM_CONTINUE;
}

}  // namespace

void Scan()
{
    if (!Init()) return;
    for (size_t i = 0; i < g_pads.size();) {   // drop pads that went away
        if (!g_pads[i].alive) {
            g_pads[i].dev->Unacquire();
            g_pads[i].dev->Release();
            g_pads.erase(g_pads.begin() + i);
        } else {
            i++;
        }
    }
    FindXInputDevices();
    g_di->EnumDevices(DI8DEVCLASS_GAMECTRL, EnumPad, nullptr, DIEDFL_ATTACHEDONLY);
}

int List(GamepadInfo *out, int max)
{
    int n = 0;
    for (const Pad &p : g_pads) {
        if (n >= max || !p.alive) continue;
        out[n].id = p.id;
        out[n].type = PADTYPE_GENERIC;
        snprintf(out[n].name, sizeof(out[n].name), "%s", p.name);
        n++;
    }
    return n;
}

bool Read(int id, GamepadState &s)
{
    for (Pad &p : g_pads) {
        if (p.id != id) continue;
        if (!p.alive) return false;
        DIJOYSTATE2 js;
        p.dev->Poll();
        HRESULT hr = p.dev->GetDeviceState(sizeof(js), &js);
        if (hr == DIERR_INPUTLOST || hr == DIERR_NOTACQUIRED) {
            p.dev->Acquire();
            p.dev->Poll();
            hr = p.dev->GetDeviceState(sizeof(js), &js);
        }
        if (FAILED(hr)) {
            if (hr != DIERR_NOTACQUIRED && hr != DIERR_INPUTLOST) p.alive = false;   // unplugged
            s = GamepadState();
            return p.alive;
        }
        s = GamepadState();
        s.lx = js.lX / 1000.0f;
        s.ly = js.lY / 1000.0f;
        static const PadButton order[13] = {PAD_SOUTH, PAD_EAST, PAD_WEST, PAD_NORTH, PAD_L1, PAD_R1, PAD_L2,
                                            PAD_R2, PAD_SELECT, PAD_START, PAD_L3, PAD_R3, PAD_HOME};
        for (int b = 0; b < 13; b++) s.buttons[order[b]] = (js.rgbButtons[b] & 0x80) != 0;
        DWORD pov = js.rgdwPOV[0];
        if (LOWORD(pov) != 0xFFFF) {
            int deg = (int)(pov / 100) % 360;
            s.buttons[PAD_DPAD_UP] = deg >= 300 || deg <= 60;
            s.buttons[PAD_DPAD_RIGHT] = deg >= 30 && deg <= 150;
            s.buttons[PAD_DPAD_DOWN] = deg >= 120 && deg <= 240;
            s.buttons[PAD_DPAD_LEFT] = deg >= 210 && deg <= 330;
        }
        return true;
    }
    return false;
}

}  // namespace dinput
}  // namespace plat
