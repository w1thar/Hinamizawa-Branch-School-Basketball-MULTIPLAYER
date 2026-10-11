// Player::Dtor @ 0042c6ce  size=222

void __thiscall Player::Dtor(Player *this)

{
  int local_8;
  
  this->vtbl = &PTR_LAB_0044e4ec;
  for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
    if (this->keys[local_8].pose != (BonePose *)0x0) {
      operator_delete(this->keys[local_8].pose);
      this->keys[local_8].pose = (BonePose *)0x0;
    }
  }
  if (this->keys != (MotionKey *)0x0) {
    operator_delete(this->keys);
    this->keys = (MotionKey *)0x0;
  }
  if (this->model != (SkinModel *)0x0) {
    if (this->model != (SkinModel *)0x0) {
      (**(code **)this->model->vtbl)(1);
    }
    this->model = (SkinModel *)0x0;
  }
  return;
}

