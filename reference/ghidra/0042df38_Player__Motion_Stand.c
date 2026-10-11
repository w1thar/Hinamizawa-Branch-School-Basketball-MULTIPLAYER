// Player::Motion_Stand @ 0042df38  size=136

void __thiscall Player::Motion_Stand(Player *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 1; local_8 = local_8 + 1) {
    _memset(this->keys[local_8].pose,0,this->model->numBones * 0x18);
  }
  this->keys->duration = 0.255603;
  this->keys->speed = 5.0;
  this->keys->pose[0x12].rot.x = -1.181488;
  this->keys[1].duration = 0.0;
  return;
}

