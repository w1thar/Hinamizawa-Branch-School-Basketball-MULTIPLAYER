// FUN_00403e72 @ 00403e72  size=126

void __thiscall
FUN_00403e72(void *this,float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float x;
  float fVar1;
  
  fVar1 = sinf((float)this);
  *param_1 = fVar1 * *param_5;
  fVar1 = sinf((float)param_1);
  *param_2 = fVar1 * param_5[1];
  fVar1 = sinf(x);
  *param_3 = fVar1 * param_5[2];
  fVar1 = cosf((float)param_5);
  *param_4 = fVar1;
  return;
}

