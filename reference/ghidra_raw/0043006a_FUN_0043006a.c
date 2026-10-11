// FUN_0043006a @ 0043006a  size=353

void __fastcall FUN_0043006a(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 1; local_8 = local_8 + 1) {
    _memset(*(void **)(*(int *)(param_1 + 0x4c) + 8 + local_8 * 0xc),0,
            *(int *)(*(int *)(param_1 + 4) + 0x2c) * 0x18);
  }
  **(undefined4 **)(param_1 + 0x4c) = 0x3ed5768a;
  *(undefined4 *)(*(int *)(param_1 + 0x4c) + 4) = 0x4124d5e6;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 4) = 0xbf69b5b7;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x24) = 0xbec35782;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x3c) = 0x3f5d6c2f;
  if (*(int *)(param_1 + 0x150) == 1 || *(int *)(param_1 + 0x150) == 5) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x84) = 0xbef780dc;
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 300) = 0x3f6658a3;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x144) = 0xc0079bb2;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x15c) = 0x3f99c372;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x174) = 0x3f845ce6;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x18c) = 0xc00e30f9;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x1a4) = 0x3f8f5d9a;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x1bc) = 0xbfd15dee;
  *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0xc) = 0;
  return;
}

