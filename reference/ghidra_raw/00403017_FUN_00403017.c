// FUN_00403017 @ 00403017  size=114

void __fastcall FUN_00403017(int param_1)

{
  DWORD DVar1;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    DVar1 = timeGetTime();
    *(DWORD *)(param_1 + 8) = DVar1;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    QueryPerformanceCounter((LARGE_INTEGER *)(param_1 + 8));
  }
  *(float *)(param_1 + 0x54) =
       (float)CONCAT44((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x24)) -
                       (uint)(*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0x20)),
                       *(uint *)(param_1 + 8) - *(uint *)(param_1 + 0x20)) *
       *(float *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0xc);
  return;
}

