// FUN_0040da2f @ 0040da2f  size=517

undefined4 __thiscall FUN_0040da2f(void *this,int *param_1)

{
  HMENU__ *pHVar1;
  char *pcVar2;
  undefined1 local_50 [68];
  uint local_c;
  int local_8;
  
  (**(code **)(*param_1 + 0x44))(param_1,local_50);
  local_8 = *(int *)((int)this + 0x10);
  for (local_c = 0; local_c < *(uint *)((int)this + 0x14); local_c = local_c + 1) {
    if (*(int *)(*(int *)((int)this + 0x18) + 0x144 + local_c * 0x148) != 0) {
      pHVar1 = GetMenu((HWND__ *)(*(int *)((int)this + 0x18) + 0x44 + local_c * 0x148));
      (**(code **)(*param_1 + 0x8c))(param_1,0,pHVar1);
      pcVar2 = _strchr((char *)(*(int *)((int)this + 0x18) + 0x44 + local_c * 0x148),0x2e);
      pcVar2 = _strchr(pcVar2,0x74);
      if (pcVar2 != (char *)0x0) {
        (**(code **)(*param_1 + 0x94))(param_1,0,5,2);
        (**(code **)(*param_1 + 0x50))(param_1,0x1b,1);
        (**(code **)(*param_1 + 0x50))(param_1,0x13,5);
        (**(code **)(*param_1 + 0x50))(param_1,0x14,6);
      }
      if (*(float *)(*(int *)((int)this + 0x18) + 0xc + local_c * 0x148) < 1.0) {
        (**(code **)(*param_1 + 0x50))(param_1,0x1b,1);
        (**(code **)(*param_1 + 0x50))(param_1,0x13,5);
        (**(code **)(*param_1 + 0x50))(param_1,0x14,2);
      }
      (**(code **)(*param_1 + 0x40))(param_1,*(int *)((int)this + 0x18) + local_c * 0x148);
      (**(code **)(*param_1 + 0x68))
                (param_1,4,0x112,*(undefined4 *)((int)this + 8),*(undefined4 *)((int)this + 4),
                 local_8,*(undefined4 *)(*(int *)((int)this + 0x18) + 0x144 + local_c * 0x148),0);
      (**(code **)(*param_1 + 0x50))(param_1,0x1b,0);
      local_8 = local_8 + *(int *)(*(int *)((int)this + 0x18) + 0x144 + local_c * 0x148) * 2;
    }
  }
  (**(code **)(*param_1 + 0x40))(param_1,local_50);
  return 1;
}

