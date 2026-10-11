// StaticMesh::Scale @ 0040d99a  size=149

void __thiscall StaticMesh::Scale(StaticMesh *this,float s)

{
  uint local_8;
  
  for (local_8 = 0; local_8 < this->numVerts; local_8 = local_8 + 1) {
    this->verts[local_8].pos.x = this->verts[local_8].pos.x * s;
    this->verts[local_8].pos.y = this->verts[local_8].pos.y * s;
    this->verts[local_8].pos.z = this->verts[local_8].pos.z * s;
  }
  return;
}

