// StaticMesh (0x40c520..0x40dc9b) and SkinModel (0x408f80..0x40b812).
// The loaders replay the original's exact fgets/fscanf sequence, so they accept precisely what the
// original accepted (including its line-skipping assumptions about the exporter's layout).
#include "game/models.h"

#include <cstdio>
#include <cstring>

#include "core/d3dmath.h"
#include "core/memfile.h"
#include "engine/textures.h"

namespace {

const int MAX_FACES = 2000;   // the original kept per-face material ids in a stack array

// Groups face indices by material in material order (triangles as-is, quads split as 0-1-2 / 0-2-3),
// using the original's in-place insertion; each material's numIndices ends up as its index count.
void BuildIndices(const XFace *faces, const u32 *faceMat, u32 numFaces, u16 *indices, u32 numIndices,
                  XMaterial *materials)
{
    for (u32 i = 0; i < numFaces; i++) {
        u32 at = 0;
        for (u32 m = 0; m <= faceMat[i]; m++) at += materials[m].numIndices;
        int count = faces[i].n == 3 ? 3 : 6;
        for (u32 k = numIndices - count; k > at; k--) indices[k + count - 1] = indices[k - 1];
        indices[at] = (u16)faces[i].idx[0];
        indices[at + 1] = (u16)faces[i].idx[1];
        indices[at + 2] = (u16)faces[i].idx[2];
        if (count == 6) {
            indices[at + 3] = (u16)faces[i].idx[0];
            indices[at + 4] = (u16)faces[i].idx[2];
            indices[at + 5] = (u16)faces[i].idx[3];
        }
        materials[faceMat[i]].numIndices += count;
    }
}

// Reads `numMaterials` "Material { ... TextureFilename { "x"; } }" blocks.
void ReadMaterials(MemFile *fp, char *line, XMaterial *materials, u32 numMaterials)
{
    for (u32 i = 0; i < numMaterials; i++) {
        Material7 &m = materials[i].mtl;
        mem_fscanf(fp, "   %f;%f;%f;%f;;", &m.diffuse.r, &m.diffuse.g, &m.diffuse.b, &m.diffuse.a);
        m.ambient = m.diffuse;
        mem_fscanf(fp, "   %f;", &m.power);
        mem_fscanf(fp, "   %f;%f;%f;;", &m.specular.r, &m.specular.g, &m.specular.b);
        mem_fscanf(fp, "   %f;%f;%f;;", &m.emissive.r, &m.emissive.g, &m.emissive.b);
        mem_fgets(line, 0x100, fp);
        mem_fscanf(fp, "%s", line);
        mem_fgets(line, 0x100, fp);
        mem_fscanf(fp, "    %*c%[^\"]", line);
        snprintf(materials[i].texName, sizeof(materials[i].texName), "%s", line);
        mem_fgets(line, 0x100, fp);
        mem_fgets(line, 0x100, fp);
        mem_fgets(line, 0x100, fp);
        mem_fgets(line, 0x100, fp);
    }
}

// Per-vertex normals: sum of adjacent face normals, then summed across vertices sharing a position
// (order-dependent, exactly as the original), then normalised.
template <typename SamePos>
void ComputeNormals(const Vec3 *pos, size_t posStride, u32 numVerts, const u16 *indices, u32 numIndices,
                    Vec3 *normals, SamePos same)
{
    auto P = [&](u32 i) -> const Vec3 & { return *(const Vec3 *)((const u8 *)pos + posStride * i); };
    for (u32 i = 0; i < numIndices; i += 3) {
        u16 a = indices[i], b = indices[i + 1], c = indices[i + 2];
        Vec3 n = Normalize(CrossProduct(P(b) - P(a), P(c) - P(b)));
        normals[a] += n;
        normals[b] += n;
        normals[c] += n;
    }
    for (u32 i = 0; i < numVerts; i++)
        for (u32 j = 0; j < numVerts; j++)
            if (same(P(i), P(j))) {
                normals[i] = normals[i] + normals[j];
                normals[j] = normals[i];
            }
    for (u32 i = 0; i < numVerts; i++) normals[i] = Normalize(normals[i]);
}

void DrawMaterials(gfx::Device *dev, XMaterial *materials, u32 numMaterials, const Vertex *verts, u32 numVerts,
                   const u16 *indices, u32 blendDest)
{
    const u16 *idx = indices;
    for (u32 i = 0; i < numMaterials; i++) {
        XMaterial &m = materials[i];
        if (m.numIndices == 0) continue;
        dev->SetTexture(0, D3DTextr_GetSurface(m.texName));
        const char *ext = strchr(m.texName, '.');
        if (ext && strchr(ext, 't')) {
            dev->SetTextureStageState(0, gfx::TSS_ALPHAARG1, gfx::TA_TEXTURE);
            dev->SetRenderState(gfx::RS_ALPHABLENDENABLE, 1);
            dev->SetRenderState(gfx::RS_SRCBLEND, gfx::BLEND_SRCALPHA);
            dev->SetRenderState(gfx::RS_DESTBLEND, gfx::BLEND_INVSRCALPHA);
        }
        if (m.mtl.diffuse.a < 1.0f) {
            dev->SetRenderState(gfx::RS_ALPHABLENDENABLE, 1);
            dev->SetRenderState(gfx::RS_SRCBLEND, gfx::BLEND_SRCALPHA);
            dev->SetRenderState(gfx::RS_DESTBLEND, blendDest);
        }
        dev->SetMaterial(m.mtl);
        dev->DrawIndexedPrimitive(gfx::PT_TRIANGLELIST, gfx::FVF_VERTEX, verts, numVerts, idx, m.numIndices);
        dev->SetRenderState(gfx::RS_ALPHABLENDENABLE, 0);
        idx += m.numIndices;
    }
}

}  // namespace

// ---------------------------------------------------------------------------------------------
// StaticMesh

StaticMesh::StaticMesh()
    : numVerts(0), verts(nullptr), numIndices(0), indices(nullptr), numMaterials(0), materials(nullptr),
      faces(nullptr), srcVerts(nullptr)
{
}

StaticMesh::~StaticMesh()
{
    delete[] verts;
    delete[] srcVerts;
    delete[] indices;
    delete[] materials;
}

bool StaticMesh::Load(const char *file)
{
    char line[0x100] = "";
    MemFile *fp = mem_fopen(file);
    if (!fp) return false;

    while (strcmp(line, "Mesh {\n") != 0) {
        if (!mem_fgets(line, 0x100, fp)) { mem_fclose(fp); return false; }
    }
    mem_fscanf(fp, " %d;", &numVerts);
    verts = new Vertex[numVerts];
    srcVerts = new Vertex[numVerts];
    memset(verts, 0, numVerts * sizeof(Vertex));
    memset(srcVerts, 0, numVerts * sizeof(Vertex));
    for (u32 i = 0; i < numVerts - 1; i++)
        mem_fscanf(fp, " %f;%f;%f;,", &verts[i].pos.x, &verts[i].pos.y, &verts[i].pos.z);
    mem_fscanf(fp, " %f;%f;%f;;", &verts[numVerts - 1].pos.x, &verts[numVerts - 1].pos.y, &verts[numVerts - 1].pos.z);

    u32 numFaces = 0;
    mem_fgetc(fp);
    mem_fscanf(fp, " %d;", &numFaces);
    faces = new XFace[numFaces];
    memset(faces, 0, numFaces * sizeof(XFace));
    numIndices = 0;
    for (u32 i = 0; i < numFaces - 1; i++) {
        XFace &f = faces[i];
        mem_fscanf(fp, " %d;%d,%d,%d,%d;,", &f.n, &f.idx[0], &f.idx[1], &f.idx[2], &f.idx[3]);
        numIndices += (f.n - 2) * 3;
        if (f.n == 3) mem_fgets(line, 0x100, fp);
    }
    {
        XFace &f = faces[numFaces - 1];
        mem_fscanf(fp, " %d;%d,%d,%d,%d;;", &f.n, &f.idx[0], &f.idx[1], &f.idx[2], &f.idx[3]);
        numIndices += (f.n - 2) * 3;
    }
    mem_fgets(line, 0x100, fp);
    mem_fgets(line, 0x100, fp);
    mem_fgets(line, 0x100, fp);
    mem_fscanf(fp, "  %d;", &numMaterials);
    mem_fgets(line, 0x100, fp);
    mem_fgets(line, 0x100, fp);
    static u32 faceMat[MAX_FACES];
    for (u32 i = 0; i < numFaces - 1; i++) mem_fscanf(fp, "  %d,", &faceMat[i]);
    mem_fscanf(fp, "  %d;;", &faceMat[numFaces - 1]);

    indices = new u16[numIndices];
    memset(indices, 0, numIndices * sizeof(u16));
    materials = new XMaterial[numMaterials];
    memset(materials, 0, numMaterials * sizeof(XMaterial));
    BuildIndices(faces, faceMat, numFaces, indices, numIndices, materials);
    delete[] faces;
    faces = nullptr;

    mem_fgets(line, 0x100, fp);
    mem_fgets(line, 0x100, fp);
    ReadMaterials(fp, line, materials, numMaterials);
    mem_fgets(line, 0x100, fp);
    mem_fgets(line, 0x100, fp);
    for (u32 i = 0; i < numVerts - 1; i++) mem_fscanf(fp, "  %f;%f;", &verts[i].tu, &verts[i].tv);
    mem_fscanf(fp, "  %f;%f;", &verts[numVerts - 1].tu, &verts[numVerts - 1].tv);
    mem_fclose(fp);

    Vec3 *normals = new Vec3[numIndices];
    memset(normals, 0, numIndices * sizeof(Vec3));
    ComputeNormals(&verts[0].pos, sizeof(Vertex), numVerts, indices, numIndices, normals,
                   [](const Vec3 &a, const Vec3 &b) {
                       double dx = (double)a.x - b.x, dy = (double)a.y - b.y, dz = (double)a.z - b.z;
                       return dx < 1e-6f && dx > -1e-6f && dy < 1e-6f && dy > -1e-6f && dz < 1e-6f && dz > -1e-6f;
                   });
    for (u32 i = 0; i < numVerts; i++) verts[i].normal = normals[i];
    delete[] normals;
    return true;
}

void StaticMesh::Scale(float s)
{
    for (u32 i = 0; i < numVerts; i++) {
        verts[i].pos.x *= s;
        verts[i].pos.y *= s;
        verts[i].pos.z *= s;
    }
}

bool StaticMesh::RenderMaterials(gfx::Device *dev)
{
    DrawMaterials(dev, materials, numMaterials, verts, numVerts, indices, gfx::BLEND_ONE);
    return true;
}

bool StaticMesh::Render(gfx::Device *dev)
{
    if (materials[0].numIndices != 0)
        dev->DrawIndexedPrimitive(gfx::PT_TRIANGLELIST, gfx::FVF_VERTEX, verts, numVerts, indices,
                                  materials[0].numIndices);
    return true;
}

bool StaticMesh::SetMaterial(gfx::Device *dev)
{
    XMaterial &m = materials[0];
    dev->SetTexture(0, D3DTextr_GetSurface(m.texName));
    const char *ext = strchr(m.texName, '.');
    if (ext && strchr(ext, 't')) {
        dev->SetTextureStageState(0, gfx::TSS_ALPHAARG1, gfx::TA_TEXTURE);
        dev->SetRenderState(gfx::RS_ALPHABLENDENABLE, 1);
        dev->SetRenderState(gfx::RS_SRCBLEND, gfx::BLEND_SRCALPHA);
        dev->SetRenderState(gfx::RS_DESTBLEND, gfx::BLEND_INVSRCALPHA);
    }
    if (m.mtl.diffuse.a < 1.0f) {
        dev->SetRenderState(gfx::RS_ALPHABLENDENABLE, 1);
        dev->SetRenderState(gfx::RS_SRCBLEND, gfx::BLEND_SRCALPHA);
        dev->SetRenderState(gfx::RS_DESTBLEND, gfx::BLEND_ONE);
    }
    dev->SetMaterial(m.mtl);
    return true;
}

// ---------------------------------------------------------------------------------------------
// SkinModel

SkinModel::SkinModel()
    : faces(nullptr), numVerts(0), numIndices(0), indices(nullptr), numMaterials(0), materials(nullptr),
      srcVerts(nullptr), bones(nullptr), verts(nullptr), ctex(nullptr), numBones(0), numCTex(0)
{
}

SkinModel::~SkinModel()
{
    for (int i = 0; i < numCTex; i++) delete[] ctex[i].verts;
    delete[] ctex;
    delete[] verts;
    delete[] indices;
    delete[] materials;
    delete[] srcVerts;
    delete[] bones;
}

bool SkinModel::Load(const char *name)
{
    char line[0x100];
    snprintf(line, sizeof(line), "basket\\%s.x", name);
    MemFile *fp = mem_fopen(line);
    if (!fp) return false;

    while (strcmp(line, "Mesh {\n") != 0) {
        if (!mem_fgets(line, 0x100, fp)) { mem_fclose(fp); return false; }
    }
    mem_fscanf(fp, " %d;", &numVerts);
    verts = new Vertex[numVerts];
    memset(verts, 0, numVerts * sizeof(Vertex));
    srcVerts = new SkinVertex[numVerts];
    memset(srcVerts, 0, numVerts * sizeof(SkinVertex));
    for (u32 i = 0; i < numVerts - 1; i++)
        mem_fscanf(fp, " %f;%f;%f;,", &srcVerts[i].pos.x, &srcVerts[i].pos.y, &srcVerts[i].pos.z);
    mem_fscanf(fp, " %f;%f;%f;,", &srcVerts[numVerts - 1].pos.x, &srcVerts[numVerts - 1].pos.y,
               &srcVerts[numVerts - 1].pos.z);

    u32 numFaces = 0;
    mem_fgetc(fp);
    mem_fscanf(fp, " %d;", &numFaces);
    faces = new XFace[numFaces];
    memset(faces, 0, numFaces * sizeof(XFace));
    numIndices = 0;
    for (u32 i = 0; i < numFaces - 1; i++) {
        XFace &f = faces[i];
        mem_fscanf(fp, " %d;%d,%d,%d,%d;,", &f.n, &f.idx[0], &f.idx[1], &f.idx[2], &f.idx[3]);
        numIndices += (f.n - 2) * 3;
        if (f.n == 3) mem_fgets(line, 0x100, fp);
    }
    {
        XFace &f = faces[numFaces - 1];
        mem_fscanf(fp, " %d;%d,%d,%d,%d;;", &f.n, &f.idx[0], &f.idx[1], &f.idx[2], &f.idx[3]);
        numIndices += (f.n - 2) * 3;
    }
    mem_fgets(line, 0x100, fp);
    mem_fgets(line, 0x100, fp);
    mem_fgets(line, 0x100, fp);
    mem_fscanf(fp, "  %d;", &numMaterials);
    mem_fgets(line, 0x100, fp);
    mem_fgets(line, 0x100, fp);
    static u32 faceMat[MAX_FACES];
    for (u32 i = 0; i < numFaces - 1; i++) mem_fscanf(fp, "  %d,", &faceMat[i]);
    mem_fscanf(fp, "  %d;;", &faceMat[numFaces - 1]);

    indices = new u16[numIndices];
    memset(indices, 0, numIndices * sizeof(u16));
    materials = new XMaterial[numMaterials];
    memset(materials, 0, numMaterials * sizeof(XMaterial));
    BuildIndices(faces, faceMat, numFaces, indices, numIndices, materials);
    delete[] faces;
    faces = nullptr;

    mem_fgets(line, 0x100, fp);
    mem_fgets(line, 0x100, fp);
    ReadMaterials(fp, line, materials, numMaterials);
    mem_fgets(line, 0x100, fp);
    mem_fgets(line, 0x100, fp);
    for (u32 i = 0; i < numVerts - 1; i++) mem_fscanf(fp, "  %f;%f;", &verts[i].tu, &verts[i].tv);
    mem_fscanf(fp, "  %f;%f;", &verts[numVerts - 1].tu, &verts[numVerts - 1].tv);
    mem_fclose(fp);

    Vec3 *normals = new Vec3[numIndices];
    memset(normals, 0, numIndices * sizeof(Vec3));
    ComputeNormals(&srcVerts[0].pos, sizeof(SkinVertex), numVerts, indices, numIndices, normals,
                   [](const Vec3 &a, const Vec3 &b) { return a.x == b.x && a.y == b.y && a.z == b.z; });
    for (u32 i = 0; i < numVerts; i++) srcVerts[i].normal = normals[i];
    delete[] normals;

    // ---- .osm: skeleton, per-vertex bone, expression texture groups ----
    snprintf(line, sizeof(line), "basket\\%s.osm", name);
    fp = mem_fopen(line);
    if (!fp) return false;
    mem_fgets(line, 0x100, fp);
    mem_fgets(line, 0x100, fp);
    mem_fgets(line, 0x100, fp);
    mem_fgets(line, 0x100, fp);
    mem_fscanf(fp, " %d;%s\n", &numBones, line);
    bones = new Bone[numBones];
    memset(bones, 0, numBones * sizeof(Bone));
    bones[0].parent = -1;
    mem_fgets(line, 0x100, fp);
    for (int i = 0; i < numBones; i++) {
        Bone &b = bones[i];
        mem_fgets(line, 0x100, fp);
        mem_fscanf(fp, "  %d;", &b.parent);
        mem_fgets(line, 0x100, fp);
        mem_fscanf(fp, "  %f,%f,%f;", &b.pivot.x, &b.pivot.y, &b.pivot.z);
        mem_fgets(line, 0x100, fp);
        mem_fscanf(fp, "  %f,%f,%f;", &b.trans.x, &b.trans.y, &b.trans.z);
        mem_fgets(line, 0x100, fp);
        mem_fscanf(fp, "  %f,%f,%f;", &b.rot.x, &b.rot.y, &b.rot.z);
        mem_fgets(line, 0x100, fp);
        mem_fgets(line, 0x100, fp);
    }
    for (int i = 0; i < 5; i++) mem_fgets(line, 0x100, fp);
    for (u32 i = 0; i < numVerts; i++) {
        mem_fscanf(fp, "  %d;", &srcVerts[i].bone);
        mem_fgets(line, 0x100, fp);
    }
    for (int i = 0; i < 4; i++) mem_fgets(line, 0x100, fp);
    mem_fscanf(fp, " %d;", &numCTex);
    mem_fgets(line, 0x100, fp);
    ctex = new CTexGroup[numCTex];
    memset(ctex, 0, numCTex * sizeof(CTexGroup));
    for (int i = 0; i < numCTex; i++) {
        CTexGroup &g = ctex[i];
        mem_fgets(line, 0x100, fp);
        mem_fscanf(fp, "  %d;", &g.count);
        mem_fgets(line, 0x100, fp);
        g.verts = new CTexVert[g.count];
        memset(g.verts, 0, g.count * sizeof(CTexVert));
        mem_fscanf(fp, "  %f;", &g.step);
        mem_fgets(line, 0x100, fp);
        mem_fgets(line, 0x100, fp);
        for (int j = 0; j < g.count; j++) {
            mem_fscanf(fp, "   %d;", &g.verts[j].vtx);
            g.verts[j].tu = verts[g.verts[j].vtx].tu;
            g.verts[j].tv = verts[g.verts[j].vtx].tv;
            mem_fgets(line, 0x100, fp);
        }
    }
    mem_fclose(fp);
    Scale(2.5f);
    return true;
}

void SkinModel::Scale(float s)
{
    for (u32 i = 0; i < numVerts; i++) {
        srcVerts[i].pos.x *= s;
        srcVerts[i].pos.y *= s;
        srcVerts[i].pos.z *= s;
    }
    for (int i = 0; i < numBones; i++) {
        bones[i].pivot.x = bones[i].pivot.x * s / 9.0f;
        bones[i].pivot.y = bones[i].pivot.y * s / 9.0f;
        bones[i].pivot.z = bones[i].pivot.z * s / 9.0f;
        bones[i].trans.x = bones[i].trans.x * s / 9.0f;
        bones[i].trans.y = bones[i].trans.y * s / 9.0f;
        bones[i].trans.z = bones[i].trans.z * s / 9.0f;
    }
}

void SkinModel::Skin()
{
    Mat4 m;
    for (int i = 0; i < numBones; i++) {
        Bone &b = bones[i];
        // mat = T(-pivot) * Rz * Rx * Ry * T(trans) * T(pivot);  nrmMat = Rz * Rx * Ry
        D3DUtil_SetTranslateMatrix(m, -b.pivot);
        D3DUtil_SetRotateZMatrix(b.mat, b.rot.z);
        D3DMath_MatrixMultiply(b.mat, m, b.mat);
        D3DUtil_SetRotateXMatrix(m, b.rot.x);
        D3DMath_MatrixMultiply(b.mat, b.mat, m);
        D3DUtil_SetRotateYMatrix(m, b.rot.y);
        D3DMath_MatrixMultiply(b.mat, b.mat, m);
        D3DUtil_SetTranslateMatrix(m, b.trans);
        D3DMath_MatrixMultiply(b.mat, b.mat, m);
        D3DUtil_SetTranslateMatrix(m, b.pivot);
        D3DMath_MatrixMultiply(b.mat, b.mat, m);

        D3DUtil_SetRotateZMatrix(b.nrmMat, b.rot.z);
        D3DUtil_SetRotateXMatrix(m, b.rot.x);
        D3DMath_MatrixMultiply(b.nrmMat, b.nrmMat, m);
        D3DUtil_SetRotateYMatrix(m, b.rot.y);
        D3DMath_MatrixMultiply(b.nrmMat, b.nrmMat, m);
    }
    // Parents come first in the file, so one pass composes the hierarchy.
    for (int i = 0; i < numBones; i++) {
        Bone &b = bones[i];
        if (b.parent >= 0) {
            D3DMath_MatrixMultiply(b.mat, b.mat, bones[b.parent].mat);
            D3DMath_MatrixMultiply(b.nrmMat, b.nrmMat, bones[b.parent].nrmMat);
        }
    }
    for (u32 i = 0; i < numVerts; i++) {
        const SkinVertex &s = srcVerts[i];
        const float *M = bones[s.bone].mat.m, *N = bones[s.bone].nrmMat.m;
        Vertex &v = verts[i];
        v.pos.x = M[8] * s.pos.z + M[4] * s.pos.y + M[0] * s.pos.x + M[12];
        v.pos.y = M[9] * s.pos.z + M[5] * s.pos.y + M[1] * s.pos.x + M[13];
        v.pos.z = M[10] * s.pos.z + M[6] * s.pos.y + M[2] * s.pos.x + M[14];
        v.normal.x = N[8] * s.normal.z + N[4] * s.normal.y + N[0] * s.normal.x + N[12];
        v.normal.y = N[9] * s.normal.z + N[5] * s.normal.y + N[1] * s.normal.x + N[13];
        v.normal.z = N[10] * s.normal.z + N[6] * s.normal.y + N[2] * s.normal.x + N[14];
    }
}

void SkinModel::RenderMaterials(gfx::Device *dev)
{
    DrawMaterials(dev, materials, numMaterials, verts, numVerts, indices, gfx::BLEND_INVSRCALPHA);
}

void SkinModel::Render(gfx::Device *dev)
{
    dev->DrawIndexedPrimitive(gfx::PT_TRIANGLELIST, gfx::FVF_VERTEX, verts, numVerts, indices,
                              materials[0].numIndices);
}
