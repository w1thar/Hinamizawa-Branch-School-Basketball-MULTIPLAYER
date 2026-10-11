// FUN_00404b37 @ 00404b37  size=392

undefined4 __fastcall FUN_00404b37(void *param_1)

{
  LPCSTR pCVar1;
  HMODULE hInst;
  HANDLE pvVar2;
  undefined4 uVar3;
  char *lpString1;
  UINT type;
  int iVar4;
  int cy;
  UINT fuLoad;
  int *local_10c;
  CHAR local_104 [256];
  
  fuLoad = 0x2000;
  cy = 0;
  iVar4 = 0;
  type = 0;
  pCVar1 = (LPCSTR)((int)param_1 + 4);
  hInst = GetModuleHandleA((LPCSTR)0x0);
  pvVar2 = LoadImageA(hInst,pCVar1,type,iVar4,cy,fuLoad);
  *(HANDLE *)((int)param_1 + 0x70) = pvVar2;
  if (*(int *)((int)param_1 + 0x70) == 0) {
    lstrcpyA(local_104,&g_texturePath);
    lstrcatA(local_104,(LPCSTR)((int)param_1 + 4));
    local_10c = (int *)fopen(local_104,&DAT_00452f1c);
    if (local_10c == (int *)0x0) {
      pCVar1 = thunk_FUN_004071b0();
      lstrcpyA(local_104,pCVar1);
      lstrcatA(local_104,(LPCSTR)((int)param_1 + 4));
      local_10c = (int *)fopen(local_104,&DAT_00452f20);
      if (local_10c == (int *)0x0) {
        return 0x887600ff;
      }
    }
    fclose(local_10c);
    lpString1 = _strrchr((char *)((int)param_1 + 4),0x2e);
    if (lpString1 == (char *)0x0) {
      uVar3 = 0x80004001;
    }
    else {
      iVar4 = lstrcmpiA(lpString1,&DAT_00452f24);
      if (iVar4 == 0) {
        uVar3 = thunk_FUN_00404cbf(param_1,local_104);
      }
      else {
        iVar4 = lstrcmpiA(lpString1,&DAT_00452f2c);
        if (iVar4 == 0) {
          uVar3 = thunk_FUN_00404cfb(param_1,local_104);
        }
        else {
          uVar3 = 0x80004001;
        }
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

