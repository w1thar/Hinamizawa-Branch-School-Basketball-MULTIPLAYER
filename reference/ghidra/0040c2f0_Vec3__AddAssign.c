// Vec3::AddAssign @ 0040c2f0  size=67

Vec3 * __thiscall Vec3::AddAssign(Vec3 *this,Vec3 *v)

{
  this->x = this->x + v->x;
  this->y = this->y + v->y;
  this->z = this->z + v->z;
  return this;
}

