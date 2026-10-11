// D3DTextr_RestoreAllTextures @ 004067db  size=53

int __cdecl D3DTextr_RestoreAllTextures(IDirect3DDevice7 *dev)

{
  TexContainer *local_8;
  
  for (local_8 = g_textureList; local_8 != (TexContainer *)0x0; local_8 = local_8->next) {
    D3DTextr_Restore(local_8->name,dev);
  }
  return 0;
}

