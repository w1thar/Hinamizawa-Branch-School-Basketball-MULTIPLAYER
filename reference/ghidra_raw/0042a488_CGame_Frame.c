// CGame_Frame @ 0042a488  size=929

void __fastcall CGame_Frame(void *param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined4 auStack_c0 [12];
  undefined4 uStack_90;
  float fVar8;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  int local_c;
  int local_8;
  
  if (*(int *)((int)param_1 + 0x26c) == 1) {
    State1_Update((int)param_1);
  }
  else if (*(int *)((int)param_1 + 0x26c) == 2) {
    State2_Update((int)param_1);
  }
  else if (*(int *)((int)param_1 + 0x26c) == 3) {
    State3_Update((int)param_1);
  }
  else if (*(int *)((int)param_1 + 0x26c) == 4) {
    State4_Update(param_1);
  }
  else if (*(int *)((int)param_1 + 0x26c) == 5) {
    State5_Update(param_1);
  }
  else if (*(int *)((int)param_1 + 0x26c) == 6) {
    State6_Update(param_1);
  }
  else if (*(int *)((int)param_1 + 0x26c) == 7) {
    State7_Update((int)param_1);
  }
  else if (*(int *)((int)param_1 + 0x26c) == 8) {
    State8_Update((int)param_1);
  }
  else if (*(int *)((int)param_1 + 0x26c) == 9) {
    State9_Update((int)param_1);
  }
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    CPlayer_Update(*(void **)((int)param_1 + local_8 * 4 + 0xd8),*(float *)((int)param_1 + 0x54));
  }
  thunk_FUN_0042b23c((uint)param_1);
  iVar1 = (**(code **)(**(int **)((int)param_1 + 0x40) + 0x60))();
  if (iVar1 == -0x7789fe3e) {
    (**(code **)(**(int **)((int)param_1 + 0x40) + 0x6c))();
  }
  iVar1 = (**(code **)(**(int **)((int)param_1 + 0x44) + 0x60))();
  if (iVar1 == -0x7789fe3e) {
    (**(code **)(**(int **)((int)param_1 + 0x44) + 0x6c))();
  }
  iVar1 = (**(code **)(**(int **)((int)param_1 + 0x4c) + 0x60))();
  if (iVar1 == -0x7789fe3e) {
    (**(code **)(**(int **)((int)param_1 + 0x4c) + 0x6c))();
  }
  pfVar2 = (float *)D3DVECTOR_ctor(local_18,0,0x3f800000,0);
  pfVar3 = (float *)D3DVECTOR_ctor(local_24,*(float *)((int)param_1 + 0x21c) +
                                            *(float *)((int)param_1 + 0x228),
                                   *(float *)((int)param_1 + 0x220) +
                                   *(float *)((int)param_1 + 0x22c),
                                   *(float *)((int)param_1 + 0x224) +
                                   *(float *)((int)param_1 + 0x230));
  pfVar4 = (float *)D3DVECTOR_ctor(local_30,*(undefined4 *)((int)param_1 + 0x21c),
                                   *(undefined4 *)((int)param_1 + 0x220),
                                   *(undefined4 *)((int)param_1 + 0x224));
  D3DUtil_SetViewMatrix((float *)((int)param_1 + 0x19c),pfVar4,pfVar3,pfVar2);
  (**(code **)(**(int **)((int)param_1 + 0x3c) + 0x2c))();
  (**(code **)(**(int **)((int)param_1 + 0x3c) + 0x28))();
  (**(code **)(**(int **)((int)param_1 + 0x3c) + 0x48))();
  iVar1 = (**(code **)(**(int **)((int)param_1 + 0x3c) + 0x14))();
  if (-1 < iVar1) {
    fVar7 = (float10)thunk_FUN_0041b040(*(float *)((int)param_1 + 0x22c),1.0);
    fVar8 = (float)fVar7;
    uStack_90 = 0x42a75b;
    fVar7 = (float10)thunk_FUN_0041b040(*(float *)((int)param_1 + 0x228),
                                        *(float *)((int)param_1 + 0x230));
    thunk_FUN_00425170(param_1,(float)fVar7,fVar8);
    thunk_FUN_0042a829((int)param_1);
    for (local_c = 0; local_c < 6; local_c = local_c + 1) {
      puVar5 = (undefined4 *)((int)param_1 + 0x1dc);
      puVar6 = auStack_c0;
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      CPlayer_Render(*(void **)((int)param_1 + local_c * 4 + 0xd8),*(int **)((int)param_1 + 0x3c));
    }
    thunk_FUN_0042a8fa((int)param_1);
    thunk_FUN_0042134c((int)param_1);
    thunk_FUN_00421d0f((int)param_1);
    thunk_FUN_00422100((int)param_1);
    thunk_FUN_00428844((int)param_1);
    thunk_FUN_0042557f((int)param_1);
    thunk_FUN_004259a7((int)param_1);
    thunk_FUN_00428491((int)param_1);
    thunk_FUN_004286c9((int)param_1);
    (**(code **)(**(int **)((int)param_1 + 0x3c) + 0x18))();
  }
  thunk_FUN_0041b070(param_1);
  thunk_FUN_004022d2((int)param_1);
  return;
}

