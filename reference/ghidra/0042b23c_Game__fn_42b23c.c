// Game::fn_42b23c @ 0042b23c  size=2798

void __thiscall Game::fn_42b23c(Game *this)

{
  Game *pGVar1;
  Game *pGVar2;
  bool bVar3;
  float10 fVar4;
  float fVar5;
  
  if (this->i268 < 0) {
    bVar3 = 11.0 < (this->v24c).y;
    pGVar1 = (Game *)(uint)(-36.0 < (this->v24c).x && (this->v24c).x < 36.0);
    pGVar2 = pGVar1;
    if (this->f260 < -3.14) {
      this->f260 = this->f260 + 6.28;
      pGVar2 = this;
    }
    if (3.14 < this->f260) {
      this->f260 = this->f260 - 6.28;
      pGVar2 = this;
    }
    fVar4 = (float10)thunk_FUN_00404960(pGVar2);
    (this->v24c).x =
         (float)(fVar4 * (float10)this->f258 * (float10)this->dt + (float10)(this->v24c).x);
    fVar4 = (float10)thunk_FUN_00404900(this);
    (this->v24c).z =
         (float)(fVar4 * (float10)this->f258 * (float10)this->dt + (float10)(this->v24c).z);
    if (0.7 <= (this->v24c).y || 0.0 <= this->f25c) {
      this->f25c = this->f25c - this->dt * 20.0;
      (this->v24c).y = this->f25c * this->dt + (this->v24c).y;
    }
    else {
      this->f25c = this->f25c * -0.8;
      this->f258 = this->f258 * 0.8;
      (this->v24c).y = 0.71;
      fVar4 = (float10)thunk_FUN_00404990(this);
      this->f264 = (float)(fVar4 * (float10)0.5 + (float10)this->f264);
      if ((this->dt * 150.0 < this->f25c) && (this->b3a7 != '\0')) {
        Sound::Play(this->sound,3);
      }
    }
    if ((((this->v24c).x < -30.0 && bVar3) && (this->v24c).y < 11.0) && this->f25c < 0.0) {
      fVar5 = (this->v24c).z * (this->v24c).z + ((this->v24c).x + 35.0) * ((this->v24c).x + 35.0);
      if (0.25 <= fVar5) {
        if (1.5 <= fVar5) {
          if (fVar5 < 4.0) {
            this->f258 = this->f258 * 1.0;
            this->f25c = this->f25c * -0.2;
            fVar5 = Atan2((this->v24c).x + 35.0,(this->v24c).z);
            this->f260 = fVar5;
            Sound::Play(this->sound,4);
          }
        }
        else {
          this->f258 = this->f258 * 0.2;
          this->f25c = this->f25c * -0.5;
          if (this->f25c < 1.0) {
            this->f25c = 1.0;
          }
          if (this->f258 < 1.0) {
            this->f258 = 1.0;
          }
          fVar5 = Atan2(-35.0 - (this->v24c).x,-(this->v24c).z);
          this->f260 = fVar5;
          (this->v24c).y = 11.001;
          Sound::Play(this->sound,4);
        }
      }
      else {
        this->f258 = 0.0;
        Sound::Play(this->sound,5);
        if (this->b3a6 == '\0') {
          if (this->b3a8 == '\0') {
            this->i3d8 = this->i3d8 + 2;
          }
          else {
            this->i3d8 = this->i3d8 + 3;
          }
          this->i418 = 1;
        }
        else {
          if (this->b3a8 == '\0') {
            this->i3dc = this->i3dc + 2;
          }
          else {
            this->i3dc = this->i3dc + 3;
          }
          this->i418 = 3;
        }
      }
    }
    if (((30.0 < (this->v24c).x && bVar3) && (this->v24c).y < 11.0) && this->f25c < 0.0) {
      fVar5 = (this->v24c).z * (this->v24c).z + ((this->v24c).x - 35.0) * ((this->v24c).x - 35.0);
      if (0.25 <= fVar5) {
        if (1.5 <= fVar5) {
          if (fVar5 < 4.0) {
            this->f258 = this->f258 * 1.0;
            this->f25c = this->f25c * -0.2;
            fVar5 = Atan2((this->v24c).x - 35.0,(this->v24c).z);
            this->f260 = fVar5;
            Sound::Play(this->sound,4);
          }
        }
        else {
          this->f258 = this->f258 * 0.2;
          this->f25c = this->f25c * -0.5;
          if (this->f25c < 1.0) {
            this->f25c = 1.0;
          }
          if (this->f258 < 1.0) {
            this->f258 = 1.0;
          }
          fVar5 = Atan2(35.0 - (this->v24c).x,-(this->v24c).z);
          this->f260 = fVar5;
          (this->v24c).y = 11.001;
          Sound::Play(this->sound,4);
        }
      }
      else {
        this->f258 = 0.0;
        Sound::Play(this->sound,5);
        if (this->b3a6 == '\0') {
          if (this->b3a8 == '\0') {
            this->i3dc = this->i3dc + 2;
          }
          else {
            this->i3dc = this->i3dc + 3;
          }
          this->i418 = 2;
        }
        else {
          if (this->b3a8 == '\0') {
            this->i3d8 = this->i3d8 + 2;
          }
          else {
            this->i3d8 = this->i3d8 + 3;
          }
          this->i418 = 4;
        }
      }
    }
    if ((((this->v24c).x < -36.0 && pGVar1 != (Game *)0x0) && this->f260 < 0.0) &&
       (((-4.0 < (this->v24c).z && (this->v24c).z < 4.0) && 9.0 < (this->v24c).y) &&
        (this->v24c).y < 16.0)) {
      this->f260 = this->f260 * -1.0;
      Sound::Play(this->sound,4);
    }
    if (((36.0 < (this->v24c).x && pGVar1 != (Game *)0x0) && 0.0 < this->f260) &&
       (((-4.0 < (this->v24c).z && (this->v24c).z < 4.0) && 9.0 < (this->v24c).y) &&
        (this->v24c).y < 16.0)) {
      this->f260 = this->f260 * -1.0;
      Sound::Play(this->sound,4);
    }
  }
  return;
}

