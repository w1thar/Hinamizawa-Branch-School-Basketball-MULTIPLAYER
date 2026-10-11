// FUN_00402f31 @ 00402f31  size=102

undefined4 FUN_00402f31(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((param_1[1] & 0xe0000) == 0) {
    if (param_1[2] == 0) {
      if ((param_1[1] & 1) == 0) {
        if (param_1[3] == 0x10) {
          FUN_004334a0(param_2,param_1,0x20);
          uVar1 = 0;
        }
        else {
          uVar1 = 1;
        }
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

