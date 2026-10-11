// Player::Motion_4301cb @ 004301cb  size=320

void __thiscall Player::Motion_4301cb(Player *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 1; local_8 = local_8 + 1) {
    _memset(this->keys[local_8].pose,0,this->model->numBones * 0x18);
  }
  this->keys->duration = 0.466945;
  this->keys->speed = 10.542673;
  (this->keys->pose->trans).z = -0.662559;
  this->keys->pose[1].rot.x = 0.434039;
  this->keys->pose[9].rot.x = 2.825027;
  this->keys->pose[9].rot.z = 0.417354;
  this->keys->pose[0xc].rot.x = -0.500945;
  this->keys->pose[0xd].rot.x = -0.383676;
  this->keys->pose[0xe].rot.x = -0.250757;
  this->keys->pose[0xf].rot.x = -0.3845;
  this->keys->pose[0x10].rot.x = -0.283552;
  this->keys->pose[0x11].rot.x = -0.26708;
  this->keys->pose[0x12].rot.x = -1.635679;
  this->keys[1].duration = 0.0;
  return;
}

