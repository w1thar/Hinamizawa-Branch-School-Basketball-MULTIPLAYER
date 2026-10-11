// FUN_00406810 @ 00406810  size=75

undefined4 __cdecl FUN_00406810(LPCSTR param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = FUN_00406679(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0x887600ff;
  }
  else {
    if (puVar1[0x1b] != 0) {
      (**(code **)(*(int *)puVar1[0x1b] + 8))(puVar1[0x1b]);
      puVar1[0x1b] = 0;
    }
    uVar2 = 0;
  }
  return uVar2;
}

