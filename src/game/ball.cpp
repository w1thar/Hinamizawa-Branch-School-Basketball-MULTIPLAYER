// Free-ball physics, rim/backboard collisions and scoring (original fn_42b23c @ 0x42b23c).
// Ball state: v24c = position, f258 = horizontal speed, f25c = vertical speed, f260 = heading,
// f264 = spin angle. i268 = holder (-1 = loose). Hoops are at (+-35, 11, 0), backboards at x = +-36.
#include <cmath>

#include "game/game.h"

static float Atan2(float y, float x) { return (float)atan2((double)y, (double)x); }

void Game::fn_42b23c()
{
    if (i268 >= 0) return;

    // Both tests use the position from before this frame's move.
    bool aboveRim = 11.0f < v24c.y;
    bool insideBoards = -36.0f < v24c.x && v24c.x < 36.0f;
    if (f260 < -3.14f) f260 = f260 + 6.28f;
    if (3.14f < f260) f260 = f260 - 6.28f;
    v24c.x = sinf(f260) * f258 * dt + v24c.x;
    v24c.z = cosf(f260) * f258 * dt + v24c.z;

    if (0.7f <= v24c.y || 0.0f <= f25c) {
        f25c = f25c - dt * 20.0f;
        v24c.y = f25c * dt + v24c.y;
    } else {   // bounce on the floor
        f25c = f25c * -0.8f;
        f258 = f258 * 0.8f;
        v24c.y = 0.71f;
        f264 = sqrtf(f258) * 0.5f + f264;
        if (dt * 150.0f < f25c && b3a7) sound->Play(3);
    }

    // Left hoop (x = -35).
    if (v24c.x < -30.0f && aboveRim && v24c.y < 11.0f && f25c < 0.0f) {
        float d2 = v24c.z * v24c.z + (v24c.x + 35.0f) * (v24c.x + 35.0f);
        if (d2 < 0.25f) {   // through the hoop
            f258 = 0.0f;
            sound->Play(5);
            if (b3a6 == 0) {
                i3d8 = b3a8 ? i3d8 + 3 : i3d8 + 2;
                i418 = 1;
            } else {
                i3dc = b3a8 ? i3dc + 3 : i3dc + 2;
                i418 = 3;
            }
        } else if (d2 < 1.5f) {   // hits the rim from inside: pops up
            f258 = f258 * 0.2f;
            f25c = f25c * -0.5f;
            if (f25c < 1.0f) f25c = 1.0f;
            if (f258 < 1.0f) f258 = 1.0f;
            f260 = Atan2(-35.0f - v24c.x, -v24c.z);
            v24c.y = 11.001f;
            sound->Play(4);
        } else if (d2 < 4.0f) {   // glances off the outside of the rim
            f258 = f258 * 1.0f;
            f25c = f25c * -0.2f;
            f260 = Atan2(v24c.x + 35.0f, v24c.z);
            sound->Play(4);
        }
    }
    // Right hoop (x = +35).
    if (30.0f < v24c.x && aboveRim && v24c.y < 11.0f && f25c < 0.0f) {
        float d2 = v24c.z * v24c.z + (v24c.x - 35.0f) * (v24c.x - 35.0f);
        if (d2 < 0.25f) {
            f258 = 0.0f;
            sound->Play(5);
            if (b3a6 == 0) {
                i3dc = b3a8 ? i3dc + 3 : i3dc + 2;
                i418 = 2;
            } else {
                i3d8 = b3a8 ? i3d8 + 3 : i3d8 + 2;
                i418 = 4;
            }
        } else if (d2 < 1.5f) {
            f258 = f258 * 0.2f;
            f25c = f25c * -0.5f;
            if (f25c < 1.0f) f25c = 1.0f;
            if (f258 < 1.0f) f258 = 1.0f;
            f260 = Atan2(35.0f - v24c.x, -v24c.z);
            v24c.y = 11.001f;
            sound->Play(4);
        } else if (d2 < 4.0f) {
            f258 = f258 * 1.0f;
            f25c = f25c * -0.2f;
            f260 = Atan2(v24c.x - 35.0f, v24c.z);
            sound->Play(4);
        }
    }
    // Backboards.
    if (v24c.x < -36.0f && insideBoards && f260 < 0.0f && -4.0f < v24c.z && v24c.z < 4.0f && 9.0f < v24c.y &&
        v24c.y < 16.0f) {
        f260 = f260 * -1.0f;
        sound->Play(4);
    }
    if (36.0f < v24c.x && insideBoards && 0.0f < f260 && -4.0f < v24c.z && v24c.z < 4.0f && 9.0f < v24c.y &&
        v24c.y < 16.0f) {
        f260 = f260 * -1.0f;
        sound->Play(4);
    }
}
