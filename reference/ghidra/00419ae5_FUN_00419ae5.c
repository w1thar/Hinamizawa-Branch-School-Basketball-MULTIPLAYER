// FUN_00419ae5 @ 00419ae5  size=759

float * __thiscall FUN_00419ae5(void *this,float *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  Vec3 local_14;
  int local_8;
  
  Vec3::CtorDefault(&local_14);
  if (param_2 == *(int *)((int)this + 0x268)) {
    iVar1 = *(int *)((int)this + param_2 * 4 + 0xd8);
    fVar2 = sinf(*(float *)(*(int *)((int)this + param_2 * 4 + 0xd8) + 0x164));
    local_14.x = *(float *)(iVar1 + 0x158) -
                 fVar2 * *(float *)(*(int *)((int)this + param_2 * 4 + 0xd8) + 0x168) * 0.8 *
                 *(float *)((int)this + 0x54);
    local_14.y = *(float *)(*(int *)((int)this + param_2 * 4 + 0xd8) + 0x15c);
    iVar1 = *(int *)((int)this + param_2 * 4 + 0xd8);
    fVar2 = cosf((float)this);
    local_14.z = *(float *)(iVar1 + 0x160) -
                 fVar2 * *(float *)(*(int *)((int)this + param_2 * 4 + 0xd8) + 0x168) * 0.8 *
                 *(float *)((int)this + 0x54);
  }
  else {
    iVar1 = *(int *)((int)this + param_2 * 4 + 0xd8);
    fVar2 = sinf(*(float *)(*(int *)((int)this + param_2 * 4 + 0xd8) + 0x164));
    local_14.x = *(float *)(iVar1 + 0x158) -
                 fVar2 * *(float *)(*(int *)((int)this + param_2 * 4 + 0xd8) + 0x168) *
                 *(float *)((int)this + 0x54);
    local_14.y = *(float *)(*(int *)((int)this + param_2 * 4 + 0xd8) + 0x15c);
    iVar1 = *(int *)((int)this + param_2 * 4 + 0xd8);
    fVar2 = cosf((float)this);
    local_14.z = *(float *)(iVar1 + 0x160) -
                 fVar2 * *(float *)(*(int *)((int)this + param_2 * 4 + 0xd8) + 0x168) *
                 *(float *)((int)this + 0x54);
  }
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    if ((local_8 != param_2 && 2 < *(int *)(*(int *)((int)this + local_8 * 4 + 0xd8) + 400)) &&
       ((*(float *)(*(int *)((int)this + local_8 * 4 + 0xd8) + 0x160) - local_14.z) *
        (*(float *)(*(int *)((int)this + local_8 * 4 + 0xd8) + 0x160) - local_14.z) +
        (*(float *)(*(int *)((int)this + local_8 * 4 + 0xd8) + 0x158) - local_14.x) *
        (*(float *)(*(int *)((int)this + local_8 * 4 + 0xd8) + 0x158) - local_14.x) < 9.0)) {
      iVar1 = *(int *)((int)this + local_8 * 4 + 0xd8);
      fVar2 = *(float *)(*(int *)((int)this + local_8 * 4 + 0xd8) + 0x158) - local_14.x;
      fVar3 = sqrtf((float)this);
      local_14.x = *(float *)(iVar1 + 0x158) - (fVar2 * 3.0) / fVar3;
      iVar1 = *(int *)((int)this + local_8 * 4 + 0xd8);
      fVar2 = *(float *)(*(int *)((int)this + local_8 * 4 + 0xd8) + 0x160) - local_14.z;
      fVar3 = sqrtf((float)this);
      local_14.z = *(float *)(iVar1 + 0x160) - (fVar2 * 3.0) / fVar3;
    }
  }
  *param_1 = local_14.x;
  param_1[1] = local_14.y;
  param_1[2] = local_14.z;
  return param_1;
}

