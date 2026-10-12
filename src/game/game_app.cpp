// Application framework part of Game (original 0x401750..0x403089, 0x408a90 WinMain).
#include <cmath>
#include <cstring>
#include <string>
#include <unordered_map>
#include <vector>

#include "core/d3dmath.h"
#include "game/game.h"
#include "game/input.h"
#include "game/lang.h"
#include "game/settings.h"
#include "platform/platform.h"

Game::Game()
{
    // The original relied on the debug heap; every field the game reads is zeroed here.
    usePerfCounter = true;
    curTime = lastTime = 0;
    windowed = true;
    device = nullptr;
    dt = 0;
    keyUp = keyDown = keyLeft = keyRight = keySpace = keyX = keyZ = keyC = KEY_FREE;
    keyNum2 = keyNum4 = keyNum6 = keyNum8 = keyEnter = mouseL = mouseR = KEY_FREE;
    keyPause = KEY_FREE;
    padMove = false;
    padMoveX = padMoveY = 0;
    inputLock = false;
    paused = false;
    pausePage = pauseSel = 0;
    teamSize = 3;
    mouseX = mouseY = 0;
    quit = false;

    sound = nullptr;
    meshCourt = meshBuild = meshGoal = meshBall = meshCone = nullptr;
    for (Player *&p : players) p = nullptr;
    memset(&mtl, 0, sizeof(mtl));
    memset(&light, 0, sizeof(light));
    memset(&matView, 0, sizeof(matView));
    memset(&matShadow, 0, sizeof(matShadow));
    camPos = camDir = lightDir = v240 = v24c = Vec3(0, 0, 0);
    f258 = f25c = f260 = f264 = 0;
    i268 = 0;
    state = 0;
    memset(text, 0, sizeof(text));
    v370 = v37c = Vec3(0, 0, 0);
    f388 = f38c = f390 = f394 = 0;
    b398 = b399 = false;
    b39a = 0;
    i39c = 0;
    f3a0 = 0;
    b3a4 = b3a5 = false;
    b3a6 = 0;
    b3a7 = b3a8 = false;
    i3ac = i3b0 = i3b4 = i3b8 = 0;
    f3bc = 0;
    memset(team, 0, sizeof(team));
    i3d8 = i3dc = 0;
    f3e0 = 0;
    memset(slot, 0, sizeof(slot));
    i3fc = 0;
    f400 = 0;
    i404 = i408 = i40c = 0;
    f410 = 0;
    b414 = false;
    i418 = 0;
    f41c = 0;
    menuSel = 0;
}

Game::~Game() { Cleanup(); }

bool Game::Create()
{
    device = gfx::GetDevice();
    if (!InitD3D()) return false;
    crt_srand((u32)(plat::TimeSeconds() * 1000.0));   // srand(timeGetTime())
    curTime = lastTime = plat::TimeSeconds();
    return true;
}

bool Game::InitD3D()
{
    gfx::Viewport vp = {0, 0, 640, 480, 0.0f, 1.0f};
    device->SetViewport(vp);
    Mat4 proj;
    D3DUtil_SetProjectionMatrix(proj, 0.785f, 0.785f, 1.0f, 2000.0f);
    device->SetTransform(gfx::TS_PROJECTION, proj);
    device->SetRenderState(gfx::RS_LIGHTING, 1);
    device->SetTextureStageState(0, gfx::TSS_MAGFILTER, gfx::TFG_LINEAR);
    device->SetTextureStageState(1, gfx::TSS_MAGFILTER, gfx::TFG_LINEAR);
    device->SetRenderState(gfx::RS_ZENABLE, 1);
    return true;
}

void Game::Cleanup() {}

void Game::Flip() { plat::Present(); }

void Game::UpdateTimer()
{
    curTime = plat::TimeSeconds();
    dt = (float)(curTime - lastTime);
    lastTime = curTime;
    // Not in the original: a stalled frame (window drag, breakpoint) would otherwise teleport
    // everything. The original ran fullscreen where this could not happen.
    if (dt > 0.1f) dt = 0.1f;
}

static void UpdateKey(int *state, bool down)
{
    if (down)
        *state = (*state == KEY_FREE) ? KEY_PUSH : KEY_HOLD;
    else
        *state = (*state == KEY_PUSH || *state == KEY_HOLD) ? KEY_RELEASE : KEY_FREE;
}

// Original: GetKeyState() for 15 keys. Mod: every connected gamepad also drives the same keys
// (see game/input.h for the mapping), so single-player works with a controller too.
void Game::UpdateInput()
{
    RawControls pad = {};
    plat::GamepadInfo list[16];
    int n = plat::ListGamepads(list, 16);
    for (int i = 0; i < n; i++) {
        RawControls r;
        if (!Input_ReadRaw(list[i].id, r)) continue;
        pad.up |= r.up;
        pad.down |= r.down;
        pad.left |= r.left;
        pad.right |= r.right;
        pad.pass |= r.pass;
        pad.shoot |= r.shoot;
        pad.alt |= r.alt;
        pad.confirm |= r.confirm;
        pad.pause |= r.pause;
        // Analog movement follows whichever pad is pushed furthest.
        if (r.moveX * r.moveX + r.moveY * r.moveY > pad.moveX * pad.moveX + pad.moveY * pad.moveY) {
            pad.moveX = r.moveX;
            pad.moveY = r.moveY;
        }
    }
    padMove = pad.moveX != 0.0f || pad.moveY != 0.0f;
    padMoveX = pad.moveX;
    padMoveY = pad.moveY;
    UpdateKey(&keyUp, plat::KeyDown(plat::KEY_UP) || pad.up);
    UpdateKey(&keyDown, plat::KeyDown(plat::KEY_DOWN) || pad.down);
    UpdateKey(&keyLeft, plat::KeyDown(plat::KEY_LEFT) || pad.left);
    UpdateKey(&keyRight, plat::KeyDown(plat::KEY_RIGHT) || pad.right);
    UpdateKey(&keySpace, plat::KeyDown(plat::KEY_SPACE));
    UpdateKey(&keyEnter, plat::KeyDown(plat::KEY_RETURN) || pad.confirm);
    UpdateKey(&keyNum2, plat::KeyDown(plat::KEY_NUMPAD2));
    UpdateKey(&keyNum4, plat::KeyDown(plat::KEY_NUMPAD4));
    UpdateKey(&keyNum6, plat::KeyDown(plat::KEY_NUMPAD6));
    UpdateKey(&keyNum8, plat::KeyDown(plat::KEY_NUMPAD8));
    UpdateKey(&keyX, plat::KeyDown(plat::KEY_X) || pad.pass);
    UpdateKey(&keyZ, plat::KeyDown(plat::KEY_Z) || pad.shoot);
    UpdateKey(&keyC, plat::KeyDown(plat::KEY_C) || pad.alt);
    UpdateKey(&mouseL, plat::KeyDown(plat::KEY_LBUTTON));
    UpdateKey(&mouseR, plat::KeyDown(plat::KEY_RBUTTON));
    UpdateKey(&keyPause, plat::KeyDown(plat::KEY_ESCAPE) || pad.pause);

    // After leaving the pause menu the button that closed it is still down; ignore the action
    // keys until they are let go, so e.g. Cross on "Resume" does not also start a pass.
    if (inputLock) {
        bool anyDown = keyX != KEY_FREE || keyZ != KEY_FREE || keyC != KEY_FREE || keySpace != KEY_FREE ||
                       keyEnter != KEY_FREE || keyPause != KEY_FREE;
        if (!anyDown) inputLock = false;
        else keyX = keyZ = keyC = keySpace = keyEnter = keyPause = KEY_FREE;
    }
}

// ---- text -------------------------------------------------------------------------------------
// The original created a GDI font per call and TextOut'd onto the DirectDraw back buffer. Here each
// (string, size) is rasterised once at the current output scale and kept while it stays in use.

namespace {

struct CachedText {
    gfx::Texture *tex;
    float w, h;      // logical size
    float u1, v1;
    int lastFrame;
};

std::unordered_map<std::string, CachedText> g_textCache;
int g_textFrame;
float g_textScale;

int NextPow2(int v)
{
    int p = 1;
    while (p < v) p <<= 1;
    return p;
}

}  // namespace

static const CachedText *GetText(gfx::Device *device, const char *str, int size, plat::Font font)
{
    float scale = device->OutputScale();
    if (scale != g_textScale) {
        for (auto &e : g_textCache) device->DestroyTexture(e.second.tex);
        g_textCache.clear();
        g_textScale = scale;
    }
    std::string key = std::to_string(size) + '|' + std::to_string((int)font) + '|' + str;
    auto it = g_textCache.find(key);
    if (it == g_textCache.end()) {
        std::vector<uint8_t> alpha;
        int w, h;
        int px = (int)lroundf(size * scale);
        if (!plat::RasterText(str, px < 1 ? 1 : px, font, alpha, w, h)) return nullptr;
        int pw = NextPow2(w), ph = NextPow2(h);
        std::vector<u32> argb((size_t)pw * ph, 0x00ffffff);
        for (int yy = 0; yy < h; yy++)
            for (int xx = 0; xx < w; xx++) argb[(size_t)yy * pw + xx] = ((u32)alpha[(size_t)yy * w + xx] << 24) | 0xffffff;
        CachedText ct;
        ct.tex = device->CreateTexture(pw, ph, argb.data());
        ct.w = w / scale;
        ct.h = h / scale;
        ct.u1 = (float)w / pw;
        ct.v1 = (float)h / ph;
        it = g_textCache.emplace(key, ct).first;
    }
    it->second.lastFrame = g_textFrame;
    return &it->second;
}

// The original drew Japanese text at fixed positions. With English on, the string is swapped for
// its translation (in a Latin font) and placed so it keeps the Japanese text's centre, except for
// the left-aligned blocks (character descriptions, practice-mode help).
void Game::DrawText(const char *str, int size, int x, int y, int r, int g, int b)
{
    if (!str || !*str) return;
    plat::Font font = plat::FONT_JAPANESE;
    float fx = (float)x;
    if (g_settings.language == LANG_ENGLISH) {
        if (const char *en = Lang_English(str)) {
            const CachedText *jp = GetText(device, str, size, plat::FONT_JAPANESE);
            const CachedText *tr = GetText(device, en, size, plat::FONT_LATIN);
            if (jp && tr && x != 352 && x != 32 && x != 415) {
                fx = x + (jp->w - tr->w) / 2.0f;
                if (fx + tr->w > 638.0f) fx = 638.0f - tr->w;
                if (fx < 2.0f) fx = 2.0f;
            }
            str = en;
            font = plat::FONT_LATIN;
        }
    }
    const CachedText *t = GetText(device, str, size, font);
    if (!t) return;
    u32 color = 0xff000000u | ((u32)(r & 0xff) << 16) | ((u32)(g & 0xff) << 8) | (u32)(b & 0xff);
    device->DrawOverlay(t->tex, fx, (float)y, t->w, t->h, t->u1, t->v1, color);
}

float Game::MeasureText(const char *str, int size)
{
    plat::Font font = plat::FONT_JAPANESE;
    if (g_settings.language == LANG_ENGLISH) {
        if (const char *en = Lang_English(str)) {
            str = en;
            font = plat::FONT_LATIN;
        }
    }
    const CachedText *t = GetText(device, str, size, font);
    return t ? t->w : 0.0f;
}

void Game::DrawTextCentered(const char *str, int size, int cx, int y, int r, int g, int b)
{
    // Measured in the font DrawText will pick, then drawn without re-centring.
    float w = MeasureText(str, size);
    plat::Font font = plat::FONT_JAPANESE;
    if (g_settings.language == LANG_ENGLISH) {
        if (const char *en = Lang_English(str)) {
            str = en;
            font = plat::FONT_LATIN;
        }
    }
    const CachedText *t = GetText(device, str, size, font);
    if (!t) return;
    u32 color = 0xff000000u | ((u32)(r & 0xff) << 16) | ((u32)(g & 0xff) << 8) | (u32)(b & 0xff);
    device->DrawOverlay(t->tex, cx - w / 2.0f, (float)y, t->w, t->h, t->u1, t->v1, color);
}

// Called once per frame by main(): frees text that was not drawn for a while.
void TextCacheEndFrame()
{
    g_textFrame++;
    for (auto it = g_textCache.begin(); it != g_textCache.end();) {
        if (g_textFrame - it->second.lastFrame > 120) {
            gfx::GetDevice()->DestroyTexture(it->second.tex);
            it = g_textCache.erase(it);
        } else {
            ++it;
        }
    }
}
