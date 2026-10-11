// Game::State1_Title @ 004271d0  size=677

void __thiscall Game::State1_Title(Game *this)

{
  Vec3 *pVVar1;
  float fVar2;
  Vec3 local_50;
  Vec3 local_44;
  Vec3 local_38;
  Vec3 local_2c;
  Vec3 local_20;
  Vec3 local_14;
  int local_8;
  
  fVar2 = 1.035;
  pVVar1 = Vec3::Ctor(&local_14,-40.0,0.0,-30.0);
  Player::SetPos(this->players[0],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
  fVar2 = 0.835;
  pVVar1 = Vec3::Ctor(&local_20,-44.0,0.0,-26.0);
  Player::SetPos(this->players[1],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
  fVar2 = 0.735;
  pVVar1 = Vec3::Ctor(&local_2c,-46.0,0.0,-24.0);
  Player::SetPos(this->players[2],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
  fVar2 = 0.585;
  pVVar1 = Vec3::Ctor(&local_38,-48.0,0.0,-22.0);
  Player::SetPos(this->players[3],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
  fVar2 = 0.885;
  pVVar1 = Vec3::Ctor(&local_44,-42.0,0.0,-28.0);
  Player::SetPos(this->players[4],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
  fVar2 = 0.485;
  pVVar1 = Vec3::Ctor(&local_50,-50.0,0.0,-20.0);
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

