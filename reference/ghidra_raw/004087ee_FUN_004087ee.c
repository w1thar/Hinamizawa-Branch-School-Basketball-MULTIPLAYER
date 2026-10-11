// FUN_004087ee @ 004087ee  size=60

void __fastcall FUN_004087ee(int param_1)

{
  if (*(char *)(param_1 + 4) != '\0') {
    thunk_FUN_0040882a(param_1);
  }
  mciSendStringA(s_play_MP3_notify_00453164,(LPSTR)0x0,0,*(HWND *)(param_1 + 8));
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}

