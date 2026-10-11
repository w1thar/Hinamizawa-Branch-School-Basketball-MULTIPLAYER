// FUN_004039ed @ 004039ed  size=785

undefined4 __cdecl FUN_004039ed(float *param_1,float *param_2)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = FUN_00433940(SUB84((double)(param_2[0xf] - 1.0),0),
                       (uint)((ulonglong)(double)(param_2[0xf] - 1.0) >> 0x20));
  if ((((fVar2 <= (float10)0.0010000000474974513) &&
       (fVar2 = FUN_00433940(SUB84((double)param_2[3],0),
                             (uint)((ulonglong)(double)param_2[3] >> 0x20)),
       fVar2 <= (float10)0.0010000000474974513)) &&
      (fVar2 = FUN_00433940(SUB84((double)param_2[7],0),
                            (uint)((ulonglong)(double)param_2[7] >> 0x20)),
      fVar2 <= (float10)0.0010000000474974513)) &&
     (fVar2 = FUN_00433940(SUB84((double)param_2[0xb],0),
                           (uint)((ulonglong)(double)param_2[0xb] >> 0x20)),
     fVar2 <= (float10)0.0010000000474974513)) {
    fVar1 = 1.0 / ((param_2[4] * param_2[9] - param_2[5] * param_2[8]) * param_2[2] +
                  ((param_2[5] * param_2[10] - param_2[6] * param_2[9]) * *param_2 -
                  (param_2[4] * param_2[10] - param_2[6] * param_2[8]) * param_2[1]));
    *param_1 = (param_2[5] * param_2[10] - param_2[6] * param_2[9]) * fVar1;
    param_1[1] = (param_2[1] * param_2[10] - param_2[2] * param_2[9]) * -fVar1;
    param_1[2] = (param_2[1] * param_2[6] - param_2[2] * param_2[5]) * fVar1;
    param_1[3] = 0.0;
    param_1[4] = (param_2[4] * param_2[10] - param_2[6] * param_2[8]) * -fVar1;
    param_1[5] = (*param_2 * param_2[10] - param_2[2] * param_2[8]) * fVar1;
    param_1[6] = (*param_2 * param_2[6] - param_2[2] * param_2[4]) * -fVar1;
    param_1[7] = 0.0;
    param_1[8] = (param_2[4] * param_2[9] - param_2[5] * param_2[8]) * fVar1;
    param_1[9] = (*param_2 * param_2[9] - param_2[1] * param_2[8]) * -fVar1;
    param_1[10] = (*param_2 * param_2[5] - param_2[1] * param_2[4]) * fVar1;
    param_1[0xb] = 0.0;
    param_1[0xc] = -(param_2[0xe] * param_1[8] + param_2[0xd] * param_1[4] + param_2[0xc] * *param_1
                    );
    param_1[0xd] = -(param_2[0xe] * param_1[9] +
                    param_2[0xd] * param_1[5] + param_2[0xc] * param_1[1]);
    param_1[0xe] = -(param_2[0xe] * param_1[10] +
                    param_2[0xd] * param_1[6] + param_2[0xc] * param_1[2]);
    param_1[0xf] = 1.0;
    return 0;
  }
  return 0x80070057;
}

