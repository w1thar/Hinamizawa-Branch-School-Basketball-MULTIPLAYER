// D3DUtil_SetRotateYMatrix @ 0040774d  size=90

void __cdecl D3DUtil_SetRotateYMatrix(Mat4 *m,float a)

{
  float x;
  float fVar1;
  
  D3DUtil_SetIdentityMatrix(m);
  fVar1 = cosf(a);
  m->m[0] = fVar1;
  fVar1 = sinf(x);
  m->m[2] = -fVar1;
  fVar1 = sinf((float)m);
  m->m[8] = fVar1;
  fVar1 = cosf(a);
  m->m[10] = fVar1;
  return;
}

