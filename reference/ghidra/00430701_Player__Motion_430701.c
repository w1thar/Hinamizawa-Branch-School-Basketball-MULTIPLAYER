// Player::Motion_430701 @ 00430701  size=855

void __thiscall Player::Motion_430701(Player *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 2; local_8 = local_8 + 1) {
    _memset(this->keys[local_8].pose,0,this->model->numBones * 0x18);
  }
  this->keys->duration = 1.0;
  this->keys->speed = 8.737443;
  if (this->charId == 4) {
    ((this->keys[1].pose)->trans).y = 1.937458;
  }
  else {
    (this->keys->pose->trans).y = 1.275564;
  }
  (this->keys->pose->trans).z = -0.378155;
  (this->keys->pose->rot).x = -0.451915;
  this->keys->pose[1].rot.x = 0.451262;
  this->keys->pose[2].rot.x = 0.467207;
  if (this->charId == 1 || this->charId == 5) {
    this->keys->pose[5].rot.x = -1.016092;
  }
  else if (this->charId == 0) {
    this->keys->pose[5].rot.x = -0.552554;
  }
  else if (this->charId == 2) {
    this->keys->pose[5].rot.x = -0.18289;
  }
  else if (this->charId == 3) {
    this->keys->pose[5].rot.x = -0.517364;
  }
  this->keys->pose[6].rot.x = 2.283946;
  this->keys->pose[9].rot.x = 2.218298;
  this->keys->pose[0xc].rot.x = -0.281621;
  this->keys->pose[0xd].rot.x = -0.434391;
  this->keys->pose[0xe].rot.x = -0.450932;
  this->keys->pose[0x11].rot.x = -0.601229;
  this->keys->pose[0x12].rot.x = -1.181488;
  this->keys[1].duration = 3.0;
  this->keys[1].speed = 5.566231;
  ((this->keys[1].pose)->trans).z = -1.278044;
  if (this->charId == 4) {
    this->keys[1].pose[1].rot.x = -0.301219;
    this->keys[1].pose[2].rot.x = 0.550247;
  }
  else {
    this->keys[1].pose[1].rot.x = -0.636004;
    this->keys[1].pose[2].rot.x = 0.968809;
  }
  if (this->charId == 1 || this->charId == 5) {
    this->keys[1].pose[5].rot.x = -0.332834;
  }
  else if (this->charId == 5) {
    this->keys[1].pose[5].rot.x = 0.266837;
  }
  this->keys[1].pose[6].rot.x = 1.034822;
  this->keys[1].pose[6].rot.z = -0.331834;
  this->keys[1].pose[9].rot.x = 1.067766;
  this->keys[1].pose[9].rot.z = 0.450248;
  this->keys[1].pose[0xc].rot.x = -0.634053;
  this->keys[1].pose[0xe].rot.x = -0.367273;
  this->keys[1].pose[0x12].rot.x = -1.181488;
  this->keys[2].duration = 0.0;
  return;
}

