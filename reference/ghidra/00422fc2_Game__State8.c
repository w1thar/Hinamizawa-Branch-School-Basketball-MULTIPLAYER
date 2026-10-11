// Game::State8 @ 00422fc2  size=3473

void __thiscall Game::State8(Game *this)

{
  Player *pPVar1;
  float fVar2;
  int local_10;
  int local_8;
  
  this->f390 = this->f390 + this->dt;
  if (this->i3b8 != 0 || this->f390 <= 1.0) {
    if (this->i3b8 == 1) {
      local_10 = 0;
      for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
        fVar2 = sqrtf((float)this->players[this->teamYou[local_8]]);
        if (fVar2 <= 0.5) {
          this->players[this->teamYou[local_8]]->yaw = 0.0;
          Player::Motion_Stand(this->players[this->teamYou[local_8]]);
          local_10 = local_10 + 1;
        }
        else {
          fVar2 = Atan2((this->players[this->teamYou[local_8]]->pos).x - (float)local_8 * 3.0,
                        (this->players[this->teamYou[local_8]]->pos).z + 3.0);
          this->players[this->teamYou[local_8]]->yaw = fVar2;
          pPVar1 = this->players[this->teamYou[local_8]];
          fVar2 = sinf((float)this->players[this->teamYou[local_8]]);
          (this->players[this->teamYou[local_8]]->pos).x =
               (pPVar1->pos).x - fVar2 * this->players[this->teamYou[local_8]]->stat168 * this->dt;
          (this->players[this->teamYou[local_8]]->pos).y = 0.0;
          pPVar1 = this->players[this->teamYou[local_8]];
          fVar2 = cosf(this->players[this->teamYou[local_8]]->yaw);
          (this->players[this->teamYou[local_8]]->pos).z =
               (pPVar1->pos).z - fVar2 * this->players[this->teamYou[local_8]]->stat168 * this->dt;
          Player::Motion_42dfc0(this->players[this->teamYou[local_8]]);
        }
      }
      for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
        fVar2 = sqrtf((float)this);
        if (fVar2 <= 0.5) {
          this->players[*(int *)((int)this + (5 - local_8) * 4 + 0x3c0)]->yaw = 0.0;
          Player::Motion_Stand(this->players[*(int *)((int)this + (5 - local_8) * 4 + 0x3c0)]);
          local_10 = local_10 + 1;
        }
        else {
          fVar2 = Atan2((float)local_8 * 3.0 + 1.5 +
                        (this->players[*(int *)((int)this + (5 - local_8) * 4 + 0x3c0)]->pos).x,
                        (this->players[*(int *)((int)this + (5 - local_8) * 4 + 0x3c0)]->pos).z -
                        1.0);
          this->players[*(int *)((int)this + (5 - local_8) * 4 + 0x3c0)]->yaw = fVar2;
          pPVar1 = this->players[*(int *)((int)this + (5 - local_8) * 4 + 0x3c0)];
          fVar2 = sinf((float)this);
          (this->players[*(int *)((int)this + (5 - local_8) * 4 + 0x3c0)]->pos).x =
               (pPVar1->pos).x -
               fVar2 * this->players[*(int *)((int)this + (5 - local_8) * 4 + 0x3c0)]->stat168 *
               this->dt;
          (this->players[*(int *)((int)this + (5 - local_8) * 4 + 0x3c0)]->pos).y = 0.0;
          pPVar1 = this->players[*(int *)((int)this + (5 - local_8) * 4 + 0x3c0)];
          fVar2 = cosf((float)this->players[*(int *)((int)this + (5 - local_8) * 4 + 0x3c0)]);
          (this->players[*(int *)((int)this + (5 - local_8) * 4 + 0x3c0)]->pos).z =
               (pPVar1->pos).z -
               fVar2 * this->players[*(int *)((int)this + (5 - local_8) * 4 + 0x3c0)]->stat168 *
               this->dt;
          Player::Motion_42dfc0(this->players[*(int *)((int)this + (5 - local_8) * 4 + 0x3c0)]);
        }
      }
      if (local_10 == 6) {
        this->f390 = 0.0;
        this->i3b8 = 2;
      }
    }
    else if (this->i3b8 != 2 || this->f390 <= 2.0) {
      if (this->i3b8 == 3) {
        if ((this->keyX == KEY_PUSH || this->keyZ == KEY_PUSH) || this->keyC == KEY_PUSH) {
          this->i3b8 = 4;
        }
      }
      else if (this->i3b8 == 4) {
        this->f394 = this->dt * 0.3 + this->f394;
        if (1.0 < this->f394) {
          this->f394 = 1.0;
          this->i3b8 = 5;
        }
      }
      else if (this->i3b8 == 5) {
        Sound::StopMp3(this->sound);
        if (this->i3dc < this->i3d8 && this->i3b0 != 2) {
          this->i3b8 = 0;
          this->f390 = 0.0;
          this->state = 9;
        }
        else {
          this->i3b8 = 6;
          Sound::Play(this->sound,7);
          this->f390 = 0.0;
        }
      }
      else if (this->i3b8 == 6 && 4.0 < this->f390) {
        for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
          Player::SetTex1(this->players[this->teamYou[local_8]],0);
          Player::SetTex2(this->players[this->teamYou[local_8]],0);
        }
        (this->camPos).x = 0.0;
        (this->camPos).y = 0.0;
        (this->camPos).z = 0.0;
        (this->camDir).x = 1.0;
        (this->camDir).y = 0.0;
        (this->camDir).z = 1.0;
        (this->v240).x = 0.0;
        (this->v240).y = 6.0;
        (this->v240).z = 0.0;
        (this->v24c).x = 0.0;
        (this->v24c).y = 6.0;
        (this->v24c).z = 0.0;
        this->f260 = 0.0;
        this->f264 = 0.0;
        this->f258 = 0.0;
        this->f25c = 0.0;
        this->i268 = -1;
        (this->v370).x = 0.0;
        (this->v370).y = 0.0;
        (this->v370).z = 0.0;
        (this->lightDir).x = 1.0;
        (this->lightDir).y = -1.0;
        (this->lightDir).z = 1.0;
        (this->v37c).x = 0.0;
        (this->v37c).y = 0.0;
        (this->v37c).z = 0.0;
        this->f390 = 0.0;
        this->f394 = 1.0;
        this->b398 = '\0';
        this->b399 = '\0';
        this->b39a = '\0';
        this->b3a4 = '\0';
        this->b3a5 = '\0';
        this->b3a6 = '\0';
        this->b3a7 = '\0';
        this->i3ac = 0;
        this->i3b8 = 0;
        this->f3bc = 0.0;
        this->i39c = 0;
        this->f3a0 = -1.0;
        this->i3b0 = 0;
        this->i3b4 = 0;
        this->f3e0 = 300.0;
        this->i3d8 = 0;
        this->i3dc = 0;
        this->f400 = 4.0;
        this->i40c = 0;
        this->b414 = '\0';
        this->i418 = -1;
        this->state = 1;
      }
    }
    else {
      Sound::Play(this->sound,7);
      this->f390 = 0.0;
      this->i3b8 = 3;
      if (this->i3dc < this->i3d8) {
        for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
          Player::Motion_431118(this->players[this->teamYou[local_8]]);
          Player::SetTex1(this->players[this->teamYou[local_8]],1);
          Player::SetTex2(this->players[this->teamYou[local_8]],1);
        }
        for (local_8 = 3; local_8 < 6; local_8 = local_8 + 1) {
          Player::Motion_430e6d(this->players[this->teamYou[local_8]]);
        }
      }
      else if (this->i3d8 < this->i3dc) {
        for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
          Player::Motion_430e6d(this->players[this->teamYou[local_8]]);
        }
        for (local_8 = 3; local_8 < 6; local_8 = local_8 + 1) {
          Player::Motion_431118(this->players[this->teamYou[local_8]]);
          Player::SetTex1(this->players[this->teamYou[local_8]],1);
          Player::SetTex2(this->players[this->teamYou[local_8]],1);
        }
      }
      else {
        for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
          Player::Motion_43030b(this->players[this->teamYou[local_8]]);
        }
      }
    }
  }
  else {
    this->f3a0 = 0.0;
    this->i39c = 0;
    this->f390 = 0.0;
    this->i3b8 = 1;
  }
  return;
}

