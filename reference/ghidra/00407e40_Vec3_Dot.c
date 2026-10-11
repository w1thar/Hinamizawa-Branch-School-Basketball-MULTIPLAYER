// Vec3_Dot @ 00407e40  size=43

float __cdecl Vec3_Dot(Vec3 *a,Vec3 *b)

{
  return a->z * b->z + a->y * b->y + a->x * b->x;
}

