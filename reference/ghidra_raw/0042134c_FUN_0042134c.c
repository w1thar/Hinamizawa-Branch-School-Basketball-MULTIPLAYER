// FUN_0042134c @ 0042134c  size=2499

void __fastcall FUN_0042134c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 local_34c [12];
  undefined1 local_340 [32];
  undefined1 local_320 [12];
  undefined1 local_314 [32];
  undefined1 local_2f4 [12];
  undefined1 local_2e8 [32];
  undefined1 local_2c8 [12];
  undefined1 local_2bc [32];
  undefined1 local_29c [12];
  undefined1 local_290 [32];
  undefined1 local_270 [12];
  undefined1 local_264 [32];
  undefined1 local_244 [12];
  undefined1 local_238 [32];
  undefined1 local_218 [12];
  undefined1 local_20c [32];
  undefined1 local_1ec [12];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [12];
  undefined1 local_1b4 [32];
  undefined1 local_194 [12];
  undefined1 local_188 [32];
  undefined1 local_168 [12];
  undefined1 local_15c [32];
  undefined1 local_13c [12];
  undefined1 local_130 [32];
  undefined1 local_110 [12];
  undefined1 local_104 [32];
  undefined1 local_e4 [12];
  undefined1 local_d8 [32];
  undefined1 local_b8 [12];
  undefined1 local_ac [32];
  int local_8c;
  int local_88;
  undefined4 local_84 [8];
  undefined4 local_64 [8];
  undefined4 local_44 [8];
  undefined4 local_24 [8];
  
  if (*(char *)(param_1 + 0x3a4) != '\0') {
    thunk_FUN_0040c3a0(local_84,0x20,4,&LAB_0040119f);
    if (*(char *)(param_1 + 0x3a6) == '\0') {
      for (local_8c = 0; local_8c < 3; local_8c = local_8c + 1) {
        uVar8 = 0x3f800000;
        fVar7 = (float)*(int *)(param_1 + 0x3c0 + local_8c * 4) * 0.165 - 1.0;
        uVar6 = 0;
        uVar5 = 0xffffffff;
        uVar4 = 0x3f000000;
        puVar1 = D3DVECTOR_ctor(local_218,((float)local_8c + 0.3) * 0.075 * 640.0,0x42a33333,
                                0x3c23d70a);
        puVar1 = thunk_FUN_00422870(local_20c,puVar1,uVar4,uVar5,uVar6,fVar7,uVar8);
        puVar3 = local_84;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        }
        uVar8 = 0x3f56872b;
        fVar7 = (float)*(int *)(param_1 + 0x3c0 + local_8c * 4) * 0.165 - 1.0;
        uVar6 = 0;
        uVar5 = 0xffffffff;
        uVar4 = 0x3f000000;
        puVar1 = D3DVECTOR_ctor(local_244,((float)local_8c + 0.3) * 0.075 * 640.0,0x42066666,
                                0x3c23d70a);
        puVar1 = thunk_FUN_00422870(local_238,puVar1,uVar4,uVar5,uVar6,fVar7,uVar8);
        puVar3 = local_64;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        }
        uVar8 = 0x3f800000;
        fVar7 = (float)(*(int *)(param_1 + 0x3c0 + local_8c * 4) + 1) * 0.165 - 1.0;
        uVar6 = 0;
        uVar5 = 0xffffffff;
        uVar4 = 0x3f000000;
        puVar1 = D3DVECTOR_ctor(local_270,((float)local_8c + 1.3) * 0.075 * 640.0,0x42a33333,
                                0x3c23d70a);
        puVar1 = thunk_FUN_00422870(local_264,puVar1,uVar4,uVar5,uVar6,fVar7,uVar8);
        puVar3 = local_44;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        }
        uVar8 = 0x3f56872b;
        fVar7 = (float)(*(int *)(param_1 + 0x3c0 + local_8c * 4) + 1) * 0.165 - 1.0;
        uVar6 = 0;
        uVar5 = 0xffffffff;
        uVar4 = 0x3f000000;
        puVar1 = D3DVECTOR_ctor(local_29c,((float)local_8c + 1.3) * 0.075 * 640.0,0x42066666,
                                0x3c23d70a);
        puVar1 = thunk_FUN_00422870(local_290,puVar1,uVar4,uVar5,uVar6,fVar7,uVar8);
        puVar3 = local_24;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        }
        (**(code **)(**(int **)(param_1 + 0x3c) + 100))
                  (*(undefined4 *)(param_1 + 0x3c),5,0x1c4,local_84,4,0);
      }
      for (local_8c = 0; local_8c < 3; local_8c = local_8c + 1) {
        uVar8 = 0x3f800000;
        fVar7 = (float)*(int *)(param_1 + 0x3cc + local_8c * 4) * 0.165 - 1.0;
        uVar6 = 0;
        uVar5 = 0xffffffff;
        uVar4 = 0x3f000000;
        puVar1 = D3DVECTOR_ctor(local_2c8,((float)local_8c + 10.0) * 0.075 * 640.0,0x42a33333,
                                0x3c23d70a);
        puVar1 = thunk_FUN_00422870(local_2bc,puVar1,uVar4,uVar5,uVar6,fVar7,uVar8);
        puVar3 = local_84;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        }
        uVar8 = 0x3f56872b;
        fVar7 = (float)*(int *)(param_1 + 0x3cc + local_8c * 4) * 0.165 - 1.0;
        uVar6 = 0;
        uVar5 = 0xffffffff;
        uVar4 = 0x3f000000;
        puVar1 = D3DVECTOR_ctor(local_2f4,((float)local_8c + 10.0) * 0.075 * 640.0,0x42066666,
                                0x3c23d70a);
        puVar1 = thunk_FUN_00422870(local_2e8,puVar1,uVar4,uVar5,uVar6,fVar7,uVar8);
        puVar3 = local_64;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        }
        uVar8 = 0x3f800000;
        fVar7 = (float)(*(int *)(param_1 + 0x3cc + local_8c * 4) + 1) * 0.165 - 1.0;
        uVar6 = 0;
        uVar5 = 0xffffffff;
        uVar4 = 0x3f000000;
        puVar1 = D3DVECTOR_ctor(local_320,((float)local_8c + 11.0) * 0.075 * 640.0,0x42a33333,
                                0x3c23d70a);
        puVar1 = thunk_FUN_00422870(local_314,puVar1,uVar4,uVar5,uVar6,fVar7,uVar8);
        puVar3 = local_44;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        }
        uVar8 = 0x3f56872b;
        fVar7 = (float)(*(int *)(param_1 + 0x3cc + local_8c * 4) + 1) * 0.165 - 1.0;
        uVar6 = 0;
        uVar5 = 0xffffffff;
        uVar4 = 0x3f000000;
        puVar1 = D3DVECTOR_ctor(local_34c,((float)local_8c + 11.0) * 0.075 * 640.0,0x42066666,
                                0x3c23d70a);
        puVar1 = thunk_FUN_00422870(local_340,puVar1,uVar4,uVar5,uVar6,fVar7,uVar8);
        puVar3 = local_24;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        }
        (**(code **)(**(int **)(param_1 + 0x3c) + 100))
                  (*(undefined4 *)(param_1 + 0x3c),5,0x1c4,local_84,4,0);
      }
    }
    else {
      for (local_88 = 0; local_88 < 3; local_88 = local_88 + 1) {
        uVar8 = 0x3f800000;
        fVar7 = (float)*(int *)(param_1 + 0x3cc + local_88 * 4) * 0.165 - 1.0;
        uVar6 = 0;
        uVar5 = 0xffffffff;
        uVar4 = 0x3f000000;
        puVar1 = D3DVECTOR_ctor(local_b8,((float)local_88 + 0.3) * 0.075 * 640.0,0x42a33333,
                                0x3c23d70a);
        puVar1 = thunk_FUN_00422870(local_ac,puVar1,uVar4,uVar5,uVar6,fVar7,uVar8);
        puVar3 = local_84;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        }
        uVar8 = 0x3f56872b;
        fVar7 = (float)*(int *)(param_1 + 0x3cc + local_88 * 4) * 0.165 - 1.0;
        uVar6 = 0;
        uVar5 = 0xffffffff;
        uVar4 = 0x3f000000;
        puVar1 = D3DVECTOR_ctor(local_e4,((float)local_88 + 0.3) * 0.075 * 640.0,0x42066666,
                                0x3c23d70a);
        puVar1 = thunk_FUN_00422870(local_d8,puVar1,uVar4,uVar5,uVar6,fVar7,uVar8);
        puVar3 = local_64;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        }
        uVar8 = 0x3f800000;
        fVar7 = (float)(*(int *)(param_1 + 0x3cc + local_88 * 4) + 1) * 0.165 - 1.0;
        uVar6 = 0;
        uVar5 = 0xffffffff;
        uVar4 = 0x3f000000;
        puVar1 = D3DVECTOR_ctor(local_110,((float)local_88 + 1.3) * 0.075 * 640.0,0x42a33333,
                                0x3c23d70a);
        puVar1 = thunk_FUN_00422870(local_104,puVar1,uVar4,uVar5,uVar6,fVar7,uVar8);
        puVar3 = local_44;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        }
        uVar8 = 0x3f56872b;
        fVar7 = (float)(*(int *)(param_1 + 0x3cc + local_88 * 4) + 1) * 0.165 - 1.0;
        uVar6 = 0;
        uVar5 = 0xffffffff;
        uVar4 = 0x3f000000;
        puVar1 = D3DVECTOR_ctor(local_13c,((float)local_88 + 1.3) * 0.075 * 640.0,0x42066666,
                                0x3c23d70a);
        puVar1 = thunk_FUN_00422870(local_130,puVar1,uVar4,uVar5,uVar6,fVar7,uVar8);
        puVar3 = local_24;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        }
        (**(code **)(**(int **)(param_1 + 0x3c) + 100))
                  (*(undefined4 *)(param_1 + 0x3c),5,0x1c4,local_84,4,0);
      }
      for (local_88 = 0; local_88 < 3; local_88 = local_88 + 1) {
        uVar8 = 0x3f800000;
        fVar7 = (float)*(int *)(param_1 + 0x3c0 + local_88 * 4) * 0.165 - 1.0;
        uVar6 = 0;
        uVar5 = 0xffffffff;
        uVar4 = 0x3f000000;
        puVar1 = D3DVECTOR_ctor(local_168,((float)local_88 + 10.0) * 0.075 * 640.0,0x42a33333,
                                0x3c23d70a);
        puVar1 = thunk_FUN_00422870(local_15c,puVar1,uVar4,uVar5,uVar6,fVar7,uVar8);
        puVar3 = local_84;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        }
        uVar8 = 0x3f56872b;
        fVar7 = (float)*(int *)(param_1 + 0x3c0 + local_88 * 4) * 0.165 - 1.0;
        uVar6 = 0;
        uVar5 = 0xffffffff;
        uVar4 = 0x3f000000;
        puVar1 = D3DVECTOR_ctor(local_194,((float)local_88 + 10.0) * 0.075 * 640.0,0x42066666,
                                0x3c23d70a);
        puVar1 = thunk_FUN_00422870(local_188,puVar1,uVar4,uVar5,uVar6,fVar7,uVar8);
        puVar3 = local_64;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        }
        uVar8 = 0x3f800000;
        fVar7 = (float)(*(int *)(param_1 + 0x3c0 + local_88 * 4) + 1) * 0.165 - 1.0;
        uVar6 = 0;
        uVar5 = 0xffffffff;
        uVar4 = 0x3f000000;
        puVar1 = D3DVECTOR_ctor(local_1c0,((float)local_88 + 11.0) * 0.075 * 640.0,0x42a33333,
                                0x3c23d70a);
        puVar1 = thunk_FUN_00422870(local_1b4,puVar1,uVar4,uVar5,uVar6,fVar7,uVar8);
        puVar3 = local_44;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        }
        uVar8 = 0x3f56872b;
        fVar7 = (float)(*(int *)(param_1 + 0x3c0 + local_88 * 4) + 1) * 0.165 - 1.0;
        uVar6 = 0;
        uVar5 = 0xffffffff;
        uVar4 = 0x3f000000;
        puVar1 = D3DVECTOR_ctor(local_1ec,((float)local_88 + 11.0) * 0.075 * 640.0,0x42066666,
                                0x3c23d70a);
        puVar1 = thunk_FUN_00422870(local_1e0,puVar1,uVar4,uVar5,uVar6,fVar7,uVar8);
        puVar3 = local_24;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar3 = puVar3 + 1;
        }
        (**(code **)(**(int **)(param_1 + 0x3c) + 100))
                  (*(undefined4 *)(param_1 + 0x3c),5,0x1c4,local_84,4,0);
      }
    }
  }
  return;
}

