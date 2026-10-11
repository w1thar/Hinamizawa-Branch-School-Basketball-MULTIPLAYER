// FUN_00404a8b @ 00404a8b  size=172

void __fastcall FUN_00404a8b(undefined4 *param_1)

{
  int *local_8;
  
  if (param_1[0x1b] != 0) {
    (**(code **)(*(int *)param_1[0x1b] + 8))(param_1[0x1b]);
    param_1[0x1b] = 0;
  }
  if (param_1[0x1d] != 0) {
    FUN_00433370((void *)param_1[0x1d]);
    param_1[0x1d] = 0;
  }
  DeleteObject((HGDIOBJ)param_1[0x1c]);
  if (DAT_00457ef0 == param_1) {
    DAT_00457ef0 = (int *)*param_1;
  }
  else {
    for (local_8 = DAT_00457ef0; local_8 != (int *)0x0; local_8 = (int *)*local_8) {
      if ((undefined4 *)*local_8 == param_1) {
        *local_8 = *param_1;
      }
    }
  }
  return;
}

