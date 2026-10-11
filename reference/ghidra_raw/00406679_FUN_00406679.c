// FUN_00406679 @ 00406679  size=60

undefined4 * __cdecl FUN_00406679(LPCSTR param_1)

{
  int iVar1;
  undefined4 *local_8;
  
  local_8 = DAT_00457ef0;
  while( true ) {
    if (local_8 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    iVar1 = lstrcmpiA(param_1,(LPCSTR)(local_8 + 1));
    if (iVar1 == 0) break;
    local_8 = (undefined4 *)*local_8;
  }
  return local_8;
}

