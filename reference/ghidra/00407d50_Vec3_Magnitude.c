// Vec3_Magnitude @ 00407d50  size=34

float __cdecl Vec3_Magnitude(Vec3 *v)

{
  float fVar1;
  double dVar2;
  
  fVar1 = Vec3_SquareMagnitude(v);
  dVar2 = sqrt((double)fVar1);
  return (float)dVar2;
}

