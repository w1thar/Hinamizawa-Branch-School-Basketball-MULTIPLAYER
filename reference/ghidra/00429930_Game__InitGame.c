// Game::InitGame @ 00429930  size=2342

void __thiscall Game::InitGame(Game *this)

{
  Sound *this_00;
  StaticMesh *pSVar1;
  Player *this_01;
  undefined4 *unaff_FS_OFFSET;
  float10 fVar2;
  Player *local_6c;
  StaticMesh *local_68;
  StaticMesh *local_64;
  StaticMesh *local_60;
  StaticMesh *local_5c;
  StaticMesh *local_58;
  Sound *local_54;
  int local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044cd4d;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  this->state = 1;
  (this->camPos).x = 0.0;
  (this->camPos).y = 0.0;
  (this->camPos).z = 0.0;
  (this->camDir).x = 1.0;
  (this->camDir).y = 0.0;
  (this->camDir).z = 1.0;
  (this->v240).x = 0.0;
  (this->v240).y = 6.0;
  (this->v240).z = 0.0;
  (this->v24c).x = 0.0;
  (this->v24c).y = 6.0;
  (this->v24c).z = 0.0;
  this->f260 = 0.0;
  this->f264 = 0.0;
  this->f258 = 0.0;
  this->f25c = 0.0;
  this->i268 = -1;
  (this->v370).x = 0.0;
  (this->v370).y = 0.0;
  (this->v370).z = 0.0;
  (this->lightDir).x = 1.0;
  (this->lightDir).y = -1.0;
  (this->lightDir).z = 1.0;
  (this->v37c).x = 0.0;
  (this->v37c).y = 0.0;
  (this->v37c).z = 0.0;
  this->f390 = 0.0;
  this->f394 = 1.0;
  this->b398 = '\0';
  this->b399 = '\0';
  this->b39a = '\0';
  this->b3a4 = '\0';
  this->b3a5 = '\0';
  this->b3a6 = '\0';
  this->b3a7 = '\0';
  this->i3ac = 0;
  this->i3b8 = 0;
  this->f3bc = 0.0;
  this->i39c = 0;
  this->f3a0 = -1.0;
  this->i3b0 = 0;
  this->i3b4 = 0;
  this->f3e0 = 300.0;
  this->i3d8 = 0;
  this->i3dc = 0;
  this->f400 = 4.0;
  this->i40c = 0;
  this->b414 = '\0';
  this->i418 = -1;
  this->f41c = 0.0;
  this_00 = operator_new(0x4c);
  local_8 = 0;
  if (this_00 == (Sound *)0x0) {
    local_54 = (Sound *)0x0;
  }
  else {
    local_54 = Sound::Ctor(this_00);
  }
  local_8 = 0xffffffff;
  this->sound = local_54;
  (*this->device->lpVtbl->SetTextureStageState)(this->device,0,5,2);
  (*this->device->lpVtbl->SetRenderState)(this->device,0x1b,1);
  (*this->device->lpVtbl->SetRenderState)(this->device,0x13,5);
  (*this->device->lpVtbl->SetRenderState)(this->device,0x14,6);
  D3DTextr_CreateTextureFromFile(s_basket_clouds_bmp_004541ac,0,0);
  D3DTextr_CreateTextureFromFile(s_basket_cloud2_bmp_004541c0,0,0);
  D3DTextr_CreateTextureFromFile(s_basket_court_tga_004541d4,0,0);
  D3DTextr_CreateTextureFromFile(s_basket_efect_tga_004541e8,0,0);
  pSVar1 = operator_new(0x24);
  local_8 = 1;
  if (pSVar1 == (StaticMesh *)0x0) {
    local_58 = (StaticMesh *)0x0;
  }
  else {
    local_58 = StaticMesh::Ctor(pSVar1);
  }
  local_8 = 0xffffffff;
  this->meshCourt = local_58;
  StaticMesh::Load(this->meshCourt,s_basket_court_x_004541fc);
  StaticMesh::Scale(this->meshCourt,2.5);
  pSVar1 = operator_new(0x24);
  local_8 = 2;
  if (pSVar1 == (StaticMesh *)0x0) {
    local_5c = (StaticMesh *)0x0;
  }
  else {
    local_5c = StaticMesh::Ctor(pSVar1);
  }
  local_8 = 0xffffffff;
  this->meshBuild = &local_5c->vtbl;
  StaticMesh::Load((StaticMesh *)this->meshBuild,s_basket_build_x_0045420c);
  StaticMesh::Scale((StaticMesh *)this->meshBuild,2.5);
  pSVar1 = operator_new(0x24);
  local_8 = 3;
  if (pSVar1 == (StaticMesh *)0x0) {
    local_60 = (StaticMesh *)0x0;
  }
  else {
    local_60 = StaticMesh::Ctor(pSVar1);
  }
  local_8 = 0xffffffff;
  this->meshGoal = &local_60->vtbl;
  StaticMesh::Load((StaticMesh *)this->meshGoal,s_basket_goal_x_0045421c);
  StaticMesh::Scale((StaticMesh *)this->meshGoal,2.5);
  pSVar1 = operator_new(0x24);
  local_8 = 4;
  if (pSVar1 == (StaticMesh *)0x0) {
    local_64 = (StaticMesh *)0x0;
  }
  else {
    local_64 = StaticMesh::Ctor(pSVar1);
  }
  local_8 = 0xffffffff;
  this->meshBall = &local_64->vtbl;
  StaticMesh::Load((StaticMesh *)this->meshBall,s_basket_ball_x_0045422c);
  StaticMesh::Scale((StaticMesh *)this->meshBall,2.5);
  pSVar1 = operator_new(0x24);
  local_8 = 5;
  if (pSVar1 == (StaticMesh *)0x0) {
    local_68 = (StaticMesh *)0x0;
  }
  else {
    local_68 = StaticMesh::Ctor(pSVar1);
  }
  local_8 = 0xffffffff;
  this->meshCone = &local_68->vtbl;
  StaticMesh::Load((StaticMesh *)this->meshCone,s_basket_corn_x_0045423c);
  StaticMesh::Scale((StaticMesh *)this->meshCone,2.5);
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    this_01 = operator_new(0x19c);
    local_8 = 6;
    if (this_01 == (Player *)0x0) {
      local_6c = (Player *)0x0;
    }
    else {
      local_6c = Player::Ctor(this_01);
    }
    local_8 = 0xffffffff;
    this->players[local_14] = local_6c;
    Player::Load(this->players[local_14],this->device,local_14);
  }
  fn_42b0bb(this);
  _memset(&this->light,0,0x68);
  (this->light).type = 3;
  (this->light).direction.x = (this->lightDir).x;
  (this->light).direction.y = (this->lightDir).y;
  (this->light).direction.z = (this->lightDir).z;
  (this->light).diffuse.r = 0.8;
  (this->light).diffuse.g = 0.8;
  (this->light).diffuse.b = 0.8;
  (this->light).ambient.r = 0.5;
  (this->light).ambient.g = 0.5;
  (this->light).ambient.b = 0.5;
  (this->light).specular.r = 1.0;
  (this->light).specular.g = 1.0;
  (this->light).specular.b = 1.0;
  (this->light).att0 = 1.0;
  fVar2 = (float10)FUN_00433c84(this);
  (this->light).range = (float)fVar2;
  (*this->device->lpVtbl->LightEnable)(this->device,0,1);
  _memset(&this->mtl,0,0x44);
  (this->mtl).diffuse.r = 1.0;
  (this->mtl).diffuse.g = 1.0;
  (this->mtl).diffuse.b = 1.0;
  (this->mtl).diffuse.a = 0.5;
  (this->mtl).ambient.r = 1.0;
  (this->mtl).ambient.g = 1.0;
  (this->mtl).ambient.b = 1.0;
  (this->mtl).ambient.a = 1.0;
  (this->mtl).specular.r = 0.0;
  (this->mtl).specular.g = 0.0;
  (this->mtl).specular.b = 0.0;
  (this->mtl).specular.a = 1.0;
  (this->mtl).emissive.r = 0.0;
  (this->mtl).emissive.g = 0.0;
  (this->mtl).emissive.b = 0.0;
  (this->mtl).power = 0.0;
  (this->matShadow).m[0] = 1.0;
  (this->matShadow).m[1] = 0.0;
  (this->matShadow).m[2] = 0.0;
  (this->matShadow).m[3] = 0.0;
  (this->matShadow).m[4] = -(this->lightDir).x / (this->lightDir).y;
  (this->matShadow).m[5] = 0.0;
  (this->matShadow).m[6] = -(this->lightDir).z / (this->lightDir).y;
  (this->matShadow).m[7] = 0.0;
  (this->matShadow).m[8] = 0.0;
  (this->matShadow).m[9] = 0.0;
  (this->matShadow).m[10] = 1.0;
  (this->matShadow).m[0xb] = 0.0;
  (this->matShadow).m[0xc] = 0.0;
  (this->matShadow).m[0xd] = 0.05;
  (this->matShadow).m[0xe] = 0.0;
  (this->matShadow).m[0xf] = 1.0;
  D3DTextr_RestoreAllTextures(this->device);
  *unaff_FS_OFFSET = local_10;
  return;
}

