// FUN_0042c6ce @ 0042c6ce  size=222

void __fastcall FUN_0042c6ce(undefined4 *param_1)

{
  int local_8;
  
  *param_1 = &PTR_LAB_0044e4ec;
  for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
    if (*(int *)(param_1[0x13] + 8 + local_8 * 0xc) != 0) {
      FUN_00433370(*(void **)(param_1[0x13] + 8 + local_8 * 0xc));
      *(undefined4 *)(param_1[0x13] + 8 + local_8 * 0xc) = 0;
    }
  }
  if (param_1[0x13] != 0) {
    FUN_00433370((void *)param_1[0x13]);
    param_1[0x13] = 0;
  }
  if (param_1[1] != 0) {
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[1])(1);
    }
    param_1[1] = 0;
  }
  return;
}

