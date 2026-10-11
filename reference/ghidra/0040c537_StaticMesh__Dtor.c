// StaticMesh::Dtor @ 0040c537  size=182

void __thiscall StaticMesh::Dtor(StaticMesh *this)

{
  this->vtbl = &PTR_LAB_0044e0bc;
  if (this->verts != (Vertex *)0x0) {
    operator_delete(this->verts);
    this->verts = (Vertex *)0x0;
  }
  if (this->srcVerts != (Vertex *)0x0) {
    operator_delete(this->srcVerts);
    this->srcVerts = (Vertex *)0x0;
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

