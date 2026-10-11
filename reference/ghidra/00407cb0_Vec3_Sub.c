// Vec3_Sub @ 00407cb0  size=62

Vec3 * __cdecl Vec3_Sub(Vec3 *out,Vec3 *a,Vec3 *b)

{
  Vec3::Ctor(out,a->x - b->x,a->y - b->y,a->z - b->z);
  return out;
}

