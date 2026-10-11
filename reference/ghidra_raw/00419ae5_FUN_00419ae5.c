// FUN_00419ae5 @ 00419ae5  size=759

float * __thiscall FUN_00419ae5(void *this,float *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float10 fVar3;
  float local_14;
  float local_10;
  float local_c;
  int local_8;
  
  thunk_FUN_00407fe0(&local_14);
  if (param_2 == *(int *)((int)this + 0x268)) {
    iVar1 = *(int *)((int)this + param_2 * 4 + 0xd8);
    fVar3 = (float10)thunk_FUN_00404960(*(undefined4 *)
                                         (*(int *)((int)this + param_2 * 4 + 0xd8) + 0x164));
    local_14 = (float)((float10)*(float *)(iVar1 + 0x158) -
                      fVar3 * (float10)*(float *)(*(int *)((int)this + param_2 * 4 + 0xd8) + 0x168)
                      * (float10)0.8 * (float10)*(float *)((int)this + 0x54));
    local_10 = *(float *)(*(int *)((int)this + param_2 * 4 + 0xd8) + 0x15c);
    iVar1 = *(int *)((int)this + param_2 * 4 + 0xd8);
    fVar3 = (float10)thunk_FUN_00404900(this);
    fVar3 = (float10)*(float *)(iVar1 + 0x160) -
            fVar3 * (float10)*(float *)(*(int *)((int)this + param_2 * 4 + 0xd8) + 0x168) *
            (float10)0.8 * (float10)*(float *)((int)this + 0x54);
  }
  else {
    iVar1 = *(int *)((int)this + param_2 * 4 + 0xd8);
    fVar3 = (float10)thunk_FUN_00404960(*(undefined4 *)
                                         (*(int *)((int)this + param_2 * 4 + 0xd8) + 0x164));
    local_14 = (float)((float10)*(float *)(iVar1 + 0x158) -
                      fVar3 * (float10)*(float *)(*(int *)((int)this + param_2 * 4 + 0xd8) + 0x168)
                      * (float10)*(float *)((int)this + 0x54));
    local_10 = *(float *)(*(int *)((int)this + param_2 * 4 + 0xd8) + 0x15c);
    iVar1 = *(int *)((int)this + param_2 * 4 + 0xd8);
    fVar3 = (float10)thunk_FUN_00404900(this);
    fVar3 = (float10)*(float *)(iVar1 + 0x160) -
            fVar3 * (float10)*(float *)(*(int *)((int)this + param_2 * 4 + 0xd8) + 0x168) *
            (float10)*(float *)((int)this + 0x54);
  }
  local_c = (float)fVar3;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    if ((local_8 != param_2 && 2 < *(int *)(*(int *)((int)this + local_8 * 4 + 0xd8) + 400)) &&
       ((*(float *)(*(int *)((int)this + local_8 * 4 + 0xd8) + 0x160) - local_c) *
        (*(float *)(*(int *)((int)this + local_8 * 4 + 0xd8) + 0x160) - local_c) +
        (*(float *)(*(int *)((int)this + local_8 * 4 + 0xd8) + 0x158) - local_14) *
        (*(float *)(*(int *)((int)this + local_8 * 4 + 0xd8) + 0x158) - local_14) < 9.0)) {
      iVar1 = *(int *)((int)this + local_8 * 4 + 0xd8);
      fVar2 = *(float *)(*(int *)((int)this + local_8 * 4 + 0xd8) + 0x158) - local_14;
      fVar3 = (float10)thunk_FUN_00404990(this);
      local_14 = (float)((float10)*(float *)(iVar1 + 0x158) - (float10)(fVar2 * 3.0) / fVar3);
      iVar1 = *(int *)((int)this + local_8 * 4 + 0xd8);
      fVar2 = *(float *)(*(int *)((int)this + local_8 * 4 + 0xd8) + 0x160) - local_c;
      fVar3 = (float10)thunk_FUN_00404990(this);
      local_c = (float)((float10)*(float *)(iVar1 + 0x160) - (float10)(fVar2 * 3.0) / fVar3);
    }
  }
  *param_1 = local_14;
  param_1[1] = local_10;
  param_1[2] = local_c;
  return param_1;
}

