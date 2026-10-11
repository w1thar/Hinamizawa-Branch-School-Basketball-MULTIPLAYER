// StaticMesh::Render @ 0040dc34  size=103

bool __thiscall StaticMesh::Render(StaticMesh *this,IDirect3DDevice7 *dev)

{
  if (this->materials->numIndices != 0) {
    (*dev->lpVtbl->DrawIndexedPrimitive)
              (dev,4,0x112,this->verts,this->numVerts,this->indices,this->materials->numIndices,0);
  }
  return true;
}

