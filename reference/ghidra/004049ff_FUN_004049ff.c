// FUN_004049ff @ 004049ff  size=140

undefined4 * __thiscall
FUN_004049ff(void *this,LPCSTR param_1,undefined4 param_2,undefined4 param_3)

{
  lstrcpyA((LPSTR)((int)this + 4),param_1);
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = param_2;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = param_3;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(TexContainer **)this = g_textureList;
  g_textureList = this;
  return this;
}

