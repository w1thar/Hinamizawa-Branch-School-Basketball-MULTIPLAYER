// Game::fn_42557f @ 0042557f  size=1064

void __thiscall Game::fn_42557f(Game *this)

{
  Vec3 *pVVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  Vec3 local_1d4;
  undefined1 local_1c8 [32];
  Vec3 local_1a8;
  undefined1 local_19c [32];
  Vec3 local_17c;
  undefined1 local_170 [32];
  Vec3 local_150;
  undefined1 local_144 [32];
  undefined4 local_124 [8];
  undefined4 local_104 [8];
  undefined4 local_e4 [8];
  undefined4 local_c4 [8];
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
    uVar10 = 0x3f54fdf4;
    uVar9 = 0xbf1a5e35;
    uVar8 = 0;
    uVar7 = 0xffffffff;
    uVar6 = 0x3f000000;
    pVVar1 = Vec3::Ctor(&local_150,this->f388 - local_a4,this->f38c + local_a4,0.9999);
    puVar2 = thunk_FUN_00422870(local_144,&pVVar1->x,uVar6,uVar7,uVar8,uVar9,uVar10);
    puVar4 = local_124;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar10 = 0x3f256042;
    uVar9 = 0xbf1a5e35;
    uVar8 = 0;
    uVar7 = 0xffffffff;
    uVar6 = 0x3f000000;
    pVVar1 = Vec3::Ctor(&local_17c,this->f388 - local_a4,this->f38c - local_a4,0.9999);
    puVar2 = thunk_FUN_00422870(local_170,&pVVar1->x,uVar6,uVar7,uVar8,uVar9,uVar10);
    puVar4 = local_104;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar10 = 0x3f54fdf4;
    uVar9 = 0xbf4a7efa;
    uVar8 = 0;
    uVar7 = 0xffffffff;
    uVar6 = 0x3f000000;
    pVVar1 = Vec3::Ctor(&local_1a8,this->f388 + local_a4,this->f38c + local_a4,0.9999);
    puVar2 = thunk_FUN_00422870(local_19c,&pVVar1->x,uVar6,uVar7,uVar8,uVar9,uVar10);
    puVar4 = local_e4;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    uVar10 = 0x3f256042;
    uVar9 = 0xbf4a7efa;
    uVar8 = 0;
    uVar7 = 0xffffffff;
    uVar6 = 0x3f000000;
    pVVar1 = Vec3::Ctor(&local_1d4,this->f388 + local_a4,this->f38c - local_a4,0.9999);
    puVar2 = thunk_FUN_00422870(local_1c8,&pVVar1->x,uVar6,uVar7,uVar8,uVar9,uVar10);
    puVar4 = local_c4;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    (*this->device->lpVtbl->SetRenderState)(this->device,0xe,0);
    (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_124,4,0);
    (*this->device->lpVtbl->SetRenderState)(this->device,0xe,1);
    (*this->device->lpVtbl->SetRenderState)(this->device,0x14,6);
  }
  return;
}

