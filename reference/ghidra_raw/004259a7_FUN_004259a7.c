// FUN_004259a7 @ 004259a7  size=4526

void __fastcall FUN_004259a7(int param_1)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  float10 fVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 local_418 [12];
  undefined1 local_40c [32];
  undefined1 local_3ec [12];
  undefined1 local_3e0 [32];
  undefined1 local_3c0 [12];
  undefined1 local_3b4 [32];
  undefined1 local_394 [12];
  undefined1 local_388 [32];
  undefined1 local_368 [12];
  undefined1 local_35c [32];
  undefined1 local_33c [12];
  undefined1 local_330 [32];
  undefined1 local_310 [12];
  undefined1 local_304 [32];
  undefined1 local_2e4 [12];
  undefined1 local_2d8 [32];
  undefined1 local_2b8 [12];
  undefined1 local_2ac [32];
  undefined1 local_28c [12];
  undefined1 local_280 [32];
  undefined1 local_260 [12];
  undefined1 local_254 [32];
  undefined1 local_234 [12];
  undefined1 local_228 [32];
  undefined1 local_208 [12];
  undefined1 local_1fc [32];
  undefined1 local_1dc [12];
  undefined1 local_1d0 [32];
  undefined1 local_1b0 [12];
  undefined1 local_1a4 [32];
  undefined1 local_184 [12];
  undefined1 local_178 [32];
  undefined1 local_158 [12];
  undefined1 local_14c [32];
  undefined1 local_12c [12];
  undefined1 local_120 [32];
  undefined1 local_100 [12];
  undefined1 local_f4 [32];
  undefined1 local_d4 [12];
  undefined1 local_c8 [32];
  float local_a8;
  undefined4 local_a4 [8];
  undefined4 local_84 [8];
  undefined4 local_64 [8];
  undefined4 local_44 [8];
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  if ((-100.0 < *(float *)(param_1 + 0x388) && *(float *)(param_1 + 0x388) < 740.0) &&
      -200.0 < *(float *)(param_1 + 0x38c)) {
    local_18 = 320.0 - *(float *)(param_1 + 0x388);
    local_1c = 240.0 - *(float *)(param_1 + 0x38c);
    fVar6 = (float10)thunk_FUN_00404990(param_1);
    fVar1 = (float)fVar6;
    if (1e-06 < fVar1) {
      local_18 = local_18 / fVar1;
      local_1c = local_1c / fVar1;
    }
    local_a8 = (fVar1 * 2.0) / 5.0;
    FUN_00433410();
    lVar7 = __ftol();
    local_8 = (int)lVar7;
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x50))(*(undefined4 *)(param_1 + 0x3c),0x14,4);
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x50))(*(undefined4 *)(param_1 + 0x3c),7,0);
    thunk_FUN_0040c3a0(local_a4,0x20,4,&LAB_0040119f);
    local_14 = 1.5;
    local_20 = (float)local_8 + 12.0;
    local_10 = 0x3e4ccccd;
    local_24 = 0x3e4ccccd;
    local_c = 0;
    uVar13 = 0x3f553f7d;
    uVar12 = 0xbf4c49ba;
    uVar11 = 0;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    uVar4 = (int)lVar7 << 0x10 | 0xff000000U | (int)lVar8 << 8 | (uint)lVar9;
    uVar10 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_d4,(local_18 * local_14 * local_a8 + *(float *)(param_1 + 0x388))
                                     - local_20,
                            local_1c * local_14 * local_a8 + *(float *)(param_1 + 0x38c) + local_20,
                            0x3f7ff972);
    puVar2 = thunk_FUN_00422870(local_c8,puVar2,uVar10,uVar4,uVar11,uVar12,uVar13);
    puVar5 = local_a4;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar13 = 0x3f256042;
    uVar12 = 0xbf4c49ba;
    uVar11 = 0;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    uVar4 = (int)lVar7 << 0x10 | 0xff000000U | (int)lVar8 << 8 | (uint)lVar9;
    uVar10 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_100,
                            (local_18 * local_14 * local_a8 + *(float *)(param_1 + 0x388)) -
                            local_20,(local_1c * local_14 * local_a8 + *(float *)(param_1 + 0x38c))
                                     - local_20,0x3f7ff972);
    puVar2 = thunk_FUN_00422870(local_f4,puVar2,uVar10,uVar4,uVar11,uVar12,uVar13);
    puVar5 = local_84;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar13 = 0x3f553f7d;
    uVar12 = 0xbf7c6a7f;
    uVar11 = 0;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    uVar4 = (int)lVar7 << 0x10 | 0xff000000U | (int)lVar8 << 8 | (uint)lVar9;
    uVar10 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_12c,
                            local_18 * local_14 * local_a8 + *(float *)(param_1 + 0x388) + local_20,
                            local_1c * local_14 * local_a8 + *(float *)(param_1 + 0x38c) + local_20,
                            0x3f7ff972);
    puVar2 = thunk_FUN_00422870(local_120,puVar2,uVar10,uVar4,uVar11,uVar12,uVar13);
    puVar5 = local_64;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar13 = 0x3f256042;
    uVar12 = 0xbf7c6a7f;
    uVar11 = 0;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    uVar4 = (int)lVar7 << 0x10 | 0xff000000U | (int)lVar8 << 8 | (uint)lVar9;
    uVar10 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_158,
                            local_18 * local_14 * local_a8 + *(float *)(param_1 + 0x388) + local_20,
                            (local_1c * local_14 * local_a8 + *(float *)(param_1 + 0x38c)) -
                            local_20,0x3f7ff972);
    puVar2 = thunk_FUN_00422870(local_14c,puVar2,uVar10,uVar4,uVar11,uVar12,uVar13);
    puVar5 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    (**(code **)(**(int **)(param_1 + 0x3c) + 100))
              (*(undefined4 *)(param_1 + 0x3c),5,0x1c4,local_a4,4,0);
    local_14 = 2.3;
    local_20 = (float)local_8 + 3.2;
    local_10 = 0x3f19999a;
    local_24 = 0x3e99999a;
    local_c = 0;
    uVar13 = 0x3f553f7d;
    uVar12 = 0xbf4c49ba;
    uVar11 = 0;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    uVar4 = (int)lVar7 << 0x10 | 0xff000000U | (int)lVar8 << 8 | (uint)lVar9;
    uVar10 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_184,
                            (local_18 * local_14 * local_a8 + *(float *)(param_1 + 0x388)) -
                            local_20,local_1c * local_14 * local_a8 + *(float *)(param_1 + 0x38c) +
                                     local_20,0x3f7ff972);
    puVar2 = thunk_FUN_00422870(local_178,puVar2,uVar10,uVar4,uVar11,uVar12,uVar13);
    puVar5 = local_a4;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar13 = 0x3f256042;
    uVar12 = 0xbf4c49ba;
    uVar11 = 0;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    uVar4 = (int)lVar7 << 0x10 | 0xff000000U | (int)lVar8 << 8 | (uint)lVar9;
    uVar10 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_1b0,
                            (local_18 * local_14 * local_a8 + *(float *)(param_1 + 0x388)) -
                            local_20,(local_1c * local_14 * local_a8 + *(float *)(param_1 + 0x38c))
                                     - local_20,0x3f7ff972);
    puVar2 = thunk_FUN_00422870(local_1a4,puVar2,uVar10,uVar4,uVar11,uVar12,uVar13);
    puVar5 = local_84;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar13 = 0x3f553f7d;
    uVar12 = 0xbf7c6a7f;
    uVar11 = 0;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    uVar4 = (int)lVar7 << 0x10 | 0xff000000U | (int)lVar8 << 8 | (uint)lVar9;
    uVar10 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_1dc,
                            local_18 * local_14 * local_a8 + *(float *)(param_1 + 0x388) + local_20,
                            local_1c * local_14 * local_a8 + *(float *)(param_1 + 0x38c) + local_20,
                            0x3f7ff972);
    puVar2 = thunk_FUN_00422870(local_1d0,puVar2,uVar10,uVar4,uVar11,uVar12,uVar13);
    puVar5 = local_64;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar13 = 0x3f256042;
    uVar12 = 0xbf7c6a7f;
    uVar11 = 0;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    uVar4 = (int)lVar7 << 0x10 | 0xff000000U | (int)lVar8 << 8 | (uint)lVar9;
    uVar10 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_208,
                            local_18 * local_14 * local_a8 + *(float *)(param_1 + 0x388) + local_20,
                            (local_1c * local_14 * local_a8 + *(float *)(param_1 + 0x38c)) -
                            local_20,0x3f7ff972);
    puVar2 = thunk_FUN_00422870(local_1fc,puVar2,uVar10,uVar4,uVar11,uVar12,uVar13);
    puVar5 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    (**(code **)(**(int **)(param_1 + 0x3c) + 100))
              (*(undefined4 *)(param_1 + 0x3c),5,0x1c4,local_a4,4,0);
    local_14 = 3.25;
    local_20 = (float)local_8 + 32.0;
    local_10 = 0x3dcccccd;
    local_24 = 0x3e99999a;
    local_c = 0x3ecccccd;
    uVar13 = 0x3f241893;
    uVar12 = 0xbf1a5e35;
    uVar11 = 0;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    uVar4 = (int)lVar7 << 0x10 | 0xff000000U | (int)lVar8 << 8 | (uint)lVar9;
    uVar10 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_234,
                            (local_18 * local_14 * local_a8 + *(float *)(param_1 + 0x388)) -
                            local_20,local_1c * local_14 * local_a8 + *(float *)(param_1 + 0x38c) +
                                     local_20,0x3f7ff972);
    puVar2 = thunk_FUN_00422870(local_228,puVar2,uVar10,uVar4,uVar11,uVar12,uVar13);
    puVar5 = local_a4;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar13 = 0x3ee8f5c3;
    uVar12 = 0xbf1a5e35;
    uVar11 = 0;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    uVar4 = (int)lVar7 << 0x10 | 0xff000000U | (int)lVar8 << 8 | (uint)lVar9;
    uVar10 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_260,
                            (local_18 * local_14 * local_a8 + *(float *)(param_1 + 0x388)) -
                            local_20,(local_1c * local_14 * local_a8 + *(float *)(param_1 + 0x38c))
                                     - local_20,0x3f7ff972);
    puVar2 = thunk_FUN_00422870(local_254,puVar2,uVar10,uVar4,uVar11,uVar12,uVar13);
    puVar5 = local_84;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar13 = 0x3f241893;
    uVar12 = 0xbf49374c;
    uVar11 = 0;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    uVar4 = (int)lVar7 << 0x10 | 0xff000000U | (int)lVar8 << 8 | (uint)lVar9;
    uVar10 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_28c,
                            local_18 * local_14 * local_a8 + *(float *)(param_1 + 0x388) + local_20,
                            local_1c * local_14 * local_a8 + *(float *)(param_1 + 0x38c) + local_20,
                            0x3f7ff972);
    puVar2 = thunk_FUN_00422870(local_280,puVar2,uVar10,uVar4,uVar11,uVar12,uVar13);
    puVar5 = local_64;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar13 = 0x3ee8f5c3;
    uVar12 = 0xbf49374c;
    uVar11 = 0;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    uVar4 = (int)lVar7 << 0x10 | 0xff000000U | (int)lVar8 << 8 | (uint)lVar9;
    uVar10 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_2b8,
                            local_18 * local_14 * local_a8 + *(float *)(param_1 + 0x388) + local_20,
                            (local_1c * local_14 * local_a8 + *(float *)(param_1 + 0x38c)) -
                            local_20,0x3f7ff972);
    puVar2 = thunk_FUN_00422870(local_2ac,puVar2,uVar10,uVar4,uVar11,uVar12,uVar13);
    puVar5 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    (**(code **)(**(int **)(param_1 + 0x3c) + 100))
              (*(undefined4 *)(param_1 + 0x3c),5,0x1c4,local_a4,4,0);
    local_14 = 4.0;
    local_20 = (float)local_8 + 16.0;
    local_10 = 0x3e4ccccd;
    local_24 = 0x3e4ccccd;
    local_c = 0;
    uVar13 = 0x3f553f7d;
    uVar12 = 0xbf4c49ba;
    uVar11 = 0;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    uVar4 = (int)lVar7 << 0x10 | 0xff000000U | (int)lVar8 << 8 | (uint)lVar9;
    uVar10 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_2e4,
                            (local_18 * local_14 * local_a8 + *(float *)(param_1 + 0x388)) -
                            local_20,local_1c * local_14 * local_a8 + *(float *)(param_1 + 0x38c) +
                                     local_20,0x3f7ff972);
    puVar2 = thunk_FUN_00422870(local_2d8,puVar2,uVar10,uVar4,uVar11,uVar12,uVar13);
    puVar5 = local_a4;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar13 = 0x3f256042;
    uVar12 = 0xbf4c49ba;
    uVar11 = 0;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    uVar4 = (int)lVar7 << 0x10 | 0xff000000U | (int)lVar8 << 8 | (uint)lVar9;
    uVar10 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_310,
                            (local_18 * local_14 * local_a8 + *(float *)(param_1 + 0x388)) -
                            local_20,(local_1c * local_14 * local_a8 + *(float *)(param_1 + 0x38c))
                                     - local_20,0x3f7ff972);
    puVar2 = thunk_FUN_00422870(local_304,puVar2,uVar10,uVar4,uVar11,uVar12,uVar13);
    puVar5 = local_84;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar13 = 0x3f553f7d;
    uVar12 = 0xbf7c6a7f;
    uVar11 = 0;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    uVar4 = (int)lVar7 << 0x10 | 0xff000000U | (int)lVar8 << 8 | (uint)lVar9;
    uVar10 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_33c,
                            local_18 * local_14 * local_a8 + *(float *)(param_1 + 0x388) + local_20,
                            local_1c * local_14 * local_a8 + *(float *)(param_1 + 0x38c) + local_20,
                            0x3f7ff972);
    puVar2 = thunk_FUN_00422870(local_330,puVar2,uVar10,uVar4,uVar11,uVar12,uVar13);
    puVar5 = local_64;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar13 = 0x3f256042;
    uVar12 = 0xbf7c6a7f;
    uVar11 = 0;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    uVar4 = (int)lVar7 << 0x10 | 0xff000000U | (int)lVar8 << 8 | (uint)lVar9;
    uVar10 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_368,
                            local_18 * local_14 * local_a8 + *(float *)(param_1 + 0x388) + local_20,
                            (local_1c * local_14 * local_a8 + *(float *)(param_1 + 0x38c)) -
                            local_20,0x3f7ff972);
    puVar2 = thunk_FUN_00422870(local_35c,puVar2,uVar10,uVar4,uVar11,uVar12,uVar13);
    puVar5 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    (**(code **)(**(int **)(param_1 + 0x3c) + 100))
              (*(undefined4 *)(param_1 + 0x3c),5,0x1c4,local_a4,4,0);
    local_14 = 5.0;
    local_20 = (float)local_8 + 80.0;
    local_10 = 0x3ecccccd;
    local_24 = 0x3dcccccd;
    local_c = 0;
    uVar13 = 0x3f241893;
    uVar12 = 0xbf1a5e35;
    uVar11 = 0;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    uVar4 = (int)lVar7 << 0x10 | 0xff000000U | (int)lVar8 << 8 | (uint)lVar9;
    uVar10 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_394,
                            (local_18 * local_14 * local_a8 + *(float *)(param_1 + 0x388)) -
                            local_20,local_1c * local_14 * local_a8 + *(float *)(param_1 + 0x38c) +
                                     local_20,0x3f7ff972);
    puVar2 = thunk_FUN_00422870(local_388,puVar2,uVar10,uVar4,uVar11,uVar12,uVar13);
    puVar5 = local_a4;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar13 = 0x3ee8f5c3;
    uVar12 = 0xbf1a5e35;
    uVar11 = 0;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    uVar4 = (int)lVar7 << 0x10 | 0xff000000U | (int)lVar8 << 8 | (uint)lVar9;
    uVar10 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_3c0,
                            (local_18 * local_14 * local_a8 + *(float *)(param_1 + 0x388)) -
                            local_20,(local_1c * local_14 * local_a8 + *(float *)(param_1 + 0x38c))
                                     - local_20,0x3f7ff972);
    puVar2 = thunk_FUN_00422870(local_3b4,puVar2,uVar10,uVar4,uVar11,uVar12,uVar13);
    puVar5 = local_84;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar13 = 0x3f241893;
    uVar12 = 0xbf49374c;
    uVar11 = 0;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    uVar4 = (int)lVar7 << 0x10 | 0xff000000U | (int)lVar8 << 8 | (uint)lVar9;
    uVar10 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_3ec,
                            local_18 * local_14 * local_a8 + *(float *)(param_1 + 0x388) + local_20,
                            local_1c * local_14 * local_a8 + *(float *)(param_1 + 0x38c) + local_20,
                            0x3f7ff972);
    puVar2 = thunk_FUN_00422870(local_3e0,puVar2,uVar10,uVar4,uVar11,uVar12,uVar13);
    puVar5 = local_64;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar13 = 0x3ee8f5c3;
    uVar12 = 0xbf49374c;
    uVar11 = 0;
    lVar7 = __ftol();
    lVar8 = __ftol();
    lVar9 = __ftol();
    uVar4 = (int)lVar7 << 0x10 | 0xff000000U | (int)lVar8 << 8 | (uint)lVar9;
    uVar10 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_418,
                            local_18 * local_14 * local_a8 + *(float *)(param_1 + 0x388) + local_20,
                            (local_1c * local_14 * local_a8 + *(float *)(param_1 + 0x38c)) -
                            local_20,0x3f7ff972);
    puVar2 = thunk_FUN_00422870(local_40c,puVar2,uVar10,uVar4,uVar11,uVar12,uVar13);
    puVar5 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    (**(code **)(**(int **)(param_1 + 0x3c) + 100))
              (*(undefined4 *)(param_1 + 0x3c),5,0x1c4,local_a4,4,0);
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x50))(*(undefined4 *)(param_1 + 0x3c),7,1);
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x50))(*(undefined4 *)(param_1 + 0x3c),0x14,6);
  }
  return;
}

