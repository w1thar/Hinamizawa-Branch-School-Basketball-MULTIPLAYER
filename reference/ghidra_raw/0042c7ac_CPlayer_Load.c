// CPlayer_Load @ 0042c7ac  size=2023

void __thiscall CPlayer_Load(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_FS_OFFSET;
  int local_13c;
  undefined4 *local_138;
  int local_11c;
  undefined1 local_114 [256];
  int local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044cd8c;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  *(undefined4 *)((int)this + 0x150) = param_2;
  switch(*(undefined4 *)((int)this + 0x150)) {
  case 0:
    FUN_00434a40(local_114,&DAT_004543d4);
    *(undefined4 *)((int)this + 0x168) = 0x41200000;
    *(undefined4 *)((int)this + 0x16c) = 0x41700000;
    *(undefined4 *)((int)this + 0x170) = 0x40800000;
    *(undefined4 *)((int)this + 0x174) = 0x41000000;
    *(undefined4 *)((int)this + 0x178) = 0x41700000;
    *(undefined4 *)((int)this + 0x17c) = 0x41100000;
    *(undefined4 *)((int)this + 0x180) = 0x40a9999a;
    break;
  case 1:
    FUN_00434a40(local_114,&DAT_004543d8);
    *(undefined4 *)((int)this + 0x168) = 0x41200000;
    *(undefined4 *)((int)this + 0x16c) = 0x41700000;
    *(undefined4 *)((int)this + 0x170) = 0x4079999a;
    *(undefined4 *)((int)this + 0x174) = 0x40e00000;
    *(undefined4 *)((int)this + 0x178) = 0x41600000;
    *(undefined4 *)((int)this + 0x17c) = 0x41100000;
    *(undefined4 *)((int)this + 0x180) = 0x40a9999a;
    break;
  case 2:
    FUN_00434a40(local_114,&DAT_004543e0);
    *(undefined4 *)((int)this + 0x168) = 0x41100000;
    *(undefined4 *)((int)this + 0x16c) = 0x41800000;
    *(undefined4 *)((int)this + 0x170) = 0x4078f5c3;
    *(undefined4 *)((int)this + 0x174) = 0x40c00000;
    *(undefined4 *)((int)this + 0x178) = 0x41500000;
    *(undefined4 *)((int)this + 0x17c) = 0x41000000;
    *(undefined4 *)((int)this + 0x180) = 0x40a9999a;
    break;
  case 3:
    FUN_00434a40(local_114,(byte *)s_satoko_004543e8);
    *(undefined4 *)((int)this + 0x168) = 0x41280000;
    *(undefined4 *)((int)this + 0x16c) = 0x41500000;
    *(undefined4 *)((int)this + 0x170) = 0x40466666;
    *(undefined4 *)((int)this + 0x174) = 0x40a00000;
    *(undefined4 *)((int)this + 0x178) = 0x41400000;
    *(undefined4 *)((int)this + 0x17c) = 0x40800000;
    *(undefined4 *)((int)this + 0x180) = 0x4099999a;
    break;
  case 4:
    FUN_00434a40(local_114,&DAT_004543f0);
    *(undefined4 *)((int)this + 0x168) = 0x41000000;
    *(undefined4 *)((int)this + 0x16c) = 0x41400000;
    *(undefined4 *)((int)this + 0x170) = 0x40533333;
    *(undefined4 *)((int)this + 0x174) = 0x40a00000;
    *(undefined4 *)((int)this + 0x178) = 0x41400000;
    *(undefined4 *)((int)this + 0x17c) = 0x41400000;
    *(undefined4 *)((int)this + 0x180) = 0x4099999a;
    break;
  case 5:
    FUN_00434a40(local_114,&DAT_004543f8);
    *(undefined4 *)((int)this + 0x168) = 0x41100000;
    *(undefined4 *)((int)this + 0x16c) = 0x41700000;
    *(undefined4 *)((int)this + 0x170) = 0x4079999a;
    *(undefined4 *)((int)this + 0x174) = 0x40e00000;
    *(undefined4 *)((int)this + 0x178) = 0x41600000;
    *(undefined4 *)((int)this + 0x17c) = 0x41000000;
    *(undefined4 *)((int)this + 0x180) = 0x40a9999a;
  }
  puVar2 = (undefined4 *)operator_new(0x34);
  local_8 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    local_138 = (undefined4 *)0x0;
  }
  else {
    local_138 = thunk_FUN_00408f80(puVar2);
  }
  local_8 = 0xffffffff;
  *(undefined4 **)((int)this + 4) = local_138;
  thunk_FUN_004090bc();
  FUN_00434a40((undefined1 *)((int)this + 0x50),(byte *)s_basket__s_tga_00454400);
  Texture_Load((LPCSTR)((int)this + 0x50),0,0);
  uVar3 = operator_new(0x78);
  *(undefined4 *)((int)this + 0x4c) = uVar3;
  _memset(*(void **)((int)this + 0x4c),0,0x78);
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    iVar1 = *(int *)(*(int *)((int)this + 4) + 0x2c);
    local_13c = operator_new(iVar1 * 0x18);
    local_8 = 1;
    if (local_13c == 0) {
      local_13c = 0;
    }
    else {
      thunk_FUN_0040c3a0(local_13c,0x18,iVar1,&LAB_004010c8);
    }
    local_8 = 0xffffffff;
    *(int *)(*(int *)((int)this + 0x4c) + 8 + local_14 * 0xc) = local_13c;
    _memset(*(void **)(*(int *)((int)this + 0x4c) + 8 + local_14 * 0xc),0,
            *(int *)(*(int *)((int)this + 4) + 0x2c) * 0x18);
    for (local_11c = 0; local_11c < *(int *)(*(int *)((int)this + 4) + 0x2c);
        local_11c = local_11c + 1) {
      puVar2 = (undefined4 *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x90 + local_11c * 0xa8);
      puVar4 = (undefined4 *)
               (*(int *)(*(int *)((int)this + 0x4c) + 8 + local_14 * 0xc) + local_11c * 0x18);
      *puVar4 = *puVar2;
      puVar4[1] = puVar2[1];
      puVar4[2] = puVar2[2];
      puVar4 = (undefined4 *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x9c + local_11c * 0xa8);
      puVar2 = (undefined4 *)
               (*(int *)(*(int *)((int)this + 0x4c) + 8 + local_14 * 0xc) + 0xc + local_11c * 0x18);
      *puVar2 = *puVar4;
      puVar2[1] = puVar4[1];
      puVar2[2] = puVar4[2];
    }
    puVar2 = *(undefined4 **)(*(int *)((int)this + 0x4c) + 8 + local_14 * 0xc);
    *puVar2 = *(undefined4 *)((int)this + 0x158);
    puVar2[1] = *(undefined4 *)((int)this + 0x15c);
    puVar2[2] = *(undefined4 *)((int)this + 0x160);
    *(undefined4 *)(*(int *)(*(int *)((int)this + 0x4c) + 8 + local_14 * 0xc) + 0x10) =
         *(undefined4 *)((int)this + 0x164);
  }
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0x20);
  *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)((int)this + 0x158);
  *(undefined4 *)(iVar1 + 0x94) = *(undefined4 *)((int)this + 0x15c);
  *(undefined4 *)(iVar1 + 0x98) = *(undefined4 *)((int)this + 0x160);
  *(undefined4 *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa0) =
       *(undefined4 *)((int)this + 0x164);
  *(undefined4 *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0x9c) = 0;
  *(undefined4 *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa4) = 0;
  thunk_FUN_0042df38((int)this);
  _memset((void *)((int)this + 8),0,0x44);
  *(undefined4 *)((int)this + 8) = 0x3f4ccccd;
  *(undefined4 *)((int)this + 0xc) = 0x3f4ccccd;
  *(undefined4 *)((int)this + 0x10) = 0x3f4ccccd;
  *(undefined4 *)((int)this + 0x14) = 0x3f000000;
  *(undefined4 *)((int)this + 0x18) = 0x3f4ccccd;
  *(undefined4 *)((int)this + 0x1c) = 0x3f4ccccd;
  *(undefined4 *)((int)this + 0x20) = 0x3f4ccccd;
  *(undefined4 *)((int)this + 0x24) = 0x3f800000;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0x3f800000;
  *(undefined4 *)((int)this + 0x38) = 0x3dcccccd;
  *(undefined4 *)((int)this + 0x3c) = 0x3dcccccd;
  *(undefined4 *)((int)this + 0x40) = 0x3dcccccd;
  *(undefined4 *)((int)this + 0x48) = 0;
  *unaff_FS_OFFSET = local_10;
  return;
}

