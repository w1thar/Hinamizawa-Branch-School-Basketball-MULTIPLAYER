// FUN_004067ab @ 004067ab  size=48

int __cdecl FUN_004067ab(LPCSTR param_1,int *param_2)

{
  undefined4 *this;
  int iVar1;
  
  this = FUN_00406679(param_1);
  if (this == (undefined4 *)0x0) {
    iVar1 = -0x7789ff01;
  }
  else {
    iVar1 = thunk_FUN_00405435(this,param_2);
  }
  return iVar1;
}

