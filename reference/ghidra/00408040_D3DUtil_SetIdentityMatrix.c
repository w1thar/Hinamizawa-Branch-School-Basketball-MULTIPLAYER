// D3DUtil_SetIdentityMatrix @ 00408040  size=164

void __cdecl D3DUtil_SetIdentityMatrix(Mat4 *m)

{
  m->m[7] = 0.0;
  m->m[6] = 0.0;
  m->m[4] = 0.0;
  m->m[3] = 0.0;
  m->m[2] = 0.0;
  m->m[1] = 0.0;
  m->m[0xe] = 0.0;
  m->m[0xd] = 0.0;
  m->m[0xc] = 0.0;
  m->m[0xb] = 0.0;
  m->m[9] = 0.0;
  m->m[8] = 0.0;
  m->m[0xf] = 1.0;
  m->m[10] = 1.0;
  m->m[5] = 1.0;
  m->m[0] = 1.0;
  return;
}

