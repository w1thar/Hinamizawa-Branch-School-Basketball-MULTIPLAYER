// CGame_ShutdownGame @ 0042a256  size=562

void __fastcall CGame_ShutdownGame(int param_1)

{
  undefined4 *puVar1;
  int local_8;
  
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 0xd8 + local_8 * 4) != 0) {
      puVar1 = *(undefined4 **)(param_1 + 0xd8 + local_8 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(param_1 + 0xd8 + local_8 * 4) = 0;
    }
  }
  if (*(int *)(param_1 + 0xd4) != 0) {
    if (*(undefined4 **)(param_1 + 0xd4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xd4))(1);
    }
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  if (*(int *)(param_1 + 0xd0) != 0) {
    if (*(undefined4 **)(param_1 + 0xd0) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xd0))(1);
    }
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    if (*(undefined4 **)(param_1 + 0xcc) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xcc))(1);
    }
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  if (*(int *)(param_1 + 200) != 0) {
    if (*(undefined4 **)(param_1 + 200) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 200))(1);
    }
    *(undefined4 *)(param_1 + 200) = 0;
  }
  if (*(int *)(param_1 + 0xc4) != 0) {
    if (*(undefined4 **)(param_1 + 0xc4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xc4))(1);
    }
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    if (*(undefined4 **)(param_1 + 0xc0) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xc0))(1);
    }
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  return;
}

