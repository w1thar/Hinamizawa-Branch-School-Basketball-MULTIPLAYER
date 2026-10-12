// Scene and overlay rendering.
// RenderSky 0x425170, RenderCourt 0x42a829, RenderObjects 0x42a8fa, DrawTeamPortraits 0x42134c,
// fn_421d0f 0x421d0f, DrawPowerGauge 0x422100, fn_428844 0x428844, DrawSunGlare 0x42557f,
// fn_4259a7 (lens flare) 0x4259a7, fn_428491 (white fade) 0x428491, fn_4286c9 0x4286c9.
//
// Screen-space quads are D3DTLVERTEX triangle strips in the order (left-bottom, left-top,
// right-bottom, right-top); texture coordinates index into efect.tga (negative u wraps).
#include <cmath>

#include "core/d3dmath.h"
#include "engine/textures.h"
#include "game/game.h"

namespace {

// D3DTLVERTEX(D3DVECTOR(x, y, z), rhw, color, specular, tu, tv)
TLVertex TL(float x, float y, float z, float rhw, u32 color, u32 specular, float tu, float tv)
{
    TLVertex v;
    v.sx = x;
    v.sy = y;
    v.sz = z;
    v.rhw = rhw;
    v.color = color;
    v.specular = specular;
    v.tu = tu;
    v.tv = tv;
    return v;
}

void Strip(gfx::Device *dev, const TLVertex *v) { dev->DrawPrimitive(gfx::PT_TRIANGLESTRIP, gfx::FVF_TLVERTEX, v, 4); }
void Tri(gfx::Device *dev, const TLVertex *v) { dev->DrawPrimitive(gfx::PT_TRIANGLELIST, gfx::FVF_TLVERTEX, v, 3); }

}  // namespace

void Game::RenderSky(float yawAngle, float pitchAngle)
{
    TLVertex v[4];
    v[0] = TL(0.0f, 480.0f, 0.9999f, 0.5f, 0xffffffff, 0, 0.0f, 1.0f);
    v[1] = TL(0.0f, 0.0f, 0.9999f, 0.5f, 0xffffffff, 0, 0.0f, 0.0f);
    v[2] = TL(640.0f, 480.0f, 0.9999f, 0.5f, 0xffffffff, 0, 1.0f, 1.0f);
    v[3] = TL(640.0f, 0.0f, 0.9999f, 0.5f, 0xffffffff, 0, 1.0f, 0.0f);

    // v37c: x = cloud drift, y = accumulated yaw scroll, z = last yaw (unwrapped across +-pi).
    if (v37c.z < -1.57f && yawAngle > 1.57f)
        v37c.y = ((yawAngle - v37c.z) - 6.28f) + v37c.y;
    else if (v37c.z > 1.57f && yawAngle < -1.57f)
        v37c.y = (yawAngle - v37c.z) + 6.28f + v37c.y;
    else
        v37c.y = (yawAngle - v37c.z) + v37c.y;
    v37c.z = yawAngle;

    float u0 = (v37c.y * 1.0f - pitchAngle * 0.55f) + v37c.x;
    float t0 = v37c.x * 0.5f + pitchAngle * 1.1f;
    v[1].tu = u0;
    v[0].tu = u0 + 0.5f;
    v[2].tu = u0 + 1.5f;
    v[3].tu = u0 + 1.0f;
    v[0].tv = t0;
    v[1].tv = t0 + 1.0f;
    v37c.x = dt * 0.02f + v37c.x;
    v[2].tv = t0;
    v[3].tv = t0 + 1.0f;

    if (state == 9)
        device->SetTexture(0, D3DTextr_GetSurface("basket\\cloud2.bmp"));
    else
        device->SetTexture(0, D3DTextr_GetSurface("basket\\clouds.bmp"));
    device->SetRenderState(gfx::RS_ZWRITEENABLE, 0);
    Strip(device, v);
    device->SetRenderState(gfx::RS_ZWRITEENABLE, 1);
}

void Game::RenderCourt()
{
    mtl.diffuse.r = 1.0f; mtl.diffuse.g = 1.0f; mtl.diffuse.b = 1.0f; mtl.diffuse.a = 0.5f;
    mtl.ambient.r = 1.0f; mtl.ambient.g = 1.0f; mtl.ambient.b = 1.0f;
    device->SetMaterial(mtl);
    device->SetTexture(0, D3DTextr_GetSurface("basket\\court.tga"));
    meshCourt->Render(device);
    meshBuild->Render(device);
}

void Game::RenderObjects()
{
    Mat4 a, b;
    mtl.diffuse.r = 1.0f; mtl.diffuse.g = 1.0f; mtl.diffuse.b = 1.0f; mtl.diffuse.a = 0.5f;
    mtl.ambient.r = 1.0f; mtl.ambient.g = 1.0f; mtl.ambient.b = 1.0f;
    device->SetMaterial(mtl);
    device->SetTexture(0, D3DTextr_GetSurface("basket\\efect.tga"));

    // Ball: spin around X (f264), heading around Y (f260), never drawn below y = 0.7.
    D3DUtil_SetRotateXMatrix(a, f264);
    D3DUtil_SetRotateYMatrix(b, f260);
    D3DMath_MatrixMultiply(a, a, b);
    if (v24c.y <= 0.7f)
        D3DUtil_SetTranslateMatrix(b, v24c.x, 0.7f, v24c.z);
    else
        D3DUtil_SetTranslateMatrix(b, v24c.x, v24c.y, v24c.z);
    D3DMath_MatrixMultiply(a, a, b);
    device->SetTransform(gfx::TS_WORLD, a);
    meshBall->Render(device);

    // Goals at x = +-35.
    D3DUtil_SetTranslateMatrix(a, 35.0f, 0.0f, 0.0f);
    device->SetTransform(gfx::TS_WORLD, a);
    meshGoal->Render(device);
    D3DUtil_SetRotateYMatrix(b, 3.14f);
    D3DUtil_SetTranslateMatrix(a, -35.0f, 0.0f, 0.0f);
    D3DMath_MatrixMultiply(a, b, a);
    device->SetTransform(gfx::TS_WORLD, a);
    meshGoal->Render(device);

    // Shot-type cone marker: 1 blue (loop pass), 2 green (loop shot), else red (jump shot).
    if (i3ac > 0) {
        if (i3ac == 1) {
            mtl.diffuse.r = 0.0f; mtl.diffuse.g = 0.0f; mtl.diffuse.b = 1.0f;
            mtl.ambient.r = 0.0f; mtl.ambient.g = 0.0f; mtl.ambient.b = 1.0f;
        } else if (i3ac == 2) {
            mtl.diffuse.r = 0.0f; mtl.diffuse.g = 1.0f; mtl.diffuse.b = 0.0f;
            mtl.ambient.r = 0.0f; mtl.ambient.g = 1.0f; mtl.ambient.b = 0.0f;
        } else {
            mtl.diffuse.r = 1.0f; mtl.diffuse.g = 0.0f; mtl.diffuse.b = 0.0f;
            mtl.ambient.r = 1.0f; mtl.ambient.g = 0.0f; mtl.ambient.b = 0.0f;
        }
        device->SetMaterial(mtl);
        D3DUtil_SetRotateYMatrix(b, f3e0);
        D3DUtil_SetTranslateMatrix(a, v240.x, v240.y, v240.z);
        D3DMath_MatrixMultiply(a, b, a);
        device->SetTransform(gfx::TS_WORLD, a);
        meshCone->Render(device);
        D3DUtil_SetRotateYMatrix(b, 3.14f);
        D3DUtil_SetTranslateMatrix(a, -35.0f, 0.0f, 0.0f);
        D3DMath_MatrixMultiply(a, b, a);
    }

    // Shadows (alpha from the material: 0.5). `a` still holds the -35 goal transform here.
    device->SetTextureStageState(0, gfx::TSS_ALPHAARG1, gfx::TA_DIFFUSE);
    mtl.diffuse.r = 0.0f; mtl.diffuse.g = 0.0f; mtl.diffuse.b = 0.0f;
    mtl.ambient.r = 0.0f; mtl.ambient.g = 0.0f; mtl.ambient.b = 0.0f;
    device->SetMaterial(mtl);
    D3DMath_MatrixMultiply(a, a, matShadow);
    device->SetTransform(gfx::TS_WORLD, a);
    meshGoal->Render(device);
    D3DUtil_SetTranslateMatrix(a, 35.0f, 0.0f, 0.0f);
    D3DMath_MatrixMultiply(a, a, matShadow);
    device->SetTransform(gfx::TS_WORLD, a);
    meshGoal->Render(device);
    if (v24c.y <= 0.7f)
        D3DUtil_SetTranslateMatrix(a, v24c.x, 0.7f, v24c.z);
    else
        D3DUtil_SetTranslateMatrix(a, v24c.x, v24c.y, v24c.z);
    D3DMath_MatrixMultiply(a, a, matShadow);
    device->SetTransform(gfx::TS_WORLD, a);
    meshBall->Render(device);
    device->SetTransform(gfx::TS_WORLD, matShadow);
    meshBuild->Render(device);
    device->SetTextureStageState(0, gfx::TSS_ALPHAARG1, gfx::TA_TEXTURE);
    D3DUtil_SetIdentityMatrix(a);
    device->SetTransform(gfx::TS_WORLD, a);
}

// Face icons of both teams along the top of the screen (efect.tga, 0.165 u per character).
void Game::DrawTeamPortraits()
{
    if (!b3a4) return;
    TLVertex v[4];
    auto icon = [&](int slotPos, int charIdx) {
        float u0 = (float)charIdx * 0.165f - 1.0f, u1 = (float)(charIdx + 1) * 0.165f - 1.0f;
        v[0] = TL(((float)slotPos + 0.3f) * 0.075f * 640.0f, 81.6f, 0.01f, 0.5f, 0xffffffff, 0, u0, 1.0f);
        v[1] = TL(((float)slotPos + 0.3f) * 0.075f * 640.0f, 33.6f, 0.01f, 0.5f, 0xffffffff, 0, u0, 0.838f);
        v[2] = TL(((float)slotPos + 1.3f) * 0.075f * 640.0f, 81.6f, 0.01f, 0.5f, 0xffffffff, 0, u1, 1.0f);
        v[3] = TL(((float)slotPos + 1.3f) * 0.075f * 640.0f, 33.6f, 0.01f, 0.5f, 0xffffffff, 0, u1, 0.838f);
        Strip(device, v);
    };
    auto iconRight = [&](int i, int charIdx) {
        float u0 = (float)charIdx * 0.165f - 1.0f, u1 = (float)(charIdx + 1) * 0.165f - 1.0f;
        v[0] = TL(((float)i + 10.0f) * 0.075f * 640.0f, 81.6f, 0.01f, 0.5f, 0xffffffff, 0, u0, 1.0f);
        v[1] = TL(((float)i + 10.0f) * 0.075f * 640.0f, 33.6f, 0.01f, 0.5f, 0xffffffff, 0, u0, 0.838f);
        v[2] = TL(((float)i + 11.0f) * 0.075f * 640.0f, 81.6f, 0.01f, 0.5f, 0xffffffff, 0, u1, 1.0f);
        v[3] = TL(((float)i + 11.0f) * 0.075f * 640.0f, 33.6f, 0.01f, 0.5f, 0xffffffff, 0, u1, 0.838f);
        Strip(device, v);
    };
    // Mod: benched players (1v1 / 2v2) get no portrait; with full teams this is the original order.
    int left = b3a6 == 0 ? 0 : 3, right = b3a6 == 0 ? 3 : 0;
    for (int i = 0, n = 0; i < 3; i++)
        if (!players[team[left + i]]->benched) icon(n++, team[left + i]);
    for (int i = 0, n = 0; i < 3; i++)
        if (!players[team[right + i]]->benched) iconRight(n++, team[right + i]);
}

void Game::fn_421d0f()
{
    if (!b3a5) return;
    TLVertex v[4];
    v[0] = TL(158.4f, 81.6f, 0.01f, 0.5f, 0xffffffff, 0, -0.3110000f, 0.606f);
    v[1] = TL(158.4f, 24.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.3110000f, 0.485f);
    v[2] = TL(241.6f, 81.6f, 0.01f, 0.5f, 0xffffffff, 0, -0.125f, 0.606f);
    v[3] = TL(241.6f, 24.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.125f, 0.485f);
    Strip(device, v);
    v[0] = TL(278.4f, 72.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.3110000f, 0.606f);
    v[1] = TL(278.4f, 24.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.3110000f, 0.485f);
    v[2] = TL(361.6f, 72.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.125f, 0.606f);
    v[3] = TL(361.6f, 24.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.125f, 0.485f);
    Strip(device, v);
    v[0] = TL(396.8f, 81.6f, 0.01f, 0.5f, 0xffffffff, 0, -0.3110000f, 0.606f);
    v[1] = TL(396.8f, 24.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.3110000f, 0.485f);
    v[2] = TL(480.0f, 81.6f, 0.01f, 0.5f, 0xffffffff, 0, -0.125f, 0.606f);
    v[3] = TL(480.0f, 24.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.125f, 0.485f);
    Strip(device, v);
}

// Shot power bar on the left edge while a shot is being charged (f3a0 in 0..1).
void Game::DrawPowerGauge()
{
    if (f3a0 < 1e-05f) return;
    TLVertex v[4];
    v[0] = TL(6.3999996f, 470.40002f, 0.01f, 0.5f, 0xffffffff, 0, -1.0f, 0.36f);
    v[1] = TL(6.3999996f, 96.0f, 0.01f, 0.5f, 0xffffffff, 0, 0.0f, 0.36f);
    v[2] = TL(25.599998f, 470.40002f, 0.01f, 0.5f, 0xffffffff, 0, -1.0f, 0.44f);
    v[3] = TL(25.599998f, 96.0f, 0.01f, 0.5f, 0xffffffff, 0, 0.0f, 0.44f);
    Strip(device, v);
    float top = (0.95f - f3a0 * 0.72f) * 480.0f;
    v[0] = TL(12.799999f, 456.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.7f, 0.07f);
    v[1] = TL(12.799999f, top, 0.01f, 0.5f, 0xffffffff, 0, -0.7f, 0.07f);
    v[2] = TL(19.199999f, 456.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.7f, 0.07f);
    v[3] = TL(19.199999f, top, 0.01f, 0.5f, 0xffffffff, 0, -0.7f, 0.07f);
    Strip(device, v);
}

// Arrows: i39c = -1 idle, -2 / -3 highlighted (selection screens); i39c > 0 = list cursor.
void Game::fn_428844()
{
    if (i39c == 0) return;
    TLVertex v[4];
    if (i39c == -1) {
        v[0] = TL(96.0f, 264.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.113f, 0.705f);
        v[1] = TL(96.0f, 312.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.005f, 0.812f);
        v[2] = TL(64.0f, 288.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.005f, 0.705f);
        Tri(device, v);
        v[0] = TL(288.0f, 264.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.113f, 0.705f);
        v[1] = TL(320.0f, 288.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.005f, 0.705f);
        v[2] = TL(288.0f, 312.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.005f, 0.812f);
        Tri(device, v);
    } else if (i39c == -2) {
        v[0] = TL(89.6f, 268.8f, 0.01f, 0.5f, 0xffffffff, 0, -0.113f, 0.705f);
        v[1] = TL(89.6f, 307.19998f, 0.01f, 0.5f, 0xffffffff, 0, -0.005f, 0.812f);
        v[2] = TL(70.4f, 288.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.005f, 0.705f);
        Tri(device, v);
        v[0] = TL(284.8f, 261.6f, 0.01f, 0.5f, 0xffffffff, 0, -0.113f, 0.705f);
        v[1] = TL(323.2f, 288.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.005f, 0.705f);
        v[2] = TL(284.8f, 314.4f, 0.01f, 0.5f, 0xffffffff, 0, -0.005f, 0.812f);
        Tri(device, v);
    } else if (i39c == -3) {
        v[0] = TL(99.2f, 261.6f, 0.01f, 0.5f, 0xffffffff, 0, -0.113f, 0.705f);
        v[1] = TL(99.2f, 314.4f, 0.01f, 0.5f, 0xffffffff, 0, -0.005f, 0.812f);
        v[2] = TL(60.8f, 288.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.005f, 0.705f);
        Tri(device, v);
        v[0] = TL(294.4f, 268.8f, 0.01f, 0.5f, 0xffffffff, 0, -0.113f, 0.705f);
        v[1] = TL(313.6f, 288.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.005f, 0.705f);
        v[2] = TL(294.4f, 307.19998f, 0.01f, 0.5f, 0xffffffff, 0, -0.005f, 0.812f);
        Tri(device, v);
    }
    if (i39c < 0) {
        v[0] = TL(339.19998f, 403.19998f, 0.01f, 0.5f, 0xffffffff, 0, -0.3f, 0.59f);
        v[1] = TL(339.19998f, 254.4f, 0.01f, 0.5f, 0xffffffff, 0, -0.3f, 0.5f);
        v[2] = TL(633.6f, 403.19998f, 0.01f, 0.5f, 0xffffffff, 0, -0.15f, 0.59f);
        v[3] = TL(633.6f, 254.4f, 0.01f, 0.5f, 0xffffffff, 0, -0.15f, 0.5f);
        Strip(device, v);
    } else {
        float y = (float)-i39c * 0.0072f + 0.95f;
        v[0] = TL(35.2f, (y - 0.04f) * 480.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.113f, 0.705f);
        v[1] = TL(35.2f, (y + 0.04f) * 480.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.005f, 0.812f);
        v[2] = TL(16.0f, y * 480.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.005f, 0.705f);
        Tri(device, v);
    }
}

// Projects the sun (a point back along the light direction from the camera) and draws a glare.
void Game::DrawSunGlare()
{
    Mat4 viewProj, proj;
    device->GetTransform(gfx::TS_PROJECTION, proj);
    D3DMath_MatrixMultiply(viewProj, matView, proj);
    float x = camPos.x - lightDir.x;
    float y = camPos.y - lightDir.y / 2.0f;
    float z = camPos.z - lightDir.z;
    const float *m = viewProj.m;
    float px = z * m[8] + y * m[4] + x * m[0] + m[12];
    float py = z * m[9] + y * m[5] + x * m[1] + m[13];
    float pw = z * m[11] + y * m[7] + x * m[3] + m[15];
    if (pw <= 0.0f) {
        f388 = -500.0f;
        return;
    }
    f388 = ((px / pw) * 640.0f) / 2.0f + 320.0f;
    f38c = 240.0f - ((py / pw) * 480.0f) / 2.0f;

    device->SetRenderState(gfx::RS_DESTBLEND, gfx::BLEND_INVSRCCOLOR);
    float s = (float)(int)((double)crt_rand() * 3.0 / 32767.0) + 53.33333f;
    TLVertex v[4];
    v[0] = TL(f388 - s, f38c + s, 0.9999f, 0.5f, 0xffffffff, 0, -0.603f, 0.832f);
    v[1] = TL(f388 - s, f38c - s, 0.9999f, 0.5f, 0xffffffff, 0, -0.603f, 0.646f);
    v[2] = TL(f388 + s, f38c + s, 0.9999f, 0.5f, 0xffffffff, 0, -0.791f, 0.832f);
    v[3] = TL(f388 + s, f38c - s, 0.9999f, 0.5f, 0xffffffff, 0, -0.791f, 0.646f);
    device->SetRenderState(gfx::RS_ZWRITEENABLE, 0);
    Strip(device, v);
    device->SetRenderState(gfx::RS_ZWRITEENABLE, 1);
    device->SetRenderState(gfx::RS_DESTBLEND, gfx::BLEND_INVSRCALPHA);
}

// Lens flare: five discs along the sun -> screen-centre line.
void Game::fn_4259a7()
{
    if (!(-100.0f < f388 && f388 < 740.0f && -200.0f < f38c)) return;
    float dx = 320.0f - f388;
    float dy = 240.0f - f38c;
    float len = sqrtf(dx * dx + dy * dy);
    if (len > 1e-06f) {
        dx = dx / len;
        dy = dy / len;
    }
    float step = (len * 2.0f) / 5.0f;
    int jitter = (int)((double)crt_rand() * 2.0 / 32767.0);
    device->SetRenderState(gfx::RS_DESTBLEND, gfx::BLEND_INVSRCCOLOR);
    device->SetRenderState(gfx::RS_ZENABLE, 0);

    struct Disc { float k, size, r, g, b; bool ring; };
    const Disc discs[5] = {
        {1.5f, 12.0f, 0.2f, 0.2f, 0.0f, false},
        {2.3f, 3.2f, 0.6f, 0.3f, 0.0f, false},
        {3.25f, 32.0f, 0.1f, 0.3f, 0.4f, true},
        {4.0f, 16.0f, 0.2f, 0.2f, 0.0f, false},
        {5.0f, 80.0f, 0.4f, 0.1f, 0.0f, true},
    };
    TLVertex v[4];
    for (const Disc &d : discs) {
        float s = (float)jitter + d.size;
        u32 c = ((u32)(int)(d.r * 255.0f) << 16) | 0xff000000u | ((u32)(int)(d.g * 255.0f) << 8) | (u32)(int)(d.b * 255.0f);
        float cx = dx * d.k * step + f388;
        float cy = dy * d.k * step + f38c;
        float tuL = d.ring ? -0.603f : -0.798f, tuR = d.ring ? -0.786f : -0.986f;
        float tvB = d.ring ? 0.641f : 0.833f, tvT = d.ring ? 0.455f : 0.646f;
        v[0] = TL(cx - s, cy + s, 0.9999f, 0.5f, c, 0, tuL, tvB);
        v[1] = TL(cx - s, cy - s, 0.9999f, 0.5f, c, 0, tuL, tvT);
        v[2] = TL(cx + s, cy + s, 0.9999f, 0.5f, c, 0, tuR, tvB);
        v[3] = TL(cx + s, cy - s, 0.9999f, 0.5f, c, 0, tuR, tvT);
        Strip(device, v);
    }
    device->SetRenderState(gfx::RS_ZENABLE, 1);
    device->SetRenderState(gfx::RS_DESTBLEND, gfx::BLEND_INVSRCALPHA);
}

// Full-screen white fade, alpha = f394.
void Game::fn_428491()
{
    if (f394 < 0.01f) return;
    u32 c = ((u32)(int)(f394 * 255.0f) << 24) | 0x00ffffff;
    TLVertex v[4];
    v[0] = TL(0.0f, 480.0f, 0.0f, 0.5f, c, 0, -0.71f, 0.56f);
    v[1] = TL(0.0f, 0.0f, 0.0f, 0.5f, c, 0, -0.71f, 0.58f);
    v[2] = TL(640.0f, 480.0f, 0.0f, 0.5f, c, 0, -0.7f, 0.58f);
    v[3] = TL(640.0f, 0.0f, 0.0f, 0.5f, c, 0, -0.7f, 0.56f);
    device->SetTextureStageState(0, gfx::TSS_ALPHAARG1, gfx::TA_DIFFUSE);
    Strip(device, v);
    device->SetTextureStageState(0, gfx::TSS_ALPHAARG1, gfx::TA_TEXTURE);
}

// Mod: darkens the scene behind the pause menu (same quad as the white fade, black diffuse).
void Game::DrawPauseDim()
{
    u32 c = 0xa0000000;
    TLVertex v[4];
    v[0] = TL(0.0f, 480.0f, 0.0f, 0.5f, c, 0, -0.71f, 0.56f);
    v[1] = TL(0.0f, 0.0f, 0.0f, 0.5f, c, 0, -0.71f, 0.58f);
    v[2] = TL(640.0f, 480.0f, 0.0f, 0.5f, c, 0, -0.7f, 0.58f);
    v[3] = TL(640.0f, 0.0f, 0.0f, 0.5f, c, 0, -0.7f, 0.56f);
    device->SetTextureStageState(0, gfx::TSS_ALPHAARG1, gfx::TA_DIFFUSE);
    Strip(device, v);
    device->SetTextureStageState(0, gfx::TSS_ALPHAARG1, gfx::TA_TEXTURE);
}

// Mod: the line between the two halves of the split screen.
void Game::DrawSplitDivider()
{
    u32 c = 0xff000000;
    TLVertex v[4];
    v[0] = TL(318.0f, 480.0f, 0.0f, 0.5f, c, 0, -0.71f, 0.56f);
    v[1] = TL(318.0f, 0.0f, 0.0f, 0.5f, c, 0, -0.71f, 0.58f);
    v[2] = TL(322.0f, 480.0f, 0.0f, 0.5f, c, 0, -0.7f, 0.58f);
    v[3] = TL(322.0f, 0.0f, 0.0f, 0.5f, c, 0, -0.7f, 0.56f);
    device->SetTextureStageState(0, gfx::TSS_ALPHAARG1, gfx::TA_DIFFUSE);
    Strip(device, v);
    device->SetTextureStageState(0, gfx::TSS_ALPHAARG1, gfx::TA_TEXTURE);
}

// Title logo.
void Game::fn_4286c9()
{
    if (!b39a) return;
    TLVertex v[4];
    v[0] = TL(128.0f, 144.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.99f, 0.36f);
    v[1] = TL(128.0f, 24.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.99f, 0.01f);
    v[2] = TL(512.0f, 144.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.01f, 0.36f);
    v[3] = TL(512.0f, 24.0f, 0.01f, 0.5f, 0xffffffff, 0, -0.01f, 0.01f);
    Strip(device, v);
}
