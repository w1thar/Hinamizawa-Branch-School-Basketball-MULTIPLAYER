// TLVertex::Ctor @ 00422870  size=95

TLVertex * __thiscall
TLVertex::Ctor(TLVertex *this,Vec3 *v,float rhw,u32 color,u32 specular,float tu,float tv)

{
  this->sx = v->x;
  this->sy = v->y;
  this->sz = v->z;
  this->rhw = rhw;
  this->color = color;
  this->specular = specular;
  this->tu = tu;
  this->tv = tv;
  return this;
}

