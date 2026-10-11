// FUN_004067db @ 004067db  size=53

undefined4 __cdecl FUN_004067db(int *param_1)

{
  undefined4 *local_8;
  
  for (local_8 = DAT_00457ef0; local_8 != (undefined4 *)0x0; local_8 = (undefined4 *)*local_8) {
    thunk_FUN_004067ab((LPCSTR)(local_8 + 1),param_1);
  }
  return 0;
}

