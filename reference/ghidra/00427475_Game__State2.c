// Game::State2 @ 00427475  size=2520

void __thiscall Game::State2(Game *this)

{
  float fVar1;
  float x;
  float x_00;
  int local_10;
  int local_c;
  float local_8;
  
  local_8 = Atan2((this->camDir).x,(this->camDir).z);
  (this->v24c).y = 6.0;
  this->f25c = 0.0;
  this->f390 = this->f390 + this->dt;
  if ((7.0 < this->f390 && this->f390 < 8.0) && this->b398 == '\0') {
    this->b398 = '\x01';
    Sound::Play(this->sound,0);
  }
  if (12.0 < this->f390 && this->f390 < 17.0) {
    if (0.01 < this->f394) {
      this->f394 = this->f394 - this->dt * 0.2;
    }
    this->b398 = '\0';
  }
  if ((17.5 < this->f390 && this->f390 < 18.5) && this->b399 == '\0') {
    this->b399 = '\x01';
    Sound::PlayMp3(this->sound);
    for (local_c = 0; local_c < 6; local_c = local_c + 1) {
      this->players[local_c]->animTime = 2.0;
    }
  }
  if (17.0 < this->f390 && this->f390 < 22.3) {
    (this->camPos).y = (this->camPos).y - this->dt * 3.0;
  }
  fVar1 = (float)(uint)(24.8 < this->f390 && this->f390 < 25.3);
  if (fVar1 != 0.0) {
    this->b399 = '\0';
    fVar1 = sinf(fVar1);
    (this->camPos).x = (this->camPos).x - fVar1 * 13.0 * this->dt;
    fVar1 = cosf(local_8);
    (this->camPos).z = (this->camPos).z - fVar1 * 13.0 * this->dt;
  }
  fVar1 = (float)(uint)(28.8 < this->f390 && this->f390 < 29.3);
  if (fVar1 != 0.0) {
    fVar1 = sinf(fVar1);
    (this->camPos).x = (this->camPos).x - fVar1 * 13.0 * this->dt;
    fVar1 = cosf((float)this);
    (this->camPos).z = (this->camPos).z - fVar1 * 13.0 * this->dt;
  }
  if (29.3 < this->f390 && this->f390 < 31.5) {
    (this->camPos).y = (this->camPos).y + this->dt;
  }
  if (32.0 < this->f390 && this->f390 < 140.0) {
    this->b39a = '\x01';
    fVar1 = (float)(uint)(this->keyUp == KEY_HOLD || this->keyNum8 == KEY_HOLD);
    if (fVar1 != 0.0) {
      fVar1 = sinf(fVar1);
      (this->camPos).x = fVar1 * 25.0 * this->dt + (this->camPos).x;
      fVar1 = cosf(local_8);
      (this->camPos).z = fVar1 * 25.0 * this->dt + (this->camPos).z;
    }
    fVar1 = (float)(uint)(this->keyDown == KEY_HOLD || this->keyNum2 == KEY_HOLD);
    if (fVar1 != 0.0) {
      fVar1 = sinf(fVar1);
      (this->camPos).x = (this->camPos).x - fVar1 * 25.0 * this->dt;
      fVar1 = cosf(local_8);
      (this->camPos).z = (this->camPos).z - fVar1 * 25.0 * this->dt;
    }
    if (this->keyRight == KEY_HOLD || this->keyNum6 == KEY_HOLD) {
      local_8 = this->dt * 2.0 + local_8;
      fVar1 = sinf(local_8);
      (this->camDir).x = fVar1;
      fVar1 = cosf(x);
      (this->camDir).z = fVar1;
    }
    if (this->keyLeft == KEY_HOLD || this->keyNum4 == KEY_HOLD) {
      fVar1 = sinf(local_8 - this->dt * 2.0);
      (this->camDir).x = fVar1;
      fVar1 = cosf(x_00);
      (this->camDir).z = fVar1;
    }
  }
  if ((135.0 < this->f390 && this->f390 < 140.0) && (this->f394 < 0.98)) {
    this->f394 = this->dt * 0.2 + this->f394;
  }
  if (140.0 < this->f390) {
    this->state = 1;
    Sound::StopMp3(this->sound);
    this->b39a = '\0';
  }
  if ((((this->keyX == KEY_PUSH || this->keyZ == KEY_PUSH) || this->keyC == KEY_PUSH) ||
      this->keySpace == KEY_PUSH) || this->keyEnter == KEY_PUSH) {
    Sound::Play(this->sound,1);
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      Player::Motion_Stand(this->players[local_10]);
      this->players[local_10]->animTime = 0.0;
    }
    if (((((-50.0 <= (this->camPos).x || (this->camPos).x <= -65.0) || 10.0 <= (this->camPos).y) ||
         (this->camPos).y <= 0.0) || -30.0 <= (this->camPos).z) || (this->camPos).z <= -45.0) {
      (this->camPos).x = -57.0;
      (this->camPos).z = -37.0;
      (this->camPos).y = 6.0;
    }
    (this->camDir).x = 1.0;
    (this->camDir).y = 0.0;
    (this->camDir).z = 1.0;
    Sound::PlayMp3(this->sound);
    Sound::OpenMp3(this->sound,s_WAV_LP_2_mp3_00454174);
    this->f390 = 0.0;
    Sound::PlayMp3(this->sound);
    this->f394 = 0.0;
    this->f400 = 4.0;
    this->b398 = '\0';
    this->b399 = '\0';
    this->b39a = '\x01';
    this->state = 3;
  }
  return;
}

