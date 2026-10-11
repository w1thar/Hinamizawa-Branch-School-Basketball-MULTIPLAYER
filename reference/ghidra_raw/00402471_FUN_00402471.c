// FUN_00402471 @ 00402471  size=567

uint __thiscall FUN_00402471(void *this,undefined4 *param_1,LPCSTR param_2)

{
  HANDLE h;
  uint uVar1;
  HDC hdc;
  int local_c0;
  int *local_b0;
  HDC local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [4];
  int local_9c;
  int local_98;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_20;
  HGDIOBJ local_c;
  int local_8;
  
  h = LoadImageA((HINSTANCE)0x0,param_2,0,0,0,0x2010);
  if (h == (HANDLE)0x0) {
    uVar1 = 0;
  }
  else {
    _memset(&local_88,0,0x7c);
    local_88 = 0x7c;
    local_84 = 7;
    local_20 = 0x40;
    GetObjectA(h,0x18,local_a0);
    if (local_9c < 0x281) {
      local_c0 = local_9c;
    }
    else {
      local_c0 = 0x280;
    }
    local_7c = local_c0;
    local_80 = FUN_004337e0(local_98);
    local_8 = (**(code **)(**(int **)((int)this + 0x34) + 0x18))
                        (*(undefined4 *)((int)this + 0x34),&local_88,&local_b0,0);
    if (local_8 == 0) {
      hdc = CreateCompatibleDC((HDC)0x0);
      local_c = SelectObject(hdc,h);
      (**(code **)(*local_b0 + 0x44))(local_b0,&local_ac);
      BitBlt(local_ac,0,0,local_7c,local_80,hdc,0,0,0xcc0020);
      (**(code **)(*local_b0 + 0x68))(local_b0,local_ac);
      SelectObject(hdc,local_c);
      DeleteDC(hdc);
      *param_1 = local_b0;
      param_1[1] = param_2;
      local_a8 = 0;
      local_a4 = 0;
      (**(code **)(*(int *)*param_1 + 0x74))(*param_1,8,&local_a8);
      _memset(&local_88,0,0x6c);
      local_88 = 0x6c;
      (**(code **)(*(int *)*param_1 + 0x58))(*param_1,&local_88);
      param_1[4] = local_78;
      param_1[2] = local_7c;
      param_1[3] = local_80;
      uVar1 = CONCAT31((int3)((uint)local_80 >> 8),1);
    }
    else {
      uVar1 = DeleteObject(h);
      uVar1 = uVar1 & 0xffffff00;
    }
  }
  return uVar1;
}

