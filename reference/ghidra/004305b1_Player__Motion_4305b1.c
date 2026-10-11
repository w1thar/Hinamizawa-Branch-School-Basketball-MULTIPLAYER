// Player::Motion_4305b1 @ 004305b1  size=336

void __thiscall Player::Motion_4305b1(Player *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 1; local_8 = local_8 + 1) {
    _memset(this->keys[local_8].pose,0,this->model->numBones * 0x18);
  }
  this->keys->duration = 2.135304;
  this->keys->speed = 20.0;
  (this->keys->pose->trans).z = -1.667818;
  this->keys->pose[1].rot.x = -0.600459;
  this->keys->pose[2].rot.x = 0.583884;
  this->keys->pose[6].rot.x = 1.986406;
  this->keys->pose[6].rot.z = -0.350154;
  this->keys->pose[9].rot.x = 1.968626;
  this->keys->pose[9].rot.z = 0.351358;
  this->keys->pose[0xc].rot.x = -0.418034;
  this->keys->pose[0xd].rot.x = -0.433853;
  this->keys->pose[0xf].rot.x = 0.632879;
  this->keys->pose[0x10].rot.x = -0.967213;
  this->keys->pose[0x12].rot.x = -1.181488;
  this->keys[1].duration = 0.0;
  return;
}

