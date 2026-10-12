// The application/game object (original: one 0x420-byte object deriving from a small D3D app class).
// Field names keep the original layout order; ones whose purpose is not yet pinned down are named
// after their original byte offset (f258 = float at +0x258, i3b0 = int at +0x3b0, ...).
#pragma once

#include "core/types.h"
#include "engine/sound.h"
#include "game/input.h"
#include "game/models.h"
#include "game/player.h"
#include "render/gfx.h"

// Entries of the play-mode menu (state 3). 0..2 are the original modes.
enum PlayMode {
    MODE_NORMAL = 0, MODE_CLUB = 1, MODE_PRACTICE = 2,
    MODE_LOCAL = 3, MODE_SETTINGS = 4, MODE_LAST = 4
};

// Multiplayer (mod): one entry per human player.
struct MpHuman {
    int device = DEVICE_NONE;  // local input device (DEVICE_KEYBOARD or a gamepad id)
    VirtualPad pad;            // this player's buttons, stepped every frame
    float moveX = 0, moveY = 0;
    bool move = false;         // analog direction (gamepads), screen-relative
    int player = -1;           // the character this human is locked to
    // Per-human copies of what the original keeps once for 'YOU':
    float power = 0;           // loop-shot charge (f3a0)
    int marker = 0;            // shot-type cone (i3ac)
    int gauge = 0;             // ideal-power marker (i39c)
    Vec3 markerPos;            // cone position (v240)
    bool upHeld = false;       // running forward this frame (red-cone rule)
    bool chargeCam = false;    // camera behind the player while charging (i3b8 == 2)
    bool shotCam = false;      // camera follows this player's shot (i3b8 == 1)
    int tipState = 0;          // tip-off jump: 0 ready, 1 in the air
    Vec3 cam, camDir;          // this player's camera
    Vec3 sky;                  // sky scroll state (v37c) of this player's view
};
struct MpPick {
    bool teamA;                // picks for team A (left / 'YOU') or team B
    int owner;                 // human choosing
    int lock;                  // human locked to the picked character, or -1
};

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
    // Added by the mod: helpers for the new menus (also translation-aware).
    float MeasureText(const char *str, int size);
    void DrawTextCentered(const char *str, int size, int cx, int y, int r, int g, int b);

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
    void State11_Settings();   // added by the mod
    void State12_TeamSize();   // added by the mod
    void State13_LocalSetup(); // added by the mod
    void State6MP();           // the match with human players anywhere (mp_match.cpp)
    void MpBeginPicks();
    void MpPickChosen();
    void MpPlaceHumansInCentre();
    void MpUpdateInput();
    bool MpTeamHasHuman(bool teamA) const;
    const char *TeamLabel(bool teamA) const;
    void RenderSplitScreen();
    void DrawSplitDivider();
    void StartTeamSelect();
    void PickSmallTeams();
    bool SettingsMenu();       // settings page input; true when "Back" was chosen
    bool UpdatePause();        // pause menu; true while the game is paused
    int PauseItems(int *ids);  // the pause menu's entries for the current state
    void ReturnToTitle();
    void DrawSettingsMenu();
    void DrawPauseMenu();
    void DrawPauseDim();

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
    int keyPause;              // mod: ESC / Options / Start
    bool padMove;              // mod: a gamepad stick / d-pad is pushed (analog movement)
    float padMoveX, padMoveY;  // mod: its direction on screen, +y = down
    bool inputLock;            // mod: swallow held action keys after closing the pause menu
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

    // ---- added by the mod ----
    int menuSel;               // cursor in the mod's menus
    bool paused;               // pause menu open: the game is frozen
    int pausePage;             // 0 = pause menu, 1 = settings
    int pauseSel;
    int teamSize;              // players per team in the match (1..3; the original is always 3)

    // ---- multiplayer (mod) ----
    bool mpActive;             // a multiplayer match is set up (from team select to the results)
    bool mpVersus;             // humans on both teams (else co-op against COM)
    bool mpSplit;              // local split screen
    int mpHumans;
    MpHuman hum[6];
    int ctrl[6];               // player index -> human controlling it, or -1
    int mpMenuOwner;           // human whose device drives the menu keys, or -1 for everyone
    MpPick mpPicks[6];
    int mpPickCount, mpPickIdx;
    int localDev[2];           // local setup: devices chosen for 1P / 2P
    bool localVersus;
    int localSize;
};
