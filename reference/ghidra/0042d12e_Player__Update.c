// Player::Update @ 0042d12e  size=2953

void __thiscall Player::Update(Player *this,float dt)

{
  float fVar1;
  float fVar2;
  BonePose *pBVar3;
  float10 fVar4;
  float10 fVar5;
  int local_18;
  int local_10;
  float local_c;
  
  local_10 = 0;
  local_c = this->keys->duration;
  if (local_c != 0.0) {
    while (local_c < this->animTime) {
      local_10 = local_10 + 1;
      if (this->keys[local_10].duration == 0.0) {
        this->animTime = this->animTime - local_c;
        local_10 = 0;
      }
      else {
        local_c = local_c + this->keys[local_10].duration;
      }
    }
    if (3.14 < this->yaw) {
      this->yaw = this->yaw - 6.28;
    }
    if (this->yaw < -3.14) {
      this->yaw = this->yaw + 6.28;
    }
    if (local_10 == this->curKey) {
      this->keyChanged = '\0';
    }
    else {
      this->keyChanged = '\x01';
    }
    if (3.14 < ((this->model->bones->rot).y - ((this->keys[local_10].pose)->rot).y) - this->yaw) {
      (this->model->bones->rot).y = (this->model->bones->rot).y - 6.28;
    }
    if (((this->model->bones->rot).y - ((this->keys[local_10].pose)->rot).y) - this->yaw < -3.14) {
      (this->model->bones->rot).y = (this->model->bones->rot).y + 6.28;
    }
    pBVar3 = this->keys[local_10].pose;
    fVar4 = (float10)thunk_FUN_00404900(this);
    fVar1 = (pBVar3->trans).x;
    pBVar3 = this->keys[local_10].pose;
    fVar5 = (float10)thunk_FUN_00404960(this->keys);
    fVar1 = (float)((float10)(float)(fVar4 * (float10)fVar1) - fVar5 * (float10)(pBVar3->trans).z);
    pBVar3 = this->keys[local_10].pose;
    fVar4 = (float10)thunk_FUN_00404960(this);
    fVar2 = (pBVar3->trans).x;
    pBVar3 = this->keys[local_10].pose;
    fVar5 = (float10)thunk_FUN_00404900(this);
    fVar2 = (float)(fVar5 * (float10)(pBVar3->trans).z + (float10)(float)(fVar4 * (float10)fVar2));
    if (0.01 < (fVar1 + (this->pos).x) - (this->model->bones->trans).x ||
        (fVar1 + (this->pos).x) - (this->model->bones->trans).x < -0.01) {
      (this->model->bones->trans).x =
           ((fVar1 + (this->pos).x) - (this->model->bones->trans).x) * this->keys[local_10].speed *
           dt + (this->model->bones->trans).x;
    }
    if (0.01 < (((this->keys[local_10].pose)->trans).y + (this->pos).y) -
               (this->model->bones->trans).y ||
        (((this->keys[local_10].pose)->trans).y + (this->pos).y) - (this->model->bones->trans).y <
        -0.01) {
      (this->model->bones->trans).y =
           ((((this->keys[local_10].pose)->trans).y + (this->pos).y) - (this->model->bones->trans).y
           ) * this->keys[local_10].speed * dt + (this->model->bones->trans).y;
    }
    if (0.01 < (fVar2 + (this->pos).z) - (this->model->bones->trans).z ||
        (fVar2 + (this->pos).z) - (this->model->bones->trans).z < -0.01) {
      (this->model->bones->trans).z =
           ((fVar2 + (this->pos).z) - (this->model->bones->trans).z) * this->keys[local_10].speed *
           dt + (this->model->bones->trans).z;
    }
    if (0.01 < ((this->keys[local_10].pose)->rot).x - (this->model->bones->rot).x ||
        ((this->keys[local_10].pose)->rot).x - (this->model->bones->rot).x < -0.01) {
      (this->model->bones->rot).x =
           (((this->keys[local_10].pose)->rot).x - (this->model->bones->rot).x) *
           this->keys[local_10].speed * dt + (this->model->bones->rot).x;
    }
    if (0.01 < (((this->keys[local_10].pose)->rot).y + this->yaw) - (this->model->bones->rot).y ||
        (((this->keys[local_10].pose)->rot).y + this->yaw) - (this->model->bones->rot).y < -0.01) {
      (this->model->bones->rot).y =
           ((((this->keys[local_10].pose)->rot).y + this->yaw) - (this->model->bones->rot).y) *
           this->keys[local_10].speed * dt + (this->model->bones->rot).y;
    }
    if (0.01 < ((this->keys[local_10].pose)->rot).z - (this->model->bones->rot).z ||
        ((this->keys[local_10].pose)->rot).z - (this->model->bones->rot).z < -0.01) {
      (this->model->bones->rot).z =
           (((this->keys[local_10].pose)->rot).z - (this->model->bones->rot).z) *
           this->keys[local_10].speed * dt + (this->model->bones->rot).z;
    }
    for (local_18 = 1; local_18 < this->model->numBones; local_18 = local_18 + 1) {
      if (0.01 < this->keys[local_10].pose[local_18].rot.x - this->model->bones[local_18].rot.x ||
          this->keys[local_10].pose[local_18].rot.x - this->model->bones[local_18].rot.x < -0.01) {
        this->model->bones[local_18].rot.x =
             (this->keys[local_10].pose[local_18].rot.x - this->model->bones[local_18].rot.x) *
             this->keys[local_10].speed * dt + this->model->bones[local_18].rot.x;
      }
      if (0.01 < this->keys[local_10].pose[local_18].rot.y - this->model->bones[local_18].rot.y ||
          this->keys[local_10].pose[local_18].rot.y - this->model->bones[local_18].rot.y < -0.01) {
        this->model->bones[local_18].rot.y =
             (this->keys[local_10].pose[local_18].rot.y - this->model->bones[local_18].rot.y) *
             this->keys[local_10].speed * dt + this->model->bones[local_18].rot.y;
      }
      if (0.01 < this->keys[local_10].pose[local_18].rot.z - this->model->bones[local_18].rot.z ||
          this->keys[local_10].pose[local_18].rot.z - this->model->bones[local_18].rot.z < -0.01) {
        this->model->bones[local_18].rot.z =
             (this->keys[local_10].pose[local_18].rot.z - this->model->bones[local_18].rot.z) *
             this->keys[local_10].speed * dt + this->model->bones[local_18].rot.z;
      }
    }
    this->animTime = this->animTime + dt;
    this->curKey = local_10;
    SkinModel::Skin(this->model);
  }
  return;
}

