// The application/game object (original: one 0x420-byte object deriving from a small D3D app class).
// Field names keep the original layout order; ones whose purpose is not yet pinned down are named
// after their original byte offset (f258 = float at +0x258, i3b0 = int at +0x3b0, ...).
#pragma once

#include "core/types.h"
#include "engine/sound.h"
#include "game/models.h"
#include "game/player.h"
#include "render/gfx.h"

// Key states produced by UpdateInput() (the original's per-file KEY_* constants).
enum KeyState { KEY_FREE = 0, KEY_PUSH = 1, KEY_RELEASE = 2, KEY_HOLD = 3 };

class Game {
public:
    Game();
    ~Game();

    // ---- application framework (0x401750..0x403089) ----
    bool Create();
    bool InitD3D();
    void Cleanup();
    void Flip();
    void UpdateTimer();
    void UpdateInput();
    void DrawText(const char *str, int size, int x, int y, int r, int g, int b);

    // ---- game (0x40e400..0x42b23c) ----
    void InitGame();
    void ShutdownGame();
    void Frame();
    void LoadSoundSet(int set);

    void State1_Title();
    void State2();
    void State3();
    void State4();
    void State5();
    void State6();
    void State7();
    void State8();
    void State9();

    void RenderSky(float yawAngle, float pitchAngle);
    void RenderCourt();
    void RenderObjects();
    void DrawTeamPortraits();
    void fn_421d0f();
    void DrawPowerGauge();
    void fn_428844();
    void DrawSunGlare();
    void fn_4259a7();
    void fn_428491();
    void fn_4286c9();
    void fn_42b23c();
    void DrawHUD();

    float RotateToward(float target, float cur, float rate);
    Vec3 CalcStep(int idx);

    // ---- framework state ----
    bool usePerfCounter;
    double curTime, lastTime;
    bool windowed;
    gfx::Device *device;
    float dt;
    int keyUp, keyDown, keyLeft, keyRight, keySpace, keyX, keyZ, keyC;
    int keyNum2, keyNum4, keyNum6, keyNum8, keyEnter, mouseL, mouseR;
    int mouseX, mouseY;
    bool quit;

    // ---- game state ----
    Sound *sound;
    StaticMesh *meshCourt, *meshBuild, *meshGoal, *meshBall, *meshCone;
    Player *players[6];
    Material7 mtl;
    Light7 light;
    Mat4 matView;
    Mat4 matShadow;
    Vec3 camPos;
    Vec3 camDir;
    Vec3 lightDir;
    Vec3 v240;
    Vec3 v24c;
    float f258, f25c, f260, f264;
    int i268;
    int state;
    char text[256];
    Vec3 v370;
    Vec3 v37c;
    float f388, f38c, f390, f394;
    bool b398, b399;
    u8 b39a;
    int i39c;
    float f3a0;
    bool b3a4, b3a5;
    u8 b3a6;
    bool b3a7, b3a8;
    int i3ac, i3b0, i3b4, i3b8;
    float f3bc;
    int team[6];            // [0..2] your team, [3..5] COM team (character ids)
    int i3d8, i3dc;
    float f3e0;
    int slot[6];
    int i3fc;
    float f400;
    int i404, i408, i40c;
    float f410;
    bool b414;
    int i418;
    float f41c;
};
