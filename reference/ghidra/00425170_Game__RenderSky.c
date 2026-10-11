// Game::RenderSky @ 00425170  size=1039

void __thiscall Game::RenderSky(Game *this,float yawAngle,float pitchAngle)

{
  Vec3 *pVVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_138 [12];
  undefined1 local_12c [32];
  undefined1 local_10c [12];
  undefined1 local_100 [32];
  undefined1 local_e0 [12];
  undefined1 local_d4 [32];
  undefined1 local_b4 [12];
  undefined1 local_a8 [32];
  undefined4 local_88 [6];
  float local_70;
  float local_6c;
  undefined4 local_68 [6];
  float local_50;
  float local_4c;
  undefined4 local_48 [6];
  float local_30;
  float local_2c;
  undefined4 local_28 [6];
  float local_10;
  float local_c;
  float local_8;
  
  thunk_FUN_0040c3a0(local_88,0x20,4,&LAB_0040119f);
  uVar10 = 0x3f800000;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0xffffffff;
  uVar6 = 0x3f000000;
  pVVar1 = Vec3_Set(local_b4,(Vec3 *)0x0,480.0,0.9999,0.5);
  puVar2 = thunk_FUN_00422870(local_a8,&pVVar1->x,uVar6,uVar7,uVar8,uVar9,uVar10);
  puVar5 = local_88;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0xffffffff;
  uVar6 = 0x3f000000;
  pVVar1 = Vec3_Set(local_e0,(Vec3 *)0x0,0.0,0.9999,0.5);
  puVar2 = thunk_FUN_00422870(local_d4,&pVVar1->x,uVar6,uVar7,uVar8,uVar9,uVar10);
  puVar5 = local_68;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar10 = 0x3f800000;
  uVar9 = 0x3f800000;
  uVar8 = 0;
  uVar7 = 0xffffffff;
  uVar6 = 0x3f000000;
  pVVar1 = Vec3_Set(local_10c,(Vec3 *)0x44200000,480.0,0.9999,0.5);
  puVar2 = thunk_FUN_00422870(local_100,&pVVar1->x,uVar6,uVar7,uVar8,uVar9,uVar10);
  puVar5 = local_48;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar10 = 0;
  uVar9 = 0x3f800000;
  uVar8 = 0;
  uVar7 = 0xffffffff;
  uVar6 = 0x3f000000;
  pVVar1 = Vec3_Set(local_138,(Vec3 *)0x44200000,0.0,0.9999,0.5);
  puVar2 = thunk_FUN_00422870(local_12c,&pVVar1->x,uVar6,uVar7,uVar8,uVar9,uVar10);
  puVar5 = local_28;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  if (-1.57 <= (this->v37c).z || yawAngle <= 1.57) {
    if ((this->v37c).z <= 1.57 || -1.57 <= yawAngle) {
      (this->v37c).y = (yawAngle - (this->v37c).z) + (this->v37c).y;
    }
    else {
      (this->v37c).y = (yawAngle - (this->v37c).z) + 6.28 + (this->v37c).y;
    }
  }
  else {
    (this->v37c).y = ((yawAngle - (this->v37c).z) - 6.28) + (this->v37c).y;
  }
  (this->v37c).z = yawAngle;
  local_50 = ((this->v37c).y * 1.0 - pitchAngle * 0.55) + (this->v37c).x;
  local_70 = local_50 + 0.5;
  local_30 = local_50 + 1.5;
  local_10 = local_50 + 1.0;
  local_6c = (this->v37c).x * 0.5 + pitchAngle * 1.1;
  local_4c = local_6c + 1.0;
  (this->v37c).x = this->dt * 0.02 + (this->v37c).x;
  local_2c = local_6c;
  local_c = local_4c;
  local_8 = local_6c;
  if (this->state == 9) {
    pvVar3 = D3DTextr_GetSurface(s_basket_cloud2_bmp_00454128);
    (*this->device->lpVtbl->SetTexture)(this->device,0,pvVar3);
  }
  else {
    pvVar3 = D3DTextr_GetSurface(s_basket_clouds_bmp_0045413c);
    (*this->device->lpVtbl->SetTexture)(this->device,0,pvVar3);
  }
  (*this->device->lpVtbl->SetRenderState)(this->device,0xe,0);
  (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_88,4,0);
  (*this->device->lpVtbl->SetRenderState)(this->device,0xe,1);
  return;
}

