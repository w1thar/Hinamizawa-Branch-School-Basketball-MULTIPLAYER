// Game::fn_422100 @ 00422100  size=753

void __thiscall Game::fn_422100(Game *this)

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
  
  if (1e-05 <= this->f3a0) {
    thunk_FUN_0040c3a0(local_84,0x20,4,&LAB_0040119f);
    uVar9 = 0x3eb851ec;
    uVar8 = 0xbf800000;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3::Ctor(&local_b0,6.3999996,470.40002,0.01);
    puVar2 = thunk_FUN_00422870(local_a4,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_84;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = 0x3eb851ec;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3::Ctor(&local_dc,6.3999996,96.0,0.01);
    puVar2 = thunk_FUN_00422870(local_d0,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_64;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = 0x3ee147ae;
    uVar8 = 0xbf800000;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3::Ctor(&local_108,25.599998,470.40002,0.01);
    puVar2 = thunk_FUN_00422870(local_fc,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = 0x3ee147ae;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3::Ctor(&local_134,25.599998,96.0,0.01);
    puVar2 = thunk_FUN_00422870(local_128,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_24;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_84,4,0);
    uVar9 = 0x3d8f5c29;
    uVar8 = 0xbf333333;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3::Ctor(&local_160,12.799999,456.0,0.01);
    puVar2 = thunk_FUN_00422870(local_154,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_84;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = 0x3d8f5c29;
    uVar8 = 0xbf333333;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3::Ctor(&local_18c,12.799999,(0.95 - this->f3a0 * 0.72) * 480.0,0.01);
    puVar2 = thunk_FUN_00422870(local_180,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_64;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = 0x3d8f5c29;
    uVar8 = 0xbf333333;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3::Ctor(&local_1b8,19.199999,456.0,0.01);
    puVar2 = thunk_FUN_00422870(local_1ac,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = 0x3d8f5c29;
    uVar8 = 0xbf333333;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3::Ctor(&local_1e4,19.199999,(0.95 - this->f3a0 * 0.72) * 480.0,0.01);
    puVar2 = thunk_FUN_00422870(local_1d8,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
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

