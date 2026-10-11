// FUN_00403ef0 @ 00403ef0  size=123

void __thiscall
FUN_00403ef0(void *this,float *param_1,float *param_2,float param_3,float param_4,float param_5)

{
  undefined4 extraout_ECX;
  float10 fVar1;
  
  fVar1 = (float10)thunk_FUN_00404930(this);
  *param_2 = (float)(fVar1 * (float10)2.0);
  fVar1 = (float10)thunk_FUN_00404960(param_2);
  *param_1 = (float)((float10)param_3 / fVar1);
  fVar1 = (float10)thunk_FUN_00404960(param_2);
  param_1[1] = (float)((float10)param_4 / fVar1);
  fVar1 = (float10)thunk_FUN_00404960(extraout_ECX);
  param_1[2] = (float)((float10)param_5 / fVar1);
  return;
}

