// Player::Motion_43006a @ 0043006a  size=353

void __thiscall Player::Motion_43006a(Player *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 1; local_8 = local_8 + 1) {
    _memset(this->keys[local_8].pose,0,this->model->numBones * 0x18);
  }
  this->keys->duration = 0.41692;
  this->keys->speed = 10.302221;
  (this->keys->pose->trans).y = -0.912929;
  this->keys->pose[1].rot.x = -0.381527;
  this->keys->pose[2].rot.x = 0.864932;
  if (this->charId == 1 || this->charId == 5) {
    this->keys->pose[5].rot.x = -0.483405;
  }
  this->keys->pose[0xc].rot.x = 0.89979;
  this->keys->pose[0xd].rot.x = -2.118878;
  this->keys->pose[0xe].rot.x = 1.201277;
  this->keys->pose[0xf].rot.x = 1.034085;
  this->keys->pose[0x10].rot.x = -2.221739;
  this->keys->pose[0x11].rot.x = 1.120044;
  this->keys->pose[0x12].rot.x = -1.635679;
  this->keys[1].duration = 0.0;
  return;
}

