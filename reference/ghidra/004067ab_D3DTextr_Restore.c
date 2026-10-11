// D3DTextr_Restore @ 004067ab  size=48

int __cdecl D3DTextr_Restore(char *name,IDirect3DDevice7 *dev)

{
  TexContainer *this;
  int iVar1;
  
  this = D3DTextr_FindTexture(name);
  if (this == (TexContainer *)0x0) {
    iVar1 = -0x7789ff01;
  }
  else {
    iVar1 = thunk_FUN_00405435(this,(int *)dev);
  }
  return iVar1;
}

