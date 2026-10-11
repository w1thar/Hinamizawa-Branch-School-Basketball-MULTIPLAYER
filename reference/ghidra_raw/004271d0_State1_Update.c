// State1_Update @ 004271d0  size=677

void __fastcall State1_Update(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 local_50 [12];
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  int local_8;
  
  uVar2 = 0x3f847ae1;
  puVar1 = D3DVECTOR_ctor(local_14,0xc2200000,0,0xc1f00000);
  thunk_FUN_0042dcb7(*(void **)(param_1 + 0xd8),*puVar1,puVar1[1],puVar1[2],uVar2);
  uVar2 = 0x3f55c28f;
  puVar1 = D3DVECTOR_ctor(local_20,0xc2300000,0,0xc1d00000);
  thunk_FUN_0042dcb7(*(void **)(param_1 + 0xdc),*puVar1,puVar1[1],puVar1[2],uVar2);
  uVar2 = 0x3f3c28f6;
  puVar1 = D3DVECTOR_ctor(local_2c,0xc2380000,0,0xc1c00000);
  thunk_FUN_0042dcb7(*(void **)(param_1 + 0xe0),*puVar1,puVar1[1],puVar1[2],uVar2);
  uVar2 = 0x3f15c28f;
  puVar1 = D3DVECTOR_ctor(local_38,0xc2400000,0,0xc1b00000);
  thunk_FUN_0042dcb7(*(void **)(param_1 + 0xe4),*puVar1,puVar1[1],puVar1[2],uVar2);
  uVar2 = 0x3f628f5c;
  puVar1 = D3DVECTOR_ctor(local_44,0xc2280000,0,0xc1e00000);
  thunk_FUN_0042dcb7(*(void **)(param_1 + 0xe8),*puVar1,puVar1[1],puVar1[2],uVar2);
  uVar2 = 0x3ef851ec;
  puVar1 = D3DVECTOR_ctor(local_50,0xc2480000,0,0xc1a00000);
  thunk_FUN_0042dcb7(*(void **)(param_1 + 0xec),*puVar1,puVar1[1],puVar1[2],uVar2);
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    thunk_FUN_004312d5(*(int *)(param_1 + 0xd8 + local_8 * 4));
  }
  *(undefined4 *)(param_1 + 0x21c) = 0xc2400000;
  *(undefined4 *)(param_1 + 0x220) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x224) = 0xc1e00000;
  *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x250) = 0x40c00000;
  *(undefined4 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  thunk_FUN_0040878a(*(int *)(param_1 + 0xc0));
  *(undefined4 *)(param_1 + 0x394) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x390) = 0;
  *(undefined1 *)(param_1 + 0x3a4) = 0;
  *(undefined1 *)(param_1 + 0x3a7) = 0;
  *(undefined4 *)(param_1 + 0x3ac) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x26c) = 2;
  return;
}

