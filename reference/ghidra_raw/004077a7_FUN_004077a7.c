// FUN_004077a7 @ 004077a7  size=90

void __cdecl FUN_004077a7(float *param_1,undefined4 param_2)

{
  undefined4 extraout_ECX;
  float10 fVar1;
  
  thunk_FUN_00408040(param_1);
  fVar1 = (float10)thunk_FUN_00404900(param_2);
  *param_1 = (float)fVar1;
  fVar1 = (float10)thunk_FUN_00404960(extraout_ECX);
  param_1[1] = (float)fVar1;
  fVar1 = (float10)thunk_FUN_00404960(param_1);
  param_1[4] = (float)-fVar1;
  fVar1 = (float10)thunk_FUN_00404900(param_2);
  param_1[5] = (float)fVar1;
  return;
}

