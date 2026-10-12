// State 6: the match (original 0x40e400, 46KB of MSVC debug code).
//
// Each frame the six players are sorted per team by distance to the ball:
//   you1/com1 = the team's ball carrier, else the nearest player (you1 is the one YOU control)
//   you2/you3, com2/com3 = the other two, ordered by x so each keeps a side of the court.
//
// Player action states (Player::i190):
//   0 has ball, idle   1 has ball, forward   2 has ball, backing up
//   3 charging a loop pass/shot (Z)          4 holding the ball for a pass (X)
//   6 jump shot in the air                   7 no ball, idle   8 running   9 backing up
//  10 just threw a pass   11 just took a loop shot   12 just lost the ball   15 just jumped/threw
//
// Game fields used here: f3e0 clock, b414 dead ball (goal / out), i40c out side (1 x>38, 2 x<-38,
// 3 z>19, 4 z<-19), f410 throw-in coordinate, i408 player who sent it out / scorer side,
// i418 goal event (1..4, then 5 = "walk back"), i404 last touch, i3fc loop-shot charger,
// i3ac shot-type marker (1 blue loop pass, 2 green loop shot, 3 red jump shot), i39c power marker,
// f400 COM reaction divisor, f41c club-mode shot clock, b3a8 three-pointer.
#include <cmath>

#include "game/game.h"

static float Atan2(float y, float x) { return (float)atan2((double)y, (double)x); }

void Game::State6()
{
    Player **P = players;

    // Small helpers for the patterns the original repeats inline everywhere.
    auto Step = [&](int i) { P[i]->pos = CalcStep(i); };
    auto Turn = [&](int i, float target, float rate) { P[i]->yaw = RotateToward(target, P[i]->yaw, rate); };
    auto TurnTo = [&](int i, float x, float z, float rate) {
        float a = Atan2(P[i]->pos.x - x, P[i]->pos.z - z);
        P[i]->yaw = RotateToward(a, P[i]->yaw, rate);
    };
    // Ball leaves the hand 2 units in front of the player.
    auto BallInFront = [&](int i) {
        v24c.x = -sinf(-P[i]->yaw) * -2.0f + P[i]->pos.x;
        v24c.z = cosf(-P[i]->yaw) * -2.0f + P[i]->pos.z;
    };
    // Player i passes towards player `to`.
    auto PassTo = [&](int i, int to) {
        sound->Play(1);
        P[i]->f198 = 0.0f;
        P[i]->yaw = Atan2(P[i]->pos.x - P[to]->pos.x, P[i]->pos.z - P[to]->pos.z);
        P[i]->i190 = 10;
        P[i]->Motion_4305b1();
        f260 = P[i]->yaw - 3.14f;
        f25c = P[i]->stat174;
        f258 = P[i]->stat178;
        v24c.x = -sinf(-P[i]->yaw) * -2.0f + P[i]->pos.x;
        v24c.y = P[i]->stat170 * 0.9f;
        v24c.z = cosf(-P[i]->yaw) * -2.0f + P[i]->pos.z;
        i404 = i;
        i268 = -1;
    };
    // Throw-in: the same pass, which also ends the dead ball.
    auto ThrowIn = [&](int i, int to) {
        PassTo(i, to);
        b414 = false;
    };
    // Practice mode: the COM trainer (slot 5) throws the ball in.
    auto TrainerThrowIn = [&](float yaw) {
        sound->Play(1);
        P[slot[5]]->f198 = 0.0f;
        P[slot[5]]->yaw = yaw;
        P[slot[5]]->i190 = 10;
        P[slot[5]]->Motion_4305b1();
    };
    auto TrainerRelease = [&]() {
        int t = slot[5];
        f260 = P[t]->yaw - 3.14f;
        f25c = P[t]->stat174;
        f258 = P[t]->stat178;
        v24c.x = -sinf(-P[t]->yaw) * -2.0f + P[t]->pos.x;
        v24c.y = P[t]->stat170 * 0.9f;
        v24c.z = cosf(-P[t]->yaw) * -2.0f + P[t]->pos.z;
        i404 = t;
        i268 = -1;
        b414 = false;
    };
    // YOU take the ball out of bounds yourself (club mode starts the 3.5s shot clock).
    auto YouTakeBall = [&](int you1) {
        if (i3b0 == 1) f41c = 3.5f;
        P[you1]->i190 = 4;
        P[you1]->Motion_430497();
        i268 = you1;
    };

    f3e0 = f3e0 - dt;
    int you1 = 0, com1 = 0;
    float youDist = 10000.0f, comDist = 10000.0f;
    int you2 = 0, you3 = 0, com2 = 0, com3 = 0;

    if (f3e0 < 0.0f) {
        // ---- time up ----
        if (i3b8 < 5) {
            v24c.y = 0.7f;
            f25c = 0.0f;
            f390 = 0.0f;
            if (b3a6 == 0) {
                sound->Play(0);
                for (int i = 0; i < 6; i++) {
                    P[i]->i190 = 7;
                    P[i]->Motion_Stand();
                }
            } else {
                LoadSoundSet(0);
                sound->Play(6);
            }
        }
        f390 = f390 + dt;
        i3b8 = 5;
        i39c = 0;
        f3a0 = -1.0f;
        i3ac = 0;
        f3e0 = 0.0f;
        camPos = Vec3(0.0f, 6.0f, -20.0f);
        camDir = Vec3(0.0f, 0.0f, 1.0f);
        if (5.0f < f390) {
            if (b3a6 == 0) {
                i3b8 = 0;
                state = 7;
            } else {
                i3b8 = 0;
                state = 8;
                f390 = 0.0f;
            }
        }
        return;
    }

    // ---- sort players by distance to the ball ----
    for (int i = 0; i < 6; i++) {
        f3bc = (P[i]->pos.x - v24c.x) * (P[i]->pos.x - v24c.x) + (P[i]->pos.z - v24c.z) * (P[i]->pos.z - v24c.z);
        if (P[i]->b154) {
            if (P[i]->i190 < 3 || (f3bc < youDist && P[i]->i190 < 15)) {
                you3 = you2;
                you2 = you1;
                you1 = i;
                youDist = f3bc;
            } else {
                you3 = you2;
                you2 = i;
            }
        } else {
            if (P[i]->i190 < 3 || (f3bc < comDist && P[i]->i190 < 10)) {
                com3 = com2;
                com2 = com1;
                com1 = i;
                comDist = f3bc;
            } else {
                com3 = com2;
                com2 = i;
            }
        }
    }
    if (b3a6 != 0) {
        if (P[you2]->pos.x < P[you3]->pos.x) { int t = you2; you2 = you3; you3 = t; }
        if (P[com2]->pos.x > P[com3]->pos.x) { int t = com2; com2 = com3; com3 = t; }
    } else {
        if (P[you2]->pos.x > P[you3]->pos.x) { int t = you2; you2 = you3; you3 = t; }
        if (P[com2]->pos.x < P[com3]->pos.x) { int t = com2; com2 = com3; com3 = t; }
    }

    // ---- goals: i418 1..4 from the ball physics; the conceding team takes the ball out ----
    if (i418 == 1) {
        b414 = true; f390 = 0.0f; i408 = you1; sound->Play(0); i40c = 2; f410 = -3.0f; i418 = 5;
    } else if (i418 == 2) {
        b414 = true; f390 = 0.0f; i408 = com1; sound->Play(0); i40c = 1; f410 = -3.0f; i418 = 5;
    } else if (i418 == 3) {
        b414 = true; f390 = 0.0f; i408 = com1; sound->Play(0); i40c = 2; f410 = -3.0f; i418 = 5;
    } else if (i418 == 4) {
        b414 = true; f390 = 0.0f; i408 = you1; sound->Play(0); i40c = 1; f410 = -3.0f; i418 = 5;
    }

    // ---- which line is the ball beyond ----
    if (i40c == 0) {
        if (v24c.x > 38.0f) {
            i40c = 1;
            f410 = v24c.z;
        } else if (v24c.x < -38.0f) {
            i40c = 2;
            f410 = v24c.z;
        } else if (v24c.z > 19.0f) {
            i40c = 3;
            f410 = v24c.x;
        } else if (v24c.z < -19.0f) {
            i40c = 4;
            f410 = v24c.x;
        }
    }
    if (!b414 && v24c.y < 1.0f) {
        if (v24c.x <= 38.0f && -38.0f <= v24c.x && v24c.z <= 19.0f && -19.0f <= v24c.z) {
            b414 = false;
            i40c = 0;
            f410 = 0.0f;
        } else {   // out of bounds
            b414 = true;
            f390 = 0.0f;
            i408 = i404;
            sound->Play(6);
            if (0 < i268) f258 = 0.0f;
        }
    }

    // ---- dead ball: freeze for 3s, then line everyone up for the throw-in ----
    if (b414) {
        f390 = f390 + dt;
        if (f390 <= 3.0f) {
            for (int i = 0; i < 6; i++) P[i]->i190 = 7;
            i268 = -1;
        } else {
            LoadSoundSet(1);
            i418 = 0;
            youDist = 100.0f;
            comDist = 100.0f;
            for (int i = 0; i < 6; i++) {
                P[i]->i190 = 7;
                P[i]->Motion_Stand();
            }
            if (i40c == 1) {   // right end line (x = +38)
                if (i3b0 == 2) {
                    P[slot[5]]->SetPos(40.0f, 0.0f, f410, 1.54f);
                    TrainerThrowIn(1.54f);
                    P[you1]->SetPos(10.0f, 0.0f, f410, -1.54f);
                    P[you2]->SetPos(15.0f, 0.0f, f410 + 5.0f, -1.54f);
                    P[you3]->SetPos(16.0f, 0.0f, f410 - 5.0f, -1.54f);
                    TrainerRelease();
                } else if (b3a6 == 0) {
                    if (!P[i408]->b154) {   // COM sent it out / scored: YOU throw in
                        YouTakeBall(you1);
                        P[you1]->SetPos(38.0f, 0.0f, f410, 1.54f);
                        P[you2]->SetPos(30.0f, 0.0f, f410 + 5.0f, -1.54f);
                        P[you3]->SetPos(32.0f, 0.0f, f410 - 5.0f, -1.54f);
                        P[com2]->SetPos(1.0f, 0.0f, 4.0f, 1.54f);
                        P[com3]->SetPos(2.0f, 0.0f, -4.0f, 1.54f);
                        P[com1]->SetPos(3.0f, 0.0f, 0.0f, 1.54f);
                        i404 = you1;
                        b414 = false;
                    } else {
                        i40c = f410 <= 0.0f ? 4 : 3;
                        f410 = 35.0f;
                    }
                } else if (!P[i408]->b154) {
                    i40c = f410 <= 0.0f ? 4 : 3;
                    f410 = 35.0f;
                } else {
                    P[com1]->SetPos(38.0f, 0.0f, f410, 1.54f);
                    P[com2]->SetPos(30.0f, 0.0f, f410 + 5.0f, -1.54f);
                    P[com3]->SetPos(32.0f, 0.0f, f410 - 5.0f, -1.54f);
                    P[you2]->SetPos(10.0f, 0.0f, 4.0f, -1.54f);
                    P[you3]->SetPos(2.0f, 0.0f, -4.0f, 1.54f);
                    P[you1]->SetPos(3.0f, 0.0f, 0.0f, 1.54f);
                    ThrowIn(com1, com2);
                }
            } else if (i40c == 2) {   // left end line (x = -38)
                if (i3b0 == 2) {
                    P[slot[5]]->SetPos(-40.0f, 0.0f, f410, -1.54f);
                    TrainerThrowIn(-1.54f);
                    P[you1]->SetPos(-10.0f, 0.0f, f410, 1.54f);
                    P[you2]->SetPos(-15.0f, 0.0f, f410 + 5.0f, 1.54f);
                    P[you3]->SetPos(-16.0f, 0.0f, f410 - 5.0f, 1.54f);
                    TrainerRelease();
                } else if (b3a6 == 0) {
                    if (!P[i408]->b154) {
                        i40c = f410 <= 0.0f ? 4 : 3;
                        f410 = -35.0f;
                    } else {
                        P[com1]->SetPos(-38.0f, 0.0f, f410, -1.54f);
                        P[com2]->SetPos(-30.0f, 0.0f, f410 + 5.0f, 1.54f);
                        P[com3]->SetPos(-32.0f, 0.0f, f410 - 5.0f, 1.54f);
                        P[you2]->SetPos(-10.0f, 0.0f, 4.0f, 1.54f);
                        P[you3]->SetPos(2.0f, 0.0f, -4.0f, -1.54f);
                        P[you1]->SetPos(3.0f, 0.0f, 0.0f, -1.54f);
                        ThrowIn(com1, com2);
                    }
                } else if (!P[i408]->b154) {
                    YouTakeBall(you1);
                    P[you1]->SetPos(-38.0f, 0.0f, f410, -1.54f);
                    P[you2]->SetPos(-30.0f, 0.0f, f410 + 5.0f, 1.54f);
                    P[you3]->SetPos(-32.0f, 0.0f, f410 - 5.0f, 1.54f);
                    P[com2]->SetPos(1.0f, 0.0f, 4.0f, -1.54f);
                    P[com3]->SetPos(2.0f, 0.0f, -4.0f, -1.54f);
                    P[com1]->SetPos(3.0f, 0.0f, 0.0f, -1.54f);
                    i404 = you1;
                    b414 = false;
                } else {
                    i40c = f410 <= 0.0f ? 4 : 3;
                    f410 = -35.0f;
                }
            }
            if (i40c == 3) {   // far side line (z = +19)
                if (i3b0 == 2) {
                    P[slot[5]]->SetPos(f410, 0.0f, 20.0f, 0.0f);
                    TrainerThrowIn(0.0f);
                    P[you1]->SetPos(f410, 0.0f, 0.0f, 3.14f);
                    P[you2]->SetPos(f410 + 5.0f, 0.0f, 3.0f, 3.14f);
                    P[you3]->SetPos(f410 - 1.0f, 0.0f, 4.0f, 3.14f);
                    TrainerRelease();
                } else if (!P[i408]->b154) {
                    YouTakeBall(you1);
                    P[you1]->SetPos(f410, 0.0f, 20.0f, 0.0f);
                    P[you2]->SetPos(f410 + 5.0f, 0.0f, 10.0f, 3.14f);
                    P[you3]->SetPos(f410 - 1.0f, 0.0f, 12.0f, 3.14f);
                    P[com2]->SetPos(f410 + 8.0f, 0.0f, 5.0f, 3.14f);
                    P[com3]->SetPos(f410 - 8.0f, 0.0f, 4.0f, 3.14f);
                    P[com1]->SetPos(f410, 0.0f, 0.0f, 3.14f);
                    i404 = you1;
                    b414 = false;
                } else {
                    P[com1]->SetPos(f410, 0.0f, 20.0f, 0.0f);
                    P[com2]->SetPos(f410 + 5.0f, 0.0f, 10.0f, 3.14f);
                    P[com3]->SetPos(f410 - 1.0f, 0.0f, 12.0f, 3.14f);
                    P[you2]->SetPos(f410 + 8.0f, 0.0f, 1.0f, 3.14f);
                    P[you3]->SetPos(f410 - 8.0f, 0.0f, 2.0f, 3.14f);
                    P[you1]->SetPos(f410, 0.0f, 3.0f, 3.14f);
                    ThrowIn(com1, com2);
                }
            } else if (i40c == 4) {   // near side line (z = -19)
                if (i3b0 == 2) {
                    P[slot[5]]->SetPos(f410, 0.0f, -20.0f, 3.14f);
                    TrainerThrowIn(3.14f);
                    P[you1]->SetPos(f410, 0.0f, 0.0f, 0.0f);
                    P[you2]->SetPos(f410 + 5.0f, 0.0f, -3.0f, 0.0f);
                    P[you3]->SetPos(f410 - 1.0f, 0.0f, -4.0f, 0.0f);
                    TrainerRelease();
                } else if (!P[i408]->b154) {
                    YouTakeBall(you1);
                    P[you1]->SetPos(f410, 0.0f, -20.0f, 3.14f);
                    P[you2]->SetPos(f410 + 5.0f, 0.0f, -10.0f, 0.0f);
                    P[you3]->SetPos(f410 - 1.0f, 0.0f, -12.0f, 0.0f);
                    P[com2]->SetPos(f410 + 8.0f, 0.0f, -5.0f, 0.0f);
                    P[com3]->SetPos(f410 - 8.0f, 0.0f, -4.0f, 0.0f);
                    P[com1]->SetPos(f410, 0.0f, 0.0f, 0.0f);
                    i404 = you1;
                    b414 = false;
                } else {
                    P[com1]->SetPos(f410, 0.0f, -20.0f, 3.14f);
                    P[com2]->SetPos(f410 + 5.0f, 0.0f, -10.0f, 0.0f);
                    P[com3]->SetPos(f410 - 1.0f, 0.0f, -12.0f, 0.0f);
                    P[you2]->SetPos(f410 + 8.0f, 0.0f, -5.0f, 0.0f);
                    P[you3]->SetPos(f410 - 8.0f, 0.0f, -4.0f, 0.0f);
                    P[you1]->SetPos(f410, 0.0f, 0.0f, 0.0f);
                    ThrowIn(com1, com2);
                }
            }
        }
    }

    // ---- the player YOU control (you1) ----
    bool upHeld = keyUp == KEY_HOLD || keyNum8 == KEY_HOLD;
    bool downHeld = keyDown == KEY_HOLD || keyNum2 == KEY_HOLD;
    // Mod: with a gamepad stick / d-pad the player turns to face the pushed direction and runs that
    // way. The camera looks along +z with +x to the right, so screen up = +z and right = +x; a
    // player with yaw a moves along (-sin a, -cos a). While charging a loop shot (i190 3) the
    // camera sits behind the player, so there the stick keeps the original left/right turning.
    bool analog = padMove && P[you1]->i190 != 3 && P[you1]->i190 < 10;
    if (analog) {
        float target = Atan2(-padMoveX, padMoveY);
        float diff = target - P[you1]->yaw;
        while (diff > 3.14159265f) diff -= 6.2831853f;
        while (diff < -3.14159265f) diff += 6.2831853f;
        float stepAngle = 12.0f * dt;   // rad/s; clamped so it settles instead of jittering
        if (diff > stepAngle) diff = stepAngle;
        if (diff < -stepAngle) diff = -stepAngle;
        P[you1]->yaw += diff;
        // Run once roughly facing the stick direction (pivot first on sharp turns).
        float rest = target - P[you1]->yaw;
        while (rest > 3.14159265f) rest -= 6.2831853f;
        while (rest < -3.14159265f) rest += 6.2831853f;
        upHeld = rest > -1.2f && rest < 1.2f;
        downHeld = false;
    }
    if (P[you1]->i190 < 3 && upHeld) {
        Step(you1);
        P[you1]->i190 = 1;
        P[you1]->Motion_42f1a9();   // dribble forward
    } else if (P[you1]->i190 >= 7 && P[you1]->i190 <= 9 && upHeld) {
        Step(you1);
        P[you1]->i190 = 8;
        P[you1]->Motion_42dfc0();   // run
    } else if (P[you1]->i190 < 3 && downHeld) {
        P[you1]->pos.x = sinf(P[you1]->yaw) * P[you1]->stat168 * 0.6f * dt + P[you1]->pos.x;
        P[you1]->pos.z = cosf(P[you1]->yaw) * P[you1]->stat168 * 0.6f * dt + P[you1]->pos.z;
        P[you1]->i190 = 2;
        P[you1]->Motion_42fb3f();   // dribble backwards
    } else if (P[you1]->i190 >= 7 && P[you1]->i190 <= 9 && downHeld) {
        P[you1]->pos.x = sinf(P[you1]->yaw) * P[you1]->stat168 * 0.6f * dt + P[you1]->pos.x;
        P[you1]->pos.z = cosf(P[you1]->yaw) * P[you1]->stat168 * 0.6f * dt + P[you1]->pos.z;
        P[you1]->i190 = 9;
        P[you1]->Motion_42e9cd();   // back-pedal
    } else if (P[you1]->i190 < 3) {
        P[you1]->i190 = 0;
        P[you1]->Motion_42ee86();
    } else if (6 < P[you1]->i190 && P[you1]->i190 < 10) {
        P[you1]->i190 = 7;
        P[you1]->Motion_Stand();
    }

    // X: hold to keep the ball (and stop the club shot clock running out), release to pass.
    if (P[you1]->i190 < 3 && keyX == KEY_HOLD) {
        P[you1]->i190 = 4;
        P[you1]->Motion_430497();
        if (i3b0 == 1) f41c = 3.5f;
    }
    if ((P[you1]->i190 == 3 || P[you1]->i190 == 4) && i3b0 == 1) f41c = f41c - dt;
    if (P[you1]->i190 == 4 && (keyX == KEY_RELEASE || f41c < -0.01f)) {
        sound->Play(1);
        P[you1]->f198 = 0.0f;
        P[you1]->i190 = 10;
        P[you1]->Motion_4305b1();
        f41c = 0.0f;
        f260 = P[you1]->yaw - 3.14f;
        f25c = P[you1]->stat174;
        f258 = P[you1]->stat178;
        BallInFront(you1);
        i404 = you1;
        i268 = -1;
    }
    // Z in the red-cone zone: jump shot.
    if (i3ac == 3 && keyZ == KEY_PUSH) {
        sound->Play(1);
        P[you1]->i190 = 6;
        P[you1]->Motion_430a58();
        P[you1]->f198 = 0.0f;
        P[you1]->f18c = 12.0f;
    }
    // Z held: charge a loop pass / loop shot (power f3a0 cycles 0..1).
    if (P[you1]->i190 < 3 && keyZ == KEY_HOLD) {
        P[you1]->i190 = 3;
        P[you1]->Motion_430497();
        i3fc = you1;
        i3b8 = 2;
        if (i3b0 == 1) f41c = 10.0f;
    }
    if (P[you1]->i190 == 3) {
        if (keyZ != KEY_RELEASE && (f41c <= 5.0f || 6.5f <= f41c)) {
            f3a0 = f3a0 + dt;
            if (1.0f < f3a0) f3a0 = 0.001f;
        } else {
            sound->Play(1);
            P[you1]->f198 = 0.0f;
            P[you1]->i190 = 11;
            P[you1]->Motion_430701();
            f260 = P[you1]->yaw - 3.14f;
            f25c = 23.0f;
            f258 = f3a0 * P[you1]->stat17c + 1.0f;
            BallInFront(you1);
            i404 = you1;
            f41c = 0.0f;
            i268 = -1;
            float hx = b3a6 == 0 ? P[you1]->pos.x + 35.0f : P[you1]->pos.x - 35.0f;
            b3a8 = 225.0f <= P[you1]->pos.z * P[you1]->pos.z + hx * hx;   // 15+ units out: 3 points
        }
    }

    // Turning; after a goal / when the ball is loose the controlled player is steered for you.
    if (analog) {
        // steered above
    } else if ((keyRight == KEY_HOLD || keyNum6 == KEY_HOLD) && P[you1]->i190 < 10) {
        if (P[you1]->i190 == 0 || (3 < P[you1]->i190 && P[you1]->i190 < 8))
            P[you1]->yaw = dt * 5.0f + P[you1]->yaw;
        else
            P[you1]->yaw = dt * 2.0f + P[you1]->yaw;
    } else if ((keyLeft == KEY_HOLD || keyNum4 == KEY_HOLD) && P[you1]->i190 < 10) {
        if (P[you1]->i190 == 0 || (3 < P[you1]->i190 && P[you1]->i190 < 8))
            P[you1]->yaw = P[you1]->yaw - dt * 5.0f;
        else
            P[you1]->yaw = P[you1]->yaw - dt * 2.0f;
    } else if (i418 == 5) {
        if (b3a6 == 0) TurnTo(you1, 35.0f, 0.0f, 2.0f);
        else TurnTo(you1, -35.0f, 0.0f, 2.0f);
        Step(you1);
        P[you1]->Motion_42dfc0();
    } else if (P[you1]->i190 == 7 && i268 < 0) {
        TurnTo(you1, v24c.x, v24c.z, 10.0f);
        Step(you1);
        P[you1]->Motion_42dfc0();
    }

    // ---- YOU teammates (you2 = forward wing, you3 = support) ----
    auto RunTo = [&](int i, float yaw) {
        Turn(i, yaw, 5.0f);
        Step(i);
        P[i]->Motion_42dfc0();
    };
    auto WatchBall = [&](int i) {
        TurnTo(i, v24c.x, v24c.z, 5.0f);
        P[i]->Motion_Stand();
    };
    bool upFree = keyUp == KEY_FREE && keyNum8 == KEY_FREE && !analog;
    if (b3a6 == 0) {   // YOU attack the hoop at x = -35
        if (6 < P[you2]->i190 && P[you2]->i190 < 10) {
            if (P[you2]->pos.z > 18.0f) RunTo(you2, 0.0f);
            else if (P[you2]->pos.z < -18.0f) RunTo(you2, 3.14f);
            else if (P[you1]->pos.x <= -25.0f) {
                if (P[you1]->pos.z <= 0.0f) TurnTo(you2, -30.0f, 15.0f, 5.0f);
                else TurnTo(you2, -30.0f, -15.0f, 5.0f);
                Step(you2);
                P[you2]->Motion_42dfc0();
            } else if (P[you2]->pos.x - P[you1]->pos.x > -10.0f) {
                RunTo(you2, 1.57f);
            } else if (P[you2]->pos.x - P[you1]->pos.x < -15.0f) {
                RunTo(you2, -1.57f);
            } else if (upFree) {
                WatchBall(you2);
            }
        }
        if (6 < P[you3]->i190 && P[you3]->i190 < 10) {
            float dx = P[you3]->pos.x - P[you1]->pos.x, dz = P[you3]->pos.z - P[you1]->pos.z;
            if (P[you3]->pos.z > 18.0f) RunTo(you3, 0.0f);
            else if (P[you3]->pos.z < -18.0f) RunTo(you3, 3.14f);
            else if (P[you3]->pos.x < -35.0f) RunTo(you3, -1.57f);
            else if (P[you3]->pos.x > 35.0f) RunTo(you3, 1.57f);
            else if (dx > 12.0f) RunTo(you3, 1.57f);
            else if (dx < -3.0f) RunTo(you3, -1.57f);
            else if (dz > 6.0f) RunTo(you3, 0.0f);
            else if (dz < -6.0f) RunTo(you3, 3.14f);
            else if (keyX == KEY_HOLD) {   // circle around while YOU look for the pass
                P[you3]->yaw = dt * 5.0f + P[you3]->yaw;
                Step(you3);
                P[you3]->Motion_42dfc0();
            } else if (upFree) {
                WatchBall(you3);
            }
        }
    } else {   // second half: YOU attack the hoop at x = +35
        if (6 < P[you2]->i190 && P[you2]->i190 < 10) {
            if (P[you2]->pos.z > 18.0f) RunTo(you2, 0.0f);
            else if (P[you2]->pos.z < -18.0f) RunTo(you2, 3.14f);
            else if (25.0f <= P[you1]->pos.x) {
                if (P[you1]->pos.z <= 0.0f) TurnTo(you2, 30.0f, 15.0f, 5.0f);
                else TurnTo(you2, 30.0f, -15.0f, 5.0f);
                Step(you2);
                P[you2]->Motion_42dfc0();
            } else if (P[you2]->pos.x - P[you1]->pos.x < 10.0f) {
                RunTo(you2, -1.57f);
            } else if (P[you2]->pos.x - P[you1]->pos.x > 15.0f) {
                RunTo(you2, 1.57f);
            } else if (upFree) {
                WatchBall(you2);
            }
        }
        if (6 < P[you3]->i190 && P[you3]->i190 < 10) {
            float dx = P[you3]->pos.x - P[you1]->pos.x, dz = P[you3]->pos.z - P[you1]->pos.z;
            if (P[you3]->pos.z > 18.0f) RunTo(you3, 0.0f);
            else if (P[you3]->pos.z < -18.0f) RunTo(you3, 3.14f);
            else if (P[you3]->pos.x < -35.0f) RunTo(you3, -1.57f);
            else if (P[you3]->pos.x > 35.0f) RunTo(you3, 1.57f);
            else if (dx < -12.0f) RunTo(you3, -1.57f);
            else if (dx > 3.0f) RunTo(you3, 1.57f);
            else if (dz > 6.0f) RunTo(you3, 0.0f);
            else if (dz < -6.0f) RunTo(you3, 3.14f);
            else if (keyX == KEY_HOLD) {
                P[you3]->yaw = dt * 5.0f + P[you3]->yaw;
                Step(you3);
                P[you3]->Motion_42dfc0();
            } else if (upFree) {
                WatchBall(you3);
            }
        }
    }

    // ---- COM ----
    if (i3b0 == 2) {
        // Practice: the trainer (slot 5) stands still in the first half and chases in the second.
        int t = slot[5];
        if (P[t]->i190 != 10 && P[t]->i190 != 12) {
            if ((P[you1]->i190 != 3 && P[you1]->i190 != 4) || 10.0f <= comDist) {
                if (i268 == t) {
                    TurnTo(t, -30.0f, 0.0f, 5.0f);
                    if (b3a6 != 0) {
                        Step(t);
                        P[t]->Motion_42f1a9();
                    }
                } else {
                    TurnTo(t, v24c.x, v24c.z, 5.0f);
                    if (b3a6 != 0) {
                        Step(t);
                        P[t]->Motion_42dfc0();
                    }
                }
            } else {
                P[t]->yaw = dt * 2.0f + P[t]->yaw;
                if (b3a6 != 0) {
                    Step(t);
                    P[t]->Motion_42dfc0();
                }
            }
        }
        TurnTo(slot[4], v24c.x, v24c.z, 2.0f);
        TurnTo(slot[3], v24c.x, v24c.z, 2.0f);
    } else {
        // com1: the ball carrier / chaser.
        if (i418 == 5) {
            if (b3a6 == 0) TurnTo(com1, -35.0f, 0.0f, 2.0f);
            else TurnTo(com1, 35.0f, 0.0f, 2.0f);
            Step(com1);
            P[com1]->Motion_42dfc0();
        } else if (com1 == i268) {
            if (P[com1]->i190 < 4) {
                Player *c = P[com1];
                float x = c->pos.x, z = c->pos.z;
                // Shot strength needed from here: ((dist - 2) * 0.53 - 1) / jump stat; < 1 = in range.
                auto Shoot = [&](float hoopX, float aimX) {
                    float dist = sqrtf((x - hoopX) * (x - hoopX) + z * z);
                    float power = ((dist - 2.0f) * 0.53f - 1.0f) / c->stat17c;
                    float yd2 = (c->pos.x - P[you1]->pos.x) * (c->pos.x - P[you1]->pos.x) +
                                (c->pos.z - P[you1]->pos.z) * (c->pos.z - P[you1]->pos.z);
                    if (1.0f <= power || 25.0f <= yd2) {   // out of range or unmarked: drive in
                        TurnTo(com1, aimX, 0.0f, 10.0f);
                        Step(com1);
                        c->Motion_42f1a9();
                    } else {                               // loop shot
                        sound->Play(1);
                        c->f198 = 0.0f;
                        c->i190 = 11;
                        c->Motion_430701();
                        c->yaw = Atan2(c->pos.x - hoopX, c->pos.z);
                        f260 = c->yaw - 3.14f;
                        f25c = 23.0f;
                        f258 = power * c->stat17c + 1.0f;
                        BallInFront(com1);
                        i404 = com1;
                        i268 = -1;
                        b3a8 = 15.0f <= dist;
                    }
                };
                auto JumpShot = [&](float aimX) {
                    c->yaw = Atan2(c->pos.x - aimX, c->pos.z);
                    sound->Play(1);
                    c->i190 = 6;
                    c->Motion_430a58();
                    c->f198 = 0.0f;
                    c->f18c = 12.0f;
                };
                float dL36 = z * z + (x + 36.0f) * (x + 36.0f), dR36 = z * z + (x - 36.0f) * (x - 36.0f);
                float dL34 = z * z + (x + 34.0f) * (x + 34.0f), dR34 = z * z + (x - 34.0f) * (x - 34.0f);
                if ((b3a6 & (dL36 < 35.0f)) != 0) {
                    // Second half, under the left hoop: back out a little.
                    TurnTo(com1, 30.0f, 0.0f, 5.0f / f400);
                    Step(com1);
                    c->Motion_42f1a9();
                } else if (b3a6 == 0 && dR36 < 35.0f) {
                    TurnTo(com1, -30.0f, 0.0f, 5.0f / f400);
                    Step(com1);
                    c->Motion_42f1a9();
                } else if ((b3a6 & (dL34 < 30.0f)) != 0) {
                    JumpShot(-37.0f);
                } else if (b3a6 == 0 && dR34 < 30.0f) {
                    JumpShot(37.0f);
                } else if (b3a6 == 0) {
                    // Pass forward if a teammate is well ahead and nobody is in between, else go.
                    bool laneBlocked = (c->pos.x < P[you1]->pos.x && P[you1]->pos.x < P[com2]->pos.x) ||
                                       (c->pos.x < P[you2]->pos.x && P[you2]->pos.x < P[com2]->pos.x) ||
                                       (c->pos.x < P[you3]->pos.x && P[you3]->pos.x < P[com2]->pos.x);
                    if (P[com2]->pos.x - c->pos.x <= 15.0f || laneBlocked)
                        Shoot(35.0f, 30.0f);
                    else
                        PassTo(com1, com2);
                } else {
                    bool laneBlocked = (P[you1]->pos.x < c->pos.x && P[com2]->pos.x < P[you1]->pos.x) ||
                                       (P[you2]->pos.x < c->pos.x && P[com2]->pos.x < P[you2]->pos.x) ||
                                       (P[you3]->pos.x < c->pos.x && P[com2]->pos.x < P[you3]->pos.x);
                    if (-15.0f <= P[com2]->pos.x - c->pos.x || laneBlocked)
                        Shoot(-35.0f, -30.0f);
                    else
                        PassTo(com1, com2);
                }
            }
        } else {
            // com1 without the ball: stay in bounds, chase the ball (or slow down when YOU are
            // winding up a pass/shot nearby).
            Player *c = P[com1];
            if (c->pos.z > 19.0f) RunTo(com1, 0.0f);
            else if (c->pos.z < -19.0f) RunTo(com1, 3.14f);
            else if (c->pos.x < -35.0f) RunTo(com1, -1.57f);
            else if (c->pos.x > 35.0f) RunTo(com1, 1.57f);
            else if (((i3b0 != 0 || P[you1]->i190 != 3) && P[you1]->i190 != 4) || 10.0f <= comDist) {
                if (!P[i404]->b154) TurnTo(com1, v24c.x, v24c.z, 10.0f);
                else TurnTo(com1, v24c.x, v24c.z, 5.0f / f400);
            } else {
                c->yaw = dt * 2.0f + c->yaw;
            }
            Step(com1);
            c->Motion_42dfc0();
        }

        // com2: forward when COM has the ball, otherwise marks you3.
        if (6 < P[com2]->i190 && P[com2]->i190 < 10) {
            Player *c = P[com2];
            if (c->pos.z > 18.0f) RunTo(com2, 0.0f);
            else if (c->pos.z < -18.0f) RunTo(com2, 3.14f);
            else if (c->pos.x < -35.0f) RunTo(com2, -1.57f);
            else if (c->pos.x > 35.0f) RunTo(com2, 1.57f);
            else if (i268 == com1) {
                if (b3a6 == 0) {
                    if (c->pos.x > 25.0f) {
                        if (P[com1]->pos.x <= 18.0f) {
                            WatchBall(com2);
                        } else {
                            TurnTo(com2, 30.0f, 15.0f, 5.0f);
                            Step(com2);
                            c->Motion_42dfc0();
                        }
                    } else if (b3a6 != 0 || 8.0f <= c->pos.x - P[com1]->pos.x) {
                        TurnTo(com2, 28.0f, 0.0f, 5.0f);
                        Step(com2);
                        c->Motion_42dfc0();
                    } else {
                        RunTo(com2, -1.57f);
                    }
                } else if (c->pos.x < -25.0f) {
                    if (-18.0f <= P[com1]->pos.x) {
                        WatchBall(com2);
                    } else {
                        TurnTo(com2, -30.0f, 15.0f, 5.0f);
                        Step(com2);
                        c->Motion_42dfc0();
                    }
                } else if (c->pos.x - P[com1]->pos.x <= -8.0f) {
                    TurnTo(com2, -28.0f, 0.0f, 5.0f);
                    Step(com2);
                    c->Motion_42dfc0();
                } else {
                    RunTo(com2, 1.57f);
                }
            } else {
                TurnTo(com2, (P[you3]->pos.x + v24c.x) / 2.0f, (P[you3]->pos.z + v24c.z) / 2.0f, 5.0f / f400);
                Step(com2);
                c->Motion_42dfc0();
            }
        }

        // com3: shadows you2 while YOU have the ball, otherwise marks between you2 and the ball.
        if (6 < P[com3]->i190 && P[com3]->i190 < 10) {
            Player *c = P[com3];
            if (c->pos.z > 18.0f) RunTo(com3, 0.0f);
            else if (c->pos.z < -18.0f) RunTo(com3, 3.14f);
            else if (c->pos.x < -35.0f) RunTo(com3, -1.57f);
            else if (c->pos.x > 35.0f) RunTo(com3, 1.57f);
            else if (i268 == you1) {
                if (b3a6 == 0) {
                    if (2.0f <= P[you2]->pos.x - c->pos.x) {
                        WatchBall(com3);
                    } else {
                        TurnTo(com3, P[you2]->pos.x - 2.0f, 0.0f, 5.0f);
                        Step(com3);
                        c->Motion_42dfc0();
                    }
                } else if (P[you2]->pos.x - c->pos.x <= -2.0f) {
                    WatchBall(com3);
                } else {
                    TurnTo(com3, P[you2]->pos.x + 2.0f, 0.0f, 5.0f);
                    Step(com3);
                    c->Motion_42dfc0();
                }
            } else {
                TurnTo(com3, (P[you2]->pos.x + v24c.x) / 2.0f, (P[you2]->pos.z + v24c.z) / 2.0f, 5.0f / f400);
                Step(com3);
                c->Motion_42dfc0();
            }
        }
    }

    // ---- per-player action timers ----
    for (int i = 0; i < 6; i++) {
        Player *p = P[i];
        if (i == i268) {
            for (int j = 0; j < 6; j++)
                if (P[j]->i190 == 15) P[j]->i190 = 7;
            if (p->i190 == 6) {   // jump shot: release at the top after 0.8s
                i3b8 = 1;
                p->f198 = p->f198 + dt;
                p->f18c = p->f18c - dt * 20.0f;
                if (0.8f <= p->f198) {
                    p->i190 = 15;
                    p->f198 = 0.0f;
                    p->pos.y = 0.0f;
                    p->Motion_Stand();
                    sound->Play(2);
                    f260 = p->yaw - 3.14f;
                    f25c = 14.0f;
                    f258 = 2.0f;
                    v24c.y = 8.43f;
                    b3a8 = 0;
                    i404 = i;
                    i268 = -1;
                } else {
                    p->pos.x = p->pos.x - sinf(p->yaw) * p->stat168 * 0.6f * dt;
                    p->pos.y = p->f18c * dt + p->pos.y;
                    p->pos.z = p->pos.z - cosf(p->yaw) * p->stat168 * 0.6f * dt;
                }
            }
        } else if (p->i190 == 12) {
            p->f198 = p->f198 + dt;
            if (0.8f < p->f198) {
                p->i190 = 7;
                p->f198 = 0.0f;
                p->Motion_Stand();
            }
        } else if (p->i190 == 10) {
            p->f198 = p->f198 + dt;
            if (0.8f < p->f198) {
                p->i190 = 15;
                p->f198 = 0.0f;
                p->Motion_Stand();
            }
        } else if (p->i190 == 11) {
            p->f198 = p->f198 + dt;
            if (0.8f < p->f198) {
                p->i190 = 15;
                p->f198 = 0.0f;
                p->Motion_Stand();
                i3b8 = 1;
            }
        } else if (p->i190 == 6) {
            p->i190 = 15;
        }
    }

    // ---- picking up / stealing the ball ----
    if (!b414 && youDist < 8.0f && 6 < P[you1]->i190 && P[you1]->i190 < 10 && v24c.y < 5.0f &&
        P[com1]->i190 != 3 && P[com1]->i190 != 4 && P[com1]->i190 != 6) {
        if (-1 < i268) {
            P[i268]->f198 = 0.0f;
            P[i268]->i190 = 12;
            P[i268]->Motion_43030b();
        }
        i268 = you1;
        i404 = you1;
        P[you1]->i190 = 0;
    }
    if (!b414 && comDist < 8.0f && 6 < P[com1]->i190 && P[com1]->i190 < 10 && v24c.y < 5.0f &&
        P[you1]->i190 != 3 && P[you1]->i190 != 4 && P[you1]->i190 != 6) {
        if (-1 < i268) {
            P[i268]->f198 = 0.0f;
            P[i268]->i190 = 12;
            P[i268]->Motion_43030b();
        }
        i268 = com1;
        i404 = com1;
        P[com1]->i190 = 0;
        P[com1]->Motion_42ee86();
    }

    // ---- ball in hand: follow the carrier, dribble bounce in sync with the run cycle ----
    if (-1 < i268) {
        Player *p = P[i268];
        float side = -1.5f, fwd = -1.0f;
        if (p->i190 == 3 || p->i190 == 4) {
            side = 0.0f;
            fwd = -0.8f;
        } else if (p->i190 == 6) {
            side = -0.9f;
            fwd = 0.4f;
        } else if (i268 == 0) {
            side = -1.7f;
            fwd = -1.2f;
        } else if (i268 == 3 || i268 == 4) {
            side = -1.3f;
            fwd = -0.8f;
        }
        v24c.x = (cosf(-p->yaw) * side - sinf(-p->yaw) * fwd) + p->pos.x;
        v24c.z = cosf(-p->yaw) * fwd + sinf(-p->yaw) * side + p->pos.z;
        if (p->i190 == 3) {
            v24c.y = 3.5f;
        } else if (p->i190 == 4) {
            v24c.y = p->stat170 * 0.9f;
        } else if (p->i190 == 6) {
            v24c.y = p->pos.y + p->stat180;
        } else {
            if ((p->keyChanged & (p->curKey == 0 || p->curKey == 2)) != 0) sound->Play(3);
            if (p->curKey == 0 || p->curKey == 2) {
                v24c.y = dt * 40.0f + v24c.y;
                if (p->i190 == 1) {
                    if (p->stat170 * 0.85f < v24c.y) v24c.y = p->stat170 * 0.85f;
                } else if (p->stat170 < v24c.y) {
                    v24c.y = p->stat170;
                }
            } else {
                v24c.y = v24c.y - dt * 20.0f;
                if (v24c.y < 0.7f) v24c.y = 0.7f;
            }
        }
    }

    // ---- camera ----
    if (i3b8 == 1 && v24c.y < 8.0f && f25c < 0.0f) i3b8 = 0;
    if (i3b8 == 2) {   // behind the player charging a loop shot
        Player *p = P[i3fc];
        camPos.x = p->pos.x - sinf(-p->yaw) * 8.0f;
        camPos.z = cosf(-p->yaw) * 8.0f + p->pos.z;
        camPos.y = p->stat170 * 1.8f;
        camDir.x = p->pos.x - camPos.x;
        camDir.y = 0.0f;
        camDir.z = p->pos.z - camPos.z;
    } else if (i268 < 0) {
        camPos.y = i3b8 == 1 ? v24c.y + 7.0f : 12.0f;
        camPos.x = v24c.x;
        camPos.z = v24c.z - 20.0f;
        camDir = Vec3(0.0f, -0.5f, 1.0f);
        f3a0 = 0.0f;
        i39c = 0;
    } else {
        camPos.x = P[you1]->pos.x;
        camPos.y = P[you1]->i190 == 6 ? 15.0f : 12.0f;
        camPos.z = P[you1]->pos.z - 20.0f;
        camDir = Vec3(0.0f, -0.5f, 1.0f);
        f3a0 = 0.0f;
        i39c = 0;
    }

    // ---- shot-type marker under the controlled player ----
    float hoopDist, hoopAngle;
    if (b3a6 == 0) {
        hoopDist = sqrtf((P[you1]->pos.x + 35.0f) * (P[you1]->pos.x + 35.0f) + P[you1]->pos.z * P[you1]->pos.z);
        hoopAngle = P[you1]->yaw - Atan2(P[you1]->pos.x + 35.0f, P[you1]->pos.z);
    } else {
        hoopDist = sqrtf((P[you1]->pos.x - 35.0f) * (P[you1]->pos.x - 35.0f) + P[you1]->pos.z * P[you1]->pos.z);
        hoopAngle = P[you1]->yaw - Atan2(P[you1]->pos.x - 35.0f, P[you1]->pos.z);
    }
    float power = ((hoopDist - 2.0f) * 0.53f - 1.0f) / P[you1]->stat17c;
    if (4.0f < hoopDist && hoopDist < 9.0f && upHeld && -0.785f < hoopAngle && hoopAngle < 0.785f) {
        i3ac = 3;   // red: running at the hoop, Z = jump shot
    } else if (power <= 0.0f || 1.0f < power) {
        i3ac = 1;   // blue: Z = loop pass
    } else {
        i3ac = 2;   // green: Z = loop shot; show the ideal power on the gauge
        if (0.0001f < f3a0) i39c = (int)(power * 100.0f);
    }
    if (P[you1]->i190 == 3) i3ac = 0;
    v240.x = P[you1]->pos.x;
    v240.z = P[you1]->pos.z;
}
