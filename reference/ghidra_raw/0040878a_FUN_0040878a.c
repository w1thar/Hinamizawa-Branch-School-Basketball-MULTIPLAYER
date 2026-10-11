// FUN_0040878a @ 0040878a  size=100

void __fastcall FUN_0040878a(int param_1)

{
  CHAR local_104 [256];
  
  FUN_00434a40(local_104,(byte *)s_open___s__type_mpegvideo_alias_M_00453140);
  if (*(char *)(param_1 + 4) != '\0') {
    thunk_FUN_0040882a(param_1);
  }
  mciSendStringA(local_104,(LPSTR)0x0,0,(HWND)0x0);
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}

