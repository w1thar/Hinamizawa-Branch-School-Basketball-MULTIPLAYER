// WinMain @ 00408a90  size=489

int WinMain(void *hinst,void *hprev,char *cmdline,int nCmdShow)

{
  bool bVar1;
  int *piVar2;
  Game *this;
  undefined4 *unaff_FS_OFFSET;
  Game *local_44;
  tagMSG local_34;
  Game *local_18;
  BOOL local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044cc1b;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  piVar2 = (int *)fopen(s_WAV_fly_wav_004531fc,&DAT_004531f8);
  if (piVar2 == (int *)0x0) {
    MessageBoxA((HWND)0x0,&DAT_00453214,s_basket_exe_00453208,0);
    FUN_00434b80(0);
  }
  fclose(piVar2);
  piVar2 = (int *)fopen(s_basket_mion_osm_00453284,&DAT_00453280);
  if (piVar2 == (int *)0x0) {
    MessageBoxA((HWND)0x0,&DAT_004532a0,s_basket_exe_00453294,0);
    FUN_00434b80(0);
  }
  fclose(piVar2);
  this = operator_new(0x420);
  local_8 = 0;
  if (this == (Game *)0x0) {
    local_44 = (Game *)0x0;
  }
  else {
    local_44 = Game::Ctor(this);
  }
  local_8 = 0xffffffff;
  local_18 = local_44;
  bVar1 = Game::Create(local_44,hinst,nCmdShow);
  if (bVar1) {
    Game::InitGame(local_18);
    ShowCursor(0);
    PeekMessageA(&local_34,(HWND)0x0,0,0,0);
    while (local_34.message != 0x12 && local_18->quit == '\0') {
      local_14 = PeekMessageA(&local_34,(HWND)0x0,0,0,1);
      if (local_14 == 0) {
        Game::UpdateTimer(local_18);
        Game::UpdateInput(local_18);
        Game::Frame(local_18);
        local_18->mouseX = DAT_004581dc;
        local_18->mouseY = DAT_004581d8;
      }
      else {
        TranslateMessage(&local_34);
        DispatchMessageA(&local_34);
      }
    }
    Game::ShutdownGame(local_18);
    Game::Cleanup(local_18);
    ShowCursor(1);
  }
  else {
    Game::Cleanup(local_18);
    local_34.wParam = 0;
  }
  *unaff_FS_OFFSET = local_10;
  return local_34.wParam;
}

