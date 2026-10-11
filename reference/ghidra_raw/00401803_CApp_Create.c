// CApp_Create @ 00401803  size=499

uint __thiscall CApp_Create(void *this,HINSTANCE param_1,int param_2)

{
  ATOM AVar1;
  uint uVar2;
  HWND pHVar3;
  DWORD DVar4;
  BOOL BVar5;
  void *pvVar6;
  WNDCLASSA local_34;
  int local_c;
  int local_8;
  
  local_34.style = 3;
  local_34.lpfnWndProc = (WNDPROC)&LAB_0040128a;
  local_34.cbClsExtra = 0;
  local_34.cbWndExtra = 4;
  local_34.hInstance = param_1;
  local_34.hIcon = (HICON)0x0;
  local_34.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_34.hbrBackground = GetStockObject(4);
  local_34.lpszMenuName = (LPCSTR)0x0;
  local_34.lpszClassName = s_YnSoft_00452d4c;
  AVar1 = RegisterClassA(&local_34);
  if (AVar1 == 0) {
    uVar2 = MessageBoxA((HWND)0x0,&DAT_00452d5c,&DAT_00457c98,0);
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    local_c = GetSystemMetrics(0);
    local_8 = GetSystemMetrics(1);
    if (*(char *)((int)this + 0x2c) == '\0') {
      pHVar3 = CreateWindowExA(0,s_YnSoft_00452d4c,s_YnSoft_00452d54,0x90000000,0,0,local_c,local_8,
                               (HWND)0x0,(HMENU)0x0,param_1,(LPVOID)0x0);
      *(HWND *)((int)this + 0x30) = pHVar3;
    }
    else {
      pHVar3 = CreateWindowExA(0,s_YnSoft_00452d4c,s_YnSoft_00452d54,0xc80000,0x32,0x32,0x280,0x1e0,
                               (HWND)0x0,(HMENU)0x0,param_1,(LPVOID)0x0);
      *(HWND *)((int)this + 0x30) = pHVar3;
    }
    if (*(int *)((int)this + 0x30) == 0) {
      uVar2 = MessageBoxA((HWND)0x0,&DAT_00452d7c,&DAT_00457c9c,0);
      uVar2 = uVar2 & 0xffffff00;
    }
    else {
      ShowWindow(*(HWND *)((int)this + 0x30),param_2);
      UpdateWindow(*(HWND *)((int)this + 0x30));
      uVar2 = thunk_FUN_004019f6(this,*(undefined4 *)((int)this + 0x30));
      if ((uVar2 & 0xff) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = thunk_FUN_00401daa((int)this);
        if ((uVar2 & 0xff) == 0) {
          uVar2 = 0;
        }
        else {
          DVar4 = timeGetTime();
          FUN_00433400(DVar4);
          BVar5 = QueryPerformanceFrequency((LARGE_INTEGER *)((int)this + 0x10));
          if (BVar5 == 0) {
            DVar4 = timeGetTime();
            *(DWORD *)((int)this + 0x20) = DVar4;
            *(undefined4 *)((int)this + 0x24) = 0;
            *(undefined4 *)((int)this + 0x28) = 0x3a83126f;
          }
          else {
            *(undefined1 *)((int)this + 0x18) = 1;
            pvVar6 = (void *)QueryPerformanceCounter((LARGE_INTEGER *)((int)this + 0x20));
            *(float *)((int)this + 0x28) = 1.0 / (float)*(longlong *)((int)this + 0x10);
            this = pvVar6;
          }
          uVar2 = CONCAT31((int3)((uint)this >> 8),1);
        }
      }
    }
  }
  return uVar2;
}

