// FUN_004075c8 @ 004075c8  size=298

undefined4 __cdecl
FUN_004075c8(float *param_1,undefined4 param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar3 = FUN_00433940(SUB84((double)(param_5 - param_4),0),
                       (uint)((ulonglong)(double)(param_5 - param_4) >> 0x20));
  if ((float10)0.009999999776482582 <= fVar3) {
    fVar3 = (float10)FUN_00433bd4(extraout_ECX);
    fVar3 = FUN_00433940(SUB84((double)fVar3,0),(uint)((ulonglong)(double)fVar3 >> 0x20));
    if ((float10)0.009999999776482582 <= fVar3) {
      fVar3 = (float10)thunk_FUN_00404900(extraout_ECX_00);
      fVar4 = (float10)thunk_FUN_00404960(extraout_ECX_01);
      fVar5 = (float10)thunk_FUN_00404900(extraout_ECX_02);
      fVar6 = (float10)thunk_FUN_00404960(extraout_ECX_03);
      fVar1 = param_5 / (param_5 - param_4);
      _memset(param_1,0,0x40);
      *param_1 = (float)(((float10)(float)fVar3 / fVar4) * (float10)param_3);
      param_1[5] = (float)(((float10)(float)fVar5 / fVar6) * (float10)1.0);
      param_1[10] = fVar1;
      param_1[0xb] = 1.0;
      param_1[0xe] = -fVar1 * param_4;
      uVar2 = 0;
    }
    else {
      uVar2 = 0x80070057;
    }
  }
  else {
    uVar2 = 0x80070057;
  }
  return uVar2;
}

