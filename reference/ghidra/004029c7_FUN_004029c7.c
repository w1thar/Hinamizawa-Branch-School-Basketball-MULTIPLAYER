// FUN_004029c7 @ 004029c7  size=871

int * __cdecl FUN_004029c7(int *param_1,HANDLE param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  HDC local_1bc;
  code *local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  HDC local_1a8;
  int *local_1a4;
  undefined1 local_1a0 [4];
  uint local_19c;
  uint local_198;
  int *local_188;
  uint local_184;
  int local_180;
  undefined1 local_17c [92];
  uint local_120;
  undefined1 local_b8 [40];
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  uint local_84;
  uint local_80;
  uint local_74;
  undefined1 local_44 [12];
  int local_38;
  uint local_24;
  undefined4 local_20;
  uint local_10;
  int *local_c;
  int *local_8;
  
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,local_17c);
  if (iVar2 < 0) {
    local_188 = (int *)0x0;
  }
  else {
    GetObjectA(param_2,0x18,local_1a0);
    local_90 = local_19c;
    local_10 = local_198;
    _memset(&local_8c,0,0x7c);
    local_8c = 0x7c;
    local_88 = 0x121007;
    local_74 = param_3;
    local_24 = 0x401008;
    local_80 = local_90;
    local_84 = local_10;
    bVar1 = _IsEqualGUID(local_b8,&DAT_0044fca8);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      bVar1 = _IsEqualGUID(local_b8,&DAT_0044fc68);
      if (CONCAT31(extraout_var_00,bVar1) == 0) {
        local_24 = local_24 | 0x800;
      }
      else {
        local_20 = 0x10;
      }
    }
    else {
      local_20 = 0x10;
    }
    if ((local_120 & 2) != 0) {
      for (local_80 = 1; local_80 < local_90; local_80 = local_80 << 1) {
      }
      for (local_84 = 1; local_84 < local_10; local_84 = local_84 << 1) {
      }
    }
    if ((local_120 & 0x20) != 0) {
      if (local_84 < local_80) {
        local_84 = local_80;
      }
      else {
        local_80 = local_84;
      }
    }
    (**(code **)(*param_1 + 0x10))(param_1,FUN_00402f31,local_44);
    if (local_38 == 0) {
      local_188 = (int *)0x0;
    }
    else {
      (**(code **)(*param_1 + 0x24))(param_1,&local_1a4);
      (**(code **)(*local_1a4 + 0x90))(local_1a4,&local_8);
      (**(code **)(*local_1a4 + 8))(local_1a4);
      local_180 = (**(code **)(*local_8 + 0x18))(local_8,&local_8c,&local_188,0);
      if (local_180 < 0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_188 = (int *)0x0;
      }
      else {
        (**(code **)(*local_8 + 8))(local_8);
        local_c = local_188;
        local_1a8 = CreateCompatibleDC((HDC)0x0);
        if (local_1a8 == (HDC)0x0) {
          (**(code **)(*local_188 + 8))(local_188);
          local_188 = (int *)0x0;
        }
        else {
          SelectObject(local_1a8,param_2);
          for (local_184 = 0; local_184 < local_74; local_184 = local_184 + 1) {
            iVar2 = (**(code **)(*local_c + 0x44))(local_c,&local_1bc);
            if (-1 < iVar2) {
              BitBlt(local_1bc,0,0,(int)local_19c / (1 << ((byte)local_184 & 0x1f)),
                     (int)local_198 / (1 << ((byte)local_184 & 0x1f)),local_1a8,0,0,0xcc0020);
              (**(code **)(*local_c + 0x68))(local_c,local_1bc);
            }
            thunk_FUN_00402d2e(local_1a8,local_19c,local_198);
            local_1b8 = Vec3_Magnitude;
            local_1b4 = 0;
            local_1b0 = 0;
            local_1ac = 0;
            iVar2 = (**(code **)(*local_c + 0x30))(local_c,&local_1b8,&local_c);
            if (-1 < iVar2) {
              (**(code **)(*local_c + 8))(local_c);
            }
          }
          DeleteDC(local_1a8);
        }
      }
    }
  }
  return local_188;
}

