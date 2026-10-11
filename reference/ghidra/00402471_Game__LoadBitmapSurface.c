// Game::LoadBitmapSurface @ 00402471  size=567

bool __thiscall Game::LoadBitmapSurface(Game *this,void **surf,char *file)

{
  bool bVar1;
  HANDLE h;
  HDC hdc;
  void *local_c0;
  int *local_b0;
  HDC local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [4];
  void *local_9c;
  int local_98;
  undefined4 local_88;
  undefined4 local_84;
  void *local_80;
  void *local_7c;
  void *local_78;
  undefined4 local_20;
  HGDIOBJ local_c;
  int local_8;
  
  h = LoadImageA((HINSTANCE)0x0,file,0,0,0,0x2010);
  if (h == (HANDLE)0x0) {
    bVar1 = false;
  }
  else {
    _memset(&local_88,0,0x7c);
    local_88 = 0x7c;
    local_84 = 7;
    local_20 = 0x40;
    GetObjectA(h,0x18,local_a0);
    if ((int)local_9c < 0x281) {
      local_c0 = local_9c;
    }
    else {
      local_c0 = (void *)0x280;
    }
    local_7c = local_c0;
    local_80 = (void *)FUN_004337e0(local_98);
    local_8 = (**(code **)(*(int *)this->ddraw + 0x18))(this->ddraw,&local_88,&local_b0,0);
    if (local_8 == 0) {
      hdc = CreateCompatibleDC((HDC)0x0);
      local_c = SelectObject(hdc,h);
      (**(code **)(*local_b0 + 0x44))(local_b0,&local_ac);
      BitBlt(local_ac,0,0,(int)local_7c,(int)local_80,hdc,0,0,0xcc0020);
      (**(code **)(*local_b0 + 0x68))(local_b0,local_ac);
      SelectObject(hdc,local_c);
      DeleteDC(hdc);
      *surf = local_b0;
      surf[1] = file;
      local_a8 = 0;
      local_a4 = 0;
      (**(code **)(*(int *)*surf + 0x74))(*surf,8,&local_a8);
      _memset(&local_88,0,0x6c);
      local_88 = 0x6c;
      (**(code **)(*(int *)*surf + 0x58))(*surf,&local_88);
      surf[4] = local_78;
      surf[2] = local_7c;
      surf[3] = local_80;
      bVar1 = true;
    }
    else {
      DeleteObject(h);
      bVar1 = false;
    }
  }
  return bVar1;
}

