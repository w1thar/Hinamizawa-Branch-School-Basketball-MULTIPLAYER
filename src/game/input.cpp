#include "game/input.h"

#include <cmath>
#include <cstdio>

#include "game/game.h"
#include "game/settings.h"

static const float STICK_THRESHOLD = 0.5f;   // stick -> digital directions (menus, keyboard-style keys)
static const float STICK_DEADZONE = 0.3f;    // stick -> analog movement

int Input_KeyFor(int action, int which)
{
    if (action < 0 || action >= KB_ACTIONS || which < 0 || which > 1) return 0;
    if (g_settings.kbLayout == KB_WASD) return kKbWasd[action][which];
    if (g_settings.kbLayout == KB_CUSTOM) return g_settings.kbCustom[action][which];
    return kKbClassic[action][which];
}

const char *Input_PadButtonName(int b)
{
    static const char *const names[plat::PAD_BUTTON_COUNT] = {
        "× / A", "○ / B", "□ / X", "△ / Y", "L1 / LB", "R1 / RB", "L2 / LT", "R2 / RT",
        "Share / Back", "Options / Start", "L3", "R3", "PS / Home", "D-pad ↑", "D-pad ↓", "D-pad ←", "D-pad →"};
    return b >= 0 && b < plat::PAD_BUTTON_COUNT ? names[b] : "-";
}

static bool ActionKey(int action)
{
    for (int k = 0; k < 2; k++) {
        int vk = Input_KeyFor(action, k);
        if (vk && plat::KeyDown(vk)) return true;
    }
    return false;
}

bool Input_ReadRaw(int device, RawControls &out)
{
    out = RawControls();
    if (device == DEVICE_ANY) {
        Input_ReadRaw(DEVICE_KEYBOARD, out);
        plat::GamepadInfo pads[16];
        int n = plat::ListGamepads(pads, 16);
        for (int i = 0; i < n; i++) {
            RawControls r;
            if (!Input_ReadRaw(pads[i].id, r)) continue;
            out.up |= r.up; out.down |= r.down; out.left |= r.left; out.right |= r.right;
            out.pass |= r.pass; out.shoot |= r.shoot; out.alt |= r.alt;
            out.confirm |= r.confirm; out.pause |= r.pause;
            if (r.moveX * r.moveX + r.moveY * r.moveY > out.moveX * out.moveX + out.moveY * out.moveY) {
                out.moveX = r.moveX;
                out.moveY = r.moveY;
            }
        }
        return true;
    }
    if (device == DEVICE_KEYBOARD) {
        out.up = ActionKey(KACT_UP);
        out.down = ActionKey(KACT_DOWN);
        out.left = ActionKey(KACT_LEFT);
        out.right = ActionKey(KACT_RIGHT);
        out.pass = ActionKey(KACT_PASS);
        out.shoot = ActionKey(KACT_SHOOT);
        out.alt = ActionKey(KACT_ALT);
        // Enter always confirms; Space too with the original layout (it was an action key there).
        out.confirm = plat::KeyDown(plat::KEY_RETURN) || (g_settings.kbLayout == KB_CLASSIC && plat::KeyDown(plat::KEY_SPACE));
        out.pause = plat::KeyDown(plat::KEY_ESCAPE);
        // WASD / custom layouts move like a stick: the character runs the way you press (screen-
        // relative, diagonals included). The classic layout keeps the original turn-and-run.
        if (g_settings.kbLayout != KB_CLASSIC) {
            float x = (out.right ? 1.0f : 0.0f) - (out.left ? 1.0f : 0.0f);
            float y = (out.down ? 1.0f : 0.0f) - (out.up ? 1.0f : 0.0f);
            float d = sqrtf(x * x + y * y);
            if (d > 0.0f) {
                out.moveX = x / d;
                out.moveY = y / d;
            }
        }
        return true;
    }
    if (device < 0) return false;
    plat::GamepadState s;
    if (!plat::ReadGamepad(device, s)) return false;
    if (!plat::WindowFocused()) return true;   // connected, but this window is in the background
    out.up = s.buttons[plat::PAD_DPAD_UP] || s.ly < -STICK_THRESHOLD;
    out.down = s.buttons[plat::PAD_DPAD_DOWN] || s.ly > STICK_THRESHOLD;
    out.left = s.buttons[plat::PAD_DPAD_LEFT] || s.lx < -STICK_THRESHOLD;
    out.right = s.buttons[plat::PAD_DPAD_RIGHT] || s.lx > STICK_THRESHOLD;
    auto btn = [&](int action) {
        int b = g_settings.padMap[action];
        return b >= 0 && b < plat::PAD_BUTTON_COUNT && s.buttons[b];
    };
    out.pass = btn(PACT_PASS);
    out.shoot = btn(PACT_SHOOT);
    out.alt = btn(PACT_ALT);
    out.confirm = out.pass;
    out.pause = btn(PACT_PAUSE);
    float mag = sqrtf(s.lx * s.lx + s.ly * s.ly);
    if (mag > STICK_DEADZONE) {
        float len = mag > 1.0f ? 1.0f : mag;
        out.moveX = s.lx / mag * len;
        out.moveY = s.ly / mag * len;
    } else {
        float x = (s.buttons[plat::PAD_DPAD_RIGHT] ? 1.0f : 0.0f) - (s.buttons[plat::PAD_DPAD_LEFT] ? 1.0f : 0.0f);
        float y = (s.buttons[plat::PAD_DPAD_DOWN] ? 1.0f : 0.0f) - (s.buttons[plat::PAD_DPAD_UP] ? 1.0f : 0.0f);
        float d = sqrtf(x * x + y * y);
        if (d > 0.0f) {
            out.moveX = x / d;
            out.moveY = y / d;
        }
    }
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
    StepKey(pad.pause, raw.pause);
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
