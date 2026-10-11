// Vec3::DivAssign @ 00407c60  size=59

Vec3 * __thiscall Vec3::DivAssign(Vec3 *this,float s)

{
  this->x = this->x / s;
  this->y = this->y / s;
  this->z = this->z / s;
  return this;
}

