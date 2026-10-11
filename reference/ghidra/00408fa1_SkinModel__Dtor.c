// SkinModel::Dtor @ 00408fa1  size=283

void __thiscall SkinModel::Dtor(SkinModel *this)

{
  int local_8;
  
  this->vtbl = &PTR_LAB_0044e0ac;
  for (local_8 = 0; local_8 < this->numCTex; local_8 = local_8 + 1) {
    if (this->ctex[local_8].verts != (CTexVert *)0x0) {
      operator_delete(this->ctex[local_8].verts);
      this->ctex[local_8].verts = (CTexVert *)0x0;
    }
  }
  if (this->ctex != (CTexGroup *)0x0) {
    operator_delete(this->ctex);
    this->ctex = (CTexGroup *)0x0;
  }
  if (this->verts != (Vertex *)0x0) {
    operator_delete(this->verts);
    this->verts = (Vertex *)0x0;
  }
  if (this->indices != (u16 *)0x0) {
    operator_delete(this->indices);
    this->indices = (u16 *)0x0;
  }
  if (this->materials != (XMaterial *)0x0) {
    operator_delete(this->materials);
    this->materials = (XMaterial *)0x0;
  }
  return;
}

