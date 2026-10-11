// Vec3_Set @ 00407c20  size=42

Vec3 * __thiscall Vec3_Set(void *this,Vec3 *out,float x,float y,float z)

{
  *(Vec3 **)this = out;
  *(float *)((int)this + 4) = x;
  *(float *)((int)this + 8) = y;
  return this;
}

