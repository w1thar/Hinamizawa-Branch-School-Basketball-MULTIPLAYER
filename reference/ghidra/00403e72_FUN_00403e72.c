// FUN_00403e72 @ 00403e72  size=126

void __thiscall
FUN_00403e72(void *this,float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined4 extraout_ECX;
  float10 fVar1;
  
  fVar1 = (float10)thunk_FUN_00404960(this);
  *param_1 = (float)(fVar1 * (float10)*param_5);
  fVar1 = (float10)thunk_FUN_00404960(param_1);
  *param_2 = (float)(fVar1 * (float10)param_5[1]);
  fVar1 = (float10)thunk_FUN_00404960(extraout_ECX);
  *param_3 = (float)(fVar1 * (float10)param_5[2]);
  fVar1 = (float10)thunk_FUN_00404900(param_5);
  *param_4 = (float)fVar1;
  return;
}

