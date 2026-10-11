// Player::Motion_42ee86 @ 0042ee86  size=803

void __thiscall Player::Motion_42ee86(Player *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    _memset(this->keys[local_8].pose,0,this->model->numBones * 0x18);
  }
  if (this->charId == 3) {
    this->keys->duration = 0.083359;
  }
  else if (this->charId == 4) {
    this->keys->duration = 0.148549;
  }
  else {
    this->keys->duration = 0.117084;
  }
  this->keys->speed = 14.888232;
  this->keys->duration = this->keys->duration * 1.1;
  this->keys->speed = this->keys->speed * 1.1;
  this->keys->pose[9].rot.x = 2.878723;
  this->keys->pose[9].rot.z = -0.383841;
  this->keys->pose[0x12].rot.x = -1.635679;
  if (this->charId == 3) {
    this->keys[1].duration = 0.183728;
    this->keys[1].speed = 17.553625;
  }
  else if (this->charId == 4) {
    this->keys[1].duration = 0.25051;
    this->keys[1].speed = 13.119122;
  }
  else {
    this->keys[1].duration = 0.200656;
    this->keys[1].speed = 13.119122;
  }
  this->keys[1].duration = this->keys[1].duration * 1.1;
  this->keys[1].speed = this->keys[1].speed * 1.1;
  this->keys[1].pose[0x12].rot.x = -1.635679;
  if (this->charId == 3) {
    this->keys[2].duration = 0.083359;
  }
  else if (this->charId == 4) {
    this->keys[2].duration = 0.148549;
  }
  else {
    this->keys[2].duration = 0.117084;
  }
  this->keys[2].speed = 14.888232;
  this->keys[2].duration = this->keys[2].duration * 1.1;
  this->keys[2].speed = this->keys[2].speed * 1.1;
  this->keys[2].pose[9].rot.x = 2.878723;
  this->keys[2].pose[9].rot.z = -0.383841;
  this->keys[2].pose[0x12].rot.x = -1.635679;
  if (this->charId == 3) {
    this->keys[3].duration = 0.183728;
    this->keys[3].speed = 17.553625;
  }
  else if (this->charId == 4) {
    this->keys[3].duration = 0.25051;
    this->keys[3].speed = 13.119122;
  }
  else {
    this->keys[3].duration = 0.200656;
    this->keys[3].speed = 13.119122;
  }
  this->keys[3].duration = this->keys[3].duration * 1.1;
  this->keys[3].speed = this->keys[3].speed * 1.1;
  this->keys[3].pose[0x12].rot.x = -1.635679;
  this->keys[4].duration = 0.0;
  return;
}

