// Player::Motion_430497 @ 00430497  size=282

void __thiscall Player::Motion_430497(Player *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 1; local_8 = local_8 + 1) {
    _memset(this->keys[local_8].pose,0,this->model->numBones * 0x18);
  }
  this->keys->duration = 1.010236;
  this->keys->speed = 20.0;
  this->keys->pose[1].rot.x = 0.435197;
  this->keys->pose[2].rot.x = -0.334135;
  this->keys->pose[6].rot.x = 1.049156;
  this->keys->pose[6].rot.z = 0.53;
  this->keys->pose[7].rot.z = -1.700387;
  this->keys->pose[9].rot.x = 1.067517;
  this->keys->pose[9].rot.z = -0.53;
  this->keys->pose[10].rot.z = 1.717258;
  this->keys->pose[0x12].rot.x = -1.181488;
  this->keys[1].duration = 0.0;
  return;
}

