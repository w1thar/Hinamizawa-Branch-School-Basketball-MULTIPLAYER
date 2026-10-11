// Vec3_Div @ 00407df0  size=54

Vec3 * __cdecl Vec3_Div(Vec3 *out,Vec3 *v,float s)

{
  Vec3::Ctor(out,v->x / s,v->y / s,v->z / s);
  return out;
}

