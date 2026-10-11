// Game::fn_428844 @ 00428844  size=2278

void __thiscall Game::fn_428844(Game *this)

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
  Vec3 local_4d4;
  undefined1 local_4c8 [32];
  Vec3 local_4a8;
  undefined1 local_49c [32];
  Vec3 local_47c;
  undefined1 local_470 [32];
  Vec3 local_450;
  undefined1 local_444 [32];
  Vec3 local_424;
  undefined1 local_418 [32];
  Vec3 local_3f8;
  undefined1 local_3ec [32];
  Vec3 local_3cc;
  undefined1 local_3c0 [32];
  Vec3 local_3a0;
  undefined1 local_394 [32];
  Vec3 local_374;
  undefined1 local_368 [32];
  Vec3 local_348;
  undefined1 local_33c [32];
  Vec3 local_31c;
  undefined1 local_310 [32];
  Vec3 local_2f0;
  undefined1 local_2e4 [32];
  Vec3 local_2c4;
  undefined1 local_2b8 [32];
  Vec3 local_298;
  undefined1 local_28c [32];
  Vec3 local_26c;
  undefined1 local_260 [32];
  Vec3 local_240;
  undefined1 local_234 [32];
  Vec3 local_214;
  undefined1 local_208 [32];
  Vec3 local_1e8;
  undefined1 local_1dc [32];
  Vec3 local_1bc;
  undefined1 local_1b0 [32];
  Vec3 local_190;
  undefined1 local_184 [32];
  Vec3 local_164;
  undefined1 local_158 [32];
  Vec3 local_138;
  undefined1 local_12c [32];
  Vec3 local_10c;
  undefined1 local_100 [32];
  Vec3 local_e0;
  undefined1 local_d4 [32];
  Vec3 local_b4;
  undefined1 local_a8 [32];
  float local_88;
  undefined4 local_84 [8];
  undefined4 local_64 [8];
  undefined4 local_44 [8];
  undefined4 local_24 [8];
  
  if (this->i39c != 0) {
    thunk_FUN_0040c3a0(local_84,0x20,4,&LAB_0040119f);
    if (this->i39c == -1) {
      uVar9 = 0x3f347ae1;
      uVar8 = 0xbde76c8b;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_b4,96.0,264.0,0.01);
      puVar2 = thunk_FUN_00422870(local_a8,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_84;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      uVar9 = 0x3f4fdf3b;
      uVar8 = 0xbba3d70a;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_e0,96.0,312.0,0.01);
      puVar2 = thunk_FUN_00422870(local_d4,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_64;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      uVar9 = 0x3f347ae1;
      uVar8 = 0xbba3d70a;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_10c,64.0,288.0,0.01);
      puVar2 = thunk_FUN_00422870(local_100,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_44;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      (*this->device->lpVtbl->DrawPrimitive)(this->device,4,0x1c4,local_84,3,0);
      uVar9 = 0x3f347ae1;
      uVar8 = 0xbde76c8b;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_138,288.0,264.0,0.01);
      puVar2 = thunk_FUN_00422870(local_12c,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_84;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      uVar9 = 0x3f347ae1;
      uVar8 = 0xbba3d70a;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_164,320.0,288.0,0.01);
      puVar2 = thunk_FUN_00422870(local_158,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_64;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      uVar9 = 0x3f4fdf3b;
      uVar8 = 0xbba3d70a;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_190,288.0,312.0,0.01);
      puVar2 = thunk_FUN_00422870(local_184,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_44;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      (*this->device->lpVtbl->DrawPrimitive)(this->device,4,0x1c4,local_84,3,0);
    }
    else if (this->i39c == -2) {
      uVar9 = 0x3f347ae1;
      uVar8 = 0xbde76c8b;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_1bc,89.6,268.8,0.01);
      puVar2 = thunk_FUN_00422870(local_1b0,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_84;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      uVar9 = 0x3f4fdf3b;
      uVar8 = 0xbba3d70a;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_1e8,89.6,307.19998,0.01);
      puVar2 = thunk_FUN_00422870(local_1dc,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_64;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      uVar9 = 0x3f347ae1;
      uVar8 = 0xbba3d70a;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_214,70.4,288.0,0.01);
      puVar2 = thunk_FUN_00422870(local_208,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_44;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      (*this->device->lpVtbl->DrawPrimitive)(this->device,4,0x1c4,local_84,3,0);
      uVar9 = 0x3f347ae1;
      uVar8 = 0xbde76c8b;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_240,284.8,261.6,0.01);
      puVar2 = thunk_FUN_00422870(local_234,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_84;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      uVar9 = 0x3f347ae1;
      uVar8 = 0xbba3d70a;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_26c,323.2,288.0,0.01);
      puVar2 = thunk_FUN_00422870(local_260,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_64;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      uVar9 = 0x3f4fdf3b;
      uVar8 = 0xbba3d70a;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_298,284.8,314.4,0.01);
      puVar2 = thunk_FUN_00422870(local_28c,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_44;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      (*this->device->lpVtbl->DrawPrimitive)(this->device,4,0x1c4,local_84,3,0);
    }
    else if (this->i39c == -3) {
      uVar9 = 0x3f347ae1;
      uVar8 = 0xbde76c8b;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_2c4,99.2,261.6,0.01);
      puVar2 = thunk_FUN_00422870(local_2b8,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_84;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      uVar9 = 0x3f4fdf3b;
      uVar8 = 0xbba3d70a;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_2f0,99.2,314.4,0.01);
      puVar2 = thunk_FUN_00422870(local_2e4,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_64;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      uVar9 = 0x3f347ae1;
      uVar8 = 0xbba3d70a;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_31c,60.8,288.0,0.01);
      puVar2 = thunk_FUN_00422870(local_310,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_44;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      (*this->device->lpVtbl->DrawPrimitive)(this->device,4,0x1c4,local_84,3,0);
      uVar9 = 0x3f347ae1;
      uVar8 = 0xbde76c8b;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_348,294.4,268.8,0.01);
      puVar2 = thunk_FUN_00422870(local_33c,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_84;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      uVar9 = 0x3f347ae1;
      uVar8 = 0xbba3d70a;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_374,313.6,288.0,0.01);
      puVar2 = thunk_FUN_00422870(local_368,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_64;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      uVar9 = 0x3f4fdf3b;
      uVar8 = 0xbba3d70a;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_3a0,294.4,307.19998,0.01);
      puVar2 = thunk_FUN_00422870(local_394,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_44;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      (*this->device->lpVtbl->DrawPrimitive)(this->device,4,0x1c4,local_84,3,0);
    }
    if (this->i39c < 0) {
      uVar9 = 0x3f170a3d;
      uVar8 = 0xbe99999a;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_3cc,339.19998,403.19998,0.01);
      puVar2 = thunk_FUN_00422870(local_3c0,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_84;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      uVar9 = 0x3f000000;
      uVar8 = 0xbe99999a;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_3f8,339.19998,254.4,0.01);
      puVar2 = thunk_FUN_00422870(local_3ec,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_64;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      uVar9 = 0x3f170a3d;
      uVar8 = 0xbe19999a;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_424,633.6,403.19998,0.01);
      puVar2 = thunk_FUN_00422870(local_418,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_44;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      uVar9 = 0x3f000000;
      uVar8 = 0xbe19999a;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_450,633.6,254.4,0.01);
      puVar2 = thunk_FUN_00422870(local_444,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_24;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_84,4,0);
    }
    else {
      local_88 = (float)-this->i39c * 0.0072 + 0.95;
      uVar9 = 0x3f347ae1;
      uVar8 = 0xbde76c8b;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_47c,35.2,(local_88 - 0.04) * 480.0,0.01);
      puVar2 = thunk_FUN_00422870(local_470,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_84;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      uVar9 = 0x3f4fdf3b;
      uVar8 = 0xbba3d70a;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_4a8,35.2,(local_88 + 0.04) * 480.0,0.01);
      puVar2 = thunk_FUN_00422870(local_49c,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_64;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      uVar9 = 0x3f347ae1;
      uVar8 = 0xbba3d70a;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      uVar5 = 0x3f000000;
      pVVar1 = Vec3::Ctor(&local_4d4,16.0,local_88 * 480.0,0.01);
      puVar2 = thunk_FUN_00422870(local_4c8,&pVVar1->x,uVar5,uVar6,uVar7,uVar8,uVar9);
      puVar4 = local_44;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
      (*this->device->lpVtbl->DrawPrimitive)(this->device,4,0x1c4,local_84,3,0);
    }
  }
  return;
}

