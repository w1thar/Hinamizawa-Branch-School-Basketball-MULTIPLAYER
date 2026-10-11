// A small fixed-function renderer with the IDirect3DDevice7 semantics the game relies on.
// State/enum values are the D3D7 ones so translated game code stays recognisable.
// Backend: gfx_gl.cpp (OpenGL 1.1 + texture_env_combine).
#pragma once

#include "core/types.h"

namespace gfx {

enum TransformType { TS_WORLD = 1, TS_VIEW = 2, TS_PROJECTION = 3 };

enum RenderState {
    RS_ZENABLE = 7,
    RS_ZWRITEENABLE = 14,
    RS_SRCBLEND = 19,
    RS_DESTBLEND = 20,
    RS_CULLMODE = 22,
    RS_ALPHABLENDENABLE = 27,
    RS_LIGHTING = 137,
    RS_AMBIENT = 139,
};

enum Blend {
    BLEND_ZERO = 1,
    BLEND_ONE = 2,
    BLEND_SRCCOLOR = 3,
    BLEND_INVSRCCOLOR = 4,
    BLEND_SRCALPHA = 5,
    BLEND_INVSRCALPHA = 6,
    BLEND_DESTALPHA = 7,
    BLEND_INVDESTALPHA = 8,
    BLEND_DESTCOLOR = 9,
    BLEND_INVDESTCOLOR = 10,
};

enum Cull { CULL_NONE = 1, CULL_CW = 2, CULL_CCW = 3 };

enum TextureStageState {
    TSS_COLOROP = 1,
    TSS_COLORARG1 = 2,
    TSS_COLORARG2 = 3,
    TSS_ALPHAOP = 4,
    TSS_ALPHAARG1 = 5,
    TSS_ALPHAARG2 = 6,
    TSS_MAGFILTER = 16,
    TSS_MINFILTER = 17,
};

enum TextureOp { TOP_DISABLE = 1, TOP_SELECTARG1 = 2, TOP_SELECTARG2 = 3, TOP_MODULATE = 4 };
enum TextureArg { TA_DIFFUSE = 0, TA_CURRENT = 1, TA_TEXTURE = 2 };
enum TextureFilter { TFG_POINT = 1, TFG_LINEAR = 2 };

enum PrimitiveType { PT_TRIANGLELIST = 4, PT_TRIANGLESTRIP = 5, PT_TRIANGLEFAN = 6 };

enum Fvf { FVF_VERTEX = 0x112, FVF_TLVERTEX = 0x1c4 };

enum ClearFlags { CLEAR_TARGET = 1, CLEAR_ZBUFFER = 2 };

struct Viewport { u32 x, y, w, h; float minZ, maxZ; };

struct Texture;

class Device {
public:
    bool Init();
    void Shutdown();

    bool BeginScene();
    void EndScene();
    void Clear(u32 flags, u32 argb, float z);
    void SetViewport(const Viewport &vp);
    void SetTransform(TransformType t, const Mat4 &m);
    void GetTransform(TransformType t, Mat4 &m) const;
    void SetMaterial(const Material7 &m);
    void SetLight(u32 index, const Light7 &l);
    void LightEnable(u32 index, bool enable);
    void SetRenderState(RenderState s, u32 value);
    void SetTextureStageState(u32 stage, TextureStageState t, u32 value);
    void SetTexture(u32 stage, Texture *tex);
    void DrawPrimitive(PrimitiveType prim, u32 fvf, const void *verts, u32 numVerts);
    void DrawIndexedPrimitive(PrimitiveType prim, u32 fvf, const void *verts, u32 numVerts,
                              const u16 *indices, u32 numIndices);

    Texture *CreateTexture(int w, int h, const u32 *argb);  // 0xAARRGGBB pixels, top row first
    void DestroyTexture(Texture *tex);

    // Window-space rectangle that the 640x480 frame is scaled into (set by the platform).
    void SetOutputRect(int x, int y, int w, int h, int windowW, int windowH);
    float OutputScale() const;   // output pixels per logical pixel

    // Draws `tex` (alpha = coverage) tinted with `argb` at logical coords, bypassing the emulated
    // D3D state (used for text, which the original drew with GDI after EndScene).
    void DrawOverlay(Texture *tex, float x, float y, float w, float h, float u1, float v1, u32 argb);
};

Device *GetDevice();

}  // namespace gfx
