// Game::fn_428844 @ 00428844  size=2278

void __thiscall Game::fn_428844(Game *this)

{
  Vec3 *pVVar1;
  TLVertex *pTVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  u32 uVar6;
  u32 uVar7;
  float fVar8;
  float fVar9;
  Vec3 local_4d4;
  TLVertex local_4c8;
  Vec3 local_4a8;
  TLVertex local_49c;
  Vec3 local_47c;
  TLVertex local_470;
  Vec3 local_450;
  TLVertex local_444;
  Vec3 local_424;
  TLVertex local_418;
  Vec3 local_3f8;
  TLVertex local_3ec;
  Vec3 local_3cc;
  TLVertex local_3c0;
  Vec3 local_3a0;
  TLVertex local_394;
  Vec3 local_374;
  TLVertex local_368;
  Vec3 local_348;
  TLVertex local_33c;
  Vec3 local_31c;
  TLVertex local_310;
  Vec3 local_2f0;
  TLVertex local_2e4;
  Vec3 local_2c4;
  TLVertex local_2b8;
  Vec3 local_298;
  TLVertex local_28c;
  Vec3 local_26c;
  TLVertex local_260;
  Vec3 local_240;
  TLVertex local_234;
  Vec3 local_214;
  TLVertex local_208;
  Vec3 local_1e8;
  TLVertex local_1dc;
  Vec3 local_1bc;
  TLVertex local_1b0;
  Vec3 local_190;
  TLVertex local_184;
  Vec3 local_164;
  TLVertex local_158;
  Vec3 local_138;
  TLVertex local_12c;
  Vec3 local_10c;
  TLVertex local_100;
  Vec3 local_e0;
  TLVertex local_d4;
  Vec3 local_b4;
  TLVertex local_a8;
  float local_88;
  float local_84 [8];
  float local_64 [8];
  float local_44 [8];
  float local_24 [8];
  
  if (this->i39c != 0) {
    thunk_FUN_0040c3a0(local_84,0x20,4,&LAB_0040119f);
    if (this->i39c == -1) {
      fVar9 = 0.705;
      fVar8 = -0.113;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_b4,96.0,264.0,0.01);
      pTVar2 = TLVertex::Ctor(&local_a8,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_84;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      fVar9 = 0.812;
      fVar8 = -0.005;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_e0,96.0,312.0,0.01);
      pTVar2 = TLVertex::Ctor(&local_d4,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_64;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      fVar9 = 0.705;
      fVar8 = -0.005;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_10c,64.0,288.0,0.01);
      pTVar2 = TLVertex::Ctor(&local_100,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_44;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      (*this->device->lpVtbl->DrawPrimitive)(this->device,4,0x1c4,local_84,3,0);
      fVar9 = 0.705;
      fVar8 = -0.113;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_138,288.0,264.0,0.01);
      pTVar2 = TLVertex::Ctor(&local_12c,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_84;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      fVar9 = 0.705;
      fVar8 = -0.005;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_164,320.0,288.0,0.01);
      pTVar2 = TLVertex::Ctor(&local_158,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_64;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      fVar9 = 0.812;
      fVar8 = -0.005;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_190,288.0,312.0,0.01);
      pTVar2 = TLVertex::Ctor(&local_184,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_44;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      (*this->device->lpVtbl->DrawPrimitive)(this->device,4,0x1c4,local_84,3,0);
    }
    else if (this->i39c == -2) {
      fVar9 = 0.705;
      fVar8 = -0.113;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_1bc,89.6,268.8,0.01);
      pTVar2 = TLVertex::Ctor(&local_1b0,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_84;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      fVar9 = 0.812;
      fVar8 = -0.005;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_1e8,89.6,307.19998,0.01);
      pTVar2 = TLVertex::Ctor(&local_1dc,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_64;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      fVar9 = 0.705;
      fVar8 = -0.005;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_214,70.4,288.0,0.01);
      pTVar2 = TLVertex::Ctor(&local_208,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_44;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      (*this->device->lpVtbl->DrawPrimitive)(this->device,4,0x1c4,local_84,3,0);
      fVar9 = 0.705;
      fVar8 = -0.113;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_240,284.8,261.6,0.01);
      pTVar2 = TLVertex::Ctor(&local_234,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_84;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      fVar9 = 0.705;
      fVar8 = -0.005;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_26c,323.2,288.0,0.01);
      pTVar2 = TLVertex::Ctor(&local_260,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_64;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      fVar9 = 0.812;
      fVar8 = -0.005;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_298,284.8,314.4,0.01);
      pTVar2 = TLVertex::Ctor(&local_28c,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_44;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      (*this->device->lpVtbl->DrawPrimitive)(this->device,4,0x1c4,local_84,3,0);
    }
    else if (this->i39c == -3) {
      fVar9 = 0.705;
      fVar8 = -0.113;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_2c4,99.2,261.6,0.01);
      pTVar2 = TLVertex::Ctor(&local_2b8,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_84;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      fVar9 = 0.812;
      fVar8 = -0.005;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_2f0,99.2,314.4,0.01);
      pTVar2 = TLVertex::Ctor(&local_2e4,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_64;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      fVar9 = 0.705;
      fVar8 = -0.005;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_31c,60.8,288.0,0.01);
      pTVar2 = TLVertex::Ctor(&local_310,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_44;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      (*this->device->lpVtbl->DrawPrimitive)(this->device,4,0x1c4,local_84,3,0);
      fVar9 = 0.705;
      fVar8 = -0.113;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_348,294.4,268.8,0.01);
      pTVar2 = TLVertex::Ctor(&local_33c,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_84;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      fVar9 = 0.705;
      fVar8 = -0.005;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_374,313.6,288.0,0.01);
      pTVar2 = TLVertex::Ctor(&local_368,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_64;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      fVar9 = 0.812;
      fVar8 = -0.005;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_3a0,294.4,307.19998,0.01);
      pTVar2 = TLVertex::Ctor(&local_394,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_44;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      (*this->device->lpVtbl->DrawPrimitive)(this->device,4,0x1c4,local_84,3,0);
    }
    if (this->i39c < 0) {
      fVar9 = 0.59;
      fVar8 = -0.3;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_3cc,339.19998,403.19998,0.01);
      pTVar2 = TLVertex::Ctor(&local_3c0,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_84;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      fVar9 = 0.5;
      fVar8 = -0.3;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_3f8,339.19998,254.4,0.01);
      pTVar2 = TLVertex::Ctor(&local_3ec,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_64;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      fVar9 = 0.59;
      fVar8 = -0.15;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_424,633.6,403.19998,0.01);
      pTVar2 = TLVertex::Ctor(&local_418,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_44;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      fVar9 = 0.5;
      fVar8 = -0.15;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_450,633.6,254.4,0.01);
      pTVar2 = TLVertex::Ctor(&local_444,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_24;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_84,4,0);
    }
    else {
      local_88 = (float)-this->i39c * 0.0072 + 0.95;
      fVar9 = 0.705;
      fVar8 = -0.113;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_47c,35.2,(local_88 - 0.04) * 480.0,0.01);
      pTVar2 = TLVertex::Ctor(&local_470,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_84;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      fVar9 = 0.812;
      fVar8 = -0.005;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_4a8,35.2,(local_88 + 0.04) * 480.0,0.01);
      pTVar2 = TLVertex::Ctor(&local_49c,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_64;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      fVar9 = 0.705;
      fVar8 = -0.005;
      uVar7 = 0;
      uVar6 = 0xffffffff;
      fVar5 = 0.5;
      pVVar1 = Vec3::Ctor(&local_4d4,16.0,local_88 * 480.0,0.01);
      pTVar2 = TLVertex::Ctor(&local_4c8,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
      pfVar4 = local_44;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *pfVar4 = pTVar2->sx;
        pTVar2 = (TLVertex *)&pTVar2->sy;
        pfVar4 = pfVar4 + 1;
      }
      (*this->device->lpVtbl->DrawPrimitive)(this->device,4,0x1c4,local_84,3,0);
    }
  }
  return;
}

