// Player::SetPos @ 0042dcb7  size=114

void __thiscall Player::SetPos(Player *this,float x,float y,float z,float yaw)

{
  Bone *pBVar1;
  
  (this->pos).x = x;
  (this->pos).y = y;
  (this->pos).z = z;
  this->yaw = yaw;
  pBVar1 = this->model->bones;
  (pBVar1->trans).x = (this->pos).x;
  (pBVar1->trans).y = (this->pos).y;
  (pBVar1->trans).z = (this->pos).z;
  (this->model->bones->rot).y = this->yaw;
  return;
}

