// Game::DrawTeamPortraits @ 0042134c  size=2499

void __thiscall Game::DrawTeamPortraits(Game *this)

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
  Vec3 local_34c;
  TLVertex local_340;
  Vec3 local_320;
  TLVertex local_314;
  Vec3 local_2f4;
  TLVertex local_2e8;
  Vec3 local_2c8;
  TLVertex local_2bc;
  Vec3 local_29c;
  TLVertex local_290;
  Vec3 local_270;
  TLVertex local_264;
  Vec3 local_244;
  TLVertex local_238;
  Vec3 local_218;
  TLVertex local_20c;
  Vec3 local_1ec;
  TLVertex local_1e0;
  Vec3 local_1c0;
  TLVertex local_1b4;
  Vec3 local_194;
  TLVertex local_188;
  Vec3 local_168;
  TLVertex local_15c;
  Vec3 local_13c;
  TLVertex local_130;
  Vec3 local_110;
  TLVertex local_104;
  Vec3 local_e4;
  TLVertex local_d8;
  Vec3 local_b8;
  TLVertex local_ac;
  int local_8c;
  int local_88;
  float local_84 [8];
  float local_64 [8];
  float local_44 [8];
  float local_24 [8];
  
  if (this->b3a4 != '\0') {
    thunk_FUN_0040c3a0(local_84,0x20,4,&LAB_0040119f);
    if (this->b3a6 == '\0') {
      for (local_8c = 0; local_8c < 3; local_8c = local_8c + 1) {
        fVar9 = 1.0;
        fVar8 = (float)this->teamYou[local_8c] * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        fVar5 = 0.5;
        pVVar1 = Vec3::Ctor(&local_218,((float)local_8c + 0.3) * 0.075 * 640.0,81.6,0.01);
        pTVar2 = TLVertex::Ctor(&local_20c,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
        pfVar4 = local_84;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar4 = pTVar2->sx;
          pTVar2 = (TLVertex *)&pTVar2->sy;
          pfVar4 = pfVar4 + 1;
        }
        fVar9 = 0.838;
        fVar8 = (float)this->teamYou[local_8c] * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        fVar5 = 0.5;
        pVVar1 = Vec3::Ctor(&local_244,((float)local_8c + 0.3) * 0.075 * 640.0,33.6,0.01);
        pTVar2 = TLVertex::Ctor(&local_238,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
        pfVar4 = local_64;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar4 = pTVar2->sx;
          pTVar2 = (TLVertex *)&pTVar2->sy;
          pfVar4 = pfVar4 + 1;
        }
        fVar9 = 1.0;
        fVar8 = (float)(this->teamYou[local_8c] + 1) * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        fVar5 = 0.5;
        pVVar1 = Vec3::Ctor(&local_270,((float)local_8c + 1.3) * 0.075 * 640.0,81.6,0.01);
        pTVar2 = TLVertex::Ctor(&local_264,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
        pfVar4 = local_44;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar4 = pTVar2->sx;
          pTVar2 = (TLVertex *)&pTVar2->sy;
          pfVar4 = pfVar4 + 1;
        }
        fVar9 = 0.838;
        fVar8 = (float)(this->teamYou[local_8c] + 1) * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        fVar5 = 0.5;
        pVVar1 = Vec3::Ctor(&local_29c,((float)local_8c + 1.3) * 0.075 * 640.0,33.6,0.01);
        pTVar2 = TLVertex::Ctor(&local_290,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
        pfVar4 = local_24;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar4 = pTVar2->sx;
          pTVar2 = (TLVertex *)&pTVar2->sy;
          pfVar4 = pfVar4 + 1;
        }
        (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_84,4,0);
      }
      for (local_8c = 0; local_8c < 3; local_8c = local_8c + 1) {
        fVar9 = 1.0;
        fVar8 = (float)this->teamCom[local_8c] * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        fVar5 = 0.5;
        pVVar1 = Vec3::Ctor(&local_2c8,((float)local_8c + 10.0) * 0.075 * 640.0,81.6,0.01);
        pTVar2 = TLVertex::Ctor(&local_2bc,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
        pfVar4 = local_84;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar4 = pTVar2->sx;
          pTVar2 = (TLVertex *)&pTVar2->sy;
          pfVar4 = pfVar4 + 1;
        }
        fVar9 = 0.838;
        fVar8 = (float)this->teamCom[local_8c] * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        fVar5 = 0.5;
        pVVar1 = Vec3::Ctor(&local_2f4,((float)local_8c + 10.0) * 0.075 * 640.0,33.6,0.01);
        pTVar2 = TLVertex::Ctor(&local_2e8,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
        pfVar4 = local_64;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar4 = pTVar2->sx;
          pTVar2 = (TLVertex *)&pTVar2->sy;
          pfVar4 = pfVar4 + 1;
        }
        fVar9 = 1.0;
        fVar8 = (float)(this->teamCom[local_8c] + 1) * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        fVar5 = 0.5;
        pVVar1 = Vec3::Ctor(&local_320,((float)local_8c + 11.0) * 0.075 * 640.0,81.6,0.01);
        pTVar2 = TLVertex::Ctor(&local_314,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
        pfVar4 = local_44;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar4 = pTVar2->sx;
          pTVar2 = (TLVertex *)&pTVar2->sy;
          pfVar4 = pfVar4 + 1;
        }
        fVar9 = 0.838;
        fVar8 = (float)(this->teamCom[local_8c] + 1) * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        fVar5 = 0.5;
        pVVar1 = Vec3::Ctor(&local_34c,((float)local_8c + 11.0) * 0.075 * 640.0,33.6,0.01);
        pTVar2 = TLVertex::Ctor(&local_340,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
        pfVar4 = local_24;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar4 = pTVar2->sx;
          pTVar2 = (TLVertex *)&pTVar2->sy;
          pfVar4 = pfVar4 + 1;
        }
        (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_84,4,0);
      }
    }
    else {
      for (local_88 = 0; local_88 < 3; local_88 = local_88 + 1) {
        fVar9 = 1.0;
        fVar8 = (float)this->teamCom[local_88] * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        fVar5 = 0.5;
        pVVar1 = Vec3::Ctor(&local_b8,((float)local_88 + 0.3) * 0.075 * 640.0,81.6,0.01);
        pTVar2 = TLVertex::Ctor(&local_ac,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
        pfVar4 = local_84;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar4 = pTVar2->sx;
          pTVar2 = (TLVertex *)&pTVar2->sy;
          pfVar4 = pfVar4 + 1;
        }
        fVar9 = 0.838;
        fVar8 = (float)this->teamCom[local_88] * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        fVar5 = 0.5;
        pVVar1 = Vec3::Ctor(&local_e4,((float)local_88 + 0.3) * 0.075 * 640.0,33.6,0.01);
        pTVar2 = TLVertex::Ctor(&local_d8,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
        pfVar4 = local_64;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar4 = pTVar2->sx;
          pTVar2 = (TLVertex *)&pTVar2->sy;
          pfVar4 = pfVar4 + 1;
        }
        fVar9 = 1.0;
        fVar8 = (float)(this->teamCom[local_88] + 1) * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        fVar5 = 0.5;
        pVVar1 = Vec3::Ctor(&local_110,((float)local_88 + 1.3) * 0.075 * 640.0,81.6,0.01);
        pTVar2 = TLVertex::Ctor(&local_104,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
        pfVar4 = local_44;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar4 = pTVar2->sx;
          pTVar2 = (TLVertex *)&pTVar2->sy;
          pfVar4 = pfVar4 + 1;
        }
        fVar9 = 0.838;
        fVar8 = (float)(this->teamCom[local_88] + 1) * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        fVar5 = 0.5;
        pVVar1 = Vec3::Ctor(&local_13c,((float)local_88 + 1.3) * 0.075 * 640.0,33.6,0.01);
        pTVar2 = TLVertex::Ctor(&local_130,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
        pfVar4 = local_24;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar4 = pTVar2->sx;
          pTVar2 = (TLVertex *)&pTVar2->sy;
          pfVar4 = pfVar4 + 1;
        }
        (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_84,4,0);
      }
      for (local_88 = 0; local_88 < 3; local_88 = local_88 + 1) {
        fVar9 = 1.0;
        fVar8 = (float)this->teamYou[local_88] * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        fVar5 = 0.5;
        pVVar1 = Vec3::Ctor(&local_168,((float)local_88 + 10.0) * 0.075 * 640.0,81.6,0.01);
        pTVar2 = TLVertex::Ctor(&local_15c,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
        pfVar4 = local_84;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar4 = pTVar2->sx;
          pTVar2 = (TLVertex *)&pTVar2->sy;
          pfVar4 = pfVar4 + 1;
        }
        fVar9 = 0.838;
        fVar8 = (float)this->teamYou[local_88] * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        fVar5 = 0.5;
        pVVar1 = Vec3::Ctor(&local_194,((float)local_88 + 10.0) * 0.075 * 640.0,33.6,0.01);
        pTVar2 = TLVertex::Ctor(&local_188,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
        pfVar4 = local_64;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar4 = pTVar2->sx;
          pTVar2 = (TLVertex *)&pTVar2->sy;
          pfVar4 = pfVar4 + 1;
        }
        fVar9 = 1.0;
        fVar8 = (float)(this->teamYou[local_88] + 1) * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        fVar5 = 0.5;
        pVVar1 = Vec3::Ctor(&local_1c0,((float)local_88 + 11.0) * 0.075 * 640.0,81.6,0.01);
        pTVar2 = TLVertex::Ctor(&local_1b4,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
        pfVar4 = local_44;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar4 = pTVar2->sx;
          pTVar2 = (TLVertex *)&pTVar2->sy;
          pfVar4 = pfVar4 + 1;
        }
        fVar9 = 0.838;
        fVar8 = (float)(this->teamYou[local_88] + 1) * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        fVar5 = 0.5;
        pVVar1 = Vec3::Ctor(&local_1ec,((float)local_88 + 11.0) * 0.075 * 640.0,33.6,0.01);
        pTVar2 = TLVertex::Ctor(&local_1e0,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
        pfVar4 = local_24;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar4 = pTVar2->sx;
          pTVar2 = (TLVertex *)&pTVar2->sy;
          pfVar4 = pfVar4 + 1;
        }
        (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_84,4,0);
      }
    }
  }
  return;
}

