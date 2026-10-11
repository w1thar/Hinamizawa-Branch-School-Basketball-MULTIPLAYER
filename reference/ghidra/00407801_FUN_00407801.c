// FUN_00407801 @ 00407801  size=389

void __thiscall FUN_00407801(void *this,float *param_1,float *param_2,float param_3)

{
  float fVar1;
  Vec3 local_14;
  float local_8;
  
  fVar1 = cosf((float)this);
  local_8 = sinf(param_3);
  Vec3_Normalize(&local_14,(Vec3 *)param_2);
  *param_1 = (1.0 - fVar1) * local_14.x * local_14.x + fVar1;
  param_1[1] = (1.0 - fVar1) * local_14.x * local_14.y - local_14.z * local_8;
  param_1[2] = local_14.y * local_8 + (1.0 - fVar1) * local_14.x * local_14.z;
  param_1[4] = local_14.z * local_8 + (1.0 - fVar1) * local_14.y * local_14.x;
  param_1[5] = (1.0 - fVar1) * local_14.y * local_14.y + fVar1;
  param_1[6] = (1.0 - fVar1) * local_14.y * local_14.z - local_14.x * local_8;
  param_1[8] = (1.0 - fVar1) * local_14.z * local_14.x - local_14.y * local_8;
  param_1[9] = local_14.x * local_8 + (1.0 - fVar1) * local_14.z * local_14.y;
  param_1[10] = (1.0 - fVar1) * local_14.z * local_14.z + fVar1;
  param_1[0xb] = 0.0;
  param_1[7] = 0.0;
  param_1[3] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xf] = 1.0;
  return;
}

