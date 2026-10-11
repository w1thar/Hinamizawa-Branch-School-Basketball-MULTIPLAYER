// FUN_00405435 @ 00405435  size=1098

int __thiscall FUN_00405435(void *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  int *local_190;
  uint local_18c;
  int local_188;
  undefined4 local_184;
  undefined4 local_180;
  uint local_17c;
  int local_178;
  undefined1 *local_174;
  undefined1 local_170 [92];
  uint local_114;
  uint local_ec;
  uint local_e8;
  undefined1 local_ac [40];
  undefined4 local_84;
  undefined4 local_80;
  uint local_7c;
  uint local_78;
  undefined1 local_3c [32];
  uint local_1c;
  undefined4 local_18;
  undefined4 local_c;
  int *local_8;
  
  if (*(int *)((int)this + 0x6c) != 0) {
    (**(code **)(**(int **)((int)this + 0x6c) + 8))(*(undefined4 *)((int)this + 0x6c));
    *(undefined4 *)((int)this + 0x6c) = 0;
  }
  if (param_1 == (int *)0x0) {
    local_188 = -0x7ff8ffa9;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0xc))(param_1,local_170);
    if (iVar2 < 0) {
      local_188 = -0x7fffbffb;
    }
    else {
      thunk_FUN_00407239(&local_84,0,0);
      local_80 = 0x101007;
      local_1c = 0x1000;
      local_c = *(undefined4 *)((int)this + 0x5c);
      local_78 = *(uint *)((int)this + 0x54);
      local_7c = *(uint *)((int)this + 0x58);
      bVar1 = _IsEqualGUID(local_ac,&DAT_0044fca8);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        bVar1 = _IsEqualGUID(local_ac,&DAT_0044fc68);
        if (CONCAT31(extraout_var_00,bVar1) == 0) {
          local_1c = local_1c | 0x800;
        }
        else {
          local_18 = 0x10;
        }
      }
      else {
        local_18 = 0x10;
      }
      if ((local_114 & 2) != 0) {
        for (local_78 = 1; local_78 < *(uint *)((int)this + 0x54); local_78 = local_78 << 1) {
        }
        for (local_7c = 1; local_7c < *(uint *)((int)this + 0x58); local_7c = local_7c << 1) {
        }
      }
      local_18c = local_ec;
      if (local_ec == 0) {
        local_19c = 0x100;
      }
      else {
        local_19c = local_ec;
      }
      if (local_78 < local_19c) {
        local_1a0 = local_78;
      }
      else {
        if (local_ec == 0) {
          local_1a4 = 0x100;
        }
        else {
          local_1a4 = local_ec;
        }
        local_1a0 = local_1a4;
      }
      local_78 = local_1a0;
      if (local_e8 == 0) {
        local_1a8 = 0x100;
      }
      else {
        local_1a8 = local_e8;
      }
      if (local_7c < local_1a8) {
        local_1ac = local_7c;
      }
      else {
        if (local_e8 == 0) {
          local_1b0 = 0x100;
        }
        else {
          local_1b0 = local_e8;
        }
        local_1ac = local_1b0;
      }
      local_7c = local_1ac;
      if ((local_114 & 0x20) != 0) {
        if (local_1ac < local_1a0) {
          local_7c = local_1a0;
        }
        else {
          local_78 = local_1ac;
        }
      }
      local_178 = 0;
      local_174 = local_3c;
      local_184 = *(undefined4 *)((int)this + 0x60);
      local_17c = (uint)(*(uint *)((int)this + 0x60) < 9);
      local_180 = *(undefined4 *)((int)this + 0x68);
      if ((*(uint *)((int)this + 100) & 8) == 0) {
        if ((*(uint *)((int)this + 100) & 4) != 0) {
          local_184 = 0x20;
        }
      }
      else {
        local_184 = 0x10;
      }
      if (((*(uint *)((int)this + 100) & 3) != 0) && (local_17c != 0)) {
        if ((local_114 & 0x80) == 0) {
          local_180 = 1;
          local_17c = 0;
        }
        else {
          local_180 = 1;
          local_17c = 1;
        }
      }
      (**(code **)(*param_1 + 0x10))(param_1,FUN_0040587f,&local_184);
      if (local_178 == 0) {
        local_17c = 0;
        local_184 = 0x10;
        (**(code **)(*param_1 + 0x10))(param_1,FUN_0040587f,&local_184);
        if (local_178 == 0) {
          return -0x7fffbffb;
        }
      }
      (**(code **)(*param_1 + 0x24))(param_1,&local_190);
      (**(code **)(*local_190 + 0x90))(local_190,&local_8);
      (**(code **)(*local_190 + 8))(local_190);
      local_188 = (**(code **)(*local_8 + 0x18))(local_8,&local_84,(int)this + 0x6c,0);
      (**(code **)(*local_8 + 8))(local_8);
      if (-1 < local_188) {
        if (*(int *)((int)this + 0x70) == 0) {
          if (*(int *)((int)this + 0x74) == 0) {
            local_188 = 0;
          }
          else {
            local_188 = thunk_FUN_00405fd7((int)this);
          }
        }
        else {
          local_188 = thunk_FUN_004059ad((int)this);
        }
      }
    }
  }
  return local_188;
}

