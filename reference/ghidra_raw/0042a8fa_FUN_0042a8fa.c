// FUN_0042a8fa @ 0042a8fa  size=1985

void __fastcall FUN_0042a8fa(int param_1)

{
  HMENU__ *pHVar1;
  float local_84 [16];
  undefined4 local_44 [16];
  
  thunk_FUN_00403880(local_44);
  thunk_FUN_00403880(local_84);
  *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xfc) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x108) = 0x3f800000;
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x40))(*(undefined4 *)(param_1 + 0x3c),param_1 + 0xf0);
  pHVar1 = GetMenu((HWND__ *)s_basket_efect_tga_00454260);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x8c))(*(undefined4 *)(param_1 + 0x3c),0,pHVar1);
  thunk_FUN_004076f2(local_44,*(undefined4 *)(param_1 + 0x264));
  thunk_FUN_0040774d(local_84,*(undefined4 *)(param_1 + 0x260));
  thunk_FUN_004038d0(local_44,(int)local_44,(int)local_84);
  if (*(float *)(param_1 + 0x250) <= 0.7) {
    thunk_FUN_0040c4e0(local_84,*(undefined4 *)(param_1 + 0x24c),0x3f333333,
                       *(undefined4 *)(param_1 + 0x254));
  }
  else {
    thunk_FUN_0040c4e0(local_84,*(undefined4 *)(param_1 + 0x24c),*(undefined4 *)(param_1 + 0x250),
                       *(undefined4 *)(param_1 + 0x254));
  }
  thunk_FUN_004038d0(local_44,(int)local_44,(int)local_84);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x2c))(*(undefined4 *)(param_1 + 0x3c),1,local_44);
  thunk_FUN_0040dc34(*(void **)(param_1 + 0xd0),*(int **)(param_1 + 0x3c));
  thunk_FUN_0040c4e0(local_44,0x420c0000,0,0);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x2c))(*(undefined4 *)(param_1 + 0x3c),1,local_44);
  thunk_FUN_0040dc34(*(void **)(param_1 + 0xcc),*(int **)(param_1 + 0x3c));
  thunk_FUN_0040774d(local_84,0x4048f5c3);
  thunk_FUN_0040c4e0(local_44,0xc20c0000,0,0);
  thunk_FUN_004038d0(local_44,(int)local_84,(int)local_44);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x2c))(*(undefined4 *)(param_1 + 0x3c),1,local_44);
  thunk_FUN_0040dc34(*(void **)(param_1 + 0xcc),*(int **)(param_1 + 0x3c));
  if (0 < *(int *)(param_1 + 0x3ac)) {
    if (*(int *)(param_1 + 0x3ac) == 1) {
      *(undefined4 *)(param_1 + 0xf0) = 0;
      *(undefined4 *)(param_1 + 0xf4) = 0;
      *(undefined4 *)(param_1 + 0xf8) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      *(undefined4 *)(param_1 + 0x108) = 0x3f800000;
    }
    else if (*(int *)(param_1 + 0x3ac) == 2) {
      *(undefined4 *)(param_1 + 0xf0) = 0;
      *(undefined4 *)(param_1 + 0xf4) = 0x3f800000;
      *(undefined4 *)(param_1 + 0xf8) = 0;
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x108) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
      *(undefined4 *)(param_1 + 0xf4) = 0;
      *(undefined4 *)(param_1 + 0xf8) = 0;
      *(undefined4 *)(param_1 + 0x100) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x104) = 0;
      *(undefined4 *)(param_1 + 0x108) = 0;
    }
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x40))(*(undefined4 *)(param_1 + 0x3c),param_1 + 0xf0)
    ;
    thunk_FUN_0040774d(local_84,*(undefined4 *)(param_1 + 0x3e0));
    thunk_FUN_0040c4e0(local_44,*(undefined4 *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x244),
                       *(undefined4 *)(param_1 + 0x248));
    thunk_FUN_004038d0(local_44,(int)local_84,(int)local_44);
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x2c))(*(undefined4 *)(param_1 + 0x3c),1,local_44);
    thunk_FUN_0040dc34(*(void **)(param_1 + 0xd4),*(int **)(param_1 + 0x3c));
    thunk_FUN_0040774d(local_84,0x4048f5c3);
    thunk_FUN_0040c4e0(local_44,0xc20c0000,0,0);
    thunk_FUN_004038d0(local_44,(int)local_84,(int)local_44);
  }
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x94))(*(undefined4 *)(param_1 + 0x3c),0,5,0);
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x40))(*(undefined4 *)(param_1 + 0x3c),param_1 + 0xf0);
  thunk_FUN_004038d0(local_44,(int)local_44,param_1 + 0x1dc);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x2c))(*(undefined4 *)(param_1 + 0x3c),1,local_44);
  thunk_FUN_0040dc34(*(void **)(param_1 + 0xcc),*(int **)(param_1 + 0x3c));
  thunk_FUN_0040c4e0(local_44,0x420c0000,0,0);
  thunk_FUN_004038d0(local_44,(int)local_44,param_1 + 0x1dc);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x2c))(*(undefined4 *)(param_1 + 0x3c),1,local_44);
  thunk_FUN_0040dc34(*(void **)(param_1 + 0xcc),*(int **)(param_1 + 0x3c));
  if (*(float *)(param_1 + 0x250) <= 0.7) {
    thunk_FUN_0040c4e0(local_44,*(undefined4 *)(param_1 + 0x24c),0x3f333333,
                       *(undefined4 *)(param_1 + 0x254));
  }
  else {
    thunk_FUN_0040c4e0(local_44,*(undefined4 *)(param_1 + 0x24c),*(undefined4 *)(param_1 + 0x250),
                       *(undefined4 *)(param_1 + 0x254));
  }
  thunk_FUN_004038d0(local_44,(int)local_44,param_1 + 0x1dc);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x2c))(*(undefined4 *)(param_1 + 0x3c),1,local_44);
  thunk_FUN_0040dc34(*(void **)(param_1 + 0xd0),*(int **)(param_1 + 0x3c));
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x2c))
            (*(undefined4 *)(param_1 + 0x3c),1,param_1 + 0x1dc);
  thunk_FUN_0040dc34(*(void **)(param_1 + 200),*(int **)(param_1 + 0x3c));
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x94))(*(undefined4 *)(param_1 + 0x3c),0,5,2);
  thunk_FUN_00408040(local_44);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x2c))(*(undefined4 *)(param_1 + 0x3c),1,local_44);
  return;
}

