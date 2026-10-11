// FUN_00406810 @ 00406810  size=75

undefined4 __cdecl FUN_00406810(LPCSTR param_1)

{
  TexContainer *pTVar1;
  undefined4 uVar2;
  
  pTVar1 = D3DTextr_FindTexture(param_1);
  if (pTVar1 == (TexContainer *)0x0) {
    uVar2 = 0x887600ff;
  }
  else {
    if (pTVar1->surface != (void *)0x0) {
      (**(code **)(*(int *)pTVar1->surface + 8))(pTVar1->surface);
      pTVar1->surface = (void *)0x0;
    }
    uVar2 = 0;
  }
  return uVar2;
}

