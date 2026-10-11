// Game::State9 @ 00423d53  size=3101

void __thiscall Game::State9(Game *this)

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
  
  this->f390 = this->f390 + this->dt;
  if (this->i3b8 == 0) {
    this->f390 = 0.0;
    this->b3a5 = '\0';
    this->b3a4 = '\0';
    this->b3a6 = '\0';
    this->b398 = '\0';
    this->b399 = '\0';
    this->i3ac = 0;
    this->f394 = 1.0;
    (this->lightDir).x = 1.0;
    (this->lightDir).y = -0.8;
    (this->lightDir).z = -1.0;
    (this->light).direction.x = (this->lightDir).x;
    (this->light).direction.y = (this->lightDir).y;
    (this->light).direction.z = (this->lightDir).z;
    (this->light).diffuse.r = 0.8;
    (this->light).diffuse.g = 0.5;
    (this->light).diffuse.b = 0.5;
    (this->light).ambient.r = 0.5;
    (this->light).ambient.g = 0.3;
    (this->light).ambient.b = 0.3;
    (this->matShadow).m[0] = 1.0;
    (this->matShadow).m[1] = 0.0;
    (this->matShadow).m[2] = 0.0;
    (this->matShadow).m[3] = 0.0;
    (this->matShadow).m[4] = -(this->lightDir).x / (this->lightDir).y;
    (this->matShadow).m[5] = 0.0;
    (this->matShadow).m[6] = -(this->lightDir).z / (this->lightDir).y;
    (this->matShadow).m[7] = 0.0;
    (this->matShadow).m[8] = 0.0;
    (this->matShadow).m[9] = 0.0;
    (this->matShadow).m[10] = 1.0;
    (this->matShadow).m[0xb] = 0.0;
    (this->matShadow).m[0xc] = 0.0;
    (this->matShadow).m[0xd] = 0.05;
    (this->matShadow).m[0xe] = 0.0;
    (this->matShadow).m[0xf] = 1.0;
    Sound::OpenMp3(this->sound,s_WAV_LP_5_mp3_004540f0);
    fVar2 = 0.0;
    pVVar1 = Vec3::Ctor(&local_14,0.0,0.0,17.0);
    Player::SetPos(this->players[0],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
    fVar2 = -0.2;
    pVVar1 = Vec3::Ctor(&local_20,-3.0,0.0,17.0);
    Player::SetPos(this->players[1],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
    fVar2 = 3.14;
    pVVar1 = Vec3::Ctor(&local_2c,-1.0,0.0,8.0);
    Player::SetPos(this->players[2],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
    fVar2 = -1.0;
    pVVar1 = Vec3::Ctor(&local_38,-5.0,0.0,15.0);
    Player::SetPos(this->players[3],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
    fVar2 = 2.0;
    pVVar1 = Vec3::Ctor(&local_44,4.0,0.0,12.0);
    Player::SetPos(this->players[4],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
    fVar2 = 0.5;
    pVVar1 = Vec3::Ctor(&local_50,3.0,0.0,16.0);
    Player::SetPos(this->players[5],pVVar1->x,pVVar1->y,pVVar1->z,fVar2);
    Player::Motion_430c40(this->players[0]);
    Player::Motion_430c40(this->players[1]);
    Player::Motion_430c40(this->players[2]);
    Player::Motion_Stand(this->players[3]);
    Player::Motion_Stand(this->players[4]);
    Player::Motion_430c40(this->players[5]);
    (this->camPos).x = 20.0;
    (this->camPos).y = 10.0;
    (this->camPos).z = -57.0;
    (this->camDir).x = -0.43;
    (this->camDir).y = 0.0;
    (this->camDir).z = 0.9;
    (this->v24c).x = 0.0;
    (this->v24c).y = 0.7;
    (this->v24c).z = 0.0;
    this->f25c = 0.0;
    this->f258 = 0.0;
    this->i268 = 0;
    this->i3b8 = 1;
  }
  else if (this->i3b8 != 1 || this->f390 <= 1.0) {
    if (this->i3b8 != 2 || this->f390 <= 265.0) {
      if (this->i3b8 == 3) {
        this->f394 = this->dt * 0.2 + this->f394;
        if (1.0 < this->f394) {
          this->f394 = 1.0;
          this->i3b8 = 4;
        }
      }
      else if (this->i3b8 == 4) {
        Sound::StopMp3(this->sound);
        this->f394 = 1.0;
        Sound::OpenMp3(this->sound,s_WAV_LP_1_mp3_00454100);
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
        (this->lightDir).x = 1.0;
        (this->lightDir).y = -1.0;
        (this->lightDir).z = 1.0;
        (this->light).direction.x = (this->lightDir).x;
        (this->light).direction.y = (this->lightDir).y;
        (this->light).direction.z = (this->lightDir).z;
        (this->light).diffuse.r = 0.8;
        (this->light).diffuse.g = 0.8;
        (this->light).diffuse.b = 0.8;
        (this->light).ambient.r = 0.5;
        (this->light).ambient.g = 0.5;
        (this->light).ambient.b = 0.5;
        (this->matShadow).m[0] = 1.0;
        (this->matShadow).m[1] = 0.0;
        (this->matShadow).m[2] = 0.0;
        (this->matShadow).m[3] = 0.0;
        (this->matShadow).m[4] = -(this->lightDir).x / (this->lightDir).y;
        (this->matShadow).m[5] = 0.0;
        (this->matShadow).m[6] = -(this->lightDir).z / (this->lightDir).y;
        (this->matShadow).m[7] = 0.0;
        (this->matShadow).m[8] = 0.0;
        (this->matShadow).m[9] = 0.0;
        (this->matShadow).m[10] = 1.0;
        (this->matShadow).m[0xb] = 0.0;
        (this->matShadow).m[0xc] = 0.0;
        (this->matShadow).m[0xd] = 0.05;
        (this->matShadow).m[0xe] = 0.0;
        (this->matShadow).m[0xf] = 1.0;
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
      this->i3b8 = 3;
    }
  }
  else {
    this->i3b8 = 2;
    this->f394 = 0.0;
    Sound::PlayMp3(this->sound);
    this->f390 = 0.0;
  }
  if (this->i3b8 == 2) {
    (this->lightDir).y = this->dt * 0.002222 + (this->lightDir).y;
    (this->light).direction.x = (this->lightDir).x;
    (this->light).direction.y = (this->lightDir).y;
    (this->light).direction.z = (this->lightDir).z;
    (this->light).ambient.r = (this->light).ambient.r - this->dt * 0.00074074;
    (this->light).ambient.g = (this->light).ambient.g - this->dt * 0.00037037;
    (this->light).ambient.b = (this->light).ambient.b - this->dt * 0.00037037;
    (this->matShadow).m[0] = 1.0;
    (this->matShadow).m[1] = 0.0;
    (this->matShadow).m[2] = 0.0;
    (this->matShadow).m[3] = 0.0;
    (this->matShadow).m[4] = -(this->lightDir).x / (this->lightDir).y;
    (this->matShadow).m[5] = 0.0;
    (this->matShadow).m[6] = -(this->lightDir).z / (this->lightDir).y;
    (this->matShadow).m[7] = 0.0;
    (this->matShadow).m[8] = 0.0;
    (this->matShadow).m[9] = 0.0;
    (this->matShadow).m[10] = 1.0;
    (this->matShadow).m[0xb] = 0.0;
    (this->matShadow).m[0xc] = 0.0;
    (this->matShadow).m[0xd] = 0.05;
    (this->matShadow).m[0xe] = 0.0;
    (this->matShadow).m[0xf] = 1.0;
  }
  if ((this->keyX == KEY_PUSH || this->keyZ == KEY_PUSH) || this->keyC == KEY_PUSH) {
    this->i3b8 = 3;
  }
  return;
}

