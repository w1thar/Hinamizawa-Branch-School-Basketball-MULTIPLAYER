// FUN_00402d2e @ 00402d2e  size=515

void __cdecl FUN_00402d2e(HDC param_1,int param_2,int param_3)

{
  COLORREF CVar1;
  COLORREF CVar2;
  COLORREF CVar3;
  COLORREF CVar4;
  undefined4 local_3c;
  undefined4 local_20;
  
  for (local_20 = 0; local_20 < param_2 / 2; local_20 = local_20 + 1) {
    for (local_3c = 0; local_3c < param_3 / 2; local_3c = local_3c + 1) {
      CVar1 = GetPixel(param_1,local_20 << 1,local_3c << 1);
      CVar2 = GetPixel(param_1,local_20 * 2 + 1,local_3c << 1);
      CVar3 = GetPixel(param_1,local_20 << 1,local_3c * 2 + 1);
      CVar4 = GetPixel(param_1,local_20 * 2 + 1,local_3c * 2 + 1);
      SetPixel(param_1,local_20,local_3c,
               (int)((CVar1 & 0xff) + (CVar2 & 0xff) + (CVar3 & 0xff) + (CVar4 & 0xff)) >> 2 & 0xffU
               | (((int)(CVar1 & 0xffff) >> 8) + ((int)(CVar2 & 0xffff) >> 8) +
                  ((int)(CVar3 & 0xffff) >> 8) + ((int)(CVar4 & 0xffff) >> 8) >> 2 & 0xffU) << 8 |
               ((int)((CVar1 >> 0x10 & 0xff) + (CVar2 >> 0x10 & 0xff) + (CVar3 >> 0x10 & 0xff) +
                     (CVar4 >> 0x10 & 0xff)) >> 2 & 0xffU) << 0x10);
    }
  }
  return;
}

