// FUN_00403cfe @ 00403cfe  size=277

undefined4 __cdecl FUN_00403cfe(float *param_1,float *param_2,float *param_3)

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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float10 fVar24;
  
  fVar1 = *param_2;
  fVar2 = *param_3;
  fVar3 = param_2[1];
  fVar4 = param_3[4];
  fVar5 = param_2[2];
  fVar6 = param_3[8];
  fVar7 = param_3[0xc];
  fVar8 = *param_2;
  fVar9 = param_3[1];
  fVar10 = param_2[1];
  fVar11 = param_3[5];
  fVar12 = param_2[2];
  fVar13 = param_3[9];
  fVar14 = param_3[0xd];
  fVar15 = *param_2;
  fVar16 = param_3[2];
  fVar17 = param_2[1];
  fVar18 = param_3[6];
  fVar19 = param_2[2];
  fVar20 = param_3[10];
  fVar21 = param_3[0xe];
  fVar22 = param_2[2] * param_3[0xb] + param_2[1] * param_3[7] + *param_2 * param_3[3] +
           param_3[0xf];
  fVar24 = FUN_00433940(SUB84((double)fVar22,0),(uint)((ulonglong)(double)fVar22 >> 0x20));
  if ((float10)1e-05 <= fVar24) {
    *param_1 = (fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7) / fVar22;
    param_1[1] = (fVar12 * fVar13 + fVar10 * fVar11 + fVar8 * fVar9 + fVar14) / fVar22;
    param_1[2] = (fVar19 * fVar20 + fVar17 * fVar18 + fVar15 * fVar16 + fVar21) / fVar22;
    uVar23 = 0;
  }
  else {
    uVar23 = 0x80070057;
  }
  return uVar23;
}

