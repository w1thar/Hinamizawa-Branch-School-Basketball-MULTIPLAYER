// Vec3_Scale @ 00407d00  size=54

Vec3 * __cdecl Vec3_Scale(Vec3 *out,float s,Vec3 *v)

{
  Vec3::Ctor(out,s * v->x,s * v->y,s * v->z);
  return out;
}

