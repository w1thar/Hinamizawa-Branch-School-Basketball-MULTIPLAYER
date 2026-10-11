// Game::CalcStep @ 00419ae5  size=759

Vec3 * __thiscall Game::CalcStep(Game *this,Vec3 *out,int idx)

{
  Player *pPVar1;
  float fVar2;
  float fVar3;
  Vec3 local_14;
  int local_8;
  
  Vec3::CtorDefault(&local_14);
  if (idx == this->i268) {
    pPVar1 = this->players[idx];
    fVar2 = sinf(this->players[idx]->yaw);
    local_14.x = (pPVar1->pos).x - fVar2 * this->players[idx]->stat168 * 0.8 * this->dt;
    local_14.y = (this->players[idx]->pos).y;
    pPVar1 = this->players[idx];
    fVar2 = cosf((float)this);
    local_14.z = (pPVar1->pos).z - fVar2 * this->players[idx]->stat168 * 0.8 * this->dt;
  }
  else {
    pPVar1 = this->players[idx];
    fVar2 = sinf(this->players[idx]->yaw);
    local_14.x = (pPVar1->pos).x - fVar2 * this->players[idx]->stat168 * this->dt;
    local_14.y = (this->players[idx]->pos).y;
    pPVar1 = this->players[idx];
    fVar2 = cosf((float)this);
    local_14.z = (pPVar1->pos).z - fVar2 * this->players[idx]->stat168 * this->dt;
  }
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    if ((local_8 != idx && 2 < this->players[local_8]->i190) &&
       (((this->players[local_8]->pos).z - local_14.z) *
        ((this->players[local_8]->pos).z - local_14.z) +
        ((this->players[local_8]->pos).x - local_14.x) *
        ((this->players[local_8]->pos).x - local_14.x) < 9.0)) {
      pPVar1 = this->players[local_8];
      fVar2 = (this->players[local_8]->pos).x - local_14.x;
      fVar3 = sqrtf((float)this);
      local_14.x = (pPVar1->pos).x - (fVar2 * 3.0) / fVar3;
      pPVar1 = this->players[local_8];
      fVar2 = (this->players[local_8]->pos).z - local_14.z;
      fVar3 = sqrtf((float)this);
      local_14.z = (pPVar1->pos).z - (fVar2 * 3.0) / fVar3;
    }
  }
  out->x = local_14.x;
  out->y = local_14.y;
  out->z = local_14.z;
  return out;
}

