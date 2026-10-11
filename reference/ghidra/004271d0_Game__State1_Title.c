// Game::State1_Title @ 004271d0  size=677

void __thiscall Game::State1_Title(Game *this)

{
  Vec3 *pVVar1;
  float fVar2;
  undefined1 local_50 [12];
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  int local_8;
  
  fVar2 = 1.035;
  pVVar1 = Vec3_Set(local_14,(Vec3 *)0xc2200000,0.0,-30.0,1.035);
  Player::SetPos(this->players[0],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
  fVar2 = 0.835;
  pVVar1 = Vec3_Set(local_20,(Vec3 *)0xc2300000,0.0,-26.0,0.835);
  Player::SetPos(this->players[1],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
  fVar2 = 0.735;
  pVVar1 = Vec3_Set(local_2c,(Vec3 *)0xc2380000,0.0,-24.0,0.735);
  Player::SetPos(this->players[2],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
  fVar2 = 0.585;
  pVVar1 = Vec3_Set(local_38,(Vec3 *)0xc2400000,0.0,-22.0,0.585);
  Player::SetPos(this->players[3],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
  fVar2 = 0.885;
  pVVar1 = Vec3_Set(local_44,(Vec3 *)0xc2280000,0.0,-28.0,0.885);
  Player::SetPos(this->players[4],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
  fVar2 = 0.485;
  pVVar1 = Vec3_Set(local_50,(Vec3 *)0xc2480000,0.0,-20.0,0.485);
  Player::SetPos(this->players[5],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    Player::Motion_4312d5(this->players[local_8]);
  }
  (this->camPos).x = -48.0;
  (this->camPos).y = 20.0;
  (this->camPos).z = -28.0;
  (this->camDir).x = 1.0;
  (this->camDir).y = 0.0;
  (this->camDir).z = 1.0;
  (this->v24c).y = 6.0;
  this->f258 = 0.0;
  this->f25c = 0.0;
  this->f260 = 0.0;
  this->f264 = 0.0;
  this->i3b0 = 0;
  Sound::OpenMp3(this->sound);
  this->f394 = 1.0;
  this->f390 = 0.0;
  this->b3a4 = '\0';
  this->b3a7 = '\0';
  this->i3ac = 0;
  this->i268 = -1;
  this->state = 2;
  return;
}

