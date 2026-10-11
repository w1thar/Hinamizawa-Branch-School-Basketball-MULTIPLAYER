// Game::fn_4286c9 @ 004286c9  size=379

void __thiscall Game::fn_4286c9(Game *this)

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
  
  if (this->b39a != '\0') {
    thunk_FUN_0040c3a0(local_84,0x20,4,&LAB_0040119f);
    uVar9 = 0x3eb851ec;
    uVar8 = 0xbf7d70a4;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3::Ctor(&local_b0,128.0,144.0,0.01);
    puVar2 = thunk_FUN_00422870(local_a4,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_84;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = 0x3c23d70a;
    uVar8 = 0xbf7d70a4;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3::Ctor(&local_dc,128.0,24.0,0.01);
    puVar2 = thunk_FUN_00422870(local_d0,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_64;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = 0x3eb851ec;
    uVar8 = 0xbc23d70a;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3::Ctor(&local_108,512.0,144.0,0.01);
    puVar2 = thunk_FUN_00422870(local_fc,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
    puVar4 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar9 = 0x3c23d70a;
    uVar8 = 0xbc23d70a;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    uVar5 = 0x3f000000;
    pVVar1 = Vec3::Ctor(&local_134,512.0,24.0,0.01);
    puVar2 = thunk_FUN_00422870(local_128,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
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

