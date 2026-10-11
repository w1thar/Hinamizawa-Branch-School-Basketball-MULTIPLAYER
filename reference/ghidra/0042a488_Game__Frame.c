// Game::Frame @ 0042a488  size=929

void __thiscall Game::Frame(Game *this)

{
  Mat4 shadow;
  int iVar1;
  Vec3 *up;
  Vec3 *at;
  Vec3 *from;
  Mat4 *pMVar2;
  float *pfVar3;
  float fVar4;
  float yawAngle;
  undefined1 in_stack_ffffff84 [32];
  undefined4 uVar5;
  IDirect3DDevice7 *pIVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  Vec3 local_30;
  Vec3 local_24;
  Vec3 local_18;
  int local_c;
  int local_8;
  
  if (this->state == 1) {
    State1_Title(this);
  }
  else if (this->state == 2) {
    State2(this);
  }
  else if (this->state == 3) {
    State3(this);
  }
  else if (this->state == 4) {
    State4(this);
  }
  else if (this->state == 5) {
    State5(this);
  }
  else if (this->state == 6) {
    State6(this);
  }
  else if (this->state == 7) {
    State7(this);
  }
  else if (this->state == 8) {
    State8(this);
  }
  else if (this->state == 9) {
    State9(this);
  }
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    Player::Update(this->players[local_8],this->dt);
  }
  fn_42b23c(this);
  iVar1 = (*this->primary->lpVtbl->IsLost)(this->primary);
  if (iVar1 == -0x7789fe3e) {
    (*this->primary->lpVtbl->Restore)(this->primary);
  }
  iVar1 = (*this->backbuf->lpVtbl->IsLost)(this->backbuf);
  if (iVar1 == -0x7789fe3e) {
    (*this->backbuf->lpVtbl->Restore)(this->backbuf);
  }
  iVar1 = (*this->zbuffer->lpVtbl->IsLost)(this->zbuffer);
  if (iVar1 == -0x7789fe3e) {
    (*this->zbuffer->lpVtbl->Restore)(this->zbuffer);
  }
  up = Vec3::Ctor(&local_18,0.0,1.0,0.0);
  at = Vec3::Ctor(&local_24,(this->camPos).x + (this->camDir).x,(this->camPos).y + (this->camDir).y,
                  (this->camPos).z + (this->camDir).z);
  from = Vec3::Ctor(&local_30,(this->camPos).x,(this->camPos).y,(this->camPos).z);
  D3DUtil_SetViewMatrix(&this->matView,from,at,up);
  (*this->device->lpVtbl->SetTransform)(this->device,2,&this->matView);
  uVar8 = 0;
  uVar7 = 0;
  pIVar6 = this->device;
  uVar5 = 0x42a6f0;
  (*this->device->lpVtbl->Clear)(pIVar6,0,(void *)0x0,2,0,1.0,0);
  (*this->device->lpVtbl->SetLight)(this->device,0,&this->light);
  iVar1 = (*this->device->lpVtbl->BeginScene)(this->device);
  if (-1 < iVar1) {
    fVar4 = Atan2((this->camDir).y,1.0);
    uVar9 = 0x42a75b;
    yawAngle = Atan2((this->camDir).x,(this->camDir).z);
    uVar10 = 0x42a769;
    RenderSky(this,yawAngle,fVar4);
    fVar4 = 6.12121e-39;
    RenderCourt(this);
    for (local_c = 0; local_c < 6; local_c = local_c + 1) {
      pMVar2 = &this->matShadow;
      pfVar3 = (float *)&stack0xffffff84;
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pfVar3 = pMVar2->m[0];
        pMVar2 = (Mat4 *)(pMVar2->m + 1);
        pfVar3 = pfVar3 + 1;
      }
      shadow.m[8] = (float)uVar5;
      shadow.m[0] = (float)in_stack_ffffff84._0_4_;
      shadow.m[1] = (float)in_stack_ffffff84._4_4_;
      shadow.m[2] = (float)in_stack_ffffff84._8_4_;
      shadow.m[3] = (float)in_stack_ffffff84._12_4_;
      shadow.m[4] = (float)in_stack_ffffff84._16_4_;
      shadow.m[5] = (float)in_stack_ffffff84._20_4_;
      shadow.m[6] = (float)in_stack_ffffff84._24_4_;
      shadow.m[7] = (float)in_stack_ffffff84._28_4_;
      shadow.m[9] = (float)pIVar6;
      shadow.m[10] = (float)uVar7;
      shadow.m[0xb] = (float)uVar8;
      shadow.m[0xc] = (float)uVar9;
      shadow.m[0xd] = (float)uVar10;
      shadow.m[0xe] = yawAngle;
      shadow.m[0xf] = fVar4;
      Player::Render(this->players[local_c],this->device,shadow);
    }
    fn_42a8fa(this);
    fn_42134c(this);
    fn_421d0f(this);
    fn_422100(this);
    fn_428844(this);
    fn_42557f(this);
    fn_4259a7(this);
    fn_428491(this);
    fn_4286c9(this);
    (*this->device->lpVtbl->EndScene)(this->device);
  }
  fn_41b070(this);
  Flip(this);
  return;
}

