// FUN_0040c350 @ 0040c350  size=62

void * __cdecl FUN_0040c350(void *param_1,float *param_2,float *param_3)

{
  float unaff_EBP;
  
  Vec3_Set(param_1,(Vec3 *)(*param_2 + *param_3),param_2[1] + param_3[1],param_2[2] + param_3[2],
           unaff_EBP);
  return param_1;
}

