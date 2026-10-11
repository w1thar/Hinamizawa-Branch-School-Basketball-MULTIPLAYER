// Atan2 @ 0041b040  size=37

float __cdecl Atan2(float y,float x)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00435140(SUB84((double)y,0),(int)((ulonglong)(double)y >> 0x20),
                                SUB84((double)x,0),(int)((ulonglong)(double)x >> 0x20));
  return (float)fVar1;
}

