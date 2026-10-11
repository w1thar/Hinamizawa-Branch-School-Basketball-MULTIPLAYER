// Game::InitDDraw @ 004019f6  size=948

bool __thiscall Game::InitDDraw(Game *this,void *hwnd)

{
  bool bVar1;
  undefined4 local_94 [4];
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_18;
  
  local_84 = DirectDrawCreateEx(0,&this->ddraw,&DAT_0044fee8,0);
  if (local_84 == 0) {
    if (this->windowed == '\0') {
      local_84 = (**(code **)(*(int *)this->ddraw + 0x50))(this->ddraw,hwnd,0x11);
    }
    else {
      local_84 = (**(code **)(*(int *)this->ddraw + 0x50))(this->ddraw,hwnd,8);
    }
    if (local_84 == 0) {
      if ((this->windowed == '\0') &&
         (local_84 = (**(code **)(*(int *)this->ddraw + 0x54))(this->ddraw,0x280,0x1e0,0x10,0,0),
         local_84 != 0)) {
        MessageBoxA((HWND)0x0,&DAT_00452dc8,&DAT_00457ca8,0);
        bVar1 = false;
      }
      else {
        if (this->windowed == '\0') {
          _memset(&local_80,0,0x7c);
          local_80 = 0x7c;
          local_7c = 0x21;
          local_18 = 0x2218;
          local_6c = 1;
          local_84 = (**(code **)(*(int *)this->ddraw + 0x18))
                               (this->ddraw,&local_80,&this->primary,0);
          if (local_84 != 0) {
            MessageBoxA((HWND)0x0,&DAT_00452e3c,&DAT_00457cbc,0);
            return false;
          }
          _memset(local_94,0,0x10);
          local_94[0] = 4;
          local_84 = (*this->primary->lpVtbl->GetAttachedSurface)
                               (this->primary,local_94,&this->backbuf);
          if (local_84 != 0) {
            MessageBoxA((HWND)0x0,&DAT_00452e50,&DAT_00457cc0,0);
            return false;
          }
        }
        else {
          _memset(&local_80,0,0x7c);
          local_80 = 0x7c;
          local_7c = 1;
          local_18 = 0x200;
          local_84 = (**(code **)(*(int *)this->ddraw + 0x18))
                               (this->ddraw,&local_80,&this->primary,0);
          if (local_84 != 0) {
            MessageBoxA((HWND)0x0,&DAT_00452de8,&DAT_00457cac,0);
            return false;
          }
          local_84 = (**(code **)(*(int *)this->ddraw + 0x10))(this->ddraw,0,&this->clipper,0);
          if (local_84 != 0) {
            MessageBoxA((HWND)0x0,&DAT_00452dfc,&DAT_00457cb0,0);
            return false;
          }
          (**(code **)(*(int *)this->clipper + 0x20))(this->clipper,0,hwnd);
          local_84 = (*this->primary->lpVtbl->SetClipper)(this->primary,this->clipper);
          if (local_84 != 0) {
            MessageBoxA((HWND)0x0,&DAT_00452e10,&DAT_00457cb4,0);
            return false;
          }
          _memset(&local_80,0,0x7c);
          local_80 = 0x7c;
          local_7c = 7;
          local_18 = 0x2040;
          local_74 = 0x280;
          local_78 = 0x1e0;
          local_84 = (**(code **)(*(int *)this->ddraw + 0x18))
                               (this->ddraw,&local_80,&this->backbuf,0);
          if (local_84 != 0) {
            MessageBoxA((HWND)0x0,&DAT_00452e28,&DAT_00457cb8,0);
            return false;
          }
        }
        bVar1 = true;
      }
    }
    else {
      MessageBoxA((HWND)0x0,&DAT_00452dac,&DAT_00457ca4,0);
      bVar1 = false;
    }
  }
  else {
    MessageBoxA((HWND)0x0,&DAT_00452d94,&DAT_00457ca0,0);
    bVar1 = false;
  }
  return bVar1;
}

