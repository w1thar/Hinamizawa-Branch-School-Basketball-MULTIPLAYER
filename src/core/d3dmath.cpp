#include "d3dmath.h"

#include <cmath>
#include <cstring>

float SquareMagnitude(const Vec3 &v) { return v.x * v.x + v.y * v.y + v.z * v.z; }
float Magnitude(const Vec3 &v) { return sqrtf(SquareMagnitude(v)); }
Vec3 Normalize(const Vec3 &v) { return v / Magnitude(v); }
float DotProduct(const Vec3 &a, const Vec3 &b) { return a.x * b.x + a.y * b.y + a.z * b.z; }

Vec3 CrossProduct(const Vec3 &a, const Vec3 &b)
{
    return Vec3(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x);
}

bool D3DUtil_SetViewMatrix(Mat4 &m, const Vec3 &from, const Vec3 &at, const Vec3 &worldUp)
{
    Vec3 view = at - from;
    float len = Magnitude(view);
    if (len < 1e-6f)
        return false;
    view /= len;

    Vec3 up = worldUp - DotProduct(worldUp, view) * view;
    len = Magnitude(up);
    if (len < 1e-6f) {
        up = Vec3(0.0f, 1.0f, 0.0f) - view.y * view;
        len = Magnitude(up);
        if (len < 1e-6f) {
            up = Vec3(0.0f, 0.0f, 1.0f) - view.z * view;
            len = Magnitude(up);
            if (len < 1e-6f)
                return false;
        }
    }
    up /= len;
    Vec3 right = CrossProduct(up, view);

    D3DUtil_SetIdentityMatrix(m);
    m.m[0] = right.x; m.m[1] = up.x; m.m[2] = view.x;
    m.m[4] = right.y; m.m[5] = up.y; m.m[6] = view.y;
    m.m[8] = right.z; m.m[9] = up.z; m.m[10] = view.z;
    m.m[12] = -DotProduct(from, right);
    m.m[13] = -DotProduct(from, up);
    m.m[14] = -DotProduct(from, view);
    return true;
}

bool D3DUtil_SetProjectionMatrix(Mat4 &m, float fov, float aspect, float zn, float zf)
{
    if (fabsf(zf - zn) < 0.01f)
        return false;
    if (fabsf(sinf(fov / 2)) < 0.01f)
        return false;
    float w = aspect * (cosf(fov / 2) / sinf(fov / 2));
    float h = 1.0f * (cosf(fov / 2) / sinf(fov / 2));
    float q = zf / (zf - zn);
    memset(&m, 0, sizeof(m));
    m.m[0] = w;
    m.m[5] = h;
    m.m[10] = q;
    m.m[11] = 1.0f;
    m.m[14] = -q * zn;
    return true;
}

void D3DUtil_SetIdentityMatrix(Mat4 &m)
{
    memset(&m, 0, sizeof(m));
    m.m[0] = m.m[5] = m.m[10] = m.m[15] = 1.0f;
}

void D3DUtil_SetRotateXMatrix(Mat4 &m, float a)
{
    D3DUtil_SetIdentityMatrix(m);
    m.m[5] = cosf(a);
    m.m[6] = sinf(a);
    m.m[9] = -sinf(a);
    m.m[10] = cosf(a);
}

void D3DUtil_SetRotateYMatrix(Mat4 &m, float a)
{
    D3DUtil_SetIdentityMatrix(m);
    m.m[0] = cosf(a);
    m.m[2] = -sinf(a);
    m.m[8] = sinf(a);
    m.m[10] = cosf(a);
}

void D3DUtil_SetRotateZMatrix(Mat4 &m, float a)
{
    D3DUtil_SetIdentityMatrix(m);
    m.m[0] = cosf(a);
    m.m[1] = sinf(a);
    m.m[4] = -sinf(a);
    m.m[5] = cosf(a);
}

void D3DUtil_SetTranslateMatrix(Mat4 &m, float x, float y, float z)
{
    D3DUtil_SetIdentityMatrix(m);
    m.m[12] = x;
    m.m[13] = y;
    m.m[14] = z;
}

void D3DMath_MatrixMultiply(Mat4 &q, const Mat4 &a, const Mat4 &b)
{
    Mat4 r;
    memset(&r, 0, sizeof(r));
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            for (int k = 0; k < 4; k++)
                r.m[i * 4 + j] += a.m[i * 4 + k] * b.m[k * 4 + j];
    q = r;
}

static u32 s_randSeed = 1;

void crt_srand(u32 seed) { s_randSeed = seed; }

int crt_rand()
{
    s_randSeed = s_randSeed * 0x343fd + 0x269ec3;
    return (s_randSeed >> 16) & 0x7fff;
}
