// Game::fn_4259a7 @ 004259a7  size=4526

void __thiscall Game::fn_4259a7(Game *this)

{
  float fVar1;
  Vec3 *pVVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  float10 fVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_418 [12];
  undefined1 local_40c [32];
  undefined1 local_3ec [12];
  undefined1 local_3e0 [32];
  undefined1 local_3c0 [12];
  undefined1 local_3b4 [32];
  undefined1 local_394 [12];
  undefined1 local_388 [32];
  undefined1 local_368 [12];
  undefined1 local_35c [32];
  undefined1 local_33c [12];
  undefined1 local_330 [32];
  undefined1 local_310 [12];
  undefined1 local_304 [32];
  undefined1 local_2e4 [12];
  undefined1 local_2d8 [32];
  undefined1 local_2b8 [12];
  undefined1 local_2ac [32];
  undefined1 local_28c [12];
  undefined1 local_280 [32];
  undefined1 local_260 [12];
  undefined1 local_254 [32];
  undefined1 local_234 [12];
  undefined1 local_228 [32];
  undefined1 local_208 [12];
  undefined1 local_1fc [32];
  undefined1 local_1dc [12];
  undefined1 local_1d0 [32];
  undefined1 local_1b0 [12];
  undefined1 local_1a4 [32];
  undefined1 local_184 [12];
  undefined1 local_178 [32];
  undefined1 local_158 [12];
  undefined1 local_14c [32];
  undefined1 local_12c [12];
  undefined1 local_120 [32];
  undefined1 local_100 [12];
  undefined1 local_f4 [32];
  undefined1 local_d4 [12];
  undefined1 local_c8 [32];
  float local_a8;
  undefined4 local_a4 [8];
  undefined4 local_84 [8];
  undefined4 local_64 [8];
  undefined4 local_44 [8];
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
    fVar7 = (float10)thunk_FUN_00404990(this);
    fVar1 = (float)fVar7;
    if (1e-06 < fVar1) {
      local_18 = local_18 / fVar1;
      local_1c = local_1c / fVar1;
    }
    local_a8 = (fVar1 * 2.0) / 5.0;
    rand();
    lVar8 = __ftol();
    local_8 = (int)lVar8;
    (*this->device->lpVtbl->SetRenderState)(this->device,0x14,4);
    (*this->device->lpVtbl->SetRenderState)(this->device,7,0);
    thunk_FUN_0040c3a0(local_a4,0x20,4,&LAB_0040119f);
    local_14 = 1.5;
    local_20 = (float)local_8 + 12.0;
    local_10 = 0x3e4ccccd;
    local_24 = 0x3e4ccccd;
    local_c = 0;
    uVar14 = 0x3f553f7d;
    uVar13 = 0xbf4c49ba;
    uVar12 = 0;
    lVar8 = __ftol();
    lVar9 = __ftol();
    lVar10 = __ftol();
    uVar5 = (int)lVar8 << 0x10 | 0xff000000U | (int)lVar9 << 8 | (uint)lVar10;
    uVar11 = 0x3f000000;
    pVVar2 = Vec3_Set(local_d4,(Vec3 *)((local_18 * local_14 * local_a8 + this->f388) - local_20),
                      local_1c * local_14 * local_a8 + this->f38c + local_20,0.9999,0.5);
    puVar3 = thunk_FUN_00422870(local_c8,&pVVar2->x,uVar11,uVar5,uVar12,uVar13,uVar14);
    puVar6 = local_a4;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar14 = 0x3f256042;
    uVar13 = 0xbf4c49ba;
    uVar12 = 0;
    lVar8 = __ftol();
    lVar9 = __ftol();
    lVar10 = __ftol();
    uVar5 = (int)lVar8 << 0x10 | 0xff000000U | (int)lVar9 << 8 | (uint)lVar10;
    uVar11 = 0x3f000000;
    pVVar2 = Vec3_Set(local_100,(Vec3 *)((local_18 * local_14 * local_a8 + this->f388) - local_20),
                      (local_1c * local_14 * local_a8 + this->f38c) - local_20,0.9999,0.5);
    puVar3 = thunk_FUN_00422870(local_f4,&pVVar2->x,uVar11,uVar5,uVar12,uVar13,uVar14);
    puVar6 = local_84;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar14 = 0x3f553f7d;
    uVar13 = 0xbf7c6a7f;
    uVar12 = 0;
    lVar8 = __ftol();
    lVar9 = __ftol();
    lVar10 = __ftol();
    uVar5 = (int)lVar8 << 0x10 | 0xff000000U | (int)lVar9 << 8 | (uint)lVar10;
    uVar11 = 0x3f000000;
    pVVar2 = Vec3_Set(local_12c,(Vec3 *)(local_18 * local_14 * local_a8 + this->f388 + local_20),
                      local_1c * local_14 * local_a8 + this->f38c + local_20,0.9999,0.5);
    puVar3 = thunk_FUN_00422870(local_120,&pVVar2->x,uVar11,uVar5,uVar12,uVar13,uVar14);
    puVar6 = local_64;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar14 = 0x3f256042;
    uVar13 = 0xbf7c6a7f;
    uVar12 = 0;
    lVar8 = __ftol();
    lVar9 = __ftol();
    lVar10 = __ftol();
    uVar5 = (int)lVar8 << 0x10 | 0xff000000U | (int)lVar9 << 8 | (uint)lVar10;
    uVar11 = 0x3f000000;
    pVVar2 = Vec3_Set(local_158,(Vec3 *)(local_18 * local_14 * local_a8 + this->f388 + local_20),
                      (local_1c * local_14 * local_a8 + this->f38c) - local_20,0.9999,0.5);
    puVar3 = thunk_FUN_00422870(local_14c,&pVVar2->x,uVar11,uVar5,uVar12,uVar13,uVar14);
    puVar6 = local_44;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_a4,4,0);
    local_14 = 2.3;
    local_20 = (float)local_8 + 3.2;
    local_10 = 0x3f19999a;
    local_24 = 0x3e99999a;
    local_c = 0;
    uVar14 = 0x3f553f7d;
    uVar13 = 0xbf4c49ba;
    uVar12 = 0;
    lVar8 = __ftol();
    lVar9 = __ftol();
    lVar10 = __ftol();
    uVar5 = (int)lVar8 << 0x10 | 0xff000000U | (int)lVar9 << 8 | (uint)lVar10;
    uVar11 = 0x3f000000;
    pVVar2 = Vec3_Set(local_184,(Vec3 *)((local_18 * local_14 * local_a8 + this->f388) - local_20),
                      local_1c * local_14 * local_a8 + this->f38c + local_20,0.9999,0.5);
    puVar3 = thunk_FUN_00422870(local_178,&pVVar2->x,uVar11,uVar5,uVar12,uVar13,uVar14);
    puVar6 = local_a4;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar14 = 0x3f256042;
    uVar13 = 0xbf4c49ba;
    uVar12 = 0;
    lVar8 = __ftol();
    lVar9 = __ftol();
    lVar10 = __ftol();
    uVar5 = (int)lVar8 << 0x10 | 0xff000000U | (int)lVar9 << 8 | (uint)lVar10;
    uVar11 = 0x3f000000;
    pVVar2 = Vec3_Set(local_1b0,(Vec3 *)((local_18 * local_14 * local_a8 + this->f388) - local_20),
                      (local_1c * local_14 * local_a8 + this->f38c) - local_20,0.9999,0.5);
    puVar3 = thunk_FUN_00422870(local_1a4,&pVVar2->x,uVar11,uVar5,uVar12,uVar13,uVar14);
    puVar6 = local_84;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar14 = 0x3f553f7d;
    uVar13 = 0xbf7c6a7f;
    uVar12 = 0;
    lVar8 = __ftol();
    lVar9 = __ftol();
    lVar10 = __ftol();
    uVar5 = (int)lVar8 << 0x10 | 0xff000000U | (int)lVar9 << 8 | (uint)lVar10;
    uVar11 = 0x3f000000;
    pVVar2 = Vec3_Set(local_1dc,(Vec3 *)(local_18 * local_14 * local_a8 + this->f388 + local_20),
                      local_1c * local_14 * local_a8 + this->f38c + local_20,0.9999,0.5);
    puVar3 = thunk_FUN_00422870(local_1d0,&pVVar2->x,uVar11,uVar5,uVar12,uVar13,uVar14);
    puVar6 = local_64;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar14 = 0x3f256042;
    uVar13 = 0xbf7c6a7f;
    uVar12 = 0;
    lVar8 = __ftol();
    lVar9 = __ftol();
    lVar10 = __ftol();
    uVar5 = (int)lVar8 << 0x10 | 0xff000000U | (int)lVar9 << 8 | (uint)lVar10;
    uVar11 = 0x3f000000;
    pVVar2 = Vec3_Set(local_208,(Vec3 *)(local_18 * local_14 * local_a8 + this->f388 + local_20),
                      (local_1c * local_14 * local_a8 + this->f38c) - local_20,0.9999,0.5);
    puVar3 = thunk_FUN_00422870(local_1fc,&pVVar2->x,uVar11,uVar5,uVar12,uVar13,uVar14);
    puVar6 = local_44;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_a4,4,0);
    local_14 = 3.25;
    local_20 = (float)local_8 + 32.0;
    local_10 = 0x3dcccccd;
    local_24 = 0x3e99999a;
    local_c = 0x3ecccccd;
    uVar14 = 0x3f241893;
    uVar13 = 0xbf1a5e35;
    uVar12 = 0;
    lVar8 = __ftol();
    lVar9 = __ftol();
    lVar10 = __ftol();
    uVar5 = (int)lVar8 << 0x10 | 0xff000000U | (int)lVar9 << 8 | (uint)lVar10;
    uVar11 = 0x3f000000;
    pVVar2 = Vec3_Set(local_234,(Vec3 *)((local_18 * local_14 * local_a8 + this->f388) - local_20),
                      local_1c * local_14 * local_a8 + this->f38c + local_20,0.9999,0.5);
    puVar3 = thunk_FUN_00422870(local_228,&pVVar2->x,uVar11,uVar5,uVar12,uVar13,uVar14);
    puVar6 = local_a4;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar14 = 0x3ee8f5c3;
    uVar13 = 0xbf1a5e35;
    uVar12 = 0;
    lVar8 = __ftol();
    lVar9 = __ftol();
    lVar10 = __ftol();
    uVar5 = (int)lVar8 << 0x10 | 0xff000000U | (int)lVar9 << 8 | (uint)lVar10;
    uVar11 = 0x3f000000;
    pVVar2 = Vec3_Set(local_260,(Vec3 *)((local_18 * local_14 * local_a8 + this->f388) - local_20),
                      (local_1c * local_14 * local_a8 + this->f38c) - local_20,0.9999,0.5);
    puVar3 = thunk_FUN_00422870(local_254,&pVVar2->x,uVar11,uVar5,uVar12,uVar13,uVar14);
    puVar6 = local_84;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar14 = 0x3f241893;
    uVar13 = 0xbf49374c;
    uVar12 = 0;
    lVar8 = __ftol();
    lVar9 = __ftol();
    lVar10 = __ftol();
    uVar5 = (int)lVar8 << 0x10 | 0xff000000U | (int)lVar9 << 8 | (uint)lVar10;
    uVar11 = 0x3f000000;
    pVVar2 = Vec3_Set(local_28c,(Vec3 *)(local_18 * local_14 * local_a8 + this->f388 + local_20),
                      local_1c * local_14 * local_a8 + this->f38c + local_20,0.9999,0.5);
    puVar3 = thunk_FUN_00422870(local_280,&pVVar2->x,uVar11,uVar5,uVar12,uVar13,uVar14);
    puVar6 = local_64;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar14 = 0x3ee8f5c3;
    uVar13 = 0xbf49374c;
    uVar12 = 0;
    lVar8 = __ftol();
    lVar9 = __ftol();
    lVar10 = __ftol();
    uVar5 = (int)lVar8 << 0x10 | 0xff000000U | (int)lVar9 << 8 | (uint)lVar10;
    uVar11 = 0x3f000000;
    pVVar2 = Vec3_Set(local_2b8,(Vec3 *)(local_18 * local_14 * local_a8 + this->f388 + local_20),
                      (local_1c * local_14 * local_a8 + this->f38c) - local_20,0.9999,0.5);
    puVar3 = thunk_FUN_00422870(local_2ac,&pVVar2->x,uVar11,uVar5,uVar12,uVar13,uVar14);
    puVar6 = local_44;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_a4,4,0);
    local_14 = 4.0;
    local_20 = (float)local_8 + 16.0;
    local_10 = 0x3e4ccccd;
    local_24 = 0x3e4ccccd;
    local_c = 0;
    uVar14 = 0x3f553f7d;
    uVar13 = 0xbf4c49ba;
    uVar12 = 0;
    lVar8 = __ftol();
    lVar9 = __ftol();
    lVar10 = __ftol();
    uVar5 = (int)lVar8 << 0x10 | 0xff000000U | (int)lVar9 << 8 | (uint)lVar10;
    uVar11 = 0x3f000000;
    pVVar2 = Vec3_Set(local_2e4,(Vec3 *)((local_18 * local_14 * local_a8 + this->f388) - local_20),
                      local_1c * local_14 * local_a8 + this->f38c + local_20,0.9999,0.5);
    puVar3 = thunk_FUN_00422870(local_2d8,&pVVar2->x,uVar11,uVar5,uVar12,uVar13,uVar14);
    puVar6 = local_a4;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar14 = 0x3f256042;
    uVar13 = 0xbf4c49ba;
    uVar12 = 0;
    lVar8 = __ftol();
    lVar9 = __ftol();
    lVar10 = __ftol();
    uVar5 = (int)lVar8 << 0x10 | 0xff000000U | (int)lVar9 << 8 | (uint)lVar10;
    uVar11 = 0x3f000000;
    pVVar2 = Vec3_Set(local_310,(Vec3 *)((local_18 * local_14 * local_a8 + this->f388) - local_20),
                      (local_1c * local_14 * local_a8 + this->f38c) - local_20,0.9999,0.5);
    puVar3 = thunk_FUN_00422870(local_304,&pVVar2->x,uVar11,uVar5,uVar12,uVar13,uVar14);
    puVar6 = local_84;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar14 = 0x3f553f7d;
    uVar13 = 0xbf7c6a7f;
    uVar12 = 0;
    lVar8 = __ftol();
    lVar9 = __ftol();
    lVar10 = __ftol();
    uVar5 = (int)lVar8 << 0x10 | 0xff000000U | (int)lVar9 << 8 | (uint)lVar10;
    uVar11 = 0x3f000000;
    pVVar2 = Vec3_Set(local_33c,(Vec3 *)(local_18 * local_14 * local_a8 + this->f388 + local_20),
                      local_1c * local_14 * local_a8 + this->f38c + local_20,0.9999,0.5);
    puVar3 = thunk_FUN_00422870(local_330,&pVVar2->x,uVar11,uVar5,uVar12,uVar13,uVar14);
    puVar6 = local_64;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar14 = 0x3f256042;
    uVar13 = 0xbf7c6a7f;
    uVar12 = 0;
    lVar8 = __ftol();
    lVar9 = __ftol();
    lVar10 = __ftol();
    uVar5 = (int)lVar8 << 0x10 | 0xff000000U | (int)lVar9 << 8 | (uint)lVar10;
    uVar11 = 0x3f000000;
    pVVar2 = Vec3_Set(local_368,(Vec3 *)(local_18 * local_14 * local_a8 + this->f388 + local_20),
                      (local_1c * local_14 * local_a8 + this->f38c) - local_20,0.9999,0.5);
    puVar3 = thunk_FUN_00422870(local_35c,&pVVar2->x,uVar11,uVar5,uVar12,uVar13,uVar14);
    puVar6 = local_44;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_a4,4,0);
    local_14 = 5.0;
    local_20 = (float)local_8 + 80.0;
    local_10 = 0x3ecccccd;
    local_24 = 0x3dcccccd;
    local_c = 0;
    uVar14 = 0x3f241893;
    uVar13 = 0xbf1a5e35;
    uVar12 = 0;
    lVar8 = __ftol();
    lVar9 = __ftol();
    lVar10 = __ftol();
    uVar5 = (int)lVar8 << 0x10 | 0xff000000U | (int)lVar9 << 8 | (uint)lVar10;
    uVar11 = 0x3f000000;
    pVVar2 = Vec3_Set(local_394,(Vec3 *)((local_18 * local_14 * local_a8 + this->f388) - local_20),
                      local_1c * local_14 * local_a8 + this->f38c + local_20,0.9999,0.5);
    puVar3 = thunk_FUN_00422870(local_388,&pVVar2->x,uVar11,uVar5,uVar12,uVar13,uVar14);
    puVar6 = local_a4;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar14 = 0x3ee8f5c3;
    uVar13 = 0xbf1a5e35;
    uVar12 = 0;
    lVar8 = __ftol();
    lVar9 = __ftol();
    lVar10 = __ftol();
    uVar5 = (int)lVar8 << 0x10 | 0xff000000U | (int)lVar9 << 8 | (uint)lVar10;
    uVar11 = 0x3f000000;
    pVVar2 = Vec3_Set(local_3c0,(Vec3 *)((local_18 * local_14 * local_a8 + this->f388) - local_20),
                      (local_1c * local_14 * local_a8 + this->f38c) - local_20,0.9999,0.5);
    puVar3 = thunk_FUN_00422870(local_3b4,&pVVar2->x,uVar11,uVar5,uVar12,uVar13,uVar14);
    puVar6 = local_84;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar14 = 0x3f241893;
    uVar13 = 0xbf49374c;
    uVar12 = 0;
    lVar8 = __ftol();
    lVar9 = __ftol();
    lVar10 = __ftol();
    uVar5 = (int)lVar8 << 0x10 | 0xff000000U | (int)lVar9 << 8 | (uint)lVar10;
    uVar11 = 0x3f000000;
    pVVar2 = Vec3_Set(local_3ec,(Vec3 *)(local_18 * local_14 * local_a8 + this->f388 + local_20),
                      local_1c * local_14 * local_a8 + this->f38c + local_20,0.9999,0.5);
    puVar3 = thunk_FUN_00422870(local_3e0,&pVVar2->x,uVar11,uVar5,uVar12,uVar13,uVar14);
    puVar6 = local_64;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar14 = 0x3ee8f5c3;
    uVar13 = 0xbf49374c;
    uVar12 = 0;
    lVar8 = __ftol();
    lVar9 = __ftol();
    lVar10 = __ftol();
    uVar5 = (int)lVar8 << 0x10 | 0xff000000U | (int)lVar9 << 8 | (uint)lVar10;
    uVar11 = 0x3f000000;
    pVVar2 = Vec3_Set(local_418,(Vec3 *)(local_18 * local_14 * local_a8 + this->f388 + local_20),
                      (local_1c * local_14 * local_a8 + this->f38c) - local_20,0.9999,0.5);
    puVar3 = thunk_FUN_00422870(local_40c,&pVVar2->x,uVar11,uVar5,uVar12,uVar13,uVar14);
    puVar6 = local_44;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_a4,4,0);
    (*this->device->lpVtbl->SetRenderState)(this->device,7,1);
    (*this->device->lpVtbl->SetRenderState)(this->device,0x14,6);
  }
  return;
}

