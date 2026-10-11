// FUN_0040587f @ 0040587f  size=302

undefined4 FUN_0040587f(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (int *)0x0)) {
    uVar1 = 1;
  }
  else if ((param_1[1] & 0xe0000) == 0) {
    if (param_2[2] == 0) {
      if ((uint)param_1[3] < 0x10) {
        uVar1 = 1;
      }
      else if (param_1[2] == 0) {
        if (param_1[7] == 0xf000) {
          uVar1 = 1;
        }
        else if ((param_2[1] == 1) && ((param_1[1] & 1) == 0)) {
          uVar1 = 1;
        }
        else if ((param_2[1] == 0) && ((param_1[1] & 1) != 0)) {
          uVar1 = 1;
        }
        else if (param_1[3] == *param_2) {
          FUN_004334a0((undefined4 *)param_2[4],param_1,0x20);
          param_2[3] = 1;
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
    else if ((param_1[1] & 0x20) == 0) {
      uVar1 = 1;
    }
    else {
      FUN_004334a0((undefined4 *)param_2[4],param_1,0x20);
      param_2[3] = 1;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

