// D3DTextr_RestoreAllTextures @ 004067db  size=53

int __cdecl D3DTextr_RestoreAllTextures(IDirect3DDevice7 *dev)

{
  undefined4 *local_8;
  
  for (local_8 = DAT_00457ef0; local_8 != (undefined4 *)0x0; local_8 = (undefined4 *)*local_8) {
    D3DTextr_Restore((char *)(local_8 + 1),dev);
  }
  return 0;
}

