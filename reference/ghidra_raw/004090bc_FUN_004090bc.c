// FUN_004090bc @ 004090bc  size=6867

undefined4 FUN_004090bc(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *pvVar6;
  float *pfVar7;
  undefined4 *puVar8;
  void *this;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *unaff_FS_OFFSET;
  int local_2130;
  void *local_2120;
  int local_211c;
  int local_2118;
  undefined1 local_2104 [12];
  undefined1 local_20f8 [12];
  undefined4 local_20ec [3];
  undefined1 local_20e0 [12];
  undefined1 local_20d4 [12];
  void *local_20c8;
  void *local_20c4;
  void *local_20c0;
  int local_20bc;
  int local_20b8;
  int local_20b4;
  int local_20b0;
  int local_20ac;
  uint local_20a8;
  float local_20a4 [3];
  uint local_2098;
  uint local_2094;
  float *local_2090;
  uint local_208c;
  float *local_2088;
  float *local_2084;
  uint local_2080;
  uint local_207c;
  uint local_2078;
  int *local_2074;
  void *local_2070;
  byte local_206c;
  undefined4 local_206b;
  uint auStackY_1f6c [1997];
  undefined4 uStackY_38;
  uint uVar11;
  char *pcVar12;
  int *piVar13;
  uint uVar14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044cc88;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_00435010();
  local_206c = 0;
  puVar8 = &local_206b;
  for (iVar9 = 0x3f; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  *(undefined1 *)((int)puVar8 + 2) = 0;
  FUN_00434a40(&local_206c,(byte *)s_basket__s_x_00453364);
  local_2074 = (int *)_fopen((LPCSTR)&local_206c,&DAT_00453370);
  while (iVar9 = _strcmp((char *)&local_206c,s_Mesh___00453374), iVar9 != 0) {
    FUN_00434e50((char *)&local_206c,0x100,local_2074);
  }
  FUN_00434dc0(local_2074,&DAT_00453380);
  iVar9 = *(int *)((int)this + 8);
  local_20b0 = operator_new(iVar9 << 5);
  local_8 = 0;
  if (local_20b0 == 0) {
    local_2118 = 0;
  }
  else {
    thunk_FUN_0040c3a0(local_20b0,0x20,iVar9,&LAB_004010cd);
    local_2118 = local_20b0;
  }
  local_20b4 = local_2118;
  local_8 = 0xffffffff;
  *(int *)((int)this + 0x24) = local_2118;
  _memset(*(void **)((int)this + 0x24),0,*(int *)((int)this + 8) << 5);
  local_20b8 = operator_new(*(int *)((int)this + 8) * 0x1c);
  local_8 = 1;
  if (local_20b8 == 0) {
    local_211c = 0;
  }
  else {
    thunk_FUN_0040c3a0(local_20b8,0x1c,0x4010fa,&LAB_004010fa);
    local_211c = local_20b8;
  }
  local_20bc = local_211c;
  local_8 = 0xffffffff;
  *(int *)((int)this + 0x1c) = local_211c;
  _memset(*(void **)((int)this + 0x1c),0,*(int *)((int)this + 8) * 0x1c);
  uVar11 = 0;
  while (uVar11 < *(int *)((int)this + 8) - 1U) {
    piVar13 = local_2074;
    FUN_00434dc0(local_2074,(byte *)s__f__f__f___00453388);
    uVar11 = (int)piVar13 + 1;
  }
  FUN_00434dc0(local_2074,(byte *)s__f__f__f___00453394);
  local_2078 = 0;
  FUN_00434d10(local_2074);
  FUN_00434dc0(local_2074,&DAT_004533a0);
  uVar4 = operator_new(local_2078 * 0x14);
  *(undefined4 *)((int)this + 4) = uVar4;
  _memset(*(void **)((int)this + 4),0,local_2078 * 0x14);
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar11 = 0;
  while (uVar11 < local_2078 - 1) {
    iVar9 = *(int *)((int)this + 4) + uVar11 * 0x14;
    uStackY_38 = 0x40949c;
    FUN_00434dc0(local_2074,(byte *)s__d__d__d__d__d___004533a8);
    *(int *)((int)this + 0xc) =
         *(int *)((int)this + 0xc) + (*(int *)(*(int *)((int)this + 4) + iVar9 * 0x14) + -2) * 3;
    if (*(int *)(*(int *)((int)this + 4) + iVar9 * 0x14) == 3) {
      FUN_00434e50((char *)&local_206c,0x100,local_2074);
    }
    uVar11 = iVar9 + 1;
  }
  iVar9 = *(int *)((int)this + 4) + uVar11 * 0x14;
  uStackY_38 = 0x409573;
  FUN_00434dc0(local_2074,(byte *)s__d__d__d__d__d___004533bc);
  *(int *)((int)this + 0xc) =
       *(int *)((int)this + 0xc) + (*(int *)(*(int *)((int)this + 4) + iVar9 * 0x14) + -2) * 3;
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  FUN_00434dc0(local_2074,(byte *)s__d__004533d0);
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  for (uVar11 = 0; uVar11 < local_2078 - 1; uVar11 = uVar11 + 1) {
    FUN_00434dc0(local_2074,(byte *)s__d__004533d8);
  }
  FUN_00434dc0(local_2074,(byte *)s__d___004533e0);
  uVar4 = operator_new(*(int *)((int)this + 0xc) << 1);
  *(undefined4 *)((int)this + 0x10) = uVar4;
  _memset(*(void **)((int)this + 0x10),0,*(int *)((int)this + 0xc) << 1);
  uVar4 = operator_new(*(int *)((int)this + 0x14) * 0x148);
  *(undefined4 *)((int)this + 0x18) = uVar4;
  _memset(*(void **)((int)this + 0x18),0,*(int *)((int)this + 0x14) * 0x148);
  for (uVar11 = 0; uVar11 < local_2078; uVar11 = uVar11 + 1) {
    if (*(int *)(*(int *)((int)this + 4) + uVar11 * 0x14) == 3) {
      uVar14 = 0;
      for (local_207c = 0; local_207c <= auStackY_1f6c[uVar11]; local_207c = local_207c + 1) {
        uVar14 = uVar14 + *(int *)(*(int *)((int)this + 0x18) + 0x144 + local_207c * 0x148);
      }
      for (local_207c = *(int *)((int)this + 0xc) - 3; uVar14 < local_207c;
          local_207c = local_207c - 1) {
        *(undefined2 *)(*(int *)((int)this + 0x10) + 4 + local_207c * 2) =
             *(undefined2 *)(*(int *)((int)this + 0x10) + -2 + local_207c * 2);
      }
      *(undefined2 *)(*(int *)((int)this + 0x10) + uVar14 * 2) =
           *(undefined2 *)(*(int *)((int)this + 4) + 4 + uVar11 * 0x14);
      *(undefined2 *)(*(int *)((int)this + 0x10) + 2 + uVar14 * 2) =
           *(undefined2 *)(*(int *)((int)this + 4) + 8 + uVar11 * 0x14);
      *(undefined2 *)(*(int *)((int)this + 0x10) + 4 + uVar14 * 2) =
           *(undefined2 *)(*(int *)((int)this + 4) + 0xc + uVar11 * 0x14);
      *(int *)(*(int *)((int)this + 0x18) + 0x144 + auStackY_1f6c[uVar11] * 0x148) =
           *(int *)(*(int *)((int)this + 0x18) + 0x144 + auStackY_1f6c[uVar11] * 0x148) + 3;
    }
    else {
      uVar14 = 0;
      for (local_2080 = 0; local_2080 <= auStackY_1f6c[uVar11]; local_2080 = local_2080 + 1) {
        uVar14 = uVar14 + *(int *)(*(int *)((int)this + 0x18) + 0x144 + local_2080 * 0x148);
      }
      for (local_2080 = *(int *)((int)this + 0xc) - 6; uVar14 < local_2080;
          local_2080 = local_2080 - 1) {
        *(undefined2 *)(*(int *)((int)this + 0x10) + 10 + local_2080 * 2) =
             *(undefined2 *)(*(int *)((int)this + 0x10) + -2 + local_2080 * 2);
      }
      *(undefined2 *)(*(int *)((int)this + 0x10) + uVar14 * 2) =
           *(undefined2 *)(*(int *)((int)this + 4) + 4 + uVar11 * 0x14);
      *(undefined2 *)(*(int *)((int)this + 0x10) + 2 + uVar14 * 2) =
           *(undefined2 *)(*(int *)((int)this + 4) + 8 + uVar11 * 0x14);
      *(undefined2 *)(*(int *)((int)this + 0x10) + 4 + uVar14 * 2) =
           *(undefined2 *)(*(int *)((int)this + 4) + 0xc + uVar11 * 0x14);
      *(undefined2 *)(*(int *)((int)this + 0x10) + 6 + uVar14 * 2) =
           *(undefined2 *)(*(int *)((int)this + 4) + 4 + uVar11 * 0x14);
      *(undefined2 *)(*(int *)((int)this + 0x10) + 8 + uVar14 * 2) =
           *(undefined2 *)(*(int *)((int)this + 4) + 0xc + uVar11 * 0x14);
      *(undefined2 *)(*(int *)((int)this + 0x10) + 10 + uVar14 * 2) =
           *(undefined2 *)(*(int *)((int)this + 4) + 0x10 + uVar11 * 0x14);
      *(int *)(*(int *)((int)this + 0x18) + 0x144 + auStackY_1f6c[uVar11] * 0x148) =
           *(int *)(*(int *)((int)this + 0x18) + 0x144 + auStackY_1f6c[uVar11] * 0x148) + 6;
    }
  }
  local_20c0 = *(void **)((int)this + 4);
  FUN_00433370(local_20c0);
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  uVar11 = 0;
  while (uVar11 < *(uint *)((int)this + 0x14)) {
    pcVar12 = s__f__f__f__f___004533e8;
    FUN_00434dc0(local_2074,(byte *)s__f__f__f__f___004533e8);
    puVar10 = (undefined4 *)(*(int *)((int)this + 0x18) + (int)pcVar12 * 0x148);
    puVar8 = (undefined4 *)(*(int *)((int)this + 0x18) + 0x10 + (int)pcVar12 * 0x148);
    *puVar8 = *puVar10;
    puVar8[1] = puVar10[1];
    puVar8[2] = puVar10[2];
    puVar8[3] = puVar10[3];
    FUN_00434dc0(local_2074,(byte *)s__f__004533fc);
    FUN_00434dc0(local_2074,(byte *)s__f__f__f___00453404);
    piVar13 = local_2074;
    FUN_00434dc0(local_2074,(byte *)s__f__f__f___00453414);
    FUN_00434e50((char *)&local_206c,0x100,local_2074);
    FUN_00434dc0(local_2074,&DAT_00453424);
    FUN_00434e50((char *)&local_206c,0x100,local_2074);
    FUN_00434dc0(local_2074,(byte *)s___c______00453428);
    FUN_00434a40((undefined1 *)(*(int *)((int)this + 0x18) + 0x44 + (int)piVar13 * 0x148),
                 &local_206c);
    FUN_00434e50((char *)&local_206c,0x100,local_2074);
    FUN_00434e50((char *)&local_206c,0x100,local_2074);
    FUN_00434e50((char *)&local_206c,0x100,local_2074);
    FUN_00434e50((char *)&local_206c,0x100,local_2074);
    uVar11 = (int)piVar13 + 1;
  }
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  uVar11 = 0;
  while (uVar11 < *(int *)((int)this + 8) - 1U) {
    iVar9 = 0x409e3d;
    FUN_00434dc0(local_2074,(byte *)s__f__f__00453438);
    uVar11 = iVar9 + 1;
  }
  FUN_00434dc0(local_2074,(byte *)s__f__f__00453444);
  _fclose(local_2074);
  iVar9 = 0x409ea5;
  local_20c4 = (void *)operator_new(*(int *)((int)this + 0xc) * 0xc);
  local_8 = 2;
  if (local_20c4 == (void *)0x0) {
    local_2120 = (void *)0x0;
  }
  else {
    thunk_FUN_0040c3a0(local_20c4,0xc,iVar9,thunk_FUN_00407fe0);
    local_2120 = local_20c4;
  }
  local_20c8 = local_2120;
  local_8 = 0xffffffff;
  local_2070 = local_2120;
  _memset(local_2120,0,*(int *)((int)this + 0xc) * 0xc);
  uVar11 = 0;
  while (uVar11 < *(uint *)((int)this + 0xc)) {
    uVar1 = *(ushort *)(*(int *)((int)this + 0x10) + uVar11 * 2);
    local_208c = CONCAT22(local_208c._2_2_,uVar1);
    uVar2 = *(ushort *)(*(int *)((int)this + 0x10) + 2 + uVar11 * 2);
    local_2094 = CONCAT22(local_2094._2_2_,uVar2);
    uVar3 = *(ushort *)(*(int *)((int)this + 0x10) + 4 + uVar11 * 2);
    local_2098 = CONCAT22(local_2098._2_2_,uVar3);
    local_2084 = (float *)(*(int *)((int)this + 0x1c) + (uint)uVar1 * 0x1c);
    local_2088 = (float *)(*(int *)((int)this + 0x1c) + (uint)uVar2 * 0x1c);
    local_2090 = (float *)(*(int *)((int)this + 0x1c) + (uint)uVar3 * 0x1c);
    pvVar5 = thunk_FUN_00407cb0(local_20d4,local_2090,local_2088);
    iVar9 = 0x40a02d;
    pvVar6 = thunk_FUN_00407cb0(local_20e0,local_2088,local_2084);
    pfVar7 = (float *)thunk_FUN_00407e80(local_20ec,pvVar6,pvVar5);
    thunk_FUN_00407dc0(local_20a4,pfVar7);
    thunk_FUN_0040c2f0((void *)((int)local_2070 + (local_208c & 0xffff) * 0xc),local_20a4);
    thunk_FUN_0040c2f0((void *)((local_2094 & 0xffff) * 0xc + (int)local_2070),local_20a4);
    thunk_FUN_0040c2f0((void *)((local_2098 & 0xffff) * 0xc + (int)local_2070),local_20a4);
    uVar11 = iVar9 + 3;
  }
  for (uVar11 = 0; uVar11 < *(uint *)((int)this + 8); uVar11 = uVar11 + 1) {
    for (local_20a8 = 0; local_20a8 < *(uint *)((int)this + 8); local_20a8 = local_20a8 + 1) {
      if ((*(float *)(*(int *)((int)this + 0x1c) + uVar11 * 0x1c) ==
           *(float *)(*(int *)((int)this + 0x1c) + local_20a8 * 0x1c) &&
          *(float *)(*(int *)((int)this + 0x1c) + 4 + uVar11 * 0x1c) ==
          *(float *)(*(int *)((int)this + 0x1c) + 4 + local_20a8 * 0x1c)) &&
          *(float *)(*(int *)((int)this + 0x1c) + 8 + uVar11 * 0x1c) ==
          *(float *)(*(int *)((int)this + 0x1c) + 8 + local_20a8 * 0x1c)) {
        puVar8 = thunk_FUN_0040c350(local_20f8,(float *)((int)local_2070 + uVar11 * 0xc),
                                    (float *)((int)local_2070 + local_20a8 * 0xc));
        puVar10 = (undefined4 *)((int)local_2070 + uVar11 * 0xc);
        *puVar10 = *puVar8;
        puVar10[1] = puVar8[1];
        puVar10[2] = puVar8[2];
        puVar10 = (undefined4 *)((int)local_2070 + uVar11 * 0xc);
        puVar8 = (undefined4 *)((int)local_2070 + local_20a8 * 0xc);
        *puVar8 = *puVar10;
        puVar8[1] = puVar10[1];
        puVar8[2] = puVar10[2];
      }
    }
  }
  for (uVar11 = 0; uVar11 < *(uint *)((int)this + 8); uVar11 = uVar11 + 1) {
    puVar8 = thunk_FUN_00407dc0(local_2104,(float *)((int)local_2070 + uVar11 * 0xc));
    puVar10 = (undefined4 *)((int)local_2070 + uVar11 * 0xc);
    *puVar10 = *puVar8;
    puVar10[1] = puVar8[1];
    puVar10[2] = puVar8[2];
    *(undefined4 *)(*(int *)((int)this + 0x1c) + 0xc + uVar11 * 0x1c) =
         *(undefined4 *)((int)local_2070 + uVar11 * 0xc);
    *(undefined4 *)(*(int *)((int)this + 0x1c) + 0x10 + uVar11 * 0x1c) =
         *(undefined4 *)((int)local_2070 + uVar11 * 0xc + 4);
    *(undefined4 *)(*(int *)((int)this + 0x1c) + 0x14 + uVar11 * 0x1c) =
         *(undefined4 *)((int)local_2070 + uVar11 * 0xc + 8);
  }
  FUN_00433370(local_2070);
  FUN_00434a40(&local_206c,(byte *)s_basket__s_osm_00453450);
  local_2074 = (int *)_fopen((LPCSTR)&local_206c,&DAT_00453460);
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  FUN_00434dc0(local_2074,(byte *)s__d__s_00453464);
  iVar9 = *(int *)((int)this + 0x2c);
  local_2130 = operator_new(iVar9 * 0xa8);
  local_8 = 3;
  if (local_2130 == 0) {
    local_2130 = 0;
  }
  else {
    thunk_FUN_0040c3a0(local_2130,0xa8,iVar9,&LAB_004010aa);
  }
  local_8 = 0xffffffff;
  *(int *)((int)this + 0x20) = local_2130;
  _memset(*(void **)((int)this + 0x20),0,*(int *)((int)this + 0x2c) * 0xa8);
  **(undefined4 **)((int)this + 0x20) = 0xffffffff;
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  for (iVar9 = 0; iVar9 < *(int *)((int)this + 0x2c); iVar9 = iVar9 + 1) {
    FUN_00434e50((char *)&local_206c,0x100,local_2074);
    FUN_00434dc0(local_2074,(byte *)s__d__0045346c);
    FUN_00434e50((char *)&local_206c,0x100,local_2074);
    FUN_00434dc0(local_2074,(byte *)s__f__f__f__00453474);
    FUN_00434e50((char *)&local_206c,0x100,local_2074);
    FUN_00434dc0(local_2074,(byte *)s__f__f__f__00453480);
    FUN_00434e50((char *)&local_206c,0x100,local_2074);
    FUN_00434dc0(local_2074,(byte *)s__f__f__f__0045348c);
    FUN_00434e50((char *)&local_206c,0x100,local_2074);
    FUN_00434e50((char *)&local_206c,0x100,local_2074);
  }
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  for (uVar11 = 0; uVar11 < *(uint *)((int)this + 8); uVar11 = uVar11 + 1) {
    FUN_00434dc0(local_2074,(byte *)s__d__00453498);
    FUN_00434e50((char *)&local_206c,0x100,local_2074);
  }
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  FUN_00434dc0(local_2074,&DAT_004534a0);
  FUN_00434e50((char *)&local_206c,0x100,local_2074);
  uVar4 = operator_new(*(int *)((int)this + 0x30) * 0xc);
  *(undefined4 *)((int)this + 0x28) = uVar4;
  _memset(*(void **)((int)this + 0x28),0,*(int *)((int)this + 0x30) * 0xc);
  for (iVar9 = 0; iVar9 < *(int *)((int)this + 0x30); iVar9 = iVar9 + 1) {
    FUN_00434e50((char *)&local_206c,0x100,local_2074);
    FUN_00434dc0(local_2074,(byte *)s__d__004534a8);
    FUN_00434e50((char *)&local_206c,0x100,local_2074);
    uVar4 = operator_new(*(int *)(*(int *)((int)this + 0x28) + iVar9 * 0xc) * 0xc);
    *(undefined4 *)(*(int *)((int)this + 0x28) + 8 + iVar9 * 0xc) = uVar4;
    _memset(*(void **)(*(int *)((int)this + 0x28) + 8 + iVar9 * 0xc),0,
            *(int *)(*(int *)((int)this + 0x28) + iVar9 * 0xc) * 0xc);
    FUN_00434dc0(local_2074,(byte *)s__f__004534b0);
    FUN_00434e50((char *)&local_206c,0x100,local_2074);
    FUN_00434e50((char *)&local_206c,0x100,local_2074);
    for (local_20ac = 0; local_20ac < *(int *)(*(int *)((int)this + 0x28) + iVar9 * 0xc);
        local_20ac = local_20ac + 1) {
      FUN_00434dc0(local_2074,(byte *)s__d__004534b8);
      *(undefined4 *)(*(int *)(*(int *)((int)this + 0x28) + 8 + iVar9 * 0xc) + 8 + local_20ac * 0xc)
           = *(undefined4 *)
              (*(int *)((int)this + 0x24) + 0x18 +
              *(int *)(*(int *)(*(int *)((int)this + 0x28) + 8 + iVar9 * 0xc) + local_20ac * 0xc) *
              0x20);
      *(undefined4 *)(*(int *)(*(int *)((int)this + 0x28) + 8 + iVar9 * 0xc) + 4 + local_20ac * 0xc)
           = *(undefined4 *)
              (*(int *)((int)this + 0x24) + 0x1c +
              *(int *)(*(int *)(*(int *)((int)this + 0x28) + 8 + iVar9 * 0xc) + local_20ac * 0xc) *
              0x20);
      FUN_00434e50((char *)&local_206c,0x100,local_2074);
    }
  }
  _fclose(local_2074);
  uVar4 = thunk_FUN_0040ab8f(this,2.5);
  *unaff_FS_OFFSET = local_10;
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}

