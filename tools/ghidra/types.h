/* Recovered data layouts of basket_v101.exe (MSVC6, 32-bit).
 * Parsed by ApplyAndDump.java into the Ghidra program before decompiling.
 * Offsets in comments are byte offsets inside the original structs. */

typedef unsigned char  u8;
typedef unsigned short u16;
typedef unsigned int   u32;
typedef unsigned char  bool8;

typedef struct Vec3 { float x, y, z; } Vec3;
typedef struct Color4 { float r, g, b, a; } Color4;
typedef struct Mat4 { float m[16]; } Mat4;                 /* D3DMATRIX, row-vector convention */

typedef struct Material7 {                                  /* D3DMATERIAL7, 0x44 */
    Color4 diffuse, ambient, specular, emissive;
    float power;
} Material7;

typedef struct Light7 {                                     /* D3DLIGHT7, 0x68 */
    int type;
    Color4 diffuse, specular, ambient;
    Vec3 position, direction;
    float range, falloff, att0, att1, att2, theta, phi;
} Light7;

/* COM interfaces, in DirectX 7 vtable order (only what the game touches needs real arg types). */
typedef struct IDirectDrawSurface7 IDirectDrawSurface7;
typedef struct IDirectDrawSurface7Vtbl {
    int (*QueryInterface)(IDirectDrawSurface7 *, void *, void **);
    u32 (*AddRef)(IDirectDrawSurface7 *);
    u32 (*Release)(IDirectDrawSurface7 *);
    int (*AddAttachedSurface)(IDirectDrawSurface7 *, void *);
    int (*AddOverlayDirtyRect)(IDirectDrawSurface7 *, void *);
    int (*Blt)(IDirectDrawSurface7 *, void *dstRect, IDirectDrawSurface7 *src, void *srcRect, u32 flags, void *fx);
    int (*BltBatch)(IDirectDrawSurface7 *, void *, u32, u32);
    int (*BltFast)(IDirectDrawSurface7 *, u32 x, u32 y, IDirectDrawSurface7 *src, void *srcRect, u32 flags);
    int (*DeleteAttachedSurface)(IDirectDrawSurface7 *, u32, void *);
    int (*EnumAttachedSurfaces)(IDirectDrawSurface7 *, void *, void *);
    int (*EnumOverlayZOrders)(IDirectDrawSurface7 *, u32, void *, void *);
    int (*Flip)(IDirectDrawSurface7 *, IDirectDrawSurface7 *, u32 flags);
    int (*GetAttachedSurface)(IDirectDrawSurface7 *, void *caps, IDirectDrawSurface7 **out);
    int (*GetBltStatus)(IDirectDrawSurface7 *, u32);
    int (*GetCaps)(IDirectDrawSurface7 *, void *);
    int (*GetClipper)(IDirectDrawSurface7 *, void **);
    int (*GetColorKey)(IDirectDrawSurface7 *, u32, void *);
    int (*GetDC)(IDirectDrawSurface7 *, void **hdc);
    int (*GetFlipStatus)(IDirectDrawSurface7 *, u32);
    int (*GetOverlayPosition)(IDirectDrawSurface7 *, int *, int *);
    int (*GetPalette)(IDirectDrawSurface7 *, void **);
    int (*GetPixelFormat)(IDirectDrawSurface7 *, void *);
    int (*GetSurfaceDesc)(IDirectDrawSurface7 *, void *);
    int (*Initialize)(IDirectDrawSurface7 *, void *, void *);
    int (*IsLost)(IDirectDrawSurface7 *);
    int (*Lock)(IDirectDrawSurface7 *, void *, void *, u32, void *);
    int (*ReleaseDC)(IDirectDrawSurface7 *, void *hdc);
    int (*Restore)(IDirectDrawSurface7 *);
    int (*SetClipper)(IDirectDrawSurface7 *, void *);
    int (*SetColorKey)(IDirectDrawSurface7 *, u32, void *);
} IDirectDrawSurface7Vtbl;
struct IDirectDrawSurface7 { IDirectDrawSurface7Vtbl *lpVtbl; };

typedef struct IDirect3DDevice7 IDirect3DDevice7;
typedef struct IDirect3DDevice7Vtbl {
    int (*QueryInterface)(IDirect3DDevice7 *, void *, void **);
    u32 (*AddRef)(IDirect3DDevice7 *);
    u32 (*Release)(IDirect3DDevice7 *);
    int (*GetCaps)(IDirect3DDevice7 *, void *);
    int (*EnumTextureFormats)(IDirect3DDevice7 *, void *, void *);
    int (*BeginScene)(IDirect3DDevice7 *);
    int (*EndScene)(IDirect3DDevice7 *);
    int (*GetDirect3D)(IDirect3DDevice7 *, void **);
    int (*SetRenderTarget)(IDirect3DDevice7 *, void *, u32);
    int (*GetRenderTarget)(IDirect3DDevice7 *, void **);
    int (*Clear)(IDirect3DDevice7 *, u32 count, void *rects, u32 flags, u32 color, float z, u32 stencil);
    int (*SetTransform)(IDirect3DDevice7 *, int type, Mat4 *m);
    int (*GetTransform)(IDirect3DDevice7 *, int type, Mat4 *m);
    int (*SetViewport)(IDirect3DDevice7 *, void *vp);
    int (*MultiplyTransform)(IDirect3DDevice7 *, int type, Mat4 *m);
    int (*GetViewport)(IDirect3DDevice7 *, void *vp);
    int (*SetMaterial)(IDirect3DDevice7 *, Material7 *m);
    int (*GetMaterial)(IDirect3DDevice7 *, Material7 *m);
    int (*SetLight)(IDirect3DDevice7 *, u32 index, Light7 *l);
    int (*GetLight)(IDirect3DDevice7 *, u32 index, Light7 *l);
    int (*SetRenderState)(IDirect3DDevice7 *, int state, u32 value);
    int (*GetRenderState)(IDirect3DDevice7 *, int state, u32 *value);
    int (*BeginStateBlock)(IDirect3DDevice7 *);
    int (*EndStateBlock)(IDirect3DDevice7 *, u32 *);
    int (*PreLoad)(IDirect3DDevice7 *, void *);
    int (*DrawPrimitive)(IDirect3DDevice7 *, int primType, u32 fvf, void *verts, u32 numVerts, u32 flags);
    int (*DrawIndexedPrimitive)(IDirect3DDevice7 *, int primType, u32 fvf, void *verts, u32 numVerts, u16 *indices, u32 numIndices, u32 flags);
    int (*SetClipStatus)(IDirect3DDevice7 *, void *);
    int (*GetClipStatus)(IDirect3DDevice7 *, void *);
    int (*DrawPrimitiveStrided)(IDirect3DDevice7 *, int, u32, void *, u32, u32);
    int (*DrawIndexedPrimitiveStrided)(IDirect3DDevice7 *, int, u32, void *, u32, u16 *, u32, u32);
    int (*DrawPrimitiveVB)(IDirect3DDevice7 *, int, void *, u32, u32, u32);
    int (*DrawIndexedPrimitiveVB)(IDirect3DDevice7 *, int, void *, u32, u32, u16 *, u32, u32);
    int (*ComputeSphereVisibility)(IDirect3DDevice7 *, void *, float *, u32, u32, u32 *);
    int (*GetTexture)(IDirect3DDevice7 *, u32 stage, void **tex);
    int (*SetTexture)(IDirect3DDevice7 *, u32 stage, void *tex);
    int (*GetTextureStageState)(IDirect3DDevice7 *, u32 stage, int type, u32 *value);
    int (*SetTextureStageState)(IDirect3DDevice7 *, u32 stage, int type, u32 value);
    int (*ValidateDevice)(IDirect3DDevice7 *, u32 *);
    int (*ApplyStateBlock)(IDirect3DDevice7 *, u32);
    int (*CaptureStateBlock)(IDirect3DDevice7 *, u32);
    int (*DeleteStateBlock)(IDirect3DDevice7 *, u32);
    int (*CreateStateBlock)(IDirect3DDevice7 *, int, u32 *);
    int (*Load)(IDirect3DDevice7 *, void *, void *, void *, void *, u32);
    int (*LightEnable)(IDirect3DDevice7 *, u32 index, int enable);
    int (*GetLightEnable)(IDirect3DDevice7 *, u32 index, int *enable);
    int (*SetClipPlane)(IDirect3DDevice7 *, u32, float *);
    int (*GetClipPlane)(IDirect3DDevice7 *, u32, float *);
    int (*GetInfo)(IDirect3DDevice7 *, u32, void *, u32);
} IDirect3DDevice7Vtbl;
struct IDirect3DDevice7 { IDirect3DDevice7Vtbl *lpVtbl; };

typedef struct Vertex { Vec3 pos; Vec3 normal; float tu, tv; } Vertex;   /* D3DFVF_VERTEX, 0x20 */
typedef struct TLVertex { float sx, sy, sz, rhw; u32 color, specular; float tu, tv; } TLVertex; /* D3DFVF_TLVERTEX */
typedef struct LVertex { Vec3 pos; u32 color, specular; float tu, tv; } LVertex;               /* D3DFVF_LVERTEX-ish */
typedef struct SkinVertex { Vec3 pos; Vec3 normal; int bone; } SkinVertex; /* 0x1c */

typedef struct Bone {                                       /* 0xa8 */
    int parent;
    Mat4 mat;        /* 0x04 position transform (world) */
    Mat4 nrmMat;     /* 0x44 normal transform */
    Vec3 pivot;      /* 0x84 */
    Vec3 trans;      /* 0x90 */
    Vec3 rot;        /* 0x9c */
} Bone;

typedef struct XMaterial {                                  /* 0x148 */
    Material7 mtl;
    char texName[256];
    int numIndices;
} XMaterial;

typedef struct XFace { int n; int idx[4]; } XFace;          /* 0x14 */
typedef struct CTexVert { int vtx; float tv, tu; } CTexVert;    /* original tv, tu of the vertex */
typedef struct CTexGroup { int count; float step; CTexVert *verts; } CTexGroup;

typedef struct SkinModel {                                  /* 0x34 */
    void *vtbl;
    XFace *faces;
    u32 numVerts;
    u32 numIndices;
    u16 *indices;
    u32 numMaterials;
    XMaterial *materials;
    SkinVertex *srcVerts;
    Bone *bones;
    Vertex *verts;
    CTexGroup *ctex;
    int numBones;
    int numCTex;
} SkinModel;

typedef struct StaticMesh {                                 /* 0x24 */
    void *vtbl;
    u32 numVerts;
    Vertex *verts;
    u32 numIndices;
    u16 *indices;
    u32 numMaterials;
    XMaterial *materials;
    XFace *faces;
    Vertex *srcVerts;
} StaticMesh;

typedef struct BonePose { Vec3 trans; Vec3 rot; } BonePose; /* 0x18 */
typedef struct MotionKey { float duration; float speed; BonePose *pose; } MotionKey; /* 0xc */

typedef struct Sound {                                      /* 0x4c */
    void *vtbl;
    bool8 mp3Playing;
    u8 pad5[3];
    void *hwnd;
    void *dsound;
    void *buffers[15];
} Sound;

typedef struct TexContainer {                               /* D3DTextr TextureContainer, 0x78 */
    struct TexContainer *next;
    char name[80];
    u32 width, height, stage, bpp, flags;
    u32 hasAlpha;
    void *surface;     /* 0x6c */
    void *hbitmap;     /* 0x70 */
    u32 *rgbaData;     /* 0x74 */
} TexContainer;

typedef struct Player {                                     /* 0x19c */
    void *vtbl;
    SkinModel *model;
    Material7 mtl;          /* 0x008 */
    MotionKey *keys;        /* 0x04c, 10 entries, terminated by duration == 0 */
    char texName[256];      /* 0x050 */
    int charId;             /* 0x150 0=k1 1=mion 2=rena 3=satoko 4=rika 5=sion */
    bool8 b154;
    u8 pad155[3];
    Vec3 pos;               /* 0x158 */
    float yaw;              /* 0x164 */
    float stat168;
    float stat16c;
    float stat170;
    float stat174;
    float stat178;
    float stat17c;
    float stat180;
    bool8 keyChanged;       /* 0x184 */
    u8 pad185[3];
    int curKey;             /* 0x188 */
    float f18c;
    int i190;
    float animTime;         /* 0x194 */
    float f198;
} Player;

typedef struct Game {                                       /* 0x420 */
    void *vtbl;
    u32 pad04;
    long long curTime;      /* 0x008 */
    long long perfFreq;     /* 0x010 */
    bool8 usePerfCounter;   /* 0x018 */
    u8 pad19[7];
    long long lastTime;     /* 0x020 */
    float secsPerTick;      /* 0x028 */
    bool8 windowed;         /* 0x02c */
    u8 pad2d[3];
    void *hwnd;             /* 0x030 */
    void *ddraw;
    void *d3d;
    IDirect3DDevice7 *device;  /* 0x03c */
    IDirectDrawSurface7 *primary;
    IDirectDrawSurface7 *backbuf;
    void *clipper;
    IDirectDrawSurface7 *zbuffer;
    char devType;           /* 0x050 */
    u8 pad51[3];
    float dt;               /* 0x054 */
    int keyUp, keyDown, keyLeft, keyRight, keySpace, keyX, keyZ, keyC;
    int keyNum2, keyNum4, keyNum6, keyNum8, keyEnter, mouseL, mouseR;
    u8 zbufFormat[32];      /* 0x094 */
    int mouseX, mouseY;     /* 0x0b4 */
    bool8 quit;             /* 0x0bc */
    u8 padbd[3];
    Sound *sound;           /* 0x0c0 */
    StaticMesh *meshCourt, *meshBuild, *meshGoal, *meshBall, *meshCone;
    Player *players[6];     /* 0x0d8 */
    Material7 mtl;          /* 0x0f0 */
    Light7 light;           /* 0x134 */
    Mat4 matView;           /* 0x19c */
    Mat4 matShadow;         /* 0x1dc */
    Vec3 camPos;            /* 0x21c */
    Vec3 camDir;            /* 0x228 */
    Vec3 lightDir;          /* 0x234 */
    Vec3 v240;
    Vec3 v24c;
    float f258, f25c, f260, f264;
    int i268;
    int state;              /* 0x26c */
    char text[256];         /* 0x270 */
    Vec3 v370;
    Vec3 v37c;
    float f388, f38c, f390, f394;
    bool8 b398, b399;
    u8 b39a;
    u8 pad39b;
    int i39c;
    float f3a0;
    bool8 b3a4, b3a5;
    u8 b3a6;
    bool8 b3a7, b3a8;
    u8 pad3a9[3];
    int i3ac, i3b0, i3b4, i3b8;
    float f3bc;
    int team[6];            /* 0x3c0: [0..2] YOU, [3..5] COM */
    int i3d8, i3dc;
    float f3e0;
    int slot[6];            /* 0x3e4 */
    int i3fc;
    float f400;
    int i404, i408, i40c;
    float f410;
    bool8 b414;
    u8 pad415[3];
    int i418;
    float f41c;
} Game;
