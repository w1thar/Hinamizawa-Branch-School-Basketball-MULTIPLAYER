// FUN_00402f97 @ 00402f97  size=128

void FUN_00402f97(int param_1,int *param_2)

{
  ushort uVar1;
  
  uVar1 = GetKeyState(param_1);
  if ((uVar1 & 0x80) == 0x80) {
    if (*param_2 == KEY_FREE) {
      *param_2 = KEY_PUSH;
    }
    else {
      *param_2 = KEY_HOLD;
    }
  }
  else if ((*param_2 == KEY_PUSH) || (*param_2 == KEY_HOLD)) {
    *param_2 = KEY_RELEASE;
  }
  else {
    *param_2 = KEY_FREE;
  }
  return;
}

