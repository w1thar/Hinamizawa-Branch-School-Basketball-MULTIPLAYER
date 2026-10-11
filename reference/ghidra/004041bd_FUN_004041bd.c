// FUN_004041bd @ 004041bd  size=546

void __cdecl
FUN_004041bd(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if (0.0 < *param_5 + param_5[5] + param_5[10]) {
    fVar18 = sqrtf((float)param_5);
    *param_1 = (param_5[6] - param_5[9]) / (fVar18 * 2.0);
    *param_2 = (param_5[8] - param_5[2]) / (fVar18 * 2.0);
    *param_3 = (param_5[1] - param_5[4]) / (fVar18 * 2.0);
    *param_4 = fVar18 * 0.5;
  }
  fVar18 = *param_1;
  fVar1 = *param_1;
  fVar2 = *param_2;
  fVar3 = *param_2;
  fVar4 = *param_3;
  fVar5 = *param_3;
  fVar6 = *param_1;
  fVar7 = *param_2;
  fVar8 = *param_1;
  fVar9 = *param_3;
  fVar10 = *param_2;
  fVar11 = *param_3;
  fVar12 = *param_4;
  fVar13 = *param_1;
  fVar14 = *param_4;
  fVar15 = *param_2;
  fVar16 = *param_4;
  fVar17 = *param_3;
  *param_5 = 1.0 - (fVar2 * fVar3 + fVar4 * fVar5) * 2.0;
  param_5[1] = (fVar6 * fVar7 - fVar16 * fVar17) * 2.0;
  param_5[2] = (fVar8 * fVar9 + fVar14 * fVar15) * 2.0;
  param_5[4] = (fVar6 * fVar7 + fVar16 * fVar17) * 2.0;
  param_5[5] = 1.0 - (fVar18 * fVar1 + fVar4 * fVar5) * 2.0;
  param_5[6] = (fVar10 * fVar11 - fVar12 * fVar13) * 2.0;
  param_5[8] = (fVar8 * fVar9 - fVar14 * fVar15) * 2.0;
  param_5[9] = (fVar10 * fVar11 + fVar12 * fVar13) * 2.0;
  param_5[10] = 1.0 - (fVar18 * fVar1 + fVar2 * fVar3) * 2.0;
  param_5[0xb] = 0.0;
  param_5[7] = 0.0;
  param_5[3] = 0.0;
  param_5[0xe] = 0.0;
  param_5[0xd] = 0.0;
  param_5[0xc] = 0.0;
  param_5[0xf] = 1.0;
  return;
}

