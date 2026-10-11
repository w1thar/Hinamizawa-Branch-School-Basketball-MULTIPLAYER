// FUN_00408162 @ 00408162  size=175

void __fastcall FUN_00408162(undefined4 *param_1)

{
  int local_8;
  
  *param_1 = &PTR_LAB_0044e0a4;
  if (*(char *)(param_1 + 1) != '\0') {
    thunk_FUN_0040882a((int)param_1);
  }
  mciSendStringA(s_close_midi_00452fb4,(LPSTR)0x0,0,(HWND)0x0);
  for (local_8 = 0; local_8 < 0xf; local_8 = local_8 + 1) {
    if (param_1[local_8 + 4] != 0) {
      (**(code **)(*(int *)param_1[local_8 + 4] + 8))(param_1[local_8 + 4]);
      param_1[local_8 + 4] = 0;
    }
  }
  if (param_1[3] != 0) {
    (**(code **)(*(int *)param_1[3] + 8))(param_1[3]);
    param_1[3] = 0;
  }
  return;
}

