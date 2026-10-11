// CPlayer_Update @ 0042d12e  size=2953

void __thiscall CPlayer_Update(void *this,float param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  int local_18;
  int local_10;
  float local_c;
  
  local_10 = 0;
  local_c = **(float **)((int)this + 0x4c);
  if (local_c != 0.0) {
    while (local_c < *(float *)((int)this + 0x194)) {
      local_10 = local_10 + 1;
      if (*(float *)(*(int *)((int)this + 0x4c) + local_10 * 0xc) == 0.0) {
        *(float *)((int)this + 0x194) = *(float *)((int)this + 0x194) - local_c;
        local_10 = 0;
      }
      else {
        local_c = local_c + *(float *)(*(int *)((int)this + 0x4c) + local_10 * 0xc);
      }
    }
    if (3.14 < *(float *)((int)this + 0x164)) {
      *(float *)((int)this + 0x164) = *(float *)((int)this + 0x164) - 6.28;
    }
    if (*(float *)((int)this + 0x164) < -3.14) {
      *(float *)((int)this + 0x164) = *(float *)((int)this + 0x164) + 6.28;
    }
    if (local_10 == *(int *)((int)this + 0x188)) {
      *(undefined1 *)((int)this + 0x184) = 0;
    }
    else {
      *(undefined1 *)((int)this + 0x184) = 1;
    }
    if (3.14 < (*(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa0) -
               *(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 0x10)) -
               *(float *)((int)this + 0x164)) {
      *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa0) =
           *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa0) - 6.28;
    }
    if ((*(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa0) -
        *(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 0x10)) -
        *(float *)((int)this + 0x164) < -3.14) {
      *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa0) =
           *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa0) + 6.28;
    }
    pfVar3 = *(float **)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc);
    fVar5 = (float10)thunk_FUN_00404900(this);
    fVar1 = *pfVar3;
    iVar4 = *(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc);
    fVar6 = (float10)thunk_FUN_00404960(*(int *)((int)this + 0x4c));
    fVar1 = (float)((float10)(float)(fVar5 * (float10)fVar1) -
                   fVar6 * (float10)*(float *)(iVar4 + 8));
    pfVar3 = *(float **)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc);
    fVar5 = (float10)thunk_FUN_00404960(this);
    fVar2 = *pfVar3;
    iVar4 = *(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc);
    fVar6 = (float10)thunk_FUN_00404900(this);
    fVar2 = (float)(fVar6 * (float10)*(float *)(iVar4 + 8) +
                   (float10)(float)(fVar5 * (float10)fVar2));
    if (0.01 < (fVar1 + *(float *)((int)this + 0x158)) -
               *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x90) ||
        (fVar1 + *(float *)((int)this + 0x158)) -
        *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x90) < -0.01) {
      *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x90) =
           ((fVar1 + *(float *)((int)this + 0x158)) -
           *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x90)) *
           *(float *)(*(int *)((int)this + 0x4c) + 4 + local_10 * 0xc) * param_1 +
           *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x90);
    }
    if (0.01 < (*(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 4) +
               *(float *)((int)this + 0x15c)) -
               *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x94) ||
        (*(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 4) +
        *(float *)((int)this + 0x15c)) - *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x94)
        < -0.01) {
      *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x94) =
           ((*(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 4) +
            *(float *)((int)this + 0x15c)) -
           *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x94)) *
           *(float *)(*(int *)((int)this + 0x4c) + 4 + local_10 * 0xc) * param_1 +
           *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x94);
    }
    if (0.01 < (fVar2 + *(float *)((int)this + 0x160)) -
               *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x98) ||
        (fVar2 + *(float *)((int)this + 0x160)) -
        *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x98) < -0.01) {
      *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x98) =
           ((fVar2 + *(float *)((int)this + 0x160)) -
           *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x98)) *
           *(float *)(*(int *)((int)this + 0x4c) + 4 + local_10 * 0xc) * param_1 +
           *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x98);
    }
    if (0.01 < *(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 0xc) -
               *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x9c) ||
        *(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 0xc) -
        *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x9c) < -0.01) {
      *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x9c) =
           (*(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 0xc) -
           *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x9c)) *
           *(float *)(*(int *)((int)this + 0x4c) + 4 + local_10 * 0xc) * param_1 +
           *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x9c);
    }
    if (0.01 < (*(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 0x10) +
               *(float *)((int)this + 0x164)) -
               *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa0) ||
        (*(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 0x10) +
        *(float *)((int)this + 0x164)) - *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa0)
        < -0.01) {
      *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa0) =
           ((*(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 0x10) +
            *(float *)((int)this + 0x164)) -
           *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa0)) *
           *(float *)(*(int *)((int)this + 0x4c) + 4 + local_10 * 0xc) * param_1 +
           *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa0);
    }
    if (0.01 < *(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 0x14) -
               *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa4) ||
        *(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 0x14) -
        *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa4) < -0.01) {
      *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa4) =
           (*(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 0x14) -
           *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa4)) *
           *(float *)(*(int *)((int)this + 0x4c) + 4 + local_10 * 0xc) * param_1 +
           *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa4);
    }
    for (local_18 = 1; local_18 < *(int *)(*(int *)((int)this + 4) + 0x2c); local_18 = local_18 + 1)
    {
      if (0.01 < *(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 0xc +
                           local_18 * 0x18) -
                 *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x9c + local_18 * 0xa8) ||
          *(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 0xc +
                    local_18 * 0x18) -
          *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x9c + local_18 * 0xa8) < -0.01) {
        *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x9c + local_18 * 0xa8) =
             (*(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 0xc +
                        local_18 * 0x18) -
             *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x9c + local_18 * 0xa8)) *
             *(float *)(*(int *)((int)this + 0x4c) + 4 + local_10 * 0xc) * param_1 +
             *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x9c + local_18 * 0xa8);
      }
      if (0.01 < *(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 0x10 +
                           local_18 * 0x18) -
                 *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa0 + local_18 * 0xa8) ||
          *(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 0x10 +
                    local_18 * 0x18) -
          *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa0 + local_18 * 0xa8) < -0.01) {
        *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa0 + local_18 * 0xa8) =
             (*(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 0x10 +
                        local_18 * 0x18) -
             *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa0 + local_18 * 0xa8)) *
             *(float *)(*(int *)((int)this + 0x4c) + 4 + local_10 * 0xc) * param_1 +
             *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa0 + local_18 * 0xa8);
      }
      if (0.01 < *(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 0x14 +
                           local_18 * 0x18) -
                 *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa4 + local_18 * 0xa8) ||
          *(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 0x14 +
                    local_18 * 0x18) -
          *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa4 + local_18 * 0xa8) < -0.01) {
        *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa4 + local_18 * 0xa8) =
             (*(float *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_10 * 0xc) + 0x14 +
                        local_18 * 0x18) -
             *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa4 + local_18 * 0xa8)) *
             *(float *)(*(int *)((int)this + 0x4c) + 4 + local_10 * 0xc) * param_1 +
             *(float *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa4 + local_18 * 0xa8);
      }
    }
    *(float *)((int)this + 0x194) = *(float *)((int)this + 0x194) + param_1;
    *(int *)((int)this + 0x188) = local_10;
    thunk_FUN_0040ad88(*(int *)((int)this + 4));
  }
  return;
}

