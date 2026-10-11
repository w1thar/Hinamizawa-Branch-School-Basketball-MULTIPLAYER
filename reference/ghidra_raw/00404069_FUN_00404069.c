// FUN_00404069 @ 00404069  size=340

void __cdecl FUN_00404069(float *param_1,float param_2,float param_3,float param_4,float param_5)

{
  *param_1 = 1.0 - (param_3 * param_3 + param_4 * param_4) * 2.0;
  param_1[1] = (param_2 * param_3 - param_5 * param_4) * 2.0;
  param_1[2] = (param_2 * param_4 + param_5 * param_3) * 2.0;
  param_1[4] = (param_2 * param_3 + param_5 * param_4) * 2.0;
  param_1[5] = 1.0 - (param_2 * param_2 + param_4 * param_4) * 2.0;
  param_1[6] = (param_3 * param_4 - param_5 * param_2) * 2.0;
  param_1[8] = (param_2 * param_4 - param_5 * param_3) * 2.0;
  param_1[9] = (param_3 * param_4 + param_5 * param_2) * 2.0;
  param_1[10] = 1.0 - (param_2 * param_2 + param_3 * param_3) * 2.0;
  param_1[0xb] = 0.0;
  param_1[7] = 0.0;
  param_1[3] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xf] = 1.0;
  return;
}

