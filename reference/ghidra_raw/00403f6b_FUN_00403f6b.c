// FUN_00403f6b @ 00403f6b  size=254

void __thiscall FUN_00403f6b(void *this,float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  float10 fVar7;
  
  fVar7 = (float10)thunk_FUN_00404960(this);
  fVar1 = (float)fVar7;
  fVar7 = (float10)thunk_FUN_00404960(extraout_ECX);
  fVar2 = (float)fVar7;
  fVar7 = (float10)thunk_FUN_00404960(extraout_ECX_00);
  fVar3 = (float)fVar7;
  fVar7 = (float10)thunk_FUN_00404900(extraout_ECX_01);
  fVar4 = (float)fVar7;
  fVar7 = (float10)thunk_FUN_00404900(extraout_ECX_02);
  fVar5 = (float)fVar7;
  fVar7 = (float10)thunk_FUN_00404900(extraout_ECX_03);
  fVar6 = (float)fVar7;
  *param_1 = fVar3 * fVar5 * fVar4 - fVar6 * fVar2 * fVar1;
  *param_2 = fVar3 * fVar5 * fVar1 + fVar6 * fVar2 * fVar4;
  *param_3 = fVar6 * fVar5 * fVar1 - fVar3 * fVar2 * fVar4;
  *param_4 = fVar3 * fVar2 * fVar1 + fVar6 * fVar5 * fVar4;
  return;
}

