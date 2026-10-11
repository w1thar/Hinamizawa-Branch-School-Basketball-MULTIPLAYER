// Mesh classes: StaticMesh (court, building, goal, ball, cone) and SkinModel (characters).
// Both load the author's subset of the text DirectX .x format; SkinModel adds the custom .osm
// skeleton ("One Skin Model") with one bone per vertex and texture-swap groups for faces.
#pragma once

#include "core/types.h"
#include "render/gfx.h"

struct XMaterial {
    Material7 mtl;
    char texName[256];
    int numIndices;
};

struct XFace {
    int n;          // 3 or 4
    int idx[4];
};

struct SkinVertex {
    Vec3 pos;
    Vec3 normal;
    int bone;
};

struct Bone {
    int parent;
    Mat4 mat;       // final (world) position transform
    Mat4 nrmMat;    // final normal transform (rotation only)
    Vec3 pivot;     // rest position of the joint
    Vec3 trans;     // animated translation
    Vec3 rot;       // animated rotation (x, y, z), applied Z then X then Y
};

// .osm "CTex" group: vertices whose v coordinate is shifted by `step * face` to swap expressions.
struct CTexVert {
    int vtx;
    float tv;       // original tv of the vertex
    float tu;       // original tu of the vertex
};

struct CTexGroup {
    int count;
    float step;
    CTexVert *verts;
};

class StaticMesh {
public:
    StaticMesh();
    virtual ~StaticMesh();

    bool Load(const char *file);
    void Scale(float s);
    bool Render(gfx::Device *dev);
    bool RenderMaterials(gfx::Device *dev);   // unused by the game
    bool SetMaterial(gfx::Device *dev);       // unused by the game

    u32 numVerts;
    Vertex *verts;
    u32 numIndices;
    u16 *indices;
    u32 numMaterials;
    XMaterial *materials;
    XFace *faces;
    Vertex *srcVerts;   // allocated by the original loader but never used
};

class SkinModel {
public:
    SkinModel();
    virtual ~SkinModel();

    bool Load(const char *name);
    void Scale(float s);
    void Skin();
    void Render(gfx::Device *dev);
    void RenderMaterials(gfx::Device *dev);   // unused by the game

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
};
