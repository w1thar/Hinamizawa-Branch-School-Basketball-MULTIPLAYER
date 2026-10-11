// Game::State7 @ 004228f0  size=1746

void __thiscall Game::State7(Game *this)

{
  Vec3 *pVVar1;
  float x;
  float x_00;
  float fVar2;
  Vec3 local_50;
  Vec3 local_44;
  Vec3 local_38;
  Vec3 local_2c;
  Vec3 local_20;
  Vec3 local_14;
  float local_8;
  
  this->f390 = this->f390 + this->dt;
  if (this->i3b8 == 0) {
    this->f390 = 0.0;
    this->b3a5 = '\x01';
    this->b3a4 = '\x01';
    this->b3a6 = '\x01';
    this->b398 = '\0';
    this->b399 = '\0';
    this->i3ac = 0;
    this->f394 = 1.0;
    Sound::OpenMp3(this->sound);
    fVar2 = 0.0;
    pVVar1 = Vec3::Ctor(&local_14,0.0,0.0,17.0);
    Player::SetPos(this->players[0],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
    fVar2 = -0.2;
    pVVar1 = Vec3::Ctor(&local_20,-3.0,0.0,17.0);
    Player::SetPos(this->players[1],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
    fVar2 = 3.14;
    pVVar1 = Vec3::Ctor(&local_2c,-1.0,0.0,8.0);
    Player::SetPos(this->players[2],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
    fVar2 = -1.0;
    pVVar1 = Vec3::Ctor(&local_38,-5.0,0.0,15.0);
    Player::SetPos(this->players[3],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
    fVar2 = 2.0;
    pVVar1 = Vec3::Ctor(&local_44,4.0,0.0,12.0);
    Player::SetPos(this->players[4],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
    fVar2 = 0.5;
    pVVar1 = Vec3::Ctor(&local_50,3.0,0.0,16.0);
    Player::SetPos(this->players[5],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
    Player::Motion_430c40(this->players[0]);
    Player::Motion_430c40(this->players[1]);
    Player::Motion_430c40(this->players[2]);
    Player::Motion_42df38(this->players[3]);
    Player::Motion_42df38(this->players[4]);
    Player::Motion_430c40(this->players[5]);
    Player::fn_42ddac(this->players[0]);
    Player::fn_42de30(this->players[0]);
    Player::fn_42ddac(this->players[1]);
    Player::fn_42deb4(this->players[1]);
    Player::fn_42de30(this->players[1]);
    Player::fn_42de30(this->players[2]);
    Player::fn_42de30(this->players[3]);
    Player::fn_42de30(this->players[4]);
    (this->camPos).x = 16.6;
    (this->camPos).y = 5.5;
    (this->camPos).z = 27.4;
    (this->camDir).x = -0.76;
    (this->camDir).y = 0.0;
    (this->camDir).z = -0.62;
    (this->v24c).x = 0.0;
    (this->v24c).z = 0.0;
    this->f25c = 0.0;
    this->f258 = 0.0;
    this->i268 = 0;
    this->i3b8 = 1;
  }
  else if (this->i3b8 != 1 || this->f390 <= 1.0) {
    if (this->i3b8 == 5 && 1.0 < this->f390) {
      this->f390 = 0.0;
      this->i3b8 = 5;
      this->state = 5;
      this->i418 = 0;
    }
  }
  else {
    this->i3b8 = 2;
    this->f394 = 0.0;
    Sound::PlayMp3(this->sound);
    this->f390 = 0.0;
  }
  (this->v24c).y = 5.5;
  local_8 = Atan2((this->camDir).x,(this->camDir).z);
  fVar2 = (float)(uint)(this->keyUp == KEY_HOLD || this->keyNum8 == KEY_HOLD);
  if (fVar2 != 0.0) {
    fVar2 = sinf(fVar2);
    (this->camPos).x = fVar2 * 15.0 * this->dt + (this->camPos).x;
    fVar2 = cosf(local_8);
    (this->camPos).z = fVar2 * 15.0 * this->dt + (this->camPos).z;
  }
  fVar2 = (float)(uint)(this->keyDown == KEY_HOLD || this->keyNum2 == KEY_HOLD);
  if (fVar2 != 0.0) {
    fVar2 = sinf(fVar2);
    (this->camPos).x = (this->camPos).x - fVar2 * 15.0 * this->dt;
    fVar2 = cosf(local_8);
    (this->camPos).z = (this->camPos).z - fVar2 * 15.0 * this->dt;
  }
  if (this->keyRight == KEY_HOLD || this->keyNum6 == KEY_HOLD) {
    local_8 = this->dt * 2.0 + local_8;
    fVar2 = sinf(local_8);
    (this->camDir).x = fVar2;
    fVar2 = cosf(x);
    (this->camDir).z = fVar2;
  }
  if (this->keyLeft == KEY_HOLD || this->keyNum4 == KEY_HOLD) {
    local_8 = local_8 - this->dt * 2.0;
    fVar2 = sinf(local_8);
    (this->camDir).x = fVar2;
    fVar2 = cosf(x_00);
    (this->camDir).z = fVar2;
  }
  if ((this->keyX == KEY_PUSH || this->keyZ == KEY_PUSH) || this->keyC == KEY_PUSH) {
    Sound::Play(this->sound,7);
    this->i3b8 = 5;
    this->f390 = 0.0;
    this->f394 = 1.0;
    Sound::OpenMp3(this->sound);
  }
  return;
}

