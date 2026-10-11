// FUN_00407801 @ 00407801  size=389

void __thiscall FUN_00407801(void *this,float *param_1,float *param_2,undefined4 param_3)

{
  float fVar1;
  float10 fVar2;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  fVar2 = (float10)thunk_FUN_00404900(this);
  fVar1 = (float)fVar2;
  fVar2 = (float10)thunk_FUN_00404960(param_3);
  local_8 = (float)fVar2;
  thunk_FUN_00407dc0(&local_14,param_2);
  *param_1 = (1.0 - fVar1) * local_14 * local_14 + fVar1;
  param_1[1] = (1.0 - fVar1) * local_14 * local_10 - local_c * local_8;
  param_1[2] = local_10 * local_8 + (1.0 - fVar1) * local_14 * local_c;
  param_1[4] = local_c * local_8 + (1.0 - fVar1) * local_10 * local_14;
  param_1[5] = (1.0 - fVar1) * local_10 * local_10 + fVar1;
  param_1[6] = (1.0 - fVar1) * local_10 * local_c - local_14 * local_8;
  param_1[8] = (1.0 - fVar1) * local_c * local_14 - local_10 * local_8;
  param_1[9] = local_14 * local_8 + (1.0 - fVar1) * local_c * local_10;
  param_1[10] = (1.0 - fVar1) * local_c * local_c + fVar1;
  param_1[0xb] = 0.0;
  param_1[7] = 0.0;
  param_1[3] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xf] = 1.0;
  return;
}

