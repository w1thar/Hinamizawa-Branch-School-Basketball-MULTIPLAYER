// State6_Update @ 0040e400  size=46548

void __fastcall State6_Update(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  longlong lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float local_66c [3];
  float local_660 [3];
  float local_654 [3];
  float local_648 [3];
  float local_63c [3];
  float local_630 [3];
  float local_624 [3];
  float local_618 [3];
  float local_60c [3];
  float local_600 [3];
  float local_5f4 [3];
  float local_5e8 [3];
  float local_5dc [3];
  float local_5d0 [3];
  float local_5c4 [3];
  float local_5b8 [3];
  float local_5ac [3];
  float local_5a0 [3];
  float local_594 [3];
  float local_588 [3];
  float local_57c [3];
  float local_570 [3];
  float local_564 [3];
  float local_558 [3];
  float local_54c [3];
  float local_540 [3];
  float local_534 [3];
  float local_528 [3];
  float local_51c [3];
  float local_510 [3];
  float local_504 [3];
  float local_4f8 [3];
  float local_4ec [3];
  float local_4e0 [3];
  float local_4d4 [3];
  float local_4c8 [3];
  float local_4bc [3];
  float local_4b0 [3];
  float local_4a4 [3];
  float local_498 [3];
  float local_48c [3];
  float local_480 [3];
  float local_474 [3];
  float local_468 [3];
  float local_45c [3];
  float local_450 [3];
  float local_444 [3];
  float local_438 [3];
  float local_42c [3];
  float local_420 [3];
  float local_414 [3];
  float local_408 [3];
  float local_3fc [3];
  float local_3f0 [3];
  float local_3e4 [3];
  float local_3d8 [3];
  float local_3cc [3];
  float local_3c0 [3];
  float local_3b4 [3];
  float local_3a8 [3];
  float local_39c [3];
  float local_390 [3];
  float local_384 [3];
  float local_378 [3];
  float local_36c [3];
  undefined1 local_360 [12];
  undefined1 local_354 [12];
  undefined1 local_348 [12];
  undefined1 local_33c [12];
  undefined1 local_330 [12];
  undefined1 local_324 [12];
  undefined1 local_318 [12];
  undefined1 local_30c [12];
  undefined1 local_300 [12];
  undefined1 local_2f4 [12];
  undefined1 local_2e8 [12];
  undefined1 local_2dc [12];
  undefined1 local_2d0 [12];
  undefined1 local_2c4 [12];
  undefined1 local_2b8 [12];
  undefined1 local_2ac [12];
  undefined1 local_2a0 [12];
  undefined1 local_294 [12];
  undefined1 local_288 [12];
  undefined1 local_27c [12];
  undefined1 local_270 [12];
  undefined1 local_264 [12];
  undefined1 local_258 [12];
  undefined1 local_24c [12];
  undefined1 local_240 [12];
  undefined1 local_234 [12];
  undefined1 local_228 [12];
  undefined1 local_21c [12];
  undefined1 local_210 [12];
  undefined1 local_204 [12];
  undefined1 local_1f8 [12];
  undefined1 local_1ec [12];
  undefined1 local_1e0 [12];
  undefined1 local_1d4 [12];
  undefined1 local_1c8 [12];
  undefined1 local_1bc [12];
  undefined1 local_1b0 [12];
  undefined1 local_1a4 [12];
  undefined1 local_198 [12];
  undefined1 local_18c [12];
  undefined1 local_180 [12];
  undefined1 local_174 [12];
  undefined1 local_168 [12];
  undefined1 local_15c [12];
  undefined1 local_150 [12];
  undefined1 local_144 [12];
  undefined1 local_138 [12];
  undefined1 local_12c [12];
  undefined1 local_120 [12];
  undefined1 local_114 [12];
  undefined1 local_108 [12];
  undefined1 local_fc [12];
  undefined1 local_f0 [12];
  undefined1 local_e4 [12];
  undefined1 local_d8 [12];
  undefined1 local_cc [12];
  undefined1 local_c0 [12];
  undefined1 local_b4 [12];
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  float local_60;
  float local_5c;
  int local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  int local_20;
  float local_1c;
  int local_18;
  int local_14;
  float local_10;
  float local_c;
  int local_8;
  
  *(float *)((int)param_1 + 0x3e0) =
       *(float *)((int)param_1 + 0x3e0) - *(float *)((int)param_1 + 0x54);
  local_8 = 0;
  local_38 = 0;
  local_1c = 10000.0;
  local_34 = 10000.0;
  local_18 = 0;
  local_14 = 0;
  local_30 = 0;
  local_2c = 0;
  if (0.0 <= *(float *)((int)param_1 + 0x3e0)) {
    for (local_20 = 0; iVar2 = local_18, iVar1 = local_30, local_20 < 6; local_20 = local_20 + 1) {
      *(float *)((int)param_1 + 0x3bc) =
           (*(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x160) -
           *(float *)((int)param_1 + 0x254)) *
           (*(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x160) -
           *(float *)((int)param_1 + 0x254)) +
           (*(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x158) -
           *(float *)((int)param_1 + 0x24c)) *
           (*(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x158) -
           *(float *)((int)param_1 + 0x24c));
      if (*(char *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x154) == '\0') {
        if (*(int *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 400) < 3) {
          local_2c = local_30;
          local_30 = local_38;
          local_38 = local_20;
          local_34 = *(float *)((int)param_1 + 0x3bc);
        }
        else if (local_34 <= *(float *)((int)param_1 + 0x3bc) ||
                 9 < *(int *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 400)) {
          local_2c = local_30;
          local_30 = local_20;
        }
        else {
          local_2c = local_30;
          local_30 = local_38;
          local_38 = local_20;
          local_34 = *(float *)((int)param_1 + 0x3bc);
        }
      }
      else {
        if (*(int *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 400) < 3) {
          local_18 = local_8;
          local_8 = local_20;
          local_1c = *(float *)((int)param_1 + 0x3bc);
        }
        else if (local_1c <= *(float *)((int)param_1 + 0x3bc) ||
                 0xe < *(int *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 400)) {
          local_18 = local_20;
        }
        else {
          local_18 = local_8;
          local_8 = local_20;
          local_1c = *(float *)((int)param_1 + 0x3bc);
        }
        local_14 = iVar2;
      }
    }
    if (*(char *)((int)param_1 + 0x3a6) == '\0') {
      if (*(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x158) <
          *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x158)) {
        local_28 = local_18;
        local_18 = local_14;
        local_14 = iVar2;
      }
      if (*(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x158) <
          *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x158)) {
        local_28 = local_30;
        local_30 = local_2c;
        local_2c = iVar1;
      }
    }
    else {
      if (*(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x158) <
          *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x158)) {
        local_28 = local_18;
        local_18 = local_14;
        local_14 = iVar2;
      }
      if (*(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x158) <
          *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x158)) {
        local_28 = local_30;
        local_30 = local_2c;
        local_2c = iVar1;
      }
    }
    if (*(int *)((int)param_1 + 0x418) == 1) {
      *(undefined1 *)((int)param_1 + 0x414) = 1;
      *(undefined4 *)((int)param_1 + 0x390) = 0;
      *(int *)((int)param_1 + 0x408) = local_8;
      thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),0);
      *(undefined4 *)((int)param_1 + 0x40c) = 2;
      *(undefined4 *)((int)param_1 + 0x410) = 0xc0400000;
      *(undefined4 *)((int)param_1 + 0x418) = 5;
    }
    else if (*(int *)((int)param_1 + 0x418) == 2) {
      *(undefined1 *)((int)param_1 + 0x414) = 1;
      *(undefined4 *)((int)param_1 + 0x390) = 0;
      *(int *)((int)param_1 + 0x408) = local_38;
      thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),0);
      *(undefined4 *)((int)param_1 + 0x40c) = 1;
      *(undefined4 *)((int)param_1 + 0x410) = 0xc0400000;
      *(undefined4 *)((int)param_1 + 0x418) = 5;
    }
    else if (*(int *)((int)param_1 + 0x418) == 3) {
      *(undefined1 *)((int)param_1 + 0x414) = 1;
      *(undefined4 *)((int)param_1 + 0x390) = 0;
      *(int *)((int)param_1 + 0x408) = local_38;
      thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),0);
      *(undefined4 *)((int)param_1 + 0x40c) = 2;
      *(undefined4 *)((int)param_1 + 0x410) = 0xc0400000;
      *(undefined4 *)((int)param_1 + 0x418) = 5;
    }
    else if (*(int *)((int)param_1 + 0x418) == 4) {
      *(undefined1 *)((int)param_1 + 0x414) = 1;
      *(undefined4 *)((int)param_1 + 0x390) = 0;
      *(int *)((int)param_1 + 0x408) = local_8;
      thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),0);
      *(undefined4 *)((int)param_1 + 0x40c) = 1;
      *(undefined4 *)((int)param_1 + 0x410) = 0xc0400000;
      *(undefined4 *)((int)param_1 + 0x418) = 5;
    }
    if (*(int *)((int)param_1 + 0x40c) == 0) {
      if (*(float *)((int)param_1 + 0x24c) <= 38.0) {
        if (-38.0 <= *(float *)((int)param_1 + 0x24c)) {
          if (*(float *)((int)param_1 + 0x254) <= 19.0) {
            if (*(float *)((int)param_1 + 0x254) < -19.0) {
              *(undefined4 *)((int)param_1 + 0x40c) = 4;
              *(undefined4 *)((int)param_1 + 0x410) = *(undefined4 *)((int)param_1 + 0x24c);
            }
          }
          else {
            *(undefined4 *)((int)param_1 + 0x40c) = 3;
            *(undefined4 *)((int)param_1 + 0x410) = *(undefined4 *)((int)param_1 + 0x24c);
          }
        }
        else {
          *(undefined4 *)((int)param_1 + 0x40c) = 2;
          *(undefined4 *)((int)param_1 + 0x410) = *(undefined4 *)((int)param_1 + 0x254);
        }
      }
      else {
        *(undefined4 *)((int)param_1 + 0x40c) = 1;
        *(undefined4 *)((int)param_1 + 0x410) = *(undefined4 *)((int)param_1 + 0x254);
      }
    }
    if (*(char *)((int)param_1 + 0x414) == '\0' && *(float *)((int)param_1 + 0x250) < 1.0) {
      if (((*(float *)((int)param_1 + 0x24c) <= 38.0 && -38.0 <= *(float *)((int)param_1 + 0x24c))
          && *(float *)((int)param_1 + 0x254) <= 19.0) && -19.0 <= *(float *)((int)param_1 + 0x254))
      {
        *(undefined1 *)((int)param_1 + 0x414) = 0;
        *(undefined4 *)((int)param_1 + 0x40c) = 0;
        *(undefined4 *)((int)param_1 + 0x410) = 0;
      }
      else {
        *(undefined1 *)((int)param_1 + 0x414) = 1;
        *(undefined4 *)((int)param_1 + 0x390) = 0;
        *(undefined4 *)((int)param_1 + 0x408) = *(undefined4 *)((int)param_1 + 0x404);
        thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),6);
        if (0 < *(int *)((int)param_1 + 0x268)) {
          *(undefined4 *)((int)param_1 + 600) = 0;
        }
      }
    }
    if (*(char *)((int)param_1 + 0x414) != '\0') {
      *(float *)((int)param_1 + 0x390) =
           *(float *)((int)param_1 + 0x390) + *(float *)((int)param_1 + 0x54);
      if (*(float *)((int)param_1 + 0x390) <= 3.0) {
        for (local_44 = 0; local_44 < 6; local_44 = local_44 + 1) {
          *(undefined4 *)(*(int *)((int)param_1 + local_44 * 4 + 0xd8) + 400) = 7;
        }
        *(undefined4 *)((int)param_1 + 0x268) = 0xffffffff;
      }
      else {
        thunk_FUN_0042b0bb(param_1,1);
        *(undefined4 *)((int)param_1 + 0x418) = 0;
        local_1c = 100.0;
        local_34 = 100.0;
        for (local_40 = 0; local_40 < 6; local_40 = local_40 + 1) {
          *(undefined4 *)(*(int *)((int)param_1 + local_40 * 4 + 0xd8) + 400) = 7;
          thunk_FUN_0042df38(*(int *)((int)param_1 + local_40 * 4 + 0xd8));
        }
        if (*(int *)((int)param_1 + 0x40c) == 1) {
          if (*(int *)((int)param_1 + 0x3b0) == 2) {
            uVar10 = 0x3fc51eb8;
            puVar3 = D3DVECTOR_ctor(local_6c,0x42200000,0,*(undefined4 *)((int)param_1 + 0x410));
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8),
                               *puVar3,puVar3[1],puVar3[2],uVar10);
            thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),1);
            *(undefined4 *)
             (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x198) = 0;
            *(undefined4 *)
             (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x164) =
                 0x3fc51eb8;
            *(undefined4 *)
             (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 400) = 10;
            thunk_FUN_004305b1(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8));
            uVar10 = 0xbfc51eb8;
            puVar3 = D3DVECTOR_ctor(local_78,0x41200000,0,*(undefined4 *)((int)param_1 + 0x410));
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_8 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0xbfc51eb8;
            puVar3 = D3DVECTOR_ctor(local_84,0x41700000,0,*(float *)((int)param_1 + 0x410) + 5.0);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_18 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0xbfc51eb8;
            puVar3 = D3DVECTOR_ctor(local_90,0x41800000,0,*(float *)((int)param_1 + 0x410) - 5.0);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_14 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            *(float *)((int)param_1 + 0x260) =
                 *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) +
                           0x164) - 3.14;
            *(undefined4 *)((int)param_1 + 0x25c) =
                 *(undefined4 *)
                  (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x174);
            *(undefined4 *)((int)param_1 + 600) =
                 *(undefined4 *)
                  (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x178);
            fVar5 = (float10)thunk_FUN_00404960(param_1);
            *(float *)((int)param_1 + 0x24c) =
                 (float)(-fVar5 * (float10)-2.0 +
                        (float10)*(float *)(*(int *)((int)param_1 +
                                                    *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) +
                                           0x158));
            *(float *)((int)param_1 + 0x250) =
                 *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) +
                           0x170) * 0.9;
            fVar5 = (float10)thunk_FUN_00404900(*(undefined4 *)
                                                 ((int)param_1 +
                                                 *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8));
            *(float *)((int)param_1 + 0x254) =
                 (float)(fVar5 * (float10)-2.0 +
                        (float10)*(float *)(*(int *)((int)param_1 +
                                                    *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) +
                                           0x160));
            *(undefined4 *)((int)param_1 + 0x404) = *(undefined4 *)((int)param_1 + 0x3f8);
            *(undefined4 *)((int)param_1 + 0x268) = 0xffffffff;
            *(undefined1 *)((int)param_1 + 0x414) = 0;
          }
          else if (*(char *)((int)param_1 + 0x3a6) == '\0') {
            if (*(char *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x408) * 4 + 0xd8) + 0x154
                         ) == '\0') {
              if (*(int *)((int)param_1 + 0x3b0) == 1) {
                *(undefined4 *)((int)param_1 + 0x41c) = 0x40600000;
              }
              *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) = 4;
              thunk_FUN_00430497(*(int *)((int)param_1 + local_8 * 4 + 0xd8));
              *(int *)((int)param_1 + 0x268) = local_8;
              uVar10 = 0x3fc51eb8;
              puVar3 = D3DVECTOR_ctor(local_e4,0x42180000,0,*(undefined4 *)((int)param_1 + 0x410));
              thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_8 * 4 + 0xd8),*puVar3,puVar3[1],
                                 puVar3[2],uVar10);
              uVar10 = 0xbfc51eb8;
              puVar3 = D3DVECTOR_ctor(local_f0,0x41f00000,0,*(float *)((int)param_1 + 0x410) + 5.0);
              thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_18 * 4 + 0xd8),*puVar3,puVar3[1],
                                 puVar3[2],uVar10);
              uVar10 = 0xbfc51eb8;
              puVar3 = D3DVECTOR_ctor(local_fc,0x42000000,0,*(float *)((int)param_1 + 0x410) - 5.0);
              thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_14 * 4 + 0xd8),*puVar3,puVar3[1],
                                 puVar3[2],uVar10);
              uVar10 = 0x3fc51eb8;
              puVar3 = D3DVECTOR_ctor(local_108,0x3f800000,0,0x40800000);
              thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_30 * 4 + 0xd8),*puVar3,puVar3[1],
                                 puVar3[2],uVar10);
              uVar10 = 0x3fc51eb8;
              puVar3 = D3DVECTOR_ctor(local_114,0x40000000,0,0xc0800000);
              thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_2c * 4 + 0xd8),*puVar3,puVar3[1],
                                 puVar3[2],uVar10);
              uVar10 = 0x3fc51eb8;
              puVar3 = D3DVECTOR_ctor(local_120,0x40400000,0,0);
              thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_38 * 4 + 0xd8),*puVar3,puVar3[1],
                                 puVar3[2],uVar10);
              *(int *)((int)param_1 + 0x404) = local_8;
              *(undefined1 *)((int)param_1 + 0x414) = 0;
            }
            else {
              if (*(float *)((int)param_1 + 0x410) <= 0.0) {
                *(undefined4 *)((int)param_1 + 0x40c) = 4;
              }
              else {
                *(undefined4 *)((int)param_1 + 0x40c) = 3;
              }
              *(undefined4 *)((int)param_1 + 0x410) = 0x420c0000;
            }
          }
          else if (*(char *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x408) * 4 + 0xd8) +
                            0x154) == '\0') {
            if (*(float *)((int)param_1 + 0x410) <= 0.0) {
              *(undefined4 *)((int)param_1 + 0x40c) = 4;
            }
            else {
              *(undefined4 *)((int)param_1 + 0x40c) = 3;
            }
            *(undefined4 *)((int)param_1 + 0x410) = 0x420c0000;
          }
          else {
            uVar10 = 0x3fc51eb8;
            puVar3 = D3DVECTOR_ctor(local_9c,0x42180000,0,*(undefined4 *)((int)param_1 + 0x410));
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_38 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0xbfc51eb8;
            puVar3 = D3DVECTOR_ctor(local_a8,0x41f00000,0,*(float *)((int)param_1 + 0x410) + 5.0);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_30 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0xbfc51eb8;
            puVar3 = D3DVECTOR_ctor(local_b4,0x42000000,0,*(float *)((int)param_1 + 0x410) - 5.0);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_2c * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0xbfc51eb8;
            puVar3 = D3DVECTOR_ctor(local_c0,0x41200000,0,0x40800000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_18 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0x3fc51eb8;
            puVar3 = D3DVECTOR_ctor(local_cc,0x40000000,0,0xc0800000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_14 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0x3fc51eb8;
            puVar3 = D3DVECTOR_ctor(local_d8,0x40400000,0,0);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_8 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),1);
            *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x198) = 0;
            fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                   local_38 * 4 + 0xd8) + 0x158) -
                                                *(float *)(*(int *)((int)param_1 +
                                                                   local_30 * 4 + 0xd8) + 0x158),
                                                *(float *)(*(int *)((int)param_1 +
                                                                   local_38 * 4 + 0xd8) + 0x160) -
                                                *(float *)(*(int *)((int)param_1 +
                                                                   local_30 * 4 + 0xd8) + 0x160));
            *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) = (float)fVar5;
            *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 400) = 10;
            thunk_FUN_004305b1(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
            *(float *)((int)param_1 + 0x260) =
                 *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) - 3.14;
            *(undefined4 *)((int)param_1 + 0x25c) =
                 *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x174);
            *(undefined4 *)((int)param_1 + 600) =
                 *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x178);
            fVar5 = (float10)thunk_FUN_00404960(local_38);
            *(float *)((int)param_1 + 0x24c) =
                 (float)(-fVar5 * (float10)-2.0 +
                        (float10)*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158));
            *(float *)((int)param_1 + 0x250) =
                 *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x170) * 0.9;
            fVar5 = (float10)thunk_FUN_00404900(param_1);
            *(float *)((int)param_1 + 0x254) =
                 (float)(fVar5 * (float10)-2.0 +
                        (float10)*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x160));
            *(int *)((int)param_1 + 0x404) = local_38;
            *(undefined4 *)((int)param_1 + 0x268) = 0xffffffff;
            *(undefined1 *)((int)param_1 + 0x414) = 0;
          }
        }
        else if (*(int *)((int)param_1 + 0x40c) == 2) {
          if (*(int *)((int)param_1 + 0x3b0) == 2) {
            uVar10 = 0xbfc51eb8;
            puVar3 = D3DVECTOR_ctor(local_12c,0xc2200000,0,*(undefined4 *)((int)param_1 + 0x410));
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8),
                               *puVar3,puVar3[1],puVar3[2],uVar10);
            thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),1);
            *(undefined4 *)
             (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x198) = 0;
            *(undefined4 *)
             (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x164) =
                 0xbfc51eb8;
            *(undefined4 *)
             (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 400) = 10;
            thunk_FUN_004305b1(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8));
            uVar10 = 0x3fc51eb8;
            puVar3 = D3DVECTOR_ctor(local_138,0xc1200000,0,*(undefined4 *)((int)param_1 + 0x410));
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_8 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0x3fc51eb8;
            puVar3 = D3DVECTOR_ctor(local_144,0xc1700000,0,*(float *)((int)param_1 + 0x410) + 5.0);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_18 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0x3fc51eb8;
            puVar3 = D3DVECTOR_ctor(local_150,0xc1800000,0,*(float *)((int)param_1 + 0x410) - 5.0);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_14 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            *(float *)((int)param_1 + 0x260) =
                 *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) +
                           0x164) - 3.14;
            *(undefined4 *)((int)param_1 + 0x25c) =
                 *(undefined4 *)
                  (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x174);
            *(undefined4 *)((int)param_1 + 600) =
                 *(undefined4 *)
                  (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x178);
            fVar5 = (float10)thunk_FUN_00404960(param_1);
            *(float *)((int)param_1 + 0x24c) =
                 (float)(-fVar5 * (float10)-2.0 +
                        (float10)*(float *)(*(int *)((int)param_1 +
                                                    *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) +
                                           0x158));
            *(float *)((int)param_1 + 0x250) =
                 *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) +
                           0x170) * 0.9;
            fVar5 = (float10)thunk_FUN_00404900(*(undefined4 *)
                                                 ((int)param_1 +
                                                 *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8));
            *(float *)((int)param_1 + 0x254) =
                 (float)(fVar5 * (float10)-2.0 +
                        (float10)*(float *)(*(int *)((int)param_1 +
                                                    *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) +
                                           0x160));
            *(undefined4 *)((int)param_1 + 0x404) = *(undefined4 *)((int)param_1 + 0x3f8);
            *(undefined4 *)((int)param_1 + 0x268) = 0xffffffff;
            *(undefined1 *)((int)param_1 + 0x414) = 0;
          }
          else if (*(char *)((int)param_1 + 0x3a6) == '\0') {
            if (*(char *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x408) * 4 + 0xd8) + 0x154
                         ) == '\0') {
              if (*(float *)((int)param_1 + 0x410) <= 0.0) {
                *(undefined4 *)((int)param_1 + 0x40c) = 4;
              }
              else {
                *(undefined4 *)((int)param_1 + 0x40c) = 3;
              }
              *(undefined4 *)((int)param_1 + 0x410) = 0xc20c0000;
            }
            else {
              uVar10 = 0xbfc51eb8;
              puVar3 = D3DVECTOR_ctor(local_1a4,0xc2180000,0,*(undefined4 *)((int)param_1 + 0x410));
              thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_38 * 4 + 0xd8),*puVar3,puVar3[1],
                                 puVar3[2],uVar10);
              uVar10 = 0x3fc51eb8;
              puVar3 = D3DVECTOR_ctor(local_1b0,0xc1f00000,0,*(float *)((int)param_1 + 0x410) + 5.0)
              ;
              thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_30 * 4 + 0xd8),*puVar3,puVar3[1],
                                 puVar3[2],uVar10);
              uVar10 = 0x3fc51eb8;
              puVar3 = D3DVECTOR_ctor(local_1bc,0xc2000000,0,*(float *)((int)param_1 + 0x410) - 5.0)
              ;
              thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_2c * 4 + 0xd8),*puVar3,puVar3[1],
                                 puVar3[2],uVar10);
              uVar10 = 0x3fc51eb8;
              puVar3 = D3DVECTOR_ctor(local_1c8,0xc1200000,0,0x40800000);
              thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_18 * 4 + 0xd8),*puVar3,puVar3[1],
                                 puVar3[2],uVar10);
              uVar10 = 0xbfc51eb8;
              puVar3 = D3DVECTOR_ctor(local_1d4,0x40000000,0,0xc0800000);
              thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_14 * 4 + 0xd8),*puVar3,puVar3[1],
                                 puVar3[2],uVar10);
              uVar10 = 0xbfc51eb8;
              puVar3 = D3DVECTOR_ctor(local_1e0,0x40400000,0,0);
              thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_8 * 4 + 0xd8),*puVar3,puVar3[1],
                                 puVar3[2],uVar10);
              thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),1);
              *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x198) = 0;
              fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                     local_38 * 4 + 0xd8) + 0x158) -
                                                  *(float *)(*(int *)((int)param_1 +
                                                                     local_30 * 4 + 0xd8) + 0x158),
                                                  *(float *)(*(int *)((int)param_1 +
                                                                     local_38 * 4 + 0xd8) + 0x160) -
                                                  *(float *)(*(int *)((int)param_1 +
                                                                     local_30 * 4 + 0xd8) + 0x160));
              *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) = (float)fVar5;
              *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 400) = 10;
              thunk_FUN_004305b1(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
              *(float *)((int)param_1 + 0x260) =
                   *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) - 3.14;
              *(undefined4 *)((int)param_1 + 0x25c) =
                   *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x174);
              *(undefined4 *)((int)param_1 + 600) =
                   *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x178);
              fVar5 = (float10)thunk_FUN_00404960(local_38);
              *(float *)((int)param_1 + 0x24c) =
                   (float)(-fVar5 * (float10)-2.0 +
                          (float10)*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158))
              ;
              *(float *)((int)param_1 + 0x250) =
                   *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x170) * 0.9;
              fVar5 = (float10)thunk_FUN_00404900(param_1);
              *(float *)((int)param_1 + 0x254) =
                   (float)(fVar5 * (float10)-2.0 +
                          (float10)*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x160))
              ;
              *(int *)((int)param_1 + 0x404) = local_38;
              *(undefined4 *)((int)param_1 + 0x268) = 0xffffffff;
              *(undefined1 *)((int)param_1 + 0x414) = 0;
            }
          }
          else if (*(char *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x408) * 4 + 0xd8) +
                            0x154) == '\0') {
            if (*(int *)((int)param_1 + 0x3b0) == 1) {
              *(undefined4 *)((int)param_1 + 0x41c) = 0x40600000;
            }
            *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) = 4;
            thunk_FUN_00430497(*(int *)((int)param_1 + local_8 * 4 + 0xd8));
            *(int *)((int)param_1 + 0x268) = local_8;
            uVar10 = 0xbfc51eb8;
            puVar3 = D3DVECTOR_ctor(local_15c,0xc2180000,0,*(undefined4 *)((int)param_1 + 0x410));
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_8 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0x3fc51eb8;
            puVar3 = D3DVECTOR_ctor(local_168,0xc1f00000,0,*(float *)((int)param_1 + 0x410) + 5.0);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_18 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0x3fc51eb8;
            puVar3 = D3DVECTOR_ctor(local_174,0xc2000000,0,*(float *)((int)param_1 + 0x410) - 5.0);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_14 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0xbfc51eb8;
            puVar3 = D3DVECTOR_ctor(local_180,0x3f800000,0,0x40800000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_30 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0xbfc51eb8;
            puVar3 = D3DVECTOR_ctor(local_18c,0x40000000,0,0xc0800000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_2c * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0xbfc51eb8;
            puVar3 = D3DVECTOR_ctor(local_198,0x40400000,0,0);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_38 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            *(int *)((int)param_1 + 0x404) = local_8;
            *(undefined1 *)((int)param_1 + 0x414) = 0;
          }
          else {
            if (*(float *)((int)param_1 + 0x410) <= 0.0) {
              *(undefined4 *)((int)param_1 + 0x40c) = 4;
            }
            else {
              *(undefined4 *)((int)param_1 + 0x40c) = 3;
            }
            *(undefined4 *)((int)param_1 + 0x410) = 0xc20c0000;
          }
        }
        if (*(int *)((int)param_1 + 0x40c) == 3) {
          if (*(int *)((int)param_1 + 0x3b0) == 2) {
            uVar10 = 0;
            puVar3 = D3DVECTOR_ctor(local_1ec,*(undefined4 *)((int)param_1 + 0x410),0,0x41a00000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8),
                               *puVar3,puVar3[1],puVar3[2],uVar10);
            thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),1);
            *(undefined4 *)
             (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x198) = 0;
            *(undefined4 *)
             (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x164) = 0;
            *(undefined4 *)
             (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 400) = 10;
            thunk_FUN_004305b1(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8));
            uVar10 = 0x4048f5c3;
            puVar3 = D3DVECTOR_ctor(local_1f8,*(undefined4 *)((int)param_1 + 0x410),0,0);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_8 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0x4048f5c3;
            puVar3 = D3DVECTOR_ctor(local_204,*(float *)((int)param_1 + 0x410) + 5.0,0,0x40400000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_18 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0x4048f5c3;
            puVar3 = D3DVECTOR_ctor(local_210,*(float *)((int)param_1 + 0x410) - 1.0,0,0x40800000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_14 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            *(float *)((int)param_1 + 0x260) =
                 *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) +
                           0x164) - 3.14;
            *(undefined4 *)((int)param_1 + 0x25c) =
                 *(undefined4 *)
                  (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x174);
            *(undefined4 *)((int)param_1 + 600) =
                 *(undefined4 *)
                  (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x178);
            fVar5 = (float10)thunk_FUN_00404960(param_1);
            *(float *)((int)param_1 + 0x24c) =
                 (float)(-fVar5 * (float10)-2.0 +
                        (float10)*(float *)(*(int *)((int)param_1 +
                                                    *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) +
                                           0x158));
            *(float *)((int)param_1 + 0x250) =
                 *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) +
                           0x170) * 0.9;
            fVar5 = (float10)thunk_FUN_00404900(*(undefined4 *)
                                                 ((int)param_1 +
                                                 *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8));
            *(float *)((int)param_1 + 0x254) =
                 (float)(fVar5 * (float10)-2.0 +
                        (float10)*(float *)(*(int *)((int)param_1 +
                                                    *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) +
                                           0x160));
            *(undefined4 *)((int)param_1 + 0x404) = *(undefined4 *)((int)param_1 + 0x3f8);
            *(undefined4 *)((int)param_1 + 0x268) = 0xffffffff;
            *(undefined1 *)((int)param_1 + 0x414) = 0;
          }
          else if (*(char *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x408) * 4 + 0xd8) +
                            0x154) == '\0') {
            if (*(int *)((int)param_1 + 0x3b0) == 1) {
              *(undefined4 *)((int)param_1 + 0x41c) = 0x40600000;
            }
            *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) = 4;
            thunk_FUN_00430497(*(int *)((int)param_1 + local_8 * 4 + 0xd8));
            *(int *)((int)param_1 + 0x268) = local_8;
            uVar10 = 0;
            puVar3 = D3DVECTOR_ctor(local_264,*(undefined4 *)((int)param_1 + 0x410),0,0x41a00000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_8 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0x4048f5c3;
            puVar3 = D3DVECTOR_ctor(local_270,*(float *)((int)param_1 + 0x410) + 5.0,0,0x41200000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_18 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0x4048f5c3;
            puVar3 = D3DVECTOR_ctor(local_27c,*(float *)((int)param_1 + 0x410) - 1.0,0,0x41400000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_14 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0x4048f5c3;
            puVar3 = D3DVECTOR_ctor(local_288,*(float *)((int)param_1 + 0x410) + 8.0,0,0x40a00000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_30 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0x4048f5c3;
            puVar3 = D3DVECTOR_ctor(local_294,*(float *)((int)param_1 + 0x410) - 8.0,0,0x40800000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_2c * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0x4048f5c3;
            puVar3 = D3DVECTOR_ctor(local_2a0,*(undefined4 *)((int)param_1 + 0x410),0,0);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_38 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            *(int *)((int)param_1 + 0x404) = local_8;
            *(undefined1 *)((int)param_1 + 0x414) = 0;
          }
          else {
            uVar10 = 0;
            puVar3 = D3DVECTOR_ctor(local_21c,*(undefined4 *)((int)param_1 + 0x410),0,0x41a00000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_38 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0x4048f5c3;
            puVar3 = D3DVECTOR_ctor(local_228,*(float *)((int)param_1 + 0x410) + 5.0,0,0x41200000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_30 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0x4048f5c3;
            puVar3 = D3DVECTOR_ctor(local_234,*(float *)((int)param_1 + 0x410) - 1.0,0,0x41400000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_2c * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0x4048f5c3;
            puVar3 = D3DVECTOR_ctor(local_240,*(float *)((int)param_1 + 0x410) + 8.0,0,0x3f800000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_18 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0x4048f5c3;
            puVar3 = D3DVECTOR_ctor(local_24c,*(float *)((int)param_1 + 0x410) - 8.0,0,0x40000000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_14 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0x4048f5c3;
            puVar3 = D3DVECTOR_ctor(local_258,*(undefined4 *)((int)param_1 + 0x410),0,0x40400000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_8 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),1);
            *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x198) = 0;
            fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                   local_38 * 4 + 0xd8) + 0x158) -
                                                *(float *)(*(int *)((int)param_1 +
                                                                   local_30 * 4 + 0xd8) + 0x158),
                                                *(float *)(*(int *)((int)param_1 +
                                                                   local_38 * 4 + 0xd8) + 0x160) -
                                                *(float *)(*(int *)((int)param_1 +
                                                                   local_30 * 4 + 0xd8) + 0x160));
            *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) = (float)fVar5;
            *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 400) = 10;
            thunk_FUN_004305b1(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
            *(float *)((int)param_1 + 0x260) =
                 *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) - 3.14;
            *(undefined4 *)((int)param_1 + 0x25c) =
                 *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x174);
            *(undefined4 *)((int)param_1 + 600) =
                 *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x178);
            fVar5 = (float10)thunk_FUN_00404960(local_38);
            *(float *)((int)param_1 + 0x24c) =
                 (float)(-fVar5 * (float10)-2.0 +
                        (float10)*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158));
            *(float *)((int)param_1 + 0x250) =
                 *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x170) * 0.9;
            fVar5 = (float10)thunk_FUN_00404900(param_1);
            *(float *)((int)param_1 + 0x254) =
                 (float)(fVar5 * (float10)-2.0 +
                        (float10)*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x160));
            *(int *)((int)param_1 + 0x404) = local_38;
            *(undefined4 *)((int)param_1 + 0x268) = 0xffffffff;
            *(undefined1 *)((int)param_1 + 0x414) = 0;
          }
        }
        else if (*(int *)((int)param_1 + 0x40c) == 4) {
          if (*(int *)((int)param_1 + 0x3b0) == 2) {
            uVar10 = 0x4048f5c3;
            puVar3 = D3DVECTOR_ctor(local_2ac,*(undefined4 *)((int)param_1 + 0x410),0,0xc1a00000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8),
                               *puVar3,puVar3[1],puVar3[2],uVar10);
            thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),1);
            *(undefined4 *)
             (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x198) = 0;
            *(undefined4 *)
             (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x164) =
                 0x4048f5c3;
            *(undefined4 *)
             (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 400) = 10;
            thunk_FUN_004305b1(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8));
            uVar10 = 0;
            puVar3 = D3DVECTOR_ctor(local_2b8,*(undefined4 *)((int)param_1 + 0x410),0,0);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_8 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0;
            puVar3 = D3DVECTOR_ctor(local_2c4,*(float *)((int)param_1 + 0x410) + 5.0,0,0xc0400000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_18 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0;
            puVar3 = D3DVECTOR_ctor(local_2d0,*(float *)((int)param_1 + 0x410) - 1.0,0,0xc0800000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_14 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            *(float *)((int)param_1 + 0x260) =
                 *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) +
                           0x164) - 3.14;
            *(undefined4 *)((int)param_1 + 0x25c) =
                 *(undefined4 *)
                  (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x174);
            *(undefined4 *)((int)param_1 + 600) =
                 *(undefined4 *)
                  (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x178);
            fVar5 = (float10)thunk_FUN_00404960(param_1);
            *(float *)((int)param_1 + 0x24c) =
                 (float)(-fVar5 * (float10)-2.0 +
                        (float10)*(float *)(*(int *)((int)param_1 +
                                                    *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) +
                                           0x158));
            *(float *)((int)param_1 + 0x250) =
                 *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) +
                           0x170) * 0.9;
            fVar5 = (float10)thunk_FUN_00404900(*(undefined4 *)
                                                 ((int)param_1 +
                                                 *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8));
            *(float *)((int)param_1 + 0x254) =
                 (float)(fVar5 * (float10)-2.0 +
                        (float10)*(float *)(*(int *)((int)param_1 +
                                                    *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) +
                                           0x160));
            *(undefined4 *)((int)param_1 + 0x404) = *(undefined4 *)((int)param_1 + 0x3f8);
            *(undefined4 *)((int)param_1 + 0x268) = 0xffffffff;
            *(undefined1 *)((int)param_1 + 0x414) = 0;
          }
          else if (*(char *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x408) * 4 + 0xd8) +
                            0x154) == '\0') {
            if (*(int *)((int)param_1 + 0x3b0) == 1) {
              *(undefined4 *)((int)param_1 + 0x41c) = 0x40600000;
            }
            *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) = 4;
            thunk_FUN_00430497(*(int *)((int)param_1 + local_8 * 4 + 0xd8));
            *(int *)((int)param_1 + 0x268) = local_8;
            uVar10 = 0x4048f5c3;
            puVar3 = D3DVECTOR_ctor(local_324,*(undefined4 *)((int)param_1 + 0x410),0,0xc1a00000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_8 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0;
            puVar3 = D3DVECTOR_ctor(local_330,*(float *)((int)param_1 + 0x410) + 5.0,0,0xc1200000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_18 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0;
            puVar3 = D3DVECTOR_ctor(local_33c,*(float *)((int)param_1 + 0x410) - 1.0,0,0xc1400000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_14 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0;
            puVar3 = D3DVECTOR_ctor(local_348,*(float *)((int)param_1 + 0x410) + 8.0,0,0xc0a00000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_30 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0;
            puVar3 = D3DVECTOR_ctor(local_354,*(float *)((int)param_1 + 0x410) - 8.0,0,0xc0800000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_2c * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0;
            puVar3 = D3DVECTOR_ctor(local_360,*(undefined4 *)((int)param_1 + 0x410),0,0);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_38 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            *(int *)((int)param_1 + 0x404) = local_8;
            *(undefined1 *)((int)param_1 + 0x414) = 0;
          }
          else {
            uVar10 = 0x4048f5c3;
            puVar3 = D3DVECTOR_ctor(local_2dc,*(undefined4 *)((int)param_1 + 0x410),0,0xc1a00000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_38 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0;
            puVar3 = D3DVECTOR_ctor(local_2e8,*(float *)((int)param_1 + 0x410) + 5.0,0,0xc1200000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_30 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0;
            puVar3 = D3DVECTOR_ctor(local_2f4,*(float *)((int)param_1 + 0x410) - 1.0,0,0xc1400000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_2c * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0;
            puVar3 = D3DVECTOR_ctor(local_300,*(float *)((int)param_1 + 0x410) + 8.0,0,0xc0a00000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_18 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0;
            puVar3 = D3DVECTOR_ctor(local_30c,*(float *)((int)param_1 + 0x410) - 8.0,0,0xc0800000);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_14 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            uVar10 = 0;
            puVar3 = D3DVECTOR_ctor(local_318,*(undefined4 *)((int)param_1 + 0x410),0,0);
            thunk_FUN_0042dcb7(*(void **)((int)param_1 + local_8 * 4 + 0xd8),*puVar3,puVar3[1],
                               puVar3[2],uVar10);
            thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),1);
            *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x198) = 0;
            fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                   local_38 * 4 + 0xd8) + 0x158) -
                                                *(float *)(*(int *)((int)param_1 +
                                                                   local_30 * 4 + 0xd8) + 0x158),
                                                *(float *)(*(int *)((int)param_1 +
                                                                   local_38 * 4 + 0xd8) + 0x160) -
                                                *(float *)(*(int *)((int)param_1 +
                                                                   local_30 * 4 + 0xd8) + 0x160));
            *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) = (float)fVar5;
            *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 400) = 10;
            thunk_FUN_004305b1(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
            *(float *)((int)param_1 + 0x260) =
                 *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) - 3.14;
            *(undefined4 *)((int)param_1 + 0x25c) =
                 *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x174);
            *(undefined4 *)((int)param_1 + 600) =
                 *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x178);
            fVar5 = (float10)thunk_FUN_00404960(local_38);
            *(float *)((int)param_1 + 0x24c) =
                 (float)(-fVar5 * (float10)-2.0 +
                        (float10)*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158));
            *(float *)((int)param_1 + 0x250) =
                 *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x170) * 0.9;
            fVar5 = (float10)thunk_FUN_00404900(param_1);
            *(float *)((int)param_1 + 0x254) =
                 (float)(fVar5 * (float10)-2.0 +
                        (float10)*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x160));
            *(int *)((int)param_1 + 0x404) = local_38;
            *(undefined4 *)((int)param_1 + 0x268) = 0xffffffff;
            *(undefined1 *)((int)param_1 + 0x414) = 0;
          }
        }
      }
    }
    if (*(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) < 3 &&
        (*(int *)((int)param_1 + 0x58) == DAT_00453618 ||
        *(int *)((int)param_1 + 0x84) == DAT_00453618)) {
      pfVar4 = thunk_FUN_00419ae5(param_1,local_36c,local_8);
      iVar1 = *(int *)((int)param_1 + local_8 * 4 + 0xd8);
      *(float *)(iVar1 + 0x158) = *pfVar4;
      *(float *)(iVar1 + 0x15c) = pfVar4[1];
      *(float *)(iVar1 + 0x160) = pfVar4[2];
      *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) = 1;
      thunk_FUN_0042f1a9(*(int *)((int)param_1 + local_8 * 4 + 0xd8));
    }
    else if ((*(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) < 7 ||
             9 < *(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400)) ||
             *(int *)((int)param_1 + 0x58) != DAT_00453618 &&
             *(int *)((int)param_1 + 0x84) != DAT_00453618) {
      if (*(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) < 3 &&
          (*(int *)((int)param_1 + 0x5c) == DAT_00453618 ||
          *(int *)((int)param_1 + 0x78) == DAT_00453618)) {
        iVar1 = *(int *)((int)param_1 + local_8 * 4 + 0xd8);
        fVar5 = (float10)thunk_FUN_00404960(*(undefined4 *)((int)param_1 + local_8 * 4 + 0xd8));
        *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158) =
             (float)(fVar5 * (float10)*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x168
                                                ) * (float10)0.6 *
                     (float10)*(float *)((int)param_1 + 0x54) + (float10)*(float *)(iVar1 + 0x158));
        iVar1 = *(int *)((int)param_1 + local_8 * 4 + 0xd8);
        fVar5 = (float10)thunk_FUN_00404900(param_1);
        *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160) =
             (float)(fVar5 * (float10)*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x168
                                                ) * (float10)0.6 *
                     (float10)*(float *)((int)param_1 + 0x54) + (float10)*(float *)(iVar1 + 0x160));
        *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) = 2;
        thunk_FUN_0042fb3f(*(int *)((int)param_1 + local_8 * 4 + 0xd8));
      }
      else if ((*(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) < 7 ||
               9 < *(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400)) ||
               *(int *)((int)param_1 + 0x5c) != DAT_00453618 &&
               *(int *)((int)param_1 + 0x78) != DAT_00453618) {
        if (*(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) < 3) {
          *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) = 0;
          thunk_FUN_0042ee86(*(int *)((int)param_1 + local_8 * 4 + 0xd8));
        }
        else if (6 < *(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) &&
                 *(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) < 10) {
          *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) = 7;
          thunk_FUN_0042df38(*(int *)((int)param_1 + local_8 * 4 + 0xd8));
        }
      }
      else {
        iVar1 = *(int *)((int)param_1 + local_8 * 4 + 0xd8);
        fVar5 = (float10)thunk_FUN_00404960(param_1);
        *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158) =
             (float)(fVar5 * (float10)*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x168
                                                ) * (float10)0.6 *
                     (float10)*(float *)((int)param_1 + 0x54) + (float10)*(float *)(iVar1 + 0x158));
        iVar1 = *(int *)((int)param_1 + local_8 * 4 + 0xd8);
        fVar5 = (float10)thunk_FUN_00404900(*(undefined4 *)
                                             (*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x164));
        *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160) =
             (float)(fVar5 * (float10)*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x168
                                                ) * (float10)0.6 *
                     (float10)*(float *)((int)param_1 + 0x54) + (float10)*(float *)(iVar1 + 0x160));
        *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) = 9;
        thunk_FUN_0042e9cd(*(int *)((int)param_1 + local_8 * 4 + 0xd8));
      }
    }
    else {
      pfVar4 = thunk_FUN_00419ae5(param_1,local_378,local_8);
      iVar1 = *(int *)((int)param_1 + local_8 * 4 + 0xd8);
      *(float *)(iVar1 + 0x158) = *pfVar4;
      *(float *)(iVar1 + 0x15c) = pfVar4[1];
      *(float *)(iVar1 + 0x160) = pfVar4[2];
      *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) = 8;
      thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_8 * 4 + 0xd8));
    }
    if (*(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) < 3 &&
        *(int *)((int)param_1 + 0x6c) == DAT_00453618) {
      *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) = 4;
      thunk_FUN_00430497(*(int *)((int)param_1 + local_8 * 4 + 0xd8));
      if (*(int *)((int)param_1 + 0x3b0) == 1) {
        *(undefined4 *)((int)param_1 + 0x41c) = 0x40600000;
      }
    }
    if ((*(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) == 3 ||
        *(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) == 4) &&
        *(int *)((int)param_1 + 0x3b0) == 1) {
      *(float *)((int)param_1 + 0x41c) =
           *(float *)((int)param_1 + 0x41c) - *(float *)((int)param_1 + 0x54);
    }
    if (*(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) == 4 &&
        (*(int *)((int)param_1 + 0x6c) == DAT_00453614 || *(float *)((int)param_1 + 0x41c) < -0.01))
    {
      thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),1);
      *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x198) = 0;
      *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) = 10;
      thunk_FUN_004305b1(*(int *)((int)param_1 + local_8 * 4 + 0xd8));
      *(undefined4 *)((int)param_1 + 0x41c) = 0;
      *(float *)((int)param_1 + 0x260) =
           *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x164) - 3.14;
      *(undefined4 *)((int)param_1 + 0x25c) =
           *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x174);
      *(undefined4 *)((int)param_1 + 600) =
           *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x178);
      fVar5 = (float10)thunk_FUN_00404960(param_1);
      *(float *)((int)param_1 + 0x24c) =
           (float)(-fVar5 * (float10)-2.0 +
                  (float10)*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158));
      fVar5 = (float10)thunk_FUN_00404900(local_8);
      *(float *)((int)param_1 + 0x254) =
           (float)(fVar5 * (float10)-2.0 +
                  (float10)*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160));
      *(int *)((int)param_1 + 0x404) = local_8;
      *(undefined4 *)((int)param_1 + 0x268) = 0xffffffff;
    }
    if (*(int *)((int)param_1 + 0x3ac) == 3 && *(int *)((int)param_1 + 0x70) == DAT_00453610) {
      thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),1);
      *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) = 6;
      thunk_FUN_00430a58(*(int *)((int)param_1 + local_8 * 4 + 0xd8));
      *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x198) = 0;
      *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x18c) = 0x41400000;
    }
    if (*(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) < 3 &&
        *(int *)((int)param_1 + 0x70) == DAT_00453618) {
      *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) = 3;
      thunk_FUN_00430497(*(int *)((int)param_1 + local_8 * 4 + 0xd8));
      *(int *)((int)param_1 + 0x3fc) = local_8;
      *(undefined4 *)((int)param_1 + 0x3b8) = 2;
      if (*(int *)((int)param_1 + 0x3b0) == 1) {
        *(undefined4 *)((int)param_1 + 0x41c) = 0x41200000;
      }
    }
    if (*(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) == 3) {
      if (*(int *)((int)param_1 + 0x70) != DAT_00453614 &&
          (*(float *)((int)param_1 + 0x41c) <= 5.0 || 6.5 <= *(float *)((int)param_1 + 0x41c))) {
        *(float *)((int)param_1 + 0x3a0) =
             *(float *)((int)param_1 + 0x3a0) + *(float *)((int)param_1 + 0x54);
        if (1.0 < *(float *)((int)param_1 + 0x3a0)) {
          *(undefined4 *)((int)param_1 + 0x3a0) = 0x3a83126f;
        }
      }
      else {
        thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),1);
        *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x198) = 0;
        *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) = 0xb;
        thunk_FUN_00430701(*(int *)((int)param_1 + local_8 * 4 + 0xd8));
        *(float *)((int)param_1 + 0x260) =
             *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x164) - 3.14;
        *(undefined4 *)((int)param_1 + 0x25c) = 0x41b80000;
        *(float *)((int)param_1 + 600) =
             *(float *)((int)param_1 + 0x3a0) *
             *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x17c) + 1.0;
        fVar5 = (float10)thunk_FUN_00404960(param_1);
        *(float *)((int)param_1 + 0x24c) =
             (float)(-fVar5 * (float10)-2.0 +
                    (float10)*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158));
        fVar5 = (float10)thunk_FUN_00404900(local_8);
        *(float *)((int)param_1 + 0x254) =
             (float)(fVar5 * (float10)-2.0 +
                    (float10)*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160));
        *(int *)((int)param_1 + 0x404) = local_8;
        *(undefined4 *)((int)param_1 + 0x41c) = 0;
        *(undefined4 *)((int)param_1 + 0x268) = 0xffffffff;
        if (*(char *)((int)param_1 + 0x3a6) == '\0') {
          if (225.0 <= *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160) *
                       *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160) +
                       (*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158) + 35.0) *
                       (*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158) + 35.0)) {
            *(undefined1 *)((int)param_1 + 0x3a8) = 1;
          }
          else {
            *(undefined1 *)((int)param_1 + 0x3a8) = 0;
          }
        }
        else if (225.0 <= *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160) *
                          *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160) +
                          (*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158) - 35.0) *
                          (*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158) - 35.0))
        {
          *(undefined1 *)((int)param_1 + 0x3a8) = 1;
        }
        else {
          *(undefined1 *)((int)param_1 + 0x3a8) = 0;
        }
      }
    }
    if ((*(int *)((int)param_1 + 100) == DAT_00453618 ||
        *(int *)((int)param_1 + 0x80) == DAT_00453618) &&
        *(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) < 10) {
      if (*(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) == 0 ||
          3 < *(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) &&
          *(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) < 8) {
        *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x164) =
             *(float *)((int)param_1 + 0x54) * 5.0 +
             *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x164);
      }
      else {
        *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x164) =
             *(float *)((int)param_1 + 0x54) * 2.0 +
             *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x164);
      }
    }
    else if ((*(int *)((int)param_1 + 0x60) == DAT_00453618 ||
             *(int *)((int)param_1 + 0x7c) == DAT_00453618) &&
             *(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) < 10) {
      if (*(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) == 0 ||
          3 < *(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) &&
          *(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) < 8) {
        *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x164) =
             *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x164) -
             *(float *)((int)param_1 + 0x54) * 5.0;
      }
      else {
        *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x164) =
             *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x164) -
             *(float *)((int)param_1 + 0x54) * 2.0;
      }
    }
    else if (*(int *)((int)param_1 + 0x418) == 5) {
      if (*(char *)((int)param_1 + 0x3a6) == '\0') {
        fVar11 = 2.0;
        fVar9 = *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x164);
        fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) +
                                                      0x158) - 35.0,
                                            *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) +
                                                      0x160));
        fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
        *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x164) = (float)fVar5;
        pfVar4 = thunk_FUN_00419ae5(param_1,local_390,local_8);
        iVar1 = *(int *)((int)param_1 + local_8 * 4 + 0xd8);
        *(float *)(iVar1 + 0x158) = *pfVar4;
        *(float *)(iVar1 + 0x15c) = pfVar4[1];
        *(float *)(iVar1 + 0x160) = pfVar4[2];
        thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_8 * 4 + 0xd8));
      }
      else {
        fVar11 = 2.0;
        fVar9 = *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x164);
        fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) +
                                                      0x158) + 35.0,
                                            *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) +
                                                      0x160));
        fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
        *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x164) = (float)fVar5;
        pfVar4 = thunk_FUN_00419ae5(param_1,local_384,local_8);
        iVar1 = *(int *)((int)param_1 + local_8 * 4 + 0xd8);
        *(float *)(iVar1 + 0x158) = *pfVar4;
        *(float *)(iVar1 + 0x15c) = pfVar4[1];
        *(float *)(iVar1 + 0x160) = pfVar4[2];
        thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_8 * 4 + 0xd8));
      }
    }
    else if (*(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) == 7 &&
             *(int *)((int)param_1 + 0x268) < 0) {
      fVar11 = 10.0;
      fVar9 = *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x164);
      fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) +
                                                    0x158) - *(float *)((int)param_1 + 0x24c),
                                          *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) +
                                                    0x160) - *(float *)((int)param_1 + 0x254));
      fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
      *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x164) = (float)fVar5;
      pfVar4 = thunk_FUN_00419ae5(param_1,local_39c,local_8);
      iVar1 = *(int *)((int)param_1 + local_8 * 4 + 0xd8);
      *(float *)(iVar1 + 0x158) = *pfVar4;
      *(float *)(iVar1 + 0x15c) = pfVar4[1];
      *(float *)(iVar1 + 0x160) = pfVar4[2];
      thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_8 * 4 + 0xd8));
    }
    if (*(char *)((int)param_1 + 0x3a6) == '\0') {
      if (6 < *(int *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 400) &&
          *(int *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 400) < 10) {
        if (*(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x160) <= 18.0) {
          if (-18.0 <= *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x160)) {
            if (*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158) <= -25.0) {
              if (*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160) <= 0.0) {
                fVar11 = 5.0;
                fVar9 = *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164);
                fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                       local_18 * 4 + 0xd8) + 0x158)
                                                    + 30.0,*(float *)(*(int *)((int)param_1 +
                                                                              local_18 * 4 + 0xd8) +
                                                                     0x160) - 15.0);
                fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164) = (float)fVar5;
              }
              else {
                fVar11 = 5.0;
                fVar9 = *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164);
                fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                       local_18 * 4 + 0xd8) + 0x158)
                                                    + 30.0,*(float *)(*(int *)((int)param_1 +
                                                                              local_18 * 4 + 0xd8) +
                                                                     0x160) + 15.0);
                fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164) = (float)fVar5;
              }
              pfVar4 = thunk_FUN_00419ae5(param_1,local_480,local_18);
              iVar1 = *(int *)((int)param_1 + local_18 * 4 + 0xd8);
              *(float *)(iVar1 + 0x158) = *pfVar4;
              *(float *)(iVar1 + 0x15c) = pfVar4[1];
              *(float *)(iVar1 + 0x160) = pfVar4[2];
              thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_18 * 4 + 0xd8));
            }
            else if (*(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x158) -
                     *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158) <= -10.0) {
              if (-15.0 <= *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x158) -
                           *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158)) {
                if (*(int *)((int)param_1 + 0x58) == DAT_004581e8 &&
                    *(int *)((int)param_1 + 0x84) == DAT_004581e8) {
                  fVar11 = 5.0;
                  fVar9 = *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164);
                  fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                         local_18 * 4 + 0xd8) +
                                                                0x158) -
                                                      *(float *)((int)param_1 + 0x24c),
                                                      *(float *)(*(int *)((int)param_1 +
                                                                         local_18 * 4 + 0xd8) +
                                                                0x160) -
                                                      *(float *)((int)param_1 + 0x254));
                  fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                  *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164) = (float)fVar5;
                  thunk_FUN_0042df38(*(int *)((int)param_1 + local_18 * 4 + 0xd8));
                }
              }
              else {
                fVar5 = thunk_FUN_004199d4((int)param_1,-1.57,
                                           *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) +
                                                     0x164),5.0);
                *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164) = (float)fVar5;
                pfVar4 = thunk_FUN_00419ae5(param_1,local_474,local_18);
                iVar1 = *(int *)((int)param_1 + local_18 * 4 + 0xd8);
                *(float *)(iVar1 + 0x158) = *pfVar4;
                *(float *)(iVar1 + 0x15c) = pfVar4[1];
                *(float *)(iVar1 + 0x160) = pfVar4[2];
                thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_18 * 4 + 0xd8));
              }
            }
            else {
              fVar5 = thunk_FUN_004199d4((int)param_1,1.57,
                                         *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) +
                                                   0x164),5.0);
              *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164) = (float)fVar5;
              pfVar4 = thunk_FUN_00419ae5(param_1,local_468,local_18);
              iVar1 = *(int *)((int)param_1 + local_18 * 4 + 0xd8);
              *(float *)(iVar1 + 0x158) = *pfVar4;
              *(float *)(iVar1 + 0x15c) = pfVar4[1];
              *(float *)(iVar1 + 0x160) = pfVar4[2];
              thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_18 * 4 + 0xd8));
            }
          }
          else {
            fVar5 = thunk_FUN_004199d4((int)param_1,3.14,
                                       *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) +
                                                 0x164),5.0);
            *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164) = (float)fVar5;
            pfVar4 = thunk_FUN_00419ae5(param_1,local_45c,local_18);
            iVar1 = *(int *)((int)param_1 + local_18 * 4 + 0xd8);
            *(float *)(iVar1 + 0x158) = *pfVar4;
            *(float *)(iVar1 + 0x15c) = pfVar4[1];
            *(float *)(iVar1 + 0x160) = pfVar4[2];
            thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_18 * 4 + 0xd8));
          }
        }
        else {
          fVar5 = thunk_FUN_004199d4((int)param_1,0.0,
                                     *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164
                                               ),5.0);
          *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164) = (float)fVar5;
          pfVar4 = thunk_FUN_00419ae5(param_1,local_450,local_18);
          iVar1 = *(int *)((int)param_1 + local_18 * 4 + 0xd8);
          *(float *)(iVar1 + 0x158) = *pfVar4;
          *(float *)(iVar1 + 0x15c) = pfVar4[1];
          *(float *)(iVar1 + 0x160) = pfVar4[2];
          thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_18 * 4 + 0xd8));
        }
      }
      if (6 < *(int *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 400) &&
          *(int *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 400) < 10) {
        if (*(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x160) <= 18.0) {
          if (-18.0 <= *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x160)) {
            if (-35.0 <= *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x158)) {
              if (*(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x158) <= 35.0) {
                if (*(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x158) -
                    *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158) <= 12.0) {
                  if (-3.0 <= *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x158) -
                              *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158)) {
                    if (*(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x160) -
                        *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160) <= 6.0) {
                      if (-6.0 <= *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x160) -
                                  *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160)) {
                        if (*(int *)((int)param_1 + 0x6c) == DAT_00453618) {
                          *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164) =
                               *(float *)((int)param_1 + 0x54) * 5.0 +
                               *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164);
                          pfVar4 = thunk_FUN_00419ae5(param_1,local_4ec,local_14);
                          iVar1 = *(int *)((int)param_1 + local_14 * 4 + 0xd8);
                          *(float *)(iVar1 + 0x158) = *pfVar4;
                          *(float *)(iVar1 + 0x15c) = pfVar4[1];
                          *(float *)(iVar1 + 0x160) = pfVar4[2];
                          thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_14 * 4 + 0xd8));
                        }
                        else if (*(int *)((int)param_1 + 0x58) == DAT_004581e8 &&
                                 *(int *)((int)param_1 + 0x84) == DAT_004581e8) {
                          fVar11 = 5.0;
                          fVar9 = *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164);
                          fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                                 local_14 * 4 + 0xd8
                                                                                 ) + 0x158) -
                                                              *(float *)((int)param_1 + 0x24c),
                                                              *(float *)(*(int *)((int)param_1 +
                                                                                 local_14 * 4 + 0xd8
                                                                                 ) + 0x160) -
                                                              *(float *)((int)param_1 + 0x254));
                          fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                          *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164) =
                               (float)fVar5;
                          thunk_FUN_0042df38(*(int *)((int)param_1 + local_14 * 4 + 0xd8));
                        }
                      }
                      else {
                        fVar5 = thunk_FUN_004199d4((int)param_1,3.14,
                                                   *(float *)(*(int *)((int)param_1 +
                                                                      local_14 * 4 + 0xd8) + 0x164),
                                                   5.0);
                        *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164) =
                             (float)fVar5;
                        pfVar4 = thunk_FUN_00419ae5(param_1,local_4e0,local_14);
                        iVar1 = *(int *)((int)param_1 + local_14 * 4 + 0xd8);
                        *(float *)(iVar1 + 0x158) = *pfVar4;
                        *(float *)(iVar1 + 0x15c) = pfVar4[1];
                        *(float *)(iVar1 + 0x160) = pfVar4[2];
                        thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_14 * 4 + 0xd8));
                      }
                    }
                    else {
                      fVar5 = thunk_FUN_004199d4((int)param_1,0.0,
                                                 *(float *)(*(int *)((int)param_1 +
                                                                    local_14 * 4 + 0xd8) + 0x164),
                                                 5.0);
                      *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164) =
                           (float)fVar5;
                      pfVar4 = thunk_FUN_00419ae5(param_1,local_4d4,local_14);
                      iVar1 = *(int *)((int)param_1 + local_14 * 4 + 0xd8);
                      *(float *)(iVar1 + 0x158) = *pfVar4;
                      *(float *)(iVar1 + 0x15c) = pfVar4[1];
                      *(float *)(iVar1 + 0x160) = pfVar4[2];
                      thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_14 * 4 + 0xd8));
                    }
                  }
                  else {
                    fVar5 = thunk_FUN_004199d4((int)param_1,-1.57,
                                               *(float *)(*(int *)((int)param_1 +
                                                                  local_14 * 4 + 0xd8) + 0x164),5.0)
                    ;
                    *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164) = (float)fVar5;
                    pfVar4 = thunk_FUN_00419ae5(param_1,local_4c8,local_14);
                    iVar1 = *(int *)((int)param_1 + local_14 * 4 + 0xd8);
                    *(float *)(iVar1 + 0x158) = *pfVar4;
                    *(float *)(iVar1 + 0x15c) = pfVar4[1];
                    *(float *)(iVar1 + 0x160) = pfVar4[2];
                    thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_14 * 4 + 0xd8));
                  }
                }
                else {
                  fVar5 = thunk_FUN_004199d4((int)param_1,1.57,
                                             *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8)
                                                       + 0x164),5.0);
                  *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164) = (float)fVar5;
                  pfVar4 = thunk_FUN_00419ae5(param_1,local_4bc,local_14);
                  iVar1 = *(int *)((int)param_1 + local_14 * 4 + 0xd8);
                  *(float *)(iVar1 + 0x158) = *pfVar4;
                  *(float *)(iVar1 + 0x15c) = pfVar4[1];
                  *(float *)(iVar1 + 0x160) = pfVar4[2];
                  thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_14 * 4 + 0xd8));
                }
              }
              else {
                fVar5 = thunk_FUN_004199d4((int)param_1,1.57,
                                           *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) +
                                                     0x164),5.0);
                *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164) = (float)fVar5;
                pfVar4 = thunk_FUN_00419ae5(param_1,local_4b0,local_14);
                iVar1 = *(int *)((int)param_1 + local_14 * 4 + 0xd8);
                *(float *)(iVar1 + 0x158) = *pfVar4;
                *(float *)(iVar1 + 0x15c) = pfVar4[1];
                *(float *)(iVar1 + 0x160) = pfVar4[2];
                thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_14 * 4 + 0xd8));
              }
            }
            else {
              fVar5 = thunk_FUN_004199d4((int)param_1,-1.57,
                                         *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) +
                                                   0x164),5.0);
              *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164) = (float)fVar5;
              pfVar4 = thunk_FUN_00419ae5(param_1,local_4a4,local_14);
              iVar1 = *(int *)((int)param_1 + local_14 * 4 + 0xd8);
              *(float *)(iVar1 + 0x158) = *pfVar4;
              *(float *)(iVar1 + 0x15c) = pfVar4[1];
              *(float *)(iVar1 + 0x160) = pfVar4[2];
              thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_14 * 4 + 0xd8));
            }
          }
          else {
            fVar5 = thunk_FUN_004199d4((int)param_1,3.14,
                                       *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) +
                                                 0x164),5.0);
            *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164) = (float)fVar5;
            pfVar4 = thunk_FUN_00419ae5(param_1,local_498,local_14);
            iVar1 = *(int *)((int)param_1 + local_14 * 4 + 0xd8);
            *(float *)(iVar1 + 0x158) = *pfVar4;
            *(float *)(iVar1 + 0x15c) = pfVar4[1];
            *(float *)(iVar1 + 0x160) = pfVar4[2];
            thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_14 * 4 + 0xd8));
          }
        }
        else {
          fVar5 = thunk_FUN_004199d4((int)param_1,0.0,
                                     *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164
                                               ),5.0);
          *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164) = (float)fVar5;
          pfVar4 = thunk_FUN_00419ae5(param_1,local_48c,local_14);
          iVar1 = *(int *)((int)param_1 + local_14 * 4 + 0xd8);
          *(float *)(iVar1 + 0x158) = *pfVar4;
          *(float *)(iVar1 + 0x15c) = pfVar4[1];
          *(float *)(iVar1 + 0x160) = pfVar4[2];
          thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_14 * 4 + 0xd8));
        }
      }
    }
    else {
      if (6 < *(int *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 400) &&
          *(int *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 400) < 10) {
        if (*(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x160) <= 18.0) {
          if (-18.0 <= *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x160)) {
            if (25.0 <= *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158)) {
              if (*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160) <= 0.0) {
                fVar11 = 5.0;
                fVar9 = *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164);
                fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                       local_18 * 4 + 0xd8) + 0x158)
                                                    - 30.0,*(float *)(*(int *)((int)param_1 +
                                                                              local_18 * 4 + 0xd8) +
                                                                     0x160) - 15.0);
                fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164) = (float)fVar5;
              }
              else {
                fVar11 = 5.0;
                fVar9 = *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164);
                fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                       local_18 * 4 + 0xd8) + 0x158)
                                                    - 30.0,*(float *)(*(int *)((int)param_1 +
                                                                              local_18 * 4 + 0xd8) +
                                                                     0x160) + 15.0);
                fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164) = (float)fVar5;
              }
              pfVar4 = thunk_FUN_00419ae5(param_1,local_3d8,local_18);
              iVar1 = *(int *)((int)param_1 + local_18 * 4 + 0xd8);
              *(float *)(iVar1 + 0x158) = *pfVar4;
              *(float *)(iVar1 + 0x15c) = pfVar4[1];
              *(float *)(iVar1 + 0x160) = pfVar4[2];
              thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_18 * 4 + 0xd8));
            }
            else if (10.0 <= *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x158) -
                             *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158)) {
              if (*(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x158) -
                  *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158) <= 15.0) {
                if (*(int *)((int)param_1 + 0x58) == DAT_004581e8 &&
                    *(int *)((int)param_1 + 0x84) == DAT_004581e8) {
                  fVar11 = 5.0;
                  fVar9 = *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164);
                  fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                         local_18 * 4 + 0xd8) +
                                                                0x158) -
                                                      *(float *)((int)param_1 + 0x24c),
                                                      *(float *)(*(int *)((int)param_1 +
                                                                         local_18 * 4 + 0xd8) +
                                                                0x160) -
                                                      *(float *)((int)param_1 + 0x254));
                  fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                  *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164) = (float)fVar5;
                  thunk_FUN_0042df38(*(int *)((int)param_1 + local_18 * 4 + 0xd8));
                }
              }
              else {
                fVar5 = thunk_FUN_004199d4((int)param_1,1.57,
                                           *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) +
                                                     0x164),5.0);
                *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164) = (float)fVar5;
                pfVar4 = thunk_FUN_00419ae5(param_1,local_3cc,local_18);
                iVar1 = *(int *)((int)param_1 + local_18 * 4 + 0xd8);
                *(float *)(iVar1 + 0x158) = *pfVar4;
                *(float *)(iVar1 + 0x15c) = pfVar4[1];
                *(float *)(iVar1 + 0x160) = pfVar4[2];
                thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_18 * 4 + 0xd8));
              }
            }
            else {
              fVar5 = thunk_FUN_004199d4((int)param_1,-1.57,
                                         *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) +
                                                   0x164),5.0);
              *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164) = (float)fVar5;
              pfVar4 = thunk_FUN_00419ae5(param_1,local_3c0,local_18);
              iVar1 = *(int *)((int)param_1 + local_18 * 4 + 0xd8);
              *(float *)(iVar1 + 0x158) = *pfVar4;
              *(float *)(iVar1 + 0x15c) = pfVar4[1];
              *(float *)(iVar1 + 0x160) = pfVar4[2];
              thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_18 * 4 + 0xd8));
            }
          }
          else {
            fVar5 = thunk_FUN_004199d4((int)param_1,3.14,
                                       *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) +
                                                 0x164),5.0);
            *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164) = (float)fVar5;
            pfVar4 = thunk_FUN_00419ae5(param_1,local_3b4,local_18);
            iVar1 = *(int *)((int)param_1 + local_18 * 4 + 0xd8);
            *(float *)(iVar1 + 0x158) = *pfVar4;
            *(float *)(iVar1 + 0x15c) = pfVar4[1];
            *(float *)(iVar1 + 0x160) = pfVar4[2];
            thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_18 * 4 + 0xd8));
          }
        }
        else {
          fVar5 = thunk_FUN_004199d4((int)param_1,0.0,
                                     *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164
                                               ),5.0);
          *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x164) = (float)fVar5;
          pfVar4 = thunk_FUN_00419ae5(param_1,local_3a8,local_18);
          iVar1 = *(int *)((int)param_1 + local_18 * 4 + 0xd8);
          *(float *)(iVar1 + 0x158) = *pfVar4;
          *(float *)(iVar1 + 0x15c) = pfVar4[1];
          *(float *)(iVar1 + 0x160) = pfVar4[2];
          thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_18 * 4 + 0xd8));
        }
      }
      if (6 < *(int *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 400) &&
          *(int *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 400) < 10) {
        if (*(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x160) <= 18.0) {
          if (-18.0 <= *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x160)) {
            if (-35.0 <= *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x158)) {
              if (*(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x158) <= 35.0) {
                if (-12.0 <= *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x158) -
                             *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158)) {
                  if (*(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x158) -
                      *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158) <= 3.0) {
                    if (*(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x160) -
                        *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160) <= 6.0) {
                      if (-6.0 <= *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x160) -
                                  *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160)) {
                        if (*(int *)((int)param_1 + 0x6c) == DAT_00453618) {
                          *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164) =
                               *(float *)((int)param_1 + 0x54) * 5.0 +
                               *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164);
                          pfVar4 = thunk_FUN_00419ae5(param_1,local_444,local_14);
                          iVar1 = *(int *)((int)param_1 + local_14 * 4 + 0xd8);
                          *(float *)(iVar1 + 0x158) = *pfVar4;
                          *(float *)(iVar1 + 0x15c) = pfVar4[1];
                          *(float *)(iVar1 + 0x160) = pfVar4[2];
                          thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_14 * 4 + 0xd8));
                        }
                        else if (*(int *)((int)param_1 + 0x58) == DAT_004581e8 &&
                                 *(int *)((int)param_1 + 0x84) == DAT_004581e8) {
                          fVar11 = 5.0;
                          fVar9 = *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164);
                          fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                                 local_14 * 4 + 0xd8
                                                                                 ) + 0x158) -
                                                              *(float *)((int)param_1 + 0x24c),
                                                              *(float *)(*(int *)((int)param_1 +
                                                                                 local_14 * 4 + 0xd8
                                                                                 ) + 0x160) -
                                                              *(float *)((int)param_1 + 0x254));
                          fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                          *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164) =
                               (float)fVar5;
                          thunk_FUN_0042df38(*(int *)((int)param_1 + local_14 * 4 + 0xd8));
                        }
                      }
                      else {
                        fVar5 = thunk_FUN_004199d4((int)param_1,3.14,
                                                   *(float *)(*(int *)((int)param_1 +
                                                                      local_14 * 4 + 0xd8) + 0x164),
                                                   5.0);
                        *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164) =
                             (float)fVar5;
                        pfVar4 = thunk_FUN_00419ae5(param_1,local_438,local_14);
                        iVar1 = *(int *)((int)param_1 + local_14 * 4 + 0xd8);
                        *(float *)(iVar1 + 0x158) = *pfVar4;
                        *(float *)(iVar1 + 0x15c) = pfVar4[1];
                        *(float *)(iVar1 + 0x160) = pfVar4[2];
                        thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_14 * 4 + 0xd8));
                      }
                    }
                    else {
                      fVar5 = thunk_FUN_004199d4((int)param_1,0.0,
                                                 *(float *)(*(int *)((int)param_1 +
                                                                    local_14 * 4 + 0xd8) + 0x164),
                                                 5.0);
                      *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164) =
                           (float)fVar5;
                      pfVar4 = thunk_FUN_00419ae5(param_1,local_42c,local_14);
                      iVar1 = *(int *)((int)param_1 + local_14 * 4 + 0xd8);
                      *(float *)(iVar1 + 0x158) = *pfVar4;
                      *(float *)(iVar1 + 0x15c) = pfVar4[1];
                      *(float *)(iVar1 + 0x160) = pfVar4[2];
                      thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_14 * 4 + 0xd8));
                    }
                  }
                  else {
                    fVar5 = thunk_FUN_004199d4((int)param_1,1.57,
                                               *(float *)(*(int *)((int)param_1 +
                                                                  local_14 * 4 + 0xd8) + 0x164),5.0)
                    ;
                    *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164) = (float)fVar5;
                    pfVar4 = thunk_FUN_00419ae5(param_1,local_420,local_14);
                    iVar1 = *(int *)((int)param_1 + local_14 * 4 + 0xd8);
                    *(float *)(iVar1 + 0x158) = *pfVar4;
                    *(float *)(iVar1 + 0x15c) = pfVar4[1];
                    *(float *)(iVar1 + 0x160) = pfVar4[2];
                    thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_14 * 4 + 0xd8));
                  }
                }
                else {
                  fVar5 = thunk_FUN_004199d4((int)param_1,-1.57,
                                             *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8)
                                                       + 0x164),5.0);
                  *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164) = (float)fVar5;
                  pfVar4 = thunk_FUN_00419ae5(param_1,local_414,local_14);
                  iVar1 = *(int *)((int)param_1 + local_14 * 4 + 0xd8);
                  *(float *)(iVar1 + 0x158) = *pfVar4;
                  *(float *)(iVar1 + 0x15c) = pfVar4[1];
                  *(float *)(iVar1 + 0x160) = pfVar4[2];
                  thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_14 * 4 + 0xd8));
                }
              }
              else {
                fVar5 = thunk_FUN_004199d4((int)param_1,1.57,
                                           *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) +
                                                     0x164),5.0);
                *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164) = (float)fVar5;
                pfVar4 = thunk_FUN_00419ae5(param_1,local_408,local_14);
                iVar1 = *(int *)((int)param_1 + local_14 * 4 + 0xd8);
                *(float *)(iVar1 + 0x158) = *pfVar4;
                *(float *)(iVar1 + 0x15c) = pfVar4[1];
                *(float *)(iVar1 + 0x160) = pfVar4[2];
                thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_14 * 4 + 0xd8));
              }
            }
            else {
              fVar5 = thunk_FUN_004199d4((int)param_1,-1.57,
                                         *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) +
                                                   0x164),5.0);
              *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164) = (float)fVar5;
              pfVar4 = thunk_FUN_00419ae5(param_1,local_3fc,local_14);
              iVar1 = *(int *)((int)param_1 + local_14 * 4 + 0xd8);
              *(float *)(iVar1 + 0x158) = *pfVar4;
              *(float *)(iVar1 + 0x15c) = pfVar4[1];
              *(float *)(iVar1 + 0x160) = pfVar4[2];
              thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_14 * 4 + 0xd8));
            }
          }
          else {
            fVar5 = thunk_FUN_004199d4((int)param_1,3.14,
                                       *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) +
                                                 0x164),5.0);
            *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164) = (float)fVar5;
            pfVar4 = thunk_FUN_00419ae5(param_1,local_3f0,local_14);
            iVar1 = *(int *)((int)param_1 + local_14 * 4 + 0xd8);
            *(float *)(iVar1 + 0x158) = *pfVar4;
            *(float *)(iVar1 + 0x15c) = pfVar4[1];
            *(float *)(iVar1 + 0x160) = pfVar4[2];
            thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_14 * 4 + 0xd8));
          }
        }
        else {
          fVar5 = thunk_FUN_004199d4((int)param_1,0.0,
                                     *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164
                                               ),5.0);
          *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x164) = (float)fVar5;
          pfVar4 = thunk_FUN_00419ae5(param_1,local_3e4,local_14);
          iVar1 = *(int *)((int)param_1 + local_14 * 4 + 0xd8);
          *(float *)(iVar1 + 0x158) = *pfVar4;
          *(float *)(iVar1 + 0x15c) = pfVar4[1];
          *(float *)(iVar1 + 0x160) = pfVar4[2];
          thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_14 * 4 + 0xd8));
        }
      }
    }
    if (*(int *)((int)param_1 + 0x3b0) == 2) {
      if (*(int *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 400) != 10
          && *(int *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 400) !=
             0xc) {
        if (*(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) != 3 &&
            *(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) != 4 || 10.0 <= local_34) {
          if (*(int *)((int)param_1 + 0x268) == *(int *)((int)param_1 + 0x3f8)) {
            fVar11 = 5.0;
            fVar9 = *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) +
                              0x164);
            fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                   *(int *)((int)param_1 + 0x3f8) *
                                                                   4 + 0xd8) + 0x158) + 30.0,
                                                *(float *)(*(int *)((int)param_1 +
                                                                   *(int *)((int)param_1 + 0x3f8) *
                                                                   4 + 0xd8) + 0x160));
            fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
            *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x164) =
                 (float)fVar5;
            if (*(char *)((int)param_1 + 0x3a6) != '\0') {
              pfVar4 = thunk_FUN_00419ae5(param_1,local_510,*(int *)((int)param_1 + 0x3f8));
              iVar1 = *(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8);
              *(float *)(iVar1 + 0x158) = *pfVar4;
              *(float *)(iVar1 + 0x15c) = pfVar4[1];
              *(float *)(iVar1 + 0x160) = pfVar4[2];
              thunk_FUN_0042f1a9(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8))
              ;
            }
          }
          else {
            fVar11 = 5.0;
            fVar9 = *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) +
                              0x164);
            fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                   *(int *)((int)param_1 + 0x3f8) *
                                                                   4 + 0xd8) + 0x158) -
                                                *(float *)((int)param_1 + 0x24c),
                                                *(float *)(*(int *)((int)param_1 +
                                                                   *(int *)((int)param_1 + 0x3f8) *
                                                                   4 + 0xd8) + 0x160) -
                                                *(float *)((int)param_1 + 0x254));
            fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
            *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x164) =
                 (float)fVar5;
            if (*(char *)((int)param_1 + 0x3a6) != '\0') {
              pfVar4 = thunk_FUN_00419ae5(param_1,local_504,*(int *)((int)param_1 + 0x3f8));
              iVar1 = *(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8);
              *(float *)(iVar1 + 0x158) = *pfVar4;
              *(float *)(iVar1 + 0x15c) = pfVar4[1];
              *(float *)(iVar1 + 0x160) = pfVar4[2];
              thunk_FUN_0042dfc0(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8))
              ;
            }
          }
        }
        else {
          *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x164) =
               *(float *)((int)param_1 + 0x54) * 2.0 +
               *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8) + 0x164
                         );
          if (*(char *)((int)param_1 + 0x3a6) != '\0') {
            pfVar4 = thunk_FUN_00419ae5(param_1,local_4f8,*(int *)((int)param_1 + 0x3f8));
            iVar1 = *(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8);
            *(float *)(iVar1 + 0x158) = *pfVar4;
            *(float *)(iVar1 + 0x15c) = pfVar4[1];
            *(float *)(iVar1 + 0x160) = pfVar4[2];
            thunk_FUN_0042dfc0(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f8) * 4 + 0xd8));
          }
        }
      }
      fVar11 = 2.0;
      fVar9 = *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f4) * 4 + 0xd8) + 0x164)
      ;
      fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                             *(int *)((int)param_1 + 0x3f4) * 4 +
                                                             0xd8) + 0x158) -
                                          *(float *)((int)param_1 + 0x24c),
                                          *(float *)(*(int *)((int)param_1 +
                                                             *(int *)((int)param_1 + 0x3f4) * 4 +
                                                             0xd8) + 0x160) -
                                          *(float *)((int)param_1 + 0x254));
      fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
      *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f4) * 4 + 0xd8) + 0x164) =
           (float)fVar5;
      fVar11 = 2.0;
      fVar9 = *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f0) * 4 + 0xd8) + 0x164)
      ;
      fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                             *(int *)((int)param_1 + 0x3f0) * 4 +
                                                             0xd8) + 0x158) -
                                          *(float *)((int)param_1 + 0x24c),
                                          *(float *)(*(int *)((int)param_1 +
                                                             *(int *)((int)param_1 + 0x3f0) * 4 +
                                                             0xd8) + 0x160) -
                                          *(float *)((int)param_1 + 0x254));
      fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
      *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3f0) * 4 + 0xd8) + 0x164) =
           (float)fVar5;
    }
    else {
      if (*(int *)((int)param_1 + 0x418) == 5) {
        if (*(char *)((int)param_1 + 0x3a6) == '\0') {
          fVar11 = 2.0;
          fVar9 = *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164);
          fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8
                                                                 ) + 0x158) + 35.0,
                                              *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8
                                                                 ) + 0x160));
          fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
          *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) = (float)fVar5;
          pfVar4 = thunk_FUN_00419ae5(param_1,local_528,local_38);
          iVar1 = *(int *)((int)param_1 + local_38 * 4 + 0xd8);
          *(float *)(iVar1 + 0x158) = *pfVar4;
          *(float *)(iVar1 + 0x15c) = pfVar4[1];
          *(float *)(iVar1 + 0x160) = pfVar4[2];
          thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
        }
        else {
          fVar11 = 2.0;
          fVar9 = *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164);
          fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8
                                                                 ) + 0x158) - 35.0,
                                              *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8
                                                                 ) + 0x160));
          fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
          *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) = (float)fVar5;
          pfVar4 = thunk_FUN_00419ae5(param_1,local_51c,local_38);
          iVar1 = *(int *)((int)param_1 + local_38 * 4 + 0xd8);
          *(float *)(iVar1 + 0x158) = *pfVar4;
          *(float *)(iVar1 + 0x15c) = pfVar4[1];
          *(float *)(iVar1 + 0x160) = pfVar4[2];
          thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
        }
      }
      else if (local_38 == *(int *)((int)param_1 + 0x268)) {
        if (*(int *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 400) < 4) {
          if ((*(byte *)((int)param_1 + 0x3a6) &
              *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x160) *
              *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x160) +
              (*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158) + 36.0) *
              (*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158) + 36.0) < 35.0) == 0
             ) {
            if (*(char *)((int)param_1 + 0x3a6) != '\0' ||
                35.0 <= *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x160) *
                        *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x160) +
                        (*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158) - 36.0) *
                        (*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158) - 36.0)) {
              if ((*(byte *)((int)param_1 + 0x3a6) &
                  *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x160) *
                  *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x160) +
                  (*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158) + 34.0) *
                  (*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158) + 34.0) < 30.0)
                  == 0) {
                if (*(char *)((int)param_1 + 0x3a6) != '\0' ||
                    30.0 <= *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x160) *
                            *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x160) +
                            (*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158) - 34.0
                            ) * (*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158) -
                                34.0)) {
                  if (*(char *)((int)param_1 + 0x3a6) == '\0') {
                    if (*(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x158) -
                        *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158) <= 15.0 ||
                        ((*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158) <
                          *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158) &&
                          *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158) <
                          *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x158) ||
                         *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158) <
                         *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x158) &&
                         *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x158) <
                         *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x158)) ||
                        *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158) <
                        *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x158) &&
                        *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x158) <
                        *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x158))) {
                      fVar5 = (float10)thunk_FUN_00404990(*(undefined4 *)
                                                           ((int)param_1 + local_38 * 4 + 0xd8));
                      local_54 = (float)fVar5;
                      local_50 = (float)(((fVar5 - (float10)2.0) * (float10)0.53 - (float10)1.0) /
                                        (float10)*(float *)(*(int *)((int)param_1 +
                                                                    local_38 * 4 + 0xd8) + 0x17c));
                      if (1.0 <= local_50 ||
                          25.0 <= (*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x160)
                                  - *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160))
                                  * (*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x160
                                               ) -
                                    *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160))
                                  + (*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158
                                               ) -
                                    *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158))
                                    * (*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) +
                                                 0x158) -
                                      *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158
                                                ))) {
                        fVar11 = 10.0;
                        fVar9 = *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164);
                        fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                               local_38 * 4 + 0xd8)
                                                                      + 0x158) - 30.0,
                                                            *(float *)(*(int *)((int)param_1 +
                                                                               local_38 * 4 + 0xd8)
                                                                      + 0x160));
                        fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                        *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) =
                             (float)fVar5;
                        pfVar4 = thunk_FUN_00419ae5(param_1,local_594,local_38);
                        iVar1 = *(int *)((int)param_1 + local_38 * 4 + 0xd8);
                        *(float *)(iVar1 + 0x158) = *pfVar4;
                        *(float *)(iVar1 + 0x15c) = pfVar4[1];
                        *(float *)(iVar1 + 0x160) = pfVar4[2];
                        thunk_FUN_0042f1a9(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
                      }
                      else {
                        thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),1);
                        *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x198) = 0;
                        *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 400) = 0xb;
                        thunk_FUN_00430701(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
                        fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                               local_38 * 4 + 0xd8)
                                                                      + 0x158) - 35.0,
                                                            *(float *)(*(int *)((int)param_1 +
                                                                               local_38 * 4 + 0xd8)
                                                                      + 0x160));
                        *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) =
                             (float)fVar5;
                        *(float *)((int)param_1 + 0x260) =
                             *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) - 3.14
                        ;
                        *(undefined4 *)((int)param_1 + 0x25c) = 0x41b80000;
                        *(float *)((int)param_1 + 600) =
                             local_50 *
                             *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x17c) + 1.0;
                        fVar5 = (float10)thunk_FUN_00404960(*(undefined4 *)
                                                             ((int)param_1 + local_38 * 4 + 0xd8));
                        *(float *)((int)param_1 + 0x24c) =
                             (float)(-fVar5 * (float10)-2.0 +
                                    (float10)*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8)
                                                       + 0x158));
                        fVar5 = (float10)thunk_FUN_00404900(param_1);
                        *(float *)((int)param_1 + 0x254) =
                             (float)(fVar5 * (float10)-2.0 +
                                    (float10)*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8)
                                                       + 0x160));
                        *(int *)((int)param_1 + 0x404) = local_38;
                        *(undefined4 *)((int)param_1 + 0x268) = 0xffffffff;
                        if (15.0 <= local_54) {
                          *(undefined1 *)((int)param_1 + 0x3a8) = 1;
                        }
                        else {
                          *(undefined1 *)((int)param_1 + 0x3a8) = 0;
                        }
                      }
                    }
                    else {
                      thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),1);
                      *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x198) = 0;
                      fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                             local_38 * 4 + 0xd8) +
                                                                    0x158) -
                                                          *(float *)(*(int *)((int)param_1 +
                                                                             local_30 * 4 + 0xd8) +
                                                                    0x158),
                                                          *(float *)(*(int *)((int)param_1 +
                                                                             local_38 * 4 + 0xd8) +
                                                                    0x160) -
                                                          *(float *)(*(int *)((int)param_1 +
                                                                             local_30 * 4 + 0xd8) +
                                                                    0x160));
                      *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) =
                           (float)fVar5;
                      *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 400) = 10;
                      thunk_FUN_004305b1(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
                      *(float *)((int)param_1 + 0x260) =
                           *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) - 3.14;
                      *(undefined4 *)((int)param_1 + 0x25c) =
                           *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x174);
                      *(undefined4 *)((int)param_1 + 600) =
                           *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x178);
                      fVar5 = (float10)thunk_FUN_00404960(local_38);
                      *(float *)((int)param_1 + 0x24c) =
                           (float)(-fVar5 * (float10)-2.0 +
                                  (float10)*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) +
                                                     0x158));
                      *(float *)((int)param_1 + 0x250) =
                           *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x170) * 0.9;
                      fVar5 = (float10)thunk_FUN_00404900(param_1);
                      *(float *)((int)param_1 + 0x254) =
                           (float)(fVar5 * (float10)-2.0 +
                                  (float10)*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) +
                                                     0x160));
                      *(int *)((int)param_1 + 0x404) = local_38;
                      *(undefined4 *)((int)param_1 + 0x268) = 0xffffffff;
                    }
                  }
                  else if (-15.0 <= *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x158)
                                    - *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) +
                                                0x158) ||
                           ((*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158) <
                             *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158) &&
                             *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x158) <
                             *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158) ||
                            *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x158) <
                            *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158) &&
                            *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x158) <
                            *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x158)) ||
                           *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x158) <
                           *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158) &&
                           *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x158) <
                           *(float *)(*(int *)((int)param_1 + local_14 * 4 + 0xd8) + 0x158))) {
                    fVar5 = (float10)thunk_FUN_00404990(*(undefined4 *)
                                                         ((int)param_1 + local_38 * 4 + 0xd8));
                    local_4c = (float)fVar5;
                    local_48 = (float)(((fVar5 - (float10)2.0) * (float10)0.53 - (float10)1.0) /
                                      (float10)*(float *)(*(int *)((int)param_1 +
                                                                  local_38 * 4 + 0xd8) + 0x17c));
                    if (1.0 <= local_48 ||
                        25.0 <= (*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x160) -
                                *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160)) *
                                (*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x160) -
                                *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160)) +
                                (*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158) -
                                *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158)) *
                                (*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158) -
                                *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158))) {
                      fVar11 = 10.0;
                      fVar9 = *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164);
                      fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                             local_38 * 4 + 0xd8) +
                                                                    0x158) + 30.0,
                                                          *(float *)(*(int *)((int)param_1 +
                                                                             local_38 * 4 + 0xd8) +
                                                                    0x160));
                      fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                      *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) =
                           (float)fVar5;
                      pfVar4 = thunk_FUN_00419ae5(param_1,local_588,local_38);
                      iVar1 = *(int *)((int)param_1 + local_38 * 4 + 0xd8);
                      *(float *)(iVar1 + 0x158) = *pfVar4;
                      *(float *)(iVar1 + 0x15c) = pfVar4[1];
                      *(float *)(iVar1 + 0x160) = pfVar4[2];
                      thunk_FUN_0042f1a9(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
                    }
                    else {
                      thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),1);
                      *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x198) = 0;
                      *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 400) = 0xb;
                      thunk_FUN_00430701(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
                      fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                             local_38 * 4 + 0xd8) +
                                                                    0x158) + 35.0,
                                                          *(float *)(*(int *)((int)param_1 +
                                                                             local_38 * 4 + 0xd8) +
                                                                    0x160));
                      *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) =
                           (float)fVar5;
                      *(float *)((int)param_1 + 0x260) =
                           *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) - 3.14;
                      *(undefined4 *)((int)param_1 + 0x25c) = 0x41b80000;
                      *(float *)((int)param_1 + 600) =
                           local_48 *
                           *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x17c) + 1.0;
                      fVar5 = (float10)thunk_FUN_00404960(param_1);
                      *(float *)((int)param_1 + 0x24c) =
                           (float)(-fVar5 * (float10)-2.0 +
                                  (float10)*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) +
                                                     0x158));
                      fVar5 = (float10)thunk_FUN_00404900(local_38);
                      *(float *)((int)param_1 + 0x254) =
                           (float)(fVar5 * (float10)-2.0 +
                                  (float10)*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) +
                                                     0x160));
                      *(int *)((int)param_1 + 0x404) = local_38;
                      *(undefined4 *)((int)param_1 + 0x268) = 0xffffffff;
                      if (15.0 <= local_4c) {
                        *(undefined1 *)((int)param_1 + 0x3a8) = 1;
                      }
                      else {
                        *(undefined1 *)((int)param_1 + 0x3a8) = 0;
                      }
                    }
                  }
                  else {
                    thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),1);
                    *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x198) = 0;
                    fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                           local_38 * 4 + 0xd8) +
                                                                  0x158) -
                                                        *(float *)(*(int *)((int)param_1 +
                                                                           local_30 * 4 + 0xd8) +
                                                                  0x158),
                                                        *(float *)(*(int *)((int)param_1 +
                                                                           local_38 * 4 + 0xd8) +
                                                                  0x160) -
                                                        *(float *)(*(int *)((int)param_1 +
                                                                           local_30 * 4 + 0xd8) +
                                                                  0x160));
                    *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) = (float)fVar5;
                    *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 400) = 10;
                    thunk_FUN_004305b1(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
                    *(float *)((int)param_1 + 0x260) =
                         *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) - 3.14;
                    *(undefined4 *)((int)param_1 + 0x25c) =
                         *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x174);
                    *(undefined4 *)((int)param_1 + 600) =
                         *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x178);
                    fVar5 = (float10)thunk_FUN_00404960(*(undefined4 *)
                                                         ((int)param_1 + local_38 * 4 + 0xd8));
                    *(float *)((int)param_1 + 0x24c) =
                         (float)(-fVar5 * (float10)-2.0 +
                                (float10)*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) +
                                                   0x158));
                    *(float *)((int)param_1 + 0x250) =
                         *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x170) * 0.9;
                    fVar5 = (float10)thunk_FUN_00404900(local_38);
                    *(float *)((int)param_1 + 0x254) =
                         (float)(fVar5 * (float10)-2.0 +
                                (float10)*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) +
                                                   0x160));
                    *(int *)((int)param_1 + 0x404) = local_38;
                    *(undefined4 *)((int)param_1 + 0x268) = 0xffffffff;
                  }
                }
                else {
                  fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                         local_38 * 4 + 0xd8) +
                                                                0x158) - 37.0,
                                                      *(float *)(*(int *)((int)param_1 +
                                                                         local_38 * 4 + 0xd8) +
                                                                0x160));
                  *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) = (float)fVar5;
                  thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),1);
                  *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 400) = 6;
                  thunk_FUN_00430a58(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
                  *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x198) = 0;
                  *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x18c) = 0x41400000
                  ;
                }
              }
              else {
                fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                       local_38 * 4 + 0xd8) + 0x158)
                                                    + 37.0,*(float *)(*(int *)((int)param_1 +
                                                                              local_38 * 4 + 0xd8) +
                                                                     0x160));
                *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) = (float)fVar5;
                thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),1);
                *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 400) = 6;
                thunk_FUN_00430a58(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
                *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x198) = 0;
                *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x18c) = 0x41400000;
              }
            }
            else {
              fVar11 = 5.0 / *(float *)((int)param_1 + 0x400);
              fVar9 = *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164);
              fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                     local_38 * 4 + 0xd8) + 0x158) +
                                                  30.0,*(float *)(*(int *)((int)param_1 +
                                                                          local_38 * 4 + 0xd8) +
                                                                 0x160));
              fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
              *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) = (float)fVar5;
              pfVar4 = thunk_FUN_00419ae5(param_1,local_57c,local_38);
              iVar1 = *(int *)((int)param_1 + local_38 * 4 + 0xd8);
              *(float *)(iVar1 + 0x158) = *pfVar4;
              *(float *)(iVar1 + 0x15c) = pfVar4[1];
              *(float *)(iVar1 + 0x160) = pfVar4[2];
              thunk_FUN_0042f1a9(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
            }
          }
          else {
            fVar11 = 5.0 / *(float *)((int)param_1 + 0x400);
            fVar9 = *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164);
            fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                   local_38 * 4 + 0xd8) + 0x158) -
                                                30.0,*(float *)(*(int *)((int)param_1 +
                                                                        local_38 * 4 + 0xd8) + 0x160
                                                               ));
            fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
            *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) = (float)fVar5;
            pfVar4 = thunk_FUN_00419ae5(param_1,local_570,local_38);
            iVar1 = *(int *)((int)param_1 + local_38 * 4 + 0xd8);
            *(float *)(iVar1 + 0x158) = *pfVar4;
            *(float *)(iVar1 + 0x15c) = pfVar4[1];
            *(float *)(iVar1 + 0x160) = pfVar4[2];
            thunk_FUN_0042f1a9(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
          }
        }
      }
      else {
        if (*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x160) <= 19.0) {
          if (-19.0 <= *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x160)) {
            if (-35.0 <= *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158)) {
              if (*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158) <= 35.0) {
                if ((*(int *)((int)param_1 + 0x3b0) != 0 ||
                    *(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) != 3) &&
                    *(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) != 4 ||
                    10.0 <= local_34) {
                  if (*(char *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x404) * 4 + 0xd8) +
                               0x154) == '\0') {
                    fVar11 = 10.0;
                    fVar9 = *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164);
                    fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                           local_38 * 4 + 0xd8) +
                                                                  0x158) -
                                                        *(float *)((int)param_1 + 0x24c),
                                                        *(float *)(*(int *)((int)param_1 +
                                                                           local_38 * 4 + 0xd8) +
                                                                  0x160) -
                                                        *(float *)((int)param_1 + 0x254));
                    fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                    *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) = (float)fVar5;
                  }
                  else {
                    fVar11 = 5.0 / *(float *)((int)param_1 + 0x400);
                    fVar9 = *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164);
                    fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                           local_38 * 4 + 0xd8) +
                                                                  0x158) -
                                                        *(float *)((int)param_1 + 0x24c),
                                                        *(float *)(*(int *)((int)param_1 +
                                                                           local_38 * 4 + 0xd8) +
                                                                  0x160) -
                                                        *(float *)((int)param_1 + 0x254));
                    fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                    *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) = (float)fVar5;
                  }
                }
                else {
                  *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) =
                       *(float *)((int)param_1 + 0x54) * 2.0 +
                       *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164);
                }
              }
              else {
                fVar5 = thunk_FUN_004199d4((int)param_1,1.57,
                                           *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) +
                                                     0x164),5.0);
                *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) = (float)fVar5;
                pfVar4 = thunk_FUN_00419ae5(param_1,local_558,local_38);
                iVar1 = *(int *)((int)param_1 + local_38 * 4 + 0xd8);
                *(float *)(iVar1 + 0x158) = *pfVar4;
                *(float *)(iVar1 + 0x15c) = pfVar4[1];
                *(float *)(iVar1 + 0x160) = pfVar4[2];
                thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
              }
            }
            else {
              fVar5 = thunk_FUN_004199d4((int)param_1,-1.57,
                                         *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) +
                                                   0x164),5.0);
              *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) = (float)fVar5;
              pfVar4 = thunk_FUN_00419ae5(param_1,local_54c,local_38);
              iVar1 = *(int *)((int)param_1 + local_38 * 4 + 0xd8);
              *(float *)(iVar1 + 0x158) = *pfVar4;
              *(float *)(iVar1 + 0x15c) = pfVar4[1];
              *(float *)(iVar1 + 0x160) = pfVar4[2];
              thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
            }
          }
          else {
            fVar5 = thunk_FUN_004199d4((int)param_1,3.14,
                                       *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) +
                                                 0x164),5.0);
            *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) = (float)fVar5;
            pfVar4 = thunk_FUN_00419ae5(param_1,local_540,local_38);
            iVar1 = *(int *)((int)param_1 + local_38 * 4 + 0xd8);
            *(float *)(iVar1 + 0x158) = *pfVar4;
            *(float *)(iVar1 + 0x15c) = pfVar4[1];
            *(float *)(iVar1 + 0x160) = pfVar4[2];
            thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
          }
        }
        else {
          fVar5 = thunk_FUN_004199d4((int)param_1,0.0,
                                     *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164
                                               ),5.0);
          *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x164) = (float)fVar5;
          pfVar4 = thunk_FUN_00419ae5(param_1,local_534,local_38);
          iVar1 = *(int *)((int)param_1 + local_38 * 4 + 0xd8);
          *(float *)(iVar1 + 0x158) = *pfVar4;
          *(float *)(iVar1 + 0x15c) = pfVar4[1];
          *(float *)(iVar1 + 0x160) = pfVar4[2];
          thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
        }
        pfVar4 = thunk_FUN_00419ae5(param_1,local_564,local_38);
        iVar1 = *(int *)((int)param_1 + local_38 * 4 + 0xd8);
        *(float *)(iVar1 + 0x158) = *pfVar4;
        *(float *)(iVar1 + 0x15c) = pfVar4[1];
        *(float *)(iVar1 + 0x160) = pfVar4[2];
        thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
      }
      if (6 < *(int *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 400) &&
          *(int *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 400) < 10) {
        if (*(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x160) <= 18.0) {
          if (-18.0 <= *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x160)) {
            if (-35.0 <= *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x158)) {
              if (*(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x158) <= 35.0) {
                if (*(int *)((int)param_1 + 0x268) == local_38) {
                  if (*(char *)((int)param_1 + 0x3a6) == '\0') {
                    if (*(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x158) <= 25.0) {
                      if (*(char *)((int)param_1 + 0x3a6) != '\0' ||
                          8.0 <= *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x158) -
                                 *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158)) {
                        fVar11 = 5.0;
                        fVar9 = *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x164);
                        fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                               local_30 * 4 + 0xd8)
                                                                      + 0x158) - 28.0,
                                                            *(float *)(*(int *)((int)param_1 +
                                                                               local_30 * 4 + 0xd8)
                                                                      + 0x160));
                        fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                        *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x164) =
                             (float)fVar5;
                        pfVar4 = thunk_FUN_00419ae5(param_1,local_60c,local_30);
                        iVar1 = *(int *)((int)param_1 + local_30 * 4 + 0xd8);
                        *(float *)(iVar1 + 0x158) = *pfVar4;
                        *(float *)(iVar1 + 0x15c) = pfVar4[1];
                        *(float *)(iVar1 + 0x160) = pfVar4[2];
                        thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_30 * 4 + 0xd8));
                      }
                      else {
                        fVar5 = thunk_FUN_004199d4((int)param_1,-1.57,
                                                   *(float *)(*(int *)((int)param_1 +
                                                                      local_30 * 4 + 0xd8) + 0x164),
                                                   5.0);
                        *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x164) =
                             (float)fVar5;
                        pfVar4 = thunk_FUN_00419ae5(param_1,local_600,local_30);
                        iVar1 = *(int *)((int)param_1 + local_30 * 4 + 0xd8);
                        *(float *)(iVar1 + 0x158) = *pfVar4;
                        *(float *)(iVar1 + 0x15c) = pfVar4[1];
                        *(float *)(iVar1 + 0x160) = pfVar4[2];
                        thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_30 * 4 + 0xd8));
                      }
                    }
                    else if (*(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158) <=
                             18.0) {
                      fVar11 = 5.0;
                      fVar9 = *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x164);
                      fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                             local_30 * 4 + 0xd8) +
                                                                    0x158) -
                                                          *(float *)((int)param_1 + 0x24c),
                                                          *(float *)(*(int *)((int)param_1 +
                                                                             local_30 * 4 + 0xd8) +
                                                                    0x160) -
                                                          *(float *)((int)param_1 + 0x254));
                      fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                      *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x164) =
                           (float)fVar5;
                      thunk_FUN_0042df38(*(int *)((int)param_1 + local_30 * 4 + 0xd8));
                    }
                    else {
                      fVar11 = 5.0;
                      fVar9 = *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x164);
                      fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                             local_30 * 4 + 0xd8) +
                                                                    0x158) - 30.0,
                                                          *(float *)(*(int *)((int)param_1 +
                                                                             local_30 * 4 + 0xd8) +
                                                                    0x160) - 15.0);
                      fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                      *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x164) =
                           (float)fVar5;
                      pfVar4 = thunk_FUN_00419ae5(param_1,local_5f4,local_30);
                      iVar1 = *(int *)((int)param_1 + local_30 * 4 + 0xd8);
                      *(float *)(iVar1 + 0x158) = *pfVar4;
                      *(float *)(iVar1 + 0x15c) = pfVar4[1];
                      *(float *)(iVar1 + 0x160) = pfVar4[2];
                      thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_30 * 4 + 0xd8));
                    }
                  }
                  else if (-25.0 <= *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x158)
                          ) {
                    if (*(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x158) -
                        *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158) <= -8.0) {
                      fVar11 = 5.0;
                      fVar9 = *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x164);
                      fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                             local_30 * 4 + 0xd8) +
                                                                    0x158) + 28.0,
                                                          *(float *)(*(int *)((int)param_1 +
                                                                             local_30 * 4 + 0xd8) +
                                                                    0x160));
                      fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                      *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x164) =
                           (float)fVar5;
                      pfVar4 = thunk_FUN_00419ae5(param_1,local_5e8,local_30);
                      iVar1 = *(int *)((int)param_1 + local_30 * 4 + 0xd8);
                      *(float *)(iVar1 + 0x158) = *pfVar4;
                      *(float *)(iVar1 + 0x15c) = pfVar4[1];
                      *(float *)(iVar1 + 0x160) = pfVar4[2];
                      thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_30 * 4 + 0xd8));
                    }
                    else {
                      fVar5 = thunk_FUN_004199d4((int)param_1,1.57,
                                                 *(float *)(*(int *)((int)param_1 +
                                                                    local_30 * 4 + 0xd8) + 0x164),
                                                 5.0);
                      *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x164) =
                           (float)fVar5;
                      pfVar4 = thunk_FUN_00419ae5(param_1,local_5dc,local_30);
                      iVar1 = *(int *)((int)param_1 + local_30 * 4 + 0xd8);
                      *(float *)(iVar1 + 0x158) = *pfVar4;
                      *(float *)(iVar1 + 0x15c) = pfVar4[1];
                      *(float *)(iVar1 + 0x160) = pfVar4[2];
                      thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_30 * 4 + 0xd8));
                    }
                  }
                  else if (-18.0 <= *(float *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 0x158)
                          ) {
                    fVar11 = 5.0;
                    fVar9 = *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x164);
                    fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                           local_30 * 4 + 0xd8) +
                                                                  0x158) -
                                                        *(float *)((int)param_1 + 0x24c),
                                                        *(float *)(*(int *)((int)param_1 +
                                                                           local_30 * 4 + 0xd8) +
                                                                  0x160) -
                                                        *(float *)((int)param_1 + 0x254));
                    fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                    *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x164) = (float)fVar5;
                    thunk_FUN_0042df38(*(int *)((int)param_1 + local_30 * 4 + 0xd8));
                  }
                  else {
                    fVar11 = 5.0;
                    fVar9 = *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x164);
                    fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                           local_30 * 4 + 0xd8) +
                                                                  0x158) + 30.0,
                                                        *(float *)(*(int *)((int)param_1 +
                                                                           local_30 * 4 + 0xd8) +
                                                                  0x160) - 15.0);
                    fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                    *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x164) = (float)fVar5;
                    pfVar4 = thunk_FUN_00419ae5(param_1,local_5d0,local_30);
                    iVar1 = *(int *)((int)param_1 + local_30 * 4 + 0xd8);
                    *(float *)(iVar1 + 0x158) = *pfVar4;
                    *(float *)(iVar1 + 0x15c) = pfVar4[1];
                    *(float *)(iVar1 + 0x160) = pfVar4[2];
                    thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_30 * 4 + 0xd8));
                  }
                }
                else {
                  fVar11 = 5.0 / *(float *)((int)param_1 + 0x400);
                  fVar9 = *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x164);
                  fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                         local_30 * 4 + 0xd8) +
                                                                0x158) -
                                                      (*(float *)(*(int *)((int)param_1 +
                                                                          local_14 * 4 + 0xd8) +
                                                                 0x158) +
                                                      *(float *)((int)param_1 + 0x24c)) / 2.0,
                                                      *(float *)(*(int *)((int)param_1 +
                                                                         local_30 * 4 + 0xd8) +
                                                                0x160) -
                                                      (*(float *)(*(int *)((int)param_1 +
                                                                          local_14 * 4 + 0xd8) +
                                                                 0x160) +
                                                      *(float *)((int)param_1 + 0x254)) / 2.0);
                  fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                  *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x164) = (float)fVar5;
                  pfVar4 = thunk_FUN_00419ae5(param_1,local_618,local_30);
                  iVar1 = *(int *)((int)param_1 + local_30 * 4 + 0xd8);
                  *(float *)(iVar1 + 0x158) = *pfVar4;
                  *(float *)(iVar1 + 0x15c) = pfVar4[1];
                  *(float *)(iVar1 + 0x160) = pfVar4[2];
                  thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_30 * 4 + 0xd8));
                }
              }
              else {
                fVar5 = thunk_FUN_004199d4((int)param_1,1.57,
                                           *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) +
                                                     0x164),5.0);
                *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x164) = (float)fVar5;
                pfVar4 = thunk_FUN_00419ae5(param_1,local_5c4,local_30);
                iVar1 = *(int *)((int)param_1 + local_30 * 4 + 0xd8);
                *(float *)(iVar1 + 0x158) = *pfVar4;
                *(float *)(iVar1 + 0x15c) = pfVar4[1];
                *(float *)(iVar1 + 0x160) = pfVar4[2];
                thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_30 * 4 + 0xd8));
              }
            }
            else {
              fVar5 = thunk_FUN_004199d4((int)param_1,-1.57,
                                         *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) +
                                                   0x164),5.0);
              *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x164) = (float)fVar5;
              pfVar4 = thunk_FUN_00419ae5(param_1,local_5b8,local_30);
              iVar1 = *(int *)((int)param_1 + local_30 * 4 + 0xd8);
              *(float *)(iVar1 + 0x158) = *pfVar4;
              *(float *)(iVar1 + 0x15c) = pfVar4[1];
              *(float *)(iVar1 + 0x160) = pfVar4[2];
              thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_30 * 4 + 0xd8));
            }
          }
          else {
            fVar5 = thunk_FUN_004199d4((int)param_1,3.14,
                                       *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) +
                                                 0x164),5.0);
            *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x164) = (float)fVar5;
            pfVar4 = thunk_FUN_00419ae5(param_1,local_5ac,local_30);
            iVar1 = *(int *)((int)param_1 + local_30 * 4 + 0xd8);
            *(float *)(iVar1 + 0x158) = *pfVar4;
            *(float *)(iVar1 + 0x15c) = pfVar4[1];
            *(float *)(iVar1 + 0x160) = pfVar4[2];
            thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_30 * 4 + 0xd8));
          }
        }
        else {
          fVar5 = thunk_FUN_004199d4((int)param_1,0.0,
                                     *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x164
                                               ),5.0);
          *(float *)(*(int *)((int)param_1 + local_30 * 4 + 0xd8) + 0x164) = (float)fVar5;
          pfVar4 = thunk_FUN_00419ae5(param_1,local_5a0,local_30);
          iVar1 = *(int *)((int)param_1 + local_30 * 4 + 0xd8);
          *(float *)(iVar1 + 0x158) = *pfVar4;
          *(float *)(iVar1 + 0x15c) = pfVar4[1];
          *(float *)(iVar1 + 0x160) = pfVar4[2];
          thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_30 * 4 + 0xd8));
        }
      }
      if (6 < *(int *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 400) &&
          *(int *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 400) < 10) {
        if (*(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x160) <= 18.0) {
          if (-18.0 <= *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x160)) {
            if (-35.0 <= *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x158)) {
              if (*(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x158) <= 35.0) {
                if (*(int *)((int)param_1 + 0x268) == local_8) {
                  if (*(char *)((int)param_1 + 0x3a6) == '\0') {
                    if (2.0 <= *(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x158) -
                               *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x158)) {
                      fVar11 = 5.0;
                      fVar9 = *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x164);
                      fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                             local_2c * 4 + 0xd8) +
                                                                    0x158) -
                                                          *(float *)((int)param_1 + 0x24c),
                                                          *(float *)(*(int *)((int)param_1 +
                                                                             local_2c * 4 + 0xd8) +
                                                                    0x160) -
                                                          *(float *)((int)param_1 + 0x254));
                      fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                      *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x164) =
                           (float)fVar5;
                      thunk_FUN_0042df38(*(int *)((int)param_1 + local_2c * 4 + 0xd8));
                    }
                    else {
                      fVar11 = 5.0;
                      fVar9 = *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x164);
                      fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                             local_2c * 4 + 0xd8) +
                                                                    0x158) -
                                                          (*(float *)(*(int *)((int)param_1 +
                                                                              local_18 * 4 + 0xd8) +
                                                                     0x158) - 2.0),
                                                          *(float *)(*(int *)((int)param_1 +
                                                                             local_2c * 4 + 0xd8) +
                                                                    0x160));
                      fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                      *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x164) =
                           (float)fVar5;
                      pfVar4 = thunk_FUN_00419ae5(param_1,local_660,local_2c);
                      iVar1 = *(int *)((int)param_1 + local_2c * 4 + 0xd8);
                      *(float *)(iVar1 + 0x158) = *pfVar4;
                      *(float *)(iVar1 + 0x15c) = pfVar4[1];
                      *(float *)(iVar1 + 0x160) = pfVar4[2];
                      thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_2c * 4 + 0xd8));
                    }
                  }
                  else if (*(float *)(*(int *)((int)param_1 + local_18 * 4 + 0xd8) + 0x158) -
                           *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x158) <= -2.0)
                  {
                    fVar11 = 5.0;
                    fVar9 = *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x164);
                    fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                           local_2c * 4 + 0xd8) +
                                                                  0x158) -
                                                        *(float *)((int)param_1 + 0x24c),
                                                        *(float *)(*(int *)((int)param_1 +
                                                                           local_2c * 4 + 0xd8) +
                                                                  0x160) -
                                                        *(float *)((int)param_1 + 0x254));
                    fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                    *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x164) = (float)fVar5;
                    thunk_FUN_0042df38(*(int *)((int)param_1 + local_2c * 4 + 0xd8));
                  }
                  else {
                    fVar11 = 5.0;
                    fVar9 = *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x164);
                    fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                           local_2c * 4 + 0xd8) +
                                                                  0x158) -
                                                        (*(float *)(*(int *)((int)param_1 +
                                                                            local_18 * 4 + 0xd8) +
                                                                   0x158) + 2.0),
                                                        *(float *)(*(int *)((int)param_1 +
                                                                           local_2c * 4 + 0xd8) +
                                                                  0x160));
                    fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                    *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x164) = (float)fVar5;
                    pfVar4 = thunk_FUN_00419ae5(param_1,local_654,local_2c);
                    iVar1 = *(int *)((int)param_1 + local_2c * 4 + 0xd8);
                    *(float *)(iVar1 + 0x158) = *pfVar4;
                    *(float *)(iVar1 + 0x15c) = pfVar4[1];
                    *(float *)(iVar1 + 0x160) = pfVar4[2];
                    thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_2c * 4 + 0xd8));
                  }
                }
                else {
                  fVar11 = 5.0 / *(float *)((int)param_1 + 0x400);
                  fVar9 = *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x164);
                  fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 +
                                                                         local_2c * 4 + 0xd8) +
                                                                0x158) -
                                                      (*(float *)(*(int *)((int)param_1 +
                                                                          local_18 * 4 + 0xd8) +
                                                                 0x158) +
                                                      *(float *)((int)param_1 + 0x24c)) / 2.0,
                                                      *(float *)(*(int *)((int)param_1 +
                                                                         local_2c * 4 + 0xd8) +
                                                                0x160) -
                                                      (*(float *)(*(int *)((int)param_1 +
                                                                          local_18 * 4 + 0xd8) +
                                                                 0x160) +
                                                      *(float *)((int)param_1 + 0x254)) / 2.0);
                  fVar5 = thunk_FUN_004199d4((int)param_1,(float)fVar5,fVar9,fVar11);
                  *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x164) = (float)fVar5;
                  pfVar4 = thunk_FUN_00419ae5(param_1,local_66c,local_2c);
                  iVar1 = *(int *)((int)param_1 + local_2c * 4 + 0xd8);
                  *(float *)(iVar1 + 0x158) = *pfVar4;
                  *(float *)(iVar1 + 0x15c) = pfVar4[1];
                  *(float *)(iVar1 + 0x160) = pfVar4[2];
                  thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_2c * 4 + 0xd8));
                }
              }
              else {
                fVar5 = thunk_FUN_004199d4((int)param_1,1.57,
                                           *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) +
                                                     0x164),5.0);
                *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x164) = (float)fVar5;
                pfVar4 = thunk_FUN_00419ae5(param_1,local_648,local_2c);
                iVar1 = *(int *)((int)param_1 + local_2c * 4 + 0xd8);
                *(float *)(iVar1 + 0x158) = *pfVar4;
                *(float *)(iVar1 + 0x15c) = pfVar4[1];
                *(float *)(iVar1 + 0x160) = pfVar4[2];
                thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_2c * 4 + 0xd8));
              }
            }
            else {
              fVar5 = thunk_FUN_004199d4((int)param_1,-1.57,
                                         *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) +
                                                   0x164),5.0);
              *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x164) = (float)fVar5;
              pfVar4 = thunk_FUN_00419ae5(param_1,local_63c,local_2c);
              iVar1 = *(int *)((int)param_1 + local_2c * 4 + 0xd8);
              *(float *)(iVar1 + 0x158) = *pfVar4;
              *(float *)(iVar1 + 0x15c) = pfVar4[1];
              *(float *)(iVar1 + 0x160) = pfVar4[2];
              thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_2c * 4 + 0xd8));
            }
          }
          else {
            fVar5 = thunk_FUN_004199d4((int)param_1,3.14,
                                       *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) +
                                                 0x164),5.0);
            *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x164) = (float)fVar5;
            pfVar4 = thunk_FUN_00419ae5(param_1,local_630,local_2c);
            iVar1 = *(int *)((int)param_1 + local_2c * 4 + 0xd8);
            *(float *)(iVar1 + 0x158) = *pfVar4;
            *(float *)(iVar1 + 0x15c) = pfVar4[1];
            *(float *)(iVar1 + 0x160) = pfVar4[2];
            thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_2c * 4 + 0xd8));
          }
        }
        else {
          fVar5 = thunk_FUN_004199d4((int)param_1,0.0,
                                     *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x164
                                               ),5.0);
          *(float *)(*(int *)((int)param_1 + local_2c * 4 + 0xd8) + 0x164) = (float)fVar5;
          pfVar4 = thunk_FUN_00419ae5(param_1,local_624,local_2c);
          iVar1 = *(int *)((int)param_1 + local_2c * 4 + 0xd8);
          *(float *)(iVar1 + 0x158) = *pfVar4;
          *(float *)(iVar1 + 0x15c) = pfVar4[1];
          *(float *)(iVar1 + 0x160) = pfVar4[2];
          thunk_FUN_0042dfc0(*(int *)((int)param_1 + local_2c * 4 + 0xd8));
        }
      }
    }
    for (local_20 = 0; local_20 < 6; local_20 = local_20 + 1) {
      if (local_20 == *(int *)((int)param_1 + 0x268)) {
        for (local_58 = 0; local_58 < 6; local_58 = local_58 + 1) {
          if (*(int *)(*(int *)((int)param_1 + local_58 * 4 + 0xd8) + 400) == 0xf) {
            *(undefined4 *)(*(int *)((int)param_1 + local_58 * 4 + 0xd8) + 400) = 7;
          }
        }
        if (*(int *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 400) == 6) {
          *(undefined4 *)((int)param_1 + 0x3b8) = 1;
          *(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x198) =
               *(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x198) +
               *(float *)((int)param_1 + 0x54);
          *(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x18c) =
               *(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x18c) -
               *(float *)((int)param_1 + 0x54) * 20.0;
          if (0.8 <= *(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x198)) {
            *(undefined4 *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 400) = 0xf;
            *(undefined4 *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x198) = 0;
            *(undefined4 *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x15c) = 0;
            thunk_FUN_0042df38(*(int *)((int)param_1 + local_20 * 4 + 0xd8));
            thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),2);
            *(float *)((int)param_1 + 0x260) =
                 *(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x164) - 3.14;
            *(undefined4 *)((int)param_1 + 0x25c) = 0x41600000;
            *(undefined4 *)((int)param_1 + 600) = 0x40000000;
            *(undefined4 *)((int)param_1 + 0x250) = 0x4106e148;
            *(undefined1 *)((int)param_1 + 0x3a8) = 0;
            *(int *)((int)param_1 + 0x404) = local_20;
            *(undefined4 *)((int)param_1 + 0x268) = 0xffffffff;
          }
          else {
            iVar1 = *(int *)((int)param_1 + local_20 * 4 + 0xd8);
            fVar5 = (float10)thunk_FUN_00404960(param_1);
            *(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x158) =
                 (float)((float10)*(float *)(iVar1 + 0x158) -
                        fVar5 * (float10)*(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) +
                                                   0x168) * (float10)0.6 *
                        (float10)*(float *)((int)param_1 + 0x54));
            *(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x15c) =
                 *(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x18c) *
                 *(float *)((int)param_1 + 0x54) +
                 *(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x15c);
            iVar1 = *(int *)((int)param_1 + local_20 * 4 + 0xd8);
            fVar5 = (float10)thunk_FUN_00404900(param_1);
            *(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x160) =
                 (float)((float10)*(float *)(iVar1 + 0x160) -
                        fVar5 * (float10)*(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) +
                                                   0x168) * (float10)0.6 *
                        (float10)*(float *)((int)param_1 + 0x54));
          }
        }
      }
      else if (*(int *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 400) == 0xc) {
        *(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x198) =
             *(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x198) +
             *(float *)((int)param_1 + 0x54);
        if (0.8 < *(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x198)) {
          *(undefined4 *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 400) = 7;
          *(undefined4 *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x198) = 0;
          thunk_FUN_0042df38(*(int *)((int)param_1 + local_20 * 4 + 0xd8));
        }
      }
      else if (*(int *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 400) == 10) {
        *(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x198) =
             *(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x198) +
             *(float *)((int)param_1 + 0x54);
        if (0.8 < *(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x198)) {
          *(undefined4 *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 400) = 0xf;
          *(undefined4 *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x198) = 0;
          thunk_FUN_0042df38(*(int *)((int)param_1 + local_20 * 4 + 0xd8));
        }
      }
      else if (*(int *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 400) == 0xb) {
        *(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x198) =
             *(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x198) +
             *(float *)((int)param_1 + 0x54);
        if (0.8 < *(float *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x198)) {
          *(undefined4 *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 400) = 0xf;
          *(undefined4 *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 0x198) = 0;
          thunk_FUN_0042df38(*(int *)((int)param_1 + local_20 * 4 + 0xd8));
          *(undefined4 *)((int)param_1 + 0x3b8) = 1;
        }
      }
      else if (*(int *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 400) == 6) {
        *(undefined4 *)(*(int *)((int)param_1 + local_20 * 4 + 0xd8) + 400) = 0xf;
      }
    }
    if (((((((*(char *)((int)param_1 + 0x414) == '\0' && local_1c < 8.0) &&
            6 < *(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400)) &&
           *(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) < 10) &&
          *(float *)((int)param_1 + 0x250) < 5.0) &&
         *(int *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 400) != 3) &&
        *(int *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 400) != 4) &&
        *(int *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 400) != 6) {
      if (-1 < *(int *)((int)param_1 + 0x268)) {
        *(undefined4 *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) + 0x198)
             = 0;
        *(undefined4 *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) + 400) =
             0xc;
        thunk_FUN_0043030b(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8));
      }
      *(int *)((int)param_1 + 0x268) = local_8;
      *(int *)((int)param_1 + 0x404) = local_8;
      *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) = 0;
    }
    if (((((((*(char *)((int)param_1 + 0x414) == '\0' && local_34 < 8.0) &&
            6 < *(int *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 400)) &&
           *(int *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 400) < 10) &&
          *(float *)((int)param_1 + 0x250) < 5.0) &&
         *(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) != 3) &&
        *(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) != 4) &&
        *(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) != 6) {
      if (-1 < *(int *)((int)param_1 + 0x268)) {
        *(undefined4 *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) + 0x198)
             = 0;
        *(undefined4 *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) + 400) =
             0xc;
        thunk_FUN_0043030b(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8));
      }
      *(int *)((int)param_1 + 0x268) = local_38;
      *(int *)((int)param_1 + 0x404) = local_38;
      *(undefined4 *)(*(int *)((int)param_1 + local_38 * 4 + 0xd8) + 400) = 0;
      thunk_FUN_0042ee86(*(int *)((int)param_1 + local_38 * 4 + 0xd8));
    }
    if (-1 < *(int *)((int)param_1 + 0x268)) {
      local_5c = -1.5;
      local_60 = -1.0;
      if (*(int *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) + 400) == 3 ||
          *(int *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) + 400) == 4) {
        local_5c = 0.0;
        local_60 = -0.8;
      }
      else if (*(int *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) + 400) ==
               6) {
        local_5c = -0.9;
        local_60 = 0.4;
      }
      else if (*(int *)((int)param_1 + 0x268) == 0) {
        local_5c = -1.7;
        local_60 = -1.2;
      }
      else if (*(int *)((int)param_1 + 0x268) == 3 || *(int *)((int)param_1 + 0x268) == 4) {
        local_5c = -1.3;
        local_60 = -0.8;
      }
      fVar6 = (float10)thunk_FUN_00404900(param_1);
      fVar5 = (float10)local_5c;
      fVar7 = (float10)thunk_FUN_00404960(*(undefined4 *)((int)param_1 + 0x268));
      *(float *)((int)param_1 + 0x24c) =
           (float)(((float10)(float)(fVar6 * fVar5) - fVar7 * (float10)local_60) +
                  (float10)*(float *)(*(int *)((int)param_1 +
                                              *(int *)((int)param_1 + 0x268) * 4 + 0xd8) + 0x158));
      fVar6 = (float10)thunk_FUN_00404960(*(undefined4 *)((int)param_1 + 0x268));
      fVar5 = (float10)local_5c;
      fVar7 = (float10)thunk_FUN_00404900(*(undefined4 *)
                                           ((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8
                                           ));
      *(float *)((int)param_1 + 0x254) =
           (float)(fVar7 * (float10)local_60 + (float10)(float)(fVar6 * fVar5) +
                  (float10)*(float *)(*(int *)((int)param_1 +
                                              *(int *)((int)param_1 + 0x268) * 4 + 0xd8) + 0x160));
      if (*(int *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) + 400) == 3) {
        *(undefined4 *)((int)param_1 + 0x250) = 0x40600000;
      }
      else if (*(int *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) + 400) ==
               4) {
        *(float *)((int)param_1 + 0x250) =
             *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) + 0x170)
             * 0.9;
      }
      else if (*(int *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) + 400) ==
               6) {
        *(float *)((int)param_1 + 0x250) =
             *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) + 0x15c)
             + *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) + 0x180
                         );
      }
      else {
        if ((*(byte *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) + 0x184) &
            (*(int *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) + 0x188) ==
             0 || *(int *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) +
                          0x188) == 2)) != 0) {
          thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),3);
        }
        if (*(int *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) + 0x188) ==
            0 || *(int *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) + 0x188
                         ) == 2) {
          *(float *)((int)param_1 + 0x250) =
               *(float *)((int)param_1 + 0x54) * 40.0 + *(float *)((int)param_1 + 0x250);
          if (*(int *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) + 400) ==
              1) {
            if (*(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) +
                          0x170) * 0.85 < *(float *)((int)param_1 + 0x250)) {
              *(float *)((int)param_1 + 0x250) =
                   *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) +
                             0x170) * 0.85;
            }
          }
          else if (*(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) +
                             0x170) < *(float *)((int)param_1 + 0x250)) {
            *(undefined4 *)((int)param_1 + 0x250) =
                 *(undefined4 *)
                  (*(int *)((int)param_1 + *(int *)((int)param_1 + 0x268) * 4 + 0xd8) + 0x170);
          }
        }
        else {
          *(float *)((int)param_1 + 0x250) =
               *(float *)((int)param_1 + 0x250) - *(float *)((int)param_1 + 0x54) * 20.0;
          if (*(float *)((int)param_1 + 0x250) < 0.7) {
            *(undefined4 *)((int)param_1 + 0x250) = 0x3f333333;
          }
        }
      }
    }
    if ((*(int *)((int)param_1 + 0x3b8) == 1 && *(float *)((int)param_1 + 0x250) < 8.0) &&
        *(float *)((int)param_1 + 0x25c) < 0.0) {
      *(undefined4 *)((int)param_1 + 0x3b8) = 0;
    }
    if (*(int *)((int)param_1 + 0x3b8) == 2) {
      iVar1 = *(int *)((int)param_1 + *(int *)((int)param_1 + 0x3fc) * 4 + 0xd8);
      fVar5 = (float10)thunk_FUN_00404960(*(undefined4 *)
                                           ((int)param_1 + *(int *)((int)param_1 + 0x3fc) * 4 + 0xd8
                                           ));
      *(float *)((int)param_1 + 0x21c) =
           (float)((float10)*(float *)(iVar1 + 0x158) - fVar5 * (float10)8.0);
      iVar1 = *(int *)((int)param_1 + *(int *)((int)param_1 + 0x3fc) * 4 + 0xd8);
      fVar5 = (float10)thunk_FUN_00404900(*(undefined4 *)((int)param_1 + 0x3fc));
      *(float *)((int)param_1 + 0x224) =
           (float)(fVar5 * (float10)8.0 + (float10)*(float *)(iVar1 + 0x160));
      *(float *)((int)param_1 + 0x220) =
           *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3fc) * 4 + 0xd8) + 0x170) *
           1.8;
      *(float *)((int)param_1 + 0x228) =
           *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3fc) * 4 + 0xd8) + 0x158) -
           *(float *)((int)param_1 + 0x21c);
      *(undefined4 *)((int)param_1 + 0x22c) = 0;
      *(float *)((int)param_1 + 0x230) =
           *(float *)(*(int *)((int)param_1 + *(int *)((int)param_1 + 0x3fc) * 4 + 0xd8) + 0x160) -
           *(float *)((int)param_1 + 0x224);
    }
    else if (*(int *)((int)param_1 + 0x268) < 0) {
      if (*(int *)((int)param_1 + 0x3b8) == 1) {
        *(float *)((int)param_1 + 0x220) = *(float *)((int)param_1 + 0x250) + 7.0;
      }
      else {
        *(undefined4 *)((int)param_1 + 0x220) = 0x41400000;
      }
      *(undefined4 *)((int)param_1 + 0x21c) = *(undefined4 *)((int)param_1 + 0x24c);
      *(float *)((int)param_1 + 0x224) = *(float *)((int)param_1 + 0x254) - 20.0;
      *(undefined4 *)((int)param_1 + 0x228) = 0;
      *(undefined4 *)((int)param_1 + 0x22c) = 0xbf000000;
      *(undefined4 *)((int)param_1 + 0x230) = 0x3f800000;
      *(undefined4 *)((int)param_1 + 0x3a0) = 0;
      *(undefined4 *)((int)param_1 + 0x39c) = 0;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x21c) =
           *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158);
      if (*(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) == 6) {
        *(undefined4 *)((int)param_1 + 0x220) = 0x41700000;
      }
      else {
        *(undefined4 *)((int)param_1 + 0x220) = 0x41400000;
      }
      *(float *)((int)param_1 + 0x224) =
           *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160) - 20.0;
      *(undefined4 *)((int)param_1 + 0x228) = 0;
      *(undefined4 *)((int)param_1 + 0x22c) = 0xbf000000;
      *(undefined4 *)((int)param_1 + 0x230) = 0x3f800000;
      *(undefined4 *)((int)param_1 + 0x3a0) = 0;
      *(undefined4 *)((int)param_1 + 0x39c) = 0;
    }
    if (*(char *)((int)param_1 + 0x3a6) == '\0') {
      fVar5 = (float10)thunk_FUN_00404990(param_1);
      local_24 = (float)fVar5;
      iVar1 = *(int *)((int)param_1 + local_8 * 4 + 0xd8);
      fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) +
                                                    0x158) + 35.0,
                                          *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) +
                                                    0x160));
      fVar5 = (float10)*(float *)(iVar1 + 0x164) - fVar5;
    }
    else {
      fVar5 = (float10)thunk_FUN_00404990(*(undefined4 *)((int)param_1 + local_8 * 4 + 0xd8));
      local_24 = (float)fVar5;
      iVar1 = *(int *)((int)param_1 + local_8 * 4 + 0xd8);
      fVar5 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) +
                                                    0x158) - 35.0,
                                          *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) +
                                                    0x160));
      fVar5 = (float10)*(float *)(iVar1 + 0x164) - fVar5;
    }
    local_10 = (float)fVar5;
    local_c = ((local_24 - 2.0) * 0.53 - 1.0) /
              *(float *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x17c);
    if (((local_24 <= 4.0 || 9.0 <= local_24) ||
        *(int *)((int)param_1 + 0x58) != DAT_00453618 &&
        *(int *)((int)param_1 + 0x84) != DAT_00453618) || (local_10 <= -0.785 || 0.785 <= local_10))
    {
      if (local_c <= 0.0 || 1.0 < local_c) {
        *(undefined4 *)((int)param_1 + 0x3ac) = 1;
      }
      else {
        *(undefined4 *)((int)param_1 + 0x3ac) = 2;
        if (0.0001 < *(float *)((int)param_1 + 0x3a0)) {
          lVar8 = __ftol();
          *(int *)((int)param_1 + 0x39c) = (int)lVar8;
        }
      }
    }
    else {
      *(undefined4 *)((int)param_1 + 0x3ac) = 3;
    }
    if (*(int *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 400) == 3) {
      *(undefined4 *)((int)param_1 + 0x3ac) = 0;
    }
    *(undefined4 *)((int)param_1 + 0x240) =
         *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x158);
    *(undefined4 *)((int)param_1 + 0x248) =
         *(undefined4 *)(*(int *)((int)param_1 + local_8 * 4 + 0xd8) + 0x160);
  }
  else {
    if (*(int *)((int)param_1 + 0x3b8) < 5) {
      *(undefined4 *)((int)param_1 + 0x250) = 0x3f333333;
      *(undefined4 *)((int)param_1 + 0x25c) = 0;
      *(undefined4 *)((int)param_1 + 0x390) = 0;
      if (*(char *)((int)param_1 + 0x3a6) == '\0') {
        thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),0);
        for (local_3c = 0; local_3c < 6; local_3c = local_3c + 1) {
          *(undefined4 *)(*(int *)((int)param_1 + local_3c * 4 + 0xd8) + 400) = 7;
          thunk_FUN_0042df38(*(int *)((int)param_1 + local_3c * 4 + 0xd8));
        }
      }
      else {
        thunk_FUN_0042b0bb(param_1,0);
        thunk_FUN_00408716(*(void **)((int)param_1 + 0xc0),6);
      }
    }
    *(float *)((int)param_1 + 0x390) =
         *(float *)((int)param_1 + 0x390) + *(float *)((int)param_1 + 0x54);
    *(undefined4 *)((int)param_1 + 0x3b8) = 5;
    *(undefined4 *)((int)param_1 + 0x39c) = 0;
    *(undefined4 *)((int)param_1 + 0x3a0) = 0xbf800000;
    *(undefined4 *)((int)param_1 + 0x3ac) = 0;
    *(undefined4 *)((int)param_1 + 0x3e0) = 0;
    *(undefined4 *)((int)param_1 + 0x21c) = 0;
    *(undefined4 *)((int)param_1 + 0x220) = 0x40c00000;
    *(undefined4 *)((int)param_1 + 0x224) = 0xc1a00000;
    *(undefined4 *)((int)param_1 + 0x228) = 0;
    *(undefined4 *)((int)param_1 + 0x22c) = 0;
    *(undefined4 *)((int)param_1 + 0x230) = 0x3f800000;
    if (5.0 < *(float *)((int)param_1 + 0x390)) {
      if (*(char *)((int)param_1 + 0x3a6) == '\0') {
        *(undefined4 *)((int)param_1 + 0x3b8) = 0;
        *(undefined4 *)((int)param_1 + 0x26c) = 7;
      }
      else {
        *(undefined4 *)((int)param_1 + 0x3b8) = 0;
        *(undefined4 *)((int)param_1 + 0x26c) = 8;
        *(undefined4 *)((int)param_1 + 0x390) = 0;
      }
    }
  }
  return;
}

