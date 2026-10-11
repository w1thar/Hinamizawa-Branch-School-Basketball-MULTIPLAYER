// SetTranslateMatrixV @ 0040c4b0  size=37

void __cdecl SetTranslateMatrixV(Mat4 *m,Vec3 *v)

{
  SetTranslateMatrix(m,v->x,v->y,v->z);
  return;
}

