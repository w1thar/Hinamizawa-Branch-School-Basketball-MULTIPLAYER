// FUN_00402960 @ 00402960  size=103

int * __cdecl FUN_00402960(int *param_1,LPCSTR param_2,uint param_3)

{
  HMODULE hInst;
  int *piVar1;
  LPCSTR name;
  UINT type;
  int cx;
  int cy;
  UINT fuLoad;
  HANDLE local_8;
  
  fuLoad = 0x2000;
  cy = 0;
  cx = 0;
  type = 0;
  name = param_2;
  hInst = GetModuleHandleA((LPCSTR)0x0);
  local_8 = LoadImageA(hInst,name,type,cx,cy,fuLoad);
  if ((local_8 == (HANDLE)0x0) &&
     (local_8 = LoadImageA((HINSTANCE)0x0,param_2,0,0,0,0x2010), local_8 == (HANDLE)0x0)) {
    return (int *)0x0;
  }
  piVar1 = thunk_FUN_004029c7(param_1,local_8,param_3);
  return piVar1;
}

