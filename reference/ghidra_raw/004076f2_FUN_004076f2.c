// FUN_004076f2 @ 004076f2  size=91

void __cdecl FUN_004076f2(undefined4 *param_1,undefined4 param_2)

{
  undefined4 extraout_ECX;
  float10 fVar1;
  
  thunk_FUN_00408040(param_1);
  fVar1 = (float10)thunk_FUN_00404900(param_2);
  param_1[5] = (float)fVar1;
  fVar1 = (float10)thunk_FUN_00404960(extraout_ECX);
  param_1[6] = (float)fVar1;
  fVar1 = (float10)thunk_FUN_00404960(param_1);
  param_1[9] = (float)-fVar1;
  fVar1 = (float10)thunk_FUN_00404900(param_2);
  param_1[10] = (float)fVar1;
  return;
}

