// FUN_00403ef0 @ 00403ef0  size=123

void __thiscall
FUN_00403ef0(void *this,float *param_1,float *param_2,float param_3,float param_4,float param_5)

{
  float x;
  float fVar1;
  
  fVar1 = acosf((float)this);
  *param_2 = fVar1 * 2.0;
  fVar1 = sinf((float)param_2);
  *param_1 = param_3 / fVar1;
  fVar1 = sinf((float)param_2);
  param_1[1] = param_4 / fVar1;
  fVar1 = sinf(x);
  param_1[2] = param_5 / fVar1;
  return;
}

