// Player::Motion_430e6d @ 00430e6d  size=683

void __thiscall Player::Motion_430e6d(Player *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    _memset(this->keys[local_8].pose,0,this->model->numBones * 0x18);
  }
  this->keys->duration = 0.163484;
  this->keys->speed = 19.98542;
  (this->keys->pose->trans).y = -0.005471;
  (this->keys->pose->trans).z = 3.744313;
  (this->keys->pose->rot).x = -1.052104;
  this->keys->pose[1].rot.x = -0.114426;
  this->keys->pose[2].rot.x = -0.231769;
  this->keys->pose[6].rot.x = 1.267097;
  this->keys->pose[6].rot.z = -0.316686;
  this->keys->pose[9].rot.x = 2.117732;
  this->keys->pose[9].rot.z = 0.366727;
  this->keys->pose[10].rot.x = 1.085899;
  this->keys->pose[0xc].rot.x = 1.0837;
  this->keys->pose[0xd].rot.x = -2.08614;
  this->keys->pose[0xf].rot.x = 1.102348;
  this->keys->pose[0x10].rot.x = -2.120215;
  this->keys->pose[0x12].rot.x = -1.635679;
  this->keys[1].duration = 0.132369;
  this->keys[1].speed = 19.705898;
  ((this->keys[1].pose)->trans).y = -0.005471;
  ((this->keys[1].pose)->trans).z = 3.744313;
  ((this->keys[1].pose)->rot).x = -1.052104;
  this->keys[1].pose[1].rot.x = -0.114321;
  this->keys[1].pose[2].rot.x = -0.615836;
  this->keys[1].pose[6].rot.x = 1.267097;
  this->keys[1].pose[6].rot.z = -0.316844;
  this->keys[1].pose[9].rot.x = 1.399102;
  this->keys[1].pose[9].rot.z = 0.317875;
  this->keys[1].pose[10].rot.x = 0.167717;
  this->keys[1].pose[0xc].rot.x = 1.0837;
  this->keys[1].pose[0xd].rot.x = -2.08614;
  this->keys[1].pose[0xf].rot.x = 1.102348;
  this->keys[1].pose[0x10].rot.x = -2.120215;
  this->keys[1].pose[0x12].rot.x = -1.635679;
  this->keys[2].duration = 0.0;
  return;
}

