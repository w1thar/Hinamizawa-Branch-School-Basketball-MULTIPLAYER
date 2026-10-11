// Player::Motion_430a58 @ 00430a58  size=488

void __thiscall Player::Motion_430a58(Player *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 1; local_8 = local_8 + 1) {
    _memset(this->keys[local_8].pose,0,this->model->numBones * 0x18);
  }
  this->keys->duration = 0.996684;
  this->keys->speed = 10.051085;
  this->keys->pose[1].rot.x = 0.417742;
  this->keys->pose[2].rot.x = 0.602423;
  if (this->charId == 1) {
    this->keys->pose[5].rot.x = -1.419186;
  }
  else if (this->charId == 3) {
    this->keys->pose[5].rot.x = -0.566652;
  }
  else if (this->charId == 4) {
    this->keys->pose[5].rot.x = -0.502808;
  }
  else if (this->charId == 5) {
    this->keys->pose[5].rot.x = -0.917176;
  }
  this->keys->pose[6].rot.x = 2.165904;
  this->keys->pose[6].rot.z = -0.347453;
  this->keys->pose[7].rot.z = -0.719634;
  this->keys->pose[9].rot.x = 2.701355;
  this->keys->pose[9].rot.z = 0.400717;
  this->keys->pose[0xc].rot.x = -0.500093;
  this->keys->pose[0xd].rot.x = -0.534013;
  this->keys->pose[0xe].rot.x = -0.71613;
  this->keys->pose[0xf].rot.x = -0.383613;
  this->keys->pose[0x11].rot.x = -0.667377;
  this->keys->pose[0x12].rot.x = -1.635679;
  this->keys[1].duration = 0.0;
  return;
}

