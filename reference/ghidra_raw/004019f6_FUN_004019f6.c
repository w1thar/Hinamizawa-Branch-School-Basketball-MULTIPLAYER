// FUN_004019f6 @ 004019f6  size=948

uint __thiscall FUN_004019f6(void *this,undefined4 param_1)

{
  uint uVar1;
  undefined4 local_94 [4];
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_18;
  
  local_84 = DirectDrawCreateEx(0,(int)this + 0x34,&DAT_0044fee8,0);
  if (local_84 == 0) {
    if (*(char *)((int)this + 0x2c) == '\0') {
      local_84 = (**(code **)(**(int **)((int)this + 0x34) + 0x50))
                           (*(undefined4 *)((int)this + 0x34),param_1,0x11);
    }
    else {
      local_84 = (**(code **)(**(int **)((int)this + 0x34) + 0x50))
                           (*(undefined4 *)((int)this + 0x34),param_1,8);
    }
    if (local_84 == 0) {
      if ((*(char *)((int)this + 0x2c) == '\0') &&
         (local_84 = (**(code **)(**(int **)((int)this + 0x34) + 0x54))
                               (*(undefined4 *)((int)this + 0x34),0x280,0x1e0,0x10,0,0),
         local_84 != 0)) {
        uVar1 = MessageBoxA((HWND)0x0,&DAT_00452dc8,&DAT_00457ca8,0);
        uVar1 = uVar1 & 0xffffff00;
      }
      else {
        if (*(char *)((int)this + 0x2c) == '\0') {
          _memset(&local_80,0,0x7c);
          local_80 = 0x7c;
          local_7c = 0x21;
          local_18 = 0x2218;
          local_6c = 1;
          local_84 = (**(code **)(**(int **)((int)this + 0x34) + 0x18))
                               (*(undefined4 *)((int)this + 0x34),&local_80,(int)this + 0x40,0);
          if (local_84 != 0) {
            uVar1 = MessageBoxA((HWND)0x0,&DAT_00452e3c,&DAT_00457cbc,0);
            return uVar1 & 0xffffff00;
          }
          _memset(local_94,0,0x10);
          local_94[0] = 4;
          local_84 = (**(code **)(**(int **)((int)this + 0x40) + 0x30))
                               (*(undefined4 *)((int)this + 0x40),local_94,(int)this + 0x44);
          if (local_84 != 0) {
            uVar1 = MessageBoxA((HWND)0x0,&DAT_00452e50,&DAT_00457cc0,0);
            return uVar1 & 0xffffff00;
          }
        }
        else {
          _memset(&local_80,0,0x7c);
          local_80 = 0x7c;
          local_7c = 1;
          local_18 = 0x200;
          local_84 = (**(code **)(**(int **)((int)this + 0x34) + 0x18))
                               (*(undefined4 *)((int)this + 0x34),&local_80,(int)this + 0x40,0);
          if (local_84 != 0) {
            uVar1 = MessageBoxA((HWND)0x0,&DAT_00452de8,&DAT_00457cac,0);
            return uVar1 & 0xffffff00;
          }
          local_84 = (**(code **)(**(int **)((int)this + 0x34) + 0x10))
                               (*(undefined4 *)((int)this + 0x34),0,(int)this + 0x48,0);
          if (local_84 != 0) {
            uVar1 = MessageBoxA((HWND)0x0,&DAT_00452dfc,&DAT_00457cb0,0);
            return uVar1 & 0xffffff00;
          }
          (**(code **)(**(int **)((int)this + 0x48) + 0x20))
                    (*(undefined4 *)((int)this + 0x48),0,param_1);
          local_84 = (**(code **)(**(int **)((int)this + 0x40) + 0x70))
                               (*(undefined4 *)((int)this + 0x40),*(undefined4 *)((int)this + 0x48))
          ;
          if (local_84 != 0) {
            uVar1 = MessageBoxA((HWND)0x0,&DAT_00452e10,&DAT_00457cb4,0);
            return uVar1 & 0xffffff00;
          }
          _memset(&local_80,0,0x7c);
          local_80 = 0x7c;
          local_7c = 7;
          local_18 = 0x2040;
          local_74 = 0x280;
          local_78 = 0x1e0;
          local_84 = (**(code **)(**(int **)((int)this + 0x34) + 0x18))
                               (*(undefined4 *)((int)this + 0x34),&local_80,(int)this + 0x44,0);
          if (local_84 != 0) {
            uVar1 = MessageBoxA((HWND)0x0,&DAT_00452e28,&DAT_00457cb8,0);
            return uVar1 & 0xffffff00;
          }
        }
        uVar1 = 1;
      }
    }
    else {
      uVar1 = MessageBoxA((HWND)0x0,&DAT_00452dac,&DAT_00457ca4,0);
      uVar1 = uVar1 & 0xffffff00;
    }
  }
  else {
    uVar1 = MessageBoxA((HWND)0x0,&DAT_00452d94,&DAT_00457ca0,0);
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

