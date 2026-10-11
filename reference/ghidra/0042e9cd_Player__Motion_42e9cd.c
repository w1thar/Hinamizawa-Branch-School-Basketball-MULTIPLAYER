// Player::Motion_42e9cd @ 0042e9cd  size=1209

void __thiscall Player::Motion_42e9cd(Player *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    _memset(this->keys[local_8].pose,0,this->model->numBones * 0x18);
  }
  if (this->charId == 3) {
    this->keys->duration = 0.092621;
  }
  else if (this->charId == 4) {
    this->keys->duration = 0.165054;
  }
  else {
    this->keys->duration = 0.13;
  }
  this->keys->speed = 10.029683;
  (this->keys->pose->trans).y = 0.512019;
  (this->keys->pose->rot).x = 0.233761;
  this->keys->pose[1].rot.x = -0.384429;
  this->keys->pose[0xc].rot.x = -0.166267;
  this->keys->pose[0xe].rot.x = -0.133624;
  this->keys->pose[0xf].rot.x = 0.583246;
  this->keys->pose[0x10].rot.x = -2.085455;
  this->keys->pose[0x12].rot.x = -1.635679;
  if (this->charId == 3) {
    this->keys[1].duration = 0.183728;
  }
  else if (this->charId == 4) {
    this->keys[1].duration = 0.25051;
  }
  else {
    this->keys[1].duration = 0.200656;
  }
  this->keys[1].speed = 10.086977;
  ((this->keys[1].pose)->trans).y = -0.32733;
  this->keys[1].pose[1].rot.x = 0.333098;
  this->keys[1].pose[2].rot.x = -0.350013;
  this->keys[1].pose[6].rot.x = -0.766075;
  this->keys[1].pose[6].rot.z = -0.217079;
  this->keys[1].pose[9].rot.x = 0.199894;
  this->keys[1].pose[9].rot.z = 0.200113;
  this->keys[1].pose[10].rot.x = 0.467221;
  this->keys[1].pose[0xc].rot.x = 0.549749;
  this->keys[1].pose[0xe].rot.x = -0.498956;
  this->keys[1].pose[0xf].rot.x = 0.367212;
  this->keys[1].pose[0x10].rot.x = -1.601415;
  this->keys[1].pose[0x11].rot.x = 0.300306;
  this->keys[1].pose[0x12].rot.x = -1.635679;
  if (this->charId == 3) {
    this->keys[2].duration = 0.092621;
  }
  else if (this->charId == 4) {
    this->keys[2].duration = 0.165054;
  }
  else {
    this->keys[2].duration = 0.13;
  }
  this->keys[2].speed = 10.029683;
  ((this->keys[2].pose)->trans).y = 0.512019;
  ((this->keys[2].pose)->rot).x = 0.233761;
  this->keys[2].pose[1].rot.x = -0.384429;
  this->keys[2].pose[0xc].rot.x = 0.583246;
  this->keys[2].pose[0xd].rot.x = -2.085455;
  this->keys[2].pose[0xf].rot.x = -0.166267;
  this->keys[2].pose[0x11].rot.x = -0.133624;
  this->keys[2].pose[0x12].rot.x = -1.635679;
  if (this->charId == 3) {
    this->keys[3].duration = 0.183728;
  }
  else if (this->charId == 4) {
    this->keys[3].duration = 0.25051;
  }
  else {
    this->keys[3].duration = 0.200656;
  }
  this->keys[3].speed = 10.086977;
  ((this->keys[3].pose)->trans).y = -0.32733;
  this->keys[3].pose[1].rot.x = 0.333098;
  this->keys[3].pose[2].rot.x = -0.350013;
  this->keys[3].pose[6].rot.x = 0.199894;
  this->keys[3].pose[6].rot.z = -0.200113;
  this->keys[3].pose[7].rot.x = 0.467221;
  this->keys[3].pose[9].rot.x = -0.766075;
  this->keys[3].pose[9].rot.z = 0.217079;
  this->keys[3].pose[0xc].rot.x = 0.367212;
  this->keys[3].pose[0xd].rot.x = -1.601415;
  this->keys[3].pose[0xe].rot.x = 0.300306;
  this->keys[3].pose[0xf].rot.x = 0.549749;
  this->keys[3].pose[0x11].rot.x = -0.498956;
  this->keys[3].pose[0x12].rot.x = -1.635679;
  this->keys[4].duration = 0.0;
  return;
}

