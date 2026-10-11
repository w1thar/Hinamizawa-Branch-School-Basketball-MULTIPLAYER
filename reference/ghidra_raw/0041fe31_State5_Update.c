// State5_Update @ 0041fe31  size=5403

void __fastcall State5_Update(void *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined1 local_b0 [12];
  undefined1 local_a4 [12];
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
  if (*(int *)((int)param_1 + 0x3b8) == 5) {
    thunk_FUN_004087ee(*(int *)((int)param_1 + 0xc0));
    thunk_FUN_0042b0bb(param_1,1);
    *(undefined1 *)((int)param_1 + 0x398) = 0;
    *(undefined1 *)((int)param_1 + 0x3a5) = 1;
    *(undefined1 *)((int)param_1 + 0x3a4) = 1;
    *(undefined4 *)((int)param_1 + 0x39c) = 0;
    if (*(int *)((int)param_1 + 0x3b0) == 2) {
      *(undefined4 *)((int)param_1 + 0x3e0) = 0x43340000;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x3e0) = 0x43960000;
    }
    *(undefined1 *)((int)param_1 + 0x414) = 0;
    *(undefined4 *)((int)param_1 + 0x394) = 0;
    *(undefined4 *)((int)param_1 + 0x220) = 0x431b0000;
    *(undefined4 *)((int)param_1 + 0x260) = 0;
    *(undefined4 *)((int)param_1 + 0x250) = 0x3f333333;
    *(undefined4 *)((int)param_1 + 0x268) = 0xffffffff;
    *(undefined4 *)((int)param_1 + 0x41c) = 0;
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) = 0;
      thunk_FUN_0042df38(*(int *)((int)param_1 + local_8 * 4 + 0xd8));
      thunk_FUN_0042deb4(*(void **)((int)param_1 + local_8 * 4 + 0xd8),0);
      thunk_FUN_0042de30(*(void **)((int)param_1 + local_8 * 4 + 0xd8),0);
      thunk_FUN_0042ddac(*(void **)((int)param_1 + local_8 * 4 + 0xd8),0);
      thunk_FUN_0042dd29(*(void **)((int)param_1 + local_8 * 4 + 0xd8),0);
    }
    if (*(char *)((int)param_1 + 0x3a6) == '\0') {
      *(undefined4 *)((int)param_1 + 0x3d8) = 0;
      *(undefined4 *)((int)param_1 + 0x3dc) = 0;
      uVar6 = 0x4016b852;
      puVar3 = D3DVECTOR_ctor(local_74,0x40e00000,0,0xc0e00000);
      thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3e4) * 4 + 0xd8),
                         *puVar3,puVar3[1],puVar3[2],uVar6);
      uVar6 = 0x3f48f5c3;
      puVar3 = D3DVECTOR_ctor(local_80,0x40e00000,0,0x40e00000);
      thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 1000) * 4 + 0xd8),*puVar3
                         ,puVar3[1],puVar3[2],uVar6);
      uVar6 = 0xbfc91687;
      puVar3 = D3DVECTOR_ctor(local_8c,0xc0000000,0,0);
      thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8),
                         *puVar3,puVar3[1],puVar3[2],uVar6);
      uVar6 = 0xc016b852;
      puVar3 = D3DVECTOR_ctor(local_98,0xc0e00000,0,0xc0e00000);
      thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3f0) * 4 + 0xd8),
                         *puVar3,puVar3[1],puVar3[2],uVar6);
      uVar6 = 0xbf48f5c3;
      puVar3 = D3DVECTOR_ctor(local_a4,0xc0e00000,0,0x40e00000);
      thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3f4) * 4 + 0xd8),
                         *puVar3,puVar3[1],puVar3[2],uVar6);
      uVar6 = 0x3fc91687;
      puVar3 = D3DVECTOR_ctor(local_b0,0x40000000,0,0);
      thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8),
                         *puVar3,puVar3[1],puVar3[2],uVar6);
    }
    else {
      uVar6 = 0xc016b852;
      puVar3 = D3DVECTOR_ctor(local_14,0xc0e00000,0,0xc0e00000);
      thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3e4) * 4 + 0xd8),
                         *puVar3,puVar3[1],puVar3[2],uVar6);
      uVar6 = 0xbf48f5c3;
      puVar3 = D3DVECTOR_ctor(local_20,0xc0e00000,0,0x40e00000);
      thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 1000) * 4 + 0xd8),*puVar3
                         ,puVar3[1],puVar3[2],uVar6);
      uVar6 = 0x3fc91687;
      puVar3 = D3DVECTOR_ctor(local_2c,0x40000000,0,0);
      thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8),
                         *puVar3,puVar3[1],puVar3[2],uVar6);
      if (*(int *)((int)param_1 + 0x3b0) == 2) {
        uVar6 = 0;
        puVar3 = D3DVECTOR_ctor(local_38,0xc0000000,0,0x41b80000);
        thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3f0) * 4 + 0xd8),
                           *puVar3,puVar3[1],puVar3[2],uVar6);
        uVar6 = 0;
        puVar3 = D3DVECTOR_ctor(local_44,0x40000000,0,0x41b80000);
        thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3f4) * 4 + 0xd8),
                           *puVar3,puVar3[1],puVar3[2],uVar6);
      }
      else {
        uVar6 = 0x4016b852;
        puVar3 = D3DVECTOR_ctor(local_50,0x40e00000,0,0xc0e00000);
        thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3f0) * 4 + 0xd8),
                           *puVar3,puVar3[1],puVar3[2],uVar6);
        uVar6 = 0x3f48f5c3;
        puVar3 = D3DVECTOR_ctor(local_5c,0x40e00000,0,0x40e00000);
        thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3f4) * 4 + 0xd8),
                           *puVar3,puVar3[1],puVar3[2],uVar6);
      }
      uVar6 = 0xbfc91687;
      puVar3 = D3DVECTOR_ctor(local_68,0xc0000000,0,0);
      thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8),
                         *puVar3,puVar3[1],puVar3[2],uVar6);
    }
    *(undefined4 *)((int)param_1 + 0x3b8) = 0;
  }
  if (*(float *)((int)param_1 + 0x220) <= 65.0 || *(int *)((int)param_1 + 0x3b8) != 0) {
    if (*(float *)((int)param_1 + 0x220) <= 5.0 || *(int *)((int)param_1 + 0x3b8) != 0) {
      if (*(int *)((int)param_1 + 0x3b8) == 0) {
        *(undefined4 *)((int)param_1 + 0x390) = 0;
        thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),0);
        *(undefined4 *)((int)param_1 + 0x22c) = 0;
        for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
          *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) = 7;
        }
        *(undefined4 *)((int)param_1 + 0x3b8) = 1;
      }
      else if (*(float *)((int)param_1 + 0x390) <= 1.0 || *(int *)((int)param_1 + 0x3b8) != 1) {
        *(float *)((int)param_1 + 0x3e0) =
             *(float *)((int)param_1 + 0x3e0) - *(float *)((int)param_1 + 0x54);
        if (*(int *)((int)param_1 + 0x3b8) == 2 &&
            ((*(int *)((int)param_1 + 0x6c) == DAT_00452ed8 ||
             *(int *)((int)param_1 + 0x70) == DAT_00452ed8) ||
            *(int *)((int)param_1 + 0x74) == DAT_00452ed8)) {
          thunk_FUN_0043006a(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8));
          *(float *)((int)param_1 + 0x3a0) =
               *(float *)((int)param_1 + 0x3a0) + *(float *)((int)param_1 + 0x54);
          if (1.0 < *(float *)((int)param_1 + 0x3a0)) {
            *(undefined4 *)((int)param_1 + 0x3a0) = 0x3a83126f;
          }
        }
        if (*(int *)((int)param_1 + 0x3b8) == 2 &&
            ((*(int *)((int)param_1 + 0x6c) == DAT_00452ed4 ||
             *(int *)((int)param_1 + 0x70) == DAT_00452ed4) ||
            *(int *)((int)param_1 + 0x74) == DAT_00452ed4)) {
          thunk_FUN_004301cb(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8));
          *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8) + 0x18c) =
               *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8) + 0x16c
                         ) * *(float *)((int)param_1 + 0x3a0);
          thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),2);
          *(undefined4 *)((int)param_1 + 0x3b8) = 3;
        }
        if (*(int *)((int)param_1 + 0x3b8) == 3) {
          if (*(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8) + 0x15c)
              <= -0.001) {
            thunk_FUN_0042df38(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8));
            *(undefined4 *)((int)param_1 + 0x3b8) = 2;
            *(undefined4 *)
             (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8) + 0x15c) = 0;
          }
          else {
            *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8) + 0x18c) =
                 *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8) +
                           0x18c) - *(float *)((int)param_1 + 0x54) * 20.0;
            *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8) + 0x15c) =
                 *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8) +
                           0x18c) * *(float *)((int)param_1 + 0x54) +
                 *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8) +
                           0x15c);
          }
        }
        if (*(float *)((int)param_1 + 0x390) <= *(float *)((int)param_1 + 0x3bc) + 1.75) {
          if (1.2 < *(float *)((int)param_1 + 0x390)) {
            thunk_FUN_0043006a(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8));
          }
        }
        else {
          if (*(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x15c)
              < 0.1) {
            thunk_FUN_004301cb(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8));
            thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),2);
          }
          if (-0.001 < *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8)
                                 + 0x15c)) {
            *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x18c) =
                 *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) +
                           0x18c) - *(float *)((int)param_1 + 0x54) * 20.0;
            *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x15c) =
                 *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) +
                           0x18c) * *(float *)((int)param_1 + 0x54) +
                 *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) +
                           0x15c);
          }
          if (*(float *)((int)param_1 + 0x250) -
              *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x15c)
              < 5.0) {
            if (*(char *)((int)param_1 + 0x3a6) == '\0') {
              uVar4 = FUN_00433410();
              *(float *)((int)param_1 + 0x260) = -0.5 - ((float)(int)uVar4 * 2.0) / 32767.0;
            }
            else {
              uVar4 = FUN_00433410();
              *(float *)((int)param_1 + 0x260) = ((float)(int)uVar4 * 2.0) / 32767.0 + 0.5;
            }
            *(undefined4 *)((int)param_1 + 600) = 0x41000000;
            *(undefined4 *)((int)param_1 + 0x268) = 0xffffffff;
            *(undefined4 *)((int)param_1 + 0x3a0) = 0;
            thunk_FUN_0042df38(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8));
            thunk_FUN_0042df38(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8));
            *(undefined4 *)
             (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8) + 0x15c) = 0;
            *(undefined4 *)
             (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x15c) = 0;
            *(undefined4 *)
             (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8) + 400) = 0xf;
            if (*(int *)((int)param_1 + 0x3b0) == 2) {
              *(undefined4 *)
               (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 400) = 7;
            }
            else {
              *(undefined4 *)
               (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 400) = 0xf;
            }
            *(undefined4 *)((int)param_1 + 0x21c) = 0;
            *(undefined4 *)((int)param_1 + 0x220) = 0x41400000;
            *(undefined4 *)((int)param_1 + 0x224) = 0xc1a00000;
            *(undefined4 *)((int)param_1 + 0x228) = 0;
            *(undefined4 *)((int)param_1 + 0x22c) = 0xbf000000;
            *(undefined4 *)((int)param_1 + 0x230) = 0x3f800000;
            *(undefined4 *)((int)param_1 + 0x3b8) = 0;
            *(undefined4 *)((int)param_1 + 0x3ac) = 1;
            *(undefined4 *)((int)param_1 + 0x404) = *(undefined4 *)((int)param_1 + 0x3f8);
            *(undefined4 *)((int)param_1 + 0x40c) = 0;
            *(undefined1 *)((int)param_1 + 0x414) = 0;
            *(undefined4 *)((int)param_1 + 0x26c) = 6;
          }
          if (*(float *)((int)param_1 + 0x250) -
              *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8) + 0x15c)
              < 5.0) {
            if (*(char *)((int)param_1 + 0x3a6) == '\0') {
              uVar4 = FUN_00433410();
              *(float *)((int)param_1 + 0x260) = ((float)(int)uVar4 * 2.0) / 32767.0 + 0.5;
            }
            else {
              uVar4 = FUN_00433410();
              *(float *)((int)param_1 + 0x260) = -0.5 - ((float)(int)uVar4 * 2.0) / 32767.0;
            }
            *(undefined4 *)((int)param_1 + 600) = 0x41000000;
            *(undefined4 *)((int)param_1 + 0x268) = 0xffffffff;
            *(undefined4 *)((int)param_1 + 0x3a0) = 0;
            thunk_FUN_0042df38(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8));
            thunk_FUN_0042df38(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8));
            *(undefined4 *)
             (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8) + 0x15c) = 0;
            *(undefined4 *)
             (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x15c) = 0;
            *(undefined4 *)
             (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3ec) * 4 + 0xd8) + 400) = 0xf;
            *(undefined4 *)
             (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 400) = 0xf;
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
        }
      }
      else {
        *(undefined4 *)((int)param_1 + 0x3b8) = 2;
        thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),1);
        *(undefined4 *)((int)param_1 + 0x25c) = 0x41b80000;
        *(undefined4 *)((int)param_1 + 0x250) = 0x3f333333;
        *(undefined4 *)((int)param_1 + 0x3a0) = 0;
        *(undefined1 *)((int)param_1 + 0x3a7) = 1;
        if (*(int *)((int)param_1 + 0x3b0) == 1) {
          iVar2 = *(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8);
          uVar4 = FUN_00433410();
          *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x18c) =
               (((float)(int)uVar4 * 0.2) / 32767.0 + 0.85) * *(float *)(iVar2 + 0x16c);
        }
        else {
          iVar2 = *(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8);
          uVar4 = FUN_00433410();
          *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x18c) =
               (((float)(int)uVar4 * 0.2) / 32767.0 + 0.8) * *(float *)(iVar2 + 0x16c);
        }
        uVar4 = FUN_00433410();
        *(float *)((int)param_1 + 0x3bc) = ((float)(int)uVar4 * 0.2) / 32767.0;
      }
    }
    else {
      *(float *)((int)param_1 + 0x220) =
           *(float *)((int)param_1 + 0x220) - *(float *)((int)param_1 + 0x54) * 30.0;
      fVar1 = *(float *)((int)param_1 + 0x390);
      fVar5 = (float10)thunk_FUN_00404960(param_1);
      *(float *)((int)param_1 + 0x21c) = (float)(fVar5 * (float10)((fVar1 - 3.0) * 10.0));
      fVar1 = *(float *)((int)param_1 + 0x390);
      fVar5 = (float10)thunk_FUN_00404900(param_1);
      *(float *)((int)param_1 + 0x224) = (float)(fVar5 * (float10)((fVar1 - 3.0) * 10.0));
      *(float *)((int)param_1 + 0x228) = -*(float *)((int)param_1 + 0x21c);
      *(float *)((int)param_1 + 0x230) = -*(float *)((int)param_1 + 0x224);
      *(float *)((int)param_1 + 0x22c) = 5.0 - *(float *)((int)param_1 + 0x220);
    }
  }
  else {
    *(float *)((int)param_1 + 0x220) =
         *(float *)((int)param_1 + 0x220) - *(float *)((int)param_1 + 0x54) * 30.0;
    fVar5 = (float10)thunk_FUN_00404960(param_1);
    *(float *)((int)param_1 + 0x21c) = (float)(fVar5 * (float10)0.001);
    fVar5 = (float10)thunk_FUN_00404900(param_1);
    *(float *)((int)param_1 + 0x224) = (float)(fVar5 * (float10)0.001);
    *(float *)((int)param_1 + 0x228) = -*(float *)((int)param_1 + 0x21c);
    *(float *)((int)param_1 + 0x230) = -*(float *)((int)param_1 + 0x224);
    *(float *)((int)param_1 + 0x22c) = 5.0 - *(float *)((int)param_1 + 0x220);
  }
  return;
}

