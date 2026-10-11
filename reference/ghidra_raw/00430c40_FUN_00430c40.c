// FUN_00430c40 @ 00430c40  size=557

void __fastcall FUN_00430c40(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 1; local_8 = local_8 + 1) {
    _memset(*(void **)(*(int *)(param_1 + 0x4c) + 8 + local_8 * 0xc),0,
            *(int *)(*(int *)(param_1 + 4) + 0x2c) * 0x18);
  }
  **(undefined4 **)(param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 0x4c) + 4) = 0x41200000;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 8) = 0xc027200c;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0xc) = 0x3fb16170;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x9c) = 0xbf262e4d;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0xe4) = 0xbf2713be;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x144) = 0xc0088e2e;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x18c) = 0xc008a800;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x1bc) = 0xbff92e17;
  *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0xc) = 0;
  if (*(int *)(param_1 + 0x150) == 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x24) = 0xbf97801b;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x3c) = 0xbe19e386;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0xa4) = 0xbe9147f1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0xec) = 0x3e918efc;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 300) = 0x3f88b4b7;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x15c) = 0xbec483ed;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x174) = 0x3f84573a;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x1a4) = 0xbe4cc1ca;
  }
  else {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x24) = 0xbfb35b68;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x3c) = 0x3d4f55de;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0xa4) = 0xbdf19c5a;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0xec) = 0x3def56eb;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 300) = 0x3fa48416;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x15c) = 0xbf158698;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x174) = 0x3fa46634;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + 8) + 0x1a4) = 0xbf11819d;
  }
  return;
}

