// FUN_00430a58 @ 00430a58  size=488

void __fastcall FUN_00430a58(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 1; local_8 = local_8 + 1) {
    _memset(*(void **)(*(int *)(param_1 + 0x4c) + 8 + local_8 * 0xc),0,
            *(int *)(*(int *)(param_1 + 4) + 0x2c) * 0x18);
  }
  **(undefined4 **)(param_1 + 0x4c) = 0x3f7f26af;
  *(undefined4 *)(*(int *)(param_1 + 0x4c) + 4) = 0x4120d13f;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x24) = 0x3ed5e248;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x3c) = 0x3f1a3865;
  if (*(int *)(param_1 + 0x150) == 1) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x84) = 0xbfb5a7e3;
  }
  else if (*(int *)(param_1 + 0x150) == 3) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x84) = 0xbf11101b;
  }
  else if (*(int *)(param_1 + 0x150) == 4) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x84) = 0xbf00b806;
  }
  else if (*(int *)(param_1 + 0x150) == 5) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x84) = 0xbf6acc0c;
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x9c) = 0x400a9e2c;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0xa4) = 0xbeb1e55c;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0xbc) = 0xbf3839ef;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0xe4) = 0x402ce300;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0xec) = 0x3ecd2ac7;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 300) = 0xbf000618;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x144) = 0xbf08b513;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x15c) = 0xbf37544c;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x174) = 0xbec468ec;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x1a4) = 0xbf2ad938;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x1bc) = 0xbfd15dee;
  *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0xc) = 0;
  return;
}

