// Texture_Load @ 00406555  size=292

undefined4 __cdecl Texture_Load(LPCSTR param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *this;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 *local_40;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  uint local_1a;
  undefined4 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044cbdb;
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
        local_40 = (undefined4 *)0x0;
      }
      else {
        local_40 = thunk_FUN_004049ff(this,param_1,param_2,param_3);
      }
      local_8 = 0xffffffff;
      local_14 = local_40;
      if (local_40 == (undefined4 *)0x0) {
        uVar1 = 0x8007000e;
      }
      else {
        iVar3 = thunk_FUN_00404b37(local_40);
        if (iVar3 < 0) {
          if (local_14 != (undefined4 *)0x0) {
            thunk_FUN_00407170(local_14,1);
          }
          uVar1 = 0x80004005;
        }
        else {
          if (local_14[0x1c] != 0) {
            GetObjectA((HANDLE)local_14[0x1c],0x18,local_2c);
            local_14[0x15] = local_28;
            local_14[0x16] = local_24;
            local_14[0x18] = local_1a & 0xffff;
          }
          uVar1 = 0;
        }
      }
    }
    else {
      uVar1 = 0;
    }
  }
  *unaff_FS_OFFSET = local_10;
  return uVar1;
}

