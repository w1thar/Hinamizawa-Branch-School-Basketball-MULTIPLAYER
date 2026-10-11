// Game::State5 @ 0041fe31  size=5403

void __thiscall Game::State5(Game *this)

{
  Player *pPVar1;
  Vec3 *pVVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  undefined1 local_b0 [12];
  undefined1 local_a4 [12];
  undefined1 local_98 [12];
  undefined1 local_8c [12];
  undefined1 local_80 [12];
  undefined1 local_74 [12];
  undefined1 local_68 [12];
  undefined1 local_5c [12];
  undefined1 local_50 [12];
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
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
      this->players[local_8]->f190 = 0.0;
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
      pVVar2 = Vec3_Set(local_74,(Vec3 *)0x40e00000,0.0,-7.0,2.355);
      Player::SetPos(this->players[this->slot[0]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
      fVar5 = 0.785;
      pVVar2 = Vec3_Set(local_80,(Vec3 *)0x40e00000,0.0,7.0,0.785);
      Player::SetPos(this->players[this->slot[1]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
      fVar5 = -1.571;
      pVVar2 = Vec3_Set(local_8c,(Vec3 *)0xc0000000,0.0,0.0,-1.571);
      Player::SetPos(this->players[this->slot[2]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
      fVar5 = -2.355;
      pVVar2 = Vec3_Set(local_98,(Vec3 *)0xc0e00000,0.0,-7.0,-2.355);
      Player::SetPos(this->players[this->slot[3]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
      fVar5 = -0.785;
      pVVar2 = Vec3_Set(local_a4,(Vec3 *)0xc0e00000,0.0,7.0,-0.785);
      Player::SetPos(this->players[this->slot[4]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
      fVar5 = 1.571;
      pVVar2 = Vec3_Set(local_b0,(Vec3 *)0x40000000,0.0,0.0,1.571);
      Player::SetPos(this->players[this->slot[5]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
    }
    else {
      fVar5 = -2.355;
      pVVar2 = Vec3_Set(local_14,(Vec3 *)0xc0e00000,0.0,-7.0,-2.355);
      Player::SetPos(this->players[this->slot[0]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
      fVar5 = -0.785;
      pVVar2 = Vec3_Set(local_20,(Vec3 *)0xc0e00000,0.0,7.0,-0.785);
      Player::SetPos(this->players[this->slot[1]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
      fVar5 = 1.571;
      pVVar2 = Vec3_Set(local_2c,(Vec3 *)0x40000000,0.0,0.0,1.571);
      Player::SetPos(this->players[this->slot[2]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
      if (this->i3b0 == 2) {
        fVar5 = 0.0;
        pVVar2 = Vec3_Set(local_38,(Vec3 *)0xc0000000,0.0,23.0,0.0);
        Player::SetPos(this->players[this->slot[3]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
        fVar5 = 0.0;
        pVVar2 = Vec3_Set(local_44,(Vec3 *)0x40000000,0.0,23.0,0.0);
        Player::SetPos(this->players[this->slot[4]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
      }
      else {
        fVar5 = 2.355;
        pVVar2 = Vec3_Set(local_50,(Vec3 *)0x40e00000,0.0,-7.0,2.355);
        Player::SetPos(this->players[this->slot[3]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
        fVar5 = 0.785;
        pVVar2 = Vec3_Set(local_5c,(Vec3 *)0x40e00000,0.0,7.0,0.785);
        Player::SetPos(this->players[this->slot[4]],pVVar2->x,pVVar2->y,pVVar2->z,fVar5);
      }
      fVar5 = -1.571;
      pVVar2 = Vec3_Set(local_68,(Vec3 *)0xc0000000,0.0,0.0,-1.571);
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
          this->players[local_8]->f190 = 9.80909e-45;
        }
        this->i3b8 = 1;
      }
      else if (this->f390 <= 1.0 || this->i3b8 != 1) {
        this->f3e0 = this->f3e0 - this->dt;
        if (this->i3b8 == 2 &&
            ((this->keyX == DAT_00452ed8 || this->keyZ == DAT_00452ed8) ||
            this->keyC == DAT_00452ed8)) {
          Player::Motion_43006a(this->players[this->slot[2]]);
          this->f3a0 = this->f3a0 + this->dt;
          if (1.0 < this->f3a0) {
            this->f3a0 = 0.001;
          }
        }
        if (this->i3b8 == 2 &&
            ((this->keyX == DAT_00452ed4 || this->keyZ == DAT_00452ed4) ||
            this->keyC == DAT_00452ed4)) {
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
            this->players[this->slot[2]]->f190 = 2.10195e-44;
            if (this->i3b0 == 2) {
              this->players[this->slot[5]]->f190 = 9.80909e-45;
            }
            else {
              this->players[this->slot[5]]->f190 = 2.10195e-44;
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
            this->players[this->slot[2]]->f190 = 2.10195e-44;
            this->players[this->slot[5]]->f190 = 2.10195e-44;
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
      fVar4 = (float10)thunk_FUN_00404960(this);
      (this->camPos).x = (float)(fVar4 * (float10)((fVar5 - 3.0) * 10.0));
      fVar5 = this->f390;
      fVar4 = (float10)thunk_FUN_00404900(this);
      (this->camPos).z = (float)(fVar4 * (float10)((fVar5 - 3.0) * 10.0));
      (this->camDir).x = -(this->camPos).x;
      (this->camDir).z = -(this->camPos).z;
      (this->camDir).y = 5.0 - (this->camPos).y;
    }
  }
  else {
    (this->camPos).y = (this->camPos).y - this->dt * 30.0;
    fVar4 = (float10)thunk_FUN_00404960(this);
    (this->camPos).x = (float)(fVar4 * (float10)0.001);
    fVar4 = (float10)thunk_FUN_00404900(this);
    (this->camPos).z = (float)(fVar4 * (float10)0.001);
    (this->camDir).x = -(this->camPos).x;
    (this->camDir).z = -(this->camPos).z;
    (this->camDir).y = 5.0 - (this->camPos).y;
  }
  return;
}

