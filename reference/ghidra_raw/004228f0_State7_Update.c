// State7_Update @ 004228f0  size=1746

void __fastcall State7_Update(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  float10 fVar3;
  undefined4 uVar4;
  undefined1 local_50 [12];
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  float local_8;
  
  *(float *)(param_1 + 0x390) = *(float *)(param_1 + 0x390) + *(float *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x3b8) == 0) {
    *(undefined4 *)(param_1 + 0x390) = 0;
    *(undefined1 *)(param_1 + 0x3a5) = 1;
    *(undefined1 *)(param_1 + 0x3a4) = 1;
    *(undefined1 *)(param_1 + 0x3a6) = 1;
    *(undefined1 *)(param_1 + 0x398) = 0;
    *(undefined1 *)(param_1 + 0x399) = 0;
    *(undefined4 *)(param_1 + 0x3ac) = 0;
    *(undefined4 *)(param_1 + 0x394) = 0x3f800000;
    thunk_FUN_0040878a(*(int *)(param_1 + 0xc0));
    uVar4 = 0;
    puVar1 = D3DVECTOR_ctor(local_14,0,0,0x41880000);
    thunk_FUN_0042dcb7(*(void **)(param_1 + 0xd8),*puVar1,puVar1[1],puVar1[2],uVar4);
    uVar4 = 0xbe4ccccd;
    puVar1 = D3DVECTOR_ctor(local_20,0xc0400000,0,0x41880000);
    thunk_FUN_0042dcb7(*(void **)(param_1 + 0xdc),*puVar1,puVar1[1],puVar1[2],uVar4);
    uVar4 = 0x4048f5c3;
    puVar1 = D3DVECTOR_ctor(local_2c,0xbf800000,0,0x41000000);
    thunk_FUN_0042dcb7(*(void **)(param_1 + 0xe0),*puVar1,puVar1[1],puVar1[2],uVar4);
    uVar4 = 0xbf800000;
    puVar1 = D3DVECTOR_ctor(local_38,0xc0a00000,0,0x41700000);
    thunk_FUN_0042dcb7(*(void **)(param_1 + 0xe4),*puVar1,puVar1[1],puVar1[2],uVar4);
    uVar4 = 0x40000000;
    puVar1 = D3DVECTOR_ctor(local_44,0x40800000,0,0x41400000);
    thunk_FUN_0042dcb7(*(void **)(param_1 + 0xe8),*puVar1,puVar1[1],puVar1[2],uVar4);
    uVar4 = 0x3f000000;
    puVar1 = D3DVECTOR_ctor(local_50,0x40400000,0,0x41800000);
    thunk_FUN_0042dcb7(*(void **)(param_1 + 0xec),*puVar1,puVar1[1],puVar1[2],uVar4);
    thunk_FUN_00430c40(*(int *)(param_1 + 0xd8));
    thunk_FUN_00430c40(*(int *)(param_1 + 0xdc));
    thunk_FUN_00430c40(*(int *)(param_1 + 0xe0));
    thunk_FUN_0042df38(*(int *)(param_1 + 0xe4));
    thunk_FUN_0042df38(*(int *)(param_1 + 0xe8));
    thunk_FUN_00430c40(*(int *)(param_1 + 0xec));
    thunk_FUN_0042ddac(*(void **)(param_1 + 0xd8),1);
    thunk_FUN_0042de30(*(void **)(param_1 + 0xd8),1);
    thunk_FUN_0042ddac(*(void **)(param_1 + 0xdc),1);
    thunk_FUN_0042deb4(*(void **)(param_1 + 0xdc),-1);
    thunk_FUN_0042de30(*(void **)(param_1 + 0xdc),1);
    thunk_FUN_0042de30(*(void **)(param_1 + 0xe0),1);
    thunk_FUN_0042de30(*(void **)(param_1 + 0xe4),1);
    thunk_FUN_0042de30(*(void **)(param_1 + 0xe8),1);
    *(undefined4 *)(param_1 + 0x21c) = 0x4184cccd;
    *(undefined4 *)(param_1 + 0x220) = 0x40b00000;
    *(undefined4 *)(param_1 + 0x224) = 0x41db3333;
    *(undefined4 *)(param_1 + 0x228) = 0xbf428f5c;
    *(undefined4 *)(param_1 + 0x22c) = 0;
    *(undefined4 *)(param_1 + 0x230) = 0xbf1eb852;
    *(undefined4 *)(param_1 + 0x24c) = 0;
    *(undefined4 *)(param_1 + 0x254) = 0;
    *(undefined4 *)(param_1 + 0x25c) = 0;
    *(undefined4 *)(param_1 + 600) = 0;
    *(undefined4 *)(param_1 + 0x268) = 0;
    *(undefined4 *)(param_1 + 0x3b8) = 1;
  }
  else if (*(int *)(param_1 + 0x3b8) != 1 || *(float *)(param_1 + 0x390) <= 1.0) {
    if (*(int *)(param_1 + 0x3b8) == 5 && 1.0 < *(float *)(param_1 + 0x390)) {
      *(undefined4 *)(param_1 + 0x390) = 0;
      *(undefined4 *)(param_1 + 0x3b8) = 5;
      *(undefined4 *)(param_1 + 0x26c) = 5;
      *(undefined4 *)(param_1 + 0x418) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3b8) = 2;
    *(undefined4 *)(param_1 + 0x394) = 0;
    thunk_FUN_004087ee(*(int *)(param_1 + 0xc0));
    *(undefined4 *)(param_1 + 0x390) = 0;
  }
  *(undefined4 *)(param_1 + 0x250) = 0x40b00000;
  fVar3 = (float10)thunk_FUN_0041b040(*(float *)(param_1 + 0x228),*(float *)(param_1 + 0x230));
  local_8 = (float)fVar3;
  uVar2 = (uint)(*(int *)(param_1 + 0x58) == DAT_004540c8 ||
                *(int *)(param_1 + 0x84) == DAT_004540c8);
  if (uVar2 != 0) {
    fVar3 = (float10)thunk_FUN_00404960(uVar2);
    *(float *)(param_1 + 0x21c) =
         (float)(fVar3 * (float10)15.0 * (float10)*(float *)(param_1 + 0x54) +
                (float10)*(float *)(param_1 + 0x21c));
    fVar3 = (float10)thunk_FUN_00404900(local_8);
    *(float *)(param_1 + 0x224) =
         (float)(fVar3 * (float10)15.0 * (float10)*(float *)(param_1 + 0x54) +
                (float10)*(float *)(param_1 + 0x224));
  }
  uVar2 = (uint)(*(int *)(param_1 + 0x5c) == DAT_004540c8 ||
                *(int *)(param_1 + 0x78) == DAT_004540c8);
  if (uVar2 != 0) {
    fVar3 = (float10)thunk_FUN_00404960(uVar2);
    *(float *)(param_1 + 0x21c) =
         (float)((float10)*(float *)(param_1 + 0x21c) -
                fVar3 * (float10)15.0 * (float10)*(float *)(param_1 + 0x54));
    fVar3 = (float10)thunk_FUN_00404900(local_8);
    *(float *)(param_1 + 0x224) =
         (float)((float10)*(float *)(param_1 + 0x224) -
                fVar3 * (float10)15.0 * (float10)*(float *)(param_1 + 0x54));
  }
  if (*(int *)(param_1 + 100) == DAT_004540c8 || *(int *)(param_1 + 0x80) == DAT_004540c8) {
    local_8 = *(float *)(param_1 + 0x54) * 2.0 + local_8;
    fVar3 = (float10)thunk_FUN_00404960(local_8);
    *(float *)(param_1 + 0x228) = (float)fVar3;
    fVar3 = (float10)thunk_FUN_00404900(extraout_ECX);
    *(float *)(param_1 + 0x230) = (float)fVar3;
  }
  if (*(int *)(param_1 + 0x60) == DAT_004540c8 || *(int *)(param_1 + 0x7c) == DAT_004540c8) {
    local_8 = local_8 - *(float *)(param_1 + 0x54) * 2.0;
    fVar3 = (float10)thunk_FUN_00404960(local_8);
    *(float *)(param_1 + 0x228) = (float)fVar3;
    fVar3 = (float10)thunk_FUN_00404900(extraout_ECX_00);
    *(float *)(param_1 + 0x230) = (float)fVar3;
  }
  if ((*(int *)(param_1 + 0x6c) == DAT_004540c0 || *(int *)(param_1 + 0x70) == DAT_004540c0) ||
      *(int *)(param_1 + 0x74) == DAT_004540c0) {
    thunk_FUN_00408716(*(void **)(param_1 + 0xc0),7);
    *(undefined4 *)(param_1 + 0x3b8) = 5;
    *(undefined4 *)(param_1 + 0x390) = 0;
    *(undefined4 *)(param_1 + 0x394) = 0x3f800000;
    thunk_FUN_0040878a(*(int *)(param_1 + 0xc0));
  }
  return;
}

