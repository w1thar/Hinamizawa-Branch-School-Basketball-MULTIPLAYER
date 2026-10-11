// FUN_00408110 @ 00408110  size=82

undefined4 * __fastcall FUN_00408110(undefined4 *param_1)

{
  int local_8;
  
  *param_1 = &PTR_LAB_0044e0a4;
  param_1[3] = 0;
  for (local_8 = 0; local_8 < 0xf; local_8 = local_8 + 1) {
    param_1[local_8 + 4] = 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}

