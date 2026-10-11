// FUN_004071b0 @ 004071b0  size=137

undefined * FUN_004071b0(void)

{
  undefined *puVar1;
  HKEY local_14;
  DWORD local_10 [3];
  
  local_10[1] = 0x200;
  local_10[2] = RegOpenKeyExA((HKEY)0x80000002,s_Software_Microsoft_DirectX_00452f3c,0,0x20019,
                              &local_14);
  if (local_10[2] == 0) {
    local_10[2] = RegQueryValueExA(local_14,s_DXSDK_Samples_Path_00452f58,(LPDWORD)0x0,local_10,
                                   &DAT_00457f60,local_10 + 1);
    RegCloseKey(local_14);
    if (local_10[2] == 0) {
      lstrcatA(&DAT_00457f60,s__D3DIM_Media__00452f6c);
      puVar1 = &DAT_00457f60;
    }
    else {
      puVar1 = &DAT_00458160;
    }
  }
  else {
    puVar1 = &DAT_00458160;
  }
  return puVar1;
}

