// State8_Update @ 00422fc2  size=3473

void __fastcall State8_Update(int param_1)

{
  int iVar1;
  float10 fVar2;
  int local_10;
  int local_8;
  
  *(float *)(param_1 + 0x390) = *(float *)(param_1 + 0x390) + *(float *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x3b8) != 0 || *(float *)(param_1 + 0x390) <= 1.0) {
    if (*(int *)(param_1 + 0x3b8) == 1) {
      local_10 = 0;
      for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
        fVar2 = (float10)thunk_FUN_00404990(*(undefined4 *)
                                             (param_1 + 0xd8 +
                                             *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4));
        if ((float)fVar2 <= 0.5) {
          *(undefined4 *)
           (*(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4) + 0x164) = 0;
          thunk_FUN_0042df38(*(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4))
          ;
          local_10 = local_10 + 1;
        }
        else {
          fVar2 = (float10)thunk_FUN_0041b040(*(float *)(*(int *)(param_1 + 0xd8 +
                                                                 *(int *)(param_1 + 0x3c0 +
                                                                         local_8 * 4) * 4) + 0x158)
                                              - (float)local_8 * 3.0,
                                              *(float *)(*(int *)(param_1 + 0xd8 +
                                                                 *(int *)(param_1 + 0x3c0 +
                                                                         local_8 * 4) * 4) + 0x160)
                                              + 3.0);
          *(float *)(*(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4) + 0x164)
               = (float)fVar2;
          iVar1 = *(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4);
          fVar2 = (float10)thunk_FUN_00404960(*(undefined4 *)
                                               (param_1 + 0xd8 +
                                               *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4));
          *(float *)(*(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4) + 0x158)
               = (float)((float10)*(float *)(iVar1 + 0x158) -
                        fVar2 * (float10)*(float *)(*(int *)(param_1 + 0xd8 +
                                                            *(int *)(param_1 + 0x3c0 + local_8 * 4)
                                                            * 4) + 0x168) *
                        (float10)*(float *)(param_1 + 0x54));
          *(undefined4 *)
           (*(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4) + 0x15c) = 0;
          iVar1 = *(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4);
          fVar2 = (float10)thunk_FUN_00404900(*(undefined4 *)
                                               (*(int *)(param_1 + 0xd8 +
                                                        *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4)
                                               + 0x164));
          *(float *)(*(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4) + 0x160)
               = (float)((float10)*(float *)(iVar1 + 0x160) -
                        fVar2 * (float10)*(float *)(*(int *)(param_1 + 0xd8 +
                                                            *(int *)(param_1 + 0x3c0 + local_8 * 4)
                                                            * 4) + 0x168) *
                        (float10)*(float *)(param_1 + 0x54));
          thunk_FUN_0042dfc0(*(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4))
          ;
        }
      }
      for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
        fVar2 = (float10)thunk_FUN_00404990(param_1);
        if ((float)fVar2 <= 0.5) {
          *(undefined4 *)
           (*(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + (5 - local_8) * 4) * 4) + 0x164) =
               0;
          thunk_FUN_0042df38(*(int *)(param_1 + 0xd8 +
                                     *(int *)(param_1 + 0x3c0 + (5 - local_8) * 4) * 4));
          local_10 = local_10 + 1;
        }
        else {
          fVar2 = (float10)thunk_FUN_0041b040((float)local_8 * 3.0 + 1.5 +
                                              *(float *)(*(int *)(param_1 + 0xd8 +
                                                                 *(int *)(param_1 + 0x3c0 +
                                                                         (5 - local_8) * 4) * 4) +
                                                        0x158),
                                              *(float *)(*(int *)(param_1 + 0xd8 +
                                                                 *(int *)(param_1 + 0x3c0 +
                                                                         (5 - local_8) * 4) * 4) +
                                                        0x160) - 1.0);
          *(float *)(*(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + (5 - local_8) * 4) * 4) +
                    0x164) = (float)fVar2;
          iVar1 = *(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + (5 - local_8) * 4) * 4);
          fVar2 = (float10)thunk_FUN_00404960(param_1);
          *(float *)(*(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + (5 - local_8) * 4) * 4) +
                    0x158) =
               (float)((float10)*(float *)(iVar1 + 0x158) -
                      fVar2 * (float10)*(float *)(*(int *)(param_1 + 0xd8 +
                                                          *(int *)(param_1 + 0x3c0 +
                                                                  (5 - local_8) * 4) * 4) + 0x168) *
                      (float10)*(float *)(param_1 + 0x54));
          *(undefined4 *)
           (*(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + (5 - local_8) * 4) * 4) + 0x15c) =
               0;
          iVar1 = *(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + (5 - local_8) * 4) * 4);
          fVar2 = (float10)thunk_FUN_00404900(*(undefined4 *)
                                               (param_1 + 0xd8 +
                                               *(int *)(param_1 + 0x3c0 + (5 - local_8) * 4) * 4));
          *(float *)(*(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + (5 - local_8) * 4) * 4) +
                    0x160) =
               (float)((float10)*(float *)(iVar1 + 0x160) -
                      fVar2 * (float10)*(float *)(*(int *)(param_1 + 0xd8 +
                                                          *(int *)(param_1 + 0x3c0 +
                                                                  (5 - local_8) * 4) * 4) + 0x168) *
                      (float10)*(float *)(param_1 + 0x54));
          thunk_FUN_0042dfc0(*(int *)(param_1 + 0xd8 +
                                     *(int *)(param_1 + 0x3c0 + (5 - local_8) * 4) * 4));
        }
      }
      if (local_10 == 6) {
        *(undefined4 *)(param_1 + 0x390) = 0;
        *(undefined4 *)(param_1 + 0x3b8) = 2;
      }
    }
    else if (*(int *)(param_1 + 0x3b8) != 2 || *(float *)(param_1 + 0x390) <= 2.0) {
      if (*(int *)(param_1 + 0x3b8) == 3) {
        if ((*(int *)(param_1 + 0x6c) == DAT_004540c0 || *(int *)(param_1 + 0x70) == DAT_004540c0)
            || *(int *)(param_1 + 0x74) == DAT_004540c0) {
          *(undefined4 *)(param_1 + 0x3b8) = 4;
        }
      }
      else if (*(int *)(param_1 + 0x3b8) == 4) {
        *(float *)(param_1 + 0x394) = *(float *)(param_1 + 0x54) * 0.3 + *(float *)(param_1 + 0x394)
        ;
        if (1.0 < *(float *)(param_1 + 0x394)) {
          *(undefined4 *)(param_1 + 0x394) = 0x3f800000;
          *(undefined4 *)(param_1 + 0x3b8) = 5;
        }
      }
      else if (*(int *)(param_1 + 0x3b8) == 5) {
        thunk_FUN_0040882a(*(int *)(param_1 + 0xc0));
        if (*(int *)(param_1 + 0x3dc) < *(int *)(param_1 + 0x3d8) && *(int *)(param_1 + 0x3b0) != 2)
        {
          *(undefined4 *)(param_1 + 0x3b8) = 0;
          *(undefined4 *)(param_1 + 0x390) = 0;
          *(undefined4 *)(param_1 + 0x26c) = 9;
        }
        else {
          *(undefined4 *)(param_1 + 0x3b8) = 6;
          thunk_FUN_00408716(*(void **)(param_1 + 0xc0),7);
          *(undefined4 *)(param_1 + 0x390) = 0;
        }
      }
      else if (*(int *)(param_1 + 0x3b8) == 6 && 4.0 < *(float *)(param_1 + 0x390)) {
        for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
          thunk_FUN_0042ddac(*(void **)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4
                                       ),0);
          thunk_FUN_0042de30(*(void **)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4
                                       ),0);
        }
        *(undefined4 *)(param_1 + 0x21c) = 0;
        *(undefined4 *)(param_1 + 0x220) = 0;
        *(undefined4 *)(param_1 + 0x224) = 0;
        *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x22c) = 0;
        *(undefined4 *)(param_1 + 0x230) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x240) = 0;
        *(undefined4 *)(param_1 + 0x244) = 0x40c00000;
        *(undefined4 *)(param_1 + 0x248) = 0;
        *(undefined4 *)(param_1 + 0x24c) = 0;
        *(undefined4 *)(param_1 + 0x250) = 0x40c00000;
        *(undefined4 *)(param_1 + 0x254) = 0;
        *(undefined4 *)(param_1 + 0x260) = 0;
        *(undefined4 *)(param_1 + 0x264) = 0;
        *(undefined4 *)(param_1 + 600) = 0;
        *(undefined4 *)(param_1 + 0x25c) = 0;
        *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x370) = 0;
        *(undefined4 *)(param_1 + 0x374) = 0;
        *(undefined4 *)(param_1 + 0x378) = 0;
        *(undefined4 *)(param_1 + 0x234) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x238) = 0xbf800000;
        *(undefined4 *)(param_1 + 0x23c) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x37c) = 0;
        *(undefined4 *)(param_1 + 0x380) = 0;
        *(undefined4 *)(param_1 + 900) = 0;
        *(undefined4 *)(param_1 + 0x390) = 0;
        *(undefined4 *)(param_1 + 0x394) = 0x3f800000;
        *(undefined1 *)(param_1 + 0x398) = 0;
        *(undefined1 *)(param_1 + 0x399) = 0;
        *(undefined1 *)(param_1 + 0x39a) = 0;
        *(undefined1 *)(param_1 + 0x3a4) = 0;
        *(undefined1 *)(param_1 + 0x3a5) = 0;
        *(undefined1 *)(param_1 + 0x3a6) = 0;
        *(undefined1 *)(param_1 + 0x3a7) = 0;
        *(undefined4 *)(param_1 + 0x3ac) = 0;
        *(undefined4 *)(param_1 + 0x3b8) = 0;
        *(undefined4 *)(param_1 + 0x3bc) = 0;
        *(undefined4 *)(param_1 + 0x39c) = 0;
        *(undefined4 *)(param_1 + 0x3a0) = 0xbf800000;
        *(undefined4 *)(param_1 + 0x3b0) = 0;
        *(undefined4 *)(param_1 + 0x3b4) = 0;
        *(undefined4 *)(param_1 + 0x3e0) = 0x43960000;
        *(undefined4 *)(param_1 + 0x3d8) = 0;
        *(undefined4 *)(param_1 + 0x3dc) = 0;
        *(undefined4 *)(param_1 + 0x400) = 0x40800000;
        *(undefined4 *)(param_1 + 0x40c) = 0;
        *(undefined1 *)(param_1 + 0x414) = 0;
        *(undefined4 *)(param_1 + 0x418) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x26c) = 1;
      }
    }
    else {
      thunk_FUN_00408716(*(void **)(param_1 + 0xc0),7);
      *(undefined4 *)(param_1 + 0x390) = 0;
      *(undefined4 *)(param_1 + 0x3b8) = 3;
      if (*(int *)(param_1 + 0x3dc) < *(int *)(param_1 + 0x3d8)) {
        for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
          thunk_FUN_00431118(*(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4))
          ;
          thunk_FUN_0042ddac(*(void **)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4
                                       ),1);
          thunk_FUN_0042de30(*(void **)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4
                                       ),1);
        }
        for (local_8 = 3; local_8 < 6; local_8 = local_8 + 1) {
          thunk_FUN_00430e6d(*(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4))
          ;
        }
      }
      else if (*(int *)(param_1 + 0x3d8) < *(int *)(param_1 + 0x3dc)) {
        for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
          thunk_FUN_00430e6d(*(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4))
          ;
        }
        for (local_8 = 3; local_8 < 6; local_8 = local_8 + 1) {
          thunk_FUN_00431118(*(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4))
          ;
          thunk_FUN_0042ddac(*(void **)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4
                                       ),1);
          thunk_FUN_0042de30(*(void **)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4
                                       ),1);
        }
      }
      else {
        for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
          thunk_FUN_0043030b(*(int *)(param_1 + 0xd8 + *(int *)(param_1 + 0x3c0 + local_8 * 4) * 4))
          ;
        }
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x3a0) = 0;
    *(undefined4 *)(param_1 + 0x39c) = 0;
    *(undefined4 *)(param_1 + 0x390) = 0;
    *(undefined4 *)(param_1 + 0x3b8) = 1;
  }
  return;
}

