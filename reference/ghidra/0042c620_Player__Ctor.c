// Player::Ctor @ 0042c620  size=174

Player * __thiscall Player::Ctor(Player *this)

{
  Vec3::CtorDefault(&this->pos);
  this->vtbl = &PTR_LAB_0044e4ec;
  (this->pos).x = 0.0;
  (this->pos).y = 0.0;
  (this->pos).z = 0.0;
  this->yaw = 0.0;
  this->f18c = 0.0;
  this->i190 = 0;
  this->animTime = 0.0;
  this->b154 = '\0';
  this->keyChanged = '\0';
  this->curKey = 0;
  this->f198 = 0.0;
  return this;
}

