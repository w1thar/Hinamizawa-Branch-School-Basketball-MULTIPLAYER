// Player::SetTex0 @ 0042dd29  size=131

void __thiscall Player::SetTex0(Player *this,int frame)

{
  float fVar1;
  int local_c;
  
  fVar1 = this->model->ctex->step;
  for (local_c = 0; local_c < this->model->ctex->count; local_c = local_c + 1) {
    this->model->verts[this->model->ctex->verts[local_c].vtx].tv =
         this->model->ctex->verts[local_c].tv + (float)frame * fVar1;
  }
  return;
}

