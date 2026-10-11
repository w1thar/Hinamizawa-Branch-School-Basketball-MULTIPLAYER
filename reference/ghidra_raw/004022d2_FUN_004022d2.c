// FUN_004022d2 @ 004022d2  size=182

void __fastcall FUN_004022d2(int param_1)

{
  tagRECT local_2c;
  tagPOINT local_1c;
  tagRECT local_14;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    (**(code **)(**(int **)(param_1 + 0x40) + 0x2c))(*(undefined4 *)(param_1 + 0x40),0,1);
  }
  else {
    local_1c.y = 0;
    local_1c.x = 0;
    ClientToScreen(*(HWND *)(param_1 + 0x30),&local_1c);
    GetClientRect(*(HWND *)(param_1 + 0x30),&local_14);
    OffsetRect(&local_14,local_1c.x,local_1c.y);
    SetRect(&local_2c,0,0,0x280,0x1e0);
    (**(code **)(**(int **)(param_1 + 0x40) + 0x14))
              (*(undefined4 *)(param_1 + 0x40),&local_14,*(undefined4 *)(param_1 + 0x44),&local_2c,
               0x1000000,0);
  }
  return;
}

