// FUN_0042a829 @ 0042a829  size=209

void __fastcall FUN_0042a829(int param_1)

{
  HMENU__ *pHVar1;
  
  *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xfc) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x108) = 0x3f800000;
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x40))(*(undefined4 *)(param_1 + 0x3c),param_1 + 0xf0);
  pHVar1 = GetMenu((HWND__ *)s_basket_court_tga_0045424c);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x8c))(*(undefined4 *)(param_1 + 0x3c),0,pHVar1);
  thunk_FUN_0040dc34(*(void **)(param_1 + 0xc4),*(int **)(param_1 + 0x3c));
  thunk_FUN_0040dc34(*(void **)(param_1 + 200),*(int **)(param_1 + 0x3c));
  return;
}

