// SkinModel::Load @ 004090bc  size=6867

bool __thiscall SkinModel::Load(SkinModel *this,char *name)

{
  u32 uVar1;
  Material7 *pMVar2;
  XFace *pXVar3;
  u16 *puVar4;
  XMaterial *pXVar5;
  void *pvVar6;
  void *pvVar7;
  float *pfVar8;
  undefined4 *puVar9;
  CTexGroup *pCVar10;
  CTexVert *pCVar11;
  SkinModel *this_00;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *unaff_FS_OFFSET;
  Bone *local_2130;
  void *local_2120;
  SkinVertex *local_211c;
  Vertex *local_2118;
  undefined1 local_2104 [12];
  undefined1 local_20f8 [12];
  undefined4 local_20ec [3];
  undefined1 local_20e0 [12];
  undefined1 local_20d4 [12];
  void *local_20c8;
  void *local_20c4;
  XFace *local_20c0;
  SkinVertex *local_20bc;
  SkinVertex *local_20b8;
  Vertex *local_20b4;
  Vertex *local_20b0;
  int local_20ac;
  uint local_20a8;
  float local_20a4 [3];
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
  uint uVar14;
  undefined1 *puVar15;
  char *pcVar16;
  int *piVar17;
  uint uVar18;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044cc88;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_00435010();
  local_206c = 0;
  puVar9 = &local_206b;
  for (iVar12 = 0x3f; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)puVar9 = 0;
  *(undefined1 *)((int)puVar9 + 2) = 0;
  sprintf(&local_206c,(byte *)s_basket__s_x_00453364);
  local_2074 = (int *)fopen((LPCSTR)&local_206c,&DAT_00453370);
  while (iVar12 = _strcmp((char *)&local_206c,s_Mesh___00453374), iVar12 != 0) {
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
  uVar14 = 0;
  while (uVar14 < this_00->numVerts - 1) {
    piVar17 = local_2074;
    fscanf(local_2074,(byte *)s__f__f__f___00453388);
    uVar14 = (int)piVar17 + 1;
  }
  fscanf(local_2074,(byte *)s__f__f__f___00453394);
  local_2078 = 0;
  FUN_00434d10(local_2074);
  fscanf(local_2074,&DAT_004533a0);
  pXVar3 = operator_new(local_2078 * 0x14);
  this_00->faces = pXVar3;
  _memset(this_00->faces,0,local_2078 * 0x14);
  this_00->numIndices = 0;
  puVar15 = (undefined1 *)0x0;
  while (puVar15 < (undefined1 *)(local_2078 - 1)) {
    pXVar3 = this_00->faces + (int)puVar15;
    uStackY_38 = 0x40949c;
    fscanf(local_2074,(byte *)s__d__d__d__d__d___004533a8);
    this_00->numIndices = this_00->numIndices + (this_00->faces[(int)pXVar3].n + -2) * 3;
    if (this_00->faces[(int)pXVar3].n == 3) {
      fgets((char *)&local_206c,0x100,local_2074);
    }
    puVar15 = (undefined1 *)((int)&pXVar3->n + 1);
  }
  pXVar3 = this_00->faces + (int)puVar15;
  uStackY_38 = 0x409573;
  fscanf(local_2074,(byte *)s__d__d__d__d__d___004533bc);
  this_00->numIndices = this_00->numIndices + (this_00->faces[(int)pXVar3].n + -2) * 3;
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  fscanf(local_2074,(byte *)s__d__004533d0);
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  for (uVar14 = 0; uVar14 < local_2078 - 1; uVar14 = uVar14 + 1) {
    fscanf(local_2074,(byte *)s__d__004533d8);
  }
  fscanf(local_2074,(byte *)s__d___004533e0);
  puVar4 = operator_new(this_00->numIndices << 1);
  this_00->indices = puVar4;
  _memset(this_00->indices,0,this_00->numIndices << 1);
  pXVar5 = operator_new(this_00->numMaterials * 0x148);
  this_00->materials = pXVar5;
  _memset(this_00->materials,0,this_00->numMaterials * 0x148);
  for (uVar14 = 0; uVar14 < local_2078; uVar14 = uVar14 + 1) {
    if (this_00->faces[uVar14].n == 3) {
      uVar18 = 0;
      for (local_207c = 0; local_207c <= auStackY_1f6c[uVar14]; local_207c = local_207c + 1) {
        uVar18 = uVar18 + this_00->materials[local_207c].numIndices;
      }
      for (local_207c = this_00->numIndices - 3; uVar18 < local_207c; local_207c = local_207c - 1) {
        this_00->indices[local_207c + 2] = this_00->indices[local_207c - 1];
      }
      this_00->indices[uVar18] = (u16)this_00->faces[uVar14].idx[0];
      this_00->indices[uVar18 + 1] = (u16)this_00->faces[uVar14].idx[1];
      this_00->indices[uVar18 + 2] = (u16)this_00->faces[uVar14].idx[2];
      this_00->materials[auStackY_1f6c[uVar14]].numIndices =
           this_00->materials[auStackY_1f6c[uVar14]].numIndices + 3;
    }
    else {
      uVar18 = 0;
      for (local_2080 = 0; local_2080 <= auStackY_1f6c[uVar14]; local_2080 = local_2080 + 1) {
        uVar18 = uVar18 + this_00->materials[local_2080].numIndices;
      }
      for (local_2080 = this_00->numIndices - 6; uVar18 < local_2080; local_2080 = local_2080 - 1) {
        this_00->indices[local_2080 + 5] = this_00->indices[local_2080 - 1];
      }
      this_00->indices[uVar18] = (u16)this_00->faces[uVar14].idx[0];
      this_00->indices[uVar18 + 1] = (u16)this_00->faces[uVar14].idx[1];
      this_00->indices[uVar18 + 2] = (u16)this_00->faces[uVar14].idx[2];
      this_00->indices[uVar18 + 3] = (u16)this_00->faces[uVar14].idx[0];
      this_00->indices[uVar18 + 4] = (u16)this_00->faces[uVar14].idx[2];
      this_00->indices[uVar18 + 5] = (u16)this_00->faces[uVar14].idx[3];
      this_00->materials[auStackY_1f6c[uVar14]].numIndices =
           this_00->materials[auStackY_1f6c[uVar14]].numIndices + 6;
    }
  }
  local_20c0 = this_00->faces;
  operator_delete(local_20c0);
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  uVar14 = 0;
  while (uVar14 < this_00->numMaterials) {
    pcVar16 = s__f__f__f__f___004533e8;
    fscanf(local_2074,(byte *)s__f__f__f__f___004533e8);
    pXVar5 = this_00->materials + (int)pcVar16;
    pMVar2 = &this_00->materials[(int)pcVar16].mtl;
    (pMVar2->ambient).r = (pXVar5->mtl).diffuse.r;
    (pMVar2->ambient).g = (pXVar5->mtl).diffuse.g;
    (pMVar2->ambient).b = (pXVar5->mtl).diffuse.b;
    (pMVar2->ambient).a = (pXVar5->mtl).diffuse.a;
    fscanf(local_2074,(byte *)s__f__004533fc);
    fscanf(local_2074,(byte *)s__f__f__f___00453404);
    piVar17 = local_2074;
    fscanf(local_2074,(byte *)s__f__f__f___00453414);
    fgets((char *)&local_206c,0x100,local_2074);
    fscanf(local_2074,&DAT_00453424);
    fgets((char *)&local_206c,0x100,local_2074);
    fscanf(local_2074,(byte *)s___c______00453428);
    sprintf(this_00->materials[(int)piVar17].texName,&local_206c);
    fgets((char *)&local_206c,0x100,local_2074);
    fgets((char *)&local_206c,0x100,local_2074);
    fgets((char *)&local_206c,0x100,local_2074);
    fgets((char *)&local_206c,0x100,local_2074);
    uVar14 = (int)piVar17 + 1;
  }
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  uVar14 = 0;
  while (uVar14 < this_00->numVerts - 1) {
    iVar12 = 0x409e3d;
    fscanf(local_2074,(byte *)s__f__f__00453438);
    uVar14 = iVar12 + 1;
  }
  fscanf(local_2074,(byte *)s__f__f__00453444);
  fclose(local_2074);
  iVar12 = 0x409ea5;
  local_20c4 = operator_new(this_00->numIndices * 0xc);
  local_8 = 2;
  if (local_20c4 == (void *)0x0) {
    local_2120 = (void *)0x0;
  }
  else {
    thunk_FUN_0040c3a0(local_20c4,0xc,iVar12,thunk_FUN_00407fe0);
    local_2120 = local_20c4;
  }
  local_20c8 = local_2120;
  local_8 = 0xffffffff;
  local_2070 = local_2120;
  _memset(local_2120,0,this_00->numIndices * 0xc);
  uVar14 = 0;
  while (uVar14 < this_00->numIndices) {
    local_208c = CONCAT22(local_208c._2_2_,this_00->indices[uVar14]);
    local_2094 = CONCAT22(local_2094._2_2_,this_00->indices[uVar14 + 1]);
    local_2098 = CONCAT22(local_2098._2_2_,this_00->indices[uVar14 + 2]);
    local_2084 = this_00->srcVerts + this_00->indices[uVar14];
    local_2088 = this_00->srcVerts + this_00->indices[uVar14 + 1];
    local_2090 = this_00->srcVerts + this_00->indices[uVar14 + 2];
    pvVar6 = thunk_FUN_00407cb0(local_20d4,(float *)local_2090,(float *)local_2088);
    iVar12 = 0x40a02d;
    pvVar7 = thunk_FUN_00407cb0(local_20e0,(float *)local_2088,(float *)local_2084);
    pfVar8 = (float *)thunk_FUN_00407e80(local_20ec,pvVar7,pvVar6);
    thunk_FUN_00407dc0(local_20a4,pfVar8);
    thunk_FUN_0040c2f0((void *)((int)local_2070 + (local_208c & 0xffff) * 0xc),local_20a4);
    thunk_FUN_0040c2f0((void *)((local_2094 & 0xffff) * 0xc + (int)local_2070),local_20a4);
    thunk_FUN_0040c2f0((void *)((local_2098 & 0xffff) * 0xc + (int)local_2070),local_20a4);
    uVar14 = iVar12 + 3;
  }
  for (uVar14 = 0; uVar14 < this_00->numVerts; uVar14 = uVar14 + 1) {
    for (local_20a8 = 0; local_20a8 < this_00->numVerts; local_20a8 = local_20a8 + 1) {
      if ((this_00->srcVerts[uVar14].pos.x == this_00->srcVerts[local_20a8].pos.x &&
          this_00->srcVerts[uVar14].pos.y == this_00->srcVerts[local_20a8].pos.y) &&
          this_00->srcVerts[uVar14].pos.z == this_00->srcVerts[local_20a8].pos.z) {
        puVar9 = thunk_FUN_0040c350(local_20f8,(float *)((int)local_2070 + uVar14 * 0xc),
                                    (float *)((int)local_2070 + local_20a8 * 0xc));
        puVar13 = (undefined4 *)((int)local_2070 + uVar14 * 0xc);
        *puVar13 = *puVar9;
        puVar13[1] = puVar9[1];
        puVar13[2] = puVar9[2];
        puVar13 = (undefined4 *)((int)local_2070 + uVar14 * 0xc);
        puVar9 = (undefined4 *)((int)local_2070 + local_20a8 * 0xc);
        *puVar9 = *puVar13;
        puVar9[1] = puVar13[1];
        puVar9[2] = puVar13[2];
      }
    }
  }
  for (uVar14 = 0; uVar14 < this_00->numVerts; uVar14 = uVar14 + 1) {
    puVar9 = thunk_FUN_00407dc0(local_2104,(float *)((int)local_2070 + uVar14 * 0xc));
    puVar13 = (undefined4 *)((int)local_2070 + uVar14 * 0xc);
    *puVar13 = *puVar9;
    puVar13[1] = puVar9[1];
    puVar13[2] = puVar9[2];
    this_00->srcVerts[uVar14].normal.x = *(float *)((int)local_2070 + uVar14 * 0xc);
    this_00->srcVerts[uVar14].normal.y = *(float *)((int)local_2070 + uVar14 * 0xc + 4);
    this_00->srcVerts[uVar14].normal.z = *(float *)((int)local_2070 + uVar14 * 0xc + 8);
  }
  operator_delete(local_2070);
  sprintf(&local_206c,(byte *)s_basket__s_osm_00453450);
  local_2074 = (int *)fopen((LPCSTR)&local_206c,&DAT_00453460);
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  fscanf(local_2074,(byte *)s__d__s_00453464);
  iVar12 = this_00->numBones;
  local_2130 = operator_new(iVar12 * 0xa8);
  local_8 = 3;
  if (local_2130 == (Bone *)0x0) {
    local_2130 = (Bone *)0x0;
  }
  else {
    thunk_FUN_0040c3a0(local_2130,0xa8,iVar12,&LAB_004010aa);
  }
  local_8 = 0xffffffff;
  this_00->bones = local_2130;
  _memset(this_00->bones,0,this_00->numBones * 0xa8);
  this_00->bones->parent = -1;
  fgets((char *)&local_206c,0x100,local_2074);
  for (iVar12 = 0; iVar12 < this_00->numBones; iVar12 = iVar12 + 1) {
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
  for (uVar14 = 0; uVar14 < this_00->numVerts; uVar14 = uVar14 + 1) {
    fscanf(local_2074,(byte *)s__d__00453498);
    fgets((char *)&local_206c,0x100,local_2074);
  }
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  fgets((char *)&local_206c,0x100,local_2074);
  fscanf(local_2074,&DAT_004534a0);
  fgets((char *)&local_206c,0x100,local_2074);
  pCVar10 = operator_new(this_00->numCTex * 0xc);
  this_00->ctex = pCVar10;
  _memset(this_00->ctex,0,this_00->numCTex * 0xc);
  for (iVar12 = 0; iVar12 < this_00->numCTex; iVar12 = iVar12 + 1) {
    fgets((char *)&local_206c,0x100,local_2074);
    fscanf(local_2074,(byte *)s__d__004534a8);
    fgets((char *)&local_206c,0x100,local_2074);
    pCVar11 = operator_new(this_00->ctex[iVar12].count * 0xc);
    this_00->ctex[iVar12].verts = pCVar11;
    _memset(this_00->ctex[iVar12].verts,0,this_00->ctex[iVar12].count * 0xc);
    fscanf(local_2074,(byte *)s__f__004534b0);
    fgets((char *)&local_206c,0x100,local_2074);
    fgets((char *)&local_206c,0x100,local_2074);
    for (local_20ac = 0; local_20ac < this_00->ctex[iVar12].count; local_20ac = local_20ac + 1) {
      fscanf(local_2074,(byte *)s__d__004534b8);
      this_00->ctex[iVar12].verts[local_20ac].tv =
           this_00->verts[this_00->ctex[iVar12].verts[local_20ac].vtx].tu;
      this_00->ctex[iVar12].verts[local_20ac].tu =
           this_00->verts[this_00->ctex[iVar12].verts[local_20ac].vtx].tv;
      fgets((char *)&local_206c,0x100,local_2074);
    }
  }
  fclose(local_2074);
  Scale(this_00,2.5);
  *unaff_FS_OFFSET = local_10;
  return true;
}

