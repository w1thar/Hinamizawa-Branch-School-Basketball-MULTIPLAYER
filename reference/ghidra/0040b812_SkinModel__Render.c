// SkinModel::Render @ 0040b812  size=68

void __thiscall SkinModel::Render(SkinModel *this,IDirect3DDevice7 *dev)

{
  (*dev->lpVtbl->DrawIndexedPrimitive)
            (dev,4,0x112,this->verts,this->numVerts,this->indices,this->materials->numIndices,0);
  return;
}

