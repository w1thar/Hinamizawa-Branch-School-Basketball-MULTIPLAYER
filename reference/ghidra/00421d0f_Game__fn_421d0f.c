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
  Vec3 local_294;
  undefined1 local_288 [32];
  Vec3 local_268;
  undefined1 local_25c [32];
  Vec3 local_23c;
  undefined1 local_230 [32];
  Vec3 local_210;
  undefined1 local_204 [32];
  Vec3 local_1e4;
  undefined1 local_1d8 [32];
  Vec3 local_1b8;
  undefined1 local_1ac [32];
  Vec3 local_18c;
  undefined1 local_180 [32];
  Vec3 local_160;
  undefined1 local_154 [32];
  Vec3 local_134;
  undefined1 local_128 [32];
  Vec3 local_108;
  undefined1 local_fc [32];
  Vec3 local_dc;
  undefined1 local_d0 [32];
  Vec3 local_b0;
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
    pVVar1 = Vec3::Ctor(&local_b0,158.4,81.6,0.01);
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
    pVVar1 = Vec3::Ctor(&local_dc,158.4,24.0,0.01);
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
    pVVar1 = Vec3::Ctor(&local_108,241.6,81.6,0.01);
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
    pVVar1 = Vec3::Ctor(&local_134,241.6,24.0,0.01);
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
    pVVar1 = Vec3::Ctor(&local_160,278.4,72.0,0.01);
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
    pVVar1 = Vec3::Ctor(&local_18c,278.4,24.0,0.01);
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
    pVVar1 = Vec3::Ctor(&local_1b8,361.6,72.0,0.01);
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
    pVVar1 = Vec3::Ctor(&local_1e4,361.6,24.0,0.01);
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
    pVVar1 = Vec3::Ctor(&local_210,396.8,81.6,0.01);
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
    pVVar1 = Vec3::Ctor(&local_23c,396.8,24.0,0.01);
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
    pVVar1 = Vec3::Ctor(&local_268,480.0,81.6,0.01);
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
    pVVar1 = Vec3::Ctor(&local_294,480.0,24.0,0.01);
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

