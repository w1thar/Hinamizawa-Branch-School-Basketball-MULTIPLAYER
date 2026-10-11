// Non-match game states.
//   1 title setup        0x4271d0     5 tip-off           0x41fe31
//   2 title / attract    0x427475     7 half time         0x4228f0
//   3 play mode select   0x427e4d     8 results           0x422fc2
//   4 team select        0x41e9c0     9 ending / credits  0x423d53
// State 6 (the match itself) lives in match.cpp.
#include <cmath>

#include "core/d3dmath.h"
#include "game/game.h"

static float Atan2(float y, float x) { return (float)atan2((double)y, (double)x); }

static bool AnyActionPushed(const Game *g)
{
    return g->keyX == KEY_PUSH || g->keyZ == KEY_PUSH || g->keyC == KEY_PUSH || g->keySpace == KEY_PUSH ||
           g->keyEnter == KEY_PUSH;
}

// ---- 1: set up the title scene --------------------------------------------------------------
void Game::State1_Title()
{
    players[0]->SetPos(-40.0f, 0.0f, -30.0f, 1.035f);
    players[1]->SetPos(-44.0f, 0.0f, -26.0f, 0.835f);
    players[2]->SetPos(-46.0f, 0.0f, -24.0f, 0.735f);
    players[3]->SetPos(-48.0f, 0.0f, -22.0f, 0.585f);
    players[4]->SetPos(-42.0f, 0.0f, -28.0f, 0.885f);
    players[5]->SetPos(-50.0f, 0.0f, -20.0f, 0.485f);
    for (int i = 0; i < 6; i++) players[i]->Motion_4312d5();
    camPos = Vec3(-48.0f, 20.0f, -28.0f);
    camDir = Vec3(1.0f, 0.0f, 1.0f);
    v24c.y = 6.0f;
    f258 = 0.0f;
    f25c = 0.0f;
    f260 = 0.0f;
    f264 = 0.0f;
    i3b0 = 0;
    sound->OpenMp3("WAV\\LP\\1.mp3");
    f394 = 1.0f;
    f390 = 0.0f;
    b3a4 = false;
    b3a7 = false;
    i3ac = 0;
    i268 = -1;
    state = 2;
}

// ---- 2: attract sequence; free camera after 32s, restarts at 140s -----------------------------
void Game::State2()
{
    float yawAngle = Atan2(camDir.x, camDir.z);
    v24c.y = 6.0f;
    f25c = 0.0f;
    f390 = f390 + dt;
    if (7.0f < f390 && f390 < 8.0f && !b398) {
        b398 = true;
        sound->Play(0);
    }
    if (12.0f < f390 && f390 < 17.0f) {
        if (0.01f < f394) f394 = f394 - dt * 0.2f;
        b398 = false;
    }
    if (17.5f < f390 && f390 < 18.5f && !b399) {
        b399 = true;
        sound->PlayMp3();
        for (int i = 0; i < 6; i++) players[i]->animTime = 2.0f;
    }
    if (17.0f < f390 && f390 < 22.3f) camPos.y = camPos.y - dt * 3.0f;
    if (24.8 < f390 && f390 < 25.3f) {
        b399 = false;
        camPos.x = camPos.x - sinf(yawAngle) * 13.0f * dt;
        camPos.z = camPos.z - cosf(yawAngle) * 13.0f * dt;
    }
    if (28.8f < f390 && f390 < 29.3f) {
        camPos.x = camPos.x - sinf(yawAngle) * 13.0f * dt;
        camPos.z = camPos.z - cosf(yawAngle) * 13.0f * dt;
    }
    if (29.3f < f390 && f390 < 31.5f) camPos.y = camPos.y + dt;
    if (32.0f < f390 && f390 < 140.0f) {
        b39a = 1;
        if (keyUp == KEY_HOLD || keyNum8 == KEY_HOLD) {
            camPos.x = sinf(yawAngle) * 25.0f * dt + camPos.x;
            camPos.z = cosf(yawAngle) * 25.0f * dt + camPos.z;
        }
        if (keyDown == KEY_HOLD || keyNum2 == KEY_HOLD) {
            camPos.x = camPos.x - sinf(yawAngle) * 25.0f * dt;
            camPos.z = camPos.z - cosf(yawAngle) * 25.0f * dt;
        }
        if (keyRight == KEY_HOLD || keyNum6 == KEY_HOLD) {
            yawAngle = dt * 2.0f + yawAngle;
            camDir.x = sinf(yawAngle);
            camDir.z = cosf(yawAngle);
        }
        if (keyLeft == KEY_HOLD || keyNum4 == KEY_HOLD) {
            yawAngle = yawAngle - dt * 2.0f;
            camDir.x = sinf(yawAngle);
            camDir.z = cosf(yawAngle);
        }
    }
    if (135.0f < f390 && f390 < 140.0f && f394 < 0.98f) f394 = dt * 0.2f + f394;
    if (140.0f < f390) {
        state = 1;
        sound->StopMp3();
        b39a = 0;
    }
    if (AnyActionPushed(this)) {
        sound->Play(1);
        for (int i = 0; i < 6; i++) {
            players[i]->Motion_Stand();
            players[i]->animTime = 0.0f;
        }
        // Keep the free camera if it is inside the area in front of the stands, else reset it.
        if (-50.0f <= camPos.x || camPos.x <= -65.0f || 10.0f <= camPos.y || camPos.y <= 0.0f ||
            -30.0f <= camPos.z || camPos.z <= -45.0f) {
            camPos.x = -57.0f;
            camPos.z = -37.0f;
            camPos.y = 6.0f;
        }
        camDir = Vec3(1.0f, 0.0f, 1.0f);
        sound->PlayMp3();
        sound->OpenMp3("WAV\\LP\\2.mp3");
        f390 = 0.0f;
        sound->PlayMp3();
        f394 = 0.0f;
        f400 = 4.0f;
        b398 = false;
        b399 = false;
        b39a = 1;
        state = 3;
    }
}

// ---- 3: play mode select (0 normal, 1 club, 2 practice); faces change with the selection -------
static void SetFaces(Game *g, int t0, int t1, int t2, int t3)
{
    for (int i = 0; i < 6; i++) {
        g->players[i]->SetTex0(t0);
        g->players[i]->SetTex1(t1);
        g->players[i]->SetTex2(t2);
        g->players[i]->SetTex3(t3);
        g->f400 = 4.0f;
    }
}

void Game::State3()
{
    f390 = f390 + dt;
    if (v24c.y < 1.0f && -1.0f < f25c && f25c < 7.0f) f25c = 25.0f;   // keep the ball bouncing
    if ((keyUp == KEY_PUSH || keyNum8 == KEY_PUSH) && 0 < i3b0) {
        i3b0 = i3b0 - 1;
        sound->Play(2);
        if (i3b0 == 0) SetFaces(this, 0, 0, 0, 0);
        if (i3b0 == 1) SetFaces(this, 0, 1, 1, -1);
    }
    if ((keyDown == KEY_PUSH || keyNum2 == KEY_PUSH) && i3b0 < 2) {
        i3b0 = i3b0 + 1;
        sound->Play(2);
        if (i3b0 == 1) SetFaces(this, 0, 1, 1, -1);
        if (i3b0 == 2) SetFaces(this, 1, 0, 0, 0);
    }
    if (AnyActionPushed(this)) {
        sound->Play(1);
        f390 = 0.0f;
        f394 = 1.0f;
        b39a = 0;
        sound->OpenMp3("WAV\\LP\\mion.mp3");
    }
    if (b39a == 0 && 0.5f < f390) {
        camPos = Vec3(0.0f, 3.5f, -30.0f);
        camDir = Vec3(0.0f, 0.0f, 1.0f);
        f390 = 0.0f;
        f394 = 0.0f;
        v24c.y = 0.7f;
        f25c = 0.0f;
        state = 4;
        i3b8 = 0;
        sound->PlayMp3();
        for (int i = 0; i < 6; i++) {
            players[i]->SetTex0(0);
            players[i]->SetTex1(0);
            players[i]->SetTex2(0);
            players[i]->SetTex3(0);
            players[i]->Motion_Stand();
            players[i]->SetPos(2.0f, 0.0f, -30.0f, 0.0f);
            players[i]->b154 = false;
            i3b4 = 0;
        }
        players[i3b4]->SetPos(-2.0f, 0.0f, -20.0f, f390);
    }
}

// ---- 4: team select. i3b8 = number picked (0..2), 3 = "OK?" yes, 4 = no, 5 = confirmed --------
void Game::State4()
{
    f390 = f390 + dt;
    f260 = f260 - dt;
    if (i3b8 < 3) players[i3b4]->yaw = f390;   // candidate spins on the spot

    auto showCandidate = [&](int step) {
        players[i3b4]->SetPos(2.0f, 0.0f, -30.0f, 0.0f);
        do {
            i3b4 += step;
            if (5 < i3b4) i3b4 = 0;
            if (i3b4 < 0) i3b4 = 5;
        } while (players[i3b4]->b154);
        players[i3b4]->SetPos(-2.0f, 0.0f, -20.0f, f390);
    };
    if (i3b8 < 3 && (keyRight == KEY_PUSH || keyNum6 == KEY_PUSH)) {
        sound->Play(2);
        showCandidate(1);
    }
    if (i3b8 < 3 && (keyLeft == KEY_PUSH || keyNum4 == KEY_PUSH)) {
        sound->Play(2);
        showCandidate(-1);
    }
    if (i3b8 < 3) {
        if (keyRight == KEY_HOLD || keyNum6 == KEY_HOLD) i39c = -2;
        else if (keyLeft == KEY_HOLD || keyNum4 == KEY_HOLD) i39c = -3;
        else i39c = -1;
    } else {
        i39c = 0;
    }

    if (i3b8 < 3 && AnyActionPushed(this)) {
        sound->Play(4);
        if (i3b8 < 2) {
            players[i3b4]->b154 = true;
            players[i3b4]->yaw = Atan2(((float)i3b8 * 6.0f + 3.0f) - 2.0f, -20.0f);
            players[i3b4]->Motion_42dfc0();
            if (i3b8 == 0) team[2] = i3b4;
            else team[0] = i3b4;
            i3b8 = i3b8 + 1;
            do {
                i3b4 = i3b4 + 1;
                if (5 < i3b4) i3b4 = 0;
            } while (players[i3b4]->b154);
            players[i3b4]->SetPos(-2.0f, 0.0f, -20.0f, f390);
        } else {
            players[i3b4]->b154 = true;
            players[i3b4]->yaw = Atan2(4.0f, -20.0f);
            players[i3b4]->Motion_42dfc0();
            team[1] = i3b4;
            i3b8 = 0;
            for (int i = 0; i < 6; i++) {
                if (!players[i]->b154) {
                    float yaw = Atan2((float)i3b8 * 2.0f + (-3.0f - (float)i3b8 * 3.0f) + 2.0f, -30.0f);
                    players[i]->SetPos((float)i3b8 * 2.0f + 2.0f, 0.0f, -30.0f, yaw);
                    players[i]->Motion_42dfc0();
                    team[3 + i3b8] = i;
                    i3b8 = i3b8 + 1;
                }
            }
            i3b8 = 3;
        }
    }

    // Picked players (and everyone once the teams are complete) walk onto the court.
    for (int i = 0; i < 6; i++) {
        Player *p = players[i];
        if (2 < i3b8 || p->b154) {
            if (p->pos.z <= 0.0f) {
                p->pos.x = p->pos.x - sinf(p->yaw) * p->stat168 * dt;
                p->pos.z = p->pos.z - cosf(p->yaw) * p->stat168 * dt;
            } else {
                p->yaw = 0.0f;
                p->Motion_Stand();
            }
        }
    }
    if (2 < i3b8 && camPos.z <= -20.0f) {
        camPos.z = dt * 2.0f + camPos.z;
        camPos.y = dt * 0.5f + camPos.y;
    }
    if (-20.0f < camPos.z && (keyUp == KEY_PUSH || keyNum8 == KEY_PUSH)) {
        i3b8 = 3;
        sound->Play(2);
    }
    if (-20.0f < camPos.z && (keyDown == KEY_PUSH || keyNum2 == KEY_PUSH)) {
        i3b8 = 4;
        sound->Play(2);
    }
    if (i3b8 == 3 && -20.0f < camPos.z && AnyActionPushed(this)) {
        sound->Play(5);
        i3b8 = 5;
        f390 = 0.0f;
        f394 = 1.0f;
        if (i3b0 == 2) sound->OpenMp3("WAV\\LP\\Rika.mp3");
        else sound->OpenMp3("WAV\\LP\\4.mp3");
    }
    if (i3b8 == 4 && AnyActionPushed(this)) {
        state = 1;
        sound->Play(2);
    }
    if (-20.0f < camPos.z) b3a4 = true;
    if (i3b8 == 5 && 1.0f < f390 && !b398) {
        b398 = true;
        sound->Play(3);
    }
    if (i3b8 == 5 && 3.0f < f390) {
        b3a6 = 0;
        f390 = 0.0f;
        i3b8 = 5;
        i418 = 0;
        for (int i = 0; i < 6; i++) slot[i] = team[i];
        // Satoko (3) and Rika (4) never take the centre (slot 2 / 5): rotate the line-up.
        while (slot[2] == 3 || slot[2] == 4) {
            i3fc = slot[2];
            slot[2] = slot[1];
            slot[1] = slot[0];
            slot[0] = i3fc;
        }
        while (slot[5] == 3 || slot[5] == 4) {
            i3fc = slot[5];
            slot[5] = slot[4];
            slot[4] = slot[3];
            slot[3] = i3fc;
        }
        if (i3b0 == 2) {
            // Practice: skip the tip-off, YOU start with the ball.
            players[slot[0]]->SetPos(-7.0f, 0.0f, -7.0f, -2.355f);
            players[slot[1]]->SetPos(-7.0f, 0.0f, 7.0f, -0.785f);
            players[slot[2]]->SetPos(2.0f, 0.0f, 0.0f, 1.571f);
            players[slot[3]]->SetPos(0.0f, 0.0f, 23.0f, 0.0f);
            players[slot[4]]->SetPos(-3.0f, 0.0f, 23.0f, 0.0f);
            players[slot[5]]->SetPos(3.0f, 0.0f, 23.0f, 0.0f);
            sound->PlayMp3();
            LoadSoundSet(1);
            b398 = false;
            b3a5 = true;
            b3a4 = true;
            b3a7 = true;
            i39c = 0;
            f3e0 = 90.0f;
            b414 = false;
            f394 = 0.0f;
            f260 = 0.0f;
            f258 = 0.0f;
            i268 = slot[2];
            f3a0 = 0.0f;
            for (int i = 0; i < 6; i++) {
                players[slot[i]]->Motion_Stand();
                players[slot[i]]->i190 = 7;
            }
            players[slot[2]]->i190 = 0;
            camPos = Vec3(0.0f, 12.0f, -20.0f);
            camDir = Vec3(0.0f, -0.5f, 1.0f);
            i3b8 = 0;
            i3ac = 1;
            i404 = slot[2];
            i40c = 0;
            b414 = false;
            state = 6;
        } else {
            state = 5;
        }
    }
}

// ---- 5: tip-off. Camera spirals down, then a jump ball between slot 2 (YOU) and slot 5 (COM) ----
void Game::State5()
{
    f390 = f390 + dt;
    if (i3b8 == 5) {
        sound->PlayMp3();
        LoadSoundSet(1);
        b398 = false;
        b3a5 = true;
        b3a4 = true;
        i39c = 0;
        f3e0 = i3b0 == 2 ? 180.0f : 300.0f;   // half length in seconds
        b414 = false;
        f394 = 0.0f;
        camPos.y = 155.0f;
        f260 = 0.0f;
        v24c.y = 0.7f;
        i268 = -1;
        f41c = 0.0f;
        for (int i = 0; i < 6; i++) {
            players[i]->i190 = 0;
            players[i]->Motion_Stand();
            players[i]->SetTex3(0);
            players[i]->SetTex2(0);
            players[i]->SetTex1(0);
            players[i]->SetTex0(0);
        }
        if (b3a6 == 0) {
            i3d8 = 0;
            i3dc = 0;
            players[slot[0]]->SetPos(7.0f, 0.0f, -7.0f, 2.355f);
            players[slot[1]]->SetPos(7.0f, 0.0f, 7.0f, 0.785f);
            players[slot[2]]->SetPos(-2.0f, 0.0f, 0.0f, -1.571f);
            players[slot[3]]->SetPos(-7.0f, 0.0f, -7.0f, -2.355f);
            players[slot[4]]->SetPos(-7.0f, 0.0f, 7.0f, -0.785f);
            players[slot[5]]->SetPos(2.0f, 0.0f, 0.0f, 1.571f);
        } else {
            players[slot[0]]->SetPos(-7.0f, 0.0f, -7.0f, -2.355f);
            players[slot[1]]->SetPos(-7.0f, 0.0f, 7.0f, -0.785f);
            players[slot[2]]->SetPos(2.0f, 0.0f, 0.0f, 1.571f);
            if (i3b0 == 2) {
                players[slot[3]]->SetPos(-2.0f, 0.0f, 23.0f, 0.0f);
                players[slot[4]]->SetPos(2.0f, 0.0f, 23.0f, 0.0f);
            } else {
                players[slot[3]]->SetPos(7.0f, 0.0f, -7.0f, 2.355f);
                players[slot[4]]->SetPos(7.0f, 0.0f, 7.0f, 0.785f);
            }
            players[slot[5]]->SetPos(-2.0f, 0.0f, 0.0f, -1.571f);
        }
        i3b8 = 0;
    }

    if (camPos.y > 65.0f && i3b8 == 0) {
        camPos.y = camPos.y - dt * 30.0f;
        camPos.x = sinf((f390 - 3.0f) * 1.57f) * 0.001f;
        camPos.z = cosf((f390 - 3.0f) * 1.57f) * 0.001f;
        camDir.x = -camPos.x;
        camDir.z = -camPos.z;
        camDir.y = 5.0f - camPos.y;
    } else if (camPos.y > 5.0f && i3b8 == 0) {
        camPos.y = camPos.y - dt * 30.0f;
        camPos.x = sinf((f390 - 3.0f) * 1.57f) * ((f390 - 3.0f) * 10.0f);
        camPos.z = cosf((f390 - 3.0f) * 1.57f) * ((f390 - 3.0f) * 10.0f);
        camDir.x = -camPos.x;
        camDir.z = -camPos.z;
        camDir.y = 5.0f - camPos.y;
    } else if (i3b8 == 0) {
        f390 = 0.0f;
        sound->Play(0);
        camDir.y = 0.0f;
        for (int i = 0; i < 6; i++) players[i]->i190 = 7;
        i3b8 = 1;
    } else if (f390 > 1.0f && i3b8 == 1) {
        // Ball goes up; COM's jumper gets a random jump strength and reaction delay.
        i3b8 = 2;
        sound->Play(1);
        f25c = 23.0f;
        v24c.y = 0.7f;
        f3a0 = 0.0f;
        b3a7 = true;
        Player *com = players[slot[5]];
        if (i3b0 == 1)
            com->f18c = (((float)crt_rand() * 0.2f) / 32767.0f + 0.85f) * com->stat16c;
        else
            com->f18c = (((float)crt_rand() * 0.2f) / 32767.0f + 0.8f) * com->stat16c;
        f3bc = ((float)crt_rand() * 0.2f) / 32767.0f;
    } else {
        f3e0 = f3e0 - dt;
        Player *you = players[slot[2]], *com = players[slot[5]];
        if (i3b8 == 2 && (keyX == KEY_HOLD || keyZ == KEY_HOLD || keyC == KEY_HOLD)) {
            you->Motion_43006a();   // crouch, charging the jump
            f3a0 = f3a0 + dt;
            if (1.0f < f3a0) f3a0 = 0.001f;
        }
        if (i3b8 == 2 && (keyX == KEY_RELEASE || keyZ == KEY_RELEASE || keyC == KEY_RELEASE)) {
            you->Motion_4301cb();   // jump
            you->f18c = you->stat16c * f3a0;
            sound->Play(2);
            i3b8 = 3;
        }
        if (i3b8 == 3) {
            if (you->pos.y <= -0.001f) {
                you->Motion_Stand();
                i3b8 = 2;
                you->pos.y = 0.0f;
            } else {
                you->f18c = you->f18c - dt * 20.0f;
                you->pos.y = you->f18c * dt + you->pos.y;
            }
        }
        if (f390 <= f3bc + 1.75f) {
            if (1.2f < f390) com->Motion_43006a();
        } else {
            if (com->pos.y < 0.1f) {
                com->Motion_4301cb();
                sound->Play(2);
            }
            if (-0.001f < com->pos.y) {
                com->f18c = com->f18c - dt * 20.0f;
                com->pos.y = com->f18c * dt + com->pos.y;
            }
            // Whoever reaches within 5 units of the ball first tips it towards their goal.
            if (v24c.y - com->pos.y < 5.0f) {
                if (b3a6 == 0) f260 = -0.5f - ((float)crt_rand() * 2.0f) / 32767.0f;
                else f260 = ((float)crt_rand() * 2.0f) / 32767.0f + 0.5f;
                f258 = 8.0f;
                i268 = -1;
                f3a0 = 0.0f;
                you->Motion_Stand();
                com->Motion_Stand();
                you->pos.y = 0.0f;
                com->pos.y = 0.0f;
                you->i190 = 15;
                com->i190 = i3b0 == 2 ? 7 : 15;
                camPos = Vec3(0.0f, 12.0f, -20.0f);
                camDir = Vec3(0.0f, -0.5f, 1.0f);
                i3b8 = 0;
                i3ac = 1;
                i404 = slot[5];
                i40c = 0;
                b414 = false;
                state = 6;
            }
            if (v24c.y - you->pos.y < 5.0f) {
                if (b3a6 == 0) f260 = ((float)crt_rand() * 2.0f) / 32767.0f + 0.5f;
                else f260 = -0.5f - ((float)crt_rand() * 2.0f) / 32767.0f;
                f258 = 8.0f;
                i268 = -1;
                f3a0 = 0.0f;
                you->Motion_Stand();
                com->Motion_Stand();
                you->pos.y = 0.0f;
                com->pos.y = 0.0f;
                you->i190 = 15;
                com->i190 = 15;
                camPos = Vec3(0.0f, 12.0f, -20.0f);
                camDir = Vec3(0.0f, -0.5f, 1.0f);
                i3b8 = 0;
                i3ac = 1;
                i404 = slot[2];
                i40c = 0;
                b414 = false;
                state = 6;
            }
        }
    }
}

// ---- 7: half time: free camera, X/Z/C starts the second half ------------------------------------
void Game::State7()
{
    f390 = f390 + dt;
    if (i3b8 == 0) {
        f390 = 0.0f;
        b3a5 = true;
        b3a4 = true;
        b3a6 = 1;
        b398 = false;
        b399 = false;
        i3ac = 0;
        f394 = 1.0f;
        sound->OpenMp3("WAV\\LP\\Satoko.mp3");
        players[0]->SetPos(0.0f, 0.0f, 17.0f, 0.0f);
        players[1]->SetPos(-3.0f, 0.0f, 17.0f, -0.2f);
        players[2]->SetPos(-1.0f, 0.0f, 8.0f, 3.14f);
        players[3]->SetPos(-5.0f, 0.0f, 15.0f, -1.0f);
        players[4]->SetPos(4.0f, 0.0f, 12.0f, 2.0f);
        players[5]->SetPos(3.0f, 0.0f, 16.0f, 0.5f);
        players[0]->Motion_430c40();
        players[1]->Motion_430c40();
        players[2]->Motion_430c40();
        players[3]->Motion_Stand();
        players[4]->Motion_Stand();
        players[5]->Motion_430c40();
        players[0]->SetTex1(1);
        players[0]->SetTex2(1);
        players[1]->SetTex1(1);
        players[1]->SetTex3(-1);
        players[1]->SetTex2(1);
        players[2]->SetTex2(1);
        players[3]->SetTex2(1);
        players[4]->SetTex2(1);
        camPos = Vec3(16.6f, 5.5f, 27.4f);
        camDir = Vec3(-0.76f, 0.0f, -0.62f);
        v24c.x = 0.0f;
        v24c.z = 0.0f;
        f25c = 0.0f;
        f258 = 0.0f;
        i268 = 0;
        i3b8 = 1;
    } else if (i3b8 == 1 && f390 > 1.0f) {
        i3b8 = 2;
        f394 = 0.0f;
        sound->PlayMp3();
        f390 = 0.0f;
    } else if (i3b8 == 5 && 1.0f < f390) {
        f390 = 0.0f;
        i3b8 = 5;
        state = 5;
        i418 = 0;
    }
    v24c.y = 5.5f;
    float yawAngle = Atan2(camDir.x, camDir.z);
    if (keyUp == KEY_HOLD || keyNum8 == KEY_HOLD) {
        camPos.x = sinf(yawAngle) * 15.0f * dt + camPos.x;
        camPos.z = cosf(yawAngle) * 15.0f * dt + camPos.z;
    }
    if (keyDown == KEY_HOLD || keyNum2 == KEY_HOLD) {
        camPos.x = camPos.x - sinf(yawAngle) * 15.0f * dt;
        camPos.z = camPos.z - cosf(yawAngle) * 15.0f * dt;
    }
    if (keyRight == KEY_HOLD || keyNum6 == KEY_HOLD) {
        yawAngle = dt * 2.0f + yawAngle;
        camDir.x = sinf(yawAngle);
        camDir.z = cosf(yawAngle);
    }
    if (keyLeft == KEY_HOLD || keyNum4 == KEY_HOLD) {
        yawAngle = yawAngle - dt * 2.0f;
        camDir.x = sinf(yawAngle);
        camDir.z = cosf(yawAngle);
    }
    if (keyX == KEY_PUSH || keyZ == KEY_PUSH || keyC == KEY_PUSH) {
        sound->Play(7);
        i3b8 = 5;
        f390 = 0.0f;
        f394 = 1.0f;
        sound->OpenMp3("WAV\\LP\\4.mp3");
    }
}

// ---- 8: results. i3b8: 0 wait, 1 line up, 2 pause, 3 show result, 4 fade, 5 decide, 6 game over --
void Game::State8()
{
    f390 = f390 + dt;
    if (i3b8 == 0 && f390 > 1.0f) {
        f3a0 = 0.0f;
        i39c = 0;
        f390 = 0.0f;
        i3b8 = 1;
    } else if (i3b8 == 1) {
        int arrived = 0;
        for (int i = 0; i < 3; i++) {   // YOU line up at x = 0,3,6 / z = -3
            Player *p = players[team[i]];
            float dx = p->pos.x - (float)i * 3.0f, dz = p->pos.z + 3.0f;
            if (sqrtf(dx * dx + dz * dz) <= 0.5f) {
                p->yaw = 0.0f;
                p->Motion_Stand();
                arrived++;
            } else {
                p->yaw = Atan2(p->pos.x - (float)i * 3.0f, p->pos.z + 3.0f);
                p->pos.x = p->pos.x - sinf(p->yaw) * p->stat168 * dt;
                p->pos.y = 0.0f;
                p->pos.z = p->pos.z - cosf(p->yaw) * p->stat168 * dt;
                p->Motion_42dfc0();
            }
        }
        for (int i = 0; i < 3; i++) {   // COM line up at x = -1.5,-4.5,-7.5 / z = 1
            Player *p = players[team[5 - i]];
            float dx = (float)i * 3.0f + 1.5f + p->pos.x, dz = p->pos.z - 1.0f;
            if (sqrtf(dx * dx + dz * dz) <= 0.5f) {
                p->yaw = 0.0f;
                p->Motion_Stand();
                arrived++;
            } else {
                p->yaw = Atan2((float)i * 3.0f + 1.5f + p->pos.x, p->pos.z - 1.0f);
                p->pos.x = p->pos.x - sinf(p->yaw) * p->stat168 * dt;
                p->pos.y = 0.0f;
                p->pos.z = p->pos.z - cosf(p->yaw) * p->stat168 * dt;
                p->Motion_42dfc0();
            }
        }
        if (arrived == 6) {
            f390 = 0.0f;
            i3b8 = 2;
        }
    } else if (i3b8 == 2 && f390 > 2.0f) {
        sound->Play(7);
        f390 = 0.0f;
        i3b8 = 3;
        if (i3dc < i3d8) {           // YOU win: celebrate, COM sulks
            for (int i = 0; i < 3; i++) {
                players[team[i]]->Motion_431118();
                players[team[i]]->SetTex1(1);
                players[team[i]]->SetTex2(1);
            }
            for (int i = 3; i < 6; i++) players[team[i]]->Motion_430e6d();
        } else if (i3d8 < i3dc) {
            for (int i = 0; i < 3; i++) players[team[i]]->Motion_430e6d();
            for (int i = 3; i < 6; i++) {
                players[team[i]]->Motion_431118();
                players[team[i]]->SetTex1(1);
                players[team[i]]->SetTex2(1);
            }
        } else {
            for (int i = 0; i < 6; i++) players[team[i]]->Motion_43030b();
        }
    } else if (i3b8 == 3) {
        if (keyX == KEY_PUSH || keyZ == KEY_PUSH || keyC == KEY_PUSH) i3b8 = 4;
    } else if (i3b8 == 4) {
        f394 = dt * 0.3f + f394;
        if (1.0f < f394) {
            f394 = 1.0f;
            i3b8 = 5;
        }
    } else if (i3b8 == 5) {
        sound->StopMp3();
        if (i3dc < i3d8 && i3b0 != 2) {   // won a real match: ending
            i3b8 = 0;
            f390 = 0.0f;
            state = 9;
        } else {
            i3b8 = 6;
            sound->Play(7);
            f390 = 0.0f;
        }
    } else if (i3b8 == 6 && 4.0f < f390) {
        for (int i = 0; i < 6; i++) {
            players[team[i]]->SetTex1(0);
            players[team[i]]->SetTex2(0);
        }
        camPos = Vec3(0.0f, 0.0f, 0.0f);
        camDir = Vec3(1.0f, 0.0f, 1.0f);
        v240 = Vec3(0.0f, 6.0f, 0.0f);
        v24c = Vec3(0.0f, 6.0f, 0.0f);
        f260 = 0.0f;
        f264 = 0.0f;
        f258 = 0.0f;
        f25c = 0.0f;
        i268 = -1;
        v370 = Vec3(0.0f, 0.0f, 0.0f);
        lightDir = Vec3(1.0f, -1.0f, 1.0f);
        v37c = Vec3(0.0f, 0.0f, 0.0f);
        f390 = 0.0f;
        f394 = 1.0f;
        b398 = false;
        b399 = false;
        b39a = 0;
        b3a4 = false;
        b3a5 = false;
        b3a6 = 0;
        b3a7 = false;
        i3ac = 0;
        i3b8 = 0;
        f3bc = 0.0f;
        i39c = 0;
        f3a0 = -1.0f;
        i3b0 = 0;
        i3b4 = 0;
        f3e0 = 300.0f;
        i3d8 = 0;
        i3dc = 0;
        f400 = 4.0f;
        i40c = 0;
        b414 = false;
        i418 = -1;
        state = 1;
    }
}

static void SetShadowMatrix(Mat4 &m, const Vec3 &l)
{
    float *s = m.m;
    s[0] = 1.0f;  s[1] = 0.0f;  s[2] = 0.0f;  s[3] = 0.0f;
    s[4] = -l.x / l.y;  s[5] = 0.0f;  s[6] = -l.z / l.y;  s[7] = 0.0f;
    s[8] = 0.0f;  s[9] = 0.0f;  s[10] = 1.0f;  s[11] = 0.0f;
    s[12] = 0.0f; s[13] = 0.05f; s[14] = 0.0f; s[15] = 1.0f;
}

// ---- 9: ending (only after winning a normal/club match): sunset, credits, 265s or X to skip ------
void Game::State9()
{
    f390 = f390 + dt;
    if (i3b8 == 0) {
        f390 = 0.0f;
        b3a5 = false;
        b3a4 = false;
        b3a6 = 0;
        b398 = false;
        b399 = false;
        i3ac = 0;
        f394 = 1.0f;
        lightDir = Vec3(1.0f, -0.8f, -1.0f);
        light.direction = lightDir;
        light.diffuse.r = 0.8f; light.diffuse.g = 0.5f; light.diffuse.b = 0.5f;
        light.ambient.r = 0.5f; light.ambient.g = 0.3f; light.ambient.b = 0.3f;
        SetShadowMatrix(matShadow, lightDir);
        sound->OpenMp3("WAV\\LP\\5.mp3");
        players[0]->SetPos(0.0f, 0.0f, 17.0f, 0.0f);
        players[1]->SetPos(-3.0f, 0.0f, 17.0f, -0.2f);
        players[2]->SetPos(-1.0f, 0.0f, 8.0f, 3.14f);
        players[3]->SetPos(-5.0f, 0.0f, 15.0f, -1.0f);
        players[4]->SetPos(4.0f, 0.0f, 12.0f, 2.0f);
        players[5]->SetPos(3.0f, 0.0f, 16.0f, 0.5f);
        players[0]->Motion_430c40();
        players[1]->Motion_430c40();
        players[2]->Motion_430c40();
        players[3]->Motion_Stand();
        players[4]->Motion_Stand();
        players[5]->Motion_430c40();
        camPos = Vec3(20.0f, 10.0f, -57.0f);
        camDir = Vec3(-0.43f, 0.0f, 0.9f);
        v24c = Vec3(0.0f, 0.7f, 0.0f);
        f25c = 0.0f;
        f258 = 0.0f;
        i268 = 0;
        i3b8 = 1;
    } else if (i3b8 == 1 && f390 > 1.0f) {
        i3b8 = 2;
        f394 = 0.0f;
        sound->PlayMp3();
        f390 = 0.0f;
    } else if (i3b8 == 2 && f390 > 265.0f) {
        i3b8 = 3;
    } else if (i3b8 == 3) {
        f394 = dt * 0.2f + f394;
        if (1.0f < f394) {
            f394 = 1.0f;
            i3b8 = 4;
        }
    } else if (i3b8 == 4) {
        sound->StopMp3();
        f394 = 1.0f;
        sound->OpenMp3("WAV\\LP\\1.mp3");
        for (int i = 0; i < 6; i++) {
            players[team[i]]->SetTex1(0);
            players[team[i]]->SetTex2(0);
        }
        camPos = Vec3(0.0f, 0.0f, 0.0f);
        camDir = Vec3(1.0f, 0.0f, 1.0f);
        lightDir = Vec3(1.0f, -1.0f, 1.0f);
        light.direction = lightDir;
        light.diffuse.r = 0.8f; light.diffuse.g = 0.8f; light.diffuse.b = 0.8f;
        light.ambient.r = 0.5f; light.ambient.g = 0.5f; light.ambient.b = 0.5f;
        SetShadowMatrix(matShadow, lightDir);
        v240 = Vec3(0.0f, 6.0f, 0.0f);
        v24c = Vec3(0.0f, 6.0f, 0.0f);
        f260 = 0.0f;
        f264 = 0.0f;
        f258 = 0.0f;
        f25c = 0.0f;
        i268 = -1;
        v370 = Vec3(0.0f, 0.0f, 0.0f);
        lightDir = Vec3(1.0f, -1.0f, 1.0f);
        v37c = Vec3(0.0f, 0.0f, 0.0f);
        f390 = 0.0f;
        f394 = 1.0f;
        b398 = false;
        b399 = false;
        b39a = 0;
        b3a4 = false;
        b3a5 = false;
        b3a6 = 0;
        b3a7 = false;
        i3ac = 0;
        i3b8 = 0;
        f3bc = 0.0f;
        i39c = 0;
        f3a0 = -1.0f;
        i3b0 = 0;
        i3b4 = 0;
        f3e0 = 300.0f;
        i3d8 = 0;
        i3dc = 0;
        f400 = 4.0f;
        i40c = 0;
        b414 = false;
        i418 = -1;
        state = 1;
    }
    if (i3b8 == 2) {   // the sun sets over the credits
        lightDir.y = dt * 0.002222f + lightDir.y;
        light.direction = lightDir;
        light.ambient.r = light.ambient.r - dt * 0.00074074f;
        light.ambient.g = light.ambient.g - dt * 0.00037037f;
        light.ambient.b = light.ambient.b - dt * 0.00037037f;
        SetShadowMatrix(matShadow, lightDir);
    }
    if (keyX == KEY_PUSH || keyZ == KEY_PUSH || keyC == KEY_PUSH) i3b8 = 3;
}
