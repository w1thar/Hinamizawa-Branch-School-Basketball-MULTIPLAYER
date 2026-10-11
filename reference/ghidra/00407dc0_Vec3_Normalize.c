// Vec3_Normalize @ 00407dc0  size=36

Vec3 * __cdecl Vec3_Normalize(Vec3 *out,Vec3 *v)

{
  float s;
  
  s = Vec3_Magnitude(v);
  Vec3_Div(out,v,s);
  return out;
}

