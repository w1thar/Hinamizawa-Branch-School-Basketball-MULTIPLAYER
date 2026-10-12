#include "game/input.h"

#include <cstdio>

#include "game/game.h"

static const float STICK_THRESHOLD = 0.5f;

bool Input_ReadRaw(int device, RawControls &out)
{
    out = RawControls();
    if (device == DEVICE_KEYBOARD) {
        out.up = plat::KeyDown(plat::KEY_UP) || plat::KeyDown(plat::KEY_NUMPAD8);
        out.down = plat::KeyDown(plat::KEY_DOWN) || plat::KeyDown(plat::KEY_NUMPAD2);
        out.left = plat::KeyDown(plat::KEY_LEFT) || plat::KeyDown(plat::KEY_NUMPAD4);
        out.right = plat::KeyDown(plat::KEY_RIGHT) || plat::KeyDown(plat::KEY_NUMPAD6);
        out.pass = plat::KeyDown(plat::KEY_X);
        out.shoot = plat::KeyDown(plat::KEY_Z);
        out.alt = plat::KeyDown(plat::KEY_C);
        out.confirm = plat::KeyDown(plat::KEY_RETURN) || plat::KeyDown(plat::KEY_SPACE);
        return true;
    }
    if (device < 0) return false;
    plat::GamepadState s;
    if (!plat::ReadGamepad(device, s)) return false;
    out.up = s.buttons[plat::PAD_DPAD_UP] || s.ly < -STICK_THRESHOLD;
    out.down = s.buttons[plat::PAD_DPAD_DOWN] || s.ly > STICK_THRESHOLD;
    out.left = s.buttons[plat::PAD_DPAD_LEFT] || s.lx < -STICK_THRESHOLD;
    out.right = s.buttons[plat::PAD_DPAD_RIGHT] || s.lx > STICK_THRESHOLD;
    out.pass = s.buttons[plat::PAD_SOUTH];
    out.shoot = s.buttons[plat::PAD_WEST];
    out.alt = s.buttons[plat::PAD_EAST];
    out.confirm = s.buttons[plat::PAD_START];
    return true;
}

static void StepKey(int &state, bool down)
{
    if (down)
        state = state == KEY_FREE ? KEY_PUSH : KEY_HOLD;
    else
        state = (state == KEY_PUSH || state == KEY_HOLD) ? KEY_RELEASE : KEY_FREE;
}

void Input_Step(VirtualPad &pad, const RawControls &raw)
{
    StepKey(pad.up, raw.up);
    StepKey(pad.down, raw.down);
    StepKey(pad.left, raw.left);
    StepKey(pad.right, raw.right);
    StepKey(pad.pass, raw.pass);
    StepKey(pad.shoot, raw.shoot);
    StepKey(pad.alt, raw.alt);
    StepKey(pad.confirm, raw.confirm);
}

const char *Input_DeviceName(int device)
{
    if (device == DEVICE_KEYBOARD) return "Keyboard";
    plat::GamepadInfo pads[16];
    int n = plat::ListGamepads(pads, 16);
    static char name[64];
    for (int i = 0; i < n; i++) {
        if (pads[i].id == device) {
            snprintf(name, sizeof(name), "%s", pads[i].name);
            return name;
        }
    }
    return "-";
}
