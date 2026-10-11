// SetTranslateMatrix @ 0040c4e0  size=44

void __cdecl SetTranslateMatrix(Mat4 *m,float x,float y,float z)

{
  D3DUtil_SetIdentityMatrix(m);
  m->m[0xc] = x;
  m->m[0xd] = y;
  m->m[0xe] = z;
  return;
}

