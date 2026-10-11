// Game::State5 @ 0041fe31  size=5403

void __thiscall Game::State5(Game *this)

{
  Player *pPVar1;
  Vec3 *pVVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  Vec3 local_b0;
  Vec3 local_a4;
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
  if (this->i3b8 == 5) {
    Sound::PlayMp3(this->sound);
    fn_42b0bb(this);
    this->b398 = '\0';
    this->b3a5 = '\x01';
    this->b3a4 = '\x01';
    this->i39c = 0;
    if (this->i3b0 == 2) {
      this->f3e0 = 180.0;
    }
    else {
      this->f3e0 = 300.0;
    }
    this->b414 = '\0';
    this->f394 = 0.0;
    (this->camPos).y = 155.0;
    this->f260 = 0.0;
    (this->v24c).y = 0.7;
    this->i268 = -1;
    this->f41c = 0.0;
    for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
      this->players[local_8]->i190 = 0;
      Player::Motion_42df38(this->players[local_8]);
      Player::fn_42deb4(this->players[local_8]);
      Player::fn_42de30(this->players[local_8]);
      Player::fn_42ddac(this->players[local_8]);
      Player::SetFace(this->players[local_8],0);
    }
    if (this->b3a6 == '\0') {
      this->i3d8 = 0;
      this->i3dc = 0;
      fVar5 = 2.355;
      pVVar2 = Vec3::Ctor(&local_74,7.0,0.0,-7.0);
      Player::SetPos(this->players[this->slot[0]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
      fVar5 = 0.785;
      pVVar2 = Vec3::Ctor(&local_80,7.0,0.0,7.0);
      Player::SetPos(this->players[this->slot[1]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
      fVar5 = -1.571;
      pVVar2 = Vec3::Ctor(&local_8c,-2.0,0.0,0.0);
      Player::SetPos(this->players[this->slot[2]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
      fVar5 = -2.355;
      pVVar2 = Vec3::Ctor(&local_98,-7.0,0.0,-7.0);
      Player::SetPos(this->players[this->slot[3]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
      fVar5 = -0.785;
      pVVar2 = Vec3::Ctor(&local_a4,-7.0,0.0,7.0);
      Player::SetPos(this->players[this->slot[4]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
      fVar5 = 1.571;
      pVVar2 = Vec3::Ctor(&local_b0,2.0,0.0,0.0);
      Player::SetPos(this->players[this->slot[5]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
    }
    else {
      fVar5 = -2.355;
      pVVar2 = Vec3::Ctor(&local_14,-7.0,0.0,-7.0);
      Player::SetPos(this->players[this->slot[0]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
      fVar5 = -0.785;
      pVVar2 = Vec3::Ctor(&local_20,-7.0,0.0,7.0);
      Player::SetPos(this->players[this->slot[1]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
      fVar5 = 1.571;
      pVVar2 = Vec3::Ctor(&local_2c,2.0,0.0,0.0);
      Player::SetPos(this->players[this->slot[2]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
      if (this->i3b0 == 2) {
        fVar5 = 0.0;
        pVVar2 = Vec3::Ctor(&local_38,-2.0,0.0,23.0);
        Player::SetPos(this->players[this->slot[3]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
        fVar5 = 0.0;
        pVVar2 = Vec3::Ctor(&local_44,2.0,0.0,23.0);
        Player::SetPos(this->players[this->slot[4]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
      }
      else {
        fVar5 = 2.355;
        pVVar2 = Vec3::Ctor(&local_50,7.0,0.0,-7.0);
        Player::SetPos(this->players[this->slot[3]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
        fVar5 = 0.785;
        pVVar2 = Vec3::Ctor(&local_5c,7.0,0.0,7.0);
        Player::SetPos(this->players[this->slot[4]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
      }
      fVar5 = -1.571;
      pVVar2 = Vec3::Ctor(&local_68,-2.0,0.0,0.0);
      Player::SetPos(this->players[this->slot[5]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
    }
    this->i3b8 = 0;
  }
  if ((this->camPos).y <= 65.0 || this->i3b8 != 0) {
    if ((this->camPos).y <= 5.0 || this->i3b8 != 0) {
      if (this->i3b8 == 0) {
        this->f390 = 0.0;
        Sound::Play(this->sound,0);
        (this->camDir).y = 0.0;
        for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
          this->players[local_8]->i190 = 7;
        }
        this->i3b8 = 1;
      }
      else if (this->f390 <= 1.0 || this->i3b8 != 1) {
        this->f3e0 = this->f3e0 - this->dt;
        if (this->i3b8 == 2 &&
            ((this->keyX == KEY_HOLD || this->keyZ == KEY_HOLD) || this->keyC == KEY_HOLD)) {
          Player::Motion_43006a(this->players[this->slot[2]]);
          this->f3a0 = this->f3a0 + this->dt;
          if (1.0 < this->f3a0) {
            this->f3a0 = 0.001;
          }
        }
        if (this->i3b8 == 2 &&
            ((this->keyX == KEY_RELEASE || this->keyZ == KEY_RELEASE) || this->keyC == KEY_RELEASE))
        {
          Player::Motion_4301cb(this->players[this->slot[2]]);
          this->players[this->slot[2]]->f18c = this->players[this->slot[2]]->stat16c * this->f3a0;
          Sound::Play(this->sound,2);
          this->i3b8 = 3;
        }
        if (this->i3b8 == 3) {
          if ((this->players[this->slot[2]]->pos).y <= -0.001) {
            Player::Motion_42df38(this->players[this->slot[2]]);
            this->i3b8 = 2;
            (this->players[this->slot[2]]->pos).y = 0.0;
          }
          else {
            this->players[this->slot[2]]->f18c =
                 this->players[this->slot[2]]->f18c - this->dt * 20.0;
            (this->players[this->slot[2]]->pos).y =
                 this->players[this->slot[2]]->f18c * this->dt +
                 (this->players[this->slot[2]]->pos).y;
          }
        }
        if (this->f390 <= this->f3bc + 1.75) {
          if (1.2 < this->f390) {
            Player::Motion_43006a(this->players[this->slot[5]]);
          }
        }
        else {
          if ((this->players[this->slot[5]]->pos).y < 0.1) {
            Player::Motion_4301cb(this->players[this->slot[5]]);
            Sound::Play(this->sound,2);
          }
          if (-0.001 < (this->players[this->slot[5]]->pos).y) {
            this->players[this->slot[5]]->f18c =
                 this->players[this->slot[5]]->f18c - this->dt * 20.0;
            (this->players[this->slot[5]]->pos).y =
                 this->players[this->slot[5]]->f18c * this->dt +
                 (this->players[this->slot[5]]->pos).y;
          }
          if ((this->v24c).y - (this->players[this->slot[5]]->pos).y < 5.0) {
            if (this->b3a6 == '\0') {
              iVar3 = rand();
              this->f260 = -0.5 - ((float)iVar3 * 2.0) / 32767.0;
            }
            else {
              iVar3 = rand();
              this->f260 = ((float)iVar3 * 2.0) / 32767.0 + 0.5;
            }
            this->f258 = 8.0;
            this->i268 = -1;
            this->f3a0 = 0.0;
            Player::Motion_42df38(this->players[this->slot[2]]);
            Player::Motion_42df38(this->players[this->slot[5]]);
            (this->players[this->slot[2]]->pos).y = 0.0;
            (this->players[this->slot[5]]->pos).y = 0.0;
            this->players[this->slot[2]]->i190 = 0xf;
            if (this->i3b0 == 2) {
              this->players[this->slot[5]]->i190 = 7;
            }
            else {
              this->players[this->slot[5]]->i190 = 0xf;
            }
            (this->camPos).x = 0.0;
            (this->camPos).y = 12.0;
            (this->camPos).z = -20.0;
            (this->camDir).x = 0.0;
            (this->camDir).y = -0.5;
            (this->camDir).z = 1.0;
            this->i3b8 = 0;
            this->i3ac = 1;
            this->i404 = this->slot[5];
            this->i40c = 0;
            this->b414 = '\0';
            this->state = 6;
          }
          if ((this->v24c).y - (this->players[this->slot[2]]->pos).y < 5.0) {
            if (this->b3a6 == '\0') {
              iVar3 = rand();
              this->f260 = ((float)iVar3 * 2.0) / 32767.0 + 0.5;
            }
            else {
              iVar3 = rand();
              this->f260 = -0.5 - ((float)iVar3 * 2.0) / 32767.0;
            }
            this->f258 = 8.0;
            this->i268 = -1;
            this->f3a0 = 0.0;
            Player::Motion_42df38(this->players[this->slot[2]]);
            Player::Motion_42df38(this->players[this->slot[5]]);
            (this->players[this->slot[2]]->pos).y = 0.0;
            (this->players[this->slot[5]]->pos).y = 0.0;
            this->players[this->slot[2]]->i190 = 0xf;
            this->players[this->slot[5]]->i190 = 0xf;
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
        }
      }
      else {
        this->i3b8 = 2;
        Sound::Play(this->sound,1);
        this->f25c = 23.0;
        (this->v24c).y = 0.7;
        this->f3a0 = 0.0;
        this->b3a7 = '\x01';
        if (this->i3b0 == 1) {
          pPVar1 = this->players[this->slot[5]];
          iVar3 = rand();
          this->players[this->slot[5]]->f18c =
               (((float)iVar3 * 0.2) / 32767.0 + 0.85) * pPVar1->stat16c;
        }
        else {
          pPVar1 = this->players[this->slot[5]];
          iVar3 = rand();
          this->players[this->slot[5]]->f18c =
               (((float)iVar3 * 0.2) / 32767.0 + 0.8) * pPVar1->stat16c;
        }
        iVar3 = rand();
        this->f3bc = ((float)iVar3 * 0.2) / 32767.0;
      }
    }
    else {
      (this->camPos).y = (this->camPos).y - this->dt * 30.0;
      fVar5 = this->f390;
      fVar4 = sinf((float)this);
      (this->camPos).x = fVar4 * (fVar5 - 3.0) * 10.0;
      fVar5 = this->f390;
      fVar4 = cosf((float)this);
      (this->camPos).z = fVar4 * (fVar5 - 3.0) * 10.0;
      (this->camDir).x = -(this->camPos).x;
      (this->camDir).z = -(this->camPos).z;
      (this->camDir).y = 5.0 - (this->camPos).y;
    }
  }
  else {
    (this->camPos).y = (this->camPos).y - this->dt * 30.0;
    fVar5 = sinf((float)this);
    (this->camPos).x = fVar5 * 0.001;
    fVar5 = cosf((float)this);
    (this->camPos).z = fVar5 * 0.001;
    (this->camDir).x = -(this->camPos).x;
    (this->camDir).z = -(this->camPos).z;
    (this->camDir).y = 5.0 - (this->camPos).y;
  }
  return;
}

