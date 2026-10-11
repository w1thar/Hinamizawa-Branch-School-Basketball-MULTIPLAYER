// FUN_0040882a @ 0040882a  size=65

void __fastcall FUN_0040882a(int param_1)

{
  if (*(char *)(param_1 + 4) == '\x01') {
    mciSendStringA(s_stop_MP3_00453174,(LPSTR)0x0,0,(HWND)0x0);
    mciSendStringA(s_close_MP3_00453180,(LPSTR)0x0,0,(HWND)0x0);
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}

