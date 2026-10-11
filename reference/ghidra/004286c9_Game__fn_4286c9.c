// Game::fn_4286c9 @ 004286c9  size=379

void __thiscall Game::fn_4286c9(Game *this)

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
  
  if (this->b39a != '\0') {
    thunk_FUN_0040c3a0(local_84,0x20,4,&LAB_0040119f);
    fVar9 = 0.36;
    fVar8 = -0.99;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    fVar5 = 0.5;
    pVVar1 = Vec3::Ctor(&local_b0,128.0,144.0,0.01);
    pTVar2 = TLVertex::Ctor(&local_a4,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
    pfVar4 = local_84;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar4 = pfVar4 + 1;
    }
    fVar9 = 0.01;
    fVar8 = -0.99;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    fVar5 = 0.5;
    pVVar1 = Vec3::Ctor(&local_dc,128.0,24.0,0.01);
    pTVar2 = TLVertex::Ctor(&local_d0,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
    pfVar4 = local_64;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar4 = pfVar4 + 1;
    }
    fVar9 = 0.36;
    fVar8 = -0.01;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    fVar5 = 0.5;
    pVVar1 = Vec3::Ctor(&local_108,512.0,144.0,0.01);
    pTVar2 = TLVertex::Ctor(&local_fc,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
    pfVar4 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar4 = pfVar4 + 1;
    }
    fVar9 = 0.01;
    fVar8 = -0.01;
    uVar7 = 0;
    uVar6 = 0xffffffff;
    fVar5 = 0.5;
    pVVar1 = Vec3::Ctor(&local_134,512.0,24.0,0.01);
    pTVar2 = TLVertex::Ctor(&local_128,pVVar1,fVar5,uVar6,uVar7,fVar8,fVar9);
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

