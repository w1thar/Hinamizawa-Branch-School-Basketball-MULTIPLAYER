// OpenGL 1.1 (+ GL_ARB_texture_env_combine enums, core since 1.3) backend for gfx::Device.
//
// D3D7 -> GL notes:
//  * D3D matrices are row-vector/row-major; their memory is directly usable as GL column-major
//    matrices. GL modelview = World*View. Projection gets a post-multiply that remaps D3D's
//    [0,1] clip depth to GL's [-1,1].
//  * Fixed-function lighting math is identical (emissive + ambient + diffuse*N.L; specular is
//    disabled by default in D3D7, so it is left off). D3D lights are world-space, so the light
//    is (re)specified with modelview = View before each draw.
//  * D3D stage 0 defaults: COLOROP=MODULATE(TEXTURE,DIFFUSE), ALPHAOP=SELECTARG1(TEXTURE).
//    A NULL texture samples as opaque white. Emulated with the combine texture environment.
//  * D3D7 rasterises pre-transformed vertices with pixel centres on integer coordinates; GL uses
//    half-integers, hence the +0.5 offset in the screen-space projection.
#include "render/gfx.h"

#include <cstring>
#include <vector>

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif
#include <GL/gl.h>

#ifndef GL_COMBINE
#define GL_COMBINE 0x8570
#define GL_COMBINE_RGB 0x8571
#define GL_COMBINE_ALPHA 0x8572
#define GL_SOURCE0_RGB 0x8580
#define GL_SOURCE1_RGB 0x8581
#define GL_SOURCE0_ALPHA 0x8588
#define GL_SOURCE1_ALPHA 0x8589
#define GL_OPERAND0_RGB 0x8590
#define GL_OPERAND1_RGB 0x8591
#define GL_OPERAND0_ALPHA 0x8598
#define GL_OPERAND1_ALPHA 0x8599
#define GL_PRIMARY_COLOR 0x8577
#define GL_PREVIOUS 0x8578
#endif

namespace gfx {

struct Texture {
    GLuint id;
    int w, h;
};

namespace {

struct State {
    Mat4 world, view, proj;
    Material7 material;
    Light7 lights[8];
    bool lightOn[8];
    u32 rs[256];
    u32 tss[2][32];
    Texture *tex[2];
    Texture *white;
    int outX, outY, outW, outH, winW, winH;
} S;

Device g_device;

void Identity(Mat4 &m)
{
    memset(&m, 0, sizeof(m));
    m.m[0] = m.m[5] = m.m[10] = m.m[15] = 1.0f;
}

void Mul(Mat4 &q, const Mat4 &a, const Mat4 &b)
{
    Mat4 r;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            float s = 0;
            for (int k = 0; k < 4; k++) s += a.m[i * 4 + k] * b.m[k * 4 + j];
            r.m[i * 4 + j] = s;
        }
    q = r;
}

GLenum BlendToGL(u32 b)
{
    switch (b) {
    case BLEND_ZERO: return GL_ZERO;
    case BLEND_ONE: return GL_ONE;
    case BLEND_SRCCOLOR: return GL_SRC_COLOR;
    case BLEND_INVSRCCOLOR: return GL_ONE_MINUS_SRC_COLOR;
    case BLEND_SRCALPHA: return GL_SRC_ALPHA;
    case BLEND_INVSRCALPHA: return GL_ONE_MINUS_SRC_ALPHA;
    case BLEND_DESTALPHA: return GL_DST_ALPHA;
    case BLEND_INVDESTALPHA: return GL_ONE_MINUS_DST_ALPHA;
    case BLEND_DESTCOLOR: return GL_DST_COLOR;
    case BLEND_INVDESTCOLOR: return GL_ONE_MINUS_DST_COLOR;
    }
    return GL_ONE;
}

void SetColor4(GLenum pname, const Color4 &c, GLenum light = 0)
{
    GLfloat v[4] = {c.r, c.g, c.b, c.a};
    if (light)
        glLightfv(light, pname, v);
    else
        glMaterialfv(GL_FRONT_AND_BACK, pname, v);
}

// Maps a D3D texture argument onto a GL combine source for stage 0.
GLenum ArgSource(u32 arg) { return (arg & 0xf) == TA_TEXTURE ? GL_TEXTURE : GL_PRIMARY_COLOR; }

void ApplyCommonState()
{
    if (S.rs[RS_ZENABLE]) glEnable(GL_DEPTH_TEST); else glDisable(GL_DEPTH_TEST);
    glDepthMask(S.rs[RS_ZWRITEENABLE] ? GL_TRUE : GL_FALSE);
    if (S.rs[RS_ALPHABLENDENABLE]) glEnable(GL_BLEND); else glDisable(GL_BLEND);
    glBlendFunc(BlendToGL(S.rs[RS_SRCBLEND]), BlendToGL(S.rs[RS_DESTBLEND]));

    switch (S.rs[RS_CULLMODE]) {
    case CULL_NONE: glDisable(GL_CULL_FACE); break;
    case CULL_CW: glEnable(GL_CULL_FACE); glFrontFace(GL_CCW); glCullFace(GL_BACK); break;
    default: glEnable(GL_CULL_FACE); glFrontFace(GL_CW); glCullFace(GL_BACK); break;
    }

    // Texture stage 0.
    Texture *t = S.tex[0] ? S.tex[0] : S.white;
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, t->id);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER,
                    S.tss[0][TSS_MAGFILTER] == TFG_LINEAR ? GL_LINEAR : GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,
                    S.tss[0][TSS_MINFILTER] == TFG_LINEAR ? GL_LINEAR : GL_NEAREST);

    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_COMBINE);
    const u32 *ts = S.tss[0];
    switch (ts[TSS_COLOROP]) {
    case TOP_SELECTARG1:
        glTexEnvi(GL_TEXTURE_ENV, GL_COMBINE_RGB, GL_REPLACE);
        glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE0_RGB, ArgSource(ts[TSS_COLORARG1]));
        break;
    case TOP_SELECTARG2:
        glTexEnvi(GL_TEXTURE_ENV, GL_COMBINE_RGB, GL_REPLACE);
        glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE0_RGB, ArgSource(ts[TSS_COLORARG2]));
        break;
    case TOP_DISABLE:
        glTexEnvi(GL_TEXTURE_ENV, GL_COMBINE_RGB, GL_REPLACE);
        glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE0_RGB, GL_PRIMARY_COLOR);
        break;
    default:
        glTexEnvi(GL_TEXTURE_ENV, GL_COMBINE_RGB, GL_MODULATE);
        glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE0_RGB, ArgSource(ts[TSS_COLORARG1]));
        glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE1_RGB, ArgSource(ts[TSS_COLORARG2]));
        break;
    }
    glTexEnvi(GL_TEXTURE_ENV, GL_OPERAND0_RGB, GL_SRC_COLOR);
    glTexEnvi(GL_TEXTURE_ENV, GL_OPERAND1_RGB, GL_SRC_COLOR);
    switch (ts[TSS_ALPHAOP]) {
    case TOP_MODULATE:
        glTexEnvi(GL_TEXTURE_ENV, GL_COMBINE_ALPHA, GL_MODULATE);
        glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE0_ALPHA, ArgSource(ts[TSS_ALPHAARG1]));
        glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE1_ALPHA, ArgSource(ts[TSS_ALPHAARG2]));
        break;
    case TOP_SELECTARG2:
        glTexEnvi(GL_TEXTURE_ENV, GL_COMBINE_ALPHA, GL_REPLACE);
        glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE0_ALPHA, ArgSource(ts[TSS_ALPHAARG2]));
        break;
    case TOP_DISABLE:
        glTexEnvi(GL_TEXTURE_ENV, GL_COMBINE_ALPHA, GL_REPLACE);
        glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE0_ALPHA, GL_PRIMARY_COLOR);
        break;
    default:
        glTexEnvi(GL_TEXTURE_ENV, GL_COMBINE_ALPHA, GL_REPLACE);
        glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE0_ALPHA, ArgSource(ts[TSS_ALPHAARG1]));
        break;
    }
    glTexEnvi(GL_TEXTURE_ENV, GL_OPERAND0_ALPHA, GL_SRC_ALPHA);
    glTexEnvi(GL_TEXTURE_ENV, GL_OPERAND1_ALPHA, GL_SRC_ALPHA);
}

void ApplyTransformAndLighting()
{
    Mat4 proj, fix;
    Identity(fix);
    fix.m[10] = 2.0f;   // z' = 2z - w
    fix.m[14] = -1.0f;
    Mul(proj, S.proj, fix);
    glMatrixMode(GL_PROJECTION);
    glLoadMatrixf(proj.m);
    glMatrixMode(GL_MODELVIEW);

    if (S.rs[RS_LIGHTING]) {
        glEnable(GL_LIGHTING);
        glLoadMatrixf(S.view.m);
        for (int i = 0; i < 8; i++) {
            GLenum L = GL_LIGHT0 + i;
            if (!S.lightOn[i]) {
                glDisable(L);
                continue;
            }
            const Light7 &l = S.lights[i];
            glEnable(L);
            SetColor4(GL_DIFFUSE, l.diffuse, L);
            SetColor4(GL_AMBIENT, l.ambient, L);
            Color4 black = {0, 0, 0, 1};
            SetColor4(GL_SPECULAR, black, L);
            if (l.type == 3) {
                GLfloat dir[4] = {-l.direction.x, -l.direction.y, -l.direction.z, 0.0f};
                glLightfv(L, GL_POSITION, dir);
                glLightf(L, GL_CONSTANT_ATTENUATION, 1.0f);
                glLightf(L, GL_LINEAR_ATTENUATION, 0.0f);
                glLightf(L, GL_QUADRATIC_ATTENUATION, 0.0f);
            } else {
                GLfloat pos[4] = {l.position.x, l.position.y, l.position.z, 1.0f};
                glLightfv(L, GL_POSITION, pos);
                glLightf(L, GL_CONSTANT_ATTENUATION, l.att0);
                glLightf(L, GL_LINEAR_ATTENUATION, l.att1);
                glLightf(L, GL_QUADRATIC_ATTENUATION, l.att2);
            }
        }
        u32 a = S.rs[RS_AMBIENT];
        GLfloat amb[4] = {((a >> 16) & 0xff) / 255.0f, ((a >> 8) & 0xff) / 255.0f, (a & 0xff) / 255.0f, 1.0f};
        glLightModelfv(GL_LIGHT_MODEL_AMBIENT, amb);
        const Material7 &m = S.material;
        SetColor4(GL_DIFFUSE, m.diffuse);
        SetColor4(GL_AMBIENT, m.ambient);
        SetColor4(GL_EMISSION, m.emissive);
        Color4 black = {0, 0, 0, 1};
        SetColor4(GL_SPECULAR, black);
    } else {
        glDisable(GL_LIGHTING);
        glColor4f(1, 1, 1, 1);
    }

    Mat4 mv;
    Mul(mv, S.world, S.view);
    glLoadMatrixf(mv.m);
}

void ApplyScreenSpace()
{
    glDisable(GL_LIGHTING);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-0.5, 640.0 - 0.5, 480.0 - 0.5, -0.5, 0.0, -1.0);  // sz in [0,1] -> GL depth [-1,1]
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

GLenum PrimToGL(PrimitiveType p)
{
    switch (p) {
    case PT_TRIANGLESTRIP: return GL_TRIANGLE_STRIP;
    case PT_TRIANGLEFAN: return GL_TRIANGLE_FAN;
    default: return GL_TRIANGLES;
    }
}

std::vector<u8> g_colorScratch;

void BindTLVerts(const TLVertex *v, u32 n)
{
    g_colorScratch.resize(n * 4);
    for (u32 i = 0; i < n; i++) {
        u32 c = v[i].color;
        g_colorScratch[i * 4 + 0] = (u8)(c >> 16);
        g_colorScratch[i * 4 + 1] = (u8)(c >> 8);
        g_colorScratch[i * 4 + 2] = (u8)c;
        g_colorScratch[i * 4 + 3] = (u8)(c >> 24);
    }
    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_COLOR_ARRAY);
    glEnableClientState(GL_TEXTURE_COORD_ARRAY);
    glDisableClientState(GL_NORMAL_ARRAY);
    glVertexPointer(3, GL_FLOAT, sizeof(TLVertex), &v->sx);
    glColorPointer(4, GL_UNSIGNED_BYTE, 0, g_colorScratch.data());
    glTexCoordPointer(2, GL_FLOAT, sizeof(TLVertex), &v->tu);
}

void BindVerts(const Vertex *v)
{
    glEnableClientState(GL_VERTEX_ARRAY);
    glEnableClientState(GL_NORMAL_ARRAY);
    glEnableClientState(GL_TEXTURE_COORD_ARRAY);
    glDisableClientState(GL_COLOR_ARRAY);
    glVertexPointer(3, GL_FLOAT, sizeof(Vertex), &v->pos);
    glNormalPointer(GL_FLOAT, sizeof(Vertex), &v->normal);
    glTexCoordPointer(2, GL_FLOAT, sizeof(Vertex), &v->tu);
}

}  // namespace

Device *GetDevice() { return &g_device; }

bool Device::Init()
{
    S = State();
    Identity(S.world);
    Identity(S.view);
    Identity(S.proj);
    // D3D7 defaults
    S.rs[RS_ZENABLE] = 1;
    S.rs[RS_ZWRITEENABLE] = 1;
    S.rs[RS_SRCBLEND] = BLEND_ONE;
    S.rs[RS_DESTBLEND] = BLEND_ZERO;
    S.rs[RS_CULLMODE] = CULL_CCW;
    S.rs[RS_LIGHTING] = 1;
    S.tss[0][TSS_COLOROP] = TOP_MODULATE;
    S.tss[0][TSS_COLORARG1] = TA_TEXTURE;
    S.tss[0][TSS_COLORARG2] = TA_CURRENT;
    S.tss[0][TSS_ALPHAOP] = TOP_SELECTARG1;
    S.tss[0][TSS_ALPHAARG1] = TA_TEXTURE;
    S.tss[0][TSS_ALPHAARG2] = TA_CURRENT;
    S.tss[0][TSS_MAGFILTER] = TFG_POINT;
    S.tss[0][TSS_MINFILTER] = TFG_POINT;
    S.tss[1][TSS_COLOROP] = TOP_DISABLE;
    S.tss[1][TSS_ALPHAOP] = TOP_DISABLE;

    u32 white = 0xffffffff;
    S.white = CreateTexture(1, 1, &white);

    glDepthFunc(GL_LEQUAL);
    glShadeModel(GL_SMOOTH);
    glDisable(GL_NORMALIZE);
    glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_FALSE);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    return true;
}

void Device::Shutdown()
{
    if (S.white) DestroyTexture(S.white);
    S.white = nullptr;
}

void Device::SetOutputRect(int x, int y, int w, int h, int windowW, int windowH)
{
    S.outX = x;
    S.outY = y;
    S.outW = w;
    S.outH = h;
    S.winW = windowW;
    S.winH = windowH;
}

bool Device::BeginScene()
{
    // Black bars outside the scaled 640x480 area.
    glDisable(GL_SCISSOR_TEST);
    glViewport(0, 0, S.winW, S.winH);
    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);
    glViewport(S.outX, S.winH - S.outY - S.outH, S.outW, S.outH);
    glScissor(S.outX, S.winH - S.outY - S.outH, S.outW, S.outH);
    glEnable(GL_SCISSOR_TEST);
    return true;
}

void Device::EndScene() {}

void Device::Clear(u32 flags, u32 argb, float z)
{
    GLbitfield bits = 0;
    if (flags & CLEAR_TARGET) {
        glClearColor(((argb >> 16) & 0xff) / 255.0f, ((argb >> 8) & 0xff) / 255.0f, (argb & 0xff) / 255.0f,
                     ((argb >> 24) & 0xff) / 255.0f);
        bits |= GL_COLOR_BUFFER_BIT;
    }
    if (flags & CLEAR_ZBUFFER) {
        glClearDepth(z);
        bits |= GL_DEPTH_BUFFER_BIT;
    }
    glDepthMask(GL_TRUE);
    glClear(bits);
}

void Device::SetViewport(const Viewport &vp)
{
    // The original only used the full 640x480 viewport. The mod's split screen uses sub-rectangles
    // (logical 640x480 coordinates); pre-transformed vertices still span 0..640 x 0..480 and are
    // squeezed into the viewport, like a 640x480 frame per view.
    glDepthRange(vp.minZ, vp.maxZ);
    if (S.outW <= 0 || S.outH <= 0) return;
    float sx = (float)S.outW / 640.0f, sy = (float)S.outH / 480.0f;
    int x0 = S.outX + (int)(vp.x * sx + 0.5f), x1 = S.outX + (int)((vp.x + vp.w) * sx + 0.5f);
    int y0 = S.outY + (int)(vp.y * sy + 0.5f), y1 = S.outY + (int)((vp.y + vp.h) * sy + 0.5f);
    glViewport(x0, S.winH - y1, x1 - x0, y1 - y0);
    glScissor(x0, S.winH - y1, x1 - x0, y1 - y0);
}

void Device::SetTransform(TransformType t, const Mat4 &m)
{
    if (t == TS_WORLD) S.world = m;
    else if (t == TS_VIEW) S.view = m;
    else if (t == TS_PROJECTION) S.proj = m;
}

void Device::GetTransform(TransformType t, Mat4 &m) const
{
    if (t == TS_WORLD) m = S.world;
    else if (t == TS_VIEW) m = S.view;
    else m = S.proj;
}

void Device::SetMaterial(const Material7 &m) { S.material = m; }
void Device::SetLight(u32 index, const Light7 &l) { if (index < 8) S.lights[index] = l; }
void Device::LightEnable(u32 index, bool enable) { if (index < 8) S.lightOn[index] = enable; }
void Device::SetRenderState(RenderState s, u32 value) { S.rs[s & 0xff] = value; }
void Device::SetTextureStageState(u32 stage, TextureStageState t, u32 value) { if (stage < 2) S.tss[stage][t & 31] = value; }
void Device::SetTexture(u32 stage, Texture *tex) { if (stage < 2) S.tex[stage] = tex; }

void Device::DrawPrimitive(PrimitiveType prim, u32 fvf, const void *verts, u32 numVerts)
{
    ApplyCommonState();
    if (fvf == FVF_TLVERTEX) {
        ApplyScreenSpace();
        BindTLVerts((const TLVertex *)verts, numVerts);
    } else {
        ApplyTransformAndLighting();
        BindVerts((const Vertex *)verts);
    }
    glDrawArrays(PrimToGL(prim), 0, numVerts);
}

void Device::DrawIndexedPrimitive(PrimitiveType prim, u32 fvf, const void *verts, u32 numVerts,
                                  const u16 *indices, u32 numIndices)
{
    (void)numVerts;
    ApplyCommonState();
    if (fvf == FVF_TLVERTEX) {
        ApplyScreenSpace();
        BindTLVerts((const TLVertex *)verts, numVerts);
    } else {
        ApplyTransformAndLighting();
        BindVerts((const Vertex *)verts);
    }
    glDrawElements(PrimToGL(prim), numIndices, GL_UNSIGNED_SHORT, indices);
}

float Device::OutputScale() const { return S.outH > 0 ? (float)S.outH / 480.0f : 1.0f; }

void Device::DrawOverlay(Texture *tex, float x, float y, float w, float h, float u1, float v1, u32 argb)
{
    glDisable(GL_LIGHTING);
    glDisable(GL_DEPTH_TEST);
    glDisable(GL_CULL_FACE);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, tex->id);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 640.0, 480.0, 0.0, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glDisableClientState(GL_VERTEX_ARRAY);
    glDisableClientState(GL_NORMAL_ARRAY);
    glDisableClientState(GL_COLOR_ARRAY);
    glDisableClientState(GL_TEXTURE_COORD_ARRAY);
    glColor4ub((u8)(argb >> 16), (u8)(argb >> 8), (u8)argb, (u8)(argb >> 24));
    glBegin(GL_TRIANGLE_STRIP);
    glTexCoord2f(0, 0); glVertex2f(x, y);
    glTexCoord2f(u1, 0); glVertex2f(x + w, y);
    glTexCoord2f(0, v1); glVertex2f(x, y + h);
    glTexCoord2f(u1, v1); glVertex2f(x + w, y + h);
    glEnd();
}

Texture *Device::CreateTexture(int w, int h, const u32 *argb)
{
    std::vector<u8> rgba((size_t)w * h * 4);
    for (int i = 0; i < w * h; i++) {
        u32 c = argb[i];
        rgba[i * 4 + 0] = (u8)(c >> 16);
        rgba[i * 4 + 1] = (u8)(c >> 8);
        rgba[i * 4 + 2] = (u8)c;
        rgba[i * 4 + 3] = (u8)(c >> 24);
    }
    Texture *t = new Texture;
    t->w = w;
    t->h = h;
    glGenTextures(1, &t->id);
    glBindTexture(GL_TEXTURE_2D, t->id);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, rgba.data());
    return t;
}

void Device::DestroyTexture(Texture *tex)
{
    if (!tex) return;
    glDeleteTextures(1, &tex->id);
    delete tex;
}

}  // namespace gfx
