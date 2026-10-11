// D3DTextr_CreateTextureFromFile @ 00406555  size=292

int __cdecl D3DTextr_CreateTextureFromFile(char *name,u32 stage,u32 flags)

{
  int iVar1;
  TexContainer *pTVar2;
  void *this;
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
  if (name == (char *)0x0) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    pTVar2 = D3DTextr_FindTexture(name);
    if (pTVar2 == (TexContainer *)0x0) {
      this = operator_new(0x78);
      local_8 = 0;
      if (this == (void *)0x0) {
        local_40 = (undefined4 *)0x0;
      }
      else {
        local_40 = thunk_FUN_004049ff(this,name,stage,flags);
      }
      local_8 = 0xffffffff;
      local_14 = local_40;
      if (local_40 == (undefined4 *)0x0) {
        iVar1 = -0x7ff8fff2;
      }
      else {
        iVar1 = thunk_FUN_00404b37(local_40);
        if (iVar1 < 0) {
          if (local_14 != (undefined4 *)0x0) {
            thunk_FUN_00407170(local_14,1);
          }
          iVar1 = -0x7fffbffb;
        }
        else {
          if (local_14[0x1c] != 0) {
            GetObjectA((HANDLE)local_14[0x1c],0x18,local_2c);
            local_14[0x15] = local_28;
            local_14[0x16] = local_24;
            local_14[0x18] = local_1a & 0xffff;
          }
          iVar1 = 0;
        }
      }
    }
    else {
      iVar1 = 0;
    }
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}

