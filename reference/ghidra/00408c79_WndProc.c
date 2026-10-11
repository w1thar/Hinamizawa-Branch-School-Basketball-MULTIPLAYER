// WndProc @ 00408c79  size=192

LRESULT WndProc(HWND param_1,uint param_2,WPARAM param_3,uint param_4)

{
  LRESULT LVar1;
  
  if (param_2 < 0x101) {
    if (param_2 == 0x100) {
      if (param_3 == 0x1b) {
        DestroyWindow(param_1);
      }
    }
    else {
      if (param_2 != 2) {
LAB_00408d19:
        LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
        return LVar1;
      }
      PostQuitMessage(0);
    }
  }
  else if (param_2 == 0x200) {
    g_mouseX = param_4 & 0xffff;
    g_mouseY = param_4 >> 0x10;
  }
  else {
    if (param_2 != 0x3b9) goto LAB_00408d19;
    if (param_3 == 1) {
      mciSendStringA(s_play_MP3_from_0_notify_0045330c,(LPSTR)0x0,0,param_1);
    }
  }
  return 0;
}

