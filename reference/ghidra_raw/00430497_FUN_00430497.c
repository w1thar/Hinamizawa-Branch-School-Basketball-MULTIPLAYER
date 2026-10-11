// FUN_00430497 @ 00430497  size=282

void __fastcall FUN_00430497(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 1; local_8 = local_8 + 1) {
    _memset(*(void **)(*(int *)(param_1 + 0x4c) + 8 + local_8 * 0xc),0,
            *(int *)(*(int *)(param_1 + 4) + 0x2c) * 0x18);
  }
  **(undefined4 **)(param_1 + 0x4c) = 0x3f814f6a;
  *(undefined4 *)(*(int *)(param_1 + 0x4c) + 4) = 0x41a00000;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x24) = 0x3eded224;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x3c) = 0xbeab13be;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x9c) = 0x3f864abe;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0xa4) = 0x3f07ae14;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0xbc) = 0xbfd9a648;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0xe4) = 0x3f88a466;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0xec) = 0xbf07ae14;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x104) = 0x3fdbcf1c;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x1bc) = 0xbf973b00;
  *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0xc) = 0;
  return;
}

