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
  undefined1 local_4d4 [12];
  undefined1 local_4c8 [32];
  undefined1 local_4a8 [12];
  undefined1 local_49c [32];
  undefined1 local_47c [12];
  undefined1 local_470 [32];
  undefined1 local_450 [12];
  undefined1 local_444 [32];
  undefined1 local_424 [12];
  undefined1 local_418 [32];
  undefined1 local_3f8 [12];
  undefined1 local_3ec [32];
  undefined1 local_3cc [12];
  undefined1 local_3c0 [32];
  undefined1 local_3a0 [12];
  undefined1 local_394 [32];
  undefined1 local_374 [12];
  undefined1 local_368 [32];
  undefined1 local_348 [12];
  undefined1 local_33c [32];
  undefined1 local_31c [12];
  undefined1 local_310 [32];
  undefined1 local_2f0 [12];
  undefined1 local_2e4 [32];
  undefined1 local_2c4 [12];
  undefined1 local_2b8 [32];
  undefined1 local_298 [12];
  undefined1 local_28c [32];
  undefined1 local_26c [12];
  undefined1 local_260 [32];
  undefined1 local_240 [12];
  undefined1 local_234 [32];
  undefined1 local_214 [12];
  undefined1 local_208 [32];
  undefined1 local_1e8 [12];
  undefined1 local_1dc [32];
  undefined1 local_1bc [12];
  undefined1 local_1b0 [32];
  undefined1 local_190 [12];
  undefined1 local_184 [32];
  undefined1 local_164 [12];
  undefined1 local_158 [32];
  undefined1 local_138 [12];
  undefined1 local_12c [32];
  undefined1 local_10c [12];
  undefined1 local_100 [32];
  undefined1 local_e0 [12];
  undefined1 local_d4 [32];
  undefined1 local_b4 [12];
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
      pVVar1 = Vec3_Set(local_b4,(Vec3 *)0x42c00000,264.0,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_e0,(Vec3 *)0x42c00000,312.0,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_10c,(Vec3 *)0x42800000,288.0,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_138,(Vec3 *)0x43900000,264.0,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_164,(Vec3 *)0x43a00000,288.0,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_190,(Vec3 *)0x43900000,312.0,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_1bc,(Vec3 *)0x42b33333,268.8,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_1e8,(Vec3 *)0x42b33333,307.19998,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_214,(Vec3 *)0x428ccccd,288.0,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_240,(Vec3 *)0x438e6666,261.6,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_26c,(Vec3 *)0x43a1999a,288.0,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_298,(Vec3 *)0x438e6666,314.4,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_2c4,(Vec3 *)0x42c66666,261.6,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_2f0,(Vec3 *)0x42c66666,314.4,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_31c,(Vec3 *)0x42733333,288.0,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_348,(Vec3 *)0x43933333,268.8,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_374,(Vec3 *)0x439ccccd,288.0,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_3a0,(Vec3 *)0x43933333,307.19998,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_3cc,(Vec3 *)0x43a99999,403.19998,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_3f8,(Vec3 *)0x43a99999,254.4,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_424,(Vec3 *)0x441e6666,403.19998,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_450,(Vec3 *)0x441e6666,254.4,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_47c,(Vec3 *)0x420ccccd,(local_88 - 0.04) * 480.0,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_4a8,(Vec3 *)0x420ccccd,(local_88 + 0.04) * 480.0,0.01,0.5);
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
      pVVar1 = Vec3_Set(local_4d4,(Vec3 *)0x41800000,local_88 * 480.0,0.01,0.5);
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

