// Game::State7 @ 004228f0  size=1746

void __thiscall Game::State7(Game *this)

{
  Vec3 *pVVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  float10 fVar3;
  float fVar4;
  undefined1 local_50 [12];
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
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
    fVar4 = 0.0;
    pVVar1 = Vec3_Set(local_14,(Vec3 *)0x0,0.0,17.0,0.0);
    Player::SetPos(this->players[0],pVVar1->x,pVVar1->y,pVVar1->z,fVar4);
    fVar4 = -0.2;
    pVVar1 = Vec3_Set(local_20,(Vec3 *)0xc0400000,0.0,17.0,-0.2);
    Player::SetPos(this->players[1],pVVar1->x,pVVar1->y,pVVar1->z,fVar4);
    fVar4 = 3.14;
    pVVar1 = Vec3_Set(local_2c,(Vec3 *)0xbf800000,0.0,8.0,3.14);
    Player::SetPos(this->players[2],pVVar1->x,pVVar1->y,pVVar1->z,fVar4);
    fVar4 = -1.0;
    pVVar1 = Vec3_Set(local_38,(Vec3 *)0xc0a00000,0.0,15.0,-1.0);
    Player::SetPos(this->players[3],pVVar1->x,pVVar1->y,pVVar1->z,fVar4);
    fVar4 = 2.0;
    pVVar1 = Vec3_Set(local_44,(Vec3 *)0x40800000,0.0,12.0,2.0);
    Player::SetPos(this->players[4],pVVar1->x,pVVar1->y,pVVar1->z,fVar4);
    fVar4 = 0.5;
    pVVar1 = Vec3_Set(local_50,(Vec3 *)0x40400000,0.0,16.0,0.5);
    Player::SetPos(this->players[5],pVVar1->x,pVVar1->y,pVVar1->z,fVar4);
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
  uVar2 = (uint)(this->keyUp == DAT_004540c8 || this->keyNum8 == DAT_004540c8);
  if (uVar2 != 0) {
    fVar3 = (float10)thunk_FUN_00404960(uVar2);
    (this->camPos).x =
         (float)(fVar3 * (float10)15.0 * (float10)this->dt + (float10)(this->camPos).x);
    fVar3 = (float10)thunk_FUN_00404900(local_8);
    (this->camPos).z =
         (float)(fVar3 * (float10)15.0 * (float10)this->dt + (float10)(this->camPos).z);
  }
  uVar2 = (uint)(this->keyDown == DAT_004540c8 || this->keyNum2 == DAT_004540c8);
  if (uVar2 != 0) {
    fVar3 = (float10)thunk_FUN_00404960(uVar2);
    (this->camPos).x =
         (float)((float10)(this->camPos).x - fVar3 * (float10)15.0 * (float10)this->dt);
    fVar3 = (float10)thunk_FUN_00404900(local_8);
    (this->camPos).z =
         (float)((float10)(this->camPos).z - fVar3 * (float10)15.0 * (float10)this->dt);
  }
  if (this->keyRight == DAT_004540c8 || this->keyNum6 == DAT_004540c8) {
    local_8 = this->dt * 2.0 + local_8;
    fVar3 = (float10)thunk_FUN_00404960(local_8);
    (this->camDir).x = (float)fVar3;
    fVar3 = (float10)thunk_FUN_00404900(extraout_ECX);
    (this->camDir).z = (float)fVar3;
  }
  if (this->keyLeft == DAT_004540c8 || this->keyNum4 == DAT_004540c8) {
    local_8 = local_8 - this->dt * 2.0;
    fVar3 = (float10)thunk_FUN_00404960(local_8);
    (this->camDir).x = (float)fVar3;
    fVar3 = (float10)thunk_FUN_00404900(extraout_ECX_00);
    (this->camDir).z = (float)fVar3;
  }
  if ((this->keyX == DAT_004540c0 || this->keyZ == DAT_004540c0) || this->keyC == DAT_004540c0) {
    Sound::Play(this->sound,7);
    this->i3b8 = 5;
    this->f390 = 0.0;
    this->f394 = 1.0;
    Sound::OpenMp3(this->sound);
  }
  return;
}

