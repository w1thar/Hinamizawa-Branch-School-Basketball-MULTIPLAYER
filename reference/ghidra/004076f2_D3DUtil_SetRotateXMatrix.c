// D3DUtil_SetRotateXMatrix @ 004076f2  size=91

void __cdecl D3DUtil_SetRotateXMatrix(Mat4 *m,float a)

{
  float x;
  float fVar1;
  
  D3DUtil_SetIdentityMatrix(m);
  fVar1 = cosf(a);
  m->m[5] = fVar1;
  fVar1 = sinf(x);
  m->m[6] = fVar1;
  fVar1 = sinf((float)m);
  m->m[9] = -fVar1;
  fVar1 = cosf(a);
  m->m[10] = fVar1;
  return;
}

