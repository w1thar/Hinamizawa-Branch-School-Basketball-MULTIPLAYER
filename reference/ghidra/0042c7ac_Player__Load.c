// Player::Load @ 0042c7ac  size=2023

void __thiscall Player::Load(Player *this,IDirect3DDevice7 *dev,int charId)

{
  Vec3 *pVVar1;
  Vec3 *pVVar2;
  int iVar3;
  Bone *pBVar4;
  SkinModel *this_00;
  MotionKey *pMVar5;
  BonePose *pBVar6;
  undefined4 *unaff_FS_OFFSET;
  BonePose *local_13c;
  SkinModel *local_138;
  int local_11c;
  char local_114 [256];
  int local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044cd8c;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  this->charId = charId;
  switch(this->charId) {
  case 0:
    sprintf(local_114,&DAT_004543d4);
    this->stat168 = 10.0;
    this->stat16c = 15.0;
    this->stat170 = 4.0;
    this->stat174 = 8.0;
    this->stat178 = 15.0;
    this->stat17c = 9.0;
    this->stat180 = 5.3;
    break;
  case 1:
    sprintf(local_114,&DAT_004543d8);
    this->stat168 = 10.0;
    this->stat16c = 15.0;
    this->stat170 = 3.9;
    this->stat174 = 7.0;
    this->stat178 = 14.0;
    this->stat17c = 9.0;
    this->stat180 = 5.3;
    break;
  case 2:
    sprintf(local_114,&DAT_004543e0);
    this->stat168 = 9.0;
    this->stat16c = 16.0;
    this->stat170 = 3.89;
    this->stat174 = 6.0;
    this->stat178 = 13.0;
    this->stat17c = 8.0;
    this->stat180 = 5.3;
    break;
  case 3:
    sprintf(local_114,(byte *)s_satoko_004543e8);
    this->stat168 = 10.5;
    this->stat16c = 13.0;
    this->stat170 = 3.1;
    this->stat174 = 5.0;
    this->stat178 = 12.0;
    this->stat17c = 4.0;
    this->stat180 = 4.8;
    break;
  case 4:
    sprintf(local_114,&DAT_004543f0);
    this->stat168 = 8.0;
    this->stat16c = 12.0;
    this->stat170 = 3.3;
    this->stat174 = 5.0;
    this->stat178 = 12.0;
    this->stat17c = 12.0;
    this->stat180 = 4.8;
    break;
  case 5:
    sprintf(local_114,&DAT_004543f8);
    this->stat168 = 9.0;
    this->stat16c = 15.0;
    this->stat170 = 3.9;
    this->stat174 = 7.0;
    this->stat178 = 14.0;
    this->stat17c = 8.0;
    this->stat180 = 5.3;
  }
  this_00 = operator_new(0x34);
  local_8 = 0;
  if (this_00 == (SkinModel *)0x0) {
    local_138 = (SkinModel *)0x0;
  }
  else {
    local_138 = SkinModel::Ctor(this_00);
  }
  local_8 = 0xffffffff;
  this->model = local_138;
  SkinModel::Load(this->model,local_114);
  sprintf(this->texName,(byte *)s_basket__s_tga_00454400);
  D3DTextr_CreateTextureFromFile(this->texName,0,0);
  pMVar5 = operator_new(0x78);
  this->keys = pMVar5;
  _memset(this->keys,0,0x78);
  for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
    iVar3 = this->model->numBones;
    local_13c = operator_new(iVar3 * 0x18);
    local_8 = 1;
    if (local_13c == (BonePose *)0x0) {
      local_13c = (BonePose *)0x0;
    }
    else {
      thunk_FUN_0040c3a0(local_13c,0x18,iVar3,&LAB_004010c8);
    }
    local_8 = 0xffffffff;
    this->keys[local_14].pose = local_13c;
    _memset(this->keys[local_14].pose,0,this->model->numBones * 0x18);
    for (local_11c = 0; local_11c < this->model->numBones; local_11c = local_11c + 1) {
      pVVar1 = &this->model->bones[local_11c].trans;
      pBVar6 = this->keys[local_14].pose + local_11c;
      (pBVar6->trans).x = pVVar1->x;
      (pBVar6->trans).y = pVVar1->y;
      (pBVar6->trans).z = pVVar1->z;
      pVVar2 = &this->model->bones[local_11c].rot;
      pVVar1 = &this->keys[local_14].pose[local_11c].rot;
      pVVar1->x = pVVar2->x;
      pVVar1->y = pVVar2->y;
      pVVar1->z = pVVar2->z;
    }
    pBVar6 = this->keys[local_14].pose;
    (pBVar6->trans).x = (this->pos).x;
    (pBVar6->trans).y = (this->pos).y;
    (pBVar6->trans).z = (this->pos).z;
    ((this->keys[local_14].pose)->rot).y = this->yaw;
  }
  pBVar4 = this->model->bones;
  (pBVar4->trans).x = (this->pos).x;
  (pBVar4->trans).y = (this->pos).y;
  (pBVar4->trans).z = (this->pos).z;
  (this->model->bones->rot).y = this->yaw;
  (this->model->bones->rot).x = 0.0;
  (this->model->bones->rot).z = 0.0;
  Motion_42df38(this);
  _memset(&this->mtl,0,0x44);
  (this->mtl).diffuse.r = 0.8;
  (this->mtl).diffuse.g = 0.8;
  (this->mtl).diffuse.b = 0.8;
  (this->mtl).diffuse.a = 0.5;
  (this->mtl).ambient.r = 0.8;
  (this->mtl).ambient.g = 0.8;
  (this->mtl).ambient.b = 0.8;
  (this->mtl).ambient.a = 1.0;
  (this->mtl).specular.r = 0.0;
  (this->mtl).specular.g = 0.0;
  (this->mtl).specular.b = 0.0;
  (this->mtl).specular.a = 1.0;
  (this->mtl).emissive.r = 0.1;
  (this->mtl).emissive.g = 0.1;
  (this->mtl).emissive.b = 0.1;
  (this->mtl).power = 0.0;
  *unaff_FS_OFFSET = local_10;
  return;
}

