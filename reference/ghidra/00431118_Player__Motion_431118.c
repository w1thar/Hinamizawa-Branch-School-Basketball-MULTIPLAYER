// Player::Motion_431118 @ 00431118  size=445

void __thiscall Player::Motion_431118(Player *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    _memset(this->keys[local_8].pose,0,this->model->numBones * 0x18);
  }
  this->keys->duration = 0.463459;
  this->keys->speed = 20.167408;
  (this->keys->pose->trans).y = 1.606003;
  (this->keys->pose->trans).z = 0.961591;
  (this->keys->pose->rot).x = -0.468663;
  this->keys->pose[1].rot.x = 0.933186;
  this->keys->pose[2].rot.x = -0.333601;
  this->keys->pose[3].rot.z = -0.448308;
  this->keys->pose[4].rot.z = 0.466325;
  this->keys->pose[6].rot.x = 2.916497;
  this->keys->pose[9].rot.x = 2.96831;
  this->keys->pose[0xc].rot.x = -0.299114;
  this->keys->pose[0xc].rot.y = 0.482194;
  this->keys->pose[0xd].rot.x = -1.903224;
  this->keys->pose[0xf].rot.x = -0.265468;
  this->keys->pose[0xf].rot.y = -0.316051;
  this->keys->pose[0x10].rot.x = -1.918761;
  this->keys->pose[0x12].rot.x = -1.635679;
  this->keys[1].duration = 0.501529;
  this->keys[1].speed = 19.133463;
  this->keys[1].pose[0x12].rot.x = -1.635679;
  this->keys[2].duration = 0.0;
  return;
}

