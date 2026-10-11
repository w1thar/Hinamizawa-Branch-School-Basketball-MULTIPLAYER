// Game::DrawSunGlare @ 0042557f  size=1064

void __thiscall Game::DrawSunGlare(Game *this)

{
  Vec3 *pVVar1;
  TLVertex *pTVar2;
  int iVar3;
  float *pfVar4;
  longlong lVar5;
  float fVar6;
  u32 uVar7;
  u32 uVar8;
  float fVar9;
  float fVar10;
  Vec3 local_1d4;
  TLVertex local_1c8;
  Vec3 local_1a8;
  TLVertex local_19c;
  Vec3 local_17c;
  TLVertex local_170;
  Vec3 local_150;
  TLVertex local_144;
  float local_124 [8];
  float local_104 [8];
  float local_e4 [8];
  float local_c4 [8];
  float local_a4;
  Mat4 local_a0;
  Mat4 local_60;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  
  thunk_FUN_00403880(&local_a0);
  thunk_FUN_00403880(&local_60);
  (*this->device->lpVtbl->GetTransform)(this->device,3,&local_60);
  D3DMath_MatrixMultiply(&local_a0,&this->matView,&local_60);
  local_c = (this->camPos).x - (this->lightDir).x;
  local_18 = (this->camPos).y - (this->lightDir).y / 2.0;
  local_20 = (this->camPos).z - (this->lightDir).z;
  local_8 = 0x3f800000;
  local_14 = local_20 * local_a0.m[8] + local_18 * local_a0.m[4] + local_c * local_a0.m[0] +
             local_a0.m[0xc];
  local_1c = local_20 * local_a0.m[9] + local_18 * local_a0.m[5] + local_c * local_a0.m[1] +
             local_a0.m[0xd];
  local_10 = local_20 * local_a0.m[0xb] + local_18 * local_a0.m[7] + local_c * local_a0.m[3] +
             local_a0.m[0xf];
  if (local_10 <= 0.0) {
    this->f388 = -500.0;
  }
  else {
    this->f388 = ((local_14 / local_10) * 640.0) / 2.0 + 320.0;
    this->f38c = 240.0 - ((local_1c / local_10) * 480.0) / 2.0;
    (*this->device->lpVtbl->SetRenderState)(this->device,0x14,4);
    thunk_FUN_0040c3a0(local_124,0x20,4,&LAB_0040119f);
    rand();
    lVar5 = __ftol();
    local_a4 = (float)(int)lVar5 + 53.333332;
    fVar10 = 0.832;
    fVar9 = -0.603;
    uVar8 = 0;
    uVar7 = 0xffffffff;
    fVar6 = 0.5;
    pVVar1 = Vec3::Ctor(&local_150,this->f388 - local_a4,this->f38c + local_a4,0.9999);
    pTVar2 = TLVertex::Ctor(&local_144,pVVar1,fVar6,uVar7,uVar8,fVar9,fVar10);
    pfVar4 = local_124;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar4 = pfVar4 + 1;
    }
    fVar10 = 0.646;
    fVar9 = -0.603;
    uVar8 = 0;
    uVar7 = 0xffffffff;
    fVar6 = 0.5;
    pVVar1 = Vec3::Ctor(&local_17c,this->f388 - local_a4,this->f38c - local_a4,0.9999);
    pTVar2 = TLVertex::Ctor(&local_170,pVVar1,fVar6,uVar7,uVar8,fVar9,fVar10);
    pfVar4 = local_104;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar4 = pfVar4 + 1;
    }
    fVar10 = 0.832;
    fVar9 = -0.791;
    uVar8 = 0;
    uVar7 = 0xffffffff;
    fVar6 = 0.5;
    pVVar1 = Vec3::Ctor(&local_1a8,this->f388 + local_a4,this->f38c + local_a4,0.9999);
    pTVar2 = TLVertex::Ctor(&local_19c,pVVar1,fVar6,uVar7,uVar8,fVar9,fVar10);
    pfVar4 = local_e4;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar4 = pfVar4 + 1;
    }
    fVar10 = 0.646;
    fVar9 = -0.791;
    uVar8 = 0;
    uVar7 = 0xffffffff;
    fVar6 = 0.5;
    pVVar1 = Vec3::Ctor(&local_1d4,this->f388 + local_a4,this->f38c - local_a4,0.9999);
    pTVar2 = TLVertex::Ctor(&local_1c8,pVVar1,fVar6,uVar7,uVar8,fVar9,fVar10);
    pfVar4 = local_c4;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar4 = pfVar4 + 1;
    }
    (*this->device->lpVtbl->SetRenderState)(this->device,0xe,0);
    (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_124,4,0);
    (*this->device->lpVtbl->SetRenderState)(this->device,0xe,1);
    (*this->device->lpVtbl->SetRenderState)(this->device,0x14,6);
  }
  return;
}

