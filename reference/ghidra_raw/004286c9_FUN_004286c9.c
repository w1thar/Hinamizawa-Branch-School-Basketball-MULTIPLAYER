// FUN_004286c9 @ 004286c9  size=379

void __fastcall FUN_004286c9(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  
  if (*(char *)(param_1 + 0x39a) != '\0') {
    thunk_FUN_0040c3a0(local_84,0x20,4,&LAB_0040119f);
    uVar8 = 0x3eb851ec;
    uVar7 = 0xbf7d70a4;
    uVar6 = 0;
    uVar5 = 0xffffffff;
    uVar4 = 0x3f000000;
    puVar1 = D3DVECTOR_ctor(local_b0,0x43000000,0x43100000,0x3c23d70a);
    puVar1 = thunk_FUN_00422870(local_a4,puVar1,uVar4,uVar5,uVar6,uVar7,uVar8);
    puVar3 = local_84;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    uVar8 = 0x3c23d70a;
    uVar7 = 0xbf7d70a4;
    uVar6 = 0;
    uVar5 = 0xffffffff;
    uVar4 = 0x3f000000;
    puVar1 = D3DVECTOR_ctor(local_dc,0x43000000,0x41c00000,0x3c23d70a);
    puVar1 = thunk_FUN_00422870(local_d0,puVar1,uVar4,uVar5,uVar6,uVar7,uVar8);
    puVar3 = local_64;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    uVar8 = 0x3eb851ec;
    uVar7 = 0xbc23d70a;
    uVar6 = 0;
    uVar5 = 0xffffffff;
    uVar4 = 0x3f000000;
    puVar1 = D3DVECTOR_ctor(local_108,0x44000000,0x43100000,0x3c23d70a);
    puVar1 = thunk_FUN_00422870(local_fc,puVar1,uVar4,uVar5,uVar6,uVar7,uVar8);
    puVar3 = local_44;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    uVar8 = 0x3c23d70a;
    uVar7 = 0xbc23d70a;
    uVar6 = 0;
    uVar5 = 0xffffffff;
    uVar4 = 0x3f000000;
    puVar1 = D3DVECTOR_ctor(local_134,0x44000000,0x41c00000,0x3c23d70a);
    puVar1 = thunk_FUN_00422870(local_128,puVar1,uVar4,uVar5,uVar6,uVar7,uVar8);
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

