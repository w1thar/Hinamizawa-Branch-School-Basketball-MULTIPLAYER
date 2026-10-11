// FUN_004066b5 @ 004066b5  size=246

undefined4 __cdecl
FUN_004066b5(LPCSTR param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *this;
  undefined4 *unaff_FS_OFFSET;
  undefined4 *local_20;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044cbf0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  if (param_1 == (LPCSTR)0x0) {
    uVar1 = 0x80070057;
  }
  else {
    puVar2 = FUN_00406679(param_1);
    if (puVar2 == (undefined4 *)0x0) {
      this = (void *)operator_new(0x78);
      local_8 = 0;
      if (this == (void *)0x0) {
        local_20 = (undefined4 *)0x0;
      }
      else {
        local_20 = thunk_FUN_004049ff(this,param_1,param_4,param_5);
      }
      if (local_20 == (undefined4 *)0x0) {
        uVar1 = 0x8007000e;
      }
      else {
        local_20[0x15] = param_2;
        local_20[0x16] = param_3;
        local_20[0x18] = 0x10;
        if ((local_20[0x19] & 4) != 0) {
          local_20[0x18] = 0x20;
        }
        if ((param_5 & 0x10) != 0) {
          local_20[0x1a] = 1;
        }
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0x80004005;
    }
  }
  *unaff_FS_OFFSET = local_10;
  return uVar1;
}

