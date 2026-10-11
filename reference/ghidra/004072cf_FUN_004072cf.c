// FUN_004072cf @ 004072cf  size=187

void __cdecl
FUN_004072cf(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  double dVar1;
  
  _memset(param_1,0,0x68);
  *param_1 = param_2;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f800000;
  param_1[3] = 0x3f800000;
  param_1[5] = param_1[1];
  param_1[6] = param_1[2];
  param_1[7] = param_1[3];
  param_1[8] = param_1[4];
  param_1[0x10] = param_3;
  param_1[0xd] = param_3;
  param_1[0x11] = param_4;
  param_1[0xe] = param_4;
  param_1[0x12] = param_5;
  param_1[0xf] = param_5;
  param_1[0x15] = 0x3f800000;
  dVar1 = sqrt(3.4028234663852886e+38);
  param_1[0x13] = (float)dVar1;
  return;
}

