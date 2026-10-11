// State9_Update @ 00423d53  size=3101

void __fastcall State9_Update(int param_1)

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
  
  *(float *)(param_1 + 0x390) = *(float *)(param_1 + 0x390) + *(float *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x3b8) == 0) {
    *(undefined4 *)(param_1 + 0x390) = 0;
    *(undefined1 *)(param_1 + 0x3a5) = 0;
    *(undefined1 *)(param_1 + 0x3a4) = 0;
    *(undefined1 *)(param_1 + 0x3a6) = 0;
    *(undefined1 *)(param_1 + 0x398) = 0;
    *(undefined1 *)(param_1 + 0x399) = 0;
    *(undefined4 *)(param_1 + 0x3ac) = 0;
    *(undefined4 *)(param_1 + 0x394) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x234) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x238) = 0xbf4ccccd;
    *(undefined4 *)(param_1 + 0x23c) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x234);
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x238);
    *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x23c);
    *(undefined4 *)(param_1 + 0x138) = 0x3f4ccccd;
    *(undefined4 *)(param_1 + 0x13c) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x140) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x158) = 0x3f000000;
    *(undefined4 *)(param_1 + 0x15c) = 0x3e99999a;
    *(undefined4 *)(param_1 + 0x160) = 0x3e99999a;
    *(undefined4 *)(param_1 + 0x1dc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    *(float *)(param_1 + 0x1ec) = -*(float *)(param_1 + 0x234) / *(float *)(param_1 + 0x238);
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *(float *)(param_1 + 500) = -*(float *)(param_1 + 0x23c) / *(float *)(param_1 + 0x238);
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    *(undefined4 *)(param_1 + 0x1fc) = 0;
    *(undefined4 *)(param_1 + 0x200) = 0;
    *(undefined4 *)(param_1 + 0x204) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x208) = 0;
    *(undefined4 *)(param_1 + 0x20c) = 0;
    *(undefined4 *)(param_1 + 0x210) = 0x3d4ccccd;
    *(undefined4 *)(param_1 + 0x214) = 0;
    *(undefined4 *)(param_1 + 0x218) = 0x3f800000;
    thunk_FUN_0040878a(*(int *)(param_1 + 0xc0));
    uVar2 = 0;
    puVar1 = D3DVECTOR_ctor(local_14,0,0,0x41880000);
    thunk_FUN_0042dcb7(*(void **)(param_1 + 0xd8),*puVar1,puVar1[1],puVar1[2],uVar2);
    uVar2 = 0xbe4ccccd;
    puVar1 = D3DVECTOR_ctor(local_20,0xc0400000,0,0x41880000);
    thunk_FUN_0042dcb7(*(void **)(param_1 + 0xdc),*puVar1,puVar1[1],puVar1[2],uVar2);
    uVar2 = 0x4048f5c3;
    puVar1 = D3DVECTOR_ctor(local_2c,0xbf800000,0,0x41000000);
    thunk_FUN_0042dcb7(*(void **)(param_1 + 0xe0),*puVar1,puVar1[1],puVar1[2],uVar2);
    uVar2 = 0xbf800000;
    puVar1 = D3DVECTOR_ctor(local_38,0xc0a00000,0,0x41700000);
    thunk_FUN_0042dcb7(*(void **)(param_1 + 0xe4),*puVar1,puVar1[1],puVar1[2],uVar2);
    uVar2 = 0x40000000;
    puVar1 = D3DVECTOR_ctor(local_44,0x40800000,0,0x41400000);
    thunk_FUN_0042dcb7(*(void **)(param_1 + 0xe8),*puVar1,puVar1[1],puVar1[2],uVar2);
    uVar2 = 0x3f000000;
    puVar1 = D3DVECTOR_ctor(local_50,0x40400000,0,0x41800000);
    thunk_FUN_0042dcb7(*(void **)(param_1 + 0xec),*puVar1,puVar1[1],puVar1[2],uVar2);
    thunk_FUN_00430c40(*(int *)(param_1 + 0xd8));
    thunk_FUN_00430c40(*(int *)(param_1 + 0xdc));
    thunk_FUN_00430c40(*(int *)(param_1 + 0xe0));
    thunk_FUN_0042df38(*(int *)(param_1 + 0xe4));
    thunk_FUN_0042df38(*(int *)(param_1 + 0xe8));
    thunk_FUN_00430c40(*(int *)(param_1 + 0xec));
    *(undefined4 *)(param_1 + 0x21c) = 0x41a00000;
    *(undefined4 *)(param_1 + 0x220) = 0x41200000;
    *(undefined4 *)(param_1 + 0x224) = 0xc2640000;
    *(undefined4 *)(param_1 + 0x228) = 0xbedc28f6;
    *(undefined4 *)(param_1 + 0x22c) = 0;
    *(undefined4 *)(param_1 + 0x230) = 0x3f666666;
    *(undefined4 *)(param_1 + 0x24c) = 0;
    *(undefined4 *)(param_1 + 0x250) = 0x3f333333;
    *(undefined4 *)(param_1 + 0x254) = 0;
    *(undefined4 *)(param_1 + 0x25c) = 0;
    *(undefined4 *)(param_1 + 600) = 0;
    *(undefined4 *)(param_1 + 0x268) = 0;
    *(undefined4 *)(param_1 + 0x3b8) = 1;
  }
  else if (*(int *)(param_1 + 0x3b8) != 1 || *(float *)(param_1 + 0x390) <= 1.0) {
    if (*(int *)(param_1 + 0x3b8) != 2 || *(float *)(param_1 + 0x390) <= 265.0) {
      if (*(int *)(param_1 + 0x3b8) == 3) {
        *(float *)(param_1 + 0x394) = *(float *)(param_1 + 0x54) * 0.2 + *(float *)(param_1 + 0x394)
        ;
        if (1.0 < *(float *)(param_1 + 0x394)) {
          *(undefined4 *)(param_1 + 0x394) = 0x3f800000;
          *(undefined4 *)(param_1 + 0x3b8) = 4;
        }
      }
      else if (*(int *)(param_1 + 0x3b8) == 4) {
        thunk_FUN_0040882a(*(int *)(param_1 + 0xc0));
        *(undefined4 *)(param_1 + 0x394) = 0x3f800000;
        thunk_FUN_0040878a(*(int *)(param_1 + 0xc0));
        for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
          thunk_FUN_0042ddac(*(void **)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4
                                       ),0);
          thunk_FUN_0042de30(*(void **)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4
                                       ),0);
        }
        *(undefined4 *)(param_1 + 0x21c) = 0;
        *(undefined4 *)(param_1 + 0x220) = 0;
        *(undefined4 *)(param_1 + 0x224) = 0;
        *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x22c) = 0;
        *(undefined4 *)(param_1 + 0x230) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x234) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x238) = 0xbf800000;
        *(undefined4 *)(param_1 + 0x23c) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x234);
        *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x238);
        *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x23c);
        *(undefined4 *)(param_1 + 0x138) = 0x3f4ccccd;
        *(undefined4 *)(param_1 + 0x13c) = 0x3f4ccccd;
        *(undefined4 *)(param_1 + 0x140) = 0x3f4ccccd;
        *(undefined4 *)(param_1 + 0x158) = 0x3f000000;
        *(undefined4 *)(param_1 + 0x15c) = 0x3f000000;
        *(undefined4 *)(param_1 + 0x160) = 0x3f000000;
        *(undefined4 *)(param_1 + 0x1dc) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x1e0) = 0;
        *(undefined4 *)(param_1 + 0x1e4) = 0;
        *(undefined4 *)(param_1 + 0x1e8) = 0;
        *(float *)(param_1 + 0x1ec) = -*(float *)(param_1 + 0x234) / *(float *)(param_1 + 0x238);
        *(undefined4 *)(param_1 + 0x1f0) = 0;
        *(float *)(param_1 + 500) = -*(float *)(param_1 + 0x23c) / *(float *)(param_1 + 0x238);
        *(undefined4 *)(param_1 + 0x1f8) = 0;
        *(undefined4 *)(param_1 + 0x1fc) = 0;
        *(undefined4 *)(param_1 + 0x200) = 0;
        *(undefined4 *)(param_1 + 0x204) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x208) = 0;
        *(undefined4 *)(param_1 + 0x20c) = 0;
        *(undefined4 *)(param_1 + 0x210) = 0x3d4ccccd;
        *(undefined4 *)(param_1 + 0x214) = 0;
        *(undefined4 *)(param_1 + 0x218) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x240) = 0;
        *(undefined4 *)(param_1 + 0x244) = 0x40c00000;
        *(undefined4 *)(param_1 + 0x248) = 0;
        *(undefined4 *)(param_1 + 0x24c) = 0;
        *(undefined4 *)(param_1 + 0x250) = 0x40c00000;
        *(undefined4 *)(param_1 + 0x254) = 0;
        *(undefined4 *)(param_1 + 0x260) = 0;
        *(undefined4 *)(param_1 + 0x264) = 0;
        *(undefined4 *)(param_1 + 600) = 0;
        *(undefined4 *)(param_1 + 0x25c) = 0;
        *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x370) = 0;
        *(undefined4 *)(param_1 + 0x374) = 0;
        *(undefined4 *)(param_1 + 0x378) = 0;
        *(undefined4 *)(param_1 + 0x234) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x238) = 0xbf800000;
        *(undefined4 *)(param_1 + 0x23c) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x37c) = 0;
        *(undefined4 *)(param_1 + 0x380) = 0;
        *(undefined4 *)(param_1 + 900) = 0;
        *(undefined4 *)(param_1 + 0x390) = 0;
        *(undefined4 *)(param_1 + 0x394) = 0x3f800000;
        *(undefined1 *)(param_1 + 0x398) = 0;
        *(undefined1 *)(param_1 + 0x399) = 0;
        *(undefined1 *)(param_1 + 0x39a) = 0;
        *(undefined1 *)(param_1 + 0x3a4) = 0;
        *(undefined1 *)(param_1 + 0x3a5) = 0;
        *(undefined1 *)(param_1 + 0x3a6) = 0;
        *(undefined1 *)(param_1 + 0x3a7) = 0;
        *(undefined4 *)(param_1 + 0x3ac) = 0;
        *(undefined4 *)(param_1 + 0x3b8) = 0;
        *(undefined4 *)(param_1 + 0x3bc) = 0;
        *(undefined4 *)(param_1 + 0x39c) = 0;
        *(undefined4 *)(param_1 + 0x3a0) = 0xbf800000;
        *(undefined4 *)(param_1 + 0x3b0) = 0;
        *(undefined4 *)(param_1 + 0x3b4) = 0;
        *(undefined4 *)(param_1 + 0x3e0) = 0x43960000;
        *(undefined4 *)(param_1 + 0x3d8) = 0;
        *(undefined4 *)(param_1 + 0x3dc) = 0;
        *(undefined4 *)(param_1 + 0x400) = 0x40800000;
        *(undefined4 *)(param_1 + 0x40c) = 0;
        *(undefined1 *)(param_1 + 0x414) = 0;
        *(undefined4 *)(param_1 + 0x418) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x26c) = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x3b8) = 3;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3b8) = 2;
    *(undefined4 *)(param_1 + 0x394) = 0;
    thunk_FUN_004087ee(*(int *)(param_1 + 0xc0));
    *(undefined4 *)(param_1 + 0x390) = 0;
  }
  if (*(int *)(param_1 + 0x3b8) == 2) {
    *(float *)(param_1 + 0x238) =
         *(float *)(param_1 + 0x54) * 0.002222 + *(float *)(param_1 + 0x238);
    *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x234);
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x238);
    *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x23c);
    *(float *)(param_1 + 0x158) =
         *(float *)(param_1 + 0x158) - *(float *)(param_1 + 0x54) * 0.00074074;
    *(float *)(param_1 + 0x15c) =
         *(float *)(param_1 + 0x15c) - *(float *)(param_1 + 0x54) * 0.00037037;
    *(float *)(param_1 + 0x160) =
         *(float *)(param_1 + 0x160) - *(float *)(param_1 + 0x54) * 0.00037037;
    *(undefined4 *)(param_1 + 0x1dc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    *(float *)(param_1 + 0x1ec) = -*(float *)(param_1 + 0x234) / *(float *)(param_1 + 0x238);
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *(float *)(param_1 + 500) = -*(float *)(param_1 + 0x23c) / *(float *)(param_1 + 0x238);
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    *(undefined4 *)(param_1 + 0x1fc) = 0;
    *(undefined4 *)(param_1 + 0x200) = 0;
    *(undefined4 *)(param_1 + 0x204) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x208) = 0;
    *(undefined4 *)(param_1 + 0x20c) = 0;
    *(undefined4 *)(param_1 + 0x210) = 0x3d4ccccd;
    *(undefined4 *)(param_1 + 0x214) = 0;
    *(undefined4 *)(param_1 + 0x218) = 0x3f800000;
  }
  if ((*(int *)(param_1 + 0x6c) == DAT_004540c0 || *(int *)(param_1 + 0x70) == DAT_004540c0) ||
      *(int *)(param_1 + 0x74) == DAT_004540c0) {
    *(undefined4 *)(param_1 + 0x3b8) = 3;
  }
  return;
}

