// Game::fn_421d0f @ 00421d0f  size=1009

void __thiscall Game::fn_421d0f(Game *this)

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
  Vec3 local_294;
  TLVertex local_288;
  Vec3 local_268;
  TLVertex local_25c;
  Vec3 local_23c;
  TLVertex local_230;
  Vec3 local_210;
  TLVertex local_204;
  Vec3 local_1e4;
  TLVertex local_1d8;
  Vec3 local_1b8;
  TLVertex local_1ac;
  Vec3 local_18c;
  TLVertex local_180;
  Vec3 local_160;
  TLVertex local_154;
  Vec3 local_134;
  TLVertex local_128;
  Vec3 local_108;
  TLVertex local_fc;
  Vec3 local_dc;
  TLVertex local_d0;
  Vec3 local_b0;
  TLVertex local_a4;
  float local_84 [8];
  float local_64 [8];
  float local_44 [8];
  float local_24 [8];
  
  if (this->b3a5 != '\0') {
    thunk_FUN_0040c3a0(local_84,0x20,4,&LAB_0040119f);
    fVar9 = 0.606;
    fVar8 = -0.311;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    fVar5 = 0.5;
    pVVar1 = Vec3::Ctor(&local_b0,158.4,81.6,0.01);
    pTVar2 = TLVertex::Ctor(&local_a4,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
    pfVar4 = local_84;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar4 = pfVar4 + 1;
    }
    fVar9 = 0.485;
    fVar8 = -0.311;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    fVar5 = 0.5;
    pVVar1 = Vec3::Ctor(&local_dc,158.4,24.0,0.01);
    pTVar2 = TLVertex::Ctor(&local_d0,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
    pfVar4 = local_64;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar4 = pfVar4 + 1;
    }
    fVar9 = 0.606;
    fVar8 = -0.125;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    fVar5 = 0.5;
    pVVar1 = Vec3::Ctor(&local_108,241.6,81.6,0.01);
    pTVar2 = TLVertex::Ctor(&local_fc,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
    pfVar4 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar4 = pfVar4 + 1;
    }
    fVar9 = 0.485;
    fVar8 = -0.125;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    fVar5 = 0.5;
    pVVar1 = Vec3::Ctor(&local_134,241.6,24.0,0.01);
    pTVar2 = TLVertex::Ctor(&local_128,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
    pfVar4 = local_24;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar4 = pfVar4 + 1;
    }
    (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_84,4,0);
    fVar9 = 0.606;
    fVar8 = -0.311;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    fVar5 = 0.5;
    pVVar1 = Vec3::Ctor(&local_160,278.4,72.0,0.01);
    pTVar2 = TLVertex::Ctor(&local_154,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
    pfVar4 = local_84;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar4 = pfVar4 + 1;
    }
    fVar9 = 0.485;
    fVar8 = -0.311;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    fVar5 = 0.5;
    pVVar1 = Vec3::Ctor(&local_18c,278.4,24.0,0.01);
    pTVar2 = TLVertex::Ctor(&local_180,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
    pfVar4 = local_64;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar4 = pfVar4 + 1;
    }
    fVar9 = 0.606;
    fVar8 = -0.125;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    fVar5 = 0.5;
    pVVar1 = Vec3::Ctor(&local_1b8,361.6,72.0,0.01);
    pTVar2 = TLVertex::Ctor(&local_1ac,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
    pfVar4 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar4 = pfVar4 + 1;
    }
    fVar9 = 0.485;
    fVar8 = -0.125;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    fVar5 = 0.5;
    pVVar1 = Vec3::Ctor(&local_1e4,361.6,24.0,0.01);
    pTVar2 = TLVertex::Ctor(&local_1d8,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
    pfVar4 = local_24;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar4 = pfVar4 + 1;
    }
    (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_84,4,0);
    fVar9 = 0.606;
    fVar8 = -0.311;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    fVar5 = 0.5;
    pVVar1 = Vec3::Ctor(&local_210,396.8,81.6,0.01);
    pTVar2 = TLVertex::Ctor(&local_204,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
    pfVar4 = local_84;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar4 = pfVar4 + 1;
    }
    fVar9 = 0.485;
    fVar8 = -0.311;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    fVar5 = 0.5;
    pVVar1 = Vec3::Ctor(&local_23c,396.8,24.0,0.01);
    pTVar2 = TLVertex::Ctor(&local_230,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
    pfVar4 = local_64;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar4 = pfVar4 + 1;
    }
    fVar9 = 0.606;
    fVar8 = -0.125;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    fVar5 = 0.5;
    pVVar1 = Vec3::Ctor(&local_268,480.0,81.6,0.01);
    pTVar2 = TLVertex::Ctor(&local_25c,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
    pfVar4 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar4 = pfVar4 + 1;
    }
    fVar9 = 0.485;
    fVar8 = -0.125;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    fVar5 = 0.5;
    pVVar1 = Vec3::Ctor(&local_294,480.0,24.0,0.01);
    pTVar2 = TLVertex::Ctor(&local_288,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
    pfVar4 = local_24;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar4 = pfVar4 + 1;
    }
    (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_84,4,0);
  }
  return;
}

