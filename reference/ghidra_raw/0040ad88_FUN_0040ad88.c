// FUN_0040ad88 @ 0040ad88  size=2224

void __fastcall FUN_0040ad88(int param_1)

{
  undefined4 *puVar1;
  undefined1 local_54 [12];
  float local_48 [16];
  uint local_8;
  
  thunk_FUN_00403880(local_48);
  for (local_8 = 0; local_8 < *(uint *)(param_1 + 0x2c); local_8 = local_8 + 1) {
    puVar1 = thunk_FUN_0040c470(local_54,(float *)(*(int *)(param_1 + 0x20) + 0x84 + local_8 * 0xa8)
                               );
    thunk_FUN_0040c4b0(local_48,puVar1);
    thunk_FUN_004077a7((float *)(*(int *)(param_1 + 0x20) + 4 + local_8 * 0xa8),
                       *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xa4 + local_8 * 0xa8));
    thunk_FUN_004038d0((undefined4 *)(*(int *)(param_1 + 0x20) + 4 + local_8 * 0xa8),(int)local_48,
                       *(int *)(param_1 + 0x20) + 4 + local_8 * 0xa8);
    thunk_FUN_004076f2(local_48,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x9c + local_8 * 0xa8));
    thunk_FUN_004038d0((undefined4 *)(*(int *)(param_1 + 0x20) + 4 + local_8 * 0xa8),
                       *(int *)(param_1 + 0x20) + 4 + local_8 * 0xa8,(int)local_48);
    thunk_FUN_0040774d(local_48,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0xa0 + local_8 * 0xa8));
    thunk_FUN_004038d0((undefined4 *)(*(int *)(param_1 + 0x20) + 4 + local_8 * 0xa8),
                       *(int *)(param_1 + 0x20) + 4 + local_8 * 0xa8,(int)local_48);
    thunk_FUN_0040c4b0(local_48,(undefined4 *)(*(int *)(param_1 + 0x20) + 0x90 + local_8 * 0xa8));
    thunk_FUN_004038d0((undefined4 *)(*(int *)(param_1 + 0x20) + 4 + local_8 * 0xa8),
                       *(int *)(param_1 + 0x20) + 4 + local_8 * 0xa8,(int)local_48);
    thunk_FUN_0040c4b0(local_48,(undefined4 *)(*(int *)(param_1 + 0x20) + 0x84 + local_8 * 0xa8));
    thunk_FUN_004038d0((undefined4 *)(*(int *)(param_1 + 0x20) + 4 + local_8 * 0xa8),
                       *(int *)(param_1 + 0x20) + 4 + local_8 * 0xa8,(int)local_48);
    thunk_FUN_004077a7((float *)(*(int *)(param_1 + 0x20) + 0x44 + local_8 * 0xa8),
                       *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xa4 + local_8 * 0xa8));
    thunk_FUN_004076f2(local_48,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x9c + local_8 * 0xa8));
    thunk_FUN_004038d0((undefined4 *)(*(int *)(param_1 + 0x20) + 0x44 + local_8 * 0xa8),
                       *(int *)(param_1 + 0x20) + 0x44 + local_8 * 0xa8,(int)local_48);
    thunk_FUN_0040774d(local_48,*(undefined4 *)(*(int *)(param_1 + 0x20) + 0xa0 + local_8 * 0xa8));
    thunk_FUN_004038d0((undefined4 *)(*(int *)(param_1 + 0x20) + 0x44 + local_8 * 0xa8),
                       *(int *)(param_1 + 0x20) + 0x44 + local_8 * 0xa8,(int)local_48);
  }
  for (local_8 = 0; local_8 < *(uint *)(param_1 + 0x2c); local_8 = local_8 + 1) {
    if (-1 < *(int *)(*(int *)(param_1 + 0x20) + local_8 * 0xa8)) {
      thunk_FUN_004038d0((undefined4 *)(*(int *)(param_1 + 0x20) + 4 + local_8 * 0xa8),
                         *(int *)(param_1 + 0x20) + 4 + local_8 * 0xa8,
                         *(int *)(param_1 + 0x20) + 4 +
                         *(int *)(*(int *)(param_1 + 0x20) + local_8 * 0xa8) * 0xa8);
      thunk_FUN_004038d0((undefined4 *)(*(int *)(param_1 + 0x20) + 0x44 + local_8 * 0xa8),
                         *(int *)(param_1 + 0x20) + 0x44 + local_8 * 0xa8,
                         *(int *)(param_1 + 0x20) + 0x44 +
                         *(int *)(*(int *)(param_1 + 0x20) + local_8 * 0xa8) * 0xa8);
    }
  }
  for (local_8 = 0; local_8 < *(uint *)(param_1 + 8); local_8 = local_8 + 1) {
    *(float *)(*(int *)(param_1 + 0x24) + local_8 * 0x20) =
         *(float *)(*(int *)(param_1 + 0x20) + 0x24 +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8) *
         *(float *)(*(int *)(param_1 + 0x1c) + 8 + local_8 * 0x1c) +
         *(float *)(*(int *)(param_1 + 0x20) + 0x14 +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8) *
         *(float *)(*(int *)(param_1 + 0x1c) + 4 + local_8 * 0x1c) +
         *(float *)(*(int *)(param_1 + 0x20) + 4 +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8) *
         *(float *)(*(int *)(param_1 + 0x1c) + local_8 * 0x1c) +
         *(float *)(*(int *)(param_1 + 0x20) + 0x34 +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8);
    *(float *)(*(int *)(param_1 + 0x24) + 4 + local_8 * 0x20) =
         *(float *)(*(int *)(param_1 + 0x20) + 0x28 +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8) *
         *(float *)(*(int *)(param_1 + 0x1c) + 8 + local_8 * 0x1c) +
         *(float *)(*(int *)(param_1 + 0x20) + 0x18 +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8) *
         *(float *)(*(int *)(param_1 + 0x1c) + 4 + local_8 * 0x1c) +
         *(float *)(*(int *)(param_1 + 0x20) + 8 +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8) *
         *(float *)(*(int *)(param_1 + 0x1c) + local_8 * 0x1c) +
         *(float *)(*(int *)(param_1 + 0x20) + 0x38 +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8);
    *(float *)(*(int *)(param_1 + 0x24) + 8 + local_8 * 0x20) =
         *(float *)(*(int *)(param_1 + 0x20) + 0x2c +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8) *
         *(float *)(*(int *)(param_1 + 0x1c) + 8 + local_8 * 0x1c) +
         *(float *)(*(int *)(param_1 + 0x20) + 0x1c +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8) *
         *(float *)(*(int *)(param_1 + 0x1c) + 4 + local_8 * 0x1c) +
         *(float *)(*(int *)(param_1 + 0x20) + 0xc +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8) *
         *(float *)(*(int *)(param_1 + 0x1c) + local_8 * 0x1c) +
         *(float *)(*(int *)(param_1 + 0x20) + 0x3c +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8);
    *(float *)(*(int *)(param_1 + 0x24) + 0xc + local_8 * 0x20) =
         *(float *)(*(int *)(param_1 + 0x20) + 100 +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8) *
         *(float *)(*(int *)(param_1 + 0x1c) + 0x14 + local_8 * 0x1c) +
         *(float *)(*(int *)(param_1 + 0x20) + 0x54 +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8) *
         *(float *)(*(int *)(param_1 + 0x1c) + 0x10 + local_8 * 0x1c) +
         *(float *)(*(int *)(param_1 + 0x20) + 0x44 +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8) *
         *(float *)(*(int *)(param_1 + 0x1c) + 0xc + local_8 * 0x1c) +
         *(float *)(*(int *)(param_1 + 0x20) + 0x74 +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8);
    *(float *)(*(int *)(param_1 + 0x24) + 0x10 + local_8 * 0x20) =
         *(float *)(*(int *)(param_1 + 0x20) + 0x68 +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8) *
         *(float *)(*(int *)(param_1 + 0x1c) + 0x14 + local_8 * 0x1c) +
         *(float *)(*(int *)(param_1 + 0x20) + 0x58 +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8) *
         *(float *)(*(int *)(param_1 + 0x1c) + 0x10 + local_8 * 0x1c) +
         *(float *)(*(int *)(param_1 + 0x20) + 0x48 +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8) *
         *(float *)(*(int *)(param_1 + 0x1c) + 0xc + local_8 * 0x1c) +
         *(float *)(*(int *)(param_1 + 0x20) + 0x78 +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8);
    *(float *)(*(int *)(param_1 + 0x24) + 0x14 + local_8 * 0x20) =
         *(float *)(*(int *)(param_1 + 0x20) + 0x6c +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8) *
         *(float *)(*(int *)(param_1 + 0x1c) + 0x14 + local_8 * 0x1c) +
         *(float *)(*(int *)(param_1 + 0x20) + 0x5c +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8) *
         *(float *)(*(int *)(param_1 + 0x1c) + 0x10 + local_8 * 0x1c) +
         *(float *)(*(int *)(param_1 + 0x20) + 0x4c +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8) *
         *(float *)(*(int *)(param_1 + 0x1c) + 0xc + local_8 * 0x1c) +
         *(float *)(*(int *)(param_1 + 0x20) + 0x7c +
                   *(int *)(*(int *)(param_1 + 0x1c) + 0x18 + local_8 * 0x1c) * 0xa8);
  }
  return;
}

