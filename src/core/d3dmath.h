// Re-implementation of the DirectX 7 SDK helper math (d3dutil.cpp / d3dmath.cpp) the game links,
// plus the MSVC CRT rand() so random sequences match the original.
#pragma once

#include "types.h"

bool D3DUtil_SetViewMatrix(Mat4 &m, const Vec3 &from, const Vec3 &at, const Vec3 &up);
bool D3DUtil_SetProjectionMatrix(Mat4 &m, float fov, float aspect, float zn, float zf);
void D3DUtil_SetIdentityMatrix(Mat4 &m);
void D3DUtil_SetRotateXMatrix(Mat4 &m, float a);
void D3DUtil_SetRotateYMatrix(Mat4 &m, float a);
void D3DUtil_SetRotateZMatrix(Mat4 &m, float a);
void D3DUtil_SetTranslateMatrix(Mat4 &m, float x, float y, float z);
inline void D3DUtil_SetTranslateMatrix(Mat4 &m, const Vec3 &v) { D3DUtil_SetTranslateMatrix(m, v.x, v.y, v.z); }

// q = a * b
void D3DMath_MatrixMultiply(Mat4 &q, const Mat4 &a, const Mat4 &b);

// MSVC 6 CRT LCG.
void crt_srand(u32 seed);
int crt_rand();
#define CRT_RAND_MAX 0x7fff
