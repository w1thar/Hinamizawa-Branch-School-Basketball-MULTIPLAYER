// Game::State6 @ 0040e400  size=46548

void __thiscall Game::State6(Game *this)

{
  Player *pPVar1;
  int iVar2;
  int iVar3;
  Vec3 *pVVar4;
  float *pfVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
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
  undefined1 local_360 [12];
  undefined1 local_354 [12];
  undefined1 local_348 [12];
  undefined1 local_33c [12];
  undefined1 local_330 [12];
  undefined1 local_324 [12];
  undefined1 local_318 [12];
  undefined1 local_30c [12];
  undefined1 local_300 [12];
  undefined1 local_2f4 [12];
  undefined1 local_2e8 [12];
  undefined1 local_2dc [12];
  undefined1 local_2d0 [12];
  undefined1 local_2c4 [12];
  undefined1 local_2b8 [12];
  undefined1 local_2ac [12];
  undefined1 local_2a0 [12];
  undefined1 local_294 [12];
  undefined1 local_288 [12];
  undefined1 local_27c [12];
  undefined1 local_270 [12];
  undefined1 local_264 [12];
  undefined1 local_258 [12];
  undefined1 local_24c [12];
  undefined1 local_240 [12];
  undefined1 local_234 [12];
  undefined1 local_228 [12];
  undefined1 local_21c [12];
  undefined1 local_210 [12];
  undefined1 local_204 [12];
  undefined1 local_1f8 [12];
  undefined1 local_1ec [12];
  undefined1 local_1e0 [12];
  undefined1 local_1d4 [12];
  undefined1 local_1c8 [12];
  undefined1 local_1bc [12];
  undefined1 local_1b0 [12];
  undefined1 local_1a4 [12];
  undefined1 local_198 [12];
  undefined1 local_18c [12];
  undefined1 local_180 [12];
  undefined1 local_174 [12];
  undefined1 local_168 [12];
  undefined1 local_15c [12];
  undefined1 local_150 [12];
  undefined1 local_144 [12];
  undefined1 local_138 [12];
  undefined1 local_12c [12];
  undefined1 local_120 [12];
  undefined1 local_114 [12];
  undefined1 local_108 [12];
  undefined1 local_fc [12];
  undefined1 local_f0 [12];
  undefined1 local_e4 [12];
  undefined1 local_d8 [12];
  undefined1 local_cc [12];
  undefined1 local_c0 [12];
  undefined1 local_b4 [12];
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
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
  int local_38;
  float local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  int local_20;
  float local_1c;
  int local_18;
  int local_14;
  float local_10;
  float local_c;
  int local_8;
  
  this->f3e0 = this->f3e0 - this->dt;
  local_8 = 0;
  local_38 = 0;
  local_1c = 10000.0;
  local_34 = 10000.0;
  local_18 = 0;
  local_14 = 0;
  local_30 = 0;
  local_2c = 0;
  if (0.0 <= this->f3e0) {
    for (local_20 = 0; iVar3 = local_18, iVar2 = local_30, local_20 < 6; local_20 = local_20 + 1) {
      this->f3bc = ((this->players[local_20]->pos).z - (this->v24c).z) *
                   ((this->players[local_20]->pos).z - (this->v24c).z) +
                   ((this->players[local_20]->pos).x - (this->v24c).x) *
                   ((this->players[local_20]->pos).x - (this->v24c).x);
      if (this->players[local_20]->b154 == '\0') {
        if ((int)this->players[local_20]->f190 < 3) {
          local_2c = local_30;
          local_30 = local_38;
          local_38 = local_20;
          local_34 = this->f3bc;
        }
        else if (local_34 <= this->f3bc || 9 < (int)this->players[local_20]->f190) {
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
        if ((int)this->players[local_20]->f190 < 3) {
          local_18 = local_8;
          local_8 = local_20;
          local_1c = this->f3bc;
        }
        else if (local_1c <= this->f3bc || 0xe < (int)this->players[local_20]->f190) {
          local_18 = local_20;
        }
        else {
          local_18 = local_8;
          local_8 = local_20;
          local_1c = this->f3bc;
        }
        local_14 = iVar3;
      }
    }
    if (this->b3a6 == '\0') {
      if ((this->players[local_14]->pos).x < (this->players[local_18]->pos).x) {
        local_28 = local_18;
        local_18 = local_14;
        local_14 = iVar3;
      }
      if ((this->players[local_30]->pos).x < (this->players[local_2c]->pos).x) {
        local_28 = local_30;
        local_30 = local_2c;
        local_2c = iVar2;
      }
    }
    else {
      if ((this->players[local_18]->pos).x < (this->players[local_14]->pos).x) {
        local_28 = local_18;
        local_18 = local_14;
        local_14 = iVar3;
      }
      if ((this->players[local_2c]->pos).x < (this->players[local_30]->pos).x) {
        local_28 = local_30;
        local_30 = local_2c;
        local_2c = iVar2;
      }
    }
    if (this->i418 == 1) {
      this->b414 = '\x01';
      this->f390 = 0.0;
      this->i408 = local_8;
      Sound::Play(this->sound,0);
      this->i40c = 2;
      this->f410 = -3.0;
      this->i418 = 5;
    }
    else if (this->i418 == 2) {
      this->b414 = '\x01';
      this->f390 = 0.0;
      this->i408 = local_38;
      Sound::Play(this->sound,0);
      this->i40c = 1;
      this->f410 = -3.0;
      this->i418 = 5;
    }
    else if (this->i418 == 3) {
      this->b414 = '\x01';
      this->f390 = 0.0;
      this->i408 = local_38;
      Sound::Play(this->sound,0);
      this->i40c = 2;
      this->f410 = -3.0;
      this->i418 = 5;
    }
    else if (this->i418 == 4) {
      this->b414 = '\x01';
      this->f390 = 0.0;
      this->i408 = local_8;
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
          this->players[local_44]->f190 = 9.80909e-45;
        }
        this->i268 = -1;
      }
      else {
        fn_42b0bb(this);
        this->i418 = 0;
        local_1c = 100.0;
        local_34 = 100.0;
        for (local_40 = 0; local_40 < 6; local_40 = local_40 + 1) {
          this->players[local_40]->f190 = 9.80909e-45;
          Player::Motion_42df38(this->players[local_40]);
        }
        if (this->i40c == 1) {
          if (this->i3b0 == 2) {
            fVar11 = 1.54;
            pVVar4 = Vec3_Set(local_6c,(Vec3 *)0x42200000,0.0,this->f410,1.54);
            Player::SetPos(this->players[this->slot[5]],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            Sound::Play(this->sound,1);
            this->players[this->slot[5]]->f198 = 0.0;
            this->players[this->slot[5]]->yaw = 1.54;
            this->players[this->slot[5]]->f190 = 1.4013e-44;
            Player::Motion_4305b1(this->players[this->slot[5]]);
            fVar11 = -1.54;
            pVVar4 = Vec3_Set(local_78,(Vec3 *)0x41200000,0.0,this->f410,-1.54);
            Player::SetPos(this->players[local_8],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = -1.54;
            pVVar4 = Vec3_Set(local_84,(Vec3 *)0x41700000,0.0,this->f410 + 5.0,-1.54);
            Player::SetPos(this->players[local_18],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = -1.54;
            pVVar4 = Vec3_Set(local_90,(Vec3 *)0x41800000,0.0,this->f410 - 5.0,-1.54);
            Player::SetPos(this->players[local_14],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            this->f260 = this->players[this->slot[5]]->yaw - 3.14;
            this->f25c = this->players[this->slot[5]]->stat174;
            this->f258 = this->players[this->slot[5]]->stat178;
            fVar6 = (float10)thunk_FUN_00404960(this);
            (this->v24c).x =
                 (float)(-fVar6 * (float10)-2.0 + (float10)(this->players[this->slot[5]]->pos).x);
            (this->v24c).y = this->players[this->slot[5]]->stat170 * 0.9;
            fVar6 = (float10)thunk_FUN_00404900(this->players[this->slot[5]]);
            (this->v24c).z =
                 (float)(fVar6 * (float10)-2.0 + (float10)(this->players[this->slot[5]]->pos).z);
            this->i404 = this->slot[5];
            this->i268 = -1;
            this->b414 = '\0';
          }
          else if (this->b3a6 == '\0') {
            if (this->players[this->i408]->b154 == '\0') {
              if (this->i3b0 == 1) {
                this->f41c = 3.5;
              }
              this->players[local_8]->f190 = 5.60519e-45;
              Player::Motion_430497(this->players[local_8]);
              this->i268 = local_8;
              fVar11 = 1.54;
              pVVar4 = Vec3_Set(local_e4,(Vec3 *)0x42180000,0.0,this->f410,1.54);
              Player::SetPos(this->players[local_8],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
              fVar11 = -1.54;
              pVVar4 = Vec3_Set(local_f0,(Vec3 *)0x41f00000,0.0,this->f410 + 5.0,-1.54);
              Player::SetPos(this->players[local_18],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
              fVar11 = -1.54;
              pVVar4 = Vec3_Set(local_fc,(Vec3 *)0x42000000,0.0,this->f410 - 5.0,-1.54);
              Player::SetPos(this->players[local_14],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
              fVar11 = 1.54;
              pVVar4 = Vec3_Set(local_108,(Vec3 *)0x3f800000,0.0,4.0,1.54);
              Player::SetPos(this->players[local_30],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
              fVar11 = 1.54;
              pVVar4 = Vec3_Set(local_114,(Vec3 *)0x40000000,0.0,-4.0,1.54);
              Player::SetPos(this->players[local_2c],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
              fVar11 = 1.54;
              pVVar4 = Vec3_Set(local_120,(Vec3 *)0x40400000,0.0,0.0,1.54);
              Player::SetPos(this->players[local_38],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
              this->i404 = local_8;
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
            fVar11 = 1.54;
            pVVar4 = Vec3_Set(local_9c,(Vec3 *)0x42180000,0.0,this->f410,1.54);
            Player::SetPos(this->players[local_38],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = -1.54;
            pVVar4 = Vec3_Set(local_a8,(Vec3 *)0x41f00000,0.0,this->f410 + 5.0,-1.54);
            Player::SetPos(this->players[local_30],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = -1.54;
            pVVar4 = Vec3_Set(local_b4,(Vec3 *)0x42000000,0.0,this->f410 - 5.0,-1.54);
            Player::SetPos(this->players[local_2c],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = -1.54;
            pVVar4 = Vec3_Set(local_c0,(Vec3 *)0x41200000,0.0,4.0,-1.54);
            Player::SetPos(this->players[local_18],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 1.54;
            pVVar4 = Vec3_Set(local_cc,(Vec3 *)0x40000000,0.0,-4.0,1.54);
            Player::SetPos(this->players[local_14],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 1.54;
            pVVar4 = Vec3_Set(local_d8,(Vec3 *)0x40400000,0.0,0.0,1.54);
            Player::SetPos(this->players[local_8],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            Sound::Play(this->sound,1);
            this->players[local_38]->f198 = 0.0;
            fVar11 = Atan2((this->players[local_38]->pos).x - (this->players[local_30]->pos).x,
                           (this->players[local_38]->pos).z - (this->players[local_30]->pos).z);
            this->players[local_38]->yaw = fVar11;
            this->players[local_38]->f190 = 1.4013e-44;
            Player::Motion_4305b1(this->players[local_38]);
            this->f260 = this->players[local_38]->yaw - 3.14;
            this->f25c = this->players[local_38]->stat174;
            this->f258 = this->players[local_38]->stat178;
            fVar6 = (float10)thunk_FUN_00404960(local_38);
            (this->v24c).x =
                 (float)(-fVar6 * (float10)-2.0 + (float10)(this->players[local_38]->pos).x);
            (this->v24c).y = this->players[local_38]->stat170 * 0.9;
            fVar6 = (float10)thunk_FUN_00404900(this);
            (this->v24c).z =
                 (float)(fVar6 * (float10)-2.0 + (float10)(this->players[local_38]->pos).z);
            this->i404 = local_38;
            this->i268 = -1;
            this->b414 = '\0';
          }
        }
        else if (this->i40c == 2) {
          if (this->i3b0 == 2) {
            fVar11 = -1.54;
            pVVar4 = Vec3_Set(local_12c,(Vec3 *)0xc2200000,0.0,this->f410,-1.54);
            Player::SetPos(this->players[this->slot[5]],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            Sound::Play(this->sound,1);
            this->players[this->slot[5]]->f198 = 0.0;
            this->players[this->slot[5]]->yaw = -1.54;
            this->players[this->slot[5]]->f190 = 1.4013e-44;
            Player::Motion_4305b1(this->players[this->slot[5]]);
            fVar11 = 1.54;
            pVVar4 = Vec3_Set(local_138,(Vec3 *)0xc1200000,0.0,this->f410,1.54);
            Player::SetPos(this->players[local_8],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 1.54;
            pVVar4 = Vec3_Set(local_144,(Vec3 *)0xc1700000,0.0,this->f410 + 5.0,1.54);
            Player::SetPos(this->players[local_18],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 1.54;
            pVVar4 = Vec3_Set(local_150,(Vec3 *)0xc1800000,0.0,this->f410 - 5.0,1.54);
            Player::SetPos(this->players[local_14],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            this->f260 = this->players[this->slot[5]]->yaw - 3.14;
            this->f25c = this->players[this->slot[5]]->stat174;
            this->f258 = this->players[this->slot[5]]->stat178;
            fVar6 = (float10)thunk_FUN_00404960(this);
            (this->v24c).x =
                 (float)(-fVar6 * (float10)-2.0 + (float10)(this->players[this->slot[5]]->pos).x);
            (this->v24c).y = this->players[this->slot[5]]->stat170 * 0.9;
            fVar6 = (float10)thunk_FUN_00404900(this->players[this->slot[5]]);
            (this->v24c).z =
                 (float)(fVar6 * (float10)-2.0 + (float10)(this->players[this->slot[5]]->pos).z);
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
              fVar11 = -1.54;
              pVVar4 = Vec3_Set(local_1a4,(Vec3 *)0xc2180000,0.0,this->f410,-1.54);
              Player::SetPos(this->players[local_38],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
              fVar11 = 1.54;
              pVVar4 = Vec3_Set(local_1b0,(Vec3 *)0xc1f00000,0.0,this->f410 + 5.0,1.54);
              Player::SetPos(this->players[local_30],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
              fVar11 = 1.54;
              pVVar4 = Vec3_Set(local_1bc,(Vec3 *)0xc2000000,0.0,this->f410 - 5.0,1.54);
              Player::SetPos(this->players[local_2c],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
              fVar11 = 1.54;
              pVVar4 = Vec3_Set(local_1c8,(Vec3 *)0xc1200000,0.0,4.0,1.54);
              Player::SetPos(this->players[local_18],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
              fVar11 = -1.54;
              pVVar4 = Vec3_Set(local_1d4,(Vec3 *)0x40000000,0.0,-4.0,-1.54);
              Player::SetPos(this->players[local_14],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
              fVar11 = -1.54;
              pVVar4 = Vec3_Set(local_1e0,(Vec3 *)0x40400000,0.0,0.0,-1.54);
              Player::SetPos(this->players[local_8],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
              Sound::Play(this->sound,1);
              this->players[local_38]->f198 = 0.0;
              fVar11 = Atan2((this->players[local_38]->pos).x - (this->players[local_30]->pos).x,
                             (this->players[local_38]->pos).z - (this->players[local_30]->pos).z);
              this->players[local_38]->yaw = fVar11;
              this->players[local_38]->f190 = 1.4013e-44;
              Player::Motion_4305b1(this->players[local_38]);
              this->f260 = this->players[local_38]->yaw - 3.14;
              this->f25c = this->players[local_38]->stat174;
              this->f258 = this->players[local_38]->stat178;
              fVar6 = (float10)thunk_FUN_00404960(local_38);
              (this->v24c).x =
                   (float)(-fVar6 * (float10)-2.0 + (float10)(this->players[local_38]->pos).x);
              (this->v24c).y = this->players[local_38]->stat170 * 0.9;
              fVar6 = (float10)thunk_FUN_00404900(this);
              (this->v24c).z =
                   (float)(fVar6 * (float10)-2.0 + (float10)(this->players[local_38]->pos).z);
              this->i404 = local_38;
              this->i268 = -1;
              this->b414 = '\0';
            }
          }
          else if (this->players[this->i408]->b154 == '\0') {
            if (this->i3b0 == 1) {
              this->f41c = 3.5;
            }
            this->players[local_8]->f190 = 5.60519e-45;
            Player::Motion_430497(this->players[local_8]);
            this->i268 = local_8;
            fVar11 = -1.54;
            pVVar4 = Vec3_Set(local_15c,(Vec3 *)0xc2180000,0.0,this->f410,-1.54);
            Player::SetPos(this->players[local_8],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 1.54;
            pVVar4 = Vec3_Set(local_168,(Vec3 *)0xc1f00000,0.0,this->f410 + 5.0,1.54);
            Player::SetPos(this->players[local_18],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 1.54;
            pVVar4 = Vec3_Set(local_174,(Vec3 *)0xc2000000,0.0,this->f410 - 5.0,1.54);
            Player::SetPos(this->players[local_14],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = -1.54;
            pVVar4 = Vec3_Set(local_180,(Vec3 *)0x3f800000,0.0,4.0,-1.54);
            Player::SetPos(this->players[local_30],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = -1.54;
            pVVar4 = Vec3_Set(local_18c,(Vec3 *)0x40000000,0.0,-4.0,-1.54);
            Player::SetPos(this->players[local_2c],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = -1.54;
            pVVar4 = Vec3_Set(local_198,(Vec3 *)0x40400000,0.0,0.0,-1.54);
            Player::SetPos(this->players[local_38],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            this->i404 = local_8;
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
            fVar11 = 0.0;
            pVVar4 = Vec3_Set(local_1ec,(Vec3 *)this->f410,0.0,20.0,0.0);
            Player::SetPos(this->players[this->slot[5]],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            Sound::Play(this->sound,1);
            this->players[this->slot[5]]->f198 = 0.0;
            this->players[this->slot[5]]->yaw = 0.0;
            this->players[this->slot[5]]->f190 = 1.4013e-44;
            Player::Motion_4305b1(this->players[this->slot[5]]);
            fVar11 = 3.14;
            pVVar4 = Vec3_Set(local_1f8,(Vec3 *)this->f410,0.0,0.0,3.14);
            Player::SetPos(this->players[local_8],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 3.14;
            pVVar4 = Vec3_Set(local_204,(Vec3 *)(this->f410 + 5.0),0.0,3.0,3.14);
            Player::SetPos(this->players[local_18],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 3.14;
            pVVar4 = Vec3_Set(local_210,(Vec3 *)(this->f410 - 1.0),0.0,4.0,3.14);
            Player::SetPos(this->players[local_14],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            this->f260 = this->players[this->slot[5]]->yaw - 3.14;
            this->f25c = this->players[this->slot[5]]->stat174;
            this->f258 = this->players[this->slot[5]]->stat178;
            fVar6 = (float10)thunk_FUN_00404960(this);
            (this->v24c).x =
                 (float)(-fVar6 * (float10)-2.0 + (float10)(this->players[this->slot[5]]->pos).x);
            (this->v24c).y = this->players[this->slot[5]]->stat170 * 0.9;
            fVar6 = (float10)thunk_FUN_00404900(this->players[this->slot[5]]);
            (this->v24c).z =
                 (float)(fVar6 * (float10)-2.0 + (float10)(this->players[this->slot[5]]->pos).z);
            this->i404 = this->slot[5];
            this->i268 = -1;
            this->b414 = '\0';
          }
          else if (this->players[this->i408]->b154 == '\0') {
            if (this->i3b0 == 1) {
              this->f41c = 3.5;
            }
            this->players[local_8]->f190 = 5.60519e-45;
            Player::Motion_430497(this->players[local_8]);
            this->i268 = local_8;
            fVar11 = 0.0;
            pVVar4 = Vec3_Set(local_264,(Vec3 *)this->f410,0.0,20.0,0.0);
            Player::SetPos(this->players[local_8],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 3.14;
            pVVar4 = Vec3_Set(local_270,(Vec3 *)(this->f410 + 5.0),0.0,10.0,3.14);
            Player::SetPos(this->players[local_18],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 3.14;
            pVVar4 = Vec3_Set(local_27c,(Vec3 *)(this->f410 - 1.0),0.0,12.0,3.14);
            Player::SetPos(this->players[local_14],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 3.14;
            pVVar4 = Vec3_Set(local_288,(Vec3 *)(this->f410 + 8.0),0.0,5.0,3.14);
            Player::SetPos(this->players[local_30],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 3.14;
            pVVar4 = Vec3_Set(local_294,(Vec3 *)(this->f410 - 8.0),0.0,4.0,3.14);
            Player::SetPos(this->players[local_2c],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 3.14;
            pVVar4 = Vec3_Set(local_2a0,(Vec3 *)this->f410,0.0,0.0,3.14);
            Player::SetPos(this->players[local_38],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            this->i404 = local_8;
            this->b414 = '\0';
          }
          else {
            fVar11 = 0.0;
            pVVar4 = Vec3_Set(local_21c,(Vec3 *)this->f410,0.0,20.0,0.0);
            Player::SetPos(this->players[local_38],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 3.14;
            pVVar4 = Vec3_Set(local_228,(Vec3 *)(this->f410 + 5.0),0.0,10.0,3.14);
            Player::SetPos(this->players[local_30],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 3.14;
            pVVar4 = Vec3_Set(local_234,(Vec3 *)(this->f410 - 1.0),0.0,12.0,3.14);
            Player::SetPos(this->players[local_2c],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 3.14;
            pVVar4 = Vec3_Set(local_240,(Vec3 *)(this->f410 + 8.0),0.0,1.0,3.14);
            Player::SetPos(this->players[local_18],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 3.14;
            pVVar4 = Vec3_Set(local_24c,(Vec3 *)(this->f410 - 8.0),0.0,2.0,3.14);
            Player::SetPos(this->players[local_14],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 3.14;
            pVVar4 = Vec3_Set(local_258,(Vec3 *)this->f410,0.0,3.0,3.14);
            Player::SetPos(this->players[local_8],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            Sound::Play(this->sound,1);
            this->players[local_38]->f198 = 0.0;
            fVar11 = Atan2((this->players[local_38]->pos).x - (this->players[local_30]->pos).x,
                           (this->players[local_38]->pos).z - (this->players[local_30]->pos).z);
            this->players[local_38]->yaw = fVar11;
            this->players[local_38]->f190 = 1.4013e-44;
            Player::Motion_4305b1(this->players[local_38]);
            this->f260 = this->players[local_38]->yaw - 3.14;
            this->f25c = this->players[local_38]->stat174;
            this->f258 = this->players[local_38]->stat178;
            fVar6 = (float10)thunk_FUN_00404960(local_38);
            (this->v24c).x =
                 (float)(-fVar6 * (float10)-2.0 + (float10)(this->players[local_38]->pos).x);
            (this->v24c).y = this->players[local_38]->stat170 * 0.9;
            fVar6 = (float10)thunk_FUN_00404900(this);
            (this->v24c).z =
                 (float)(fVar6 * (float10)-2.0 + (float10)(this->players[local_38]->pos).z);
            this->i404 = local_38;
            this->i268 = -1;
            this->b414 = '\0';
          }
        }
        else if (this->i40c == 4) {
          if (this->i3b0 == 2) {
            fVar11 = 3.14;
            pVVar4 = Vec3_Set(local_2ac,(Vec3 *)this->f410,0.0,-20.0,3.14);
            Player::SetPos(this->players[this->slot[5]],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            Sound::Play(this->sound,1);
            this->players[this->slot[5]]->f198 = 0.0;
            this->players[this->slot[5]]->yaw = 3.14;
            this->players[this->slot[5]]->f190 = 1.4013e-44;
            Player::Motion_4305b1(this->players[this->slot[5]]);
            fVar11 = 0.0;
            pVVar4 = Vec3_Set(local_2b8,(Vec3 *)this->f410,0.0,0.0,0.0);
            Player::SetPos(this->players[local_8],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 0.0;
            pVVar4 = Vec3_Set(local_2c4,(Vec3 *)(this->f410 + 5.0),0.0,-3.0,0.0);
            Player::SetPos(this->players[local_18],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 0.0;
            pVVar4 = Vec3_Set(local_2d0,(Vec3 *)(this->f410 - 1.0),0.0,-4.0,0.0);
            Player::SetPos(this->players[local_14],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            this->f260 = this->players[this->slot[5]]->yaw - 3.14;
            this->f25c = this->players[this->slot[5]]->stat174;
            this->f258 = this->players[this->slot[5]]->stat178;
            fVar6 = (float10)thunk_FUN_00404960(this);
            (this->v24c).x =
                 (float)(-fVar6 * (float10)-2.0 + (float10)(this->players[this->slot[5]]->pos).x);
            (this->v24c).y = this->players[this->slot[5]]->stat170 * 0.9;
            fVar6 = (float10)thunk_FUN_00404900(this->players[this->slot[5]]);
            (this->v24c).z =
                 (float)(fVar6 * (float10)-2.0 + (float10)(this->players[this->slot[5]]->pos).z);
            this->i404 = this->slot[5];
            this->i268 = -1;
            this->b414 = '\0';
          }
          else if (this->players[this->i408]->b154 == '\0') {
            if (this->i3b0 == 1) {
              this->f41c = 3.5;
            }
            this->players[local_8]->f190 = 5.60519e-45;
            Player::Motion_430497(this->players[local_8]);
            this->i268 = local_8;
            fVar11 = 3.14;
            pVVar4 = Vec3_Set(local_324,(Vec3 *)this->f410,0.0,-20.0,3.14);
            Player::SetPos(this->players[local_8],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 0.0;
            pVVar4 = Vec3_Set(local_330,(Vec3 *)(this->f410 + 5.0),0.0,-10.0,0.0);
            Player::SetPos(this->players[local_18],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 0.0;
            pVVar4 = Vec3_Set(local_33c,(Vec3 *)(this->f410 - 1.0),0.0,-12.0,0.0);
            Player::SetPos(this->players[local_14],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 0.0;
            pVVar4 = Vec3_Set(local_348,(Vec3 *)(this->f410 + 8.0),0.0,-5.0,0.0);
            Player::SetPos(this->players[local_30],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 0.0;
            pVVar4 = Vec3_Set(local_354,(Vec3 *)(this->f410 - 8.0),0.0,-4.0,0.0);
            Player::SetPos(this->players[local_2c],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 0.0;
            pVVar4 = Vec3_Set(local_360,(Vec3 *)this->f410,0.0,0.0,0.0);
            Player::SetPos(this->players[local_38],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            this->i404 = local_8;
            this->b414 = '\0';
          }
          else {
            fVar11 = 3.14;
            pVVar4 = Vec3_Set(local_2dc,(Vec3 *)this->f410,0.0,-20.0,3.14);
            Player::SetPos(this->players[local_38],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 0.0;
            pVVar4 = Vec3_Set(local_2e8,(Vec3 *)(this->f410 + 5.0),0.0,-10.0,0.0);
            Player::SetPos(this->players[local_30],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 0.0;
            pVVar4 = Vec3_Set(local_2f4,(Vec3 *)(this->f410 - 1.0),0.0,-12.0,0.0);
            Player::SetPos(this->players[local_2c],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 0.0;
            pVVar4 = Vec3_Set(local_300,(Vec3 *)(this->f410 + 8.0),0.0,-5.0,0.0);
            Player::SetPos(this->players[local_18],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 0.0;
            pVVar4 = Vec3_Set(local_30c,(Vec3 *)(this->f410 - 8.0),0.0,-4.0,0.0);
            Player::SetPos(this->players[local_14],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            fVar11 = 0.0;
            pVVar4 = Vec3_Set(local_318,(Vec3 *)this->f410,0.0,0.0,0.0);
            Player::SetPos(this->players[local_8],pVVar4->x,pVVar4->y,pVVar4->z,fVar11);
            Sound::Play(this->sound,1);
            this->players[local_38]->f198 = 0.0;
            fVar11 = Atan2((this->players[local_38]->pos).x - (this->players[local_30]->pos).x,
                           (this->players[local_38]->pos).z - (this->players[local_30]->pos).z);
            this->players[local_38]->yaw = fVar11;
            this->players[local_38]->f190 = 1.4013e-44;
            Player::Motion_4305b1(this->players[local_38]);
            this->f260 = this->players[local_38]->yaw - 3.14;
            this->f25c = this->players[local_38]->stat174;
            this->f258 = this->players[local_38]->stat178;
            fVar6 = (float10)thunk_FUN_00404960(local_38);
            (this->v24c).x =
                 (float)(-fVar6 * (float10)-2.0 + (float10)(this->players[local_38]->pos).x);
            (this->v24c).y = this->players[local_38]->stat170 * 0.9;
            fVar6 = (float10)thunk_FUN_00404900(this);
            (this->v24c).z =
                 (float)(fVar6 * (float10)-2.0 + (float10)(this->players[local_38]->pos).z);
            this->i404 = local_38;
            this->i268 = -1;
            this->b414 = '\0';
          }
        }
      }
    }
    if ((int)this->players[local_8]->f190 < 3 &&
        (this->keyUp == DAT_00453618 || this->keyNum8 == DAT_00453618)) {
      pfVar5 = thunk_FUN_00419ae5(this,local_36c,local_8);
      pPVar1 = this->players[local_8];
      (pPVar1->pos).x = *pfVar5;
      (pPVar1->pos).y = pfVar5[1];
      (pPVar1->pos).z = pfVar5[2];
      this->players[local_8]->f190 = 1.4013e-45;
      Player::Motion_42f1a9(this->players[local_8]);
    }
    else if (((int)this->players[local_8]->f190 < 7 || 9 < (int)this->players[local_8]->f190) ||
             this->keyUp != DAT_00453618 && this->keyNum8 != DAT_00453618) {
      if ((int)this->players[local_8]->f190 < 3 &&
          (this->keyDown == DAT_00453618 || this->keyNum2 == DAT_00453618)) {
        pPVar1 = this->players[local_8];
        fVar6 = (float10)thunk_FUN_00404960(this->players[local_8]);
        (this->players[local_8]->pos).x =
             (float)(fVar6 * (float10)this->players[local_8]->stat168 * (float10)0.6 *
                     (float10)this->dt + (float10)(pPVar1->pos).x);
        pPVar1 = this->players[local_8];
        fVar6 = (float10)thunk_FUN_00404900(this);
        (this->players[local_8]->pos).z =
             (float)(fVar6 * (float10)this->players[local_8]->stat168 * (float10)0.6 *
                     (float10)this->dt + (float10)(pPVar1->pos).z);
        this->players[local_8]->f190 = 2.8026e-45;
        Player::Motion_42fb3f(this->players[local_8]);
      }
      else if (((int)this->players[local_8]->f190 < 7 || 9 < (int)this->players[local_8]->f190) ||
               this->keyDown != DAT_00453618 && this->keyNum2 != DAT_00453618) {
        if ((int)this->players[local_8]->f190 < 3) {
          this->players[local_8]->f190 = 0.0;
          Player::Motion_42ee86(this->players[local_8]);
        }
        else if (6 < (int)this->players[local_8]->f190 && (int)this->players[local_8]->f190 < 10) {
          this->players[local_8]->f190 = 9.80909e-45;
          Player::Motion_42df38(this->players[local_8]);
        }
      }
      else {
        pPVar1 = this->players[local_8];
        fVar6 = (float10)thunk_FUN_00404960(this);
        (this->players[local_8]->pos).x =
             (float)(fVar6 * (float10)this->players[local_8]->stat168 * (float10)0.6 *
                     (float10)this->dt + (float10)(pPVar1->pos).x);
        pPVar1 = this->players[local_8];
        fVar6 = (float10)thunk_FUN_00404900(this->players[local_8]->yaw);
        (this->players[local_8]->pos).z =
             (float)(fVar6 * (float10)this->players[local_8]->stat168 * (float10)0.6 *
                     (float10)this->dt + (float10)(pPVar1->pos).z);
        this->players[local_8]->f190 = 1.26117e-44;
        Player::Motion_42e9cd(this->players[local_8]);
      }
    }
    else {
      pfVar5 = thunk_FUN_00419ae5(this,local_378,local_8);
      pPVar1 = this->players[local_8];
      (pPVar1->pos).x = *pfVar5;
      (pPVar1->pos).y = pfVar5[1];
      (pPVar1->pos).z = pfVar5[2];
      this->players[local_8]->f190 = 1.12104e-44;
      Player::Motion_42dfc0(this->players[local_8]);
    }
    if ((int)this->players[local_8]->f190 < 3 && this->keyX == DAT_00453618) {
      this->players[local_8]->f190 = 5.60519e-45;
      Player::Motion_430497(this->players[local_8]);
      if (this->i3b0 == 1) {
        this->f41c = 3.5;
      }
    }
    if ((this->players[local_8]->f190 == 4.2039e-45 || this->players[local_8]->f190 == 5.60519e-45)
        && this->i3b0 == 1) {
      this->f41c = this->f41c - this->dt;
    }
    if (this->players[local_8]->f190 == 5.60519e-45 &&
        (this->keyX == DAT_00453614 || this->f41c < -0.01)) {
      Sound::Play(this->sound,1);
      this->players[local_8]->f198 = 0.0;
      this->players[local_8]->f190 = 1.4013e-44;
      Player::Motion_4305b1(this->players[local_8]);
      this->f41c = 0.0;
      this->f260 = this->players[local_8]->yaw - 3.14;
      this->f25c = this->players[local_8]->stat174;
      this->f258 = this->players[local_8]->stat178;
      fVar6 = (float10)thunk_FUN_00404960(this);
      (this->v24c).x = (float)(-fVar6 * (float10)-2.0 + (float10)(this->players[local_8]->pos).x);
      fVar6 = (float10)thunk_FUN_00404900(local_8);
      (this->v24c).z = (float)(fVar6 * (float10)-2.0 + (float10)(this->players[local_8]->pos).z);
      this->i404 = local_8;
      this->i268 = -1;
    }
    if (this->i3ac == 3 && this->keyZ == DAT_00453610) {
      Sound::Play(this->sound,1);
      this->players[local_8]->f190 = 8.40779e-45;
      Player::Motion_430a58(this->players[local_8]);
      this->players[local_8]->f198 = 0.0;
      this->players[local_8]->f18c = 12.0;
    }
    if ((int)this->players[local_8]->f190 < 3 && this->keyZ == DAT_00453618) {
      this->players[local_8]->f190 = 4.2039e-45;
      Player::Motion_430497(this->players[local_8]);
      this->i3fc = local_8;
      this->i3b8 = 2;
      if (this->i3b0 == 1) {
        this->f41c = 10.0;
      }
    }
    if (this->players[local_8]->f190 == 4.2039e-45) {
      if (this->keyZ != DAT_00453614 && (this->f41c <= 5.0 || 6.5 <= this->f41c)) {
        this->f3a0 = this->f3a0 + this->dt;
        if (1.0 < this->f3a0) {
          this->f3a0 = 0.001;
        }
      }
      else {
        Sound::Play(this->sound,1);
        this->players[local_8]->f198 = 0.0;
        this->players[local_8]->f190 = 1.54143e-44;
        Player::Motion_430701(this->players[local_8]);
        this->f260 = this->players[local_8]->yaw - 3.14;
        this->f25c = 23.0;
        this->f258 = this->f3a0 * this->players[local_8]->stat17c + 1.0;
        fVar6 = (float10)thunk_FUN_00404960(this);
        (this->v24c).x = (float)(-fVar6 * (float10)-2.0 + (float10)(this->players[local_8]->pos).x);
        fVar6 = (float10)thunk_FUN_00404900(local_8);
        (this->v24c).z = (float)(fVar6 * (float10)-2.0 + (float10)(this->players[local_8]->pos).z);
        this->i404 = local_8;
        this->f41c = 0.0;
        this->i268 = -1;
        if (this->b3a6 == '\0') {
          if (225.0 <= (this->players[local_8]->pos).z * (this->players[local_8]->pos).z +
                       ((this->players[local_8]->pos).x + 35.0) *
                       ((this->players[local_8]->pos).x + 35.0)) {
            this->b3a8 = '\x01';
          }
          else {
            this->b3a8 = '\0';
          }
        }
        else if (225.0 <= (this->players[local_8]->pos).z * (this->players[local_8]->pos).z +
                          ((this->players[local_8]->pos).x - 35.0) *
                          ((this->players[local_8]->pos).x - 35.0)) {
          this->b3a8 = '\x01';
        }
        else {
          this->b3a8 = '\0';
        }
      }
    }
    if ((this->keyRight == DAT_00453618 || this->keyNum6 == DAT_00453618) &&
        (int)this->players[local_8]->f190 < 10) {
      if (this->players[local_8]->f190 == 0.0 ||
          3 < (int)this->players[local_8]->f190 && (int)this->players[local_8]->f190 < 8) {
        this->players[local_8]->yaw = this->dt * 5.0 + this->players[local_8]->yaw;
      }
      else {
        this->players[local_8]->yaw = this->dt * 2.0 + this->players[local_8]->yaw;
      }
    }
    else if ((this->keyLeft == DAT_00453618 || this->keyNum4 == DAT_00453618) &&
             (int)this->players[local_8]->f190 < 10) {
      if (this->players[local_8]->f190 == 0.0 ||
          3 < (int)this->players[local_8]->f190 && (int)this->players[local_8]->f190 < 8) {
        this->players[local_8]->yaw = this->players[local_8]->yaw - this->dt * 5.0;
      }
      else {
        this->players[local_8]->yaw = this->players[local_8]->yaw - this->dt * 2.0;
      }
    }
    else if (this->i418 == 5) {
      if (this->b3a6 == '\0') {
        fVar12 = 2.0;
        fVar11 = this->players[local_8]->yaw;
        fVar10 = Atan2((this->players[local_8]->pos).x - 35.0,(this->players[local_8]->pos).z);
        fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
        this->players[local_8]->yaw = (float)fVar6;
        pfVar5 = thunk_FUN_00419ae5(this,local_390,local_8);
        pPVar1 = this->players[local_8];
        (pPVar1->pos).x = *pfVar5;
        (pPVar1->pos).y = pfVar5[1];
        (pPVar1->pos).z = pfVar5[2];
        Player::Motion_42dfc0(this->players[local_8]);
      }
      else {
        fVar12 = 2.0;
        fVar11 = this->players[local_8]->yaw;
        fVar10 = Atan2((this->players[local_8]->pos).x + 35.0,(this->players[local_8]->pos).z);
        fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
        this->players[local_8]->yaw = (float)fVar6;
        pfVar5 = thunk_FUN_00419ae5(this,local_384,local_8);
        pPVar1 = this->players[local_8];
        (pPVar1->pos).x = *pfVar5;
        (pPVar1->pos).y = pfVar5[1];
        (pPVar1->pos).z = pfVar5[2];
        Player::Motion_42dfc0(this->players[local_8]);
      }
    }
    else if (this->players[local_8]->f190 == 9.80909e-45 && this->i268 < 0) {
      fVar12 = 10.0;
      fVar11 = this->players[local_8]->yaw;
      fVar10 = Atan2((this->players[local_8]->pos).x - (this->v24c).x,
                     (this->players[local_8]->pos).z - (this->v24c).z);
      fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
      this->players[local_8]->yaw = (float)fVar6;
      pfVar5 = thunk_FUN_00419ae5(this,local_39c,local_8);
      pPVar1 = this->players[local_8];
      (pPVar1->pos).x = *pfVar5;
      (pPVar1->pos).y = pfVar5[1];
      (pPVar1->pos).z = pfVar5[2];
      Player::Motion_42dfc0(this->players[local_8]);
    }
    if (this->b3a6 == '\0') {
      if (6 < (int)this->players[local_18]->f190 && (int)this->players[local_18]->f190 < 10) {
        if ((this->players[local_18]->pos).z <= 18.0) {
          if (-18.0 <= (this->players[local_18]->pos).z) {
            if ((this->players[local_8]->pos).x <= -25.0) {
              if ((this->players[local_8]->pos).z <= 0.0) {
                fVar12 = 5.0;
                fVar11 = this->players[local_18]->yaw;
                fVar10 = Atan2((this->players[local_18]->pos).x + 30.0,
                               (this->players[local_18]->pos).z - 15.0);
                fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
                this->players[local_18]->yaw = (float)fVar6;
              }
              else {
                fVar12 = 5.0;
                fVar11 = this->players[local_18]->yaw;
                fVar10 = Atan2((this->players[local_18]->pos).x + 30.0,
                               (this->players[local_18]->pos).z + 15.0);
                fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
                this->players[local_18]->yaw = (float)fVar6;
              }
              pfVar5 = thunk_FUN_00419ae5(this,local_480,local_18);
              pPVar1 = this->players[local_18];
              (pPVar1->pos).x = *pfVar5;
              (pPVar1->pos).y = pfVar5[1];
              (pPVar1->pos).z = pfVar5[2];
              Player::Motion_42dfc0(this->players[local_18]);
            }
            else if ((this->players[local_18]->pos).x - (this->players[local_8]->pos).x <= -10.0) {
              if (-15.0 <= (this->players[local_18]->pos).x - (this->players[local_8]->pos).x) {
                if (this->keyUp == DAT_004581e8 && this->keyNum8 == DAT_004581e8) {
                  fVar12 = 5.0;
                  fVar11 = this->players[local_18]->yaw;
                  fVar10 = Atan2((this->players[local_18]->pos).x - (this->v24c).x,
                                 (this->players[local_18]->pos).z - (this->v24c).z);
                  fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
                  this->players[local_18]->yaw = (float)fVar6;
                  Player::Motion_42df38(this->players[local_18]);
                }
              }
              else {
                fVar6 = thunk_FUN_004199d4((int)this,-1.57,this->players[local_18]->yaw,5.0);
                this->players[local_18]->yaw = (float)fVar6;
                pfVar5 = thunk_FUN_00419ae5(this,local_474,local_18);
                pPVar1 = this->players[local_18];
                (pPVar1->pos).x = *pfVar5;
                (pPVar1->pos).y = pfVar5[1];
                (pPVar1->pos).z = pfVar5[2];
                Player::Motion_42dfc0(this->players[local_18]);
              }
            }
            else {
              fVar6 = thunk_FUN_004199d4((int)this,1.57,this->players[local_18]->yaw,5.0);
              this->players[local_18]->yaw = (float)fVar6;
              pfVar5 = thunk_FUN_00419ae5(this,local_468,local_18);
              pPVar1 = this->players[local_18];
              (pPVar1->pos).x = *pfVar5;
              (pPVar1->pos).y = pfVar5[1];
              (pPVar1->pos).z = pfVar5[2];
              Player::Motion_42dfc0(this->players[local_18]);
            }
          }
          else {
            fVar6 = thunk_FUN_004199d4((int)this,3.14,this->players[local_18]->yaw,5.0);
            this->players[local_18]->yaw = (float)fVar6;
            pfVar5 = thunk_FUN_00419ae5(this,local_45c,local_18);
            pPVar1 = this->players[local_18];
            (pPVar1->pos).x = *pfVar5;
            (pPVar1->pos).y = pfVar5[1];
            (pPVar1->pos).z = pfVar5[2];
            Player::Motion_42dfc0(this->players[local_18]);
          }
        }
        else {
          fVar6 = thunk_FUN_004199d4((int)this,0.0,this->players[local_18]->yaw,5.0);
          this->players[local_18]->yaw = (float)fVar6;
          pfVar5 = thunk_FUN_00419ae5(this,local_450,local_18);
          pPVar1 = this->players[local_18];
          (pPVar1->pos).x = *pfVar5;
          (pPVar1->pos).y = pfVar5[1];
          (pPVar1->pos).z = pfVar5[2];
          Player::Motion_42dfc0(this->players[local_18]);
        }
      }
      if (6 < (int)this->players[local_14]->f190 && (int)this->players[local_14]->f190 < 10) {
        if ((this->players[local_14]->pos).z <= 18.0) {
          if (-18.0 <= (this->players[local_14]->pos).z) {
            if (-35.0 <= (this->players[local_14]->pos).x) {
              if ((this->players[local_14]->pos).x <= 35.0) {
                if ((this->players[local_14]->pos).x - (this->players[local_8]->pos).x <= 12.0) {
                  if (-3.0 <= (this->players[local_14]->pos).x - (this->players[local_8]->pos).x) {
                    if ((this->players[local_14]->pos).z - (this->players[local_8]->pos).z <= 6.0) {
                      if (-6.0 <= (this->players[local_14]->pos).z - (this->players[local_8]->pos).z
                         ) {
                        if (this->keyX == DAT_00453618) {
                          this->players[local_14]->yaw =
                               this->dt * 5.0 + this->players[local_14]->yaw;
                          pfVar5 = thunk_FUN_00419ae5(this,local_4ec,local_14);
                          pPVar1 = this->players[local_14];
                          (pPVar1->pos).x = *pfVar5;
                          (pPVar1->pos).y = pfVar5[1];
                          (pPVar1->pos).z = pfVar5[2];
                          Player::Motion_42dfc0(this->players[local_14]);
                        }
                        else if (this->keyUp == DAT_004581e8 && this->keyNum8 == DAT_004581e8) {
                          fVar12 = 5.0;
                          fVar11 = this->players[local_14]->yaw;
                          fVar10 = Atan2((this->players[local_14]->pos).x - (this->v24c).x,
                                         (this->players[local_14]->pos).z - (this->v24c).z);
                          fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
                          this->players[local_14]->yaw = (float)fVar6;
                          Player::Motion_42df38(this->players[local_14]);
                        }
                      }
                      else {
                        fVar6 = thunk_FUN_004199d4((int)this,3.14,this->players[local_14]->yaw,5.0);
                        this->players[local_14]->yaw = (float)fVar6;
                        pfVar5 = thunk_FUN_00419ae5(this,local_4e0,local_14);
                        pPVar1 = this->players[local_14];
                        (pPVar1->pos).x = *pfVar5;
                        (pPVar1->pos).y = pfVar5[1];
                        (pPVar1->pos).z = pfVar5[2];
                        Player::Motion_42dfc0(this->players[local_14]);
                      }
                    }
                    else {
                      fVar6 = thunk_FUN_004199d4((int)this,0.0,this->players[local_14]->yaw,5.0);
                      this->players[local_14]->yaw = (float)fVar6;
                      pfVar5 = thunk_FUN_00419ae5(this,local_4d4,local_14);
                      pPVar1 = this->players[local_14];
                      (pPVar1->pos).x = *pfVar5;
                      (pPVar1->pos).y = pfVar5[1];
                      (pPVar1->pos).z = pfVar5[2];
                      Player::Motion_42dfc0(this->players[local_14]);
                    }
                  }
                  else {
                    fVar6 = thunk_FUN_004199d4((int)this,-1.57,this->players[local_14]->yaw,5.0);
                    this->players[local_14]->yaw = (float)fVar6;
                    pfVar5 = thunk_FUN_00419ae5(this,local_4c8,local_14);
                    pPVar1 = this->players[local_14];
                    (pPVar1->pos).x = *pfVar5;
                    (pPVar1->pos).y = pfVar5[1];
                    (pPVar1->pos).z = pfVar5[2];
                    Player::Motion_42dfc0(this->players[local_14]);
                  }
                }
                else {
                  fVar6 = thunk_FUN_004199d4((int)this,1.57,this->players[local_14]->yaw,5.0);
                  this->players[local_14]->yaw = (float)fVar6;
                  pfVar5 = thunk_FUN_00419ae5(this,local_4bc,local_14);
                  pPVar1 = this->players[local_14];
                  (pPVar1->pos).x = *pfVar5;
                  (pPVar1->pos).y = pfVar5[1];
                  (pPVar1->pos).z = pfVar5[2];
                  Player::Motion_42dfc0(this->players[local_14]);
                }
              }
              else {
                fVar6 = thunk_FUN_004199d4((int)this,1.57,this->players[local_14]->yaw,5.0);
                this->players[local_14]->yaw = (float)fVar6;
                pfVar5 = thunk_FUN_00419ae5(this,local_4b0,local_14);
                pPVar1 = this->players[local_14];
                (pPVar1->pos).x = *pfVar5;
                (pPVar1->pos).y = pfVar5[1];
                (pPVar1->pos).z = pfVar5[2];
                Player::Motion_42dfc0(this->players[local_14]);
              }
            }
            else {
              fVar6 = thunk_FUN_004199d4((int)this,-1.57,this->players[local_14]->yaw,5.0);
              this->players[local_14]->yaw = (float)fVar6;
              pfVar5 = thunk_FUN_00419ae5(this,local_4a4,local_14);
              pPVar1 = this->players[local_14];
              (pPVar1->pos).x = *pfVar5;
              (pPVar1->pos).y = pfVar5[1];
              (pPVar1->pos).z = pfVar5[2];
              Player::Motion_42dfc0(this->players[local_14]);
            }
          }
          else {
            fVar6 = thunk_FUN_004199d4((int)this,3.14,this->players[local_14]->yaw,5.0);
            this->players[local_14]->yaw = (float)fVar6;
            pfVar5 = thunk_FUN_00419ae5(this,local_498,local_14);
            pPVar1 = this->players[local_14];
            (pPVar1->pos).x = *pfVar5;
            (pPVar1->pos).y = pfVar5[1];
            (pPVar1->pos).z = pfVar5[2];
            Player::Motion_42dfc0(this->players[local_14]);
          }
        }
        else {
          fVar6 = thunk_FUN_004199d4((int)this,0.0,this->players[local_14]->yaw,5.0);
          this->players[local_14]->yaw = (float)fVar6;
          pfVar5 = thunk_FUN_00419ae5(this,local_48c,local_14);
          pPVar1 = this->players[local_14];
          (pPVar1->pos).x = *pfVar5;
          (pPVar1->pos).y = pfVar5[1];
          (pPVar1->pos).z = pfVar5[2];
          Player::Motion_42dfc0(this->players[local_14]);
        }
      }
    }
    else {
      if (6 < (int)this->players[local_18]->f190 && (int)this->players[local_18]->f190 < 10) {
        if ((this->players[local_18]->pos).z <= 18.0) {
          if (-18.0 <= (this->players[local_18]->pos).z) {
            if (25.0 <= (this->players[local_8]->pos).x) {
              if ((this->players[local_8]->pos).z <= 0.0) {
                fVar12 = 5.0;
                fVar11 = this->players[local_18]->yaw;
                fVar10 = Atan2((this->players[local_18]->pos).x - 30.0,
                               (this->players[local_18]->pos).z - 15.0);
                fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
                this->players[local_18]->yaw = (float)fVar6;
              }
              else {
                fVar12 = 5.0;
                fVar11 = this->players[local_18]->yaw;
                fVar10 = Atan2((this->players[local_18]->pos).x - 30.0,
                               (this->players[local_18]->pos).z + 15.0);
                fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
                this->players[local_18]->yaw = (float)fVar6;
              }
              pfVar5 = thunk_FUN_00419ae5(this,local_3d8,local_18);
              pPVar1 = this->players[local_18];
              (pPVar1->pos).x = *pfVar5;
              (pPVar1->pos).y = pfVar5[1];
              (pPVar1->pos).z = pfVar5[2];
              Player::Motion_42dfc0(this->players[local_18]);
            }
            else if (10.0 <= (this->players[local_18]->pos).x - (this->players[local_8]->pos).x) {
              if ((this->players[local_18]->pos).x - (this->players[local_8]->pos).x <= 15.0) {
                if (this->keyUp == DAT_004581e8 && this->keyNum8 == DAT_004581e8) {
                  fVar12 = 5.0;
                  fVar11 = this->players[local_18]->yaw;
                  fVar10 = Atan2((this->players[local_18]->pos).x - (this->v24c).x,
                                 (this->players[local_18]->pos).z - (this->v24c).z);
                  fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
                  this->players[local_18]->yaw = (float)fVar6;
                  Player::Motion_42df38(this->players[local_18]);
                }
              }
              else {
                fVar6 = thunk_FUN_004199d4((int)this,1.57,this->players[local_18]->yaw,5.0);
                this->players[local_18]->yaw = (float)fVar6;
                pfVar5 = thunk_FUN_00419ae5(this,local_3cc,local_18);
                pPVar1 = this->players[local_18];
                (pPVar1->pos).x = *pfVar5;
                (pPVar1->pos).y = pfVar5[1];
                (pPVar1->pos).z = pfVar5[2];
                Player::Motion_42dfc0(this->players[local_18]);
              }
            }
            else {
              fVar6 = thunk_FUN_004199d4((int)this,-1.57,this->players[local_18]->yaw,5.0);
              this->players[local_18]->yaw = (float)fVar6;
              pfVar5 = thunk_FUN_00419ae5(this,local_3c0,local_18);
              pPVar1 = this->players[local_18];
              (pPVar1->pos).x = *pfVar5;
              (pPVar1->pos).y = pfVar5[1];
              (pPVar1->pos).z = pfVar5[2];
              Player::Motion_42dfc0(this->players[local_18]);
            }
          }
          else {
            fVar6 = thunk_FUN_004199d4((int)this,3.14,this->players[local_18]->yaw,5.0);
            this->players[local_18]->yaw = (float)fVar6;
            pfVar5 = thunk_FUN_00419ae5(this,local_3b4,local_18);
            pPVar1 = this->players[local_18];
            (pPVar1->pos).x = *pfVar5;
            (pPVar1->pos).y = pfVar5[1];
            (pPVar1->pos).z = pfVar5[2];
            Player::Motion_42dfc0(this->players[local_18]);
          }
        }
        else {
          fVar6 = thunk_FUN_004199d4((int)this,0.0,this->players[local_18]->yaw,5.0);
          this->players[local_18]->yaw = (float)fVar6;
          pfVar5 = thunk_FUN_00419ae5(this,local_3a8,local_18);
          pPVar1 = this->players[local_18];
          (pPVar1->pos).x = *pfVar5;
          (pPVar1->pos).y = pfVar5[1];
          (pPVar1->pos).z = pfVar5[2];
          Player::Motion_42dfc0(this->players[local_18]);
        }
      }
      if (6 < (int)this->players[local_14]->f190 && (int)this->players[local_14]->f190 < 10) {
        if ((this->players[local_14]->pos).z <= 18.0) {
          if (-18.0 <= (this->players[local_14]->pos).z) {
            if (-35.0 <= (this->players[local_14]->pos).x) {
              if ((this->players[local_14]->pos).x <= 35.0) {
                if (-12.0 <= (this->players[local_14]->pos).x - (this->players[local_8]->pos).x) {
                  if ((this->players[local_14]->pos).x - (this->players[local_8]->pos).x <= 3.0) {
                    if ((this->players[local_14]->pos).z - (this->players[local_8]->pos).z <= 6.0) {
                      if (-6.0 <= (this->players[local_14]->pos).z - (this->players[local_8]->pos).z
                         ) {
                        if (this->keyX == DAT_00453618) {
                          this->players[local_14]->yaw =
                               this->dt * 5.0 + this->players[local_14]->yaw;
                          pfVar5 = thunk_FUN_00419ae5(this,local_444,local_14);
                          pPVar1 = this->players[local_14];
                          (pPVar1->pos).x = *pfVar5;
                          (pPVar1->pos).y = pfVar5[1];
                          (pPVar1->pos).z = pfVar5[2];
                          Player::Motion_42dfc0(this->players[local_14]);
                        }
                        else if (this->keyUp == DAT_004581e8 && this->keyNum8 == DAT_004581e8) {
                          fVar12 = 5.0;
                          fVar11 = this->players[local_14]->yaw;
                          fVar10 = Atan2((this->players[local_14]->pos).x - (this->v24c).x,
                                         (this->players[local_14]->pos).z - (this->v24c).z);
                          fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
                          this->players[local_14]->yaw = (float)fVar6;
                          Player::Motion_42df38(this->players[local_14]);
                        }
                      }
                      else {
                        fVar6 = thunk_FUN_004199d4((int)this,3.14,this->players[local_14]->yaw,5.0);
                        this->players[local_14]->yaw = (float)fVar6;
                        pfVar5 = thunk_FUN_00419ae5(this,local_438,local_14);
                        pPVar1 = this->players[local_14];
                        (pPVar1->pos).x = *pfVar5;
                        (pPVar1->pos).y = pfVar5[1];
                        (pPVar1->pos).z = pfVar5[2];
                        Player::Motion_42dfc0(this->players[local_14]);
                      }
                    }
                    else {
                      fVar6 = thunk_FUN_004199d4((int)this,0.0,this->players[local_14]->yaw,5.0);
                      this->players[local_14]->yaw = (float)fVar6;
                      pfVar5 = thunk_FUN_00419ae5(this,local_42c,local_14);
                      pPVar1 = this->players[local_14];
                      (pPVar1->pos).x = *pfVar5;
                      (pPVar1->pos).y = pfVar5[1];
                      (pPVar1->pos).z = pfVar5[2];
                      Player::Motion_42dfc0(this->players[local_14]);
                    }
                  }
                  else {
                    fVar6 = thunk_FUN_004199d4((int)this,1.57,this->players[local_14]->yaw,5.0);
                    this->players[local_14]->yaw = (float)fVar6;
                    pfVar5 = thunk_FUN_00419ae5(this,local_420,local_14);
                    pPVar1 = this->players[local_14];
                    (pPVar1->pos).x = *pfVar5;
                    (pPVar1->pos).y = pfVar5[1];
                    (pPVar1->pos).z = pfVar5[2];
                    Player::Motion_42dfc0(this->players[local_14]);
                  }
                }
                else {
                  fVar6 = thunk_FUN_004199d4((int)this,-1.57,this->players[local_14]->yaw,5.0);
                  this->players[local_14]->yaw = (float)fVar6;
                  pfVar5 = thunk_FUN_00419ae5(this,local_414,local_14);
                  pPVar1 = this->players[local_14];
                  (pPVar1->pos).x = *pfVar5;
                  (pPVar1->pos).y = pfVar5[1];
                  (pPVar1->pos).z = pfVar5[2];
                  Player::Motion_42dfc0(this->players[local_14]);
                }
              }
              else {
                fVar6 = thunk_FUN_004199d4((int)this,1.57,this->players[local_14]->yaw,5.0);
                this->players[local_14]->yaw = (float)fVar6;
                pfVar5 = thunk_FUN_00419ae5(this,local_408,local_14);
                pPVar1 = this->players[local_14];
                (pPVar1->pos).x = *pfVar5;
                (pPVar1->pos).y = pfVar5[1];
                (pPVar1->pos).z = pfVar5[2];
                Player::Motion_42dfc0(this->players[local_14]);
              }
            }
            else {
              fVar6 = thunk_FUN_004199d4((int)this,-1.57,this->players[local_14]->yaw,5.0);
              this->players[local_14]->yaw = (float)fVar6;
              pfVar5 = thunk_FUN_00419ae5(this,local_3fc,local_14);
              pPVar1 = this->players[local_14];
              (pPVar1->pos).x = *pfVar5;
              (pPVar1->pos).y = pfVar5[1];
              (pPVar1->pos).z = pfVar5[2];
              Player::Motion_42dfc0(this->players[local_14]);
            }
          }
          else {
            fVar6 = thunk_FUN_004199d4((int)this,3.14,this->players[local_14]->yaw,5.0);
            this->players[local_14]->yaw = (float)fVar6;
            pfVar5 = thunk_FUN_00419ae5(this,local_3f0,local_14);
            pPVar1 = this->players[local_14];
            (pPVar1->pos).x = *pfVar5;
            (pPVar1->pos).y = pfVar5[1];
            (pPVar1->pos).z = pfVar5[2];
            Player::Motion_42dfc0(this->players[local_14]);
          }
        }
        else {
          fVar6 = thunk_FUN_004199d4((int)this,0.0,this->players[local_14]->yaw,5.0);
          this->players[local_14]->yaw = (float)fVar6;
          pfVar5 = thunk_FUN_00419ae5(this,local_3e4,local_14);
          pPVar1 = this->players[local_14];
          (pPVar1->pos).x = *pfVar5;
          (pPVar1->pos).y = pfVar5[1];
          (pPVar1->pos).z = pfVar5[2];
          Player::Motion_42dfc0(this->players[local_14]);
        }
      }
    }
    if (this->i3b0 == 2) {
      if (this->players[this->slot[5]]->f190 != 1.4013e-44 &&
          this->players[this->slot[5]]->f190 != 1.68156e-44) {
        if (this->players[local_8]->f190 != 4.2039e-45 &&
            this->players[local_8]->f190 != 5.60519e-45 || 10.0 <= local_34) {
          if (this->i268 == this->slot[5]) {
            fVar12 = 5.0;
            fVar11 = this->players[this->slot[5]]->yaw;
            fVar10 = Atan2((this->players[this->slot[5]]->pos).x + 30.0,
                           (this->players[this->slot[5]]->pos).z);
            fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
            this->players[this->slot[5]]->yaw = (float)fVar6;
            if (this->b3a6 != '\0') {
              pfVar5 = thunk_FUN_00419ae5(this,local_510,this->slot[5]);
              pPVar1 = this->players[this->slot[5]];
              (pPVar1->pos).x = *pfVar5;
              (pPVar1->pos).y = pfVar5[1];
              (pPVar1->pos).z = pfVar5[2];
              Player::Motion_42f1a9(this->players[this->slot[5]]);
            }
          }
          else {
            fVar12 = 5.0;
            fVar11 = this->players[this->slot[5]]->yaw;
            fVar10 = Atan2((this->players[this->slot[5]]->pos).x - (this->v24c).x,
                           (this->players[this->slot[5]]->pos).z - (this->v24c).z);
            fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
            this->players[this->slot[5]]->yaw = (float)fVar6;
            if (this->b3a6 != '\0') {
              pfVar5 = thunk_FUN_00419ae5(this,local_504,this->slot[5]);
              pPVar1 = this->players[this->slot[5]];
              (pPVar1->pos).x = *pfVar5;
              (pPVar1->pos).y = pfVar5[1];
              (pPVar1->pos).z = pfVar5[2];
              Player::Motion_42dfc0(this->players[this->slot[5]]);
            }
          }
        }
        else {
          this->players[this->slot[5]]->yaw = this->dt * 2.0 + this->players[this->slot[5]]->yaw;
          if (this->b3a6 != '\0') {
            pfVar5 = thunk_FUN_00419ae5(this,local_4f8,this->slot[5]);
            pPVar1 = this->players[this->slot[5]];
            (pPVar1->pos).x = *pfVar5;
            (pPVar1->pos).y = pfVar5[1];
            (pPVar1->pos).z = pfVar5[2];
            Player::Motion_42dfc0(this->players[this->slot[5]]);
          }
        }
      }
      fVar12 = 2.0;
      fVar11 = this->players[this->slot[4]]->yaw;
      fVar10 = Atan2((this->players[this->slot[4]]->pos).x - (this->v24c).x,
                     (this->players[this->slot[4]]->pos).z - (this->v24c).z);
      fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
      this->players[this->slot[4]]->yaw = (float)fVar6;
      fVar12 = 2.0;
      fVar11 = this->players[this->slot[3]]->yaw;
      fVar10 = Atan2((this->players[this->slot[3]]->pos).x - (this->v24c).x,
                     (this->players[this->slot[3]]->pos).z - (this->v24c).z);
      fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
      this->players[this->slot[3]]->yaw = (float)fVar6;
    }
    else {
      if (this->i418 == 5) {
        if (this->b3a6 == '\0') {
          fVar12 = 2.0;
          fVar11 = this->players[local_38]->yaw;
          fVar10 = Atan2((this->players[local_38]->pos).x + 35.0,(this->players[local_38]->pos).z);
          fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
          this->players[local_38]->yaw = (float)fVar6;
          pfVar5 = thunk_FUN_00419ae5(this,local_528,local_38);
          pPVar1 = this->players[local_38];
          (pPVar1->pos).x = *pfVar5;
          (pPVar1->pos).y = pfVar5[1];
          (pPVar1->pos).z = pfVar5[2];
          Player::Motion_42dfc0(this->players[local_38]);
        }
        else {
          fVar12 = 2.0;
          fVar11 = this->players[local_38]->yaw;
          fVar10 = Atan2((this->players[local_38]->pos).x - 35.0,(this->players[local_38]->pos).z);
          fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
          this->players[local_38]->yaw = (float)fVar6;
          pfVar5 = thunk_FUN_00419ae5(this,local_51c,local_38);
          pPVar1 = this->players[local_38];
          (pPVar1->pos).x = *pfVar5;
          (pPVar1->pos).y = pfVar5[1];
          (pPVar1->pos).z = pfVar5[2];
          Player::Motion_42dfc0(this->players[local_38]);
        }
      }
      else if (local_38 == this->i268) {
        if ((int)this->players[local_38]->f190 < 4) {
          if ((this->b3a6 &
              (this->players[local_38]->pos).z * (this->players[local_38]->pos).z +
              ((this->players[local_38]->pos).x + 36.0) * ((this->players[local_38]->pos).x + 36.0)
              < 35.0) == 0) {
            if (this->b3a6 != '\0' ||
                35.0 <= (this->players[local_38]->pos).z * (this->players[local_38]->pos).z +
                        ((this->players[local_38]->pos).x - 36.0) *
                        ((this->players[local_38]->pos).x - 36.0)) {
              if ((this->b3a6 &
                  (this->players[local_38]->pos).z * (this->players[local_38]->pos).z +
                  ((this->players[local_38]->pos).x + 34.0) *
                  ((this->players[local_38]->pos).x + 34.0) < 30.0) == 0) {
                if (this->b3a6 != '\0' ||
                    30.0 <= (this->players[local_38]->pos).z * (this->players[local_38]->pos).z +
                            ((this->players[local_38]->pos).x - 34.0) *
                            ((this->players[local_38]->pos).x - 34.0)) {
                  if (this->b3a6 == '\0') {
                    if ((this->players[local_30]->pos).x - (this->players[local_38]->pos).x <= 15.0
                        || (((this->players[local_38]->pos).x < (this->players[local_8]->pos).x &&
                             (this->players[local_8]->pos).x < (this->players[local_30]->pos).x ||
                            (this->players[local_38]->pos).x < (this->players[local_18]->pos).x &&
                            (this->players[local_18]->pos).x < (this->players[local_30]->pos).x) ||
                           (this->players[local_38]->pos).x < (this->players[local_14]->pos).x &&
                           (this->players[local_14]->pos).x < (this->players[local_30]->pos).x)) {
                      fVar6 = (float10)thunk_FUN_00404990(this->players[local_38]);
                      local_54 = (float)fVar6;
                      local_50 = (float)(((fVar6 - (float10)2.0) * (float10)0.53 - (float10)1.0) /
                                        (float10)this->players[local_38]->stat17c);
                      if (1.0 <= local_50 ||
                          25.0 <= ((this->players[local_38]->pos).z -
                                  (this->players[local_8]->pos).z) *
                                  ((this->players[local_38]->pos).z -
                                  (this->players[local_8]->pos).z) +
                                  ((this->players[local_38]->pos).x -
                                  (this->players[local_8]->pos).x) *
                                  ((this->players[local_38]->pos).x -
                                  (this->players[local_8]->pos).x)) {
                        fVar12 = 10.0;
                        fVar11 = this->players[local_38]->yaw;
                        fVar10 = Atan2((this->players[local_38]->pos).x - 30.0,
                                       (this->players[local_38]->pos).z);
                        fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
                        this->players[local_38]->yaw = (float)fVar6;
                        pfVar5 = thunk_FUN_00419ae5(this,local_594,local_38);
                        pPVar1 = this->players[local_38];
                        (pPVar1->pos).x = *pfVar5;
                        (pPVar1->pos).y = pfVar5[1];
                        (pPVar1->pos).z = pfVar5[2];
                        Player::Motion_42f1a9(this->players[local_38]);
                      }
                      else {
                        Sound::Play(this->sound,1);
                        this->players[local_38]->f198 = 0.0;
                        this->players[local_38]->f190 = 1.54143e-44;
                        Player::Motion_430701(this->players[local_38]);
                        fVar11 = Atan2((this->players[local_38]->pos).x - 35.0,
                                       (this->players[local_38]->pos).z);
                        this->players[local_38]->yaw = fVar11;
                        this->f260 = this->players[local_38]->yaw - 3.14;
                        this->f25c = 23.0;
                        this->f258 = local_50 * this->players[local_38]->stat17c + 1.0;
                        fVar6 = (float10)thunk_FUN_00404960(this->players[local_38]);
                        (this->v24c).x =
                             (float)(-fVar6 * (float10)-2.0 +
                                    (float10)(this->players[local_38]->pos).x);
                        fVar6 = (float10)thunk_FUN_00404900(this);
                        (this->v24c).z =
                             (float)(fVar6 * (float10)-2.0 +
                                    (float10)(this->players[local_38]->pos).z);
                        this->i404 = local_38;
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
                      this->players[local_38]->f198 = 0.0;
                      fVar11 = Atan2((this->players[local_38]->pos).x -
                                     (this->players[local_30]->pos).x,
                                     (this->players[local_38]->pos).z -
                                     (this->players[local_30]->pos).z);
                      this->players[local_38]->yaw = fVar11;
                      this->players[local_38]->f190 = 1.4013e-44;
                      Player::Motion_4305b1(this->players[local_38]);
                      this->f260 = this->players[local_38]->yaw - 3.14;
                      this->f25c = this->players[local_38]->stat174;
                      this->f258 = this->players[local_38]->stat178;
                      fVar6 = (float10)thunk_FUN_00404960(local_38);
                      (this->v24c).x =
                           (float)(-fVar6 * (float10)-2.0 +
                                  (float10)(this->players[local_38]->pos).x);
                      (this->v24c).y = this->players[local_38]->stat170 * 0.9;
                      fVar6 = (float10)thunk_FUN_00404900(this);
                      (this->v24c).z =
                           (float)(fVar6 * (float10)-2.0 + (float10)(this->players[local_38]->pos).z
                                  );
                      this->i404 = local_38;
                      this->i268 = -1;
                    }
                  }
                  else if (-15.0 <= (this->players[local_30]->pos).x -
                                    (this->players[local_38]->pos).x ||
                           (((this->players[local_8]->pos).x < (this->players[local_38]->pos).x &&
                             (this->players[local_30]->pos).x < (this->players[local_8]->pos).x ||
                            (this->players[local_18]->pos).x < (this->players[local_38]->pos).x &&
                            (this->players[local_30]->pos).x < (this->players[local_18]->pos).x) ||
                           (this->players[local_14]->pos).x < (this->players[local_38]->pos).x &&
                           (this->players[local_30]->pos).x < (this->players[local_14]->pos).x)) {
                    fVar6 = (float10)thunk_FUN_00404990(this->players[local_38]);
                    local_4c = (float)fVar6;
                    local_48 = (float)(((fVar6 - (float10)2.0) * (float10)0.53 - (float10)1.0) /
                                      (float10)this->players[local_38]->stat17c);
                    if (1.0 <= local_48 ||
                        25.0 <= ((this->players[local_38]->pos).z - (this->players[local_8]->pos).z)
                                * ((this->players[local_38]->pos).z -
                                  (this->players[local_8]->pos).z) +
                                ((this->players[local_38]->pos).x - (this->players[local_8]->pos).x)
                                * ((this->players[local_38]->pos).x -
                                  (this->players[local_8]->pos).x)) {
                      fVar12 = 10.0;
                      fVar11 = this->players[local_38]->yaw;
                      fVar10 = Atan2((this->players[local_38]->pos).x + 30.0,
                                     (this->players[local_38]->pos).z);
                      fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
                      this->players[local_38]->yaw = (float)fVar6;
                      pfVar5 = thunk_FUN_00419ae5(this,local_588,local_38);
                      pPVar1 = this->players[local_38];
                      (pPVar1->pos).x = *pfVar5;
                      (pPVar1->pos).y = pfVar5[1];
                      (pPVar1->pos).z = pfVar5[2];
                      Player::Motion_42f1a9(this->players[local_38]);
                    }
                    else {
                      Sound::Play(this->sound,1);
                      this->players[local_38]->f198 = 0.0;
                      this->players[local_38]->f190 = 1.54143e-44;
                      Player::Motion_430701(this->players[local_38]);
                      fVar11 = Atan2((this->players[local_38]->pos).x + 35.0,
                                     (this->players[local_38]->pos).z);
                      this->players[local_38]->yaw = fVar11;
                      this->f260 = this->players[local_38]->yaw - 3.14;
                      this->f25c = 23.0;
                      this->f258 = local_48 * this->players[local_38]->stat17c + 1.0;
                      fVar6 = (float10)thunk_FUN_00404960(this);
                      (this->v24c).x =
                           (float)(-fVar6 * (float10)-2.0 +
                                  (float10)(this->players[local_38]->pos).x);
                      fVar6 = (float10)thunk_FUN_00404900(local_38);
                      (this->v24c).z =
                           (float)(fVar6 * (float10)-2.0 + (float10)(this->players[local_38]->pos).z
                                  );
                      this->i404 = local_38;
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
                    this->players[local_38]->f198 = 0.0;
                    fVar11 = Atan2((this->players[local_38]->pos).x -
                                   (this->players[local_30]->pos).x,
                                   (this->players[local_38]->pos).z -
                                   (this->players[local_30]->pos).z);
                    this->players[local_38]->yaw = fVar11;
                    this->players[local_38]->f190 = 1.4013e-44;
                    Player::Motion_4305b1(this->players[local_38]);
                    this->f260 = this->players[local_38]->yaw - 3.14;
                    this->f25c = this->players[local_38]->stat174;
                    this->f258 = this->players[local_38]->stat178;
                    fVar6 = (float10)thunk_FUN_00404960(this->players[local_38]);
                    (this->v24c).x =
                         (float)(-fVar6 * (float10)-2.0 + (float10)(this->players[local_38]->pos).x)
                    ;
                    (this->v24c).y = this->players[local_38]->stat170 * 0.9;
                    fVar6 = (float10)thunk_FUN_00404900(local_38);
                    (this->v24c).z =
                         (float)(fVar6 * (float10)-2.0 + (float10)(this->players[local_38]->pos).z);
                    this->i404 = local_38;
                    this->i268 = -1;
                  }
                }
                else {
                  fVar11 = Atan2((this->players[local_38]->pos).x - 37.0,
                                 (this->players[local_38]->pos).z);
                  this->players[local_38]->yaw = fVar11;
                  Sound::Play(this->sound,1);
                  this->players[local_38]->f190 = 8.40779e-45;
                  Player::Motion_430a58(this->players[local_38]);
                  this->players[local_38]->f198 = 0.0;
                  this->players[local_38]->f18c = 12.0;
                }
              }
              else {
                fVar11 = Atan2((this->players[local_38]->pos).x + 37.0,
                               (this->players[local_38]->pos).z);
                this->players[local_38]->yaw = fVar11;
                Sound::Play(this->sound,1);
                this->players[local_38]->f190 = 8.40779e-45;
                Player::Motion_430a58(this->players[local_38]);
                this->players[local_38]->f198 = 0.0;
                this->players[local_38]->f18c = 12.0;
              }
            }
            else {
              fVar10 = 5.0 / this->f400;
              fVar11 = this->players[local_38]->yaw;
              fVar12 = Atan2((this->players[local_38]->pos).x + 30.0,
                             (this->players[local_38]->pos).z);
              fVar6 = thunk_FUN_004199d4((int)this,fVar12,fVar11,fVar10);
              this->players[local_38]->yaw = (float)fVar6;
              pfVar5 = thunk_FUN_00419ae5(this,local_57c,local_38);
              pPVar1 = this->players[local_38];
              (pPVar1->pos).x = *pfVar5;
              (pPVar1->pos).y = pfVar5[1];
              (pPVar1->pos).z = pfVar5[2];
              Player::Motion_42f1a9(this->players[local_38]);
            }
          }
          else {
            fVar10 = 5.0 / this->f400;
            fVar11 = this->players[local_38]->yaw;
            fVar12 = Atan2((this->players[local_38]->pos).x - 30.0,(this->players[local_38]->pos).z)
            ;
            fVar6 = thunk_FUN_004199d4((int)this,fVar12,fVar11,fVar10);
            this->players[local_38]->yaw = (float)fVar6;
            pfVar5 = thunk_FUN_00419ae5(this,local_570,local_38);
            pPVar1 = this->players[local_38];
            (pPVar1->pos).x = *pfVar5;
            (pPVar1->pos).y = pfVar5[1];
            (pPVar1->pos).z = pfVar5[2];
            Player::Motion_42f1a9(this->players[local_38]);
          }
        }
      }
      else {
        if ((this->players[local_38]->pos).z <= 19.0) {
          if (-19.0 <= (this->players[local_38]->pos).z) {
            if (-35.0 <= (this->players[local_38]->pos).x) {
              if ((this->players[local_38]->pos).x <= 35.0) {
                if ((this->i3b0 != 0 || this->players[local_8]->f190 != 4.2039e-45) &&
                    this->players[local_8]->f190 != 5.60519e-45 || 10.0 <= local_34) {
                  if (this->players[this->i404]->b154 == '\0') {
                    fVar12 = 10.0;
                    fVar11 = this->players[local_38]->yaw;
                    fVar10 = Atan2((this->players[local_38]->pos).x - (this->v24c).x,
                                   (this->players[local_38]->pos).z - (this->v24c).z);
                    fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
                    this->players[local_38]->yaw = (float)fVar6;
                  }
                  else {
                    fVar10 = 5.0 / this->f400;
                    fVar11 = this->players[local_38]->yaw;
                    fVar12 = Atan2((this->players[local_38]->pos).x - (this->v24c).x,
                                   (this->players[local_38]->pos).z - (this->v24c).z);
                    fVar6 = thunk_FUN_004199d4((int)this,fVar12,fVar11,fVar10);
                    this->players[local_38]->yaw = (float)fVar6;
                  }
                }
                else {
                  this->players[local_38]->yaw = this->dt * 2.0 + this->players[local_38]->yaw;
                }
              }
              else {
                fVar6 = thunk_FUN_004199d4((int)this,1.57,this->players[local_38]->yaw,5.0);
                this->players[local_38]->yaw = (float)fVar6;
                pfVar5 = thunk_FUN_00419ae5(this,local_558,local_38);
                pPVar1 = this->players[local_38];
                (pPVar1->pos).x = *pfVar5;
                (pPVar1->pos).y = pfVar5[1];
                (pPVar1->pos).z = pfVar5[2];
                Player::Motion_42dfc0(this->players[local_38]);
              }
            }
            else {
              fVar6 = thunk_FUN_004199d4((int)this,-1.57,this->players[local_38]->yaw,5.0);
              this->players[local_38]->yaw = (float)fVar6;
              pfVar5 = thunk_FUN_00419ae5(this,local_54c,local_38);
              pPVar1 = this->players[local_38];
              (pPVar1->pos).x = *pfVar5;
              (pPVar1->pos).y = pfVar5[1];
              (pPVar1->pos).z = pfVar5[2];
              Player::Motion_42dfc0(this->players[local_38]);
            }
          }
          else {
            fVar6 = thunk_FUN_004199d4((int)this,3.14,this->players[local_38]->yaw,5.0);
            this->players[local_38]->yaw = (float)fVar6;
            pfVar5 = thunk_FUN_00419ae5(this,local_540,local_38);
            pPVar1 = this->players[local_38];
            (pPVar1->pos).x = *pfVar5;
            (pPVar1->pos).y = pfVar5[1];
            (pPVar1->pos).z = pfVar5[2];
            Player::Motion_42dfc0(this->players[local_38]);
          }
        }
        else {
          fVar6 = thunk_FUN_004199d4((int)this,0.0,this->players[local_38]->yaw,5.0);
          this->players[local_38]->yaw = (float)fVar6;
          pfVar5 = thunk_FUN_00419ae5(this,local_534,local_38);
          pPVar1 = this->players[local_38];
          (pPVar1->pos).x = *pfVar5;
          (pPVar1->pos).y = pfVar5[1];
          (pPVar1->pos).z = pfVar5[2];
          Player::Motion_42dfc0(this->players[local_38]);
        }
        pfVar5 = thunk_FUN_00419ae5(this,local_564,local_38);
        pPVar1 = this->players[local_38];
        (pPVar1->pos).x = *pfVar5;
        (pPVar1->pos).y = pfVar5[1];
        (pPVar1->pos).z = pfVar5[2];
        Player::Motion_42dfc0(this->players[local_38]);
      }
      if (6 < (int)this->players[local_30]->f190 && (int)this->players[local_30]->f190 < 10) {
        if ((this->players[local_30]->pos).z <= 18.0) {
          if (-18.0 <= (this->players[local_30]->pos).z) {
            if (-35.0 <= (this->players[local_30]->pos).x) {
              if ((this->players[local_30]->pos).x <= 35.0) {
                if (this->i268 == local_38) {
                  if (this->b3a6 == '\0') {
                    if ((this->players[local_30]->pos).x <= 25.0) {
                      if (this->b3a6 != '\0' ||
                          8.0 <= (this->players[local_30]->pos).x - (this->players[local_38]->pos).x
                         ) {
                        fVar12 = 5.0;
                        fVar11 = this->players[local_30]->yaw;
                        fVar10 = Atan2((this->players[local_30]->pos).x - 28.0,
                                       (this->players[local_30]->pos).z);
                        fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
                        this->players[local_30]->yaw = (float)fVar6;
                        pfVar5 = thunk_FUN_00419ae5(this,local_60c,local_30);
                        pPVar1 = this->players[local_30];
                        (pPVar1->pos).x = *pfVar5;
                        (pPVar1->pos).y = pfVar5[1];
                        (pPVar1->pos).z = pfVar5[2];
                        Player::Motion_42dfc0(this->players[local_30]);
                      }
                      else {
                        fVar6 = thunk_FUN_004199d4((int)this,-1.57,this->players[local_30]->yaw,5.0)
                        ;
                        this->players[local_30]->yaw = (float)fVar6;
                        pfVar5 = thunk_FUN_00419ae5(this,local_600,local_30);
                        pPVar1 = this->players[local_30];
                        (pPVar1->pos).x = *pfVar5;
                        (pPVar1->pos).y = pfVar5[1];
                        (pPVar1->pos).z = pfVar5[2];
                        Player::Motion_42dfc0(this->players[local_30]);
                      }
                    }
                    else if ((this->players[local_38]->pos).x <= 18.0) {
                      fVar12 = 5.0;
                      fVar11 = this->players[local_30]->yaw;
                      fVar10 = Atan2((this->players[local_30]->pos).x - (this->v24c).x,
                                     (this->players[local_30]->pos).z - (this->v24c).z);
                      fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
                      this->players[local_30]->yaw = (float)fVar6;
                      Player::Motion_42df38(this->players[local_30]);
                    }
                    else {
                      fVar12 = 5.0;
                      fVar11 = this->players[local_30]->yaw;
                      fVar10 = Atan2((this->players[local_30]->pos).x - 30.0,
                                     (this->players[local_30]->pos).z - 15.0);
                      fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
                      this->players[local_30]->yaw = (float)fVar6;
                      pfVar5 = thunk_FUN_00419ae5(this,local_5f4,local_30);
                      pPVar1 = this->players[local_30];
                      (pPVar1->pos).x = *pfVar5;
                      (pPVar1->pos).y = pfVar5[1];
                      (pPVar1->pos).z = pfVar5[2];
                      Player::Motion_42dfc0(this->players[local_30]);
                    }
                  }
                  else if (-25.0 <= (this->players[local_30]->pos).x) {
                    if ((this->players[local_30]->pos).x - (this->players[local_38]->pos).x <= -8.0)
                    {
                      fVar12 = 5.0;
                      fVar11 = this->players[local_30]->yaw;
                      fVar10 = Atan2((this->players[local_30]->pos).x + 28.0,
                                     (this->players[local_30]->pos).z);
                      fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
                      this->players[local_30]->yaw = (float)fVar6;
                      pfVar5 = thunk_FUN_00419ae5(this,local_5e8,local_30);
                      pPVar1 = this->players[local_30];
                      (pPVar1->pos).x = *pfVar5;
                      (pPVar1->pos).y = pfVar5[1];
                      (pPVar1->pos).z = pfVar5[2];
                      Player::Motion_42dfc0(this->players[local_30]);
                    }
                    else {
                      fVar6 = thunk_FUN_004199d4((int)this,1.57,this->players[local_30]->yaw,5.0);
                      this->players[local_30]->yaw = (float)fVar6;
                      pfVar5 = thunk_FUN_00419ae5(this,local_5dc,local_30);
                      pPVar1 = this->players[local_30];
                      (pPVar1->pos).x = *pfVar5;
                      (pPVar1->pos).y = pfVar5[1];
                      (pPVar1->pos).z = pfVar5[2];
                      Player::Motion_42dfc0(this->players[local_30]);
                    }
                  }
                  else if (-18.0 <= (this->players[local_38]->pos).x) {
                    fVar12 = 5.0;
                    fVar11 = this->players[local_30]->yaw;
                    fVar10 = Atan2((this->players[local_30]->pos).x - (this->v24c).x,
                                   (this->players[local_30]->pos).z - (this->v24c).z);
                    fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
                    this->players[local_30]->yaw = (float)fVar6;
                    Player::Motion_42df38(this->players[local_30]);
                  }
                  else {
                    fVar12 = 5.0;
                    fVar11 = this->players[local_30]->yaw;
                    fVar10 = Atan2((this->players[local_30]->pos).x + 30.0,
                                   (this->players[local_30]->pos).z - 15.0);
                    fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
                    this->players[local_30]->yaw = (float)fVar6;
                    pfVar5 = thunk_FUN_00419ae5(this,local_5d0,local_30);
                    pPVar1 = this->players[local_30];
                    (pPVar1->pos).x = *pfVar5;
                    (pPVar1->pos).y = pfVar5[1];
                    (pPVar1->pos).z = pfVar5[2];
                    Player::Motion_42dfc0(this->players[local_30]);
                  }
                }
                else {
                  fVar10 = 5.0 / this->f400;
                  fVar11 = this->players[local_30]->yaw;
                  fVar12 = Atan2((this->players[local_30]->pos).x -
                                 ((this->players[local_14]->pos).x + (this->v24c).x) / 2.0,
                                 (this->players[local_30]->pos).z -
                                 ((this->players[local_14]->pos).z + (this->v24c).z) / 2.0);
                  fVar6 = thunk_FUN_004199d4((int)this,fVar12,fVar11,fVar10);
                  this->players[local_30]->yaw = (float)fVar6;
                  pfVar5 = thunk_FUN_00419ae5(this,local_618,local_30);
                  pPVar1 = this->players[local_30];
                  (pPVar1->pos).x = *pfVar5;
                  (pPVar1->pos).y = pfVar5[1];
                  (pPVar1->pos).z = pfVar5[2];
                  Player::Motion_42dfc0(this->players[local_30]);
                }
              }
              else {
                fVar6 = thunk_FUN_004199d4((int)this,1.57,this->players[local_30]->yaw,5.0);
                this->players[local_30]->yaw = (float)fVar6;
                pfVar5 = thunk_FUN_00419ae5(this,local_5c4,local_30);
                pPVar1 = this->players[local_30];
                (pPVar1->pos).x = *pfVar5;
                (pPVar1->pos).y = pfVar5[1];
                (pPVar1->pos).z = pfVar5[2];
                Player::Motion_42dfc0(this->players[local_30]);
              }
            }
            else {
              fVar6 = thunk_FUN_004199d4((int)this,-1.57,this->players[local_30]->yaw,5.0);
              this->players[local_30]->yaw = (float)fVar6;
              pfVar5 = thunk_FUN_00419ae5(this,local_5b8,local_30);
              pPVar1 = this->players[local_30];
              (pPVar1->pos).x = *pfVar5;
              (pPVar1->pos).y = pfVar5[1];
              (pPVar1->pos).z = pfVar5[2];
              Player::Motion_42dfc0(this->players[local_30]);
            }
          }
          else {
            fVar6 = thunk_FUN_004199d4((int)this,3.14,this->players[local_30]->yaw,5.0);
            this->players[local_30]->yaw = (float)fVar6;
            pfVar5 = thunk_FUN_00419ae5(this,local_5ac,local_30);
            pPVar1 = this->players[local_30];
            (pPVar1->pos).x = *pfVar5;
            (pPVar1->pos).y = pfVar5[1];
            (pPVar1->pos).z = pfVar5[2];
            Player::Motion_42dfc0(this->players[local_30]);
          }
        }
        else {
          fVar6 = thunk_FUN_004199d4((int)this,0.0,this->players[local_30]->yaw,5.0);
          this->players[local_30]->yaw = (float)fVar6;
          pfVar5 = thunk_FUN_00419ae5(this,local_5a0,local_30);
          pPVar1 = this->players[local_30];
          (pPVar1->pos).x = *pfVar5;
          (pPVar1->pos).y = pfVar5[1];
          (pPVar1->pos).z = pfVar5[2];
          Player::Motion_42dfc0(this->players[local_30]);
        }
      }
      if (6 < (int)this->players[local_2c]->f190 && (int)this->players[local_2c]->f190 < 10) {
        if ((this->players[local_2c]->pos).z <= 18.0) {
          if (-18.0 <= (this->players[local_2c]->pos).z) {
            if (-35.0 <= (this->players[local_2c]->pos).x) {
              if ((this->players[local_2c]->pos).x <= 35.0) {
                if (this->i268 == local_8) {
                  if (this->b3a6 == '\0') {
                    if (2.0 <= (this->players[local_18]->pos).x - (this->players[local_2c]->pos).x)
                    {
                      fVar12 = 5.0;
                      fVar11 = this->players[local_2c]->yaw;
                      fVar10 = Atan2((this->players[local_2c]->pos).x - (this->v24c).x,
                                     (this->players[local_2c]->pos).z - (this->v24c).z);
                      fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
                      this->players[local_2c]->yaw = (float)fVar6;
                      Player::Motion_42df38(this->players[local_2c]);
                    }
                    else {
                      fVar12 = 5.0;
                      fVar11 = this->players[local_2c]->yaw;
                      fVar10 = Atan2((this->players[local_2c]->pos).x -
                                     ((this->players[local_18]->pos).x - 2.0),
                                     (this->players[local_2c]->pos).z);
                      fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
                      this->players[local_2c]->yaw = (float)fVar6;
                      pfVar5 = thunk_FUN_00419ae5(this,local_660,local_2c);
                      pPVar1 = this->players[local_2c];
                      (pPVar1->pos).x = *pfVar5;
                      (pPVar1->pos).y = pfVar5[1];
                      (pPVar1->pos).z = pfVar5[2];
                      Player::Motion_42dfc0(this->players[local_2c]);
                    }
                  }
                  else if ((this->players[local_18]->pos).x - (this->players[local_2c]->pos).x <=
                           -2.0) {
                    fVar12 = 5.0;
                    fVar11 = this->players[local_2c]->yaw;
                    fVar10 = Atan2((this->players[local_2c]->pos).x - (this->v24c).x,
                                   (this->players[local_2c]->pos).z - (this->v24c).z);
                    fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
                    this->players[local_2c]->yaw = (float)fVar6;
                    Player::Motion_42df38(this->players[local_2c]);
                  }
                  else {
                    fVar12 = 5.0;
                    fVar11 = this->players[local_2c]->yaw;
                    fVar10 = Atan2((this->players[local_2c]->pos).x -
                                   ((this->players[local_18]->pos).x + 2.0),
                                   (this->players[local_2c]->pos).z);
                    fVar6 = thunk_FUN_004199d4((int)this,fVar10,fVar11,fVar12);
                    this->players[local_2c]->yaw = (float)fVar6;
                    pfVar5 = thunk_FUN_00419ae5(this,local_654,local_2c);
                    pPVar1 = this->players[local_2c];
                    (pPVar1->pos).x = *pfVar5;
                    (pPVar1->pos).y = pfVar5[1];
                    (pPVar1->pos).z = pfVar5[2];
                    Player::Motion_42dfc0(this->players[local_2c]);
                  }
                }
                else {
                  fVar10 = 5.0 / this->f400;
                  fVar11 = this->players[local_2c]->yaw;
                  fVar12 = Atan2((this->players[local_2c]->pos).x -
                                 ((this->players[local_18]->pos).x + (this->v24c).x) / 2.0,
                                 (this->players[local_2c]->pos).z -
                                 ((this->players[local_18]->pos).z + (this->v24c).z) / 2.0);
                  fVar6 = thunk_FUN_004199d4((int)this,fVar12,fVar11,fVar10);
                  this->players[local_2c]->yaw = (float)fVar6;
                  pfVar5 = thunk_FUN_00419ae5(this,local_66c,local_2c);
                  pPVar1 = this->players[local_2c];
                  (pPVar1->pos).x = *pfVar5;
                  (pPVar1->pos).y = pfVar5[1];
                  (pPVar1->pos).z = pfVar5[2];
                  Player::Motion_42dfc0(this->players[local_2c]);
                }
              }
              else {
                fVar6 = thunk_FUN_004199d4((int)this,1.57,this->players[local_2c]->yaw,5.0);
                this->players[local_2c]->yaw = (float)fVar6;
                pfVar5 = thunk_FUN_00419ae5(this,local_648,local_2c);
                pPVar1 = this->players[local_2c];
                (pPVar1->pos).x = *pfVar5;
                (pPVar1->pos).y = pfVar5[1];
                (pPVar1->pos).z = pfVar5[2];
                Player::Motion_42dfc0(this->players[local_2c]);
              }
            }
            else {
              fVar6 = thunk_FUN_004199d4((int)this,-1.57,this->players[local_2c]->yaw,5.0);
              this->players[local_2c]->yaw = (float)fVar6;
              pfVar5 = thunk_FUN_00419ae5(this,local_63c,local_2c);
              pPVar1 = this->players[local_2c];
              (pPVar1->pos).x = *pfVar5;
              (pPVar1->pos).y = pfVar5[1];
              (pPVar1->pos).z = pfVar5[2];
              Player::Motion_42dfc0(this->players[local_2c]);
            }
          }
          else {
            fVar6 = thunk_FUN_004199d4((int)this,3.14,this->players[local_2c]->yaw,5.0);
            this->players[local_2c]->yaw = (float)fVar6;
            pfVar5 = thunk_FUN_00419ae5(this,local_630,local_2c);
            pPVar1 = this->players[local_2c];
            (pPVar1->pos).x = *pfVar5;
            (pPVar1->pos).y = pfVar5[1];
            (pPVar1->pos).z = pfVar5[2];
            Player::Motion_42dfc0(this->players[local_2c]);
          }
        }
        else {
          fVar6 = thunk_FUN_004199d4((int)this,0.0,this->players[local_2c]->yaw,5.0);
          this->players[local_2c]->yaw = (float)fVar6;
          pfVar5 = thunk_FUN_00419ae5(this,local_624,local_2c);
          pPVar1 = this->players[local_2c];
          (pPVar1->pos).x = *pfVar5;
          (pPVar1->pos).y = pfVar5[1];
          (pPVar1->pos).z = pfVar5[2];
          Player::Motion_42dfc0(this->players[local_2c]);
        }
      }
    }
    for (local_20 = 0; local_20 < 6; local_20 = local_20 + 1) {
      if (local_20 == this->i268) {
        for (local_58 = 0; local_58 < 6; local_58 = local_58 + 1) {
          if (this->players[local_58]->f190 == 2.10195e-44) {
            this->players[local_58]->f190 = 9.80909e-45;
          }
        }
        if (this->players[local_20]->f190 == 8.40779e-45) {
          this->i3b8 = 1;
          this->players[local_20]->f198 = this->players[local_20]->f198 + this->dt;
          this->players[local_20]->f18c = this->players[local_20]->f18c - this->dt * 20.0;
          if (0.8 <= this->players[local_20]->f198) {
            this->players[local_20]->f190 = 2.10195e-44;
            this->players[local_20]->f198 = 0.0;
            (this->players[local_20]->pos).y = 0.0;
            Player::Motion_42df38(this->players[local_20]);
            Sound::Play(this->sound,2);
            this->f260 = this->players[local_20]->yaw - 3.14;
            this->f25c = 14.0;
            this->f258 = 2.0;
            (this->v24c).y = 8.43;
            this->b3a8 = '\0';
            this->i404 = local_20;
            this->i268 = -1;
          }
          else {
            pPVar1 = this->players[local_20];
            fVar6 = (float10)thunk_FUN_00404960(this);
            (this->players[local_20]->pos).x =
                 (float)((float10)(pPVar1->pos).x -
                        fVar6 * (float10)this->players[local_20]->stat168 * (float10)0.6 *
                        (float10)this->dt);
            (this->players[local_20]->pos).y =
                 this->players[local_20]->f18c * this->dt + (this->players[local_20]->pos).y;
            pPVar1 = this->players[local_20];
            fVar6 = (float10)thunk_FUN_00404900(this);
            (this->players[local_20]->pos).z =
                 (float)((float10)(pPVar1->pos).z -
                        fVar6 * (float10)this->players[local_20]->stat168 * (float10)0.6 *
                        (float10)this->dt);
          }
        }
      }
      else if (this->players[local_20]->f190 == 1.68156e-44) {
        this->players[local_20]->f198 = this->players[local_20]->f198 + this->dt;
        if (0.8 < this->players[local_20]->f198) {
          this->players[local_20]->f190 = 9.80909e-45;
          this->players[local_20]->f198 = 0.0;
          Player::Motion_42df38(this->players[local_20]);
        }
      }
      else if (this->players[local_20]->f190 == 1.4013e-44) {
        this->players[local_20]->f198 = this->players[local_20]->f198 + this->dt;
        if (0.8 < this->players[local_20]->f198) {
          this->players[local_20]->f190 = 2.10195e-44;
          this->players[local_20]->f198 = 0.0;
          Player::Motion_42df38(this->players[local_20]);
        }
      }
      else if (this->players[local_20]->f190 == 1.54143e-44) {
        this->players[local_20]->f198 = this->players[local_20]->f198 + this->dt;
        if (0.8 < this->players[local_20]->f198) {
          this->players[local_20]->f190 = 2.10195e-44;
          this->players[local_20]->f198 = 0.0;
          Player::Motion_42df38(this->players[local_20]);
          this->i3b8 = 1;
        }
      }
      else if (this->players[local_20]->f190 == 8.40779e-45) {
        this->players[local_20]->f190 = 2.10195e-44;
      }
    }
    if (((((((this->b414 == '\0' && local_1c < 8.0) && 6 < (int)this->players[local_8]->f190) &&
           (int)this->players[local_8]->f190 < 10) && (this->v24c).y < 5.0) &&
         this->players[local_38]->f190 != 4.2039e-45) &&
        this->players[local_38]->f190 != 5.60519e-45) &&
        this->players[local_38]->f190 != 8.40779e-45) {
      if (-1 < this->i268) {
        this->players[this->i268]->f198 = 0.0;
        this->players[this->i268]->f190 = 1.68156e-44;
        Player::Motion_43030b(this->players[this->i268]);
      }
      this->i268 = local_8;
      this->i404 = local_8;
      this->players[local_8]->f190 = 0.0;
    }
    if (((((((this->b414 == '\0' && local_34 < 8.0) && 6 < (int)this->players[local_38]->f190) &&
           (int)this->players[local_38]->f190 < 10) && (this->v24c).y < 5.0) &&
         this->players[local_8]->f190 != 4.2039e-45) && this->players[local_8]->f190 != 5.60519e-45)
        && this->players[local_8]->f190 != 8.40779e-45) {
      if (-1 < this->i268) {
        this->players[this->i268]->f198 = 0.0;
        this->players[this->i268]->f190 = 1.68156e-44;
        Player::Motion_43030b(this->players[this->i268]);
      }
      this->i268 = local_38;
      this->i404 = local_38;
      this->players[local_38]->f190 = 0.0;
      Player::Motion_42ee86(this->players[local_38]);
    }
    if (-1 < this->i268) {
      local_5c = -1.5;
      local_60 = -1.0;
      if (this->players[this->i268]->f190 == 4.2039e-45 ||
          this->players[this->i268]->f190 == 5.60519e-45) {
        local_5c = 0.0;
        local_60 = -0.8;
      }
      else if (this->players[this->i268]->f190 == 8.40779e-45) {
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
      fVar7 = (float10)thunk_FUN_00404900(this);
      fVar6 = (float10)local_5c;
      fVar8 = (float10)thunk_FUN_00404960(this->i268);
      (this->v24c).x =
           (float)(((float10)(float)(fVar7 * fVar6) - fVar8 * (float10)local_60) +
                  (float10)(this->players[this->i268]->pos).x);
      fVar7 = (float10)thunk_FUN_00404960(this->i268);
      fVar6 = (float10)local_5c;
      fVar8 = (float10)thunk_FUN_00404900(this->players[this->i268]);
      (this->v24c).z =
           (float)(fVar8 * (float10)local_60 + (float10)(float)(fVar7 * fVar6) +
                  (float10)(this->players[this->i268]->pos).z);
      if (this->players[this->i268]->f190 == 4.2039e-45) {
        (this->v24c).y = 3.5;
      }
      else if (this->players[this->i268]->f190 == 5.60519e-45) {
        (this->v24c).y = this->players[this->i268]->stat170 * 0.9;
      }
      else if (this->players[this->i268]->f190 == 8.40779e-45) {
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
          if (this->players[this->i268]->f190 == 1.4013e-45) {
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
      fVar6 = (float10)thunk_FUN_00404960(this->players[this->i3fc]);
      (this->camPos).x = (float)((float10)(pPVar1->pos).x - fVar6 * (float10)8.0);
      pPVar1 = this->players[this->i3fc];
      fVar6 = (float10)thunk_FUN_00404900(this->i3fc);
      (this->camPos).z = (float)(fVar6 * (float10)8.0 + (float10)(pPVar1->pos).z);
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
      (this->camPos).x = (this->players[local_8]->pos).x;
      if (this->players[local_8]->f190 == 8.40779e-45) {
        (this->camPos).y = 15.0;
      }
      else {
        (this->camPos).y = 12.0;
      }
      (this->camPos).z = (this->players[local_8]->pos).z - 20.0;
      (this->camDir).x = 0.0;
      (this->camDir).y = -0.5;
      (this->camDir).z = 1.0;
      this->f3a0 = 0.0;
      this->i39c = 0;
    }
    if (this->b3a6 == '\0') {
      fVar6 = (float10)thunk_FUN_00404990(this);
      local_24 = (float)fVar6;
      pPVar1 = this->players[local_8];
      local_10 = Atan2((this->players[local_8]->pos).x + 35.0,(this->players[local_8]->pos).z);
      local_10 = pPVar1->yaw - local_10;
    }
    else {
      fVar6 = (float10)thunk_FUN_00404990(this->players[local_8]);
      local_24 = (float)fVar6;
      pPVar1 = this->players[local_8];
      local_10 = Atan2((this->players[local_8]->pos).x - 35.0,(this->players[local_8]->pos).z);
      local_10 = pPVar1->yaw - local_10;
    }
    local_c = ((local_24 - 2.0) * 0.53 - 1.0) / this->players[local_8]->stat17c;
    if (((local_24 <= 4.0 || 9.0 <= local_24) ||
        this->keyUp != DAT_00453618 && this->keyNum8 != DAT_00453618) ||
        (local_10 <= -0.785 || 0.785 <= local_10)) {
      if (local_c <= 0.0 || 1.0 < local_c) {
        this->i3ac = 1;
      }
      else {
        this->i3ac = 2;
        if (0.0001 < this->f3a0) {
          lVar9 = __ftol();
          this->i39c = (int)lVar9;
        }
      }
    }
    else {
      this->i3ac = 3;
    }
    if (this->players[local_8]->f190 == 4.2039e-45) {
      this->i3ac = 0;
    }
    (this->v240).x = (this->players[local_8]->pos).x;
    (this->v240).z = (this->players[local_8]->pos).z;
  }
  else {
    if (this->i3b8 < 5) {
      (this->v24c).y = 0.7;
      this->f25c = 0.0;
      this->f390 = 0.0;
      if (this->b3a6 == '\0') {
        Sound::Play(this->sound,0);
        for (local_3c = 0; local_3c < 6; local_3c = local_3c + 1) {
          this->players[local_3c]->f190 = 9.80909e-45;
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

