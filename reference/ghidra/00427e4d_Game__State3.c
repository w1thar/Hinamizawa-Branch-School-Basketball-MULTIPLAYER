// Game::State3 @ 00427e4d  size=1604

void __thiscall Game::State3(Game *this)

{
  Vec3 *pVVar1;
  float fVar2;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  this->f390 = this->f390 + this->dt;
  if (((this->v24c).y < 1.0 && -1.0 < this->f25c) && this->f25c < 7.0) {
    this->f25c = 25.0;
  }
  if ((this->keyUp == DAT_00454158 || this->keyNum8 == DAT_00454158) && (0 < this->i3b0)) {
    this->i3b0 = this->i3b0 + -1;
    Sound::Play(this->sound,2);
    if (this->i3b0 == 0) {
      for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
        Player::SetFace(this->players[local_8],0);
        Player::fn_42ddac(this->players[local_8]);
        Player::fn_42de30(this->players[local_8]);
        Player::fn_42deb4(this->players[local_8]);
        this->f400 = 4.0;
      }
    }
    if (this->i3b0 == 1) {
      for (local_c = 0; local_c < 6; local_c = local_c + 1) {
        Player::SetFace(this->players[local_c],0);
        Player::fn_42ddac(this->players[local_c]);
        Player::fn_42de30(this->players[local_c]);
        Player::fn_42deb4(this->players[local_c]);
        this->f400 = 4.0;
      }
    }
  }
  if ((this->keyDown == DAT_00454158 || this->keyNum2 == DAT_00454158) && (this->i3b0 < 2)) {
    this->i3b0 = this->i3b0 + 1;
    Sound::Play(this->sound,2);
    if (this->i3b0 == 1) {
      for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
        Player::SetFace(this->players[local_10],0);
        Player::fn_42ddac(this->players[local_10]);
        Player::fn_42de30(this->players[local_10]);
        Player::fn_42deb4(this->players[local_10]);
        this->f400 = 4.0;
      }
    }
    if (this->i3b0 == 2) {
      for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
        Player::SetFace(this->players[local_14],1);
        Player::fn_42ddac(this->players[local_14]);
        Player::fn_42de30(this->players[local_14]);
        Player::fn_42deb4(this->players[local_14]);
        this->f400 = 4.0;
      }
    }
  }
  if ((((this->keyX == DAT_00454158 || this->keyZ == DAT_00454158) || this->keyC == DAT_00454158) ||
      this->keySpace == DAT_00454158) || this->keyEnter == DAT_00454158) {
    Sound::Play(this->sound,1);
    this->f390 = 0.0;
    this->f394 = 1.0;
    this->b39a = '\0';
    Sound::OpenMp3(this->sound);
  }
  if (this->b39a == '\0' && 0.5 < this->f390) {
    (this->camPos).x = 0.0;
    (this->camPos).z = -30.0;
    (this->camPos).y = 3.5;
    (this->camDir).x = 0.0;
    (this->camDir).y = 0.0;
    (this->camDir).z = 1.0;
    this->f390 = 0.0;
    this->f394 = 0.0;
    (this->v24c).y = 0.7;
    this->f25c = 0.0;
    this->state = 4;
    this->i3b8 = 0;
    Sound::PlayMp3(this->sound);
    for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
      Player::SetFace(this->players[local_18],0);
      Player::fn_42ddac(this->players[local_18]);
      Player::fn_42de30(this->players[local_18]);
      Player::fn_42deb4(this->players[local_18]);
      Player::Motion_42df38(this->players[local_18]);
      fVar2 = 0.0;
      pVVar1 = Vec3_Set(local_24,(Vec3 *)0x40000000,0.0,-30.0,0.0);
      Player::SetPos(this->players[local_18],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
      this->players[local_18]->b154 = '\0';
      this->i3b4 = 0;
    }
    fVar2 = this->f390;
    pVVar1 = Vec3_Set(local_30,(Vec3 *)0xc0000000,0.0,-20.0,fVar2);
    Player::SetPos(this->players[this->i3b4],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
  }
  return;
}

