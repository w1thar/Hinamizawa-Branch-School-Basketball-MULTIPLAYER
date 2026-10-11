// Player::Motion_430c40 @ 00430c40  size=557

void __thiscall Player::Motion_430c40(Player *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 1; local_8 = local_8 + 1) {
    _memset(this->keys[local_8].pose,0,this->model->numBones * 0x18);
  }
  this->keys->duration = 1.0;
  this->keys->speed = 10.0;
  (this->keys->pose->trans).z = -2.611331;
  (this->keys->pose->rot).x = 1.385786;
  this->keys->pose[6].rot.x = -0.649144;
  this->keys->pose[9].rot.x = -0.652645;
  this->keys->pose[0xd].rot.x = -2.133678;
  this->keys->pose[0x10].rot.x = -2.135254;
  this->keys->pose[0x12].rot.x = -1.946719;
  this->keys[1].duration = 0.0;
  if (this->charId == 0) {
    this->keys->pose[1].rot.x = -1.183597;
    this->keys->pose[2].rot.x = -0.150282;
    this->keys->pose[6].rot.z = -0.283752;
    this->keys->pose[9].rot.z = 0.284294;
    this->keys->pose[0xc].rot.x = 1.068015;
    this->keys->pose[0xe].rot.x = -0.383819;
    this->keys->pose[0xf].rot.x = 1.033912;
    this->keys->pose[0x11].rot.x = -0.199958;
  }
  else {
    this->keys->pose[1].rot.x = -1.401227;
    this->keys->pose[2].rot.x = 0.050619;
    this->keys->pose[6].rot.z = -0.117974;
    this->keys->pose[9].rot.z = 0.116865;
    this->keys->pose[0xc].rot.x = 1.285281;
    this->keys->pose[0xe].rot.x = -0.584085;
    this->keys->pose[0xf].rot.x = 1.284369;
    this->keys->pose[0x11].rot.x = -0.568384;
  }
  return;
}

