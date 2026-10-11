// Player::Motion_43030b @ 0043030b  size=396

void __thiscall Player::Motion_43030b(Player *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 1; local_8 = local_8 + 1) {
    _memset(this->keys[local_8].pose,0,this->model->numBones * 0x18);
  }
  this->keys->duration = 3.083123;
  this->keys->speed = 10.650151;
  (this->keys->pose->trans).y = -0.206329;
  this->keys->pose[1].rot.x = -0.51719;
  this->keys->pose[6].rot.x = 1.0679;
  this->keys->pose[7].rot.x = 1.000625;
  this->keys->pose[7].rot.y = 0.601183;
  this->keys->pose[9].rot.x = 1.068707;
  this->keys->pose[10].rot.x = 1.002826;
  this->keys->pose[10].rot.y = -0.602714;
  this->keys->pose[0xc].rot.x = 0.450112;
  this->keys->pose[0xd].rot.x = -0.835443;
  this->keys->pose[0xe].rot.x = 0.399916;
  this->keys->pose[0xf].rot.x = 0.450937;
  this->keys->pose[0x10].rot.x = -0.835914;
  this->keys->pose[0x11].rot.x = 0.4015;
  this->keys->pose[0x12].rot.x = -1.635679;
  this->keys[1].duration = 0.0;
  return;
}

