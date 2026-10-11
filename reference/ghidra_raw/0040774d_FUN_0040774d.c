// FUN_0040774d @ 0040774d  size=90

void __cdecl FUN_0040774d(float *param_1,undefined4 param_2)

{
  undefined4 extraout_ECX;
  float10 fVar1;
  
  thunk_FUN_00408040(param_1);
  fVar1 = (float10)thunk_FUN_00404900(param_2);
  *param_1 = (float)fVar1;
  fVar1 = (float10)thunk_FUN_00404960(extraout_ECX);
  param_1[2] = (float)-fVar1;
  fVar1 = (float10)thunk_FUN_00404960(param_1);
  param_1[8] = (float)fVar1;
  fVar1 = (float10)thunk_FUN_00404900(param_2);
  param_1[10] = (float)fVar1;
  return;
}

