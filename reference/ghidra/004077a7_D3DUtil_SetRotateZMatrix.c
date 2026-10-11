// D3DUtil_SetRotateZMatrix @ 004077a7  size=90

void __cdecl D3DUtil_SetRotateZMatrix(Mat4 *m,float a)

{
  float x;
  float fVar1;
  
  D3DUtil_SetIdentityMatrix(m);
  fVar1 = cosf(a);
  m->m[0] = fVar1;
  fVar1 = sinf(x);
  m->m[1] = fVar1;
  fVar1 = sinf((float)m);
  m->m[4] = -fVar1;
  fVar1 = cosf(a);
  m->m[5] = fVar1;
  return;
}

