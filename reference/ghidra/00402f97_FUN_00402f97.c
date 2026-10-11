// FUN_00402f97 @ 00402f97  size=128

void FUN_00402f97(int param_1,int *param_2)

{
  ushort uVar1;
  
  uVar1 = GetKeyState(param_1);
  if ((uVar1 & 0x80) == 0x80) {
    if (*param_2 == DAT_00457c90) {
      *param_2 = DAT_00452d40;
    }
    else {
      *param_2 = DAT_00452d48;
    }
  }
  else if ((*param_2 == DAT_00452d40) || (*param_2 == DAT_00452d48)) {
    *param_2 = DAT_00452d44;
  }
  else {
    *param_2 = DAT_00457c90;
  }
  return;
}

