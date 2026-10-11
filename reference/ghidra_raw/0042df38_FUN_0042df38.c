// FUN_0042df38 @ 0042df38  size=136

void __fastcall FUN_0042df38(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 1; local_8 = local_8 + 1) {
    _memset(*(void **)(*(int *)(param_1 + 0x4c) + 8 + local_8 * 0xc),0,
            *(int *)(*(int *)(param_1 + 4) + 0x2c) * 0x18);
  }
  **(undefined4 **)(param_1 + 0x4c) = 0x3e82de65;
  *(undefined4 *)(*(int *)(param_1 + 0x4c) + 4) = 0x40a00000;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x1bc) = 0xbf973b00;
  *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0xc) = 0;
  return;
}

