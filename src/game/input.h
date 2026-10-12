// Input devices for the mod: the keyboard and gamepads all map onto the original game's controls.
#pragma once

#include "platform/platform.h"

// Device ids: DEVICE_KEYBOARD, or a gamepad id from plat::ListGamepads().
const int DEVICE_NONE = -1;
const int DEVICE_KEYBOARD = -2;

// One player's controls, as the original's key-state values (KEY_FREE / PUSH / RELEASE / HOLD).
struct VirtualPad {
    int up = 0, down = 0, left = 0, right = 0;
    int pass = 0;      // X key  / Cross / A
    int shoot = 0;     // Z key  / Square / X
    int alt = 0;       // C key  / Circle / B
    int confirm = 0;   // Enter / Space / Cross / A
    int pause = 0;     // ESC / Options / Start
};

struct RawControls {
    bool up, down, left, right, pass, shoot, alt, confirm, pause;
    // Analog movement direction (left stick past its dead zone, or the d-pad), screen-relative with
    // +y = down; length 0..1. Always 0 for the keyboard, which keeps the original tank controls.
    float moveX, moveY;
};

// Reads the current raw state of a device; false if it is disconnected.
bool Input_ReadRaw(int device, RawControls &out);
// Advances a virtual pad by one frame using the original's PUSH/HOLD/RELEASE rules.
void Input_Step(VirtualPad &pad, const RawControls &raw);
// Display name of a device ("Keyboard", "DualSense", ...).
const char *Input_DeviceName(int device);
