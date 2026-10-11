// Game::fn_421d0f @ 00421d0f  size=1009

void __thiscall Game::fn_421d0f(Game *this)

{
  Vec3 *pVVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_294 [12];
  undefined1 local_288 [32];
  undefined1 local_268 [12];
  undefined1 local_25c [32];
  undefined1 local_23c [12];
  undefined1 local_230 [32];
  undefined1 local_210 [12];
  undefined1 local_204 [32];
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
  
  if (this->b3a5 != '\0') {
    thunk_FUN_0040c3a0(local_84,0x20,4,&LAB_0040119f);
    uVar9 = 0x3f1b22d1;
    uVar8 = 0xbe9f3b64;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3_Set(local_b0,(Vec3 *)0x431e6666,81.6,0.01,0.5);
    puVar2 = thunk_FUN_00422870(local_a4,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_84;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = 0x3ef851ec;
    uVar8 = 0xbe9f3b64;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3_Set(local_dc,(Vec3 *)0x431e6666,24.0,0.01,0.5);
    puVar2 = thunk_FUN_00422870(local_d0,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_64;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = 0x3f1b22d1;
    uVar8 = 0xbe000000;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3_Set(local_108,(Vec3 *)0x4371999a,81.6,0.01,0.5);
    puVar2 = thunk_FUN_00422870(local_fc,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = 0x3ef851ec;
    uVar8 = 0xbe000000;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3_Set(local_134,(Vec3 *)0x4371999a,24.0,0.01,0.5);
    puVar2 = thunk_FUN_00422870(local_128,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_24;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_84,4,0);
    uVar9 = 0x3f1b22d1;
    uVar8 = 0xbe9f3b64;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3_Set(local_160,(Vec3 *)0x438b3333,72.0,0.01,0.5);
    puVar2 = thunk_FUN_00422870(local_154,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_84;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = 0x3ef851ec;
    uVar8 = 0xbe9f3b64;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3_Set(local_18c,(Vec3 *)0x438b3333,24.0,0.01,0.5);
    puVar2 = thunk_FUN_00422870(local_180,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_64;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = 0x3f1b22d1;
    uVar8 = 0xbe000000;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3_Set(local_1b8,(Vec3 *)0x43b4cccd,72.0,0.01,0.5);
    puVar2 = thunk_FUN_00422870(local_1ac,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = 0x3ef851ec;
    uVar8 = 0xbe000000;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3_Set(local_1e4,(Vec3 *)0x43b4cccd,24.0,0.01,0.5);
    puVar2 = thunk_FUN_00422870(local_1d8,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_24;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_84,4,0);
    uVar9 = 0x3f1b22d1;
    uVar8 = 0xbe9f3b64;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3_Set(local_210,(Vec3 *)0x43c66666,81.6,0.01,0.5);
    puVar2 = thunk_FUN_00422870(local_204,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_84;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = 0x3ef851ec;
    uVar8 = 0xbe9f3b64;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3_Set(local_23c,(Vec3 *)0x43c66666,24.0,0.01,0.5);
    puVar2 = thunk_FUN_00422870(local_230,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_64;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = 0x3f1b22d1;
    uVar8 = 0xbe000000;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3_Set(local_268,(Vec3 *)0x43f00000,81.6,0.01,0.5);
    puVar2 = thunk_FUN_00422870(local_25c,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = 0x3ef851ec;
    uVar8 = 0xbe000000;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3_Set(local_294,(Vec3 *)0x43f00000,24.0,0.01,0.5);
    puVar2 = thunk_FUN_00422870(local_288,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_24;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_84,4,0);
  }
  return;
}

