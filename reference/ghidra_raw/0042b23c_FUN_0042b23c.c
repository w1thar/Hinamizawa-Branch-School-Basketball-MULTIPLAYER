// FUN_0042b23c @ 0042b23c  size=2798

void __fastcall FUN_0042b23c(uint param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  
  if (*(int *)(param_1 + 0x268) < 0) {
    bVar4 = 11.0 < *(float *)(param_1 + 0x250);
    uVar2 = (uint)(-36.0 < *(float *)(param_1 + 0x24c) && *(float *)(param_1 + 0x24c) < 36.0);
    uVar3 = uVar2;
    if (*(float *)(param_1 + 0x260) < -3.14) {
      *(float *)(param_1 + 0x260) = *(float *)(param_1 + 0x260) + 6.28;
      uVar3 = param_1;
    }
    if (3.14 < *(float *)(param_1 + 0x260)) {
      *(float *)(param_1 + 0x260) = *(float *)(param_1 + 0x260) - 6.28;
      uVar3 = param_1;
    }
    fVar5 = (float10)thunk_FUN_00404960(uVar3);
    *(float *)(param_1 + 0x24c) =
         (float)(fVar5 * (float10)*(float *)(param_1 + 600) * (float10)*(float *)(param_1 + 0x54) +
                (float10)*(float *)(param_1 + 0x24c));
    fVar5 = (float10)thunk_FUN_00404900(param_1);
    *(float *)(param_1 + 0x254) =
         (float)(fVar5 * (float10)*(float *)(param_1 + 600) * (float10)*(float *)(param_1 + 0x54) +
                (float10)*(float *)(param_1 + 0x254));
    if (0.7 <= *(float *)(param_1 + 0x250) || 0.0 <= *(float *)(param_1 + 0x25c)) {
      *(float *)(param_1 + 0x25c) = *(float *)(param_1 + 0x25c) - *(float *)(param_1 + 0x54) * 20.0;
      *(float *)(param_1 + 0x250) =
           *(float *)(param_1 + 0x25c) * *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x250);
    }
    else {
      *(float *)(param_1 + 0x25c) = *(float *)(param_1 + 0x25c) * -0.8;
      *(float *)(param_1 + 600) = *(float *)(param_1 + 600) * 0.8;
      *(undefined4 *)(param_1 + 0x250) = 0x3f35c28f;
      fVar5 = (float10)thunk_FUN_00404990(param_1);
      *(float *)(param_1 + 0x264) =
           (float)(fVar5 * (float10)0.5 + (float10)*(float *)(param_1 + 0x264));
      if ((*(float *)(param_1 + 0x54) * 150.0 < *(float *)(param_1 + 0x25c)) &&
         (*(char *)(param_1 + 0x3a7) != '\0')) {
        thunk_FUN_00408716(*(void **)(param_1 + 0xc0),3);
      }
    }
    if (((*(float *)(param_1 + 0x24c) < -30.0 && bVar4) && *(float *)(param_1 + 0x250) < 11.0) &&
        *(float *)(param_1 + 0x25c) < 0.0) {
      fVar1 = *(float *)(param_1 + 0x254) * *(float *)(param_1 + 0x254) +
              (*(float *)(param_1 + 0x24c) + 35.0) * (*(float *)(param_1 + 0x24c) + 35.0);
      if (0.25 <= fVar1) {
        if (1.5 <= fVar1) {
          if (fVar1 < 4.0) {
            *(float *)(param_1 + 600) = *(float *)(param_1 + 600) * 1.0;
            *(float *)(param_1 + 0x25c) = *(float *)(param_1 + 0x25c) * -0.2;
            fVar5 = (float10)thunk_FUN_0041b040(*(float *)(param_1 + 0x24c) + 35.0,
                                                *(float *)(param_1 + 0x254));
            *(float *)(param_1 + 0x260) = (float)fVar5;
            thunk_FUN_00408716(*(void **)(param_1 + 0xc0),4);
          }
        }
        else {
          *(float *)(param_1 + 600) = *(float *)(param_1 + 600) * 0.2;
          *(float *)(param_1 + 0x25c) = *(float *)(param_1 + 0x25c) * -0.5;
          if (*(float *)(param_1 + 0x25c) < 1.0) {
            *(undefined4 *)(param_1 + 0x25c) = 0x3f800000;
          }
          if (*(float *)(param_1 + 600) < 1.0) {
            *(undefined4 *)(param_1 + 600) = 0x3f800000;
          }
          fVar5 = (float10)thunk_FUN_0041b040(-35.0 - *(float *)(param_1 + 0x24c),
                                              -*(float *)(param_1 + 0x254));
          *(float *)(param_1 + 0x260) = (float)fVar5;
          *(undefined4 *)(param_1 + 0x250) = 0x41300419;
          thunk_FUN_00408716(*(void **)(param_1 + 0xc0),4);
        }
      }
      else {
        *(undefined4 *)(param_1 + 600) = 0;
        thunk_FUN_00408716(*(void **)(param_1 + 0xc0),5);
        if (*(char *)(param_1 + 0x3a6) == '\0') {
          if (*(char *)(param_1 + 0x3a8) == '\0') {
            *(int *)(param_1 + 0x3d8) = *(int *)(param_1 + 0x3d8) + 2;
          }
          else {
            *(int *)(param_1 + 0x3d8) = *(int *)(param_1 + 0x3d8) + 3;
          }
          *(undefined4 *)(param_1 + 0x418) = 1;
        }
        else {
          if (*(char *)(param_1 + 0x3a8) == '\0') {
            *(int *)(param_1 + 0x3dc) = *(int *)(param_1 + 0x3dc) + 2;
          }
          else {
            *(int *)(param_1 + 0x3dc) = *(int *)(param_1 + 0x3dc) + 3;
          }
          *(undefined4 *)(param_1 + 0x418) = 3;
        }
      }
    }
    if (((30.0 < *(float *)(param_1 + 0x24c) && bVar4) && *(float *)(param_1 + 0x250) < 11.0) &&
        *(float *)(param_1 + 0x25c) < 0.0) {
      fVar1 = *(float *)(param_1 + 0x254) * *(float *)(param_1 + 0x254) +
              (*(float *)(param_1 + 0x24c) - 35.0) * (*(float *)(param_1 + 0x24c) - 35.0);
      if (0.25 <= fVar1) {
        if (1.5 <= fVar1) {
          if (fVar1 < 4.0) {
            *(float *)(param_1 + 600) = *(float *)(param_1 + 600) * 1.0;
            *(float *)(param_1 + 0x25c) = *(float *)(param_1 + 0x25c) * -0.2;
            fVar5 = (float10)thunk_FUN_0041b040(*(float *)(param_1 + 0x24c) - 35.0,
                                                *(float *)(param_1 + 0x254));
            *(float *)(param_1 + 0x260) = (float)fVar5;
            thunk_FUN_00408716(*(void **)(param_1 + 0xc0),4);
          }
        }
        else {
          *(float *)(param_1 + 600) = *(float *)(param_1 + 600) * 0.2;
          *(float *)(param_1 + 0x25c) = *(float *)(param_1 + 0x25c) * -0.5;
          if (*(float *)(param_1 + 0x25c) < 1.0) {
            *(undefined4 *)(param_1 + 0x25c) = 0x3f800000;
          }
          if (*(float *)(param_1 + 600) < 1.0) {
            *(undefined4 *)(param_1 + 600) = 0x3f800000;
          }
          fVar5 = (float10)thunk_FUN_0041b040(35.0 - *(float *)(param_1 + 0x24c),
                                              -*(float *)(param_1 + 0x254));
          *(float *)(param_1 + 0x260) = (float)fVar5;
          *(undefined4 *)(param_1 + 0x250) = 0x41300419;
          thunk_FUN_00408716(*(void **)(param_1 + 0xc0),4);
        }
      }
      else {
        *(undefined4 *)(param_1 + 600) = 0;
        thunk_FUN_00408716(*(void **)(param_1 + 0xc0),5);
        if (*(char *)(param_1 + 0x3a6) == '\0') {
          if (*(char *)(param_1 + 0x3a8) == '\0') {
            *(int *)(param_1 + 0x3dc) = *(int *)(param_1 + 0x3dc) + 2;
          }
          else {
            *(int *)(param_1 + 0x3dc) = *(int *)(param_1 + 0x3dc) + 3;
          }
          *(undefined4 *)(param_1 + 0x418) = 2;
        }
        else {
          if (*(char *)(param_1 + 0x3a8) == '\0') {
            *(int *)(param_1 + 0x3d8) = *(int *)(param_1 + 0x3d8) + 2;
          }
          else {
            *(int *)(param_1 + 0x3d8) = *(int *)(param_1 + 0x3d8) + 3;
          }
          *(undefined4 *)(param_1 + 0x418) = 4;
        }
      }
    }
    if (((*(float *)(param_1 + 0x24c) < -36.0 && uVar2 != 0) && *(float *)(param_1 + 0x260) < 0.0)
       && (((-4.0 < *(float *)(param_1 + 0x254) && *(float *)(param_1 + 0x254) < 4.0) &&
           9.0 < *(float *)(param_1 + 0x250)) && *(float *)(param_1 + 0x250) < 16.0)) {
      *(float *)(param_1 + 0x260) = *(float *)(param_1 + 0x260) * -1.0;
      thunk_FUN_00408716(*(void **)(param_1 + 0xc0),4);
    }
    if (((36.0 < *(float *)(param_1 + 0x24c) && uVar2 != 0) && 0.0 < *(float *)(param_1 + 0x260)) &&
       (((-4.0 < *(float *)(param_1 + 0x254) && *(float *)(param_1 + 0x254) < 4.0) &&
        9.0 < *(float *)(param_1 + 0x250)) && *(float *)(param_1 + 0x250) < 16.0)) {
      *(float *)(param_1 + 0x260) = *(float *)(param_1 + 0x260) * -1.0;
      thunk_FUN_00408716(*(void **)(param_1 + 0xc0),4);
    }
  }
  return;
}

