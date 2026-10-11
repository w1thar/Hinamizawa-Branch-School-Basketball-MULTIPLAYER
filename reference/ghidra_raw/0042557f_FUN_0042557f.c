// FUN_0042557f @ 0042557f  size=1064

void __fastcall FUN_0042557f(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_1d4 [12];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [12];
  undefined1 local_19c [32];
  undefined1 local_17c [12];
  undefined1 local_170 [32];
  undefined1 local_150 [12];
  undefined1 local_144 [32];
  undefined4 local_124 [8];
  undefined4 local_104 [8];
  undefined4 local_e4 [8];
  undefined4 local_c4 [8];
  float local_a4;
  float local_a0;
  float local_9c;
  float local_94;
  float local_90;
  float local_8c;
  float local_84;
  float local_80;
  float local_7c;
  float local_74;
  float local_70;
  float local_6c;
  float local_64;
  undefined1 local_60 [64];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  
  thunk_FUN_00403880(&local_a0);
  thunk_FUN_00403880(local_60);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x30))(*(undefined4 *)(param_1 + 0x3c),3,local_60);
  thunk_FUN_004038d0(&local_a0,param_1 + 0x19c,(int)local_60);
  local_c = *(float *)(param_1 + 0x21c) - *(float *)(param_1 + 0x234);
  local_18 = *(float *)(param_1 + 0x220) - *(float *)(param_1 + 0x238) / 2.0;
  local_20 = *(float *)(param_1 + 0x224) - *(float *)(param_1 + 0x23c);
  local_8 = 0x3f800000;
  local_14 = local_20 * local_80 + local_18 * local_90 + local_c * local_a0 + local_70;
  local_1c = local_20 * local_7c + local_18 * local_8c + local_c * local_9c + local_6c;
  local_10 = local_20 * local_74 + local_18 * local_84 + local_c * local_94 + local_64;
  if (local_10 <= 0.0) {
    *(undefined4 *)(param_1 + 0x388) = 0xc3fa0000;
  }
  else {
    *(float *)(param_1 + 0x388) = ((local_14 / local_10) * 640.0) / 2.0 + 320.0;
    *(float *)(param_1 + 0x38c) = 240.0 - ((local_1c / local_10) * 480.0) / 2.0;
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x50))(*(undefined4 *)(param_1 + 0x3c),0x14,4);
    thunk_FUN_0040c3a0(local_124,0x20,4,&LAB_0040119f);
    FUN_00433410();
    lVar4 = __ftol();
    local_a4 = (float)(int)lVar4 + 53.333332;
    uVar9 = 0x3f54fdf4;
    uVar8 = 0xbf1a5e35;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    puVar1 = D3DVECTOR_ctor(local_150,*(float *)(param_1 + 0x388) - local_a4,
                            *(float *)(param_1 + 0x38c) + local_a4,0x3f7ff972);
    puVar1 = thunk_FUN_00422870(local_144,puVar1,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar3 = local_124;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    uVar9 = 0x3f256042;
    uVar8 = 0xbf1a5e35;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    puVar1 = D3DVECTOR_ctor(local_17c,*(float *)(param_1 + 0x388) - local_a4,
                            *(float *)(param_1 + 0x38c) - local_a4,0x3f7ff972);
    puVar1 = thunk_FUN_00422870(local_170,puVar1,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar3 = local_104;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    uVar9 = 0x3f54fdf4;
    uVar8 = 0xbf4a7efa;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    puVar1 = D3DVECTOR_ctor(local_1a8,*(float *)(param_1 + 0x388) + local_a4,
                            *(float *)(param_1 + 0x38c) + local_a4,0x3f7ff972);
    puVar1 = thunk_FUN_00422870(local_19c,puVar1,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar3 = local_e4;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    uVar9 = 0x3f256042;
    uVar8 = 0xbf4a7efa;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    puVar1 = D3DVECTOR_ctor(local_1d4,*(float *)(param_1 + 0x388) + local_a4,
                            *(float *)(param_1 + 0x38c) - local_a4,0x3f7ff972);
    puVar1 = thunk_FUN_00422870(local_1c8,puVar1,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar3 = local_c4;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    }
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x50))(*(undefined4 *)(param_1 + 0x3c),0xe,0);
    (**(code **)(**(int **)(param_1 + 0x3c) + 100))
              (*(undefined4 *)(param_1 + 0x3c),5,0x1c4,local_124,4,0);
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x50))(*(undefined4 *)(param_1 + 0x3c),0xe,1);
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x50))(*(undefined4 *)(param_1 + 0x3c),0x14,6);
  }
  return;
}

