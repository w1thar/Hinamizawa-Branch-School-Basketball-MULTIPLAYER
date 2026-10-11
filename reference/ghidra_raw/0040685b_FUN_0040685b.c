// FUN_0040685b @ 0040685b  size=71

undefined4 FUN_0040685b(void)

{
  undefined4 *local_8;
  
  for (local_8 = DAT_00457ef0; local_8 != (undefined4 *)0x0; local_8 = (undefined4 *)*local_8) {
    if (local_8[0x1b] != 0) {
      (**(code **)(*(int *)local_8[0x1b] + 8))(local_8[0x1b]);
      local_8[0x1b] = 0;
    }
  }
  return 0;
}

