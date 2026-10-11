// Game::State6 @ 0040e400  size=46548

void __thiscall Game::State6(Game *this)

{
  Player *pPVar1;
  Vec3 *pVVar2;
  float *pfVar3;
  float10 fVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_66c [3];
  float local_660 [3];
  float local_654 [3];
  float local_648 [3];
  float local_63c [3];
  float local_630 [3];
  float local_624 [3];
  float local_618 [3];
  float local_60c [3];
  float local_600 [3];
  float local_5f4 [3];
  float local_5e8 [3];
  float local_5dc [3];
  float local_5d0 [3];
  float local_5c4 [3];
  float local_5b8 [3];
  float local_5ac [3];
  float local_5a0 [3];
  float local_594 [3];
  float local_588 [3];
  float local_57c [3];
  float local_570 [3];
  float local_564 [3];
  float local_558 [3];
  float local_54c [3];
  float local_540 [3];
  float local_534 [3];
  float local_528 [3];
  float local_51c [3];
  float local_510 [3];
  float local_504 [3];
  float local_4f8 [3];
  float local_4ec [3];
  float local_4e0 [3];
  float local_4d4 [3];
  float local_4c8 [3];
  float local_4bc [3];
  float local_4b0 [3];
  float local_4a4 [3];
  float local_498 [3];
  float local_48c [3];
  float local_480 [3];
  float local_474 [3];
  float local_468 [3];
  float local_45c [3];
  float local_450 [3];
  float local_444 [3];
  float local_438 [3];
  float local_42c [3];
  float local_420 [3];
  float local_414 [3];
  float local_408 [3];
  float local_3fc [3];
  float local_3f0 [3];
  float local_3e4 [3];
  float local_3d8 [3];
  float local_3cc [3];
  float local_3c0 [3];
  float local_3b4 [3];
  float local_3a8 [3];
  float local_39c [3];
  float local_390 [3];
  float local_384 [3];
  float local_378 [3];
  float local_36c [3];
  Vec3 local_360;
  Vec3 local_354;
  Vec3 local_348;
  Vec3 local_33c;
  Vec3 local_330;
  Vec3 local_324;
  Vec3 local_318;
  Vec3 local_30c;
  Vec3 local_300;
  Vec3 local_2f4;
  Vec3 local_2e8;
  Vec3 local_2dc;
  Vec3 local_2d0;
  Vec3 local_2c4;
  Vec3 local_2b8;
  Vec3 local_2ac;
  Vec3 local_2a0;
  Vec3 local_294;
  Vec3 local_288;
  Vec3 local_27c;
  Vec3 local_270;
  Vec3 local_264;
  Vec3 local_258;
  Vec3 local_24c;
  Vec3 local_240;
  Vec3 local_234;
  Vec3 local_228;
  Vec3 local_21c;
  Vec3 local_210;
  Vec3 local_204;
  Vec3 local_1f8;
  Vec3 local_1ec;
  Vec3 local_1e0;
  Vec3 local_1d4;
  Vec3 local_1c8;
  Vec3 local_1bc;
  Vec3 local_1b0;
  Vec3 local_1a4;
  Vec3 local_198;
  Vec3 local_18c;
  Vec3 local_180;
  Vec3 local_174;
  Vec3 local_168;
  Vec3 local_15c;
  Vec3 local_150;
  Vec3 local_144;
  Vec3 local_138;
  Vec3 local_12c;
  Vec3 local_120;
  Vec3 local_114;
  Vec3 local_108;
  Vec3 local_fc;
  Vec3 local_f0;
  Vec3 local_e4;
  Vec3 local_d8;
  Vec3 local_cc;
  Vec3 local_c0;
  Vec3 local_b4;
  Vec3 local_a8;
  Vec3 local_9c;
  Vec3 local_90;
  Vec3 local_84;
  Vec3 local_78;
  Vec3 local_6c;
  float local_60;
  float local_5c;
  int local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  this->f3e0 = this->f3e0 - this->dt;
  local_8 = 0.0;
  local_38 = 0.0;
  local_1c = 10000.0;
  local_34 = 10000.0;
  local_18 = 0.0;
  local_14 = 0.0;
  local_30 = 0.0;
  local_2c = 0.0;
  if (0.0 <= this->f3e0) {
    for (local_20 = 0.0; fVar6 = local_18, fVar7 = local_30, (int)local_20 < 6;
        local_20 = (float)((int)local_20 + 1)) {
      this->f3bc = ((this->players[(int)local_20]->pos).z - (this->v24c).z) *
                   ((this->players[(int)local_20]->pos).z - (this->v24c).z) +
                   ((this->players[(int)local_20]->pos).x - (this->v24c).x) *
                   ((this->players[(int)local_20]->pos).x - (this->v24c).x);
      if (this->players[(int)local_20]->b154 == '\0') {
        if (this->players[(int)local_20]->i190 < 3) {
          local_2c = local_30;
          local_30 = local_38;
          local_38 = local_20;
          local_34 = this->f3bc;
        }
        else if (local_34 <= this->f3bc || 9 < this->players[(int)local_20]->i190) {
          local_2c = local_30;
          local_30 = local_20;
        }
        else {
          local_2c = local_30;
          local_30 = local_38;
          local_38 = local_20;
          local_34 = this->f3bc;
        }
      }
      else {
        if (this->players[(int)local_20]->i190 < 3) {
          local_18 = local_8;
          local_8 = local_20;
          local_1c = this->f3bc;
        }
        else if (local_1c <= this->f3bc || 0xe < this->players[(int)local_20]->i190) {
          local_18 = local_20;
        }
        else {
          local_18 = local_8;
          local_8 = local_20;
          local_1c = this->f3bc;
        }
        local_14 = fVar6;
      }
    }
    if (this->b3a6 == '\0') {
      if ((this->players[(int)local_14]->pos).x < (this->players[(int)local_18]->pos).x) {
        local_28 = local_18;
        local_18 = local_14;
        local_14 = fVar6;
      }
      if ((this->players[(int)local_30]->pos).x < (this->players[(int)local_2c]->pos).x) {
        local_28 = local_30;
        local_30 = local_2c;
        local_2c = fVar7;
      }
    }
    else {
      if ((this->players[(int)local_18]->pos).x < (this->players[(int)local_14]->pos).x) {
        local_28 = local_18;
        local_18 = local_14;
        local_14 = fVar6;
      }
      if ((this->players[(int)local_2c]->pos).x < (this->players[(int)local_30]->pos).x) {
        local_28 = local_30;
        local_30 = local_2c;
        local_2c = fVar7;
      }
    }
    if (this->i418 == 1) {
      this->b414 = '\x01';
      this->f390 = 0.0;
      this->i408 = (int)local_8;
      Sound::Play(this->sound,0);
      this->i40c = 2;
      this->f410 = -3.0;
      this->i418 = 5;
    }
    else if (this->i418 == 2) {
      this->b414 = '\x01';
      this->f390 = 0.0;
      this->i408 = (int)local_38;
      Sound::Play(this->sound,0);
      this->i40c = 1;
      this->f410 = -3.0;
      this->i418 = 5;
    }
    else if (this->i418 == 3) {
      this->b414 = '\x01';
      this->f390 = 0.0;
      this->i408 = (int)local_38;
      Sound::Play(this->sound,0);
      this->i40c = 2;
      this->f410 = -3.0;
      this->i418 = 5;
    }
    else if (this->i418 == 4) {
      this->b414 = '\x01';
      this->f390 = 0.0;
      this->i408 = (int)local_8;
      Sound::Play(this->sound,0);
      this->i40c = 1;
      this->f410 = -3.0;
      this->i418 = 5;
    }
    if (this->i40c == 0) {
      if ((this->v24c).x <= 38.0) {
        if (-38.0 <= (this->v24c).x) {
          if ((this->v24c).z <= 19.0) {
            if ((this->v24c).z < -19.0) {
              this->i40c = 4;
              this->f410 = (this->v24c).x;
            }
          }
          else {
            this->i40c = 3;
            this->f410 = (this->v24c).x;
          }
        }
        else {
          this->i40c = 2;
          this->f410 = (this->v24c).z;
        }
      }
      else {
        this->i40c = 1;
        this->f410 = (this->v24c).z;
      }
    }
    if (this->b414 == '\0' && (this->v24c).y < 1.0) {
      if ((((this->v24c).x <= 38.0 && -38.0 <= (this->v24c).x) && (this->v24c).z <= 19.0) &&
          -19.0 <= (this->v24c).z) {
        this->b414 = '\0';
        this->i40c = 0;
        this->f410 = 0.0;
      }
      else {
        this->b414 = '\x01';
        this->f390 = 0.0;
        this->i408 = this->i404;
        Sound::Play(this->sound,6);
        if (0 < this->i268) {
          this->f258 = 0.0;
        }
      }
    }
    if (this->b414 != '\0') {
      this->f390 = this->f390 + this->dt;
      if (this->f390 <= 3.0) {
        for (local_44 = 0; local_44 < 6; local_44 = local_44 + 1) {
          this->players[local_44]->i190 = 7;
        }
        this->i268 = -1;
      }
      else {
        fn_42b0bb(this);
        this->i418 = 0;
        local_1c = 100.0;
        local_34 = 100.0;
        for (local_40 = 0; local_40 < 6; local_40 = local_40 + 1) {
          this->players[local_40]->i190 = 7;
          Player::Motion_42df38(this->players[local_40]);
        }
        if (this->i40c == 1) {
          if (this->i3b0 == 2) {
            fVar7 = 1.54;
            pVVar2 = Vec3::Ctor(&local_6c,40.0,0.0,this->f410);
            Player::SetPos(this->players[this->slot[5]],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            Sound::Play(this->sound,1);
            this->players[this->slot[5]]->f198 = 0.0;
            this->players[this->slot[5]]->yaw = 1.54;
            this->players[this->slot[5]]->i190 = 10;
            Player::Motion_4305b1(this->players[this->slot[5]]);
            fVar7 = -1.54;
            pVVar2 = Vec3::Ctor(&local_78,10.0,0.0,this->f410);
            Player::SetPos(this->players[(int)local_8],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = -1.54;
            pVVar2 = Vec3::Ctor(&local_84,15.0,0.0,this->f410 + 5.0);
            Player::SetPos(this->players[(int)local_18],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = -1.54;
            pVVar2 = Vec3::Ctor(&local_90,16.0,0.0,this->f410 - 5.0);
            Player::SetPos(this->players[(int)local_14],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            this->f260 = this->players[this->slot[5]]->yaw - 3.14;
            this->f25c = this->players[this->slot[5]]->stat174;
            this->f258 = this->players[this->slot[5]]->stat178;
            fVar7 = sinf((float)this);
            (this->v24c).x = -fVar7 * -2.0 + (this->players[this->slot[5]]->pos).x;
            (this->v24c).y = this->players[this->slot[5]]->stat170 * 0.9;
            fVar7 = cosf((float)this->players[this->slot[5]]);
            (this->v24c).z = fVar7 * -2.0 + (this->players[this->slot[5]]->pos).z;
            this->i404 = this->slot[5];
            this->i268 = -1;
            this->b414 = '\0';
          }
          else if (this->b3a6 == '\0') {
            if (this->players[this->i408]->b154 == '\0') {
              if (this->i3b0 == 1) {
                this->f41c = 3.5;
              }
              this->players[(int)local_8]->i190 = 4;
              Player::Motion_430497(this->players[(int)local_8]);
              this->i268 = (int)local_8;
              fVar7 = 1.54;
              pVVar2 = Vec3::Ctor(&local_e4,38.0,0.0,this->f410);
              Player::SetPos(this->players[(int)local_8],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
              fVar7 = -1.54;
              pVVar2 = Vec3::Ctor(&local_f0,30.0,0.0,this->f410 + 5.0);
              Player::SetPos(this->players[(int)local_18],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
              fVar7 = -1.54;
              pVVar2 = Vec3::Ctor(&local_fc,32.0,0.0,this->f410 - 5.0);
              Player::SetPos(this->players[(int)local_14],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
              fVar7 = 1.54;
              pVVar2 = Vec3::Ctor(&local_108,1.0,0.0,4.0);
              Player::SetPos(this->players[(int)local_30],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
              fVar7 = 1.54;
              pVVar2 = Vec3::Ctor(&local_114,2.0,0.0,-4.0);
              Player::SetPos(this->players[(int)local_2c],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
              fVar7 = 1.54;
              pVVar2 = Vec3::Ctor(&local_120,3.0,0.0,0.0);
              Player::SetPos(this->players[(int)local_38],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
              this->i404 = (int)local_8;
              this->b414 = '\0';
            }
            else {
              if (this->f410 <= 0.0) {
                this->i40c = 4;
              }
              else {
                this->i40c = 3;
              }
              this->f410 = 35.0;
            }
          }
          else if (this->players[this->i408]->b154 == '\0') {
            if (this->f410 <= 0.0) {
              this->i40c = 4;
            }
            else {
              this->i40c = 3;
            }
            this->f410 = 35.0;
          }
          else {
            fVar7 = 1.54;
            pVVar2 = Vec3::Ctor(&local_9c,38.0,0.0,this->f410);
            Player::SetPos(this->players[(int)local_38],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = -1.54;
            pVVar2 = Vec3::Ctor(&local_a8,30.0,0.0,this->f410 + 5.0);
            Player::SetPos(this->players[(int)local_30],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = -1.54;
            pVVar2 = Vec3::Ctor(&local_b4,32.0,0.0,this->f410 - 5.0);
            Player::SetPos(this->players[(int)local_2c],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = -1.54;
            pVVar2 = Vec3::Ctor(&local_c0,10.0,0.0,4.0);
            Player::SetPos(this->players[(int)local_18],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 1.54;
            pVVar2 = Vec3::Ctor(&local_cc,2.0,0.0,-4.0);
            Player::SetPos(this->players[(int)local_14],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 1.54;
            pVVar2 = Vec3::Ctor(&local_d8,3.0,0.0,0.0);
            Player::SetPos(this->players[(int)local_8],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            Sound::Play(this->sound,1);
            this->players[(int)local_38]->f198 = 0.0;
            fVar7 = Atan2((this->players[(int)local_38]->pos).x -
                          (this->players[(int)local_30]->pos).x,
                          (this->players[(int)local_38]->pos).z -
                          (this->players[(int)local_30]->pos).z);
            this->players[(int)local_38]->yaw = fVar7;
            this->players[(int)local_38]->i190 = 10;
            Player::Motion_4305b1(this->players[(int)local_38]);
            this->f260 = this->players[(int)local_38]->yaw - 3.14;
            this->f25c = this->players[(int)local_38]->stat174;
            this->f258 = this->players[(int)local_38]->stat178;
            fVar7 = sinf(local_38);
            (this->v24c).x = -fVar7 * -2.0 + (this->players[(int)local_38]->pos).x;
            (this->v24c).y = this->players[(int)local_38]->stat170 * 0.9;
            fVar7 = cosf((float)this);
            (this->v24c).z = fVar7 * -2.0 + (this->players[(int)local_38]->pos).z;
            this->i404 = (int)local_38;
            this->i268 = -1;
            this->b414 = '\0';
          }
        }
        else if (this->i40c == 2) {
          if (this->i3b0 == 2) {
            fVar7 = -1.54;
            pVVar2 = Vec3::Ctor(&local_12c,-40.0,0.0,this->f410);
            Player::SetPos(this->players[this->slot[5]],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            Sound::Play(this->sound,1);
            this->players[this->slot[5]]->f198 = 0.0;
            this->players[this->slot[5]]->yaw = -1.54;
            this->players[this->slot[5]]->i190 = 10;
            Player::Motion_4305b1(this->players[this->slot[5]]);
            fVar7 = 1.54;
            pVVar2 = Vec3::Ctor(&local_138,-10.0,0.0,this->f410);
            Player::SetPos(this->players[(int)local_8],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 1.54;
            pVVar2 = Vec3::Ctor(&local_144,-15.0,0.0,this->f410 + 5.0);
            Player::SetPos(this->players[(int)local_18],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 1.54;
            pVVar2 = Vec3::Ctor(&local_150,-16.0,0.0,this->f410 - 5.0);
            Player::SetPos(this->players[(int)local_14],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            this->f260 = this->players[this->slot[5]]->yaw - 3.14;
            this->f25c = this->players[this->slot[5]]->stat174;
            this->f258 = this->players[this->slot[5]]->stat178;
            fVar7 = sinf((float)this);
            (this->v24c).x = -fVar7 * -2.0 + (this->players[this->slot[5]]->pos).x;
            (this->v24c).y = this->players[this->slot[5]]->stat170 * 0.9;
            fVar7 = cosf((float)this->players[this->slot[5]]);
            (this->v24c).z = fVar7 * -2.0 + (this->players[this->slot[5]]->pos).z;
            this->i404 = this->slot[5];
            this->i268 = -1;
            this->b414 = '\0';
          }
          else if (this->b3a6 == '\0') {
            if (this->players[this->i408]->b154 == '\0') {
              if (this->f410 <= 0.0) {
                this->i40c = 4;
              }
              else {
                this->i40c = 3;
              }
              this->f410 = -35.0;
            }
            else {
              fVar7 = -1.54;
              pVVar2 = Vec3::Ctor(&local_1a4,-38.0,0.0,this->f410);
              Player::SetPos(this->players[(int)local_38],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
              fVar7 = 1.54;
              pVVar2 = Vec3::Ctor(&local_1b0,-30.0,0.0,this->f410 + 5.0);
              Player::SetPos(this->players[(int)local_30],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
              fVar7 = 1.54;
              pVVar2 = Vec3::Ctor(&local_1bc,-32.0,0.0,this->f410 - 5.0);
              Player::SetPos(this->players[(int)local_2c],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
              fVar7 = 1.54;
              pVVar2 = Vec3::Ctor(&local_1c8,-10.0,0.0,4.0);
              Player::SetPos(this->players[(int)local_18],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
              fVar7 = -1.54;
              pVVar2 = Vec3::Ctor(&local_1d4,2.0,0.0,-4.0);
              Player::SetPos(this->players[(int)local_14],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
              fVar7 = -1.54;
              pVVar2 = Vec3::Ctor(&local_1e0,3.0,0.0,0.0);
              Player::SetPos(this->players[(int)local_8],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
              Sound::Play(this->sound,1);
              this->players[(int)local_38]->f198 = 0.0;
              fVar7 = Atan2((this->players[(int)local_38]->pos).x -
                            (this->players[(int)local_30]->pos).x,
                            (this->players[(int)local_38]->pos).z -
                            (this->players[(int)local_30]->pos).z);
              this->players[(int)local_38]->yaw = fVar7;
              this->players[(int)local_38]->i190 = 10;
              Player::Motion_4305b1(this->players[(int)local_38]);
              this->f260 = this->players[(int)local_38]->yaw - 3.14;
              this->f25c = this->players[(int)local_38]->stat174;
              this->f258 = this->players[(int)local_38]->stat178;
              fVar7 = sinf(local_38);
              (this->v24c).x = -fVar7 * -2.0 + (this->players[(int)local_38]->pos).x;
              (this->v24c).y = this->players[(int)local_38]->stat170 * 0.9;
              fVar7 = cosf((float)this);
              (this->v24c).z = fVar7 * -2.0 + (this->players[(int)local_38]->pos).z;
              this->i404 = (int)local_38;
              this->i268 = -1;
              this->b414 = '\0';
            }
          }
          else if (this->players[this->i408]->b154 == '\0') {
            if (this->i3b0 == 1) {
              this->f41c = 3.5;
            }
            this->players[(int)local_8]->i190 = 4;
            Player::Motion_430497(this->players[(int)local_8]);
            this->i268 = (int)local_8;
            fVar7 = -1.54;
            pVVar2 = Vec3::Ctor(&local_15c,-38.0,0.0,this->f410);
            Player::SetPos(this->players[(int)local_8],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 1.54;
            pVVar2 = Vec3::Ctor(&local_168,-30.0,0.0,this->f410 + 5.0);
            Player::SetPos(this->players[(int)local_18],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 1.54;
            pVVar2 = Vec3::Ctor(&local_174,-32.0,0.0,this->f410 - 5.0);
            Player::SetPos(this->players[(int)local_14],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = -1.54;
            pVVar2 = Vec3::Ctor(&local_180,1.0,0.0,4.0);
            Player::SetPos(this->players[(int)local_30],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = -1.54;
            pVVar2 = Vec3::Ctor(&local_18c,2.0,0.0,-4.0);
            Player::SetPos(this->players[(int)local_2c],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = -1.54;
            pVVar2 = Vec3::Ctor(&local_198,3.0,0.0,0.0);
            Player::SetPos(this->players[(int)local_38],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            this->i404 = (int)local_8;
            this->b414 = '\0';
          }
          else {
            if (this->f410 <= 0.0) {
              this->i40c = 4;
            }
            else {
              this->i40c = 3;
            }
            this->f410 = -35.0;
          }
        }
        if (this->i40c == 3) {
          if (this->i3b0 == 2) {
            fVar7 = 0.0;
            pVVar2 = Vec3::Ctor(&local_1ec,this->f410,0.0,20.0);
            Player::SetPos(this->players[this->slot[5]],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            Sound::Play(this->sound,1);
            this->players[this->slot[5]]->f198 = 0.0;
            this->players[this->slot[5]]->yaw = 0.0;
            this->players[this->slot[5]]->i190 = 10;
            Player::Motion_4305b1(this->players[this->slot[5]]);
            fVar7 = 3.14;
            pVVar2 = Vec3::Ctor(&local_1f8,this->f410,0.0,0.0);
            Player::SetPos(this->players[(int)local_8],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 3.14;
            pVVar2 = Vec3::Ctor(&local_204,this->f410 + 5.0,0.0,3.0);
            Player::SetPos(this->players[(int)local_18],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 3.14;
            pVVar2 = Vec3::Ctor(&local_210,this->f410 - 1.0,0.0,4.0);
            Player::SetPos(this->players[(int)local_14],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            this->f260 = this->players[this->slot[5]]->yaw - 3.14;
            this->f25c = this->players[this->slot[5]]->stat174;
            this->f258 = this->players[this->slot[5]]->stat178;
            fVar7 = sinf((float)this);
            (this->v24c).x = -fVar7 * -2.0 + (this->players[this->slot[5]]->pos).x;
            (this->v24c).y = this->players[this->slot[5]]->stat170 * 0.9;
            fVar7 = cosf((float)this->players[this->slot[5]]);
            (this->v24c).z = fVar7 * -2.0 + (this->players[this->slot[5]]->pos).z;
            this->i404 = this->slot[5];
            this->i268 = -1;
            this->b414 = '\0';
          }
          else if (this->players[this->i408]->b154 == '\0') {
            if (this->i3b0 == 1) {
              this->f41c = 3.5;
            }
            this->players[(int)local_8]->i190 = 4;
            Player::Motion_430497(this->players[(int)local_8]);
            this->i268 = (int)local_8;
            fVar7 = 0.0;
            pVVar2 = Vec3::Ctor(&local_264,this->f410,0.0,20.0);
            Player::SetPos(this->players[(int)local_8],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 3.14;
            pVVar2 = Vec3::Ctor(&local_270,this->f410 + 5.0,0.0,10.0);
            Player::SetPos(this->players[(int)local_18],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 3.14;
            pVVar2 = Vec3::Ctor(&local_27c,this->f410 - 1.0,0.0,12.0);
            Player::SetPos(this->players[(int)local_14],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 3.14;
            pVVar2 = Vec3::Ctor(&local_288,this->f410 + 8.0,0.0,5.0);
            Player::SetPos(this->players[(int)local_30],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 3.14;
            pVVar2 = Vec3::Ctor(&local_294,this->f410 - 8.0,0.0,4.0);
            Player::SetPos(this->players[(int)local_2c],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 3.14;
            pVVar2 = Vec3::Ctor(&local_2a0,this->f410,0.0,0.0);
            Player::SetPos(this->players[(int)local_38],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            this->i404 = (int)local_8;
            this->b414 = '\0';
          }
          else {
            fVar7 = 0.0;
            pVVar2 = Vec3::Ctor(&local_21c,this->f410,0.0,20.0);
            Player::SetPos(this->players[(int)local_38],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 3.14;
            pVVar2 = Vec3::Ctor(&local_228,this->f410 + 5.0,0.0,10.0);
            Player::SetPos(this->players[(int)local_30],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 3.14;
            pVVar2 = Vec3::Ctor(&local_234,this->f410 - 1.0,0.0,12.0);
            Player::SetPos(this->players[(int)local_2c],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 3.14;
            pVVar2 = Vec3::Ctor(&local_240,this->f410 + 8.0,0.0,1.0);
            Player::SetPos(this->players[(int)local_18],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 3.14;
            pVVar2 = Vec3::Ctor(&local_24c,this->f410 - 8.0,0.0,2.0);
            Player::SetPos(this->players[(int)local_14],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 3.14;
            pVVar2 = Vec3::Ctor(&local_258,this->f410,0.0,3.0);
            Player::SetPos(this->players[(int)local_8],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            Sound::Play(this->sound,1);
            this->players[(int)local_38]->f198 = 0.0;
            fVar7 = Atan2((this->players[(int)local_38]->pos).x -
                          (this->players[(int)local_30]->pos).x,
                          (this->players[(int)local_38]->pos).z -
                          (this->players[(int)local_30]->pos).z);
            this->players[(int)local_38]->yaw = fVar7;
            this->players[(int)local_38]->i190 = 10;
            Player::Motion_4305b1(this->players[(int)local_38]);
            this->f260 = this->players[(int)local_38]->yaw - 3.14;
            this->f25c = this->players[(int)local_38]->stat174;
            this->f258 = this->players[(int)local_38]->stat178;
            fVar7 = sinf(local_38);
            (this->v24c).x = -fVar7 * -2.0 + (this->players[(int)local_38]->pos).x;
            (this->v24c).y = this->players[(int)local_38]->stat170 * 0.9;
            fVar7 = cosf((float)this);
            (this->v24c).z = fVar7 * -2.0 + (this->players[(int)local_38]->pos).z;
            this->i404 = (int)local_38;
            this->i268 = -1;
            this->b414 = '\0';
          }
        }
        else if (this->i40c == 4) {
          if (this->i3b0 == 2) {
            fVar7 = 3.14;
            pVVar2 = Vec3::Ctor(&local_2ac,this->f410,0.0,-20.0);
            Player::SetPos(this->players[this->slot[5]],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            Sound::Play(this->sound,1);
            this->players[this->slot[5]]->f198 = 0.0;
            this->players[this->slot[5]]->yaw = 3.14;
            this->players[this->slot[5]]->i190 = 10;
            Player::Motion_4305b1(this->players[this->slot[5]]);
            fVar7 = 0.0;
            pVVar2 = Vec3::Ctor(&local_2b8,this->f410,0.0,0.0);
            Player::SetPos(this->players[(int)local_8],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 0.0;
            pVVar2 = Vec3::Ctor(&local_2c4,this->f410 + 5.0,0.0,-3.0);
            Player::SetPos(this->players[(int)local_18],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 0.0;
            pVVar2 = Vec3::Ctor(&local_2d0,this->f410 - 1.0,0.0,-4.0);
            Player::SetPos(this->players[(int)local_14],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            this->f260 = this->players[this->slot[5]]->yaw - 3.14;
            this->f25c = this->players[this->slot[5]]->stat174;
            this->f258 = this->players[this->slot[5]]->stat178;
            fVar7 = sinf((float)this);
            (this->v24c).x = -fVar7 * -2.0 + (this->players[this->slot[5]]->pos).x;
            (this->v24c).y = this->players[this->slot[5]]->stat170 * 0.9;
            fVar7 = cosf((float)this->players[this->slot[5]]);
            (this->v24c).z = fVar7 * -2.0 + (this->players[this->slot[5]]->pos).z;
            this->i404 = this->slot[5];
            this->i268 = -1;
            this->b414 = '\0';
          }
          else if (this->players[this->i408]->b154 == '\0') {
            if (this->i3b0 == 1) {
              this->f41c = 3.5;
            }
            this->players[(int)local_8]->i190 = 4;
            Player::Motion_430497(this->players[(int)local_8]);
            this->i268 = (int)local_8;
            fVar7 = 3.14;
            pVVar2 = Vec3::Ctor(&local_324,this->f410,0.0,-20.0);
            Player::SetPos(this->players[(int)local_8],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 0.0;
            pVVar2 = Vec3::Ctor(&local_330,this->f410 + 5.0,0.0,-10.0);
            Player::SetPos(this->players[(int)local_18],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 0.0;
            pVVar2 = Vec3::Ctor(&local_33c,this->f410 - 1.0,0.0,-12.0);
            Player::SetPos(this->players[(int)local_14],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 0.0;
            pVVar2 = Vec3::Ctor(&local_348,this->f410 + 8.0,0.0,-5.0);
            Player::SetPos(this->players[(int)local_30],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 0.0;
            pVVar2 = Vec3::Ctor(&local_354,this->f410 - 8.0,0.0,-4.0);
            Player::SetPos(this->players[(int)local_2c],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 0.0;
            pVVar2 = Vec3::Ctor(&local_360,this->f410,0.0,0.0);
            Player::SetPos(this->players[(int)local_38],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            this->i404 = (int)local_8;
            this->b414 = '\0';
          }
          else {
            fVar7 = 3.14;
            pVVar2 = Vec3::Ctor(&local_2dc,this->f410,0.0,-20.0);
            Player::SetPos(this->players[(int)local_38],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 0.0;
            pVVar2 = Vec3::Ctor(&local_2e8,this->f410 + 5.0,0.0,-10.0);
            Player::SetPos(this->players[(int)local_30],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 0.0;
            pVVar2 = Vec3::Ctor(&local_2f4,this->f410 - 1.0,0.0,-12.0);
            Player::SetPos(this->players[(int)local_2c],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 0.0;
            pVVar2 = Vec3::Ctor(&local_300,this->f410 + 8.0,0.0,-5.0);
            Player::SetPos(this->players[(int)local_18],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 0.0;
            pVVar2 = Vec3::Ctor(&local_30c,this->f410 - 8.0,0.0,-4.0);
            Player::SetPos(this->players[(int)local_14],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            fVar7 = 0.0;
            pVVar2 = Vec3::Ctor(&local_318,this->f410,0.0,0.0);
            Player::SetPos(this->players[(int)local_8],pVVar2->x,pVVar2->y,pVVar2->z,fVar7);
            Sound::Play(this->sound,1);
            this->players[(int)local_38]->f198 = 0.0;
            fVar7 = Atan2((this->players[(int)local_38]->pos).x -
                          (this->players[(int)local_30]->pos).x,
                          (this->players[(int)local_38]->pos).z -
                          (this->players[(int)local_30]->pos).z);
            this->players[(int)local_38]->yaw = fVar7;
            this->players[(int)local_38]->i190 = 10;
            Player::Motion_4305b1(this->players[(int)local_38]);
            this->f260 = this->players[(int)local_38]->yaw - 3.14;
            this->f25c = this->players[(int)local_38]->stat174;
            this->f258 = this->players[(int)local_38]->stat178;
            fVar7 = sinf(local_38);
            (this->v24c).x = -fVar7 * -2.0 + (this->players[(int)local_38]->pos).x;
            (this->v24c).y = this->players[(int)local_38]->stat170 * 0.9;
            fVar7 = cosf((float)this);
            (this->v24c).z = fVar7 * -2.0 + (this->players[(int)local_38]->pos).z;
            this->i404 = (int)local_38;
            this->i268 = -1;
            this->b414 = '\0';
          }
        }
      }
    }
    if (this->players[(int)local_8]->i190 < 3 &&
        (this->keyUp == KEY_HOLD || this->keyNum8 == KEY_HOLD)) {
      pfVar3 = thunk_FUN_00419ae5(this,local_36c,(int)local_8);
      pPVar1 = this->players[(int)local_8];
      (pPVar1->pos).x = *pfVar3;
      (pPVar1->pos).y = pfVar3[1];
      (pPVar1->pos).z = pfVar3[2];
      this->players[(int)local_8]->i190 = 1;
      Player::Motion_42f1a9(this->players[(int)local_8]);
    }
    else if ((this->players[(int)local_8]->i190 < 7 || 9 < this->players[(int)local_8]->i190) ||
             this->keyUp != KEY_HOLD && this->keyNum8 != KEY_HOLD) {
      if (this->players[(int)local_8]->i190 < 3 &&
          (this->keyDown == KEY_HOLD || this->keyNum2 == KEY_HOLD)) {
        pPVar1 = this->players[(int)local_8];
        fVar7 = sinf((float)this->players[(int)local_8]);
        (this->players[(int)local_8]->pos).x =
             fVar7 * this->players[(int)local_8]->stat168 * 0.6 * this->dt + (pPVar1->pos).x;
        pPVar1 = this->players[(int)local_8];
        fVar7 = cosf((float)this);
        (this->players[(int)local_8]->pos).z =
             fVar7 * this->players[(int)local_8]->stat168 * 0.6 * this->dt + (pPVar1->pos).z;
        this->players[(int)local_8]->i190 = 2;
        Player::Motion_42fb3f(this->players[(int)local_8]);
      }
      else if ((this->players[(int)local_8]->i190 < 7 || 9 < this->players[(int)local_8]->i190) ||
               this->keyDown != KEY_HOLD && this->keyNum2 != KEY_HOLD) {
        if (this->players[(int)local_8]->i190 < 3) {
          this->players[(int)local_8]->i190 = 0;
          Player::Motion_42ee86(this->players[(int)local_8]);
        }
        else if (6 < this->players[(int)local_8]->i190 && this->players[(int)local_8]->i190 < 10) {
          this->players[(int)local_8]->i190 = 7;
          Player::Motion_42df38(this->players[(int)local_8]);
        }
      }
      else {
        pPVar1 = this->players[(int)local_8];
        fVar7 = sinf((float)this);
        (this->players[(int)local_8]->pos).x =
             fVar7 * this->players[(int)local_8]->stat168 * 0.6 * this->dt + (pPVar1->pos).x;
        pPVar1 = this->players[(int)local_8];
        fVar7 = cosf(this->players[(int)local_8]->yaw);
        (this->players[(int)local_8]->pos).z =
             fVar7 * this->players[(int)local_8]->stat168 * 0.6 * this->dt + (pPVar1->pos).z;
        this->players[(int)local_8]->i190 = 9;
        Player::Motion_42e9cd(this->players[(int)local_8]);
      }
    }
    else {
      pfVar3 = thunk_FUN_00419ae5(this,local_378,(int)local_8);
      pPVar1 = this->players[(int)local_8];
      (pPVar1->pos).x = *pfVar3;
      (pPVar1->pos).y = pfVar3[1];
      (pPVar1->pos).z = pfVar3[2];
      this->players[(int)local_8]->i190 = 8;
      Player::Motion_42dfc0(this->players[(int)local_8]);
    }
    if (this->players[(int)local_8]->i190 < 3 && this->keyX == KEY_HOLD) {
      this->players[(int)local_8]->i190 = 4;
      Player::Motion_430497(this->players[(int)local_8]);
      if (this->i3b0 == 1) {
        this->f41c = 3.5;
      }
    }
    if ((this->players[(int)local_8]->i190 == 3 || this->players[(int)local_8]->i190 == 4) &&
        this->i3b0 == 1) {
      this->f41c = this->f41c - this->dt;
    }
    if (this->players[(int)local_8]->i190 == 4 && (this->keyX == KEY_RELEASE || this->f41c < -0.01))
    {
      Sound::Play(this->sound,1);
      this->players[(int)local_8]->f198 = 0.0;
      this->players[(int)local_8]->i190 = 10;
      Player::Motion_4305b1(this->players[(int)local_8]);
      this->f41c = 0.0;
      this->f260 = this->players[(int)local_8]->yaw - 3.14;
      this->f25c = this->players[(int)local_8]->stat174;
      this->f258 = this->players[(int)local_8]->stat178;
      fVar7 = sinf((float)this);
      (this->v24c).x = -fVar7 * -2.0 + (this->players[(int)local_8]->pos).x;
      fVar7 = cosf(local_8);
      (this->v24c).z = fVar7 * -2.0 + (this->players[(int)local_8]->pos).z;
      this->i404 = (int)local_8;
      this->i268 = -1;
    }
    if (this->i3ac == 3 && this->keyZ == KEY_PUSH) {
      Sound::Play(this->sound,1);
      this->players[(int)local_8]->i190 = 6;
      Player::Motion_430a58(this->players[(int)local_8]);
      this->players[(int)local_8]->f198 = 0.0;
      this->players[(int)local_8]->f18c = 12.0;
    }
    if (this->players[(int)local_8]->i190 < 3 && this->keyZ == KEY_HOLD) {
      this->players[(int)local_8]->i190 = 3;
      Player::Motion_430497(this->players[(int)local_8]);
      this->i3fc = (int)local_8;
      this->i3b8 = 2;
      if (this->i3b0 == 1) {
        this->f41c = 10.0;
      }
    }
    if (this->players[(int)local_8]->i190 == 3) {
      if (this->keyZ != KEY_RELEASE && (this->f41c <= 5.0 || 6.5 <= this->f41c)) {
        this->f3a0 = this->f3a0 + this->dt;
        if (1.0 < this->f3a0) {
          this->f3a0 = 0.001;
        }
      }
      else {
        Sound::Play(this->sound,1);
        this->players[(int)local_8]->f198 = 0.0;
        this->players[(int)local_8]->i190 = 0xb;
        Player::Motion_430701(this->players[(int)local_8]);
        this->f260 = this->players[(int)local_8]->yaw - 3.14;
        this->f25c = 23.0;
        this->f258 = this->f3a0 * this->players[(int)local_8]->stat17c + 1.0;
        fVar7 = sinf((float)this);
        (this->v24c).x = -fVar7 * -2.0 + (this->players[(int)local_8]->pos).x;
        fVar7 = cosf(local_8);
        (this->v24c).z = fVar7 * -2.0 + (this->players[(int)local_8]->pos).z;
        this->i404 = (int)local_8;
        this->f41c = 0.0;
        this->i268 = -1;
        if (this->b3a6 == '\0') {
          if (225.0 <= (this->players[(int)local_8]->pos).z * (this->players[(int)local_8]->pos).z +
                       ((this->players[(int)local_8]->pos).x + 35.0) *
                       ((this->players[(int)local_8]->pos).x + 35.0)) {
            this->b3a8 = '\x01';
          }
          else {
            this->b3a8 = '\0';
          }
        }
        else if (225.0 <= (this->players[(int)local_8]->pos).z *
                          (this->players[(int)local_8]->pos).z +
                          ((this->players[(int)local_8]->pos).x - 35.0) *
                          ((this->players[(int)local_8]->pos).x - 35.0)) {
          this->b3a8 = '\x01';
        }
        else {
          this->b3a8 = '\0';
        }
      }
    }
    if ((this->keyRight == KEY_HOLD || this->keyNum6 == KEY_HOLD) &&
        this->players[(int)local_8]->i190 < 10) {
      if (this->players[(int)local_8]->i190 == 0 ||
          3 < this->players[(int)local_8]->i190 && this->players[(int)local_8]->i190 < 8) {
        this->players[(int)local_8]->yaw = this->dt * 5.0 + this->players[(int)local_8]->yaw;
      }
      else {
        this->players[(int)local_8]->yaw = this->dt * 2.0 + this->players[(int)local_8]->yaw;
      }
    }
    else if ((this->keyLeft == KEY_HOLD || this->keyNum4 == KEY_HOLD) &&
             this->players[(int)local_8]->i190 < 10) {
      if (this->players[(int)local_8]->i190 == 0 ||
          3 < this->players[(int)local_8]->i190 && this->players[(int)local_8]->i190 < 8) {
        this->players[(int)local_8]->yaw = this->players[(int)local_8]->yaw - this->dt * 5.0;
      }
      else {
        this->players[(int)local_8]->yaw = this->players[(int)local_8]->yaw - this->dt * 2.0;
      }
    }
    else if (this->i418 == 5) {
      if (this->b3a6 == '\0') {
        fVar8 = 2.0;
        fVar7 = this->players[(int)local_8]->yaw;
        fVar6 = Atan2((this->players[(int)local_8]->pos).x - 35.0,
                      (this->players[(int)local_8]->pos).z);
        fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
        this->players[(int)local_8]->yaw = (float)fVar4;
        pfVar3 = thunk_FUN_00419ae5(this,local_390,(int)local_8);
        pPVar1 = this->players[(int)local_8];
        (pPVar1->pos).x = *pfVar3;
        (pPVar1->pos).y = pfVar3[1];
        (pPVar1->pos).z = pfVar3[2];
        Player::Motion_42dfc0(this->players[(int)local_8]);
      }
      else {
        fVar8 = 2.0;
        fVar7 = this->players[(int)local_8]->yaw;
        fVar6 = Atan2((this->players[(int)local_8]->pos).x + 35.0,
                      (this->players[(int)local_8]->pos).z);
        fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
        this->players[(int)local_8]->yaw = (float)fVar4;
        pfVar3 = thunk_FUN_00419ae5(this,local_384,(int)local_8);
        pPVar1 = this->players[(int)local_8];
        (pPVar1->pos).x = *pfVar3;
        (pPVar1->pos).y = pfVar3[1];
        (pPVar1->pos).z = pfVar3[2];
        Player::Motion_42dfc0(this->players[(int)local_8]);
      }
    }
    else if (this->players[(int)local_8]->i190 == 7 && this->i268 < 0) {
      fVar8 = 10.0;
      fVar7 = this->players[(int)local_8]->yaw;
      fVar6 = Atan2((this->players[(int)local_8]->pos).x - (this->v24c).x,
                    (this->players[(int)local_8]->pos).z - (this->v24c).z);
      fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
      this->players[(int)local_8]->yaw = (float)fVar4;
      pfVar3 = thunk_FUN_00419ae5(this,local_39c,(int)local_8);
      pPVar1 = this->players[(int)local_8];
      (pPVar1->pos).x = *pfVar3;
      (pPVar1->pos).y = pfVar3[1];
      (pPVar1->pos).z = pfVar3[2];
      Player::Motion_42dfc0(this->players[(int)local_8]);
    }
    if (this->b3a6 == '\0') {
      if (6 < this->players[(int)local_18]->i190 && this->players[(int)local_18]->i190 < 10) {
        if ((this->players[(int)local_18]->pos).z <= 18.0) {
          if (-18.0 <= (this->players[(int)local_18]->pos).z) {
            if ((this->players[(int)local_8]->pos).x <= -25.0) {
              if ((this->players[(int)local_8]->pos).z <= 0.0) {
                fVar8 = 5.0;
                fVar7 = this->players[(int)local_18]->yaw;
                fVar6 = Atan2((this->players[(int)local_18]->pos).x + 30.0,
                              (this->players[(int)local_18]->pos).z - 15.0);
                fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
                this->players[(int)local_18]->yaw = (float)fVar4;
              }
              else {
                fVar8 = 5.0;
                fVar7 = this->players[(int)local_18]->yaw;
                fVar6 = Atan2((this->players[(int)local_18]->pos).x + 30.0,
                              (this->players[(int)local_18]->pos).z + 15.0);
                fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
                this->players[(int)local_18]->yaw = (float)fVar4;
              }
              pfVar3 = thunk_FUN_00419ae5(this,local_480,(int)local_18);
              pPVar1 = this->players[(int)local_18];
              (pPVar1->pos).x = *pfVar3;
              (pPVar1->pos).y = pfVar3[1];
              (pPVar1->pos).z = pfVar3[2];
              Player::Motion_42dfc0(this->players[(int)local_18]);
            }
            else if ((this->players[(int)local_18]->pos).x - (this->players[(int)local_8]->pos).x <=
                     -10.0) {
              if (-15.0 <= (this->players[(int)local_18]->pos).x -
                           (this->players[(int)local_8]->pos).x) {
                if (this->keyUp == KEY_FREE && this->keyNum8 == KEY_FREE) {
                  fVar8 = 5.0;
                  fVar7 = this->players[(int)local_18]->yaw;
                  fVar6 = Atan2((this->players[(int)local_18]->pos).x - (this->v24c).x,
                                (this->players[(int)local_18]->pos).z - (this->v24c).z);
                  fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
                  this->players[(int)local_18]->yaw = (float)fVar4;
                  Player::Motion_42df38(this->players[(int)local_18]);
                }
              }
              else {
                fVar4 = thunk_FUN_004199d4((int)this,-1.57,this->players[(int)local_18]->yaw,5.0);
                this->players[(int)local_18]->yaw = (float)fVar4;
                pfVar3 = thunk_FUN_00419ae5(this,local_474,(int)local_18);
                pPVar1 = this->players[(int)local_18];
                (pPVar1->pos).x = *pfVar3;
                (pPVar1->pos).y = pfVar3[1];
                (pPVar1->pos).z = pfVar3[2];
                Player::Motion_42dfc0(this->players[(int)local_18]);
              }
            }
            else {
              fVar4 = thunk_FUN_004199d4((int)this,1.57,this->players[(int)local_18]->yaw,5.0);
              this->players[(int)local_18]->yaw = (float)fVar4;
              pfVar3 = thunk_FUN_00419ae5(this,local_468,(int)local_18);
              pPVar1 = this->players[(int)local_18];
              (pPVar1->pos).x = *pfVar3;
              (pPVar1->pos).y = pfVar3[1];
              (pPVar1->pos).z = pfVar3[2];
              Player::Motion_42dfc0(this->players[(int)local_18]);
            }
          }
          else {
            fVar4 = thunk_FUN_004199d4((int)this,3.14,this->players[(int)local_18]->yaw,5.0);
            this->players[(int)local_18]->yaw = (float)fVar4;
            pfVar3 = thunk_FUN_00419ae5(this,local_45c,(int)local_18);
            pPVar1 = this->players[(int)local_18];
            (pPVar1->pos).x = *pfVar3;
            (pPVar1->pos).y = pfVar3[1];
            (pPVar1->pos).z = pfVar3[2];
            Player::Motion_42dfc0(this->players[(int)local_18]);
          }
        }
        else {
          fVar4 = thunk_FUN_004199d4((int)this,0.0,this->players[(int)local_18]->yaw,5.0);
          this->players[(int)local_18]->yaw = (float)fVar4;
          pfVar3 = thunk_FUN_00419ae5(this,local_450,(int)local_18);
          pPVar1 = this->players[(int)local_18];
          (pPVar1->pos).x = *pfVar3;
          (pPVar1->pos).y = pfVar3[1];
          (pPVar1->pos).z = pfVar3[2];
          Player::Motion_42dfc0(this->players[(int)local_18]);
        }
      }
      if (6 < this->players[(int)local_14]->i190 && this->players[(int)local_14]->i190 < 10) {
        if ((this->players[(int)local_14]->pos).z <= 18.0) {
          if (-18.0 <= (this->players[(int)local_14]->pos).z) {
            if (-35.0 <= (this->players[(int)local_14]->pos).x) {
              if ((this->players[(int)local_14]->pos).x <= 35.0) {
                if ((this->players[(int)local_14]->pos).x - (this->players[(int)local_8]->pos).x <=
                    12.0) {
                  if (-3.0 <= (this->players[(int)local_14]->pos).x -
                              (this->players[(int)local_8]->pos).x) {
                    if ((this->players[(int)local_14]->pos).z - (this->players[(int)local_8]->pos).z
                        <= 6.0) {
                      if (-6.0 <= (this->players[(int)local_14]->pos).z -
                                  (this->players[(int)local_8]->pos).z) {
                        if (this->keyX == KEY_HOLD) {
                          this->players[(int)local_14]->yaw =
                               this->dt * 5.0 + this->players[(int)local_14]->yaw;
                          pfVar3 = thunk_FUN_00419ae5(this,local_4ec,(int)local_14);
                          pPVar1 = this->players[(int)local_14];
                          (pPVar1->pos).x = *pfVar3;
                          (pPVar1->pos).y = pfVar3[1];
                          (pPVar1->pos).z = pfVar3[2];
                          Player::Motion_42dfc0(this->players[(int)local_14]);
                        }
                        else if (this->keyUp == KEY_FREE && this->keyNum8 == KEY_FREE) {
                          fVar8 = 5.0;
                          fVar7 = this->players[(int)local_14]->yaw;
                          fVar6 = Atan2((this->players[(int)local_14]->pos).x - (this->v24c).x,
                                        (this->players[(int)local_14]->pos).z - (this->v24c).z);
                          fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
                          this->players[(int)local_14]->yaw = (float)fVar4;
                          Player::Motion_42df38(this->players[(int)local_14]);
                        }
                      }
                      else {
                        fVar4 = thunk_FUN_004199d4((int)this,3.14,this->players[(int)local_14]->yaw,
                                                   5.0);
                        this->players[(int)local_14]->yaw = (float)fVar4;
                        pfVar3 = thunk_FUN_00419ae5(this,local_4e0,(int)local_14);
                        pPVar1 = this->players[(int)local_14];
                        (pPVar1->pos).x = *pfVar3;
                        (pPVar1->pos).y = pfVar3[1];
                        (pPVar1->pos).z = pfVar3[2];
                        Player::Motion_42dfc0(this->players[(int)local_14]);
                      }
                    }
                    else {
                      fVar4 = thunk_FUN_004199d4((int)this,0.0,this->players[(int)local_14]->yaw,5.0
                                                );
                      this->players[(int)local_14]->yaw = (float)fVar4;
                      pfVar3 = thunk_FUN_00419ae5(this,local_4d4,(int)local_14);
                      pPVar1 = this->players[(int)local_14];
                      (pPVar1->pos).x = *pfVar3;
                      (pPVar1->pos).y = pfVar3[1];
                      (pPVar1->pos).z = pfVar3[2];
                      Player::Motion_42dfc0(this->players[(int)local_14]);
                    }
                  }
                  else {
                    fVar4 = thunk_FUN_004199d4((int)this,-1.57,this->players[(int)local_14]->yaw,5.0
                                              );
                    this->players[(int)local_14]->yaw = (float)fVar4;
                    pfVar3 = thunk_FUN_00419ae5(this,local_4c8,(int)local_14);
                    pPVar1 = this->players[(int)local_14];
                    (pPVar1->pos).x = *pfVar3;
                    (pPVar1->pos).y = pfVar3[1];
                    (pPVar1->pos).z = pfVar3[2];
                    Player::Motion_42dfc0(this->players[(int)local_14]);
                  }
                }
                else {
                  fVar4 = thunk_FUN_004199d4((int)this,1.57,this->players[(int)local_14]->yaw,5.0);
                  this->players[(int)local_14]->yaw = (float)fVar4;
                  pfVar3 = thunk_FUN_00419ae5(this,local_4bc,(int)local_14);
                  pPVar1 = this->players[(int)local_14];
                  (pPVar1->pos).x = *pfVar3;
                  (pPVar1->pos).y = pfVar3[1];
                  (pPVar1->pos).z = pfVar3[2];
                  Player::Motion_42dfc0(this->players[(int)local_14]);
                }
              }
              else {
                fVar4 = thunk_FUN_004199d4((int)this,1.57,this->players[(int)local_14]->yaw,5.0);
                this->players[(int)local_14]->yaw = (float)fVar4;
                pfVar3 = thunk_FUN_00419ae5(this,local_4b0,(int)local_14);
                pPVar1 = this->players[(int)local_14];
                (pPVar1->pos).x = *pfVar3;
                (pPVar1->pos).y = pfVar3[1];
                (pPVar1->pos).z = pfVar3[2];
                Player::Motion_42dfc0(this->players[(int)local_14]);
              }
            }
            else {
              fVar4 = thunk_FUN_004199d4((int)this,-1.57,this->players[(int)local_14]->yaw,5.0);
              this->players[(int)local_14]->yaw = (float)fVar4;
              pfVar3 = thunk_FUN_00419ae5(this,local_4a4,(int)local_14);
              pPVar1 = this->players[(int)local_14];
              (pPVar1->pos).x = *pfVar3;
              (pPVar1->pos).y = pfVar3[1];
              (pPVar1->pos).z = pfVar3[2];
              Player::Motion_42dfc0(this->players[(int)local_14]);
            }
          }
          else {
            fVar4 = thunk_FUN_004199d4((int)this,3.14,this->players[(int)local_14]->yaw,5.0);
            this->players[(int)local_14]->yaw = (float)fVar4;
            pfVar3 = thunk_FUN_00419ae5(this,local_498,(int)local_14);
            pPVar1 = this->players[(int)local_14];
            (pPVar1->pos).x = *pfVar3;
            (pPVar1->pos).y = pfVar3[1];
            (pPVar1->pos).z = pfVar3[2];
            Player::Motion_42dfc0(this->players[(int)local_14]);
          }
        }
        else {
          fVar4 = thunk_FUN_004199d4((int)this,0.0,this->players[(int)local_14]->yaw,5.0);
          this->players[(int)local_14]->yaw = (float)fVar4;
          pfVar3 = thunk_FUN_00419ae5(this,local_48c,(int)local_14);
          pPVar1 = this->players[(int)local_14];
          (pPVar1->pos).x = *pfVar3;
          (pPVar1->pos).y = pfVar3[1];
          (pPVar1->pos).z = pfVar3[2];
          Player::Motion_42dfc0(this->players[(int)local_14]);
        }
      }
    }
    else {
      if (6 < this->players[(int)local_18]->i190 && this->players[(int)local_18]->i190 < 10) {
        if ((this->players[(int)local_18]->pos).z <= 18.0) {
          if (-18.0 <= (this->players[(int)local_18]->pos).z) {
            if (25.0 <= (this->players[(int)local_8]->pos).x) {
              if ((this->players[(int)local_8]->pos).z <= 0.0) {
                fVar8 = 5.0;
                fVar7 = this->players[(int)local_18]->yaw;
                fVar6 = Atan2((this->players[(int)local_18]->pos).x - 30.0,
                              (this->players[(int)local_18]->pos).z - 15.0);
                fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
                this->players[(int)local_18]->yaw = (float)fVar4;
              }
              else {
                fVar8 = 5.0;
                fVar7 = this->players[(int)local_18]->yaw;
                fVar6 = Atan2((this->players[(int)local_18]->pos).x - 30.0,
                              (this->players[(int)local_18]->pos).z + 15.0);
                fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
                this->players[(int)local_18]->yaw = (float)fVar4;
              }
              pfVar3 = thunk_FUN_00419ae5(this,local_3d8,(int)local_18);
              pPVar1 = this->players[(int)local_18];
              (pPVar1->pos).x = *pfVar3;
              (pPVar1->pos).y = pfVar3[1];
              (pPVar1->pos).z = pfVar3[2];
              Player::Motion_42dfc0(this->players[(int)local_18]);
            }
            else if (10.0 <= (this->players[(int)local_18]->pos).x -
                             (this->players[(int)local_8]->pos).x) {
              if ((this->players[(int)local_18]->pos).x - (this->players[(int)local_8]->pos).x <=
                  15.0) {
                if (this->keyUp == KEY_FREE && this->keyNum8 == KEY_FREE) {
                  fVar8 = 5.0;
                  fVar7 = this->players[(int)local_18]->yaw;
                  fVar6 = Atan2((this->players[(int)local_18]->pos).x - (this->v24c).x,
                                (this->players[(int)local_18]->pos).z - (this->v24c).z);
                  fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
                  this->players[(int)local_18]->yaw = (float)fVar4;
                  Player::Motion_42df38(this->players[(int)local_18]);
                }
              }
              else {
                fVar4 = thunk_FUN_004199d4((int)this,1.57,this->players[(int)local_18]->yaw,5.0);
                this->players[(int)local_18]->yaw = (float)fVar4;
                pfVar3 = thunk_FUN_00419ae5(this,local_3cc,(int)local_18);
                pPVar1 = this->players[(int)local_18];
                (pPVar1->pos).x = *pfVar3;
                (pPVar1->pos).y = pfVar3[1];
                (pPVar1->pos).z = pfVar3[2];
                Player::Motion_42dfc0(this->players[(int)local_18]);
              }
            }
            else {
              fVar4 = thunk_FUN_004199d4((int)this,-1.57,this->players[(int)local_18]->yaw,5.0);
              this->players[(int)local_18]->yaw = (float)fVar4;
              pfVar3 = thunk_FUN_00419ae5(this,local_3c0,(int)local_18);
              pPVar1 = this->players[(int)local_18];
              (pPVar1->pos).x = *pfVar3;
              (pPVar1->pos).y = pfVar3[1];
              (pPVar1->pos).z = pfVar3[2];
              Player::Motion_42dfc0(this->players[(int)local_18]);
            }
          }
          else {
            fVar4 = thunk_FUN_004199d4((int)this,3.14,this->players[(int)local_18]->yaw,5.0);
            this->players[(int)local_18]->yaw = (float)fVar4;
            pfVar3 = thunk_FUN_00419ae5(this,local_3b4,(int)local_18);
            pPVar1 = this->players[(int)local_18];
            (pPVar1->pos).x = *pfVar3;
            (pPVar1->pos).y = pfVar3[1];
            (pPVar1->pos).z = pfVar3[2];
            Player::Motion_42dfc0(this->players[(int)local_18]);
          }
        }
        else {
          fVar4 = thunk_FUN_004199d4((int)this,0.0,this->players[(int)local_18]->yaw,5.0);
          this->players[(int)local_18]->yaw = (float)fVar4;
          pfVar3 = thunk_FUN_00419ae5(this,local_3a8,(int)local_18);
          pPVar1 = this->players[(int)local_18];
          (pPVar1->pos).x = *pfVar3;
          (pPVar1->pos).y = pfVar3[1];
          (pPVar1->pos).z = pfVar3[2];
          Player::Motion_42dfc0(this->players[(int)local_18]);
        }
      }
      if (6 < this->players[(int)local_14]->i190 && this->players[(int)local_14]->i190 < 10) {
        if ((this->players[(int)local_14]->pos).z <= 18.0) {
          if (-18.0 <= (this->players[(int)local_14]->pos).z) {
            if (-35.0 <= (this->players[(int)local_14]->pos).x) {
              if ((this->players[(int)local_14]->pos).x <= 35.0) {
                if (-12.0 <= (this->players[(int)local_14]->pos).x -
                             (this->players[(int)local_8]->pos).x) {
                  if ((this->players[(int)local_14]->pos).x - (this->players[(int)local_8]->pos).x
                      <= 3.0) {
                    if ((this->players[(int)local_14]->pos).z - (this->players[(int)local_8]->pos).z
                        <= 6.0) {
                      if (-6.0 <= (this->players[(int)local_14]->pos).z -
                                  (this->players[(int)local_8]->pos).z) {
                        if (this->keyX == KEY_HOLD) {
                          this->players[(int)local_14]->yaw =
                               this->dt * 5.0 + this->players[(int)local_14]->yaw;
                          pfVar3 = thunk_FUN_00419ae5(this,local_444,(int)local_14);
                          pPVar1 = this->players[(int)local_14];
                          (pPVar1->pos).x = *pfVar3;
                          (pPVar1->pos).y = pfVar3[1];
                          (pPVar1->pos).z = pfVar3[2];
                          Player::Motion_42dfc0(this->players[(int)local_14]);
                        }
                        else if (this->keyUp == KEY_FREE && this->keyNum8 == KEY_FREE) {
                          fVar8 = 5.0;
                          fVar7 = this->players[(int)local_14]->yaw;
                          fVar6 = Atan2((this->players[(int)local_14]->pos).x - (this->v24c).x,
                                        (this->players[(int)local_14]->pos).z - (this->v24c).z);
                          fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
                          this->players[(int)local_14]->yaw = (float)fVar4;
                          Player::Motion_42df38(this->players[(int)local_14]);
                        }
                      }
                      else {
                        fVar4 = thunk_FUN_004199d4((int)this,3.14,this->players[(int)local_14]->yaw,
                                                   5.0);
                        this->players[(int)local_14]->yaw = (float)fVar4;
                        pfVar3 = thunk_FUN_00419ae5(this,local_438,(int)local_14);
                        pPVar1 = this->players[(int)local_14];
                        (pPVar1->pos).x = *pfVar3;
                        (pPVar1->pos).y = pfVar3[1];
                        (pPVar1->pos).z = pfVar3[2];
                        Player::Motion_42dfc0(this->players[(int)local_14]);
                      }
                    }
                    else {
                      fVar4 = thunk_FUN_004199d4((int)this,0.0,this->players[(int)local_14]->yaw,5.0
                                                );
                      this->players[(int)local_14]->yaw = (float)fVar4;
                      pfVar3 = thunk_FUN_00419ae5(this,local_42c,(int)local_14);
                      pPVar1 = this->players[(int)local_14];
                      (pPVar1->pos).x = *pfVar3;
                      (pPVar1->pos).y = pfVar3[1];
                      (pPVar1->pos).z = pfVar3[2];
                      Player::Motion_42dfc0(this->players[(int)local_14]);
                    }
                  }
                  else {
                    fVar4 = thunk_FUN_004199d4((int)this,1.57,this->players[(int)local_14]->yaw,5.0)
                    ;
                    this->players[(int)local_14]->yaw = (float)fVar4;
                    pfVar3 = thunk_FUN_00419ae5(this,local_420,(int)local_14);
                    pPVar1 = this->players[(int)local_14];
                    (pPVar1->pos).x = *pfVar3;
                    (pPVar1->pos).y = pfVar3[1];
                    (pPVar1->pos).z = pfVar3[2];
                    Player::Motion_42dfc0(this->players[(int)local_14]);
                  }
                }
                else {
                  fVar4 = thunk_FUN_004199d4((int)this,-1.57,this->players[(int)local_14]->yaw,5.0);
                  this->players[(int)local_14]->yaw = (float)fVar4;
                  pfVar3 = thunk_FUN_00419ae5(this,local_414,(int)local_14);
                  pPVar1 = this->players[(int)local_14];
                  (pPVar1->pos).x = *pfVar3;
                  (pPVar1->pos).y = pfVar3[1];
                  (pPVar1->pos).z = pfVar3[2];
                  Player::Motion_42dfc0(this->players[(int)local_14]);
                }
              }
              else {
                fVar4 = thunk_FUN_004199d4((int)this,1.57,this->players[(int)local_14]->yaw,5.0);
                this->players[(int)local_14]->yaw = (float)fVar4;
                pfVar3 = thunk_FUN_00419ae5(this,local_408,(int)local_14);
                pPVar1 = this->players[(int)local_14];
                (pPVar1->pos).x = *pfVar3;
                (pPVar1->pos).y = pfVar3[1];
                (pPVar1->pos).z = pfVar3[2];
                Player::Motion_42dfc0(this->players[(int)local_14]);
              }
            }
            else {
              fVar4 = thunk_FUN_004199d4((int)this,-1.57,this->players[(int)local_14]->yaw,5.0);
              this->players[(int)local_14]->yaw = (float)fVar4;
              pfVar3 = thunk_FUN_00419ae5(this,local_3fc,(int)local_14);
              pPVar1 = this->players[(int)local_14];
              (pPVar1->pos).x = *pfVar3;
              (pPVar1->pos).y = pfVar3[1];
              (pPVar1->pos).z = pfVar3[2];
              Player::Motion_42dfc0(this->players[(int)local_14]);
            }
          }
          else {
            fVar4 = thunk_FUN_004199d4((int)this,3.14,this->players[(int)local_14]->yaw,5.0);
            this->players[(int)local_14]->yaw = (float)fVar4;
            pfVar3 = thunk_FUN_00419ae5(this,local_3f0,(int)local_14);
            pPVar1 = this->players[(int)local_14];
            (pPVar1->pos).x = *pfVar3;
            (pPVar1->pos).y = pfVar3[1];
            (pPVar1->pos).z = pfVar3[2];
            Player::Motion_42dfc0(this->players[(int)local_14]);
          }
        }
        else {
          fVar4 = thunk_FUN_004199d4((int)this,0.0,this->players[(int)local_14]->yaw,5.0);
          this->players[(int)local_14]->yaw = (float)fVar4;
          pfVar3 = thunk_FUN_00419ae5(this,local_3e4,(int)local_14);
          pPVar1 = this->players[(int)local_14];
          (pPVar1->pos).x = *pfVar3;
          (pPVar1->pos).y = pfVar3[1];
          (pPVar1->pos).z = pfVar3[2];
          Player::Motion_42dfc0(this->players[(int)local_14]);
        }
      }
    }
    if (this->i3b0 == 2) {
      if (this->players[this->slot[5]]->i190 != 10 && this->players[this->slot[5]]->i190 != 0xc) {
        if (this->players[(int)local_8]->i190 != 3 && this->players[(int)local_8]->i190 != 4 ||
            10.0 <= local_34) {
          if (this->i268 == this->slot[5]) {
            fVar8 = 5.0;
            fVar7 = this->players[this->slot[5]]->yaw;
            fVar6 = Atan2((this->players[this->slot[5]]->pos).x + 30.0,
                          (this->players[this->slot[5]]->pos).z);
            fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
            this->players[this->slot[5]]->yaw = (float)fVar4;
            if (this->b3a6 != '\0') {
              pfVar3 = thunk_FUN_00419ae5(this,local_510,this->slot[5]);
              pPVar1 = this->players[this->slot[5]];
              (pPVar1->pos).x = *pfVar3;
              (pPVar1->pos).y = pfVar3[1];
              (pPVar1->pos).z = pfVar3[2];
              Player::Motion_42f1a9(this->players[this->slot[5]]);
            }
          }
          else {
            fVar8 = 5.0;
            fVar7 = this->players[this->slot[5]]->yaw;
            fVar6 = Atan2((this->players[this->slot[5]]->pos).x - (this->v24c).x,
                          (this->players[this->slot[5]]->pos).z - (this->v24c).z);
            fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
            this->players[this->slot[5]]->yaw = (float)fVar4;
            if (this->b3a6 != '\0') {
              pfVar3 = thunk_FUN_00419ae5(this,local_504,this->slot[5]);
              pPVar1 = this->players[this->slot[5]];
              (pPVar1->pos).x = *pfVar3;
              (pPVar1->pos).y = pfVar3[1];
              (pPVar1->pos).z = pfVar3[2];
              Player::Motion_42dfc0(this->players[this->slot[5]]);
            }
          }
        }
        else {
          this->players[this->slot[5]]->yaw = this->dt * 2.0 + this->players[this->slot[5]]->yaw;
          if (this->b3a6 != '\0') {
            pfVar3 = thunk_FUN_00419ae5(this,local_4f8,this->slot[5]);
            pPVar1 = this->players[this->slot[5]];
            (pPVar1->pos).x = *pfVar3;
            (pPVar1->pos).y = pfVar3[1];
            (pPVar1->pos).z = pfVar3[2];
            Player::Motion_42dfc0(this->players[this->slot[5]]);
          }
        }
      }
      fVar8 = 2.0;
      fVar7 = this->players[this->slot[4]]->yaw;
      fVar6 = Atan2((this->players[this->slot[4]]->pos).x - (this->v24c).x,
                    (this->players[this->slot[4]]->pos).z - (this->v24c).z);
      fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
      this->players[this->slot[4]]->yaw = (float)fVar4;
      fVar8 = 2.0;
      fVar7 = this->players[this->slot[3]]->yaw;
      fVar6 = Atan2((this->players[this->slot[3]]->pos).x - (this->v24c).x,
                    (this->players[this->slot[3]]->pos).z - (this->v24c).z);
      fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
      this->players[this->slot[3]]->yaw = (float)fVar4;
    }
    else {
      if (this->i418 == 5) {
        if (this->b3a6 == '\0') {
          fVar8 = 2.0;
          fVar7 = this->players[(int)local_38]->yaw;
          fVar6 = Atan2((this->players[(int)local_38]->pos).x + 35.0,
                        (this->players[(int)local_38]->pos).z);
          fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
          this->players[(int)local_38]->yaw = (float)fVar4;
          pfVar3 = thunk_FUN_00419ae5(this,local_528,(int)local_38);
          pPVar1 = this->players[(int)local_38];
          (pPVar1->pos).x = *pfVar3;
          (pPVar1->pos).y = pfVar3[1];
          (pPVar1->pos).z = pfVar3[2];
          Player::Motion_42dfc0(this->players[(int)local_38]);
        }
        else {
          fVar8 = 2.0;
          fVar7 = this->players[(int)local_38]->yaw;
          fVar6 = Atan2((this->players[(int)local_38]->pos).x - 35.0,
                        (this->players[(int)local_38]->pos).z);
          fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
          this->players[(int)local_38]->yaw = (float)fVar4;
          pfVar3 = thunk_FUN_00419ae5(this,local_51c,(int)local_38);
          pPVar1 = this->players[(int)local_38];
          (pPVar1->pos).x = *pfVar3;
          (pPVar1->pos).y = pfVar3[1];
          (pPVar1->pos).z = pfVar3[2];
          Player::Motion_42dfc0(this->players[(int)local_38]);
        }
      }
      else if (local_38 == (float)this->i268) {
        if (this->players[(int)local_38]->i190 < 4) {
          if ((this->b3a6 &
              (this->players[(int)local_38]->pos).z * (this->players[(int)local_38]->pos).z +
              ((this->players[(int)local_38]->pos).x + 36.0) *
              ((this->players[(int)local_38]->pos).x + 36.0) < 35.0) == 0) {
            if (this->b3a6 != '\0' ||
                35.0 <= (this->players[(int)local_38]->pos).z *
                        (this->players[(int)local_38]->pos).z +
                        ((this->players[(int)local_38]->pos).x - 36.0) *
                        ((this->players[(int)local_38]->pos).x - 36.0)) {
              if ((this->b3a6 &
                  (this->players[(int)local_38]->pos).z * (this->players[(int)local_38]->pos).z +
                  ((this->players[(int)local_38]->pos).x + 34.0) *
                  ((this->players[(int)local_38]->pos).x + 34.0) < 30.0) == 0) {
                if (this->b3a6 != '\0' ||
                    30.0 <= (this->players[(int)local_38]->pos).z *
                            (this->players[(int)local_38]->pos).z +
                            ((this->players[(int)local_38]->pos).x - 34.0) *
                            ((this->players[(int)local_38]->pos).x - 34.0)) {
                  if (this->b3a6 == '\0') {
                    if ((this->players[(int)local_30]->pos).x -
                        (this->players[(int)local_38]->pos).x <= 15.0 ||
                        (((this->players[(int)local_38]->pos).x <
                          (this->players[(int)local_8]->pos).x &&
                          (this->players[(int)local_8]->pos).x <
                          (this->players[(int)local_30]->pos).x ||
                         (this->players[(int)local_38]->pos).x <
                         (this->players[(int)local_18]->pos).x &&
                         (this->players[(int)local_18]->pos).x <
                         (this->players[(int)local_30]->pos).x) ||
                        (this->players[(int)local_38]->pos).x <
                        (this->players[(int)local_14]->pos).x &&
                        (this->players[(int)local_14]->pos).x <
                        (this->players[(int)local_30]->pos).x)) {
                      local_54 = sqrtf((float)this->players[(int)local_38]);
                      local_50 = ((local_54 - 2.0) * 0.53 - 1.0) /
                                 this->players[(int)local_38]->stat17c;
                      if (1.0 <= local_50 ||
                          25.0 <= ((this->players[(int)local_38]->pos).z -
                                  (this->players[(int)local_8]->pos).z) *
                                  ((this->players[(int)local_38]->pos).z -
                                  (this->players[(int)local_8]->pos).z) +
                                  ((this->players[(int)local_38]->pos).x -
                                  (this->players[(int)local_8]->pos).x) *
                                  ((this->players[(int)local_38]->pos).x -
                                  (this->players[(int)local_8]->pos).x)) {
                        fVar8 = 10.0;
                        fVar7 = this->players[(int)local_38]->yaw;
                        fVar6 = Atan2((this->players[(int)local_38]->pos).x - 30.0,
                                      (this->players[(int)local_38]->pos).z);
                        fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
                        this->players[(int)local_38]->yaw = (float)fVar4;
                        pfVar3 = thunk_FUN_00419ae5(this,local_594,(int)local_38);
                        pPVar1 = this->players[(int)local_38];
                        (pPVar1->pos).x = *pfVar3;
                        (pPVar1->pos).y = pfVar3[1];
                        (pPVar1->pos).z = pfVar3[2];
                        Player::Motion_42f1a9(this->players[(int)local_38]);
                      }
                      else {
                        Sound::Play(this->sound,1);
                        this->players[(int)local_38]->f198 = 0.0;
                        this->players[(int)local_38]->i190 = 0xb;
                        Player::Motion_430701(this->players[(int)local_38]);
                        fVar7 = Atan2((this->players[(int)local_38]->pos).x - 35.0,
                                      (this->players[(int)local_38]->pos).z);
                        this->players[(int)local_38]->yaw = fVar7;
                        this->f260 = this->players[(int)local_38]->yaw - 3.14;
                        this->f25c = 23.0;
                        this->f258 = local_50 * this->players[(int)local_38]->stat17c + 1.0;
                        fVar7 = sinf((float)this->players[(int)local_38]);
                        (this->v24c).x = -fVar7 * -2.0 + (this->players[(int)local_38]->pos).x;
                        fVar7 = cosf((float)this);
                        (this->v24c).z = fVar7 * -2.0 + (this->players[(int)local_38]->pos).z;
                        this->i404 = (int)local_38;
                        this->i268 = -1;
                        if (15.0 <= local_54) {
                          this->b3a8 = '\x01';
                        }
                        else {
                          this->b3a8 = '\0';
                        }
                      }
                    }
                    else {
                      Sound::Play(this->sound,1);
                      this->players[(int)local_38]->f198 = 0.0;
                      fVar7 = Atan2((this->players[(int)local_38]->pos).x -
                                    (this->players[(int)local_30]->pos).x,
                                    (this->players[(int)local_38]->pos).z -
                                    (this->players[(int)local_30]->pos).z);
                      this->players[(int)local_38]->yaw = fVar7;
                      this->players[(int)local_38]->i190 = 10;
                      Player::Motion_4305b1(this->players[(int)local_38]);
                      this->f260 = this->players[(int)local_38]->yaw - 3.14;
                      this->f25c = this->players[(int)local_38]->stat174;
                      this->f258 = this->players[(int)local_38]->stat178;
                      fVar7 = sinf(local_38);
                      (this->v24c).x = -fVar7 * -2.0 + (this->players[(int)local_38]->pos).x;
                      (this->v24c).y = this->players[(int)local_38]->stat170 * 0.9;
                      fVar7 = cosf((float)this);
                      (this->v24c).z = fVar7 * -2.0 + (this->players[(int)local_38]->pos).z;
                      this->i404 = (int)local_38;
                      this->i268 = -1;
                    }
                  }
                  else if (-15.0 <= (this->players[(int)local_30]->pos).x -
                                    (this->players[(int)local_38]->pos).x ||
                           (((this->players[(int)local_8]->pos).x <
                             (this->players[(int)local_38]->pos).x &&
                             (this->players[(int)local_30]->pos).x <
                             (this->players[(int)local_8]->pos).x ||
                            (this->players[(int)local_18]->pos).x <
                            (this->players[(int)local_38]->pos).x &&
                            (this->players[(int)local_30]->pos).x <
                            (this->players[(int)local_18]->pos).x) ||
                           (this->players[(int)local_14]->pos).x <
                           (this->players[(int)local_38]->pos).x &&
                           (this->players[(int)local_30]->pos).x <
                           (this->players[(int)local_14]->pos).x)) {
                    local_4c = sqrtf((float)this->players[(int)local_38]);
                    local_48 = ((local_4c - 2.0) * 0.53 - 1.0) /
                               this->players[(int)local_38]->stat17c;
                    if (1.0 <= local_48 ||
                        25.0 <= ((this->players[(int)local_38]->pos).z -
                                (this->players[(int)local_8]->pos).z) *
                                ((this->players[(int)local_38]->pos).z -
                                (this->players[(int)local_8]->pos).z) +
                                ((this->players[(int)local_38]->pos).x -
                                (this->players[(int)local_8]->pos).x) *
                                ((this->players[(int)local_38]->pos).x -
                                (this->players[(int)local_8]->pos).x)) {
                      fVar8 = 10.0;
                      fVar7 = this->players[(int)local_38]->yaw;
                      fVar6 = Atan2((this->players[(int)local_38]->pos).x + 30.0,
                                    (this->players[(int)local_38]->pos).z);
                      fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
                      this->players[(int)local_38]->yaw = (float)fVar4;
                      pfVar3 = thunk_FUN_00419ae5(this,local_588,(int)local_38);
                      pPVar1 = this->players[(int)local_38];
                      (pPVar1->pos).x = *pfVar3;
                      (pPVar1->pos).y = pfVar3[1];
                      (pPVar1->pos).z = pfVar3[2];
                      Player::Motion_42f1a9(this->players[(int)local_38]);
                    }
                    else {
                      Sound::Play(this->sound,1);
                      this->players[(int)local_38]->f198 = 0.0;
                      this->players[(int)local_38]->i190 = 0xb;
                      Player::Motion_430701(this->players[(int)local_38]);
                      fVar7 = Atan2((this->players[(int)local_38]->pos).x + 35.0,
                                    (this->players[(int)local_38]->pos).z);
                      this->players[(int)local_38]->yaw = fVar7;
                      this->f260 = this->players[(int)local_38]->yaw - 3.14;
                      this->f25c = 23.0;
                      this->f258 = local_48 * this->players[(int)local_38]->stat17c + 1.0;
                      fVar7 = sinf((float)this);
                      (this->v24c).x = -fVar7 * -2.0 + (this->players[(int)local_38]->pos).x;
                      fVar7 = cosf(local_38);
                      (this->v24c).z = fVar7 * -2.0 + (this->players[(int)local_38]->pos).z;
                      this->i404 = (int)local_38;
                      this->i268 = -1;
                      if (15.0 <= local_4c) {
                        this->b3a8 = '\x01';
                      }
                      else {
                        this->b3a8 = '\0';
                      }
                    }
                  }
                  else {
                    Sound::Play(this->sound,1);
                    this->players[(int)local_38]->f198 = 0.0;
                    fVar7 = Atan2((this->players[(int)local_38]->pos).x -
                                  (this->players[(int)local_30]->pos).x,
                                  (this->players[(int)local_38]->pos).z -
                                  (this->players[(int)local_30]->pos).z);
                    this->players[(int)local_38]->yaw = fVar7;
                    this->players[(int)local_38]->i190 = 10;
                    Player::Motion_4305b1(this->players[(int)local_38]);
                    this->f260 = this->players[(int)local_38]->yaw - 3.14;
                    this->f25c = this->players[(int)local_38]->stat174;
                    this->f258 = this->players[(int)local_38]->stat178;
                    fVar7 = sinf((float)this->players[(int)local_38]);
                    (this->v24c).x = -fVar7 * -2.0 + (this->players[(int)local_38]->pos).x;
                    (this->v24c).y = this->players[(int)local_38]->stat170 * 0.9;
                    fVar7 = cosf(local_38);
                    (this->v24c).z = fVar7 * -2.0 + (this->players[(int)local_38]->pos).z;
                    this->i404 = (int)local_38;
                    this->i268 = -1;
                  }
                }
                else {
                  fVar7 = Atan2((this->players[(int)local_38]->pos).x - 37.0,
                                (this->players[(int)local_38]->pos).z);
                  this->players[(int)local_38]->yaw = fVar7;
                  Sound::Play(this->sound,1);
                  this->players[(int)local_38]->i190 = 6;
                  Player::Motion_430a58(this->players[(int)local_38]);
                  this->players[(int)local_38]->f198 = 0.0;
                  this->players[(int)local_38]->f18c = 12.0;
                }
              }
              else {
                fVar7 = Atan2((this->players[(int)local_38]->pos).x + 37.0,
                              (this->players[(int)local_38]->pos).z);
                this->players[(int)local_38]->yaw = fVar7;
                Sound::Play(this->sound,1);
                this->players[(int)local_38]->i190 = 6;
                Player::Motion_430a58(this->players[(int)local_38]);
                this->players[(int)local_38]->f198 = 0.0;
                this->players[(int)local_38]->f18c = 12.0;
              }
            }
            else {
              fVar6 = 5.0 / this->f400;
              fVar7 = this->players[(int)local_38]->yaw;
              fVar8 = Atan2((this->players[(int)local_38]->pos).x + 30.0,
                            (this->players[(int)local_38]->pos).z);
              fVar4 = thunk_FUN_004199d4((int)this,fVar8,fVar7,fVar6);
              this->players[(int)local_38]->yaw = (float)fVar4;
              pfVar3 = thunk_FUN_00419ae5(this,local_57c,(int)local_38);
              pPVar1 = this->players[(int)local_38];
              (pPVar1->pos).x = *pfVar3;
              (pPVar1->pos).y = pfVar3[1];
              (pPVar1->pos).z = pfVar3[2];
              Player::Motion_42f1a9(this->players[(int)local_38]);
            }
          }
          else {
            fVar6 = 5.0 / this->f400;
            fVar7 = this->players[(int)local_38]->yaw;
            fVar8 = Atan2((this->players[(int)local_38]->pos).x - 30.0,
                          (this->players[(int)local_38]->pos).z);
            fVar4 = thunk_FUN_004199d4((int)this,fVar8,fVar7,fVar6);
            this->players[(int)local_38]->yaw = (float)fVar4;
            pfVar3 = thunk_FUN_00419ae5(this,local_570,(int)local_38);
            pPVar1 = this->players[(int)local_38];
            (pPVar1->pos).x = *pfVar3;
            (pPVar1->pos).y = pfVar3[1];
            (pPVar1->pos).z = pfVar3[2];
            Player::Motion_42f1a9(this->players[(int)local_38]);
          }
        }
      }
      else {
        if ((this->players[(int)local_38]->pos).z <= 19.0) {
          if (-19.0 <= (this->players[(int)local_38]->pos).z) {
            if (-35.0 <= (this->players[(int)local_38]->pos).x) {
              if ((this->players[(int)local_38]->pos).x <= 35.0) {
                if ((this->i3b0 != 0 || this->players[(int)local_8]->i190 != 3) &&
                    this->players[(int)local_8]->i190 != 4 || 10.0 <= local_34) {
                  if (this->players[this->i404]->b154 == '\0') {
                    fVar8 = 10.0;
                    fVar7 = this->players[(int)local_38]->yaw;
                    fVar6 = Atan2((this->players[(int)local_38]->pos).x - (this->v24c).x,
                                  (this->players[(int)local_38]->pos).z - (this->v24c).z);
                    fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
                    this->players[(int)local_38]->yaw = (float)fVar4;
                  }
                  else {
                    fVar6 = 5.0 / this->f400;
                    fVar7 = this->players[(int)local_38]->yaw;
                    fVar8 = Atan2((this->players[(int)local_38]->pos).x - (this->v24c).x,
                                  (this->players[(int)local_38]->pos).z - (this->v24c).z);
                    fVar4 = thunk_FUN_004199d4((int)this,fVar8,fVar7,fVar6);
                    this->players[(int)local_38]->yaw = (float)fVar4;
                  }
                }
                else {
                  this->players[(int)local_38]->yaw =
                       this->dt * 2.0 + this->players[(int)local_38]->yaw;
                }
              }
              else {
                fVar4 = thunk_FUN_004199d4((int)this,1.57,this->players[(int)local_38]->yaw,5.0);
                this->players[(int)local_38]->yaw = (float)fVar4;
                pfVar3 = thunk_FUN_00419ae5(this,local_558,(int)local_38);
                pPVar1 = this->players[(int)local_38];
                (pPVar1->pos).x = *pfVar3;
                (pPVar1->pos).y = pfVar3[1];
                (pPVar1->pos).z = pfVar3[2];
                Player::Motion_42dfc0(this->players[(int)local_38]);
              }
            }
            else {
              fVar4 = thunk_FUN_004199d4((int)this,-1.57,this->players[(int)local_38]->yaw,5.0);
              this->players[(int)local_38]->yaw = (float)fVar4;
              pfVar3 = thunk_FUN_00419ae5(this,local_54c,(int)local_38);
              pPVar1 = this->players[(int)local_38];
              (pPVar1->pos).x = *pfVar3;
              (pPVar1->pos).y = pfVar3[1];
              (pPVar1->pos).z = pfVar3[2];
              Player::Motion_42dfc0(this->players[(int)local_38]);
            }
          }
          else {
            fVar4 = thunk_FUN_004199d4((int)this,3.14,this->players[(int)local_38]->yaw,5.0);
            this->players[(int)local_38]->yaw = (float)fVar4;
            pfVar3 = thunk_FUN_00419ae5(this,local_540,(int)local_38);
            pPVar1 = this->players[(int)local_38];
            (pPVar1->pos).x = *pfVar3;
            (pPVar1->pos).y = pfVar3[1];
            (pPVar1->pos).z = pfVar3[2];
            Player::Motion_42dfc0(this->players[(int)local_38]);
          }
        }
        else {
          fVar4 = thunk_FUN_004199d4((int)this,0.0,this->players[(int)local_38]->yaw,5.0);
          this->players[(int)local_38]->yaw = (float)fVar4;
          pfVar3 = thunk_FUN_00419ae5(this,local_534,(int)local_38);
          pPVar1 = this->players[(int)local_38];
          (pPVar1->pos).x = *pfVar3;
          (pPVar1->pos).y = pfVar3[1];
          (pPVar1->pos).z = pfVar3[2];
          Player::Motion_42dfc0(this->players[(int)local_38]);
        }
        pfVar3 = thunk_FUN_00419ae5(this,local_564,(int)local_38);
        pPVar1 = this->players[(int)local_38];
        (pPVar1->pos).x = *pfVar3;
        (pPVar1->pos).y = pfVar3[1];
        (pPVar1->pos).z = pfVar3[2];
        Player::Motion_42dfc0(this->players[(int)local_38]);
      }
      if (6 < this->players[(int)local_30]->i190 && this->players[(int)local_30]->i190 < 10) {
        if ((this->players[(int)local_30]->pos).z <= 18.0) {
          if (-18.0 <= (this->players[(int)local_30]->pos).z) {
            if (-35.0 <= (this->players[(int)local_30]->pos).x) {
              if ((this->players[(int)local_30]->pos).x <= 35.0) {
                if ((float)this->i268 == local_38) {
                  if (this->b3a6 == '\0') {
                    if ((this->players[(int)local_30]->pos).x <= 25.0) {
                      if (this->b3a6 != '\0' ||
                          8.0 <= (this->players[(int)local_30]->pos).x -
                                 (this->players[(int)local_38]->pos).x) {
                        fVar8 = 5.0;
                        fVar7 = this->players[(int)local_30]->yaw;
                        fVar6 = Atan2((this->players[(int)local_30]->pos).x - 28.0,
                                      (this->players[(int)local_30]->pos).z);
                        fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
                        this->players[(int)local_30]->yaw = (float)fVar4;
                        pfVar3 = thunk_FUN_00419ae5(this,local_60c,(int)local_30);
                        pPVar1 = this->players[(int)local_30];
                        (pPVar1->pos).x = *pfVar3;
                        (pPVar1->pos).y = pfVar3[1];
                        (pPVar1->pos).z = pfVar3[2];
                        Player::Motion_42dfc0(this->players[(int)local_30]);
                      }
                      else {
                        fVar4 = thunk_FUN_004199d4((int)this,-1.57,this->players[(int)local_30]->yaw
                                                   ,5.0);
                        this->players[(int)local_30]->yaw = (float)fVar4;
                        pfVar3 = thunk_FUN_00419ae5(this,local_600,(int)local_30);
                        pPVar1 = this->players[(int)local_30];
                        (pPVar1->pos).x = *pfVar3;
                        (pPVar1->pos).y = pfVar3[1];
                        (pPVar1->pos).z = pfVar3[2];
                        Player::Motion_42dfc0(this->players[(int)local_30]);
                      }
                    }
                    else if ((this->players[(int)local_38]->pos).x <= 18.0) {
                      fVar8 = 5.0;
                      fVar7 = this->players[(int)local_30]->yaw;
                      fVar6 = Atan2((this->players[(int)local_30]->pos).x - (this->v24c).x,
                                    (this->players[(int)local_30]->pos).z - (this->v24c).z);
                      fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
                      this->players[(int)local_30]->yaw = (float)fVar4;
                      Player::Motion_42df38(this->players[(int)local_30]);
                    }
                    else {
                      fVar8 = 5.0;
                      fVar7 = this->players[(int)local_30]->yaw;
                      fVar6 = Atan2((this->players[(int)local_30]->pos).x - 30.0,
                                    (this->players[(int)local_30]->pos).z - 15.0);
                      fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
                      this->players[(int)local_30]->yaw = (float)fVar4;
                      pfVar3 = thunk_FUN_00419ae5(this,local_5f4,(int)local_30);
                      pPVar1 = this->players[(int)local_30];
                      (pPVar1->pos).x = *pfVar3;
                      (pPVar1->pos).y = pfVar3[1];
                      (pPVar1->pos).z = pfVar3[2];
                      Player::Motion_42dfc0(this->players[(int)local_30]);
                    }
                  }
                  else if (-25.0 <= (this->players[(int)local_30]->pos).x) {
                    if ((this->players[(int)local_30]->pos).x -
                        (this->players[(int)local_38]->pos).x <= -8.0) {
                      fVar8 = 5.0;
                      fVar7 = this->players[(int)local_30]->yaw;
                      fVar6 = Atan2((this->players[(int)local_30]->pos).x + 28.0,
                                    (this->players[(int)local_30]->pos).z);
                      fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
                      this->players[(int)local_30]->yaw = (float)fVar4;
                      pfVar3 = thunk_FUN_00419ae5(this,local_5e8,(int)local_30);
                      pPVar1 = this->players[(int)local_30];
                      (pPVar1->pos).x = *pfVar3;
                      (pPVar1->pos).y = pfVar3[1];
                      (pPVar1->pos).z = pfVar3[2];
                      Player::Motion_42dfc0(this->players[(int)local_30]);
                    }
                    else {
                      fVar4 = thunk_FUN_004199d4((int)this,1.57,this->players[(int)local_30]->yaw,
                                                 5.0);
                      this->players[(int)local_30]->yaw = (float)fVar4;
                      pfVar3 = thunk_FUN_00419ae5(this,local_5dc,(int)local_30);
                      pPVar1 = this->players[(int)local_30];
                      (pPVar1->pos).x = *pfVar3;
                      (pPVar1->pos).y = pfVar3[1];
                      (pPVar1->pos).z = pfVar3[2];
                      Player::Motion_42dfc0(this->players[(int)local_30]);
                    }
                  }
                  else if (-18.0 <= (this->players[(int)local_38]->pos).x) {
                    fVar8 = 5.0;
                    fVar7 = this->players[(int)local_30]->yaw;
                    fVar6 = Atan2((this->players[(int)local_30]->pos).x - (this->v24c).x,
                                  (this->players[(int)local_30]->pos).z - (this->v24c).z);
                    fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
                    this->players[(int)local_30]->yaw = (float)fVar4;
                    Player::Motion_42df38(this->players[(int)local_30]);
                  }
                  else {
                    fVar8 = 5.0;
                    fVar7 = this->players[(int)local_30]->yaw;
                    fVar6 = Atan2((this->players[(int)local_30]->pos).x + 30.0,
                                  (this->players[(int)local_30]->pos).z - 15.0);
                    fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
                    this->players[(int)local_30]->yaw = (float)fVar4;
                    pfVar3 = thunk_FUN_00419ae5(this,local_5d0,(int)local_30);
                    pPVar1 = this->players[(int)local_30];
                    (pPVar1->pos).x = *pfVar3;
                    (pPVar1->pos).y = pfVar3[1];
                    (pPVar1->pos).z = pfVar3[2];
                    Player::Motion_42dfc0(this->players[(int)local_30]);
                  }
                }
                else {
                  fVar6 = 5.0 / this->f400;
                  fVar7 = this->players[(int)local_30]->yaw;
                  fVar8 = Atan2((this->players[(int)local_30]->pos).x -
                                ((this->players[(int)local_14]->pos).x + (this->v24c).x) / 2.0,
                                (this->players[(int)local_30]->pos).z -
                                ((this->players[(int)local_14]->pos).z + (this->v24c).z) / 2.0);
                  fVar4 = thunk_FUN_004199d4((int)this,fVar8,fVar7,fVar6);
                  this->players[(int)local_30]->yaw = (float)fVar4;
                  pfVar3 = thunk_FUN_00419ae5(this,local_618,(int)local_30);
                  pPVar1 = this->players[(int)local_30];
                  (pPVar1->pos).x = *pfVar3;
                  (pPVar1->pos).y = pfVar3[1];
                  (pPVar1->pos).z = pfVar3[2];
                  Player::Motion_42dfc0(this->players[(int)local_30]);
                }
              }
              else {
                fVar4 = thunk_FUN_004199d4((int)this,1.57,this->players[(int)local_30]->yaw,5.0);
                this->players[(int)local_30]->yaw = (float)fVar4;
                pfVar3 = thunk_FUN_00419ae5(this,local_5c4,(int)local_30);
                pPVar1 = this->players[(int)local_30];
                (pPVar1->pos).x = *pfVar3;
                (pPVar1->pos).y = pfVar3[1];
                (pPVar1->pos).z = pfVar3[2];
                Player::Motion_42dfc0(this->players[(int)local_30]);
              }
            }
            else {
              fVar4 = thunk_FUN_004199d4((int)this,-1.57,this->players[(int)local_30]->yaw,5.0);
              this->players[(int)local_30]->yaw = (float)fVar4;
              pfVar3 = thunk_FUN_00419ae5(this,local_5b8,(int)local_30);
              pPVar1 = this->players[(int)local_30];
              (pPVar1->pos).x = *pfVar3;
              (pPVar1->pos).y = pfVar3[1];
              (pPVar1->pos).z = pfVar3[2];
              Player::Motion_42dfc0(this->players[(int)local_30]);
            }
          }
          else {
            fVar4 = thunk_FUN_004199d4((int)this,3.14,this->players[(int)local_30]->yaw,5.0);
            this->players[(int)local_30]->yaw = (float)fVar4;
            pfVar3 = thunk_FUN_00419ae5(this,local_5ac,(int)local_30);
            pPVar1 = this->players[(int)local_30];
            (pPVar1->pos).x = *pfVar3;
            (pPVar1->pos).y = pfVar3[1];
            (pPVar1->pos).z = pfVar3[2];
            Player::Motion_42dfc0(this->players[(int)local_30]);
          }
        }
        else {
          fVar4 = thunk_FUN_004199d4((int)this,0.0,this->players[(int)local_30]->yaw,5.0);
          this->players[(int)local_30]->yaw = (float)fVar4;
          pfVar3 = thunk_FUN_00419ae5(this,local_5a0,(int)local_30);
          pPVar1 = this->players[(int)local_30];
          (pPVar1->pos).x = *pfVar3;
          (pPVar1->pos).y = pfVar3[1];
          (pPVar1->pos).z = pfVar3[2];
          Player::Motion_42dfc0(this->players[(int)local_30]);
        }
      }
      if (6 < this->players[(int)local_2c]->i190 && this->players[(int)local_2c]->i190 < 10) {
        if ((this->players[(int)local_2c]->pos).z <= 18.0) {
          if (-18.0 <= (this->players[(int)local_2c]->pos).z) {
            if (-35.0 <= (this->players[(int)local_2c]->pos).x) {
              if ((this->players[(int)local_2c]->pos).x <= 35.0) {
                if ((float)this->i268 == local_8) {
                  if (this->b3a6 == '\0') {
                    if (2.0 <= (this->players[(int)local_18]->pos).x -
                               (this->players[(int)local_2c]->pos).x) {
                      fVar8 = 5.0;
                      fVar7 = this->players[(int)local_2c]->yaw;
                      fVar6 = Atan2((this->players[(int)local_2c]->pos).x - (this->v24c).x,
                                    (this->players[(int)local_2c]->pos).z - (this->v24c).z);
                      fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
                      this->players[(int)local_2c]->yaw = (float)fVar4;
                      Player::Motion_42df38(this->players[(int)local_2c]);
                    }
                    else {
                      fVar8 = 5.0;
                      fVar7 = this->players[(int)local_2c]->yaw;
                      fVar6 = Atan2((this->players[(int)local_2c]->pos).x -
                                    ((this->players[(int)local_18]->pos).x - 2.0),
                                    (this->players[(int)local_2c]->pos).z);
                      fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
                      this->players[(int)local_2c]->yaw = (float)fVar4;
                      pfVar3 = thunk_FUN_00419ae5(this,local_660,(int)local_2c);
                      pPVar1 = this->players[(int)local_2c];
                      (pPVar1->pos).x = *pfVar3;
                      (pPVar1->pos).y = pfVar3[1];
                      (pPVar1->pos).z = pfVar3[2];
                      Player::Motion_42dfc0(this->players[(int)local_2c]);
                    }
                  }
                  else if ((this->players[(int)local_18]->pos).x -
                           (this->players[(int)local_2c]->pos).x <= -2.0) {
                    fVar8 = 5.0;
                    fVar7 = this->players[(int)local_2c]->yaw;
                    fVar6 = Atan2((this->players[(int)local_2c]->pos).x - (this->v24c).x,
                                  (this->players[(int)local_2c]->pos).z - (this->v24c).z);
                    fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
                    this->players[(int)local_2c]->yaw = (float)fVar4;
                    Player::Motion_42df38(this->players[(int)local_2c]);
                  }
                  else {
                    fVar8 = 5.0;
                    fVar7 = this->players[(int)local_2c]->yaw;
                    fVar6 = Atan2((this->players[(int)local_2c]->pos).x -
                                  ((this->players[(int)local_18]->pos).x + 2.0),
                                  (this->players[(int)local_2c]->pos).z);
                    fVar4 = thunk_FUN_004199d4((int)this,fVar6,fVar7,fVar8);
                    this->players[(int)local_2c]->yaw = (float)fVar4;
                    pfVar3 = thunk_FUN_00419ae5(this,local_654,(int)local_2c);
                    pPVar1 = this->players[(int)local_2c];
                    (pPVar1->pos).x = *pfVar3;
                    (pPVar1->pos).y = pfVar3[1];
                    (pPVar1->pos).z = pfVar3[2];
                    Player::Motion_42dfc0(this->players[(int)local_2c]);
                  }
                }
                else {
                  fVar6 = 5.0 / this->f400;
                  fVar7 = this->players[(int)local_2c]->yaw;
                  fVar8 = Atan2((this->players[(int)local_2c]->pos).x -
                                ((this->players[(int)local_18]->pos).x + (this->v24c).x) / 2.0,
                                (this->players[(int)local_2c]->pos).z -
                                ((this->players[(int)local_18]->pos).z + (this->v24c).z) / 2.0);
                  fVar4 = thunk_FUN_004199d4((int)this,fVar8,fVar7,fVar6);
                  this->players[(int)local_2c]->yaw = (float)fVar4;
                  pfVar3 = thunk_FUN_00419ae5(this,local_66c,(int)local_2c);
                  pPVar1 = this->players[(int)local_2c];
                  (pPVar1->pos).x = *pfVar3;
                  (pPVar1->pos).y = pfVar3[1];
                  (pPVar1->pos).z = pfVar3[2];
                  Player::Motion_42dfc0(this->players[(int)local_2c]);
                }
              }
              else {
                fVar4 = thunk_FUN_004199d4((int)this,1.57,this->players[(int)local_2c]->yaw,5.0);
                this->players[(int)local_2c]->yaw = (float)fVar4;
                pfVar3 = thunk_FUN_00419ae5(this,local_648,(int)local_2c);
                pPVar1 = this->players[(int)local_2c];
                (pPVar1->pos).x = *pfVar3;
                (pPVar1->pos).y = pfVar3[1];
                (pPVar1->pos).z = pfVar3[2];
                Player::Motion_42dfc0(this->players[(int)local_2c]);
              }
            }
            else {
              fVar4 = thunk_FUN_004199d4((int)this,-1.57,this->players[(int)local_2c]->yaw,5.0);
              this->players[(int)local_2c]->yaw = (float)fVar4;
              pfVar3 = thunk_FUN_00419ae5(this,local_63c,(int)local_2c);
              pPVar1 = this->players[(int)local_2c];
              (pPVar1->pos).x = *pfVar3;
              (pPVar1->pos).y = pfVar3[1];
              (pPVar1->pos).z = pfVar3[2];
              Player::Motion_42dfc0(this->players[(int)local_2c]);
            }
          }
          else {
            fVar4 = thunk_FUN_004199d4((int)this,3.14,this->players[(int)local_2c]->yaw,5.0);
            this->players[(int)local_2c]->yaw = (float)fVar4;
            pfVar3 = thunk_FUN_00419ae5(this,local_630,(int)local_2c);
            pPVar1 = this->players[(int)local_2c];
            (pPVar1->pos).x = *pfVar3;
            (pPVar1->pos).y = pfVar3[1];
            (pPVar1->pos).z = pfVar3[2];
            Player::Motion_42dfc0(this->players[(int)local_2c]);
          }
        }
        else {
          fVar4 = thunk_FUN_004199d4((int)this,0.0,this->players[(int)local_2c]->yaw,5.0);
          this->players[(int)local_2c]->yaw = (float)fVar4;
          pfVar3 = thunk_FUN_00419ae5(this,local_624,(int)local_2c);
          pPVar1 = this->players[(int)local_2c];
          (pPVar1->pos).x = *pfVar3;
          (pPVar1->pos).y = pfVar3[1];
          (pPVar1->pos).z = pfVar3[2];
          Player::Motion_42dfc0(this->players[(int)local_2c]);
        }
      }
    }
    for (local_20 = 0.0; (int)local_20 < 6; local_20 = (float)((int)local_20 + 1)) {
      if (local_20 == (float)this->i268) {
        for (local_58 = 0; local_58 < 6; local_58 = local_58 + 1) {
          if (this->players[local_58]->i190 == 0xf) {
            this->players[local_58]->i190 = 7;
          }
        }
        if (this->players[(int)local_20]->i190 == 6) {
          this->i3b8 = 1;
          this->players[(int)local_20]->f198 = this->players[(int)local_20]->f198 + this->dt;
          this->players[(int)local_20]->f18c = this->players[(int)local_20]->f18c - this->dt * 20.0;
          if (0.8 <= this->players[(int)local_20]->f198) {
            this->players[(int)local_20]->i190 = 0xf;
            this->players[(int)local_20]->f198 = 0.0;
            (this->players[(int)local_20]->pos).y = 0.0;
            Player::Motion_42df38(this->players[(int)local_20]);
            Sound::Play(this->sound,2);
            this->f260 = this->players[(int)local_20]->yaw - 3.14;
            this->f25c = 14.0;
            this->f258 = 2.0;
            (this->v24c).y = 8.43;
            this->b3a8 = '\0';
            this->i404 = (int)local_20;
            this->i268 = -1;
          }
          else {
            pPVar1 = this->players[(int)local_20];
            fVar7 = sinf((float)this);
            (this->players[(int)local_20]->pos).x =
                 (pPVar1->pos).x - fVar7 * this->players[(int)local_20]->stat168 * 0.6 * this->dt;
            (this->players[(int)local_20]->pos).y =
                 this->players[(int)local_20]->f18c * this->dt +
                 (this->players[(int)local_20]->pos).y;
            pPVar1 = this->players[(int)local_20];
            fVar7 = cosf((float)this);
            (this->players[(int)local_20]->pos).z =
                 (pPVar1->pos).z - fVar7 * this->players[(int)local_20]->stat168 * 0.6 * this->dt;
          }
        }
      }
      else if (this->players[(int)local_20]->i190 == 0xc) {
        this->players[(int)local_20]->f198 = this->players[(int)local_20]->f198 + this->dt;
        if (0.8 < this->players[(int)local_20]->f198) {
          this->players[(int)local_20]->i190 = 7;
          this->players[(int)local_20]->f198 = 0.0;
          Player::Motion_42df38(this->players[(int)local_20]);
        }
      }
      else if (this->players[(int)local_20]->i190 == 10) {
        this->players[(int)local_20]->f198 = this->players[(int)local_20]->f198 + this->dt;
        if (0.8 < this->players[(int)local_20]->f198) {
          this->players[(int)local_20]->i190 = 0xf;
          this->players[(int)local_20]->f198 = 0.0;
          Player::Motion_42df38(this->players[(int)local_20]);
        }
      }
      else if (this->players[(int)local_20]->i190 == 0xb) {
        this->players[(int)local_20]->f198 = this->players[(int)local_20]->f198 + this->dt;
        if (0.8 < this->players[(int)local_20]->f198) {
          this->players[(int)local_20]->i190 = 0xf;
          this->players[(int)local_20]->f198 = 0.0;
          Player::Motion_42df38(this->players[(int)local_20]);
          this->i3b8 = 1;
        }
      }
      else if (this->players[(int)local_20]->i190 == 6) {
        this->players[(int)local_20]->i190 = 0xf;
      }
    }
    if (((((((this->b414 == '\0' && local_1c < 8.0) && 6 < this->players[(int)local_8]->i190) &&
           this->players[(int)local_8]->i190 < 10) && (this->v24c).y < 5.0) &&
         this->players[(int)local_38]->i190 != 3) && this->players[(int)local_38]->i190 != 4) &&
        this->players[(int)local_38]->i190 != 6) {
      if (-1 < this->i268) {
        this->players[this->i268]->f198 = 0.0;
        this->players[this->i268]->i190 = 0xc;
        Player::Motion_43030b(this->players[this->i268]);
      }
      this->i268 = (int)local_8;
      this->i404 = (int)local_8;
      this->players[(int)local_8]->i190 = 0;
    }
    if (((((((this->b414 == '\0' && local_34 < 8.0) && 6 < this->players[(int)local_38]->i190) &&
           this->players[(int)local_38]->i190 < 10) && (this->v24c).y < 5.0) &&
         this->players[(int)local_8]->i190 != 3) && this->players[(int)local_8]->i190 != 4) &&
        this->players[(int)local_8]->i190 != 6) {
      if (-1 < this->i268) {
        this->players[this->i268]->f198 = 0.0;
        this->players[this->i268]->i190 = 0xc;
        Player::Motion_43030b(this->players[this->i268]);
      }
      this->i268 = (int)local_38;
      this->i404 = (int)local_38;
      this->players[(int)local_38]->i190 = 0;
      Player::Motion_42ee86(this->players[(int)local_38]);
    }
    if (-1 < this->i268) {
      local_5c = -1.5;
      local_60 = -1.0;
      if (this->players[this->i268]->i190 == 3 || this->players[this->i268]->i190 == 4) {
        local_5c = 0.0;
        local_60 = -0.8;
      }
      else if (this->players[this->i268]->i190 == 6) {
        local_5c = -0.9;
        local_60 = 0.4;
      }
      else if (this->i268 == 0) {
        local_5c = -1.7;
        local_60 = -1.2;
      }
      else if (this->i268 == 3 || this->i268 == 4) {
        local_5c = -1.3;
        local_60 = -0.8;
      }
      fVar7 = cosf((float)this);
      fVar7 = fVar7 * local_5c;
      fVar6 = sinf((float)this->i268);
      (this->v24c).x = (fVar7 - fVar6 * local_60) + (this->players[this->i268]->pos).x;
      fVar7 = sinf((float)this->i268);
      fVar7 = fVar7 * local_5c;
      fVar6 = cosf((float)this->players[this->i268]);
      (this->v24c).z = fVar6 * local_60 + fVar7 + (this->players[this->i268]->pos).z;
      if (this->players[this->i268]->i190 == 3) {
        (this->v24c).y = 3.5;
      }
      else if (this->players[this->i268]->i190 == 4) {
        (this->v24c).y = this->players[this->i268]->stat170 * 0.9;
      }
      else if (this->players[this->i268]->i190 == 6) {
        (this->v24c).y = (this->players[this->i268]->pos).y + this->players[this->i268]->stat180;
      }
      else {
        if ((this->players[this->i268]->keyChanged &
            (this->players[this->i268]->curKey == 0 || this->players[this->i268]->curKey == 2)) != 0
           ) {
          Sound::Play(this->sound,3);
        }
        if (this->players[this->i268]->curKey == 0 || this->players[this->i268]->curKey == 2) {
          (this->v24c).y = this->dt * 40.0 + (this->v24c).y;
          if (this->players[this->i268]->i190 == 1) {
            if (this->players[this->i268]->stat170 * 0.85 < (this->v24c).y) {
              (this->v24c).y = this->players[this->i268]->stat170 * 0.85;
            }
          }
          else if (this->players[this->i268]->stat170 < (this->v24c).y) {
            (this->v24c).y = this->players[this->i268]->stat170;
          }
        }
        else {
          (this->v24c).y = (this->v24c).y - this->dt * 20.0;
          if ((this->v24c).y < 0.7) {
            (this->v24c).y = 0.7;
          }
        }
      }
    }
    if ((this->i3b8 == 1 && (this->v24c).y < 8.0) && this->f25c < 0.0) {
      this->i3b8 = 0;
    }
    if (this->i3b8 == 2) {
      pPVar1 = this->players[this->i3fc];
      fVar7 = sinf((float)this->players[this->i3fc]);
      (this->camPos).x = (pPVar1->pos).x - fVar7 * 8.0;
      pPVar1 = this->players[this->i3fc];
      fVar7 = cosf((float)this->i3fc);
      (this->camPos).z = fVar7 * 8.0 + (pPVar1->pos).z;
      (this->camPos).y = this->players[this->i3fc]->stat170 * 1.8;
      (this->camDir).x = (this->players[this->i3fc]->pos).x - (this->camPos).x;
      (this->camDir).y = 0.0;
      (this->camDir).z = (this->players[this->i3fc]->pos).z - (this->camPos).z;
    }
    else if (this->i268 < 0) {
      if (this->i3b8 == 1) {
        (this->camPos).y = (this->v24c).y + 7.0;
      }
      else {
        (this->camPos).y = 12.0;
      }
      (this->camPos).x = (this->v24c).x;
      (this->camPos).z = (this->v24c).z - 20.0;
      (this->camDir).x = 0.0;
      (this->camDir).y = -0.5;
      (this->camDir).z = 1.0;
      this->f3a0 = 0.0;
      this->i39c = 0;
    }
    else {
      (this->camPos).x = (this->players[(int)local_8]->pos).x;
      if (this->players[(int)local_8]->i190 == 6) {
        (this->camPos).y = 15.0;
      }
      else {
        (this->camPos).y = 12.0;
      }
      (this->camPos).z = (this->players[(int)local_8]->pos).z - 20.0;
      (this->camDir).x = 0.0;
      (this->camDir).y = -0.5;
      (this->camDir).z = 1.0;
      this->f3a0 = 0.0;
      this->i39c = 0;
    }
    if (this->b3a6 == '\0') {
      local_24 = sqrtf((float)this);
      pPVar1 = this->players[(int)local_8];
      local_10 = Atan2((this->players[(int)local_8]->pos).x + 35.0,
                       (this->players[(int)local_8]->pos).z);
      local_10 = pPVar1->yaw - local_10;
    }
    else {
      local_24 = sqrtf((float)this->players[(int)local_8]);
      pPVar1 = this->players[(int)local_8];
      local_10 = Atan2((this->players[(int)local_8]->pos).x - 35.0,
                       (this->players[(int)local_8]->pos).z);
      local_10 = pPVar1->yaw - local_10;
    }
    local_c = ((local_24 - 2.0) * 0.53 - 1.0) / this->players[(int)local_8]->stat17c;
    if (((local_24 <= 4.0 || 9.0 <= local_24) ||
        this->keyUp != KEY_HOLD && this->keyNum8 != KEY_HOLD) ||
        (local_10 <= -0.785 || 0.785 <= local_10)) {
      if (local_c <= 0.0 || 1.0 < local_c) {
        this->i3ac = 1;
      }
      else {
        this->i3ac = 2;
        if (0.0001 < this->f3a0) {
          lVar5 = __ftol();
          this->i39c = (int)lVar5;
        }
      }
    }
    else {
      this->i3ac = 3;
    }
    if (this->players[(int)local_8]->i190 == 3) {
      this->i3ac = 0;
    }
    (this->v240).x = (this->players[(int)local_8]->pos).x;
    (this->v240).z = (this->players[(int)local_8]->pos).z;
  }
  else {
    if (this->i3b8 < 5) {
      (this->v24c).y = 0.7;
      this->f25c = 0.0;
      this->f390 = 0.0;
      if (this->b3a6 == '\0') {
        Sound::Play(this->sound,0);
        for (local_3c = 0; local_3c < 6; local_3c = local_3c + 1) {
          this->players[local_3c]->i190 = 7;
          Player::Motion_42df38(this->players[local_3c]);
        }
      }
      else {
        fn_42b0bb(this);
        Sound::Play(this->sound,6);
      }
    }
    this->f390 = this->f390 + this->dt;
    this->i3b8 = 5;
    this->i39c = 0;
    this->f3a0 = -1.0;
    this->i3ac = 0;
    this->f3e0 = 0.0;
    (this->camPos).x = 0.0;
    (this->camPos).y = 6.0;
    (this->camPos).z = -20.0;
    (this->camDir).x = 0.0;
    (this->camDir).y = 0.0;
    (this->camDir).z = 1.0;
    if (5.0 < this->f390) {
      if (this->b3a6 == '\0') {
        this->i3b8 = 0;
        this->state = 7;
      }
      else {
        this->i3b8 = 0;
        this->state = 8;
        this->f390 = 0.0;
      }
    }
  }
  return;
}

