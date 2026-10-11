// FUN_00408fa1 @ 00408fa1  size=283

void __fastcall FUN_00408fa1(undefined4 *param_1)

{
  int local_8;
  
  *param_1 = &PTR_LAB_0044e0ac;
  for (local_8 = 0; local_8 < (int)param_1[0xc]; local_8 = local_8 + 1) {
    if (*(int *)(param_1[10] + 8 + local_8 * 0xc) != 0) {
      FUN_00433370(*(void **)(param_1[10] + 8 + local_8 * 0xc));
      *(undefined4 *)(param_1[10] + 8 + local_8 * 0xc) = 0;
    }
  }
  if (param_1[10] != 0) {
    FUN_00433370((void *)param_1[10]);
    param_1[10] = 0;
  }
  if (param_1[9] != 0) {
    FUN_00433370((void *)param_1[9]);
    param_1[9] = 0;
  }
  if (param_1[4] != 0) {
    FUN_00433370((void *)param_1[4]);
    param_1[4] = 0;
  }
  if (param_1[6] != 0) {
    FUN_00433370((void *)param_1[6]);
    param_1[6] = 0;
  }
  return;
}

