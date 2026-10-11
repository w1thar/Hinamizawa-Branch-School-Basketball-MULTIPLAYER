// Game::fn_4259a7 @ 004259a7  size=4526

void __thiscall Game::fn_4259a7(Game *this)

{
  Vec3 *pVVar1;
  TLVertex *pTVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  u32 uVar10;
  float fVar11;
  float fVar12;
  Vec3 local_418;
  TLVertex local_40c;
  Vec3 local_3ec;
  TLVertex local_3e0;
  Vec3 local_3c0;
  TLVertex local_3b4;
  Vec3 local_394;
  TLVertex local_388;
  Vec3 local_368;
  TLVertex local_35c;
  Vec3 local_33c;
  TLVertex local_330;
  Vec3 local_310;
  TLVertex local_304;
  Vec3 local_2e4;
  TLVertex local_2d8;
  Vec3 local_2b8;
  TLVertex local_2ac;
  Vec3 local_28c;
  TLVertex local_280;
  Vec3 local_260;
  TLVertex local_254;
  Vec3 local_234;
  TLVertex local_228;
  Vec3 local_208;
  TLVertex local_1fc;
  Vec3 local_1dc;
  TLVertex local_1d0;
  Vec3 local_1b0;
  TLVertex local_1a4;
  Vec3 local_184;
  TLVertex local_178;
  Vec3 local_158;
  TLVertex local_14c;
  Vec3 local_12c;
  TLVertex local_120;
  Vec3 local_100;
  TLVertex local_f4;
  Vec3 local_d4;
  TLVertex local_c8;
  float local_a8;
  float local_a4 [8];
  float local_84 [8];
  float local_64 [8];
  float local_44 [8];
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  if ((-100.0 < this->f388 && this->f388 < 740.0) && -200.0 < this->f38c) {
    local_18 = 320.0 - this->f388;
    local_1c = 240.0 - this->f38c;
    fVar9 = sqrtf((float)this);
    if (1e-06 < fVar9) {
      local_18 = local_18 / fVar9;
      local_1c = local_1c / fVar9;
    }
    local_a8 = (fVar9 * 2.0) / 5.0;
    rand();
    lVar6 = __ftol();
    local_8 = (int)lVar6;
    (*this->device->lpVtbl->SetRenderState)(this->device,0x14,4);
    (*this->device->lpVtbl->SetRenderState)(this->device,7,0);
    thunk_FUN_0040c3a0(local_a4,0x20,4,&LAB_0040119f);
    local_14 = 1.5;
    local_20 = (float)local_8 + 12.0;
    local_10 = 0x3e4ccccd;
    local_24 = 0x3e4ccccd;
    local_c = 0;
    fVar12 = 0.833;
    fVar11 = -0.798;
    uVar10 = 0;
    lVar6 = __ftol();
    lVar7 = __ftol();
    lVar8 = __ftol();
    uVar4 = (int)lVar6 << 0x10 | 0xff000000U | (int)lVar7 << 8 | (uint)lVar8;
    fVar9 = 0.5;
    pVVar1 = Vec3::Ctor(&local_d4,(local_18 * local_14 * local_a8 + this->f388) - local_20,
                        local_1c * local_14 * local_a8 + this->f38c + local_20,0.9999);
    pTVar2 = TLVertex::Ctor(&local_c8,pVVar1,fVar9,uVar4,uVar10,fVar11,fVar12);
    pfVar5 = local_a4;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar5 = pfVar5 + 1;
    }
    fVar12 = 0.646;
    fVar11 = -0.798;
    uVar10 = 0;
    lVar6 = __ftol();
    lVar7 = __ftol();
    lVar8 = __ftol();
    uVar4 = (int)lVar6 << 0x10 | 0xff000000U | (int)lVar7 << 8 | (uint)lVar8;
    fVar9 = 0.5;
    pVVar1 = Vec3::Ctor(&local_100,(local_18 * local_14 * local_a8 + this->f388) - local_20,
                        (local_1c * local_14 * local_a8 + this->f38c) - local_20,0.9999);
    pTVar2 = TLVertex::Ctor(&local_f4,pVVar1,fVar9,uVar4,uVar10,fVar11,fVar12);
    pfVar5 = local_84;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar5 = pfVar5 + 1;
    }
    fVar12 = 0.833;
    fVar11 = -0.986;
    uVar10 = 0;
    lVar6 = __ftol();
    lVar7 = __ftol();
    lVar8 = __ftol();
    uVar4 = (int)lVar6 << 0x10 | 0xff000000U | (int)lVar7 << 8 | (uint)lVar8;
    fVar9 = 0.5;
    pVVar1 = Vec3::Ctor(&local_12c,local_18 * local_14 * local_a8 + this->f388 + local_20,
                        local_1c * local_14 * local_a8 + this->f38c + local_20,0.9999);
    pTVar2 = TLVertex::Ctor(&local_120,pVVar1,fVar9,uVar4,uVar10,fVar11,fVar12);
    pfVar5 = local_64;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar5 = pfVar5 + 1;
    }
    fVar12 = 0.646;
    fVar11 = -0.986;
    uVar10 = 0;
    lVar6 = __ftol();
    lVar7 = __ftol();
    lVar8 = __ftol();
    uVar4 = (int)lVar6 << 0x10 | 0xff000000U | (int)lVar7 << 8 | (uint)lVar8;
    fVar9 = 0.5;
    pVVar1 = Vec3::Ctor(&local_158,local_18 * local_14 * local_a8 + this->f388 + local_20,
                        (local_1c * local_14 * local_a8 + this->f38c) - local_20,0.9999);
    pTVar2 = TLVertex::Ctor(&local_14c,pVVar1,fVar9,uVar4,uVar10,fVar11,fVar12);
    pfVar5 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar5 = pfVar5 + 1;
    }
    (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_a4,4,0);
    local_14 = 2.3;
    local_20 = (float)local_8 + 3.2;
    local_10 = 0x3f19999a;
    local_24 = 0x3e99999a;
    local_c = 0;
    fVar12 = 0.833;
    fVar11 = -0.798;
    uVar10 = 0;
    lVar6 = __ftol();
    lVar7 = __ftol();
    lVar8 = __ftol();
    uVar4 = (int)lVar6 << 0x10 | 0xff000000U | (int)lVar7 << 8 | (uint)lVar8;
    fVar9 = 0.5;
    pVVar1 = Vec3::Ctor(&local_184,(local_18 * local_14 * local_a8 + this->f388) - local_20,
                        local_1c * local_14 * local_a8 + this->f38c + local_20,0.9999);
    pTVar2 = TLVertex::Ctor(&local_178,pVVar1,fVar9,uVar4,uVar10,fVar11,fVar12);
    pfVar5 = local_a4;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar5 = pfVar5 + 1;
    }
    fVar12 = 0.646;
    fVar11 = -0.798;
    uVar10 = 0;
    lVar6 = __ftol();
    lVar7 = __ftol();
    lVar8 = __ftol();
    uVar4 = (int)lVar6 << 0x10 | 0xff000000U | (int)lVar7 << 8 | (uint)lVar8;
    fVar9 = 0.5;
    pVVar1 = Vec3::Ctor(&local_1b0,(local_18 * local_14 * local_a8 + this->f388) - local_20,
                        (local_1c * local_14 * local_a8 + this->f38c) - local_20,0.9999);
    pTVar2 = TLVertex::Ctor(&local_1a4,pVVar1,fVar9,uVar4,uVar10,fVar11,fVar12);
    pfVar5 = local_84;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar5 = pfVar5 + 1;
    }
    fVar12 = 0.833;
    fVar11 = -0.986;
    uVar10 = 0;
    lVar6 = __ftol();
    lVar7 = __ftol();
    lVar8 = __ftol();
    uVar4 = (int)lVar6 << 0x10 | 0xff000000U | (int)lVar7 << 8 | (uint)lVar8;
    fVar9 = 0.5;
    pVVar1 = Vec3::Ctor(&local_1dc,local_18 * local_14 * local_a8 + this->f388 + local_20,
                        local_1c * local_14 * local_a8 + this->f38c + local_20,0.9999);
    pTVar2 = TLVertex::Ctor(&local_1d0,pVVar1,fVar9,uVar4,uVar10,fVar11,fVar12);
    pfVar5 = local_64;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar5 = pfVar5 + 1;
    }
    fVar12 = 0.646;
    fVar11 = -0.986;
    uVar10 = 0;
    lVar6 = __ftol();
    lVar7 = __ftol();
    lVar8 = __ftol();
    uVar4 = (int)lVar6 << 0x10 | 0xff000000U | (int)lVar7 << 8 | (uint)lVar8;
    fVar9 = 0.5;
    pVVar1 = Vec3::Ctor(&local_208,local_18 * local_14 * local_a8 + this->f388 + local_20,
                        (local_1c * local_14 * local_a8 + this->f38c) - local_20,0.9999);
    pTVar2 = TLVertex::Ctor(&local_1fc,pVVar1,fVar9,uVar4,uVar10,fVar11,fVar12);
    pfVar5 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar5 = pfVar5 + 1;
    }
    (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_a4,4,0);
    local_14 = 3.25;
    local_20 = (float)local_8 + 32.0;
    local_10 = 0x3dcccccd;
    local_24 = 0x3e99999a;
    local_c = 0x3ecccccd;
    fVar12 = 0.641;
    fVar11 = -0.603;
    uVar10 = 0;
    lVar6 = __ftol();
    lVar7 = __ftol();
    lVar8 = __ftol();
    uVar4 = (int)lVar6 << 0x10 | 0xff000000U | (int)lVar7 << 8 | (uint)lVar8;
    fVar9 = 0.5;
    pVVar1 = Vec3::Ctor(&local_234,(local_18 * local_14 * local_a8 + this->f388) - local_20,
                        local_1c * local_14 * local_a8 + this->f38c + local_20,0.9999);
    pTVar2 = TLVertex::Ctor(&local_228,pVVar1,fVar9,uVar4,uVar10,fVar11,fVar12);
    pfVar5 = local_a4;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar5 = pfVar5 + 1;
    }
    fVar12 = 0.455;
    fVar11 = -0.603;
    uVar10 = 0;
    lVar6 = __ftol();
    lVar7 = __ftol();
    lVar8 = __ftol();
    uVar4 = (int)lVar6 << 0x10 | 0xff000000U | (int)lVar7 << 8 | (uint)lVar8;
    fVar9 = 0.5;
    pVVar1 = Vec3::Ctor(&local_260,(local_18 * local_14 * local_a8 + this->f388) - local_20,
                        (local_1c * local_14 * local_a8 + this->f38c) - local_20,0.9999);
    pTVar2 = TLVertex::Ctor(&local_254,pVVar1,fVar9,uVar4,uVar10,fVar11,fVar12);
    pfVar5 = local_84;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar5 = pfVar5 + 1;
    }
    fVar12 = 0.641;
    fVar11 = -0.786;
    uVar10 = 0;
    lVar6 = __ftol();
    lVar7 = __ftol();
    lVar8 = __ftol();
    uVar4 = (int)lVar6 << 0x10 | 0xff000000U | (int)lVar7 << 8 | (uint)lVar8;
    fVar9 = 0.5;
    pVVar1 = Vec3::Ctor(&local_28c,local_18 * local_14 * local_a8 + this->f388 + local_20,
                        local_1c * local_14 * local_a8 + this->f38c + local_20,0.9999);
    pTVar2 = TLVertex::Ctor(&local_280,pVVar1,fVar9,uVar4,uVar10,fVar11,fVar12);
    pfVar5 = local_64;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar5 = pfVar5 + 1;
    }
    fVar12 = 0.455;
    fVar11 = -0.786;
    uVar10 = 0;
    lVar6 = __ftol();
    lVar7 = __ftol();
    lVar8 = __ftol();
    uVar4 = (int)lVar6 << 0x10 | 0xff000000U | (int)lVar7 << 8 | (uint)lVar8;
    fVar9 = 0.5;
    pVVar1 = Vec3::Ctor(&local_2b8,local_18 * local_14 * local_a8 + this->f388 + local_20,
                        (local_1c * local_14 * local_a8 + this->f38c) - local_20,0.9999);
    pTVar2 = TLVertex::Ctor(&local_2ac,pVVar1,fVar9,uVar4,uVar10,fVar11,fVar12);
    pfVar5 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar5 = pfVar5 + 1;
    }
    (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_a4,4,0);
    local_14 = 4.0;
    local_20 = (float)local_8 + 16.0;
    local_10 = 0x3e4ccccd;
    local_24 = 0x3e4ccccd;
    local_c = 0;
    fVar12 = 0.833;
    fVar11 = -0.798;
    uVar10 = 0;
    lVar6 = __ftol();
    lVar7 = __ftol();
    lVar8 = __ftol();
    uVar4 = (int)lVar6 << 0x10 | 0xff000000U | (int)lVar7 << 8 | (uint)lVar8;
    fVar9 = 0.5;
    pVVar1 = Vec3::Ctor(&local_2e4,(local_18 * local_14 * local_a8 + this->f388) - local_20,
                        local_1c * local_14 * local_a8 + this->f38c + local_20,0.9999);
    pTVar2 = TLVertex::Ctor(&local_2d8,pVVar1,fVar9,uVar4,uVar10,fVar11,fVar12);
    pfVar5 = local_a4;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar5 = pfVar5 + 1;
    }
    fVar12 = 0.646;
    fVar11 = -0.798;
    uVar10 = 0;
    lVar6 = __ftol();
    lVar7 = __ftol();
    lVar8 = __ftol();
    uVar4 = (int)lVar6 << 0x10 | 0xff000000U | (int)lVar7 << 8 | (uint)lVar8;
    fVar9 = 0.5;
    pVVar1 = Vec3::Ctor(&local_310,(local_18 * local_14 * local_a8 + this->f388) - local_20,
                        (local_1c * local_14 * local_a8 + this->f38c) - local_20,0.9999);
    pTVar2 = TLVertex::Ctor(&local_304,pVVar1,fVar9,uVar4,uVar10,fVar11,fVar12);
    pfVar5 = local_84;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar5 = pfVar5 + 1;
    }
    fVar12 = 0.833;
    fVar11 = -0.986;
    uVar10 = 0;
    lVar6 = __ftol();
    lVar7 = __ftol();
    lVar8 = __ftol();
    uVar4 = (int)lVar6 << 0x10 | 0xff000000U | (int)lVar7 << 8 | (uint)lVar8;
    fVar9 = 0.5;
    pVVar1 = Vec3::Ctor(&local_33c,local_18 * local_14 * local_a8 + this->f388 + local_20,
                        local_1c * local_14 * local_a8 + this->f38c + local_20,0.9999);
    pTVar2 = TLVertex::Ctor(&local_330,pVVar1,fVar9,uVar4,uVar10,fVar11,fVar12);
    pfVar5 = local_64;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar5 = pfVar5 + 1;
    }
    fVar12 = 0.646;
    fVar11 = -0.986;
    uVar10 = 0;
    lVar6 = __ftol();
    lVar7 = __ftol();
    lVar8 = __ftol();
    uVar4 = (int)lVar6 << 0x10 | 0xff000000U | (int)lVar7 << 8 | (uint)lVar8;
    fVar9 = 0.5;
    pVVar1 = Vec3::Ctor(&local_368,local_18 * local_14 * local_a8 + this->f388 + local_20,
                        (local_1c * local_14 * local_a8 + this->f38c) - local_20,0.9999);
    pTVar2 = TLVertex::Ctor(&local_35c,pVVar1,fVar9,uVar4,uVar10,fVar11,fVar12);
    pfVar5 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar5 = pfVar5 + 1;
    }
    (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_a4,4,0);
    local_14 = 5.0;
    local_20 = (float)local_8 + 80.0;
    local_10 = 0x3ecccccd;
    local_24 = 0x3dcccccd;
    local_c = 0;
    fVar12 = 0.641;
    fVar11 = -0.603;
    uVar10 = 0;
    lVar6 = __ftol();
    lVar7 = __ftol();
    lVar8 = __ftol();
    uVar4 = (int)lVar6 << 0x10 | 0xff000000U | (int)lVar7 << 8 | (uint)lVar8;
    fVar9 = 0.5;
    pVVar1 = Vec3::Ctor(&local_394,(local_18 * local_14 * local_a8 + this->f388) - local_20,
                        local_1c * local_14 * local_a8 + this->f38c + local_20,0.9999);
    pTVar2 = TLVertex::Ctor(&local_388,pVVar1,fVar9,uVar4,uVar10,fVar11,fVar12);
    pfVar5 = local_a4;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar5 = pfVar5 + 1;
    }
    fVar12 = 0.455;
    fVar11 = -0.603;
    uVar10 = 0;
    lVar6 = __ftol();
    lVar7 = __ftol();
    lVar8 = __ftol();
    uVar4 = (int)lVar6 << 0x10 | 0xff000000U | (int)lVar7 << 8 | (uint)lVar8;
    fVar9 = 0.5;
    pVVar1 = Vec3::Ctor(&local_3c0,(local_18 * local_14 * local_a8 + this->f388) - local_20,
                        (local_1c * local_14 * local_a8 + this->f38c) - local_20,0.9999);
    pTVar2 = TLVertex::Ctor(&local_3b4,pVVar1,fVar9,uVar4,uVar10,fVar11,fVar12);
    pfVar5 = local_84;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar5 = pfVar5 + 1;
    }
    fVar12 = 0.641;
    fVar11 = -0.786;
    uVar10 = 0;
    lVar6 = __ftol();
    lVar7 = __ftol();
    lVar8 = __ftol();
    uVar4 = (int)lVar6 << 0x10 | 0xff000000U | (int)lVar7 << 8 | (uint)lVar8;
    fVar9 = 0.5;
    pVVar1 = Vec3::Ctor(&local_3ec,local_18 * local_14 * local_a8 + this->f388 + local_20,
                        local_1c * local_14 * local_a8 + this->f38c + local_20,0.9999);
    pTVar2 = TLVertex::Ctor(&local_3e0,pVVar1,fVar9,uVar4,uVar10,fVar11,fVar12);
    pfVar5 = local_64;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar5 = pfVar5 + 1;
    }
    fVar12 = 0.455;
    fVar11 = -0.786;
    uVar10 = 0;
    lVar6 = __ftol();
    lVar7 = __ftol();
    lVar8 = __ftol();
    uVar4 = (int)lVar6 << 0x10 | 0xff000000U | (int)lVar7 << 8 | (uint)lVar8;
    fVar9 = 0.5;
    pVVar1 = Vec3::Ctor(&local_418,local_18 * local_14 * local_a8 + this->f388 + local_20,
                        (local_1c * local_14 * local_a8 + this->f38c) - local_20,0.9999);
    pTVar2 = TLVertex::Ctor(&local_40c,pVVar1,fVar9,uVar4,uVar10,fVar11,fVar12);
    pfVar5 = local_44;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar5 = pTVar2->sx;
      pTVar2 = (TLVertex *)&pTVar2->sy;
      pfVar5 = pfVar5 + 1;
    }
    (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_a4,4,0);
    (*this->device->lpVtbl->SetRenderState)(this->device,7,1);
    (*this->device->lpVtbl->SetRenderState)(this->device,0x14,6);
  }
  return;
}

