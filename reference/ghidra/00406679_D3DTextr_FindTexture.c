// D3DTextr_FindTexture @ 00406679  size=60

TexContainer * __cdecl D3DTextr_FindTexture(char *name)

{
  int iVar1;
  TexContainer *local_8;
  
  local_8 = DAT_00457ef0;
  while( true ) {
    if (local_8 == (TexContainer *)0x0) {
      return (TexContainer *)0x0;
    }
    iVar1 = lstrcmpiA(name,local_8->name);
    if (iVar1 == 0) break;
    local_8 = local_8->next;
  }
  return local_8;
}

