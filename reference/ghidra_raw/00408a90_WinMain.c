// WinMain @ 00408a90  size=489

WPARAM WinMain(HINSTANCE param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 *local_44;
  tagMSG local_34;
  undefined4 *local_18;
  BOOL local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044cc1b;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  piVar1 = (int *)_fopen(s_WAV_fly_wav_004531fc,&DAT_004531f8);
  if (piVar1 == (int *)0x0) {
    MessageBoxA((HWND)0x0,&DAT_00453214,s_basket_exe_00453208,0);
    FUN_00434b80(0);
  }
  _fclose(piVar1);
  piVar1 = (int *)_fopen(s_basket_mion_osm_00453284,&DAT_00453280);
  if (piVar1 == (int *)0x0) {
    MessageBoxA((HWND)0x0,&DAT_004532a0,s_basket_exe_00453294,0);
    FUN_00434b80(0);
  }
  _fclose(piVar1);
  puVar2 = (undefined4 *)operator_new(0x420);
  local_8 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    local_44 = (undefined4 *)0x0;
  }
  else {
    local_44 = CGame_ctor(puVar2);
  }
  local_8 = 0xffffffff;
  local_18 = local_44;
  uVar3 = CApp_Create(local_44,param_1,param_4);
  if ((uVar3 & 0xff) == 0) {
    CApp_Cleanup((int)local_18);
    local_34.wParam = 0;
  }
  else {
    CGame_InitGame(local_18);
    ShowCursor(0);
    PeekMessageA(&local_34,(HWND)0x0,0,0,0);
    while (local_34.message != 0x12 && *(char *)(local_18 + 0x2f) == '\0') {
      local_14 = PeekMessageA(&local_34,(HWND)0x0,0,0,1);
      if (local_14 == 0) {
        thunk_FUN_00403017((int)local_18);
        thunk_FUN_00403089((int)local_18);
        CGame_Frame(local_18);
        local_18[0x2d] = DAT_004581dc;
        local_18[0x2e] = DAT_004581d8;
      }
      else {
        TranslateMessage(&local_34);
        DispatchMessageA(&local_34);
      }
    }
    CGame_ShutdownGame((int)local_18);
    CApp_Cleanup((int)local_18);
    ShowCursor(1);
  }
  *unaff_FS_OFFSET = local_10;
  return local_34.wParam;
}

