// Game::State4 @ 0041e9c0  size=5233

void __thiscall Game::State4(Game *this)

{
  Player *pPVar1;
  Vec3 *pVVar2;
  float fVar3;
  Vec3 local_98;
  Vec3 local_8c;
  Vec3 local_80;
  Vec3 local_74;
  Vec3 local_68;
  Vec3 local_5c;
  Vec3 local_50;
  Vec3 local_44;
  Vec3 local_38;
  Vec3 local_2c;
  Vec3 local_20;
  Vec3 local_14;
  int local_8;
  
  this->f390 = this->f390 + this->dt;
  this->f260 = this->f260 - this->dt;
  if (this->i3b8 < 3) {
    this->players[this->i3b4]->yaw = this->f390;
  }
  if (this->i3b8 < 3 && (this->keyRight == KEY_PUSH || this->keyNum6 == KEY_PUSH)) {
    Sound::Play(this->sound,2);
    fVar3 = 0.0;
    pVVar2 = Vec3::Ctor(&local_14,2.0,0.0,-30.0);
    Player::SetPos(this->players[this->i3b4],pVVar2->x,pVVar2->y,pVVar2->z,fVar3);
    this->i3b4 = this->i3b4 + 1;
    if (5 < this->i3b4) {
      this->i3b4 = 0;
    }
    while (this->players[this->i3b4]->b154 != '\0') {
      this->i3b4 = this->i3b4 + 1;
      if (5 < this->i3b4) {
        this->i3b4 = 0;
      }
    }
    fVar3 = this->f390;
    pVVar2 = Vec3::Ctor(&local_20,-2.0,0.0,-20.0);
    Player::SetPos(this->players[this->i3b4],pVVar2->x,pVVar2->y,pVVar2->z,fVar3);
  }
  if (this->i3b8 < 3 && (this->keyLeft == KEY_PUSH || this->keyNum4 == KEY_PUSH)) {
    Sound::Play(this->sound,2);
    fVar3 = 0.0;
    pVVar2 = Vec3::Ctor(&local_2c,2.0,0.0,-30.0);
    Player::SetPos(this->players[this->i3b4],pVVar2->x,pVVar2->y,pVVar2->z,fVar3);
    this->i3b4 = this->i3b4 + -1;
    if (this->i3b4 < 0) {
      this->i3b4 = 5;
    }
    while (this->players[this->i3b4]->b154 != '\0') {
      this->i3b4 = this->i3b4 + -1;
      if (this->i3b4 < 0) {
        this->i3b4 = 5;
      }
    }
    fVar3 = this->f390;
    pVVar2 = Vec3::Ctor(&local_38,-2.0,0.0,-20.0);
    Player::SetPos(this->players[this->i3b4],pVVar2->x,pVVar2->y,pVVar2->z,fVar3);
  }
  if (this->i3b8 < 3) {
    if (this->keyRight == KEY_HOLD || this->keyNum6 == KEY_HOLD) {
      this->i39c = -2;
    }
    else if (this->keyLeft == KEY_HOLD || this->keyNum4 == KEY_HOLD) {
      this->i39c = -3;
    }
    else {
      this->i39c = -1;
    }
  }
  else {
    this->i39c = 0;
  }
  if (this->i3b8 < 3 &&
      ((((this->keyX == KEY_PUSH || this->keyZ == KEY_PUSH) || this->keyC == KEY_PUSH) ||
       this->keySpace == KEY_PUSH) || this->keyEnter == KEY_PUSH)) {
    Sound::Play(this->sound,4);
    if (this->i3b8 < 2) {
      this->players[this->i3b4]->b154 = '\x01';
      fVar3 = Atan2(((float)this->i3b8 * 6.0 + 3.0) - 2.0,-20.0);
      this->players[this->i3b4]->yaw = fVar3;
      Player::Motion_42dfc0(this->players[this->i3b4]);
      if (this->i3b8 == 0) {
        this->teamYou[2] = this->i3b4;
      }
      else {
        this->teamYou[0] = this->i3b4;
      }
      this->i3b8 = this->i3b8 + 1;
      this->i3b4 = this->i3b4 + 1;
      if (5 < this->i3b4) {
        this->i3b4 = 0;
      }
      while (this->players[this->i3b4]->b154 != '\0') {
        this->i3b4 = this->i3b4 + 1;
        if (5 < this->i3b4) {
          this->i3b4 = 0;
        }
      }
      fVar3 = this->f390;
      pVVar2 = Vec3::Ctor(&local_44,-2.0,0.0,-20.0);
      Player::SetPos(this->players[this->i3b4],pVVar2->x,pVVar2->y,pVVar2->z,fVar3);
    }
    else {
      this->players[this->i3b4]->b154 = '\x01';
      fVar3 = Atan2(4.0,-20.0);
      this->players[this->i3b4]->yaw = fVar3;
      Player::Motion_42dfc0(this->players[this->i3b4]);
      this->teamYou[1] = this->i3b4;
      this->i3b8 = 0;
      for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
        if (this->players[local_8]->b154 == '\0') {
          fVar3 = Atan2((float)this->i3b8 * 2.0 + (-3.0 - (float)this->i3b8 * 3.0) + 2.0,-30.0);
          pVVar2 = Vec3::Ctor(&local_50,(float)this->i3b8 * 2.0 + 2.0,0.0,-30.0);
          Player::SetPos(this->players[local_8],pVVar2->x,pVVar2->y,pVVar2->z,fVar3);
          Player::Motion_42dfc0(this->players[local_8]);
          this->teamCom[this->i3b8] = local_8;
          this->i3b8 = this->i3b8 + 1;
        }
      }
      this->i3b8 = 3;
    }
  }
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    if (2 < this->i3b8 || this->players[local_8]->b154 != '\0') {
      if ((this->players[local_8]->pos).z <= 0.0) {
        pPVar1 = this->players[local_8];
        fVar3 = sinf(this->players[local_8]->yaw);
        (this->players[local_8]->pos).x =
             (pPVar1->pos).x - fVar3 * this->players[local_8]->stat168 * this->dt;
        pPVar1 = this->players[local_8];
        fVar3 = cosf((float)this->players[local_8]);
        (this->players[local_8]->pos).z =
             (pPVar1->pos).z - fVar3 * this->players[local_8]->stat168 * this->dt;
      }
      else {
        this->players[local_8]->yaw = 0.0;
        Player::Motion_Stand(this->players[local_8]);
      }
    }
  }
  if (2 < this->i3b8 && (this->camPos).z <= -20.0) {
    (this->camPos).z = this->dt * 2.0 + (this->camPos).z;
    (this->camPos).y = this->dt * 0.5 + (this->camPos).y;
  }
  if (-20.0 < (this->camPos).z && (this->keyUp == KEY_PUSH || this->keyNum8 == KEY_PUSH)) {
    this->i3b8 = 3;
    Sound::Play(this->sound,2);
  }
  if (-20.0 < (this->camPos).z && (this->keyDown == KEY_PUSH || this->keyNum2 == KEY_PUSH)) {
    this->i3b8 = 4;
    Sound::Play(this->sound,2);
  }
  if ((this->i3b8 == 3 && -20.0 < (this->camPos).z) &&
      ((((this->keyX == KEY_PUSH || this->keyZ == KEY_PUSH) || this->keyC == KEY_PUSH) ||
       this->keySpace == KEY_PUSH) || this->keyEnter == KEY_PUSH)) {
    Sound::Play(this->sound,5);
    this->i3b8 = 5;
    this->f390 = 0.0;
    this->f394 = 1.0;
    if (this->i3b0 == 2) {
      Sound::OpenMp3(this->sound,s_WAV_LP_Rika_mp3_00452edc);
    }
    else {
      Sound::OpenMp3(this->sound,s_WAV_LP_4_mp3_00452eec);
    }
  }
  if (this->i3b8 == 4 &&
      ((((this->keyX == KEY_PUSH || this->keyZ == KEY_PUSH) || this->keyC == KEY_PUSH) ||
       this->keySpace == KEY_PUSH) || this->keyEnter == KEY_PUSH)) {
    this->state = 1;
    Sound::Play(this->sound,2);
  }
  if (-20.0 < (this->camPos).z) {
    this->b3a4 = '\x01';
  }
  if ((this->i3b8 == 5 && 1.0 < this->f390) && this->b398 == '\0') {
    this->b398 = '\x01';
    Sound::Play(this->sound,3);
  }
  if (this->i3b8 == 5 && 3.0 < this->f390) {
    this->b3a6 = '\0';
    this->f390 = 0.0;
    this->i3b8 = 5;
    this->i418 = 0;
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      this->slot[local_8] = this->teamYou[local_8];
    }
    while (this->slot[2] == 3 || this->slot[2] == 4) {
      this->i3fc = this->slot[2];
      this->slot[2] = this->slot[1];
      this->slot[1] = this->slot[0];
      this->slot[0] = this->i3fc;
    }
    while (this->slot[5] == 3 || this->slot[5] == 4) {
      this->i3fc = this->slot[5];
      this->slot[5] = this->slot[4];
      this->slot[4] = this->slot[3];
      this->slot[3] = this->i3fc;
    }
    if (this->i3b0 == 2) {
      fVar3 = -2.355;
      pVVar2 = Vec3::Ctor(&local_5c,-7.0,0.0,-7.0);
      Player::SetPos(this->players[this->slot[0]],pVVar2->x,pVVar2->y,pVVar2->z,fVar3);
      fVar3 = -0.785;
      pVVar2 = Vec3::Ctor(&local_68,-7.0,0.0,7.0);
      Player::SetPos(this->players[this->slot[1]],pVVar2->x,pVVar2->y,pVVar2->z,fVar3);
      fVar3 = 1.571;
      pVVar2 = Vec3::Ctor(&local_74,2.0,0.0,0.0);
      Player::SetPos(this->players[this->slot[2]],pVVar2->x,pVVar2->y,pVVar2->z,fVar3);
      fVar3 = 0.0;
      pVVar2 = Vec3::Ctor(&local_80,0.0,0.0,23.0);
      Player::SetPos(this->players[this->slot[3]],pVVar2->x,pVVar2->y,pVVar2->z,fVar3);
      fVar3 = 0.0;
      pVVar2 = Vec3::Ctor(&local_8c,-3.0,0.0,23.0);
      Player::SetPos(this->players[this->slot[4]],pVVar2->x,pVVar2->y,pVVar2->z,fVar3);
      fVar3 = 0.0;
      pVVar2 = Vec3::Ctor(&local_98,3.0,0.0,23.0);
      Player::SetPos(this->players[this->slot[5]],pVVar2->x,pVVar2->y,pVVar2->z,fVar3);
      Sound::PlayMp3(this->sound);
      LoadSoundSet(this,1);
      this->b398 = '\0';
      this->b3a5 = '\x01';
      this->b3a4 = '\x01';
      this->b3a7 = '\x01';
      this->i39c = 0;
      this->f3e0 = 90.0;
      this->b414 = '\0';
      this->f394 = 0.0;
      this->f260 = 0.0;
      this->f258 = 0.0;
      this->i268 = this->slot[2];
      this->f3a0 = 0.0;
      for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
        Player::Motion_Stand(this->players[this->slot[local_8]]);
        this->players[this->slot[local_8]]->i190 = 7;
      }
      this->players[this->slot[2]]->i190 = 0;
      (this->camPos).x = 0.0;
      (this->camPos).y = 12.0;
      (this->camPos).z = -20.0;
      (this->camDir).x = 0.0;
      (this->camDir).y = -0.5;
      (this->camDir).z = 1.0;
      this->i3b8 = 0;
      this->i3ac = 1;
      this->i404 = this->slot[2];
      this->i40c = 0;
      this->b414 = '\0';
      this->state = 6;
    }
    else {
      this->state = 5;
    }
  }
  return;
}

