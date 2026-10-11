// CMesh_LoadX @ 0040c5ed  size=5037

undefined4 CMesh_LoadX(LPCSTR param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *pvVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int extraout_ECX;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *unaff_FS_OFFSET;
  void *local_210c;
  int local_2108;
  int local_2104;
  undefined1 local_20f8 [12];
  undefined1 local_20ec [12];
  undefined4 local_20e0 [3];
  undefined1 local_20d4 [12];
  undefined1 local_20c8 [12];
  void *local_20bc;
  void *local_20b8;
  void *local_20b4;
  int local_20b0;
  int local_20ac;
  int local_20a8;
  int local_20a4;
  uint local_20a0;
  float local_209c [3];
  uint local_2090;
  uint local_208c;
  float *local_2088;
  uint local_2084;
  float *local_2080;
  float *local_207c;
  uint local_2078;
  uint local_2074;
  uint local_2070;
  int *local_206c;
  void *local_2068;
  byte local_2064;
  undefined4 local_2063;
  uint auStackY_1f64 [1995];
  undefined4 uStackY_38;
  uint uVar11;
  byte *pbVar12;
  int *piVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044ccda;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  FUN_00435010();
  local_2064 = 0;
  puVar8 = &local_2063;
  for (iVar9 = 0x3f; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0;
  *(undefined1 *)((int)puVar8 + 2) = 0;
  local_206c = (int *)_fopen(param_1,&DAT_00453504);
  while (iVar9 = _strcmp((char *)&local_2064,s_Mesh___00453508), iVar9 != 0) {
    FUN_00434e50((char *)&local_2064,0x100,local_206c);
  }
  FUN_00434dc0(local_206c,&DAT_00453514);
  iVar9 = *(int *)(extraout_ECX + 4);
  local_20a4 = operator_new(iVar9 << 5);
  local_8 = 0;
  if (local_20a4 == 0) {
    local_2104 = 0;
  }
  else {
    thunk_FUN_0040c3a0(local_20a4,0x20,iVar9,&LAB_004010cd);
    local_2104 = local_20a4;
  }
  local_20a8 = local_2104;
  local_8 = 0xffffffff;
  *(int *)(extraout_ECX + 8) = local_2104;
  iVar9 = *(int *)(extraout_ECX + 4);
  local_20ac = operator_new(iVar9 << 5);
  local_8 = 1;
  if (local_20ac == 0) {
    local_2108 = 0;
  }
  else {
    thunk_FUN_0040c3a0(local_20ac,0x20,iVar9,&LAB_004010cd);
    local_2108 = local_20ac;
  }
  local_20b0 = local_2108;
  local_8 = 0xffffffff;
  *(int *)(extraout_ECX + 0x20) = local_2108;
  _memset(*(void **)(extraout_ECX + 8),0,*(int *)(extraout_ECX + 4) << 5);
  _memset(*(void **)(extraout_ECX + 0x20),0,*(int *)(extraout_ECX + 4) << 5);
  uVar11 = 0;
  while (uVar11 < *(int *)(extraout_ECX + 4) - 1U) {
    iVar9 = *(int *)(extraout_ECX + 8) + uVar11 * 0x20;
    FUN_00434dc0(local_206c,(byte *)s__f__f__f___0045351c);
    uVar11 = iVar9 + 1;
  }
  FUN_00434dc0(local_206c,(byte *)s__f__f__f___00453528);
  local_2070 = 0;
  FUN_00434d10(local_206c);
  FUN_00434dc0(local_206c,&DAT_00453534);
  uVar4 = operator_new(local_2070 * 0x14);
  *(undefined4 *)(extraout_ECX + 0x1c) = uVar4;
  _memset(*(void **)(extraout_ECX + 0x1c),0,local_2070 * 0x14);
  *(undefined4 *)(extraout_ECX + 0xc) = 0;
  for (pbVar12 = (byte *)0x0; pbVar12 < (byte *)(local_2070 - 1); pbVar12 = pbVar12 + 1) {
    pbVar12 = (byte *)(*(int *)(extraout_ECX + 0x1c) + 8 + (int)pbVar12 * 0x14);
    uStackY_38 = 0x40c9b2;
    FUN_00434dc0(local_206c,(byte *)s__d__d__d__d__d___0045353c);
    *(int *)(extraout_ECX + 0xc) =
         *(int *)(extraout_ECX + 0xc) +
         (*(int *)(*(int *)(extraout_ECX + 0x1c) + (int)pbVar12 * 0x14) + -2) * 3;
    if (*(int *)(*(int *)(extraout_ECX + 0x1c) + (int)pbVar12 * 0x14) == 3) {
      pbVar12 = &local_2064;
      FUN_00434e50((char *)pbVar12,0x100,local_206c);
    }
  }
  iVar9 = *(int *)(extraout_ECX + 0x1c) + 8 + (int)pbVar12 * 0x14;
  uStackY_38 = 0x40ca89;
  FUN_00434dc0(local_206c,(byte *)s__d__d__d__d__d___00453550);
  *(int *)(extraout_ECX + 0xc) =
       *(int *)(extraout_ECX + 0xc) +
       (*(int *)(*(int *)(extraout_ECX + 0x1c) + iVar9 * 0x14) + -2) * 3;
  FUN_00434e50((char *)&local_2064,0x100,local_206c);
  FUN_00434e50((char *)&local_2064,0x100,local_206c);
  FUN_00434e50((char *)&local_2064,0x100,local_206c);
  FUN_00434dc0(local_206c,(byte *)s__d__00453564);
  FUN_00434e50((char *)&local_2064,0x100,local_206c);
  FUN_00434e50((char *)&local_2064,0x100,local_206c);
  uVar11 = 0;
  while (uVar11 < local_2070 - 1) {
    piVar13 = local_206c;
    FUN_00434dc0(local_206c,(byte *)s__d__0045356c);
    uVar11 = (int)piVar13 + 1;
  }
  FUN_00434dc0(local_206c,(byte *)s__d___00453574);
  uVar4 = operator_new(*(int *)(extraout_ECX + 0xc) << 1);
  *(undefined4 *)(extraout_ECX + 0x10) = uVar4;
  _memset(*(void **)(extraout_ECX + 0x10),0,*(int *)(extraout_ECX + 0xc) << 1);
  uVar4 = operator_new(*(int *)(extraout_ECX + 0x14) * 0x148);
  *(undefined4 *)(extraout_ECX + 0x18) = uVar4;
  _memset(*(void **)(extraout_ECX + 0x18),0,*(int *)(extraout_ECX + 0x14) * 0x148);
  for (uVar11 = 0; uVar11 < local_2070; uVar11 = uVar11 + 1) {
    if (*(int *)(*(int *)(extraout_ECX + 0x1c) + uVar11 * 0x14) == 3) {
      uVar16 = 0;
      for (local_2074 = 0; local_2074 <= auStackY_1f64[uVar11]; local_2074 = local_2074 + 1) {
        uVar16 = uVar16 + *(int *)(*(int *)(extraout_ECX + 0x18) + 0x144 + local_2074 * 0x148);
      }
      for (local_2074 = *(int *)(extraout_ECX + 0xc) - 3; uVar16 < local_2074;
          local_2074 = local_2074 - 1) {
        *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + 4 + local_2074 * 2) =
             *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + -2 + local_2074 * 2);
      }
      *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + uVar16 * 2) =
           *(undefined2 *)(*(int *)(extraout_ECX + 0x1c) + 4 + uVar11 * 0x14);
      *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + 2 + uVar16 * 2) =
           *(undefined2 *)(*(int *)(extraout_ECX + 0x1c) + 8 + uVar11 * 0x14);
      *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + 4 + uVar16 * 2) =
           *(undefined2 *)(*(int *)(extraout_ECX + 0x1c) + 0xc + uVar11 * 0x14);
      *(int *)(*(int *)(extraout_ECX + 0x18) + 0x144 + auStackY_1f64[uVar11] * 0x148) =
           *(int *)(*(int *)(extraout_ECX + 0x18) + 0x144 + auStackY_1f64[uVar11] * 0x148) + 3;
    }
    else {
      uVar16 = 0;
      for (local_2078 = 0; local_2078 <= auStackY_1f64[uVar11]; local_2078 = local_2078 + 1) {
        uVar16 = uVar16 + *(int *)(*(int *)(extraout_ECX + 0x18) + 0x144 + local_2078 * 0x148);
      }
      for (local_2078 = *(int *)(extraout_ECX + 0xc) - 6; uVar16 < local_2078;
          local_2078 = local_2078 - 1) {
        *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + 10 + local_2078 * 2) =
             *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + -2 + local_2078 * 2);
      }
      *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + uVar16 * 2) =
           *(undefined2 *)(*(int *)(extraout_ECX + 0x1c) + 4 + uVar11 * 0x14);
      *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + 2 + uVar16 * 2) =
           *(undefined2 *)(*(int *)(extraout_ECX + 0x1c) + 8 + uVar11 * 0x14);
      *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + 4 + uVar16 * 2) =
           *(undefined2 *)(*(int *)(extraout_ECX + 0x1c) + 0xc + uVar11 * 0x14);
      *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + 6 + uVar16 * 2) =
           *(undefined2 *)(*(int *)(extraout_ECX + 0x1c) + 4 + uVar11 * 0x14);
      *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + 8 + uVar16 * 2) =
           *(undefined2 *)(*(int *)(extraout_ECX + 0x1c) + 0xc + uVar11 * 0x14);
      *(undefined2 *)(*(int *)(extraout_ECX + 0x10) + 10 + uVar16 * 2) =
           *(undefined2 *)(*(int *)(extraout_ECX + 0x1c) + 0x10 + uVar11 * 0x14);
      *(int *)(*(int *)(extraout_ECX + 0x18) + 0x144 + auStackY_1f64[uVar11] * 0x148) =
           *(int *)(*(int *)(extraout_ECX + 0x18) + 0x144 + auStackY_1f64[uVar11] * 0x148) + 6;
    }
  }
  local_20b4 = *(void **)(extraout_ECX + 0x1c);
  FUN_00433370(local_20b4);
  FUN_00434e50((char *)&local_2064,0x100,local_206c);
  FUN_00434e50((char *)&local_2064,0x100,local_206c);
  for (pbVar12 = (byte *)0x0; pbVar12 < *(byte **)(extraout_ECX + 0x14); pbVar12 = pbVar12 + 1) {
    iVar9 = *(int *)(extraout_ECX + 0x18) + 4 + (int)pbVar12 * 0x148;
    FUN_00434dc0(local_206c,(byte *)s__f__f__f__f___0045357c);
    puVar10 = (undefined4 *)(*(int *)(extraout_ECX + 0x18) + iVar9 * 0x148);
    puVar8 = (undefined4 *)(*(int *)(extraout_ECX + 0x18) + 0x10 + iVar9 * 0x148);
    *puVar8 = *puVar10;
    puVar8[1] = puVar10[1];
    puVar8[2] = puVar10[2];
    puVar8[3] = puVar10[3];
    FUN_00434dc0(local_206c,(byte *)s__f__00453590);
    FUN_00434dc0(local_206c,(byte *)s__f__f__f___00453598);
    FUN_00434dc0(local_206c,(byte *)s__f__f__f___004535a8);
    FUN_00434e50((char *)&local_2064,0x100,local_206c);
    FUN_00434dc0(local_206c,&DAT_004535b8);
    FUN_00434e50((char *)&local_2064,0x100,local_206c);
    piVar13 = local_206c;
    FUN_00434dc0(local_206c,(byte *)s___c______004535bc);
    FUN_00434a40((undefined1 *)(*(int *)(extraout_ECX + 0x18) + 0x44 + (int)piVar13 * 0x148),
                 &local_2064);
    FUN_00434e50((char *)&local_2064,0x100,local_206c);
    FUN_00434e50((char *)&local_2064,0x100,local_206c);
    FUN_00434e50((char *)&local_2064,0x100,local_206c);
    pbVar12 = &local_2064;
    FUN_00434e50((char *)pbVar12,0x100,local_206c);
  }
  FUN_00434e50((char *)&local_2064,0x100,local_206c);
  FUN_00434e50((char *)&local_2064,0x100,local_206c);
  for (puVar14 = (undefined *)0x0; puVar14 < (undefined *)(*(int *)(extraout_ECX + 4) + -1);
      puVar14 = puVar14 + 1) {
    puVar14 = &DAT_004535cc;
    FUN_00434dc0(local_206c,&DAT_004535cc);
  }
  FUN_00434dc0(local_206c,(byte *)s__f__f__004535d8);
  _fclose(local_206c);
  local_20b8 = (void *)operator_new(*(int *)(extraout_ECX + 0xc) * 0xc);
  local_8 = 2;
  if (local_20b8 == (void *)0x0) {
    local_210c = (void *)0x0;
  }
  else {
    thunk_FUN_0040c3a0(local_20b8,0xc,0x40130c,thunk_FUN_00407fe0);
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
    local_207c = (float *)(*(int *)(extraout_ECX + 8) + (uint)uVar1 * 0x20);
    local_2080 = (float *)(*(int *)(extraout_ECX + 8) + (uint)uVar2 * 0x20);
    local_2088 = (float *)(*(int *)(extraout_ECX + 8) + (uint)uVar3 * 0x20);
    pvVar5 = thunk_FUN_00407cb0(local_20c8,local_2088,local_2080);
    pvVar6 = thunk_FUN_00407cb0(local_20d4,local_2080,local_207c);
    pfVar7 = (float *)thunk_FUN_00407e80(local_20e0,pvVar6,pvVar5);
    iVar9 = 0x40d563;
    thunk_FUN_00407dc0(local_209c,pfVar7);
    thunk_FUN_0040c2f0((void *)((local_2084 & 0xffff) * 0xc + (int)local_2068),local_209c);
    thunk_FUN_0040c2f0((void *)((local_208c & 0xffff) * 0xc + (int)local_2068),local_209c);
    thunk_FUN_0040c2f0((void *)((local_2090 & 0xffff) * 0xc + (int)local_2068),local_209c);
    uVar11 = iVar9 + 3;
  }
  for (puVar15 = (undefined1 *)0x0; puVar15 < *(undefined1 **)(extraout_ECX + 4);
      puVar15 = puVar15 + 1) {
    for (local_20a0 = 0; local_20a0 < *(uint *)(extraout_ECX + 4); local_20a0 = local_20a0 + 1) {
      if (((((*(float *)(*(int *)(extraout_ECX + 8) + (int)puVar15 * 0x20) -
              *(float *)(*(int *)(extraout_ECX + 8) + local_20a0 * 0x20) < 1e-06 &&
             -1e-06 < *(float *)(*(int *)(extraout_ECX + 8) + (int)puVar15 * 0x20) -
                      *(float *)(*(int *)(extraout_ECX + 8) + local_20a0 * 0x20)) &&
            *(float *)(*(int *)(extraout_ECX + 8) + 4 + (int)puVar15 * 0x20) -
            *(float *)(*(int *)(extraout_ECX + 8) + 4 + local_20a0 * 0x20) < 1e-06) &&
           -1e-06 < *(float *)(*(int *)(extraout_ECX + 8) + 4 + (int)puVar15 * 0x20) -
                    *(float *)(*(int *)(extraout_ECX + 8) + 4 + local_20a0 * 0x20)) &&
          *(float *)(*(int *)(extraout_ECX + 8) + 8 + (int)puVar15 * 0x20) -
          *(float *)(*(int *)(extraout_ECX + 8) + 8 + local_20a0 * 0x20) < 1e-06) &&
          -1e-06 < *(float *)(*(int *)(extraout_ECX + 8) + 8 + (int)puVar15 * 0x20) -
                   *(float *)(*(int *)(extraout_ECX + 8) + 8 + local_20a0 * 0x20)) {
        iVar9 = (int)puVar15 * 0xc;
        puVar15 = local_20ec;
        puVar8 = thunk_FUN_0040c350(puVar15,(float *)((int)local_2068 + iVar9),
                                    (float *)((int)local_2068 + local_20a0 * 0xc));
        puVar10 = (undefined4 *)((int)local_2068 + (int)puVar15 * 0xc);
        *puVar10 = *puVar8;
        puVar10[1] = puVar8[1];
        puVar10[2] = puVar8[2];
        puVar10 = (undefined4 *)((int)local_2068 + (int)puVar15 * 0xc);
        puVar8 = (undefined4 *)((int)local_2068 + local_20a0 * 0xc);
        *puVar8 = *puVar10;
        puVar8[1] = puVar10[1];
        puVar8[2] = puVar10[2];
      }
    }
  }
  uVar11 = 0;
  while (uVar11 < *(uint *)(extraout_ECX + 4)) {
    iVar9 = 0x40d8da;
    puVar8 = thunk_FUN_00407dc0(local_20f8,(float *)((int)local_2068 + uVar11 * 0xc));
    puVar10 = (undefined4 *)((int)local_2068 + iVar9 * 0xc);
    *puVar10 = *puVar8;
    puVar10[1] = puVar8[1];
    puVar10[2] = puVar8[2];
    *(undefined4 *)(*(int *)(extraout_ECX + 8) + 0xc + iVar9 * 0x20) =
         *(undefined4 *)((int)local_2068 + iVar9 * 0xc);
    *(undefined4 *)(*(int *)(extraout_ECX + 8) + 0x10 + iVar9 * 0x20) =
         *(undefined4 *)((int)local_2068 + iVar9 * 0xc + 4);
    *(undefined4 *)(*(int *)(extraout_ECX + 8) + 0x14 + iVar9 * 0x20) =
         *(undefined4 *)((int)local_2068 + iVar9 * 0xc + 8);
    uVar11 = iVar9 + 1;
  }
  FUN_00433370(local_2068);
  *unaff_FS_OFFSET = local_10;
  return 1;
}

