// FUN_00425170 @ 00425170  size=1039

void __thiscall FUN_00425170(void *this,float param_1,float param_2)

{
  undefined4 *puVar1;
  HMENU__ *pHVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_138 [12];
  undefined1 local_12c [32];
  undefined1 local_10c [12];
  undefined1 local_100 [32];
  undefined1 local_e0 [12];
  undefined1 local_d4 [32];
  undefined1 local_b4 [12];
  undefined1 local_a8 [32];
  undefined4 local_88 [6];
  float local_70;
  float local_6c;
  undefined4 local_68 [6];
  float local_50;
  float local_4c;
  undefined4 local_48 [6];
  float local_30;
  float local_2c;
  undefined4 local_28 [6];
  float local_10;
  float local_c;
  float local_8;
  
  thunk_FUN_0040c3a0(local_88,0x20,4,&LAB_0040119f);
  uVar9 = 0x3f800000;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0xffffffff;
  uVar5 = 0x3f000000;
  puVar1 = D3DVECTOR_ctor(local_b4,0,0x43f00000,0x3f7ff972);
  puVar1 = thunk_FUN_00422870(local_a8,puVar1,uVar5,uVar6,uVar7,uVar8,uVar9);
  puVar4 = local_88;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0xffffffff;
  uVar5 = 0x3f000000;
  puVar1 = D3DVECTOR_ctor(local_e0,0,0,0x3f7ff972);
  puVar1 = thunk_FUN_00422870(local_d4,puVar1,uVar5,uVar6,uVar7,uVar8,uVar9);
  puVar4 = local_68;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar9 = 0x3f800000;
  uVar8 = 0x3f800000;
  uVar7 = 0;
  uVar6 = 0xffffffff;
  uVar5 = 0x3f000000;
  puVar1 = D3DVECTOR_ctor(local_10c,0x44200000,0x43f00000,0x3f7ff972);
  puVar1 = thunk_FUN_00422870(local_100,puVar1,uVar5,uVar6,uVar7,uVar8,uVar9);
  puVar4 = local_48;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar9 = 0;
  uVar8 = 0x3f800000;
  uVar7 = 0;
  uVar6 = 0xffffffff;
  uVar5 = 0x3f000000;
  puVar1 = D3DVECTOR_ctor(local_138,0x44200000,0,0x3f7ff972);
  puVar1 = thunk_FUN_00422870(local_12c,puVar1,uVar5,uVar6,uVar7,uVar8,uVar9);
  puVar4 = local_28;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  if (-1.57 <= *(float *)((int)this + 900) || param_1 <= 1.57) {
    if (*(float *)((int)this + 900) <= 1.57 || -1.57 <= param_1) {
      *(float *)((int)this + 0x380) =
           (param_1 - *(float *)((int)this + 900)) + *(float *)((int)this + 0x380);
    }
    else {
      *(float *)((int)this + 0x380) =
           (param_1 - *(float *)((int)this + 900)) + 6.28 + *(float *)((int)this + 0x380);
    }
  }
  else {
    *(float *)((int)this + 0x380) =
         ((param_1 - *(float *)((int)this + 900)) - 6.28) + *(float *)((int)this + 0x380);
  }
  *(float *)((int)this + 900) = param_1;
  local_50 = (*(float *)((int)this + 0x380) * 1.0 - param_2 * 0.55) + *(float *)((int)this + 0x37c);
  local_70 = local_50 + 0.5;
  local_30 = local_50 + 1.5;
  local_10 = local_50 + 1.0;
  local_6c = *(float *)((int)this + 0x37c) * 0.5 + param_2 * 1.1;
  local_4c = local_6c + 1.0;
  *(float *)((int)this + 0x37c) =
       *(float *)((int)this + 0x54) * 0.02 + *(float *)((int)this + 0x37c);
  local_2c = local_6c;
  local_c = local_4c;
  local_8 = local_6c;
  if (*(int *)((int)this + 0x26c) == 9) {
    pHVar2 = GetMenu((HWND__ *)s_basket_cloud2_bmp_00454128);
    (**(code **)(**(int **)((int)this + 0x3c) + 0x8c))(*(undefined4 *)((int)this + 0x3c),0,pHVar2);
  }
  else {
    pHVar2 = GetMenu((HWND__ *)s_basket_clouds_bmp_0045413c);
    (**(code **)(**(int **)((int)this + 0x3c) + 0x8c))(*(undefined4 *)((int)this + 0x3c),0,pHVar2);
  }
  (**(code **)(**(int **)((int)this + 0x3c) + 0x50))(*(undefined4 *)((int)this + 0x3c),0xe,0);
  (**(code **)(**(int **)((int)this + 0x3c) + 100))
            (*(undefined4 *)((int)this + 0x3c),5,0x1c4,local_88,4,0);
  (**(code **)(**(int **)((int)this + 0x3c) + 0x50))(*(undefined4 *)((int)this + 0x3c),0xe,1);
  return;
}

