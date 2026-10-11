// State4_Update @ 0041e9c0  size=5233

void __fastcall State4_Update(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  undefined1 local_80 [12];
  undefined1 local_74 [12];
  undefined1 local_68 [12];
  undefined1 local_5c [12];
  undefined1 local_50 [12];
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  int local_8;
  
  *(float *)((int)param_1 + 0x390) =
       *(float *)((int)param_1 + 0x390) + *(float *)((int)param_1 + 0x54);
  *(float *)((int)param_1 + 0x260) =
       *(float *)((int)param_1 + 0x260) - *(float *)((int)param_1 + 0x54);
  if (*(int *)((int)param_1 + 0x3b8) < 3) {
    *(undefined4 *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3b4) * 4 + 0xd8) + 0x164) =
         *(undefined4 *)((int)param_1 + 0x390);
  }
  if (*(int *)((int)param_1 + 0x3b8) < 3 &&
      (*(int *)((int)param_1 + 100) == DAT_00452ed0 || *(int *)((int)param_1 + 0x80) == DAT_00452ed0
      )) {
    thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),2);
    uVar4 = 0;
    puVar2 = D3DVECTOR_ctor(local_14,0x40000000,0,0xc1f00000);
    thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3b4) * 4 + 0xd8),*puVar2,
                       puVar2[1],puVar2[2],uVar4);
    *(int *)((int)param_1 + 0x3b4) = *(int *)((int)param_1 + 0x3b4) + 1;
    if (5 < *(int *)((int)param_1 + 0x3b4)) {
      *(undefined4 *)((int)param_1 + 0x3b4) = 0;
    }
    while (*(char *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3b4) * 4 + 0xd8) + 0x154) !=
           '\0') {
      *(int *)((int)param_1 + 0x3b4) = *(int *)((int)param_1 + 0x3b4) + 1;
      if (5 < *(int *)((int)param_1 + 0x3b4)) {
        *(undefined4 *)((int)param_1 + 0x3b4) = 0;
      }
    }
    uVar4 = *(undefined4 *)((int)param_1 + 0x390);
    puVar2 = D3DVECTOR_ctor(local_20,0xc0000000,0,0xc1a00000);
    thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3b4) * 4 + 0xd8),*puVar2,
                       puVar2[1],puVar2[2],uVar4);
  }
  if (*(int *)((int)param_1 + 0x3b8) < 3 &&
      (*(int *)((int)param_1 + 0x60) == DAT_00452ed0 ||
      *(int *)((int)param_1 + 0x7c) == DAT_00452ed0)) {
    thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),2);
    uVar4 = 0;
    puVar2 = D3DVECTOR_ctor(local_2c,0x40000000,0,0xc1f00000);
    thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3b4) * 4 + 0xd8),*puVar2,
                       puVar2[1],puVar2[2],uVar4);
    *(int *)((int)param_1 + 0x3b4) = *(int *)((int)param_1 + 0x3b4) + -1;
    if (*(int *)((int)param_1 + 0x3b4) < 0) {
      *(undefined4 *)((int)param_1 + 0x3b4) = 5;
    }
    while (*(char *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3b4) * 4 + 0xd8) + 0x154) !=
           '\0') {
      *(int *)((int)param_1 + 0x3b4) = *(int *)((int)param_1 + 0x3b4) + -1;
      if (*(int *)((int)param_1 + 0x3b4) < 0) {
        *(undefined4 *)((int)param_1 + 0x3b4) = 5;
      }
    }
    uVar4 = *(undefined4 *)((int)param_1 + 0x390);
    puVar2 = D3DVECTOR_ctor(local_38,0xc0000000,0,0xc1a00000);
    thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3b4) * 4 + 0xd8),*puVar2,
                       puVar2[1],puVar2[2],uVar4);
  }
  if (*(int *)((int)param_1 + 0x3b8) < 3) {
    if (*(int *)((int)param_1 + 100) == DAT_00452ed8 ||
        *(int *)((int)param_1 + 0x80) == DAT_00452ed8) {
      *(undefined4 *)((int)param_1 + 0x39c) = 0xfffffffe;
    }
    else if (*(int *)((int)param_1 + 0x60) == DAT_00452ed8 ||
             *(int *)((int)param_1 + 0x7c) == DAT_00452ed8) {
      *(undefined4 *)((int)param_1 + 0x39c) = 0xfffffffd;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x39c) = 0xffffffff;
    }
  }
  else {
    *(undefined4 *)((int)param_1 + 0x39c) = 0;
  }
  if (*(int *)((int)param_1 + 0x3b8) < 3 &&
      ((((*(int *)((int)param_1 + 0x6c) == DAT_00452ed0 ||
         *(int *)((int)param_1 + 0x70) == DAT_00452ed0) ||
        *(int *)((int)param_1 + 0x74) == DAT_00452ed0) ||
       *(int *)((int)param_1 + 0x68) == DAT_00452ed0) ||
      *(int *)((int)param_1 + 0x88) == DAT_00452ed0)) {
    thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),4);
    if (*(int *)((int)param_1 + 0x3b8) < 2) {
      *(undefined1 *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3b4) * 4 + 0xd8) + 0x154) =
           1;
      fVar3 = (float10)thunk_FUN_0041b040(((float)*(int *)((int)param_1 + 0x3b8) * 6.0 + 3.0) - 2.0,
                                          -20.0);
      *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3b4) * 4 + 0xd8) + 0x164) =
           (float)fVar3;
      thunk_FUN_0042dfc0(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3b4) * 4 + 0xd8));
      if (*(int *)((int)param_1 + 0x3b8) == 0) {
        *(undefined4 *)((int)param_1 + 0x3c8) = *(undefined4 *)((int)param_1 + 0x3b4);
      }
      else {
        *(undefined4 *)((int)param_1 + 0x3c0) = *(undefined4 *)((int)param_1 + 0x3b4);
      }
      *(int *)((int)param_1 + 0x3b8) = *(int *)((int)param_1 + 0x3b8) + 1;
      *(int *)((int)param_1 + 0x3b4) = *(int *)((int)param_1 + 0x3b4) + 1;
      if (5 < *(int *)((int)param_1 + 0x3b4)) {
        *(undefined4 *)((int)param_1 + 0x3b4) = 0;
      }
      while (*(char *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3b4) * 4 + 0xd8) + 0x154)
             != '\0') {
        *(int *)((int)param_1 + 0x3b4) = *(int *)((int)param_1 + 0x3b4) + 1;
        if (5 < *(int *)((int)param_1 + 0x3b4)) {
          *(undefined4 *)((int)param_1 + 0x3b4) = 0;
        }
      }
      uVar4 = *(undefined4 *)((int)param_1 + 0x390);
      puVar2 = D3DVECTOR_ctor(local_44,0xc0000000,0,0xc1a00000);
      thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3b4) * 4 + 0xd8),
                         *puVar2,puVar2[1],puVar2[2],uVar4);
    }
    else {
      *(undefined1 *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3b4) * 4 + 0xd8) + 0x154) =
           1;
      fVar3 = (float10)thunk_FUN_0041b040(4.0,-20.0);
      *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3b4) * 4 + 0xd8) + 0x164) =
           (float)fVar3;
      thunk_FUN_0042dfc0(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3b4) * 4 + 0xd8));
      *(undefined4 *)((int)param_1 + 0x3c4) = *(undefined4 *)((int)param_1 + 0x3b4);
      *(undefined4 *)((int)param_1 + 0x3b8) = 0;
      for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
        if (*(char *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x154) == '\0') {
          fVar3 = (float10)thunk_FUN_0041b040((float)*(int *)((int)param_1 + 0x3b8) * 2.0 +
                                              (-3.0 - (float)*(int *)((int)param_1 + 0x3b8) * 3.0) +
                                              2.0,-30.0);
          fVar5 = (float)fVar3;
          puVar2 = D3DVECTOR_ctor(local_50,(float)*(int *)((int)param_1 + 0x3b8) * 2.0 + 2.0,0,
                                  0xc1f00000);
          thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_8 * 4 + 0xd8),*puVar2,puVar2[1],
                             puVar2[2],fVar5);
          thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_8 * 4 + 0xd8));
          *(int *)((int)param_1 + *(int *)((int)param_1 + 0x3b8) * 4 + 0x3cc) = local_8;
          *(int *)((int)param_1 + 0x3b8) = *(int *)((int)param_1 + 0x3b8) + 1;
        }
      }
      *(undefined4 *)((int)param_1 + 0x3b8) = 3;
    }
  }
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    if (2 < *(int *)((int)param_1 + 0x3b8) ||
        *(char *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x154) != '\0') {
      if (*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160) <= 0.0) {
        iVar1 = *(int *)((int)param_1 + local_8 * 4 + 0xd8);
        fVar3 = (float10)thunk_FUN_00404960(*(undefined4 *)
                                             (*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x164));
        *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158) =
             (float)((float10)*(float *)(iVar1 + 0x158) -
                    fVar3 * (float10)*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x168)
                    * (float10)*(float *)((int)param_1 + 0x54));
        iVar1 = *(int *)((int)param_1 + local_8 * 4 + 0xd8);
        fVar3 = (float10)thunk_FUN_00404900(*(undefined4 *)((int)param_1 + local_8 * 4 + 0xd8));
        *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160) =
             (float)((float10)*(float *)(iVar1 + 0x160) -
                    fVar3 * (float10)*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x168)
                    * (float10)*(float *)((int)param_1 + 0x54));
      }
      else {
        *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x164) = 0;
        thunk_FUN_0042df38(*(int *)((int)param_1 + local_8 * 4 + 0xd8));
      }
    }
  }
  if (2 < *(int *)((int)param_1 + 0x3b8) && *(float *)((int)param_1 + 0x224) <= -20.0) {
    *(float *)((int)param_1 + 0x224) =
         *(float *)((int)param_1 + 0x54) * 2.0 + *(float *)((int)param_1 + 0x224);
    *(float *)((int)param_1 + 0x220) =
         *(float *)((int)param_1 + 0x54) * 0.5 + *(float *)((int)param_1 + 0x220);
  }
  if (-20.0 < *(float *)((int)param_1 + 0x224) &&
      (*(int *)((int)param_1 + 0x58) == DAT_00452ed0 ||
      *(int *)((int)param_1 + 0x84) == DAT_00452ed0)) {
    *(undefined4 *)((int)param_1 + 0x3b8) = 3;
    thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),2);
  }
  if (-20.0 < *(float *)((int)param_1 + 0x224) &&
      (*(int *)((int)param_1 + 0x5c) == DAT_00452ed0 ||
      *(int *)((int)param_1 + 0x78) == DAT_00452ed0)) {
    *(undefined4 *)((int)param_1 + 0x3b8) = 4;
    thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),2);
  }
  if ((*(int *)((int)param_1 + 0x3b8) == 3 && -20.0 < *(float *)((int)param_1 + 0x224)) &&
      ((((*(int *)((int)param_1 + 0x6c) == DAT_00452ed0 ||
         *(int *)((int)param_1 + 0x70) == DAT_00452ed0) ||
        *(int *)((int)param_1 + 0x74) == DAT_00452ed0) ||
       *(int *)((int)param_1 + 0x68) == DAT_00452ed0) ||
      *(int *)((int)param_1 + 0x88) == DAT_00452ed0)) {
    thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),5);
    *(undefined4 *)((int)param_1 + 0x3b8) = 5;
    *(undefined4 *)((int)param_1 + 0x390) = 0;
    *(undefined4 *)((int)param_1 + 0x394) = 0x3f800000;
    if (*(int *)((int)param_1 + 0x3b0) == 2) {
      thunk_FUN_0040878a(*(int *)((int)param_1 + 0xc0));
    }
    else {
      thunk_FUN_0040878a(*(int *)((int)param_1 + 0xc0));
    }
  }
  if (*(int *)((int)param_1 + 0x3b8) == 4 &&
      ((((*(int *)((int)param_1 + 0x6c) == DAT_00452ed0 ||
         *(int *)((int)param_1 + 0x70) == DAT_00452ed0) ||
        *(int *)((int)param_1 + 0x74) == DAT_00452ed0) ||
       *(int *)((int)param_1 + 0x68) == DAT_00452ed0) ||
      *(int *)((int)param_1 + 0x88) == DAT_00452ed0)) {
    *(undefined4 *)((int)param_1 + 0x26c) = 1;
    thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),2);
  }
  if (-20.0 < *(float *)((int)param_1 + 0x224)) {
    *(undefined1 *)((int)param_1 + 0x3a4) = 1;
  }
  if ((*(int *)((int)param_1 + 0x3b8) == 5 && 1.0 < *(float *)((int)param_1 + 0x390)) &&
      *(char *)((int)param_1 + 0x398) == '\0') {
    *(undefined1 *)((int)param_1 + 0x398) = 1;
    thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),3);
  }
  if (*(int *)((int)param_1 + 0x3b8) == 5 && 3.0 < *(float *)((int)param_1 + 0x390)) {
    *(undefined1 *)((int)param_1 + 0x3a6) = 0;
    *(undefined4 *)((int)param_1 + 0x390) = 0;
    *(undefined4 *)((int)param_1 + 0x3b8) = 5;
    *(undefined4 *)((int)param_1 + 0x418) = 0;
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      *(undefined4 *)((int)param_1 + local_8 * 4 + 0x3e4) =
           *(undefined4 *)((int)param_1 + local_8 * 4 + 0x3c0);
    }
    while (*(int *)((int)param_1 + 0x3ec) == 3 || *(int *)((int)param_1 + 0x3ec) == 4) {
      *(undefined4 *)((int)param_1 + 0x3fc) = *(undefined4 *)((int)param_1 + 0x3ec);
      *(undefined4 *)((int)param_1 + 0x3ec) = *(undefined4 *)((int)param_1 + 1000);
      *(undefined4 *)((int)param_1 + 1000) = *(undefined4 *)((int)param_1 + 0x3e4);
      *(undefined4 *)((int)param_1 + 0x3e4) = *(undefined4 *)((int)param_1 + 0x3fc);
    }
    while (*(int *)((int)param_1 + 0x3f8) == 3 || *(int *)((int)param_1 + 0x3f8) == 4) {
      *(undefined4 *)((int)param_1 + 0x3fc) = *(undefined4 *)((int)param_1 + 0x3f8);
      *(undefined4 *)((int)param_1 + 0x3f8) = *(undefined4 *)((int)param_1 + 0x3f4);
      *(undefined4 *)((int)param_1 + 0x3f4) = *(undefined4 *)((int)param_1 + 0x3f0);
      *(undefined4 *)((int)param_1 + 0x3f0) = *(undefined4 *)((int)param_1 + 0x3fc);
    }
    if (*(int *)((int)param_1 + 0x3b0) == 2) {
      uVar4 = 0xc016b852;
      puVar2 = D3DVECTOR_ctor(local_5c,0xc0e00000,0,0xc0e00000);
      thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3e4) * 4 + 0xd8),
                         *puVar2,puVar2[1],puVar2[2],uVar4);
      uVar4 = 0xbf48f5c3;
      puVar2 = D3DVECTOR_ctor(local_68,0xc0e00000,0,0x40e00000);
      thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 1000) * 4 + 0xd8),*puVar2
                         ,puVar2[1],puVar2[2],uVar4);
      uVar4 = 0x3fc91687;
      puVar2 = D3DVECTOR_ctor(local_74,0x40000000,0,0);
      thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8),
                         *puVar2,puVar2[1],puVar2[2],uVar4);
      uVar4 = 0;
      puVar2 = D3DVECTOR_ctor(local_80,0,0,0x41b80000);
      thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3f0) * 4 + 0xd8),
                         *puVar2,puVar2[1],puVar2[2],uVar4);
      uVar4 = 0;
      puVar2 = D3DVECTOR_ctor(local_8c,0xc0400000,0,0x41b80000);
      thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3f4) * 4 + 0xd8),
                         *puVar2,puVar2[1],puVar2[2],uVar4);
      uVar4 = 0;
      puVar2 = D3DVECTOR_ctor(local_98,0x40400000,0,0x41b80000);
      thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8),
                         *puVar2,puVar2[1],puVar2[2],uVar4);
      thunk_FUN_004087ee(*(int *)((int)param_1 + 0xc0));
      thunk_FUN_0042b0bb(param_1,1);
      *(undefined1 *)((int)param_1 + 0x398) = 0;
      *(undefined1 *)((int)param_1 + 0x3a5) = 1;
      *(undefined1 *)((int)param_1 + 0x3a4) = 1;
      *(undefined1 *)((int)param_1 + 0x3a7) = 1;
      *(undefined4 *)((int)param_1 + 0x39c) = 0;
      *(undefined4 *)((int)param_1 + 0x3e0) = 0x42b40000;
      *(undefined1 *)((int)param_1 + 0x414) = 0;
      *(undefined4 *)((int)param_1 + 0x394) = 0;
      *(undefined4 *)((int)param_1 + 0x260) = 0;
      *(undefined4 *)((int)param_1 + 600) = 0;
      *(undefined4 *)((int)param_1 + 0x268) = *(undefined4 *)((int)param_1 + 0x3ec);
      *(undefined4 *)((int)param_1 + 0x3a0) = 0;
      for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
        thunk_FUN_0042df38(*(int *)((int)param_1 +
                                   *(int *)((int)param_1 + local_8 * 4 + 0x3e4) * 4 + 0xd8));
        *(undefined4 *)
         (*(int *)((int)param_1 + *(int *)((int)param_1 + local_8 * 4 + 0x3e4) * 4 + 0xd8) + 400) =
             7;
      }
      *(undefined4 *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8) + 400) = 0;
      *(undefined4 *)((int)param_1 + 0x21c) = 0;
      *(undefined4 *)((int)param_1 + 0x220) = 0x41400000;
      *(undefined4 *)((int)param_1 + 0x224) = 0xc1a00000;
      *(undefined4 *)((int)param_1 + 0x228) = 0;
      *(undefined4 *)((int)param_1 + 0x22c) = 0xbf000000;
      *(undefined4 *)((int)param_1 + 0x230) = 0x3f800000;
      *(undefined4 *)((int)param_1 + 0x3b8) = 0;
      *(undefined4 *)((int)param_1 + 0x3ac) = 1;
      *(undefined4 *)((int)param_1 + 0x404) = *(undefined4 *)((int)param_1 + 0x3ec);
      *(undefined4 *)((int)param_1 + 0x40c) = 0;
      *(undefined1 *)((int)param_1 + 0x414) = 0;
      *(undefined4 *)((int)param_1 + 0x26c) = 6;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x26c) = 5;
    }
  }
  return;
}

