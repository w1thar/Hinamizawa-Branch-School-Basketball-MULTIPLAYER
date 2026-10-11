// State3_Update @ 00427e4d  size=1604

void __fastcall State3_Update(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  *(float *)(param_1 + 0x390) = *(float *)(param_1 + 0x390) + *(float *)(param_1 + 0x54);
  if ((*(float *)(param_1 + 0x250) < 1.0 && -1.0 < *(float *)(param_1 + 0x25c)) &&
      *(float *)(param_1 + 0x25c) < 7.0) {
    *(undefined4 *)(param_1 + 0x25c) = 0x41c80000;
  }
  if ((*(int *)(param_1 + 0x58) == DAT_00454158 || *(int *)(param_1 + 0x84) == DAT_00454158) &&
     (0 < *(int *)(param_1 + 0x3b0))) {
    *(int *)(param_1 + 0x3b0) = *(int *)(param_1 + 0x3b0) + -1;
    thunk_FUN_00408716(*(void **)(param_1 + 0xc0),2);
    if (*(int *)(param_1 + 0x3b0) == 0) {
      for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
        thunk_FUN_0042dd29(*(void **)(param_1 + 0xd8 + local_8 * 4),0);
        thunk_FUN_0042ddac(*(void **)(param_1 + 0xd8 + local_8 * 4),0);
        thunk_FUN_0042de30(*(void **)(param_1 + 0xd8 + local_8 * 4),0);
        thunk_FUN_0042deb4(*(void **)(param_1 + 0xd8 + local_8 * 4),0);
        *(undefined4 *)(param_1 + 0x400) = 0x40800000;
      }
    }
    if (*(int *)(param_1 + 0x3b0) == 1) {
      for (local_c = 0; local_c < 6; local_c = local_c + 1) {
        thunk_FUN_0042dd29(*(void **)(param_1 + 0xd8 + local_c * 4),0);
        thunk_FUN_0042ddac(*(void **)(param_1 + 0xd8 + local_c * 4),1);
        thunk_FUN_0042de30(*(void **)(param_1 + 0xd8 + local_c * 4),1);
        thunk_FUN_0042deb4(*(void **)(param_1 + 0xd8 + local_c * 4),-1);
        *(undefined4 *)(param_1 + 0x400) = 0x40800000;
      }
    }
  }
  if ((*(int *)(param_1 + 0x5c) == DAT_00454158 || *(int *)(param_1 + 0x78) == DAT_00454158) &&
     (*(int *)(param_1 + 0x3b0) < 2)) {
    *(int *)(param_1 + 0x3b0) = *(int *)(param_1 + 0x3b0) + 1;
    thunk_FUN_00408716(*(void **)(param_1 + 0xc0),2);
    if (*(int *)(param_1 + 0x3b0) == 1) {
      for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
        thunk_FUN_0042dd29(*(void **)(param_1 + 0xd8 + local_10 * 4),0);
        thunk_FUN_0042ddac(*(void **)(param_1 + 0xd8 + local_10 * 4),1);
        thunk_FUN_0042de30(*(void **)(param_1 + 0xd8 + local_10 * 4),1);
        thunk_FUN_0042deb4(*(void **)(param_1 + 0xd8 + local_10 * 4),-1);
        *(undefined4 *)(param_1 + 0x400) = 0x40800000;
      }
    }
    if (*(int *)(param_1 + 0x3b0) == 2) {
      for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
        thunk_FUN_0042dd29(*(void **)(param_1 + 0xd8 + local_14 * 4),1);
        thunk_FUN_0042ddac(*(void **)(param_1 + 0xd8 + local_14 * 4),0);
        thunk_FUN_0042de30(*(void **)(param_1 + 0xd8 + local_14 * 4),0);
        thunk_FUN_0042deb4(*(void **)(param_1 + 0xd8 + local_14 * 4),0);
        *(undefined4 *)(param_1 + 0x400) = 0x40800000;
      }
    }
  }
  if ((((*(int *)(param_1 + 0x6c) == DAT_00454158 || *(int *)(param_1 + 0x70) == DAT_00454158) ||
       *(int *)(param_1 + 0x74) == DAT_00454158) || *(int *)(param_1 + 0x68) == DAT_00454158) ||
      *(int *)(param_1 + 0x88) == DAT_00454158) {
    thunk_FUN_00408716(*(void **)(param_1 + 0xc0),1);
    *(undefined4 *)(param_1 + 0x390) = 0;
    *(undefined4 *)(param_1 + 0x394) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x39a) = 0;
    thunk_FUN_0040878a(*(int *)(param_1 + 0xc0));
  }
  if (*(char *)(param_1 + 0x39a) == '\0' && 0.5 < *(float *)(param_1 + 0x390)) {
    *(undefined4 *)(param_1 + 0x21c) = 0;
    *(undefined4 *)(param_1 + 0x224) = 0xc1f00000;
    *(undefined4 *)(param_1 + 0x220) = 0x40600000;
    *(undefined4 *)(param_1 + 0x228) = 0;
    *(undefined4 *)(param_1 + 0x22c) = 0;
    *(undefined4 *)(param_1 + 0x230) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x390) = 0;
    *(undefined4 *)(param_1 + 0x394) = 0;
    *(undefined4 *)(param_1 + 0x250) = 0x3f333333;
    *(undefined4 *)(param_1 + 0x25c) = 0;
    *(undefined4 *)(param_1 + 0x26c) = 4;
    *(undefined4 *)(param_1 + 0x3b8) = 0;
    thunk_FUN_004087ee(*(int *)(param_1 + 0xc0));
    for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
      thunk_FUN_0042dd29(*(void **)(param_1 + 0xd8 + local_18 * 4),0);
      thunk_FUN_0042ddac(*(void **)(param_1 + 0xd8 + local_18 * 4),0);
      thunk_FUN_0042de30(*(void **)(param_1 + 0xd8 + local_18 * 4),0);
      thunk_FUN_0042deb4(*(void **)(param_1 + 0xd8 + local_18 * 4),0);
      thunk_FUN_0042df38(*(int *)(param_1 + 0xd8 + local_18 * 4));
      uVar2 = 0;
      puVar1 = D3DVECTOR_ctor(local_24,0x40000000,0,0xc1f00000);
      thunk_FUN_0042dcb7(*(void **)(param_1 + 0xd8 + local_18 * 4),*puVar1,puVar1[1],puVar1[2],uVar2
                        );
      *(undefined1 *)(*(int *)(param_1 + 0xd8 + local_18 * 4) + 0x154) = 0;
      *(undefined4 *)(param_1 + 0x3b4) = 0;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x390);
    puVar1 = D3DVECTOR_ctor(local_30,0xc0000000,0,0xc1a00000);
    thunk_FUN_0042dcb7(*(void **)(param_1 + 0xd8 + *(int *)(param_1 + 0x3b4) * 4),*puVar1,puVar1[1],
                       puVar1[2],uVar2);
  }
  return;
}

