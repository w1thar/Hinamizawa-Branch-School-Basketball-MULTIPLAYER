// StaticMesh::Load @ 0040c5ed  size=5037

bool __thiscall StaticMesh::Load(StaticMesh *this,char *file)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  void *pvVar4;
  Vec3 *pVVar5;
  Vec3 *pVVar6;
  int extraout_ECX;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float *pfVar10;
  undefined4 *unaff_FS_OFFSET;
  void *local_210c;
  void *local_2108;
  void *local_2104;
  Vec3 local_20f8;
  Vec3 local_20ec;
  Vec3 local_20e0;
  Vec3 local_20d4;
  Vec3 local_20c8;
  void *local_20bc;
  void *local_20b8;
  void *local_20b4;
  void *local_20b0;
  void *local_20ac;
  void *local_20a8;
  void *local_20a4;
  uint local_20a0;
  Vec3 local_209c;
  uint local_2090;
  uint local_208c;
  Vec3 *local_2088;
  uint local_2084;
  Vec3 *local_2080;
  Vec3 *local_207c;
  uint local_2078;
  uint local_2074;
  uint local_2070;
  int *local_206c;
  void *local_2068;
  char local_2064;
  undefined4 local_2063;
  uint auStackY_1f64 [1995];
  undefined4 uStackY_38;
  uint uVar11;
  char *pcVar12;
  int *piVar13;
  undefined *puVar14;
  uint uVar15;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044ccda;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_00435010();
  local_2064 = '\0';
  puVar9 = &local_2063;
  for (iVar7 = 0x3f; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  *(undefined2 *)puVar9 = 0;
  *(undefined1 *)((int)puVar9 + 2) = 0;
  local_206c = (int *)fopen(file,&DAT_00453504);
  while (iVar7 = _strcmp(&local_2064,s_Mesh___00453508), iVar7 != 0) {
    fgets(&local_2064,0x100,local_206c);
  }
  fscanf(local_206c,&DAT_00453514);
  iVar7 = *(int *)(extraout_ECX + 4);
  local_20a4 = operator_new(iVar7 << 5);
  local_8 = 0;
  if (local_20a4 == (void *)0x0) {
    local_2104 = (void *)0x0;
  }
  else {
    thunk_FUN_0040c3a0(local_20a4,0x20,iVar7,&LAB_004010cd);
    local_2104 = local_20a4;
  }
  local_20a8 = local_2104;
  local_8 = 0xffffffff;
  *(void **)(extraout_ECX + 8) = local_2104;
  iVar7 = *(int *)(extraout_ECX + 4);
  local_20ac = operator_new(iVar7 << 5);
  local_8 = 1;
  if (local_20ac == (void *)0x0) {
    local_2108 = (void *)0x0;
  }
  else {
    thunk_FUN_0040c3a0(local_20ac,0x20,iVar7,&LAB_004010cd);
    local_2108 = local_20ac;
  }
  local_20b0 = local_2108;
  local_8 = 0xffffffff;
  *(void **)(extraout_ECX + 0x20) = local_2108;
  _memset(*(void **)(extraout_ECX + 8),0,*(int *)(extraout_ECX + 4) << 5);
  _memset(*(void **)(extraout_ECX + 0x20),0,*(int *)(extraout_ECX + 4) << 5);
  uVar11 = 0;
  while (uVar11 < *(int *)(extraout_ECX + 4) - 1U) {
    iVar7 = *(int *)(extraout_ECX + 8) + uVar11 * 0x20;
    fscanf(local_206c,s__f__f__f___0045351c);
    uVar11 = iVar7 + 1;
  }
  fscanf(local_206c,s__f__f__f___00453528);
  local_2070 = 0;
  fgetc(local_206c);
  fscanf(local_206c,&DAT_00453534);
  pvVar4 = operator_new(local_2070 * 0x14);
  *(void **)(extraout_ECX + 0x1c) = pvVar4;
  _memset(*(void **)(extraout_ECX + 0x1c),0,local_2070 * 0x14);
  *(undefined4 *)(extraout_ECX + 0xc) = 0;
  for (pcVar12 = (char *)0x0; pcVar12 < (char *)(local_2070 - 1); pcVar12 = pcVar12 + 1) {
    pcVar12 = (char *)(*(int *)(extraout_ECX + 0x1c) + 8 + (int)pcVar12 * 0x14);
    uStackY_38 = 0x40c9b2;
    fscanf(local_206c,s__d__d__d__d__d___0045353c);
    *(int *)(extraout_ECX + 0xc) =
         *(int *)(extraout_ECX + 0xc) +
         (*(int *)(*(int *)(extraout_ECX + 0x1c) + (int)pcVar12 * 0x14) + -2) * 3;
    if (*(int *)(*(int *)(extraout_ECX + 0x1c) + (int)pcVar12 * 0x14) == 3) {
      pcVar12 = &local_2064;
      fgets(pcVar12,0x100,local_206c);
    }
  }
  iVar7 = *(int *)(extraout_ECX + 0x1c) + 8 + (int)pcVar12 * 0x14;
  uStackY_38 = 0x40ca89;
  fscanf(local_206c,s__d__d__d__d__d___00453550);
  *(int *)(extraout_ECX + 0xc) =
       *(int *)(extraout_ECX + 0xc) +
       (*(int *)(*(int *)(extraout_ECX + 0x1c) + iVar7 * 0x14) + -2) * 3;
  fgets(&local_2064,0x100,local_206c);
  fgets(&local_2064,0x100,local_206c);
  fgets(&local_2064,0x100,local_206c);
  fscanf(local_206c,s__d__00453564);
  fgets(&local_2064,0x100,local_206c);
  fgets(&local_2064,0x100,local_206c);
  uVar11 = 0;
  while (uVar11 < local_2070 - 1) {
    piVar13 = local_206c;
    fscanf(local_206c,s__d__0045356c);
    uVar11 = (int)piVar13 + 1;
  }
  fscanf(local_206c,s__d___00453574);
  pvVar4 = operator_new(*(int *)(extraout_ECX + 0xc) << 1);
  *(void **)(extraout_ECX + 0x10) = pvVar4;
  _memset(*(void **)(extraout_ECX + 0x10),0,*(int *)(extraout_ECX + 0xc) << 1);
  pvVar4 = operator_new(*(int *)(extraout_ECX + 0x14) * 0x148);
  *(void **)(extraout_ECX + 0x18) = pvVar4;
  _memset(*(void **)(extraout_ECX + 0x18),0,*(int *)(extraout_ECX + 0x14) * 0x148);
  for (uVar11 = 0; uVar11 < local_2070; uVar11 = uVar11 + 1) {
    if (*(int *)(*(int *)(extraout_ECX + 0x1c) + uVar11 * 0x14) == 3) {
      uVar15 = 0;
      for (local_2074 = 0; local_2074 <= auStackY_1f64[uVar11]; local_2074 = local_2074 + 1) {
        uVar15 = uVar15 + *(int *)(*(int *)(extraout_ECX + 0x18) + 0x144 + local_2074 * 0x148);
      }
      for (local_2074 = *(int *)(extraout_ECX + 0xc) - 3; uVar15 < local_2074;
          local_2074 = local_2074 - 1) {
        *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + 4 + local_2074 * 2) =
             *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + -2 + local_2074 * 2);
      }
      *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + uVar15 * 2) =
           *(undefined2 *)(*(int *)(extraout_ECX + 0x1c) + 4 + uVar11 * 0x14);
      *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + 2 + uVar15 * 2) =
           *(undefined2 *)(*(int *)(extraout_ECX + 0x1c) + 8 + uVar11 * 0x14);
      *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + 4 + uVar15 * 2) =
           *(undefined2 *)(*(int *)(extraout_ECX + 0x1c) + 0xc + uVar11 * 0x14);
      *(int *)(*(int *)(extraout_ECX + 0x18) + 0x144 + auStackY_1f64[uVar11] * 0x148) =
           *(int *)(*(int *)(extraout_ECX + 0x18) + 0x144 + auStackY_1f64[uVar11] * 0x148) + 3;
    }
    else {
      uVar15 = 0;
      for (local_2078 = 0; local_2078 <= auStackY_1f64[uVar11]; local_2078 = local_2078 + 1) {
        uVar15 = uVar15 + *(int *)(*(int *)(extraout_ECX + 0x18) + 0x144 + local_2078 * 0x148);
      }
      for (local_2078 = *(int *)(extraout_ECX + 0xc) - 6; uVar15 < local_2078;
          local_2078 = local_2078 - 1) {
        *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + 10 + local_2078 * 2) =
             *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + -2 + local_2078 * 2);
      }
      *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + uVar15 * 2) =
           *(undefined2 *)(*(int *)(extraout_ECX + 0x1c) + 4 + uVar11 * 0x14);
      *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + 2 + uVar15 * 2) =
           *(undefined2 *)(*(int *)(extraout_ECX + 0x1c) + 8 + uVar11 * 0x14);
      *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + 4 + uVar15 * 2) =
           *(undefined2 *)(*(int *)(extraout_ECX + 0x1c) + 0xc + uVar11 * 0x14);
      *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + 6 + uVar15 * 2) =
           *(undefined2 *)(*(int *)(extraout_ECX + 0x1c) + 4 + uVar11 * 0x14);
      *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + 8 + uVar15 * 2) =
           *(undefined2 *)(*(int *)(extraout_ECX + 0x1c) + 0xc + uVar11 * 0x14);
      *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + 10 + uVar15 * 2) =
           *(undefined2 *)(*(int *)(extraout_ECX + 0x1c) + 0x10 + uVar11 * 0x14);
      *(int *)(*(int *)(extraout_ECX + 0x18) + 0x144 + auStackY_1f64[uVar11] * 0x148) =
           *(int *)(*(int *)(extraout_ECX + 0x18) + 0x144 + auStackY_1f64[uVar11] * 0x148) + 6;
    }
  }
  local_20b4 = *(void **)(extraout_ECX + 0x1c);
  operator_delete(local_20b4);
  fgets(&local_2064,0x100,local_206c);
  fgets(&local_2064,0x100,local_206c);
  for (pcVar12 = (char *)0x0; pcVar12 < *(char **)(extraout_ECX + 0x14); pcVar12 = pcVar12 + 1) {
    iVar7 = *(int *)(extraout_ECX + 0x18) + 4 + (int)pcVar12 * 0x148;
    fscanf(local_206c,s__f__f__f__f___0045357c);
    puVar8 = (undefined4 *)(*(int *)(extraout_ECX + 0x18) + iVar7 * 0x148);
    puVar9 = (undefined4 *)(*(int *)(extraout_ECX + 0x18) + 0x10 + iVar7 * 0x148);
    *puVar9 = *puVar8;
    puVar9[1] = puVar8[1];
    puVar9[2] = puVar8[2];
    puVar9[3] = puVar8[3];
    fscanf(local_206c,s__f__00453590);
    fscanf(local_206c,s__f__f__f___00453598);
    fscanf(local_206c,s__f__f__f___004535a8);
    fgets(&local_2064,0x100,local_206c);
    fscanf(local_206c,&DAT_004535b8);
    fgets(&local_2064,0x100,local_206c);
    piVar13 = local_206c;
    fscanf(local_206c,s___c______004535bc);
    sprintf((char *)(*(int *)(extraout_ECX + 0x18) + 0x44 + (int)piVar13 * 0x148),&local_2064);
    fgets(&local_2064,0x100,local_206c);
    fgets(&local_2064,0x100,local_206c);
    fgets(&local_2064,0x100,local_206c);
    pcVar12 = &local_2064;
    fgets(pcVar12,0x100,local_206c);
  }
  fgets(&local_2064,0x100,local_206c);
  fgets(&local_2064,0x100,local_206c);
  for (puVar14 = (undefined *)0x0; puVar14 < (undefined *)(*(int *)(extraout_ECX + 4) + -1);
      puVar14 = puVar14 + 1) {
    puVar14 = &DAT_004535cc;
    fscanf(local_206c,&DAT_004535cc);
  }
  fscanf(local_206c,s__f__f__004535d8);
  fclose(local_206c);
  local_20b8 = operator_new(*(int *)(extraout_ECX + 0xc) * 0xc);
  local_8 = 2;
  if (local_20b8 == (void *)0x0) {
    local_210c = (void *)0x0;
  }
  else {
    thunk_FUN_0040c3a0(local_20b8,0xc,0x40130c,Vec3::CtorDefault);
    local_210c = local_20b8;
  }
  local_20bc = local_210c;
  local_8 = 0xffffffff;
  local_2068 = local_210c;
  _memset(local_210c,0,*(int *)(extraout_ECX + 0xc) * 0xc);
  uVar11 = 0;
  while (uVar11 < *(uint *)(extraout_ECX + 0xc)) {
    uVar1 = *(ushort *)(*(int *)(extraout_ECX + 0x10) + uVar11 * 2);
    local_2084 = CONCAT22(local_2084._2_2_,uVar1);
    uVar2 = *(ushort *)(*(int *)(extraout_ECX + 0x10) + 2 + uVar11 * 2);
    local_208c = CONCAT22(local_208c._2_2_,uVar2);
    uVar3 = *(ushort *)(*(int *)(extraout_ECX + 0x10) + 4 + uVar11 * 2);
    local_2090 = CONCAT22(local_2090._2_2_,uVar3);
    local_207c = (Vec3 *)(*(int *)(extraout_ECX + 8) + (uint)uVar1 * 0x20);
    local_2080 = (Vec3 *)(*(int *)(extraout_ECX + 8) + (uint)uVar2 * 0x20);
    local_2088 = (Vec3 *)(*(int *)(extraout_ECX + 8) + (uint)uVar3 * 0x20);
    pVVar5 = Vec3_Sub(&local_20c8,local_2088,local_2080);
    pVVar6 = Vec3_Sub(&local_20d4,local_2080,local_207c);
    pVVar5 = Vec3_Cross(&local_20e0,pVVar6,pVVar5);
    iVar7 = 0x40d563;
    Vec3_Normalize(&local_209c,pVVar5);
    Vec3::AddAssign((Vec3 *)((local_2084 & 0xffff) * 0xc + (int)local_2068),&local_209c);
    Vec3::AddAssign((Vec3 *)((local_208c & 0xffff) * 0xc + (int)local_2068),&local_209c);
    Vec3::AddAssign((Vec3 *)((local_2090 & 0xffff) * 0xc + (int)local_2068),&local_209c);
    uVar11 = iVar7 + 3;
  }
  for (pVVar5 = (Vec3 *)0x0; pVVar5 < *(Vec3 **)(extraout_ECX + 4);
      pVVar5 = (Vec3 *)((int)&pVVar5->x + 1)) {
    for (local_20a0 = 0; local_20a0 < *(uint *)(extraout_ECX + 4); local_20a0 = local_20a0 + 1) {
      if (((((*(float *)(*(int *)(extraout_ECX + 8) + (int)pVVar5 * 0x20) -
              *(float *)(*(int *)(extraout_ECX + 8) + local_20a0 * 0x20) < 1e-06 &&
             -1e-06 < *(float *)(*(int *)(extraout_ECX + 8) + (int)pVVar5 * 0x20) -
                      *(float *)(*(int *)(extraout_ECX + 8) + local_20a0 * 0x20)) &&
            *(float *)(*(int *)(extraout_ECX + 8) + 4 + (int)pVVar5 * 0x20) -
            *(float *)(*(int *)(extraout_ECX + 8) + 4 + local_20a0 * 0x20) < 1e-06) &&
           -1e-06 < *(float *)(*(int *)(extraout_ECX + 8) + 4 + (int)pVVar5 * 0x20) -
                    *(float *)(*(int *)(extraout_ECX + 8) + 4 + local_20a0 * 0x20)) &&
          *(float *)(*(int *)(extraout_ECX + 8) + 8 + (int)pVVar5 * 0x20) -
          *(float *)(*(int *)(extraout_ECX + 8) + 8 + local_20a0 * 0x20) < 1e-06) &&
          -1e-06 < *(float *)(*(int *)(extraout_ECX + 8) + 8 + (int)pVVar5 * 0x20) -
                   *(float *)(*(int *)(extraout_ECX + 8) + 8 + local_20a0 * 0x20)) {
        iVar7 = (int)pVVar5 * 0xc;
        pVVar5 = &local_20ec;
        pVVar6 = Vec3_Add(pVVar5,(Vec3 *)((int)local_2068 + iVar7),
                          (Vec3 *)((int)local_2068 + local_20a0 * 0xc));
        pfVar10 = (float *)((int)local_2068 + (int)pVVar5 * 0xc);
        *pfVar10 = pVVar6->x;
        pfVar10[1] = pVVar6->y;
        pfVar10[2] = pVVar6->z;
        puVar8 = (undefined4 *)((int)local_2068 + (int)pVVar5 * 0xc);
        puVar9 = (undefined4 *)((int)local_2068 + local_20a0 * 0xc);
        *puVar9 = *puVar8;
        puVar9[1] = puVar8[1];
        puVar9[2] = puVar8[2];
      }
    }
  }
  uVar11 = 0;
  while (uVar11 < *(uint *)(extraout_ECX + 4)) {
    iVar7 = 0x40d8da;
    pVVar5 = Vec3_Normalize(&local_20f8,(Vec3 *)((int)local_2068 + uVar11 * 0xc));
    pfVar10 = (float *)((int)local_2068 + iVar7 * 0xc);
    *pfVar10 = pVVar5->x;
    pfVar10[1] = pVVar5->y;
    pfVar10[2] = pVVar5->z;
    *(undefined4 *)(*(int *)(extraout_ECX + 8) + 0xc + iVar7 * 0x20) =
         *(undefined4 *)((int)local_2068 + iVar7 * 0xc);
    *(undefined4 *)(*(int *)(extraout_ECX + 8) + 0x10 + iVar7 * 0x20) =
         *(undefined4 *)((int)local_2068 + iVar7 * 0xc + 4);
    *(undefined4 *)(*(int *)(extraout_ECX + 8) + 0x14 + iVar7 * 0x20) =
         *(undefined4 *)((int)local_2068 + iVar7 * 0xc + 8);
    uVar11 = iVar7 + 1;
  }
  operator_delete(local_2068);
  *unaff_FS_OFFSET = local_10;
  return true;
}

