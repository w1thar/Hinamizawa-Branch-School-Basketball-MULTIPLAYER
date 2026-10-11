// Basic types shared by the whole game. Layouts match the original D3D7-era structs so the
// decompiled logic can be kept 1:1 (D3DVECTOR, D3DMATRIX, D3DMATERIAL7, D3DLIGHT7, D3DVERTEX ...).
#pragma once

#include <cstddef>
#include <cstdint>

typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef int32_t  s32;

// D3DVECTOR with the inline operators from d3dtypes.h that the game used.
struct Vec3 {
    float x, y, z;

    Vec3() = default;
    Vec3(float x_, float y_, float z_) : x(x_), y(y_), z(z_) {}

    float &operator[](int i) { return (&x)[i]; }
    const float &operator[](int i) const { return (&x)[i]; }

    Vec3 &operator+=(const Vec3 &v) { x += v.x; y += v.y; z += v.z; return *this; }
    Vec3 &operator-=(const Vec3 &v) { x -= v.x; y -= v.y; z -= v.z; return *this; }
    Vec3 &operator*=(float s) { x *= s; y *= s; z *= s; return *this; }
    Vec3 &operator/=(float s) { x /= s; y /= s; z /= s; return *this; }
};

inline Vec3 operator+(const Vec3 &a, const Vec3 &b) { return Vec3(a.x + b.x, a.y + b.y, a.z + b.z); }
inline Vec3 operator-(const Vec3 &a, const Vec3 &b) { return Vec3(a.x - b.x, a.y - b.y, a.z - b.z); }
inline Vec3 operator-(const Vec3 &v) { return Vec3(-v.x, -v.y, -v.z); }
inline Vec3 operator*(float s, const Vec3 &v) { return Vec3(s * v.x, s * v.y, s * v.z); }
inline Vec3 operator*(const Vec3 &v, float s) { return Vec3(s * v.x, s * v.y, s * v.z); }
inline Vec3 operator/(const Vec3 &v, float s) { return Vec3(v.x / s, v.y / s, v.z / s); }

float SquareMagnitude(const Vec3 &v);
float Magnitude(const Vec3 &v);
Vec3 Normalize(const Vec3 &v);
float DotProduct(const Vec3 &a, const Vec3 &b);
Vec3 CrossProduct(const Vec3 &a, const Vec3 &b);

struct Color4 { float r, g, b, a; };

// D3DMATRIX: row-major, row-vector convention (v' = v * M), translation in m[12..14].
// The same 16 floats are a valid column-major matrix for OpenGL.
struct Mat4 { float m[16]; };

struct Material7 {          // D3DMATERIAL7
    Color4 diffuse, ambient, specular, emissive;
    float power;
};

struct Light7 {             // D3DLIGHT7
    int type;               // 1 point, 2 spot, 3 directional
    Color4 diffuse, specular, ambient;
    Vec3 position, direction;
    float range, falloff, att0, att1, att2, theta, phi;
};

struct Vertex {             // D3DFVF_XYZ | D3DFVF_NORMAL | D3DFVF_TEX1
    Vec3 pos;
    Vec3 normal;
    float tu, tv;
};

struct TLVertex {           // D3DFVF_XYZRHW | D3DFVF_DIFFUSE | D3DFVF_SPECULAR | D3DFVF_TEX1
    float sx, sy, sz, rhw;
    u32 color;              // 0xAARRGGBB
    u32 specular;
    float tu, tv;
};

static_assert(sizeof(Vec3) == 12, "Vec3 layout");
static_assert(sizeof(Mat4) == 64, "Mat4 layout");
static_assert(sizeof(Material7) == 0x44, "Material7 layout");
static_assert(sizeof(Light7) == 0x68, "Light7 layout");
static_assert(sizeof(Vertex) == 0x20, "Vertex layout");
static_assert(sizeof(TLVertex) == 0x20, "TLVertex layout");
