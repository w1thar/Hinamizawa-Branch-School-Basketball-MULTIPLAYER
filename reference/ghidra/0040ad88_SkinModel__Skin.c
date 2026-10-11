// SkinModel::Skin @ 0040ad88  size=2224

void __thiscall SkinModel::Skin(SkinModel *this)

{
  Vec3 *v;
  undefined1 local_54 [12];
  Mat4 local_48;
  uint local_8;
  
  thunk_FUN_00403880(&local_48);
  for (local_8 = 0; local_8 < (uint)this->numBones; local_8 = local_8 + 1) {
    v = thunk_FUN_0040c470(local_54,&this->bones[local_8].pivot.x);
    SetTranslateMatrixV(&local_48,v);
    D3DUtil_SetRotateZMatrix(&this->bones[local_8].mat,this->bones[local_8].rot.z);
    D3DMath_MatrixMultiply(&this->bones[local_8].mat,&local_48,&this->bones[local_8].mat);
    D3DUtil_SetRotateXMatrix(&local_48,this->bones[local_8].rot.x);
    D3DMath_MatrixMultiply(&this->bones[local_8].mat,&this->bones[local_8].mat,&local_48);
    D3DUtil_SetRotateYMatrix(&local_48,this->bones[local_8].rot.y);
    D3DMath_MatrixMultiply(&this->bones[local_8].mat,&this->bones[local_8].mat,&local_48);
    SetTranslateMatrixV(&local_48,&this->bones[local_8].trans);
    D3DMath_MatrixMultiply(&this->bones[local_8].mat,&this->bones[local_8].mat,&local_48);
    SetTranslateMatrixV(&local_48,&this->bones[local_8].pivot);
    D3DMath_MatrixMultiply(&this->bones[local_8].mat,&this->bones[local_8].mat,&local_48);
    D3DUtil_SetRotateZMatrix(&this->bones[local_8].nrmMat,this->bones[local_8].rot.z);
    D3DUtil_SetRotateXMatrix(&local_48,this->bones[local_8].rot.x);
    D3DMath_MatrixMultiply(&this->bones[local_8].nrmMat,&this->bones[local_8].nrmMat,&local_48);
    D3DUtil_SetRotateYMatrix(&local_48,this->bones[local_8].rot.y);
    D3DMath_MatrixMultiply(&this->bones[local_8].nrmMat,&this->bones[local_8].nrmMat,&local_48);
  }
  for (local_8 = 0; local_8 < (uint)this->numBones; local_8 = local_8 + 1) {
    if (-1 < this->bones[local_8].parent) {
      D3DMath_MatrixMultiply
                (&this->bones[local_8].mat,&this->bones[local_8].mat,
                 &this->bones[this->bones[local_8].parent].mat);
      D3DMath_MatrixMultiply
                (&this->bones[local_8].nrmMat,&this->bones[local_8].nrmMat,
                 &this->bones[this->bones[local_8].parent].nrmMat);
    }
  }
  for (local_8 = 0; local_8 < this->numVerts; local_8 = local_8 + 1) {
    this->verts[local_8].pos.x =
         this->bones[this->srcVerts[local_8].bone].mat.m[8] * this->srcVerts[local_8].pos.z +
         this->bones[this->srcVerts[local_8].bone].mat.m[4] * this->srcVerts[local_8].pos.y +
         this->bones[this->srcVerts[local_8].bone].mat.m[0] * this->srcVerts[local_8].pos.x +
         this->bones[this->srcVerts[local_8].bone].mat.m[0xc];
    this->verts[local_8].pos.y =
         this->bones[this->srcVerts[local_8].bone].mat.m[9] * this->srcVerts[local_8].pos.z +
         this->bones[this->srcVerts[local_8].bone].mat.m[5] * this->srcVerts[local_8].pos.y +
         this->bones[this->srcVerts[local_8].bone].mat.m[1] * this->srcVerts[local_8].pos.x +
         this->bones[this->srcVerts[local_8].bone].mat.m[0xd];
    this->verts[local_8].pos.z =
         this->bones[this->srcVerts[local_8].bone].mat.m[10] * this->srcVerts[local_8].pos.z +
         this->bones[this->srcVerts[local_8].bone].mat.m[6] * this->srcVerts[local_8].pos.y +
         this->bones[this->srcVerts[local_8].bone].mat.m[2] * this->srcVerts[local_8].pos.x +
         this->bones[this->srcVerts[local_8].bone].mat.m[0xe];
    this->verts[local_8].normal.x =
         this->bones[this->srcVerts[local_8].bone].nrmMat.m[8] * this->srcVerts[local_8].normal.z +
         this->bones[this->srcVerts[local_8].bone].nrmMat.m[4] * this->srcVerts[local_8].normal.y +
         this->bones[this->srcVerts[local_8].bone].nrmMat.m[0] * this->srcVerts[local_8].normal.x +
         this->bones[this->srcVerts[local_8].bone].nrmMat.m[0xc];
    this->verts[local_8].normal.y =
         this->bones[this->srcVerts[local_8].bone].nrmMat.m[9] * this->srcVerts[local_8].normal.z +
         this->bones[this->srcVerts[local_8].bone].nrmMat.m[5] * this->srcVerts[local_8].normal.y +
         this->bones[this->srcVerts[local_8].bone].nrmMat.m[1] * this->srcVerts[local_8].normal.x +
         this->bones[this->srcVerts[local_8].bone].nrmMat.m[0xd];
    this->verts[local_8].normal.z =
         this->bones[this->srcVerts[local_8].bone].nrmMat.m[10] * this->srcVerts[local_8].normal.z +
         this->bones[this->srcVerts[local_8].bone].nrmMat.m[6] * this->srcVerts[local_8].normal.y +
         this->bones[this->srcVerts[local_8].bone].nrmMat.m[2] * this->srcVerts[local_8].normal.x +
         this->bones[this->srcVerts[local_8].bone].nrmMat.m[0xe];
  }
  return;
}

