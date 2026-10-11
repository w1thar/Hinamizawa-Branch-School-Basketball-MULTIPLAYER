// State2_Update @ 00427475  size=2520

void __fastcall State2_Update(int param_1)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  float10 fVar2;
  int local_10;
  int local_c;
  float local_8;
  
  fVar2 = (float10)thunk_FUN_0041b040(*(float *)(param_1 + 0x228),*(float *)(param_1 + 0x230));
  local_8 = (float)fVar2;
  *(undefined4 *)(param_1 + 0x250) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x25c) = 0;
  *(float *)(param_1 + 0x390) = *(float *)(param_1 + 0x390) + *(float *)(param_1 + 0x54);
  if ((7.0 < *(float *)(param_1 + 0x390) && *(float *)(param_1 + 0x390) < 8.0) &&
      *(char *)(param_1 + 0x398) == '\0') {
    *(undefined1 *)(param_1 + 0x398) = 1;
    thunk_FUN_00408716(*(void **)(param_1 + 0xc0),0);
  }
  if (12.0 < *(float *)(param_1 + 0x390) && *(float *)(param_1 + 0x390) < 17.0) {
    if (0.01 < *(float *)(param_1 + 0x394)) {
      *(float *)(param_1 + 0x394) = *(float *)(param_1 + 0x394) - *(float *)(param_1 + 0x54) * 0.2;
    }
    *(undefined1 *)(param_1 + 0x398) = 0;
  }
  if ((17.5 < *(float *)(param_1 + 0x390) && *(float *)(param_1 + 0x390) < 18.5) &&
      *(char *)(param_1 + 0x399) == '\0') {
    *(undefined1 *)(param_1 + 0x399) = 1;
    thunk_FUN_004087ee(*(int *)(param_1 + 0xc0));
    for (local_c = 0; local_c < 6; local_c = local_c + 1) {
      *(undefined4 *)(*(int *)(param_1 + 0xd8 + local_c * 4) + 0x194) = 0x40000000;
    }
  }
  if (17.0 < *(float *)(param_1 + 0x390) && *(float *)(param_1 + 0x390) < 22.3) {
    *(float *)(param_1 + 0x220) = *(float *)(param_1 + 0x220) - *(float *)(param_1 + 0x54) * 3.0;
  }
  uVar1 = (uint)(24.8 < *(float *)(param_1 + 0x390) && *(float *)(param_1 + 0x390) < 25.3);
  if (uVar1 != 0) {
    *(undefined1 *)(param_1 + 0x399) = 0;
    fVar2 = (float10)thunk_FUN_00404960(uVar1);
    *(float *)(param_1 + 0x21c) =
         (float)((float10)*(float *)(param_1 + 0x21c) -
                fVar2 * (float10)13.0 * (float10)*(float *)(param_1 + 0x54));
    fVar2 = (float10)thunk_FUN_00404900(local_8);
    *(float *)(param_1 + 0x224) =
         (float)((float10)*(float *)(param_1 + 0x224) -
                fVar2 * (float10)13.0 * (float10)*(float *)(param_1 + 0x54));
  }
  uVar1 = (uint)(28.8 < *(float *)(param_1 + 0x390) && *(float *)(param_1 + 0x390) < 29.3);
  if (uVar1 != 0) {
    fVar2 = (float10)thunk_FUN_00404960(uVar1);
    *(float *)(param_1 + 0x21c) =
         (float)((float10)*(float *)(param_1 + 0x21c) -
                fVar2 * (float10)13.0 * (float10)*(float *)(param_1 + 0x54));
    fVar2 = (float10)thunk_FUN_00404900(param_1);
    *(float *)(param_1 + 0x224) =
         (float)((float10)*(float *)(param_1 + 0x224) -
                fVar2 * (float10)13.0 * (float10)*(float *)(param_1 + 0x54));
  }
  if (29.3 < *(float *)(param_1 + 0x390) && *(float *)(param_1 + 0x390) < 31.5) {
    *(float *)(param_1 + 0x220) = *(float *)(param_1 + 0x220) + *(float *)(param_1 + 0x54);
  }
  if (32.0 < *(float *)(param_1 + 0x390) && *(float *)(param_1 + 0x390) < 140.0) {
    *(undefined1 *)(param_1 + 0x39a) = 1;
    uVar1 = (uint)(*(int *)(param_1 + 0x58) == DAT_00454160 ||
                  *(int *)(param_1 + 0x84) == DAT_00454160);
    if (uVar1 != 0) {
      fVar2 = (float10)thunk_FUN_00404960(uVar1);
      *(float *)(param_1 + 0x21c) =
           (float)(fVar2 * (float10)25.0 * (float10)*(float *)(param_1 + 0x54) +
                  (float10)*(float *)(param_1 + 0x21c));
      fVar2 = (float10)thunk_FUN_00404900(local_8);
      *(float *)(param_1 + 0x224) =
           (float)(fVar2 * (float10)25.0 * (float10)*(float *)(param_1 + 0x54) +
                  (float10)*(float *)(param_1 + 0x224));
    }
    uVar1 = (uint)(*(int *)(param_1 + 0x5c) == DAT_00454160 ||
                  *(int *)(param_1 + 0x78) == DAT_00454160);
    if (uVar1 != 0) {
      fVar2 = (float10)thunk_FUN_00404960(uVar1);
      *(float *)(param_1 + 0x21c) =
           (float)((float10)*(float *)(param_1 + 0x21c) -
                  fVar2 * (float10)25.0 * (float10)*(float *)(param_1 + 0x54));
      fVar2 = (float10)thunk_FUN_00404900(local_8);
      *(float *)(param_1 + 0x224) =
           (float)((float10)*(float *)(param_1 + 0x224) -
                  fVar2 * (float10)25.0 * (float10)*(float *)(param_1 + 0x54));
    }
    if (*(int *)(param_1 + 100) == DAT_00454160 || *(int *)(param_1 + 0x80) == DAT_00454160) {
      local_8 = *(float *)(param_1 + 0x54) * 2.0 + local_8;
      fVar2 = (float10)thunk_FUN_00404960(local_8);
      *(float *)(param_1 + 0x228) = (float)fVar2;
      fVar2 = (float10)thunk_FUN_00404900(extraout_ECX);
      *(float *)(param_1 + 0x230) = (float)fVar2;
    }
    if (*(int *)(param_1 + 0x60) == DAT_00454160 || *(int *)(param_1 + 0x7c) == DAT_00454160) {
      fVar2 = (float10)thunk_FUN_00404960(local_8 - *(float *)(param_1 + 0x54) * 2.0);
      *(float *)(param_1 + 0x228) = (float)fVar2;
      fVar2 = (float10)thunk_FUN_00404900(extraout_ECX_00);
      *(float *)(param_1 + 0x230) = (float)fVar2;
    }
  }
  if ((135.0 < *(float *)(param_1 + 0x390) && *(float *)(param_1 + 0x390) < 140.0) &&
     (*(float *)(param_1 + 0x394) < 0.98)) {
    *(float *)(param_1 + 0x394) = *(float *)(param_1 + 0x54) * 0.2 + *(float *)(param_1 + 0x394);
  }
  if (140.0 < *(float *)(param_1 + 0x390)) {
    *(undefined4 *)(param_1 + 0x26c) = 1;
    thunk_FUN_0040882a(*(int *)(param_1 + 0xc0));
    *(undefined1 *)(param_1 + 0x39a) = 0;
  }
  if ((((*(int *)(param_1 + 0x6c) == DAT_00454158 || *(int *)(param_1 + 0x70) == DAT_00454158) ||
       *(int *)(param_1 + 0x74) == DAT_00454158) || *(int *)(param_1 + 0x68) == DAT_00454158) ||
      *(int *)(param_1 + 0x88) == DAT_00454158) {
    thunk_FUN_00408716(*(void **)(param_1 + 0xc0),1);
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      thunk_FUN_0042df38(*(int *)(param_1 + 0xd8 + local_10 * 4));
      *(undefined4 *)(*(int *)(param_1 + 0xd8 + local_10 * 4) + 0x194) = 0;
    }
    if (((((-50.0 <= *(float *)(param_1 + 0x21c) || *(float *)(param_1 + 0x21c) <= -65.0) ||
          10.0 <= *(float *)(param_1 + 0x220)) || *(float *)(param_1 + 0x220) <= 0.0) ||
        -30.0 <= *(float *)(param_1 + 0x224)) || *(float *)(param_1 + 0x224) <= -45.0) {
      *(undefined4 *)(param_1 + 0x21c) = 0xc2640000;
      *(undefined4 *)(param_1 + 0x224) = 0xc2140000;
      *(undefined4 *)(param_1 + 0x220) = 0x40c00000;
    }
    *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x22c) = 0;
    *(undefined4 *)(param_1 + 0x230) = 0x3f800000;
    thunk_FUN_004087ee(*(int *)(param_1 + 0xc0));
    thunk_FUN_0040878a(*(int *)(param_1 + 0xc0));
    *(undefined4 *)(param_1 + 0x390) = 0;
    thunk_FUN_004087ee(*(int *)(param_1 + 0xc0));
    *(undefined4 *)(param_1 + 0x394) = 0;
    *(undefined4 *)(param_1 + 0x400) = 0x40800000;
    *(undefined1 *)(param_1 + 0x398) = 0;
    *(undefined1 *)(param_1 + 0x399) = 0;
    *(undefined1 *)(param_1 + 0x39a) = 1;
    *(undefined4 *)(param_1 + 0x26c) = 3;
  }
  return;
}

