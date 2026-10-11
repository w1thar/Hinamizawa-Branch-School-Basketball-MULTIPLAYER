// D3DTextr_GetSurface @ 004068f2  size=52

/* Library Function - Single Match
    struct HMENU__ * __cdecl GetMenu(struct HWND__ *)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2008 Debug */

void * __cdecl D3DTextr_GetSurface(char *name)

{
  TexContainer *pTVar1;
  void *local_c;
  
  pTVar1 = D3DTextr_FindTexture(name);
  if (pTVar1 == (TexContainer *)0x0) {
    local_c = (void *)0x0;
  }
  else {
    local_c = pTVar1->surface;
  }
  return local_c;
}

