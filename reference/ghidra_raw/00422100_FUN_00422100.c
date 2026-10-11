// FUN_00422100 @ 00422100  size=753

void __fastcall FUN_00422100(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_1e4 [12];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [12];
  undefined1 local_1ac [32];
  undefined1 local_18c [12];
  undefined1 local_180 [32];
  undefined1 local_160 [12];
  undefined1 local_154 [32];
  undefined1 local_134 [12];
  undefined1 local_128 [32];
  undefined1 local_108 [12];
  undefined1 local_fc [32];
  undefined1 local_dc [12];
  undefined1 local_d0 [32];
  undefined1 local_b0 [12];
  undefined1 local_a4 [32];
  undefined4 local_84 [8];
  undefined4 local_64 [8];
  undefined4 local_44 [8];
  undefined4 local_24 [8];
  
  if (1e-05 <= *(float *)(param_1 + 0x3a0)) {
    thunk_FUN_0040c3a0(local_84,0x20,4,&LAB_0040119f);
    uVar8 = 0x3eb851ec;
    uVar7 = 0xbf800000;
    uVar6 = 0;
    uVar5 = 0xffffffff;
    uVar4 = 0x3f000000;
    puVar1 = D3DVECTOR_ctor(local_b0,0x40cccccc,0x43eb3334,0x3c23d70a);
    puVar1 = thunk_FUN_00422870(local_a4,puVar1,uVar4,uVar5,uVar6,uVar7,uVar8);
    puVar3 = local_84;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    uVar8 = 0x3eb851ec;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0xffffffff;
    uVar4 = 0x3f000000;
    puVar1 = D3DVECTOR_ctor(local_dc,0x40cccccc,0x42c00000,0x3c23d70a);
    puVar1 = thunk_FUN_00422870(local_d0,puVar1,uVar4,uVar5,uVar6,uVar7,uVar8);
    puVar3 = local_64;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    uVar8 = 0x3ee147ae;
    uVar7 = 0xbf800000;
    uVar6 = 0;
    uVar5 = 0xffffffff;
    uVar4 = 0x3f000000;
    puVar1 = D3DVECTOR_ctor(local_108,0x41cccccc,0x43eb3334,0x3c23d70a);
    puVar1 = thunk_FUN_00422870(local_fc,puVar1,uVar4,uVar5,uVar6,uVar7,uVar8);
    puVar3 = local_44;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    uVar8 = 0x3ee147ae;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0xffffffff;
    uVar4 = 0x3f000000;
    puVar1 = D3DVECTOR_ctor(local_134,0x41cccccc,0x42c00000,0x3c23d70a);
    puVar1 = thunk_FUN_00422870(local_128,puVar1,uVar4,uVar5,uVar6,uVar7,uVar8);
    puVar3 = local_24;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    (**(code **)(**(int **)(param_1 + 0x3c) + 100))
              (*(undefined4 *)(param_1 + 0x3c),5,0x1c4,local_84,4,0);
    uVar8 = 0x3d8f5c29;
    uVar7 = 0xbf333333;
    uVar6 = 0;
    uVar5 = 0xffffffff;
    uVar4 = 0x3f000000;
    puVar1 = D3DVECTOR_ctor(local_160,0x414ccccc,0x43e40000,0x3c23d70a);
    puVar1 = thunk_FUN_00422870(local_154,puVar1,uVar4,uVar5,uVar6,uVar7,uVar8);
    puVar3 = local_84;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    uVar8 = 0x3d8f5c29;
    uVar7 = 0xbf333333;
    uVar6 = 0;
    uVar5 = 0xffffffff;
    uVar4 = 0x3f000000;
    puVar1 = D3DVECTOR_ctor(local_18c,0x414ccccc,(0.95 - *(float *)(param_1 + 0x3a0) * 0.72) * 480.0
                            ,0x3c23d70a);
    puVar1 = thunk_FUN_00422870(local_180,puVar1,uVar4,uVar5,uVar6,uVar7,uVar8);
    puVar3 = local_64;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    uVar8 = 0x3d8f5c29;
    uVar7 = 0xbf333333;
    uVar6 = 0;
    uVar5 = 0xffffffff;
    uVar4 = 0x3f000000;
    puVar1 = D3DVECTOR_ctor(local_1b8,0x41999999,0x43e40000,0x3c23d70a);
    puVar1 = thunk_FUN_00422870(local_1ac,puVar1,uVar4,uVar5,uVar6,uVar7,uVar8);
    puVar3 = local_44;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    uVar8 = 0x3d8f5c29;
    uVar7 = 0xbf333333;
    uVar6 = 0;
    uVar5 = 0xffffffff;
    uVar4 = 0x3f000000;
    puVar1 = D3DVECTOR_ctor(local_1e4,0x41999999,(0.95 - *(float *)(param_1 + 0x3a0) * 0.72) * 480.0
                            ,0x3c23d70a);
    puVar1 = thunk_FUN_00422870(local_1d8,puVar1,uVar4,uVar5,uVar6,uVar7,uVar8);
    puVar3 = local_24;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    (**(code **)(**(int **)(param_1 + 0x3c) + 100))
              (*(undefined4 *)(param_1 + 0x3c),5,0x1c4,local_84,4,0);
  }
  return;
}

