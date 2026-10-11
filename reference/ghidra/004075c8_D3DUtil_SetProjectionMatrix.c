// D3DUtil_SetProjectionMatrix @ 004075c8  size=298

int __cdecl D3DUtil_SetProjectionMatrix(Mat4 *m,float fov,float aspect,float zn,float zf)

{
  float fVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar3 = FUN_00433940(SUB84((double)(zf - zn),0),(uint)((ulonglong)(double)(zf - zn) >> 0x20));
  if ((float10)0.009999999776482582 <= fVar3) {
    fVar3 = (float10)FUN_00433bd4(extraout_ECX);
    fVar3 = FUN_00433940(SUB84((double)fVar3,0),(uint)((ulonglong)(double)fVar3 >> 0x20));
    if ((float10)0.009999999776482582 <= fVar3) {
      fVar3 = (float10)thunk_FUN_00404900(extraout_ECX_00);
      fVar4 = (float10)thunk_FUN_00404960(extraout_ECX_01);
      fVar5 = (float10)thunk_FUN_00404900(extraout_ECX_02);
      fVar6 = (float10)thunk_FUN_00404960(extraout_ECX_03);
      fVar1 = zf / (zf - zn);
      _memset(m,0,0x40);
      m->m[0] = (float)(((float10)(float)fVar3 / fVar4) * (float10)aspect);
      m->m[5] = (float)(((float10)(float)fVar5 / fVar6) * (float10)1.0);
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

