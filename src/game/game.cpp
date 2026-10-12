// Game setup/teardown, the per-frame driver and small shared helpers.
// InitGame 0x429930, ShutdownGame 0x42a256, Frame 0x42a488, LoadSoundSet 0x42b0bb,
// RotateToward 0x4199d4, CalcStep 0x419ae5.
#include <cfloat>
#include <cmath>
#include <cstring>

#include "core/d3dmath.h"
#include "engine/textures.h"
#include "game/game.h"

static float Atan2(float y, float x) { return (float)atan2((double)y, (double)x); }

void Game::InitGame()
{
    state = 1;
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
    f41c = 0.0f;

    sound = new Sound();

    device->SetTextureStageState(0, gfx::TSS_ALPHAARG1, gfx::TA_TEXTURE);
    device->SetRenderState(gfx::RS_ALPHABLENDENABLE, 1);
    device->SetRenderState(gfx::RS_SRCBLEND, gfx::BLEND_SRCALPHA);
    device->SetRenderState(gfx::RS_DESTBLEND, gfx::BLEND_INVSRCALPHA);
    D3DTextr_CreateTextureFromFile("basket\\clouds.bmp", 0, 0);
    D3DTextr_CreateTextureFromFile("basket\\cloud2.bmp", 0, 0);
    D3DTextr_CreateTextureFromFile("basket\\court.tga", 0, 0);
    D3DTextr_CreateTextureFromFile("basket\\efect.tga", 0, 0);

    meshCourt = new StaticMesh();
    meshCourt->Load("basket\\court.x");
    meshCourt->Scale(2.5f);
    meshBuild = new StaticMesh();
    meshBuild->Load("basket\\build.x");
    meshBuild->Scale(2.5f);
    meshGoal = new StaticMesh();
    meshGoal->Load("basket\\goal.x");
    meshGoal->Scale(2.5f);
    meshBall = new StaticMesh();
    meshBall->Load("basket\\ball.x");
    meshBall->Scale(2.5f);
    meshCone = new StaticMesh();
    meshCone->Load("basket\\corn.x");
    meshCone->Scale(2.5f);

    for (int i = 0; i < 6; i++) {
        players[i] = new Player();
        players[i]->Load(device, i);
    }
    LoadSoundSet(0);

    memset(&light, 0, sizeof(light));
    light.type = 3;   // D3DLIGHT_DIRECTIONAL
    light.direction = lightDir;
    light.diffuse.r = 0.8f; light.diffuse.g = 0.8f; light.diffuse.b = 0.8f;
    light.ambient.r = 0.5f; light.ambient.g = 0.5f; light.ambient.b = 0.5f;
    light.specular.r = 1.0f; light.specular.g = 1.0f; light.specular.b = 1.0f;
    light.att0 = 1.0f;
    light.range = (float)sqrt((double)FLT_MAX);   // D3DLIGHT_RANGE_MAX
    device->LightEnable(0, true);

    memset(&mtl, 0, sizeof(mtl));
    mtl.diffuse.r = 1.0f; mtl.diffuse.g = 1.0f; mtl.diffuse.b = 1.0f; mtl.diffuse.a = 0.5f;
    mtl.ambient.r = 1.0f; mtl.ambient.g = 1.0f; mtl.ambient.b = 1.0f; mtl.ambient.a = 1.0f;
    mtl.specular.r = 0.0f; mtl.specular.g = 0.0f; mtl.specular.b = 0.0f; mtl.specular.a = 1.0f;
    mtl.emissive.r = 0.0f; mtl.emissive.g = 0.0f; mtl.emissive.b = 0.0f;
    mtl.power = 0.0f;

    // Projects onto the plane y = 0.05 along the light direction (planar shadows).
    float *s = matShadow.m;
    s[0] = 1.0f;  s[1] = 0.0f;  s[2] = 0.0f;  s[3] = 0.0f;
    s[4] = -lightDir.x / lightDir.y;  s[5] = 0.0f;  s[6] = -lightDir.z / lightDir.y;  s[7] = 0.0f;
    s[8] = 0.0f;  s[9] = 0.0f;  s[10] = 1.0f;  s[11] = 0.0f;
    s[12] = 0.0f; s[13] = 0.05f; s[14] = 0.0f; s[15] = 1.0f;
}

void Game::ShutdownGame()
{
    for (Player *&p : players) {
        delete p;
        p = nullptr;
    }
    delete meshCone;
    meshCone = nullptr;
    delete meshBall;
    meshBall = nullptr;
    delete meshGoal;
    meshGoal = nullptr;
    delete meshBuild;
    meshBuild = nullptr;
    delete meshCourt;
    meshCourt = nullptr;
    delete sound;
    sound = nullptr;
    D3DTextr_DestroyAll();
}

void Game::LoadSoundSet(int set)
{
    sound->Init();
    if (set == 0) {
        sound->LoadWav(0, "WAV\\LP\\semi.wav");
        sound->LoadWav(1, "WAV\\kyupirn.wav");
        sound->LoadWav(2, "WAV\\Pou.wav");
        sound->LoadWav(3, "WAV\\SE194.wav");
        sound->LoadWav(4, "WAV\\Finish.wav");
        sound->LoadWav(5, "WAV\\SE068.wav");
        sound->LoadWav(6, "WAV\\Chaimu.wav");
        sound->LoadWav(7, "WAV\\A6.wav");
    } else {
        sound->LoadWav(0, "basket\\pii.wav");
        sound->LoadWav(1, "WAV\\Nageru.wav");
        sound->LoadWav(2, "WAV\\Boyoon.wav");
        sound->LoadWav(3, "WAV\\Down.wav");
        sound->LoadWav(4, "WAV\\SE149.wav");
        sound->LoadWav(5, "WAV\\Down2.wav");
        sound->LoadWav(6, "basket\\pi.wav");
        sound->LoadWav(7, "WAV\\Hikaru.wav");
    }
}

void Game::Frame()
{
    bool frozen = UpdatePause();   // mod: the pause menu freezes everything below
    if (!frozen) {
        switch (state) {
        case 1: State1_Title(); break;
        case 2: State2(); break;
        case 3: State3(); break;
        case 4: State4(); break;
        case 5: State5(); break;
        case 6:
            if (mpActive) State6MP();
            else State6();
            break;
        case 7: State7(); break;
        case 8: State8(); break;
        case 9: State9(); break;
        case 11: State11_Settings(); break;
        case 12: State12_TeamSize(); break;
        case 13: State13_LocalSetup(); break;
        }
        for (int i = 0; i < 6; i++)
            if (!players[i]->benched) players[i]->Update(dt);
        fn_42b23c();
    }

    if (mpActive && mpSplit && state == 6) {   // mod: local multiplayer, one view per player
        RenderSplitScreen();
        DrawHUD();
        Flip();
        return;
    }

    Vec3 up(0.0f, 1.0f, 0.0f);
    Vec3 at(camPos.x + camDir.x, camPos.y + camDir.y, camPos.z + camDir.z);
    Vec3 from(camPos.x, camPos.y, camPos.z);
    D3DUtil_SetViewMatrix(matView, from, at, up);
    device->SetTransform(gfx::TS_VIEW, matView);
    device->Clear(gfx::CLEAR_ZBUFFER, 0, 1.0f);
    device->SetLight(0, light);
    if (device->BeginScene()) {
        float pitch = Atan2(camDir.y, 1.0f);
        float yawAngle = Atan2(camDir.x, camDir.z);
        RenderSky(yawAngle, pitch);
        RenderCourt();
        for (int i = 0; i < 6; i++)
            if (!players[i]->benched) players[i]->Render(device, matShadow);
        RenderObjects();
        DrawTeamPortraits();
        fn_421d0f();
        DrawPowerGauge();
        fn_428844();
        DrawSunGlare();
        fn_4259a7();
        fn_428491();
        fn_4286c9();
        if (paused) DrawPauseDim();
        device->EndScene();
    }
    DrawHUD();
    Flip();
}

// Turns `cur` towards `target` (radians, wrapping at +-pi) by `rate` per second, choosing the
// shorter way round. It does not clamp, so it overshoots by up to one step.
float Game::RotateToward(float target, float cur, float rate)
{
    float opposite = target + 3.14f;
    if (opposite >= 3.14f) opposite -= 6.28f;
    if (opposite < target) {
        if (cur >= target || cur <= opposite)
            return cur - rate * dt;
        return rate * dt + cur;
    }
    if (cur < target || cur > opposite)
        return rate * dt + cur;
    return cur - rate * dt;
}

// Where player `idx` ends up after one step forward (the active player i268 moves at 80% speed),
// pushed out to 3 units from any other player who is in play (i190 > 2).
Vec3 Game::CalcStep(int idx)
{
    Vec3 p;
    Player *me = players[idx];
    if (idx == i268) {
        p.x = me->pos.x - sinf(me->yaw) * me->stat168 * 0.8f * dt;
        p.y = me->pos.y;
        p.z = me->pos.z - cosf(me->yaw) * me->stat168 * 0.8f * dt;
    } else {
        p.x = me->pos.x - sinf(me->yaw) * me->stat168 * dt;
        p.y = me->pos.y;
        p.z = me->pos.z - cosf(me->yaw) * me->stat168 * dt;
    }
    for (int j = 0; j < 6; j++) {
        Player *o = players[j];
        if (j != idx && o->i190 > 2 && !o->benched) {
            float d2 = (o->pos.x - p.x) * (o->pos.x - p.x) + (o->pos.z - p.z) * (o->pos.z - p.z);
            if (d2 < 9.0f) {
                p.x = o->pos.x - ((o->pos.x - p.x) * 3.0f) / sqrtf(d2);
                p.z = o->pos.z - ((o->pos.z - p.z) * 3.0f) / sqrtf(d2);
            }
        }
    }
    return p;
}

// Mod: local multiplayer split screen. Each human gets a 320x480 half (1P left, 2P right) with
// their own camera, sky scroll, shot cone and power gauge; the team portraits, score frames and
// fades are drawn once over the whole screen.
void Game::RenderSplitScreen()
{
    Mat4 proj, narrow;
    device->GetTransform(gfx::TS_PROJECTION, proj);
    narrow = proj;
    narrow.m[0] *= 2.0f;   // half the width at the same scale: half the horizontal field of view
    Vec3 savedSky = v37c;
    int views = mpHumans < 2 ? mpHumans : 2;
    if (!device->BeginScene()) return;
    for (int v = 0; v < views; v++) {
        MpHuman &m = hum[v];
        gfx::Viewport vp = {(u32)(v * 320), 0, 320, 480, 0.0f, 1.0f};
        device->SetViewport(vp);
        device->SetTransform(gfx::TS_PROJECTION, narrow);
        Vec3 up(0.0f, 1.0f, 0.0f);
        Vec3 at(m.cam.x + m.camDir.x, m.cam.y + m.camDir.y, m.cam.z + m.camDir.z);
        D3DUtil_SetViewMatrix(matView, m.cam, at, up);
        device->SetTransform(gfx::TS_VIEW, matView);
        device->Clear(gfx::CLEAR_ZBUFFER, 0, 1.0f);
        device->SetLight(0, light);
        i3ac = m.marker;
        v240 = m.markerPos;
        f3a0 = m.power;
        i39c = m.gauge;
        v37c = m.sky;
        float pitch = Atan2(m.camDir.y, 1.0f);
        float yawAngle = Atan2(m.camDir.x, m.camDir.z);
        RenderSky(yawAngle, pitch);
        m.sky = v37c;
        RenderCourt();
        for (int i = 0; i < 6; i++)
            if (!players[i]->benched) players[i]->Render(device, matShadow);
        RenderObjects();
        DrawPowerGauge();
        fn_428844();
    }
    v37c = savedSky;
    gfx::Viewport full = {0, 0, 640, 480, 0.0f, 1.0f};
    device->SetViewport(full);
    device->SetTransform(gfx::TS_PROJECTION, proj);
    DrawSplitDivider();
    DrawTeamPortraits();
    fn_421d0f();
    fn_428491();
    if (paused) DrawPauseDim();
    device->EndScene();
}
