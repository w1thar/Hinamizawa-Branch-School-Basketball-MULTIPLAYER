// D3DUtil_SetProjectionMatrix @ 004075c8  size=298

int __cdecl D3DUtil_SetProjectionMatrix(Mat4 *m,float fov,float aspect,float zn,float zf)

{
  float fVar1;
  int iVar2;
  float x;
  float x_00;
  float x_01;
  float x_02;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  
  dVar5 = fabs((double)(zf - zn));
  if (0.009999999776482582 <= dVar5) {
    dVar5 = sin((double)(fov / 2.0));
    dVar5 = fabs(dVar5);
    if (0.009999999776482582 <= dVar5) {
      cosf(x);
      fVar7 = fov / 2.0;
      fVar3 = sinf(x_00);
      cosf(x_01);
      fVar6 = 5.920003e-39;
      fVar4 = sinf(x_02);
      fVar1 = zf / (zf - zn);
      _memset(m,0,0x40);
      m->m[0] = (fVar7 / fVar3) * aspect;
      m->m[5] = (fVar6 / fVar4) * 1.0;
      m->m[10] = fVar1;
      m->m[0xb] = 1.0;
      m->m[0xe] = -fVar1 * zn;
      iVar2 = 0;
    }
    else {
      iVar2 = -0x7ff8ffa9;
    }
  }
  else {
    iVar2 = -0x7ff8ffa9;
  }
  return iVar2;
}

