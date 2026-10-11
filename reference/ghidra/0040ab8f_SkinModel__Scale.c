// SkinModel::Scale @ 0040ab8f  size=505

void __thiscall SkinModel::Scale(SkinModel *this,float s)

{
  uint local_c;
  int local_8;
  
  for (local_c = 0; local_c < this->numVerts; local_c = local_c + 1) {
    this->srcVerts[local_c].pos.x = this->srcVerts[local_c].pos.x * s;
    this->srcVerts[local_c].pos.y = this->srcVerts[local_c].pos.y * s;
    this->srcVerts[local_c].pos.z = this->srcVerts[local_c].pos.z * s;
  }
  for (local_8 = 0; local_8 < this->numBones; local_8 = local_8 + 1) {
    this->bones[local_8].pivot.x = (this->bones[local_8].pivot.x * s) / 9.0;
    this->bones[local_8].pivot.y = (this->bones[local_8].pivot.y * s) / 9.0;
    this->bones[local_8].pivot.z = (this->bones[local_8].pivot.z * s) / 9.0;
    this->bones[local_8].trans.x = (this->bones[local_8].trans.x * s) / 9.0;
    this->bones[local_8].trans.y = (this->bones[local_8].trans.y * s) / 9.0;
    this->bones[local_8].trans.z = (this->bones[local_8].trans.z * s) / 9.0;
  }
  return;
}

