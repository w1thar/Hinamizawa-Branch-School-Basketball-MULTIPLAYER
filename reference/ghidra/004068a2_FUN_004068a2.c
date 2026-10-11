// FUN_004068a2 @ 004068a2  size=80

undefined4 __cdecl FUN_004068a2(LPCSTR param_1)

{
  TexContainer *this;
  
  this = D3DTextr_FindTexture(param_1);
  if ((this != (TexContainer *)0x0) && (this != (TexContainer *)0x0)) {
    thunk_FUN_00407170(this,1);
  }
  return 0;
}

