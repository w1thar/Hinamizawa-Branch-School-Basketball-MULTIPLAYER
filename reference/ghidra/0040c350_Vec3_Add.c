// Vec3_Add @ 0040c350  size=62

Vec3 * __cdecl Vec3_Add(Vec3 *out,Vec3 *a,Vec3 *b)

{
  Vec3::Ctor(out,a->x + b->x,a->y + b->y,a->z + b->z);
  return out;
}

