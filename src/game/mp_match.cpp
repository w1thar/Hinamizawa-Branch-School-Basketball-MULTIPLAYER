// State 6 for multiplayer (mod): the original match (match.cpp) generalised so that any player can
// be controlled by a human, on either team, each human locked to one character.
//
// Team A is the original "YOU" side (Player::b154, score i3d8), team B the "COM" side (i3dc).
// Team A attacks the hoop at x = -35 in the first half, team B the one at +35; they swap at half
// time (b3a6). Everything below is the original logic with "YOU" / "COM" replaced by a team and
// the hoop it attacks:
//  * humans use the original controls of the YOU player (match.cpp), on their own device;
//  * AI players use the original COM logic: the team's lead (ball carrier / nearest) chases and
//    plays the ball, role 2 goes forward, role 3 marks. AI teammates of humans use the original
//    YOU-teammate positioning instead, but still chase or play the ball when they are the lead.
// Single-player keeps running State6() unchanged.
#include <cmath>

#include "game/game.h"

static float Atan2(float y, float x) { return (float)atan2((double)y, (double)x); }

bool Game::MpTeamHasHuman(bool teamA) const { return MpHumanOnTeam(teamA) >= 0; }

int Game::MpHumanOnTeam(bool teamA) const
{
    for (int h = 0; h < mpHumans; h++)
        if (!hum[h].gone && hum[h].player >= 0 && hum[h].teamA == teamA) return h;
    return -1;
}

int Game::MpSoloHuman(bool teamA) const
{
    int found = -1, n = 0;
    for (int h = 0; h < mpHumans; h++) {
        if (hum[h].gone || hum[h].teamA != teamA) continue;
        found = h;
        n++;
    }
    return n == 1 ? found : -1;
}

void Game::State6MP()
{
    Player **P = players;

    auto Step = [&](int i) { P[i]->pos = CalcStep(i); };
    auto Turn = [&](int i, float target, float rate) { P[i]->yaw = RotateToward(target, P[i]->yaw, rate); };
    auto TurnTo = [&](int i, float x, float z, float rate) {
        float a = Atan2(P[i]->pos.x - x, P[i]->pos.z - z);
        P[i]->yaw = RotateToward(a, P[i]->yaw, rate);
    };
    auto RunTo = [&](int i, float yaw) {
        Turn(i, yaw, 5.0f);
        Step(i);
        P[i]->Motion_42dfc0();
    };
    auto WatchBall = [&](int i) {
        TurnTo(i, v24c.x, v24c.z, 5.0f);
        P[i]->Motion_Stand();
    };
    auto BallInFront = [&](int i) {
        v24c.x = -sinf(-P[i]->yaw) * -2.0f + P[i]->pos.x;
        v24c.z = cosf(-P[i]->yaw) * -2.0f + P[i]->pos.z;
    };
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
    auto D2 = [&](int i) {
        return (P[i]->pos.x - v24c.x) * (P[i]->pos.x - v24c.x) + (P[i]->pos.z - v24c.z) * (P[i]->pos.z - v24c.z);
    };
    // The hoop a team attacks right now, and the sign of its x.
    auto AttackX = [&](bool teamA) { return (teamA == (b3a6 == 0)) ? -35.0f : 35.0f; };
    auto Human = [&](int i) { return i >= 0 ? ctrl[i] : -1; };

    // ---- time up (as the original) ----
    f3e0 = f3e0 - dt;
    bool lastPeriod = b3a6 != 0 || mpMinutes > 0;   // one-period matches end at the first whistle
    if (f3e0 < 0.0f) {
        if (i3b8 < 5) {
            v24c.y = 0.7f;
            f25c = 0.0f;
            f390 = 0.0f;
            if (!lastPeriod) {
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
        for (int h = 0; h < mpHumans; h++) {
            hum[h].cam = camPos;
            hum[h].camDir = camDir;
            hum[h].marker = 0;
            hum[h].power = 0.0f;
            hum[h].gauge = 0;
            hum[h].chargeCam = hum[h].shotCam = false;
        }
        if (5.0f < f390) {
            if (!lastPeriod) {
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

    // A player who just threw / tipped the ball (15) only leaves that state when somebody catches
    // it; humans are locked to their character, so here it ends once the ball is 5 units away.
    for (int i = 0; i < 6; i++) {
        if (P[i]->benched || P[i]->i190 != 15) continue;
        if (D2(i) > 25.0f) {
            P[i]->i190 = 7;
            P[i]->Motion_Stand();
        }
    }

    // ---- roles per team: lead (ball carrier, else nearest still in play), then the one further
    // towards the attacked hoop, then the other. Missing roles are -1. ----
    int R[2][3];
    float leadDist[2];
    for (int t = 0; t < 2; t++) {
        bool a = t == 0;
        int limit = MpTeamHasHuman(a) ? 15 : 10;   // YOU used 15, COM 10
        int lead = -1, rank0 = 3, others[3], nOthers = 0;
        float best = 10000.0f;
        for (int i = 0; i < 6; i++) {
            if (P[i]->benched || P[i]->b154 != a) continue;
            float d = D2(i);
            int rank = P[i]->i190 < 3 ? 0 : P[i]->i190 < limit ? 1 : 2;
            if (rank < rank0 || (rank == rank0 && d < best)) {
                if (lead >= 0) others[nOthers++] = lead;
                lead = i;
                rank0 = rank;
                best = d;
            } else {
                others[nOthers++] = i;
            }
        }
        float s = AttackX(a) > 0.0f ? 1.0f : -1.0f;
        if (nOthers == 2 && s * P[others[0]]->pos.x < s * P[others[1]]->pos.x) {
            int tmp = others[0];
            others[0] = others[1];
            others[1] = tmp;
        }
        R[t][0] = lead;
        R[t][1] = nOthers > 0 ? others[0] : -1;
        R[t][2] = nOthers > 1 ? others[1] : -1;
        leadDist[t] = best;
    }
    auto TeamOf = [&](int i) { return P[i]->b154 ? 0 : 1; };

    // Auto-switch: a human who is alone on their team controls the team's lead (ball carrier /
    // nearest to the ball), like YOU in single player. Teams with several humans stay locked.
    if (mpAutoSwitch) {
        for (int h = 0; h < mpHumans; h++) {
            if (hum[h].gone || MpSoloHuman(hum[h].teamA) != h) continue;
            int lead = R[hum[h].teamA ? 0 : 1][0];
            if (lead >= 0) hum[h].player = lead;
        }
        for (int &c : ctrl) c = -1;
        for (int h = 0; h < mpHumans; h++)
            if (!hum[h].gone && hum[h].player >= 0) ctrl[hum[h].player] = h;
    }

    // ---- goals ----
    if (i418 == 1) {
        b414 = true; f390 = 0.0f; i408 = R[0][0]; sound->Play(0); i40c = 2; f410 = -3.0f; i418 = 5;
    } else if (i418 == 2) {
        b414 = true; f390 = 0.0f; i408 = R[1][0]; sound->Play(0); i40c = 1; f410 = -3.0f; i418 = 5;
    } else if (i418 == 3) {
        b414 = true; f390 = 0.0f; i408 = R[1][0]; sound->Play(0); i40c = 2; f410 = -3.0f; i418 = 5;
    } else if (i418 == 4) {
        b414 = true; f390 = 0.0f; i408 = R[0][0]; sound->Play(0); i40c = 1; f410 = -3.0f; i418 = 5;
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
        } else {
            b414 = true;
            f390 = 0.0f;
            i408 = i404;
            sound->Play(6);
            if (0 < i268) f258 = 0.0f;
        }
    }

    // ---- dead ball: freeze 3s, then the other team takes it out ----
    if (b414) {
        f390 = f390 + dt;
        if (f390 <= 3.0f) {
            for (int i = 0; i < 6; i++) P[i]->i190 = 7;
            i268 = -1;
        } else {
            LoadSoundSet(1);
            i418 = 0;
            for (int i = 0; i < 6; i++) {
                P[i]->i190 = 7;
                P[i]->Motion_Stand();
            }
            bool inA = !P[i408]->b154;
            int ti = inA ? 0 : 1, to = 1 - ti;
            // From an end line only at the end the team defends; otherwise from the side line there.
            if (i40c == 1 || i40c == 2) {
                bool right = i40c == 1;
                bool defendsRight = AttackX(inA) < 0.0f;
                if (right != defendsRight) {
                    i40c = f410 <= 0.0f ? 4 : 3;
                    f410 = right ? 35.0f : -35.0f;
                }
            }
            // The thrower: a human of that team if there is one, else the lead.
            int I[3] = {R[ti][0], R[ti][1], R[ti][2]};
            for (int k = 0; k < 3; k++) {
                if (I[k] >= 0 && Human(I[k]) >= 0 && Human(I[0]) < 0) {
                    int tmp = I[0];
                    I[0] = I[k];
                    I[k] = tmp;
                }
            }
            const int *O = R[to];
            auto Put = [&](int i, float x, float z, float yaw) {
                if (i >= 0) P[i]->SetPos(x, 0.0f, z, yaw);
            };
            if (i40c == 1) {
                Put(I[0], 38.0f, f410, 1.54f);
                Put(I[1], 30.0f, f410 + 5.0f, -1.54f);
                Put(I[2], 32.0f, f410 - 5.0f, -1.54f);
                Put(O[1], 1.0f, 4.0f, 1.54f);
                Put(O[2], 2.0f, -4.0f, 1.54f);
                Put(O[0], 3.0f, 0.0f, 1.54f);
            } else if (i40c == 2) {
                Put(I[0], -38.0f, f410, -1.54f);
                Put(I[1], -30.0f, f410 + 5.0f, 1.54f);
                Put(I[2], -32.0f, f410 - 5.0f, 1.54f);
                Put(O[1], 1.0f, 4.0f, -1.54f);
                Put(O[2], 2.0f, -4.0f, -1.54f);
                Put(O[0], 3.0f, 0.0f, -1.54f);
            } else if (i40c == 3) {
                Put(I[0], f410, 20.0f, 0.0f);
                Put(I[1], f410 + 5.0f, 10.0f, 3.14f);
                Put(I[2], f410 - 1.0f, 12.0f, 3.14f);
                Put(O[1], f410 + 8.0f, 5.0f, 3.14f);
                Put(O[2], f410 - 8.0f, 4.0f, 3.14f);
                Put(O[0], f410, 0.0f, 3.14f);
            } else if (i40c == 4) {
                Put(I[0], f410, -20.0f, 3.14f);
                Put(I[1], f410 + 5.0f, -10.0f, 0.0f);
                Put(I[2], f410 - 1.0f, -12.0f, 0.0f);
                Put(O[1], f410 + 8.0f, -5.0f, 0.0f);
                Put(O[2], f410 - 8.0f, -4.0f, 0.0f);
                Put(O[0], f410, 0.0f, 0.0f);
            }
            int thrower = I[0];
            if (I[1] < 0) {
                // Nobody to throw to: dribble in from just inside the line.
                Player *p = P[thrower];
                if (p->pos.x > 35.0f) p->pos.x = 35.0f;
                if (p->pos.x < -35.0f) p->pos.x = -35.0f;
                if (p->pos.z > 16.5f) p->pos.z = 16.5f;
                if (p->pos.z < -16.5f) p->pos.z = -16.5f;
                p->i190 = 0;
                p->Motion_42ee86();
                i268 = thrower;
                i404 = thrower;
                b414 = false;
            } else if (Human(thrower) >= 0) {
                // A human holds the ball at the line and passes with X (YouTakeBall in State6).
                if (i3b0 == 1) f41c = 3.5f;
                P[thrower]->i190 = 4;
                P[thrower]->Motion_430497();
                i268 = thrower;
                i404 = thrower;
                b414 = false;
            } else {
                // AI throw-in: to a human teammate if there is one.
                int to2 = Human(I[1]) >= 0 || Human(I[2]) < 0 ? I[1] : I[2];
                PassTo(thrower, to2);
                b414 = false;
            }
        }
    }

    // ---- humans: the original controls of the YOU player ----
    for (int h = 0; h < mpHumans; h++) {
        MpHuman &m = hum[h];
        int me = m.player;
        if (me < 0) continue;
        Player *p = P[me];
        VirtualPad &k = m.pad;
        bool a = p->b154;
        bool upHeld = k.up == KEY_HOLD;
        bool downHeld = k.down == KEY_HOLD;
        // Gamepads: face the pushed direction and run (the camera looks along +z, +x right).
        bool analog = m.move && p->i190 != 3 && p->i190 < 10;
        if (analog) {
            float target = Atan2(-m.moveX, m.moveY);
            float diff = target - p->yaw;
            while (diff > 3.14159265f) diff -= 6.2831853f;
            while (diff < -3.14159265f) diff += 6.2831853f;
            float stepAngle = 12.0f * dt;
            if (diff > stepAngle) diff = stepAngle;
            if (diff < -stepAngle) diff = -stepAngle;
            p->yaw += diff;
            float rest = target - p->yaw;
            while (rest > 3.14159265f) rest -= 6.2831853f;
            while (rest < -3.14159265f) rest += 6.2831853f;
            upHeld = rest > -1.2f && rest < 1.2f;
            downHeld = false;
        }
        m.upHeld = upHeld;

        if (p->i190 < 3 && upHeld) {
            Step(me);
            p->i190 = 1;
            p->Motion_42f1a9();
        } else if (p->i190 >= 7 && p->i190 <= 9 && upHeld) {
            Step(me);
            p->i190 = 8;
            p->Motion_42dfc0();
        } else if (p->i190 < 3 && downHeld) {
            p->pos.x = sinf(p->yaw) * p->stat168 * 0.6f * dt + p->pos.x;
            p->pos.z = cosf(p->yaw) * p->stat168 * 0.6f * dt + p->pos.z;
            p->i190 = 2;
            p->Motion_42fb3f();
        } else if (p->i190 >= 7 && p->i190 <= 9 && downHeld) {
            p->pos.x = sinf(p->yaw) * p->stat168 * 0.6f * dt + p->pos.x;
            p->pos.z = cosf(p->yaw) * p->stat168 * 0.6f * dt + p->pos.z;
            p->i190 = 9;
            p->Motion_42e9cd();
        } else if (p->i190 < 3) {
            p->i190 = 0;
            p->Motion_42ee86();
        } else if (6 < p->i190 && p->i190 < 10) {
            p->i190 = 7;
            p->Motion_Stand();
        }

        // X: hold the ball, release to pass.
        if (p->i190 < 3 && k.pass == KEY_HOLD) {
            p->i190 = 4;
            p->Motion_430497();
            if (i3b0 == 1) f41c = 3.5f;
        }
        if ((p->i190 == 3 || p->i190 == 4) && i3b0 == 1 && i268 == me) f41c = f41c - dt;
        if (p->i190 == 4 && (k.pass == KEY_RELEASE || (i3b0 == 1 && f41c < -0.01f))) {
            sound->Play(1);
            p->f198 = 0.0f;
            p->i190 = 10;
            p->Motion_4305b1();
            f41c = 0.0f;
            f260 = p->yaw - 3.14f;
            f25c = p->stat174;
            f258 = p->stat178;
            BallInFront(me);
            i404 = me;
            i268 = -1;
        }
        // Z in the red-cone zone: jump shot.
        if (m.marker == 3 && k.shoot == KEY_PUSH) {
            sound->Play(1);
            p->i190 = 6;
            p->Motion_430a58();
            p->f198 = 0.0f;
            p->f18c = 12.0f;
        }
        // Z held: charge a loop pass / shot.
        if (p->i190 < 3 && k.shoot == KEY_HOLD) {
            p->i190 = 3;
            p->Motion_430497();
            m.chargeCam = true;
            if (i3b0 == 1) f41c = 10.0f;
        }
        if (p->i190 == 3) {
            if (k.shoot != KEY_RELEASE && (f41c <= 5.0f || 6.5f <= f41c)) {
                m.power = m.power + dt;
                if (1.0f < m.power) m.power = 0.001f;
            } else {
                sound->Play(1);
                p->f198 = 0.0f;
                p->i190 = 11;
                p->Motion_430701();
                f260 = p->yaw - 3.14f;
                f25c = 23.0f;
                f258 = m.power * p->stat17c + 1.0f;
                BallInFront(me);
                i404 = me;
                f41c = 0.0f;
                i268 = -1;
                float hx = p->pos.x - AttackX(a);
                b3a8 = 225.0f <= p->pos.z * p->pos.z + hx * hx;
            }
        }
        if (m.chargeCam && p->i190 != 3 && p->i190 != 11) m.chargeCam = false;

        // Turning; after a goal / with the ball loose the player is steered for you, as in the original.
        if (analog) {
            // steered above
        } else if (k.right == KEY_HOLD && p->i190 < 10) {
            if (p->i190 == 0 || (3 < p->i190 && p->i190 < 8)) p->yaw = dt * 5.0f + p->yaw;
            else p->yaw = dt * 2.0f + p->yaw;
        } else if (k.left == KEY_HOLD && p->i190 < 10) {
            if (p->i190 == 0 || (3 < p->i190 && p->i190 < 8)) p->yaw = p->yaw - dt * 5.0f;
            else p->yaw = p->yaw - dt * 2.0f;
        } else if (i418 == 5) {
            TurnTo(me, -AttackX(a), 0.0f, 2.0f);
            Step(me);
            p->Motion_42dfc0();
        } else if (p->i190 == 7 && i268 < 0) {
            TurnTo(me, v24c.x, v24c.z, 10.0f);
            Step(me);
            p->Motion_42dfc0();
        }
    }

    // ---- AI players ----
    for (int i = 0; i < 6; i++) {
        if (P[i]->benched || Human(i) >= 0) continue;
        Player *c = P[i];
        bool a = c->b154;
        int t = TeamOf(i), o = 1 - t;
        float s = AttackX(a) > 0.0f ? 1.0f : -1.0f;   // +1: attacks the hoop at +35
        int r1 = R[t][0], r2 = R[t][1];
        int o1 = R[o][0], o2 = R[o][1], o3 = R[o][2];
        int mark2 = o2 >= 0 ? o2 : o1, mark3 = o3 >= 0 ? o3 : mark2;
        bool humanTeam = MpTeamHasHuman(a);

        if (i == r1) {
            // ---- the lead: COM com1 logic ----
            if (i418 == 5) {
                TurnTo(i, -AttackX(a), 0.0f, 2.0f);
                Step(i);
                c->Motion_42dfc0();
            } else if (i == i268) {
                if (c->i190 < 4) {
                    float x = c->pos.x, z = c->pos.z;
                    // Pass target: a human teammate if there is one, else role 2.
                    int mate = r2;
                    for (int h = 0; h < mpHumans; h++) {
                        int hp = hum[h].player;
                        if (hp >= 0 && hp != i && P[hp]->b154 == a) mate = hp;
                    }
                    auto Shoot = [&](float hoopX, float aimX) {
                        float dist = sqrtf((x - hoopX) * (x - hoopX) + z * z);
                        float power = ((dist - 2.0f) * 0.53f - 1.0f) / c->stat17c;
                        float yd2 = (c->pos.x - P[o1]->pos.x) * (c->pos.x - P[o1]->pos.x) +
                                    (c->pos.z - P[o1]->pos.z) * (c->pos.z - P[o1]->pos.z);
                        if (1.0f <= power || 25.0f <= yd2) {
                            TurnTo(i, aimX, 0.0f, 10.0f);
                            Step(i);
                            c->Motion_42f1a9();
                        } else {
                            sound->Play(1);
                            c->f198 = 0.0f;
                            c->i190 = 11;
                            c->Motion_430701();
                            c->yaw = Atan2(c->pos.x - hoopX, c->pos.z);
                            f260 = c->yaw - 3.14f;
                            f25c = 23.0f;
                            f258 = power * c->stat17c + 1.0f;
                            BallInFront(i);
                            i404 = i;
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
                    float d36 = z * z + (x - s * 36.0f) * (x - s * 36.0f);
                    float d34 = z * z + (x - s * 34.0f) * (x - s * 34.0f);
                    if (d36 < 35.0f) {
                        TurnTo(i, -s * 30.0f, 0.0f, 5.0f / f400);   // under the hoop: back out a little
                        Step(i);
                        c->Motion_42f1a9();
                    } else if (d34 < 30.0f) {
                        JumpShot(s * 37.0f);
                    } else {
                        // Pass forward if a teammate is well ahead and nobody is in between, else go.
                        auto between = [&](int y) {
                            return y >= 0 && s * (P[y]->pos.x - c->pos.x) > 0.0f && s * (P[mate]->pos.x - P[y]->pos.x) > 0.0f;
                        };
                        bool laneBlocked = mate < 0 || between(o1) || between(o2) || between(o3);
                        if (laneBlocked || s * (P[mate]->pos.x - c->pos.x) <= 15.0f)
                            Shoot(s * 35.0f, s * 30.0f);
                        else
                            PassTo(i, mate);
                    }
                }
            } else {
                // Without the ball: stay in bounds and chase it (slow down near an opponent winding up).
                if (c->pos.z > 19.0f) RunTo(i, 0.0f);
                else if (c->pos.z < -19.0f) RunTo(i, 3.14f);
                else if (c->pos.x < -35.0f) RunTo(i, -1.57f);
                else if (c->pos.x > 35.0f) RunTo(i, 1.57f);
                else if (((i3b0 != 0 || P[o1]->i190 != 3) && P[o1]->i190 != 4) || 10.0f <= leadDist[t]) {
                    if (P[i404]->b154 == a) TurnTo(i, v24c.x, v24c.z, 10.0f);
                    else TurnTo(i, v24c.x, v24c.z, 5.0f / f400);
                } else {
                    c->yaw = dt * 2.0f + c->yaw;
                }
                Step(i);
                c->Motion_42dfc0();
            }
            continue;
        }
        if (!(6 < c->i190 && c->i190 < 10)) continue;
        int ref = r1;   // the teammate playing the ball

        if (humanTeam) {
            // ---- teammates of humans: the original YOU-teammate positioning ----
            int refHuman = Human(ref);
            bool refRunning = refHuman >= 0 && (hum[refHuman].pad.up != KEY_FREE || hum[refHuman].move);
            bool refHolding = refHuman >= 0 && hum[refHuman].pad.pass == KEY_HOLD;
            if (i == R[t][1]) {   // forward wing
                if (c->pos.z > 18.0f) RunTo(i, 0.0f);
                else if (c->pos.z < -18.0f) RunTo(i, 3.14f);
                else if (s * P[ref]->pos.x >= 25.0f) {
                    TurnTo(i, s * 30.0f, P[ref]->pos.z <= 0.0f ? 15.0f : -15.0f, 5.0f);
                    Step(i);
                    c->Motion_42dfc0();
                } else if (s * (c->pos.x - P[ref]->pos.x) < 10.0f) {
                    RunTo(i, -s * 1.57f);
                } else if (s * (c->pos.x - P[ref]->pos.x) > 15.0f) {
                    RunTo(i, s * 1.57f);
                } else if (!refRunning) {
                    WatchBall(i);
                }
            } else {              // support
                float dx = c->pos.x - P[ref]->pos.x, dz = c->pos.z - P[ref]->pos.z;
                if (c->pos.z > 18.0f) RunTo(i, 0.0f);
                else if (c->pos.z < -18.0f) RunTo(i, 3.14f);
                else if (c->pos.x < -35.0f) RunTo(i, -1.57f);
                else if (c->pos.x > 35.0f) RunTo(i, 1.57f);
                else if (-s * dx > 12.0f) RunTo(i, -s * 1.57f);
                else if (s * dx > 3.0f) RunTo(i, s * 1.57f);
                else if (dz > 6.0f) RunTo(i, 0.0f);
                else if (dz < -6.0f) RunTo(i, 3.14f);
                else if (refHolding) {   // circle around while the holder looks for the pass
                    c->yaw = dt * 5.0f + c->yaw;
                    Step(i);
                    c->Motion_42dfc0();
                } else if (!refRunning) {
                    WatchBall(i);
                }
            }
            continue;
        }

        // ---- AI teams: the original COM com2 / com3 logic ----
        if (c->pos.z > 18.0f) RunTo(i, 0.0f);
        else if (c->pos.z < -18.0f) RunTo(i, 3.14f);
        else if (c->pos.x < -35.0f) RunTo(i, -1.57f);
        else if (c->pos.x > 35.0f) RunTo(i, 1.57f);
        else if (i == R[t][1]) {
            // com2: forward when the team has the ball, otherwise marks role 3.
            if (i268 == r1) {
                if (s * c->pos.x > 25.0f) {
                    if (s * P[r1]->pos.x <= 18.0f) {
                        WatchBall(i);
                    } else {
                        TurnTo(i, s * 30.0f, 15.0f, 5.0f);
                        Step(i);
                        c->Motion_42dfc0();
                    }
                } else if (s * (c->pos.x - P[r1]->pos.x) >= 8.0f) {
                    TurnTo(i, s * 28.0f, 0.0f, 5.0f);
                    Step(i);
                    c->Motion_42dfc0();
                } else {
                    RunTo(i, -s * 1.57f);
                }
            } else {
                TurnTo(i, (P[mark3]->pos.x + v24c.x) / 2.0f, (P[mark3]->pos.z + v24c.z) / 2.0f, 5.0f / f400);
                Step(i);
                c->Motion_42dfc0();
            }
        } else {
            // com3: shadows role 2 while the opponents' lead has the ball, otherwise marks it.
            if (i268 == o1) {
                if (s * (P[mark2]->pos.x - c->pos.x) >= 2.0f) {
                    WatchBall(i);
                } else {
                    TurnTo(i, P[mark2]->pos.x - s * 2.0f, 0.0f, 5.0f);
                    Step(i);
                    c->Motion_42dfc0();
                }
            } else {
                TurnTo(i, (P[mark2]->pos.x + v24c.x) / 2.0f, (P[mark2]->pos.z + v24c.z) / 2.0f, 5.0f / f400);
                Step(i);
                c->Motion_42dfc0();
            }
        }
    }

    // ---- per-player action timers (as the original) ----
    for (int i = 0; i < 6; i++) {
        Player *p = P[i];
        int h = Human(i);
        if (i == i268) {
            for (int j = 0; j < 6; j++)
                if (P[j]->i190 == 15) P[j]->i190 = 7;
            if (p->i190 == 6) {
                if (h >= 0) hum[h].shotCam = true;
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
                if (h >= 0) {
                    hum[h].chargeCam = false;
                    hum[h].shotCam = true;
                }
            }
        } else if (p->i190 == 6) {
            p->i190 = 15;
        }
    }

    // ---- picking up / stealing the ball: the nearest eligible player within reach. Humans can
    // always take it, AI players only as their team's lead (as COM's com1 in the original). ----
    if (!b414 && v24c.y < 5.0f) {
        int holder = i268;
        bool holderSafe = holder >= 0 && (P[holder]->i190 == 3 || P[holder]->i190 == 4 || P[holder]->i190 == 6);
        int taker = -1;
        float best = 8.0f;
        for (int i = 0; i < 6; i++) {
            Player *p = P[i];
            if (p->benched || !(6 < p->i190 && p->i190 < 10)) continue;
            if (holder >= 0 && (holderSafe || P[holder]->b154 == p->b154)) continue;
            if (Human(i) < 0 && i != R[TeamOf(i)][0]) continue;
            float d = D2(i);
            if (d < best) {
                best = d;
                taker = i;
            }
        }
        if (taker >= 0) {
            if (holder >= 0) {
                P[holder]->f198 = 0.0f;
                P[holder]->i190 = 12;
                P[holder]->Motion_43030b();
            }
            i268 = taker;
            i404 = taker;
            P[taker]->i190 = 0;
            if (Human(taker) < 0) P[taker]->Motion_42ee86();
        }
    }

    // ---- ball in hand (as the original) ----
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

    // ---- each human's camera and shot markers (the original's, per player) ----
    for (int h = 0; h < mpHumans; h++) {
        MpHuman &m = hum[h];
        if (m.player < 0) continue;
        Player *p = P[m.player];
        if (m.shotCam && (i268 >= 0 || (v24c.y < 8.0f && f25c < 0.0f))) m.shotCam = false;
        if (m.chargeCam) {
            m.cam.x = p->pos.x - sinf(-p->yaw) * 8.0f;
            m.cam.z = cosf(-p->yaw) * 8.0f + p->pos.z;
            m.cam.y = p->stat170 * 1.8f;
            m.camDir = Vec3(p->pos.x - m.cam.x, 0.0f, p->pos.z - m.cam.z);
        } else {
            if (m.shotCam) {
                m.cam = Vec3(v24c.x, v24c.y + 7.0f, v24c.z - 20.0f);
            } else {
                m.cam = Vec3(p->pos.x, p->i190 == 6 ? 15.0f : 12.0f, p->pos.z - 20.0f);
            }
            m.camDir = Vec3(0.0f, -0.5f, 1.0f);
            m.power = 0.0f;
            m.gauge = 0;
        }
        float ax = AttackX(p->b154);
        float hoopDist = sqrtf((p->pos.x - ax) * (p->pos.x - ax) + p->pos.z * p->pos.z);
        float hoopAngle = p->yaw - Atan2(p->pos.x - ax, p->pos.z);
        float power = ((hoopDist - 2.0f) * 0.53f - 1.0f) / p->stat17c;
        if (4.0f < hoopDist && hoopDist < 9.0f && m.upHeld && -0.785f < hoopAngle && hoopAngle < 0.785f) {
            m.marker = 3;
        } else if (power <= 0.0f || 1.0f < power) {
            m.marker = 1;
        } else {
            m.marker = 2;
            if (0.0001f < m.power) m.gauge = (int)(power * 100.0f);
        }
        if (p->i190 == 3) m.marker = 0;
        m.markerPos = Vec3(p->pos.x, v240.y, p->pos.z);
    }
    // The single-view globals follow the first human (online: the local player).
    if (mpHumans > 0 && hum[0].player >= 0) {
        camPos = hum[0].cam;
        camDir = hum[0].camDir;
        i3ac = hum[0].marker;
        f3a0 = hum[0].power;
        i39c = hum[0].gauge;
        v240 = hum[0].markerPos;
    }
}
