// SkinModel::Load @ 004090bc  size=6867

bool __thiscall SkinModel::Load(SkinModel *this,char *name)

{
  u32 uVar1;
  Material7 *pMVar2;
  XFace *pXVar3;
  u16 *puVar4;
  XMaterial *pXVar5;
  Vec3 *pVVar6;
  Vec3 *a;
  CTexGroup *pCVar7;
  CTexVert *pCVar8;
  SkinModel *this_00;
  int iVar9;
  undefined4 *puVar10;
  float *pfVar11;
  undefined4 *puVar12;
  undefined4 *unaff_FS_OFFSET;
  Bone *local_2130;
  void *local_2120;
  SkinVertex *local_211c;
  Vertex *local_2118;
  Vec3 local_2104;
  Vec3 local_20f8;
  Vec3 local_20ec;
  Vec3 local_20e0;
  Vec3 local_20d4;
  void *local_20c8;
  void *local_20c4;
  XFace *local_20c0;
  SkinVertex *local_20bc;
  SkinVertex *local_20b8;
  Vertex *local_20b4;
  Vertex *local_20b0;
  int local_20ac;
  uint local_20a8;
  Vec3 local_20a4;
  uint local_2098;
  uint local_2094;
  SkinVertex *local_2090;
  uint local_208c;
  SkinVertex *local_2088;
  SkinVertex *local_2084;
  uint local_2080;
  uint local_207c;
  uint local_2078;
  int *local_2074;
  void *local_2070;
  byte local_206c;
  undefined4 local_206b;
  uint auStackY_1f6c [1997];
  undefined4 uStackY_38;
  uint uVar13;
  undefined1 *puVar14;
  char *pcVar15;
  int *piVar16;
  uint uVar17;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044cc88;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_00435010();
  local_206c = 0;
  puVar10 = &local_206b;
  for (iVar9 = 0x3f; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = 0;
  *(undefined1 *)((int)puVar10 + 2) = 0;
  sprintf(&local_206c,(byte *)s_basket__s_x_00453364);
  local_2074 = (int *)fopen((LPCSTR)&local_206c,&DAT_00453370);
  while (iVar9 = _strcmp((char *)&local_206c,s_Mesh___00453374), iVar9 != 0) {
    fgets((char *)&local_206c,0x100,local_2074);
  }
  fscanf(local_2074,&DAT_00453380);
  uVar1 = this_00->numVerts;
  local_20b0 = operator_new(uVar1 << 5);
  local_8 = 0;
  if (local_20b0 == (Vertex *)0x0) {
    local_2118 = (Vertex *)0x0;
  }
  else {
    thunk_FUN_0040c3a0(local_20b0,0x20,uVar1,&LAB_004010cd);
    local_2118 = local_20b0;
  }
  local_20b4 = local_2118;
  local_8 = 0xffffffff;
  this_00->verts = local_2118;
  _memset(this_00->verts,0,this_00->numVerts << 5);
  local_20b8 = operator_new(this_00->numVerts * 0x1c);
  local_8 = 1;
  if (local_20b8 == (SkinVertex *)0x0) {
    local_211c = (SkinVertex *)0x0;
  }
  else {
    thunk_FUN_0040c3a0(local_20b8,0x1c,0x4010fa,&LAB_004010fa);
    local_211c = local_20b8;
  }
  local_20bc = local_211c;
  local_8 = 0xffffffff;
  this_00->srcVerts = local_211c;
  _memset(this_00->srcVerts,0,this_00->numVerts * 0x1c);
  uVar13 = 0;
  while (uVar13 < this_00->numVerts - 1) {
    piVar16 = local_2074;
    fscanf(local_2074,(byte *)s__f__f__f___00453388);
    uVar13 = (int)piVar16 + 1;
  }
  fscanf(local_2074,(byte *)s__f__f__f___00453394);
  local_2078 = 0;
  FUN_00434d10(local_2074);
  fscanf(local_2074,&DAT_004533a0);
  pXVar3 = operator_new(local_2078 * 0x14);
  this_00->faces = pXVar3;
  _memset(this_00->faces,0,local_2078 * 0x14);
  this_00->numIndices = 0;
  puVar14 = (undefined1 *)0x0;
  while (puVar14 < (undefined1 *)(local_2078 - 1)) {
    pXVar3 = this_00->faces + (int)puVar14;
    uStackY_38 = 0x40949c;
    fscanf(local_2074,(byte *)s__d__d__d__d__d___004533a8);
    this_00->numIndices = this_00->numIndices + (this_00->faces[(int)pXVar3].n + -2) * 3;
    if (this_00->faces[(int)pXVar3].n == 3) {
      fgets((char *)&local_206c,0x100,local_2074);
    }
    puVar14 = (undefined1 *)((int)&pXVar3->n + 1);
  }
  pXVar3 = this_00->faces + (int)puVar14;
  uStackY_38 = 0x409573;
  fscanf(local_2074,(byte *)s__d__d__d__d__d___004533bc);
  this_00->numIndices = this_00->numIndices + (this_00->faces[(int)pXVar3].n + -2) * 3;
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  fscanf(local_2074,(byte *)s__d__004533d0);
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  for (uVar13 = 0; uVar13 < local_2078 - 1; uVar13 = uVar13 + 1) {
    fscanf(local_2074,(byte *)s__d__004533d8);
  }
  fscanf(local_2074,(byte *)s__d___004533e0);
  puVar4 = operator_new(this_00->numIndices << 1);
  this_00->indices = puVar4;
  _memset(this_00->indices,0,this_00->numIndices << 1);
  pXVar5 = operator_new(this_00->numMaterials * 0x148);
  this_00->materials = pXVar5;
  _memset(this_00->materials,0,this_00->numMaterials * 0x148);
  for (uVar13 = 0; uVar13 < local_2078; uVar13 = uVar13 + 1) {
    if (this_00->faces[uVar13].n == 3) {
      uVar17 = 0;
      for (local_207c = 0; local_207c <= auStackY_1f6c[uVar13]; local_207c = local_207c + 1) {
        uVar17 = uVar17 + this_00->materials[local_207c].numIndices;
      }
      for (local_207c = this_00->numIndices - 3; uVar17 < local_207c; local_207c = local_207c - 1) {
        this_00->indices[local_207c + 2] = this_00->indices[local_207c - 1];
      }
      this_00->indices[uVar17] = (u16)this_00->faces[uVar13].idx[0];
      this_00->indices[uVar17 + 1] = (u16)this_00->faces[uVar13].idx[1];
      this_00->indices[uVar17 + 2] = (u16)this_00->faces[uVar13].idx[2];
      this_00->materials[auStackY_1f6c[uVar13]].numIndices =
           this_00->materials[auStackY_1f6c[uVar13]].numIndices + 3;
    }
    else {
      uVar17 = 0;
      for (local_2080 = 0; local_2080 <= auStackY_1f6c[uVar13]; local_2080 = local_2080 + 1) {
        uVar17 = uVar17 + this_00->materials[local_2080].numIndices;
      }
      for (local_2080 = this_00->numIndices - 6; uVar17 < local_2080; local_2080 = local_2080 - 1) {
        this_00->indices[local_2080 + 5] = this_00->indices[local_2080 - 1];
      }
      this_00->indices[uVar17] = (u16)this_00->faces[uVar13].idx[0];
      this_00->indices[uVar17 + 1] = (u16)this_00->faces[uVar13].idx[1];
      this_00->indices[uVar17 + 2] = (u16)this_00->faces[uVar13].idx[2];
      this_00->indices[uVar17 + 3] = (u16)this_00->faces[uVar13].idx[0];
      this_00->indices[uVar17 + 4] = (u16)this_00->faces[uVar13].idx[2];
      this_00->indices[uVar17 + 5] = (u16)this_00->faces[uVar13].idx[3];
      this_00->materials[auStackY_1f6c[uVar13]].numIndices =
           this_00->materials[auStackY_1f6c[uVar13]].numIndices + 6;
    }
  }
  local_20c0 = this_00->faces;
  operator_delete(local_20c0);
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  uVar13 = 0;
  while (uVar13 < this_00->numMaterials) {
    pcVar15 = s__f__f__f__f___004533e8;
    fscanf(local_2074,(byte *)s__f__f__f__f___004533e8);
    pXVar5 = this_00->materials + (int)pcVar15;
    pMVar2 = &this_00->materials[(int)pcVar15].mtl;
    (pMVar2->ambient).r = (pXVar5->mtl).diffuse.r;
    (pMVar2->ambient).g = (pXVar5->mtl).diffuse.g;
    (pMVar2->ambient).b = (pXVar5->mtl).diffuse.b;
    (pMVar2->ambient).a = (pXVar5->mtl).diffuse.a;
    fscanf(local_2074,(byte *)s__f__004533fc);
    fscanf(local_2074,(byte *)s__f__f__f___00453404);
    piVar16 = local_2074;
    fscanf(local_2074,(byte *)s__f__f__f___00453414);
    fgets((char *)&local_206c,0x100,local_2074);
    fscanf(local_2074,&DAT_00453424);
    fgets((char *)&local_206c,0x100,local_2074);
    fscanf(local_2074,(byte *)s___c______00453428);
    sprintf(this_00->materials[(int)piVar16].texName,&local_206c);
    fgets((char *)&local_206c,0x100,local_2074);
    fgets((char *)&local_206c,0x100,local_2074);
    fgets((char *)&local_206c,0x100,local_2074);
    fgets((char *)&local_206c,0x100,local_2074);
    uVar13 = (int)piVar16 + 1;
  }
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  uVar13 = 0;
  while (uVar13 < this_00->numVerts - 1) {
    iVar9 = 0x409e3d;
    fscanf(local_2074,(byte *)s__f__f__00453438);
    uVar13 = iVar9 + 1;
  }
  fscanf(local_2074,(byte *)s__f__f__00453444);
  fclose(local_2074);
  iVar9 = 0x409ea5;
  local_20c4 = operator_new(this_00->numIndices * 0xc);
  local_8 = 2;
  if (local_20c4 == (void *)0x0) {
    local_2120 = (void *)0x0;
  }
  else {
    thunk_FUN_0040c3a0(local_20c4,0xc,iVar9,Vec3::CtorDefault);
    local_2120 = local_20c4;
  }
  local_20c8 = local_2120;
  local_8 = 0xffffffff;
  local_2070 = local_2120;
  _memset(local_2120,0,this_00->numIndices * 0xc);
  uVar13 = 0;
  while (uVar13 < this_00->numIndices) {
    local_208c = CONCAT22(local_208c._2_2_,this_00->indices[uVar13]);
    local_2094 = CONCAT22(local_2094._2_2_,this_00->indices[uVar13 + 1]);
    local_2098 = CONCAT22(local_2098._2_2_,this_00->indices[uVar13 + 2]);
    local_2084 = this_00->srcVerts + this_00->indices[uVar13];
    local_2088 = this_00->srcVerts + this_00->indices[uVar13 + 1];
    local_2090 = this_00->srcVerts + this_00->indices[uVar13 + 2];
    pVVar6 = Vec3_Sub(&local_20d4,&local_2090->pos,&local_2088->pos);
    iVar9 = 0x40a02d;
    a = Vec3_Sub(&local_20e0,&local_2088->pos,&local_2084->pos);
    pVVar6 = Vec3_Cross(&local_20ec,a,pVVar6);
    Vec3_Normalize(&local_20a4,pVVar6);
    Vec3::AddAssign((Vec3 *)((int)local_2070 + (local_208c & 0xffff) * 0xc),&local_20a4);
    Vec3::AddAssign((Vec3 *)((local_2094 & 0xffff) * 0xc + (int)local_2070),&local_20a4);
    Vec3::AddAssign((Vec3 *)((local_2098 & 0xffff) * 0xc + (int)local_2070),&local_20a4);
    uVar13 = iVar9 + 3;
  }
  for (uVar13 = 0; uVar13 < this_00->numVerts; uVar13 = uVar13 + 1) {
    for (local_20a8 = 0; local_20a8 < this_00->numVerts; local_20a8 = local_20a8 + 1) {
      if ((this_00->srcVerts[uVar13].pos.x == this_00->srcVerts[local_20a8].pos.x &&
          this_00->srcVerts[uVar13].pos.y == this_00->srcVerts[local_20a8].pos.y) &&
          this_00->srcVerts[uVar13].pos.z == this_00->srcVerts[local_20a8].pos.z) {
        pVVar6 = Vec3_Add(&local_20f8,(Vec3 *)((int)local_2070 + uVar13 * 0xc),
                          (Vec3 *)((int)local_2070 + local_20a8 * 0xc));
        pfVar11 = (float *)((int)local_2070 + uVar13 * 0xc);
        *pfVar11 = pVVar6->x;
        pfVar11[1] = pVVar6->y;
        pfVar11[2] = pVVar6->z;
        puVar12 = (undefined4 *)((int)local_2070 + uVar13 * 0xc);
        puVar10 = (undefined4 *)((int)local_2070 + local_20a8 * 0xc);
        *puVar10 = *puVar12;
        puVar10[1] = puVar12[1];
        puVar10[2] = puVar12[2];
      }
    }
  }
  for (uVar13 = 0; uVar13 < this_00->numVerts; uVar13 = uVar13 + 1) {
    pVVar6 = Vec3_Normalize(&local_2104,(Vec3 *)((int)local_2070 + uVar13 * 0xc));
    pfVar11 = (float *)((int)local_2070 + uVar13 * 0xc);
    *pfVar11 = pVVar6->x;
    pfVar11[1] = pVVar6->y;
    pfVar11[2] = pVVar6->z;
    this_00->srcVerts[uVar13].normal.x = *(float *)((int)local_2070 + uVar13 * 0xc);
    this_00->srcVerts[uVar13].normal.y = *(float *)((int)local_2070 + uVar13 * 0xc + 4);
    this_00->srcVerts[uVar13].normal.z = *(float *)((int)local_2070 + uVar13 * 0xc + 8);
  }
  operator_delete(local_2070);
  sprintf(&local_206c,(byte *)s_basket__s_osm_00453450);
  local_2074 = (int *)fopen((LPCSTR)&local_206c,&DAT_00453460);
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  fscanf(local_2074,(byte *)s__d__s_00453464);
  iVar9 = this_00->numBones;
  local_2130 = operator_new(iVar9 * 0xa8);
  local_8 = 3;
  if (local_2130 == (Bone *)0x0) {
    local_2130 = (Bone *)0x0;
  }
  else {
    thunk_FUN_0040c3a0(local_2130,0xa8,iVar9,&LAB_004010aa);
  }
  local_8 = 0xffffffff;
  this_00->bones = local_2130;
  _memset(this_00->bones,0,this_00->numBones * 0xa8);
  this_00->bones->parent = -1;
  fgets((char *)&local_206c,0x100,local_2074);
  for (iVar9 = 0; iVar9 < this_00->numBones; iVar9 = iVar9 + 1) {
    fgets((char *)&local_206c,0x100,local_2074);
    fscanf(local_2074,(byte *)s__d__0045346c);
    fgets((char *)&local_206c,0x100,local_2074);
    fscanf(local_2074,(byte *)s__f__f__f__00453474);
    fgets((char *)&local_206c,0x100,local_2074);
    fscanf(local_2074,(byte *)s__f__f__f__00453480);
    fgets((char *)&local_206c,0x100,local_2074);
    fscanf(local_2074,(byte *)s__f__f__f__0045348c);
    fgets((char *)&local_206c,0x100,local_2074);
    fgets((char *)&local_206c,0x100,local_2074);
  }
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  for (uVar13 = 0; uVar13 < this_00->numVerts; uVar13 = uVar13 + 1) {
    fscanf(local_2074,(byte *)s__d__00453498);
    fgets((char *)&local_206c,0x100,local_2074);
  }
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  fscanf(local_2074,&DAT_004534a0);
  fgets((char *)&local_206c,0x100,local_2074);
  pCVar7 = operator_new(this_00->numCTex * 0xc);
  this_00->ctex = pCVar7;
  _memset(this_00->ctex,0,this_00->numCTex * 0xc);
  for (iVar9 = 0; iVar9 < this_00->numCTex; iVar9 = iVar9 + 1) {
    fgets((char *)&local_206c,0x100,local_2074);
    fscanf(local_2074,(byte *)s__d__004534a8);
    fgets((char *)&local_206c,0x100,local_2074);
    pCVar8 = operator_new(this_00->ctex[iVar9].count * 0xc);
    this_00->ctex[iVar9].verts = pCVar8;
    _memset(this_00->ctex[iVar9].verts,0,this_00->ctex[iVar9].count * 0xc);
    fscanf(local_2074,(byte *)s__f__004534b0);
    fgets((char *)&local_206c,0x100,local_2074);
    fgets((char *)&local_206c,0x100,local_2074);
    for (local_20ac = 0; local_20ac < this_00->ctex[iVar9].count; local_20ac = local_20ac + 1) {
      fscanf(local_2074,(byte *)s__d__004534b8);
      this_00->ctex[iVar9].verts[local_20ac].tv =
           this_00->verts[this_00->ctex[iVar9].verts[local_20ac].vtx].tu;
      this_00->ctex[iVar9].verts[local_20ac].tu =
           this_00->verts[this_00->ctex[iVar9].verts[local_20ac].vtx].tv;
      fgets((char *)&local_206c,0x100,local_2074);
    }
  }
  fclose(local_2074);
  Scale(this_00,2.5);
  *unaff_FS_OFFSET = local_10;
  return true;
}

