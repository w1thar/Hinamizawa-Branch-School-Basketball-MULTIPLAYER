// FUN_00428491 @ 00428491  size=568

void __fastcall FUN_00428491(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
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
  
  if (0.01 <= *(float *)(param_1 + 0x394)) {
    thunk_FUN_0040c3a0(local_84,0x20,4,&LAB_0040119f);
    uVar9 = 0x3f0f5c29;
    uVar8 = 0xbf35c28f;
    uVar7 = 0;
    lVar5 = __ftol();
    uVar1 = CONCAT31((uint3)(CONCAT22((short)((uint)((int)lVar5 << 0x18) >> 0x10),0xff00) >> 8) |
                     0xff00,0xff);
    uVar6 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_b0,0,0x43f00000,0);
    puVar2 = thunk_FUN_00422870(local_a4,puVar2,uVar6,uVar1,uVar7,uVar8,uVar9);
    puVar4 = local_84;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = 0x3f147ae1;
    uVar8 = 0xbf35c28f;
    uVar7 = 0;
    lVar5 = __ftol();
    uVar1 = CONCAT31((uint3)(CONCAT22((short)((uint)((int)lVar5 << 0x18) >> 0x10),0xff00) >> 8) |
                     0xff00,0xff);
    uVar6 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_dc,0,0,0);
    puVar2 = thunk_FUN_00422870(local_d0,puVar2,uVar6,uVar1,uVar7,uVar8,uVar9);
    puVar4 = local_64;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = 0x3f147ae1;
    uVar8 = 0xbf333333;
    uVar7 = 0;
    lVar5 = __ftol();
    uVar1 = CONCAT31((uint3)(CONCAT22((short)((uint)((int)lVar5 << 0x18) >> 0x10),0xff00) >> 8) |
                     0xff00,0xff);
    uVar6 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_108,0x44200000,0x43f00000,0);
    puVar2 = thunk_FUN_00422870(local_fc,puVar2,uVar6,uVar1,uVar7,uVar8,uVar9);
    puVar4 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = 0x3f0f5c29;
    uVar8 = 0xbf333333;
    uVar7 = 0;
    lVar5 = __ftol();
    uVar1 = CONCAT31((uint3)(CONCAT22((short)((uint)((int)lVar5 << 0x18) >> 0x10),0xff00) >> 8) |
                     0xff00,0xff);
    uVar6 = 0x3f000000;
    puVar2 = D3DVECTOR_ctor(local_134,0x44200000,0,0);
    puVar2 = thunk_FUN_00422870(local_128,puVar2,uVar6,uVar1,uVar7,uVar8,uVar9);
    puVar4 = local_24;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x94))(*(undefined4 *)(param_1 + 0x3c),0,5,0);
    (**(code **)(**(int **)(param_1 + 0x3c) + 100))
              (*(undefined4 *)(param_1 + 0x3c),5,0x1c4,local_84,4,0);
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x94))(*(undefined4 *)(param_1 + 0x3c),0,5,2);
  }
  return;
}

