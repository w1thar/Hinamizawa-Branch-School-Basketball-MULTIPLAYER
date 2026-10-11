// SkinModel::RenderMaterials @ 0040b638  size=474

void __thiscall SkinModel::RenderMaterials(SkinModel *this,IDirect3DDevice7 *dev)

{
  void *tex;
  char *pcVar1;
  uint local_c;
  u16 *local_8;
  
  local_8 = this->indices;
  for (local_c = 0; local_c < this->numMaterials; local_c = local_c + 1) {
    if (this->materials[local_c].numIndices != 0) {
      tex = D3DTextr_GetSurface(this->materials[local_c].texName);
      (*dev->lpVtbl->SetTexture)(dev,0,tex);
      pcVar1 = _strchr(this->materials[local_c].texName,0x2e);
      pcVar1 = _strchr(pcVar1,0x74);
      if (pcVar1 != (char *)0x0) {
        (*dev->lpVtbl->SetTextureStageState)(dev,0,5,2);
        (*dev->lpVtbl->SetRenderState)(dev,0x1b,1);
        (*dev->lpVtbl->SetRenderState)(dev,0x13,5);
        (*dev->lpVtbl->SetRenderState)(dev,0x14,6);
      }
      if (this->materials[local_c].mtl.diffuse.a < 1.0) {
        (*dev->lpVtbl->SetRenderState)(dev,0x1b,1);
        (*dev->lpVtbl->SetRenderState)(dev,0x13,5);
        (*dev->lpVtbl->SetRenderState)(dev,0x14,6);
      }
      (*dev->lpVtbl->SetMaterial)(dev,&this->materials[local_c].mtl);
      (*dev->lpVtbl->DrawIndexedPrimitive)
                (dev,4,0x112,this->verts,this->numVerts,local_8,this->materials[local_c].numIndices,
                 0);
      (*dev->lpVtbl->SetRenderState)(dev,0x1b,0);
      local_8 = local_8 + this->materials[local_c].numIndices;
    }
  }
  return;
}

