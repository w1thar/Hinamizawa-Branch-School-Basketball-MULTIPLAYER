// Vec3_Neg @ 0040c470  size=51

Vec3 * __cdecl Vec3_Neg(Vec3 *out,Vec3 *v)

{
  Vec3::Ctor(out,-v->x,-v->y,-v->z);
  return out;
}

