// CGame_ctor @ 00408df0  size=188

undefined4 * __fastcall CGame_ctor(undefined4 *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044cc39;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  thunk_FUN_00401750(param_1);
  local_8 = 0;
  thunk_FUN_00408f50((int)(param_1 + 0x4d));
  thunk_FUN_00403880(param_1 + 0x67);
  thunk_FUN_00403880(param_1 + 0x77);
  thunk_FUN_00407fe0(param_1 + 0x87);
  thunk_FUN_00407fe0(param_1 + 0x8a);
  thunk_FUN_00407fe0(param_1 + 0x8d);
  thunk_FUN_00407fe0(param_1 + 0x90);
  thunk_FUN_00407fe0(param_1 + 0x93);
  *param_1 = &PTR_LAB_0044e0a8;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}

