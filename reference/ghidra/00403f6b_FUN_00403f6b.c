// FUN_00403f6b @ 00403f6b  size=254

void __thiscall FUN_00403f6b(void *this,float *param_1,float *param_2,float *param_3,float *param_4)

{
  float x;
  float x_00;
  float x_01;
  float x_02;
  float x_03;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = sinf((float)this);
  fVar2 = sinf(x);
  fVar3 = sinf(x_00);
  fVar4 = cosf(x_01);
  fVar5 = cosf(x_02);
  fVar6 = cosf(x_03);
  *param_1 = fVar3 * fVar5 * fVar4 - fVar6 * fVar2 * fVar1;
  *param_2 = fVar3 * fVar5 * fVar1 + fVar6 * fVar2 * fVar4;
  *param_3 = fVar6 * fVar5 * fVar1 - fVar3 * fVar2 * fVar4;
  *param_4 = fVar3 * fVar2 * fVar1 + fVar6 * fVar5 * fVar4;
  return;
}

