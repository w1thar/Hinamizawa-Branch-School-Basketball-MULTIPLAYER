// FUN_0040228b @ 0040228b  size=71

undefined4 FUN_0040228b(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) {
    uVar1 = 0;
  }
  else if (param_1[1] == param_2[1]) {
    FUN_004334a0(param_2,param_1,0x20);
    DAT_00457c94 = 1;
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

