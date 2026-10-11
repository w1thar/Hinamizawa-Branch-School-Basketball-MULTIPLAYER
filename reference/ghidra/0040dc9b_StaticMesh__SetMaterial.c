// StaticMesh::SetMaterial @ 0040dc9b  size=255

bool __thiscall StaticMesh::SetMaterial(StaticMesh *this,IDirect3DDevice7 *dev)

{
  void *tex;
  char *pcVar1;
  
  tex = D3DTextr_GetSurface(this->materials->texName);
  (*dev->lpVtbl->SetTexture)(dev,0,tex);
  pcVar1 = _strchr(this->materials->texName,0x2e);
  pcVar1 = _strchr(pcVar1,0x74);
  if (pcVar1 != (char *)0x0) {
    (*dev->lpVtbl->SetTextureStageState)(dev,0,5,2);
    (*dev->lpVtbl->SetRenderState)(dev,0x1b,1);
    (*dev->lpVtbl->SetRenderState)(dev,0x13,5);
    (*dev->lpVtbl->SetRenderState)(dev,0x14,6);
  }
  if ((this->materials->mtl).diffuse.a < 1.0) {
    (*dev->lpVtbl->SetRenderState)(dev,0x1b,1);
    (*dev->lpVtbl->SetRenderState)(dev,0x13,5);
    (*dev->lpVtbl->SetRenderState)(dev,0x14,2);
  }
  (*dev->lpVtbl->SetMaterial)(dev,&this->materials->mtl);
  return true;
}

