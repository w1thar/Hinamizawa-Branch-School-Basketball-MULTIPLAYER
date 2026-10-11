// Player::fn_42ddac @ 0042ddac  size=132

void __thiscall Player::fn_42ddac(Player *this)

{
  float fVar1;
  int in_stack_00000004;
  int local_c;
  
  fVar1 = this->model->ctex[1].step;
  for (local_c = 0; local_c < this->model->ctex[1].count; local_c = local_c + 1) {
    this->model->verts[this->model->ctex[1].verts[local_c].vtx].tv =
         this->model->ctex[1].verts[local_c].tu + (float)in_stack_00000004 * fVar1;
  }
  return;
}

