// Game::Create @ 00401803  size=499

bool __thiscall Game::Create(Game *this,void *hinst,int nCmdShow)

{
  bool bVar1;
  ATOM AVar2;
  HWND pHVar3;
  DWORD DVar4;
  BOOL BVar5;
  WNDCLASSA local_34;
  int local_c;
  int local_8;
  
  local_34.style = 3;
  local_34.lpfnWndProc = (WNDPROC)&LAB_0040128a;
  local_34.cbClsExtra = 0;
  local_34.cbWndExtra = 4;
  local_34.hInstance = hinst;
  local_34.hIcon = (HICON)0x0;
  local_34.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  local_34.hbrBackground = GetStockObject(4);
  local_34.lpszMenuName = (LPCSTR)0x0;
  local_34.lpszClassName = s_YnSoft_00452d4c;
  AVar2 = RegisterClassA(&local_34);
  if (AVar2 == 0) {
    MessageBoxA((HWND)0x0,&DAT_00452d5c,&DAT_00457c98,0);
    bVar1 = false;
  }
  else {
    local_c = GetSystemMetrics(0);
    local_8 = GetSystemMetrics(1);
    if (this->windowed == '\0') {
      pHVar3 = CreateWindowExA(0,s_YnSoft_00452d4c,s_YnSoft_00452d54,0x90000000,0,0,local_c,local_8,
                               (HWND)0x0,(HMENU)0x0,hinst,(LPVOID)0x0);
      this->hwnd = pHVar3;
    }
    else {
      pHVar3 = CreateWindowExA(0,s_YnSoft_00452d4c,s_YnSoft_00452d54,0xc80000,0x32,0x32,0x280,0x1e0,
                               (HWND)0x0,(HMENU)0x0,hinst,(LPVOID)0x0);
      this->hwnd = pHVar3;
    }
    if (this->hwnd == (void *)0x0) {
      MessageBoxA((HWND)0x0,&DAT_00452d7c,&DAT_00457c9c,0);
      bVar1 = false;
    }
    else {
      ShowWindow(this->hwnd,nCmdShow);
      UpdateWindow(this->hwnd);
      bVar1 = InitDDraw(this,this->hwnd);
      if (bVar1) {
        bVar1 = InitD3D(this);
        if (bVar1) {
          DVar4 = timeGetTime();
          srand(DVar4);
          BVar5 = QueryPerformanceFrequency((LARGE_INTEGER *)&this->perfFreq);
          if (BVar5 == 0) {
            DVar4 = timeGetTime();
            *(DWORD *)&this->lastTime = DVar4;
            *(undefined4 *)((int)&this->lastTime + 4) = 0;
            this->secsPerTick = 0.001;
          }
          else {
            this->usePerfCounter = '\x01';
            QueryPerformanceCounter((LARGE_INTEGER *)&this->lastTime);
            this->secsPerTick = 1.0 / (float)this->perfFreq;
          }
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = false;
      }
    }
  }
  return bVar1;
}

