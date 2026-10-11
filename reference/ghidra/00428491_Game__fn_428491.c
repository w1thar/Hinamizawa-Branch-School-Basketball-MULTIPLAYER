// Game::fn_428491 @ 00428491  size=568

void __thiscall Game::fn_428491(Game *this)

{
  u32 uVar1;
  Vec3 *pVVar2;
  TLVertex *pTVar3;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  float fVar7;
  u32 uVar8;
  float fVar9;
  float fVar10;
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
  
  if (0.01 <= this->f394) {
    thunk_FUN_0040c3a0(local_84,0x20,4,&LAB_0040119f);
    fVar10 = 0.56;
    fVar9 = -0.71;
    uVar8 = 0;
    lVar6 = __ftol();
    uVar1 = CONCAT31((uint3)(CONCAT22((short)((uint)((int)lVar6 << 0x18) >> 0x10),0xff00) >> 8) |
                     0xff00,0xff);
    fVar7 = 0.5;
    pVVar2 = Vec3::Ctor(&local_b0,0.0,480.0,0.0);
    pTVar3 = TLVertex::Ctor(&local_a4,pVVar2,fVar7,uVar1,uVar8,fVar9,fVar10);
    pfVar5 = local_84;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = pTVar3->sx;
      pTVar3 = (TLVertex *)&pTVar3->sy;
      pfVar5 = pfVar5 + 1;
    }
    fVar10 = 0.58;
    fVar9 = -0.71;
    uVar8 = 0;
    lVar6 = __ftol();
    uVar1 = CONCAT31((uint3)(CONCAT22((short)((uint)((int)lVar6 << 0x18) >> 0x10),0xff00) >> 8) |
                     0xff00,0xff);
    fVar7 = 0.5;
    pVVar2 = Vec3::Ctor(&local_dc,0.0,0.0,0.0);
    pTVar3 = TLVertex::Ctor(&local_d0,pVVar2,fVar7,uVar1,uVar8,fVar9,fVar10);
    pfVar5 = local_64;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = pTVar3->sx;
      pTVar3 = (TLVertex *)&pTVar3->sy;
      pfVar5 = pfVar5 + 1;
    }
    fVar10 = 0.58;
    fVar9 = -0.7;
    uVar8 = 0;
    lVar6 = __ftol();
    uVar1 = CONCAT31((uint3)(CONCAT22((short)((uint)((int)lVar6 << 0x18) >> 0x10),0xff00) >> 8) |
                     0xff00,0xff);
    fVar7 = 0.5;
    pVVar2 = Vec3::Ctor(&local_108,640.0,480.0,0.0);
    pTVar3 = TLVertex::Ctor(&local_fc,pVVar2,fVar7,uVar1,uVar8,fVar9,fVar10);
    pfVar5 = local_44;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = pTVar3->sx;
      pTVar3 = (TLVertex *)&pTVar3->sy;
      pfVar5 = pfVar5 + 1;
    }
    fVar10 = 0.56;
    fVar9 = -0.7;
    uVar8 = 0;
    lVar6 = __ftol();
    uVar1 = CONCAT31((uint3)(CONCAT22((short)((uint)((int)lVar6 << 0x18) >> 0x10),0xff00) >> 8) |
                     0xff00,0xff);
    fVar7 = 0.5;
    pVVar2 = Vec3::Ctor(&local_134,640.0,0.0,0.0);
    pTVar3 = TLVertex::Ctor(&local_128,pVVar2,fVar7,uVar1,uVar8,fVar9,fVar10);
    pfVar5 = local_24;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar5 = pTVar3->sx;
      pTVar3 = (TLVertex *)&pTVar3->sy;
      pfVar5 = pfVar5 + 1;
    }
    (*this->device->lpVtbl->SetTextureStageState)(this->device,0,5,0);
    (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_84,4,0);
    (*this->device->lpVtbl->SetTextureStageState)(this->device,0,5,2);
  }
  return;
}

