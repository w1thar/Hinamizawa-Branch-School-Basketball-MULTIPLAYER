// FUN_00404491 @ 00404491  size=299

void __thiscall
FUN_00404491(void *this,float *param_1,float *param_2,float *param_3,float *param_4,float param_5,
            float param_6,float param_7,float param_8,float param_9,float param_10,float param_11,
            float param_12,float param_13)

{
  float x;
  float x_00;
  float x_01;
  float fVar1;
  float fVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_8 * param_12 + param_7 * param_11 + param_6 * param_10 + param_5 * param_9;
  if (local_c < 0.0) {
    local_c = -local_c;
    param_9 = -param_9;
    param_10 = -param_10;
    param_11 = -param_11;
    param_12 = -param_12;
  }
  local_8 = 1.0 - param_13;
  if (0.001 < 1.0 - local_c) {
    fVar1 = acosf((float)this);
    local_8 = sinf(x);
    fVar1 = sinf(fVar1);
    local_8 = local_8 / fVar1;
    fVar1 = sinf(x_00);
    fVar2 = sinf(x_01);
    param_13 = fVar1 / fVar2;
  }
  *param_1 = param_13 * param_9 + local_8 * param_5;
  *param_2 = param_13 * param_10 + local_8 * param_6;
  *param_3 = param_13 * param_11 + local_8 * param_7;
  *param_4 = param_13 * param_12 + local_8 * param_8;
  return;
}

