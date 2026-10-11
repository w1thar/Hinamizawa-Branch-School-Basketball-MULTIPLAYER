// Player::SetTex2 @ 0042de30  size=132

void __thiscall Player::SetTex2(Player *this,int frame)

{
  float fVar1;
  int local_c;
  
  fVar1 = this->model->ctex[2].step;
  for (local_c = 0; local_c < this->model->ctex[2].count; local_c = local_c + 1) {
    this->model->verts[this->model->ctex[2].verts[local_c].vtx].tv =
         this->model->ctex[2].verts[local_c].tv + (float)frame * fVar1;
  }
  return;
}

