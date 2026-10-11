// FUN_0040dc9b @ 0040dc9b  size=255

undefined4 __thiscall FUN_0040dc9b(void *this,int *param_1)

{
  HMENU__ *pHVar1;
  char *pcVar2;
  
  pHVar1 = GetMenu((HWND__ *)(*(int *)((int)this + 0x18) + 0x44));
  (**(code **)(*param_1 + 0x8c))(param_1,0,pHVar1);
  pcVar2 = _strchr((char *)(*(int *)((int)this + 0x18) + 0x44),0x2e);
  pcVar2 = _strchr(pcVar2,0x74);
  if (pcVar2 != (char *)0x0) {
    (**(code **)(*param_1 + 0x94))(param_1,0,5,2);
    (**(code **)(*param_1 + 0x50))(param_1,0x1b,1);
    (**(code **)(*param_1 + 0x50))(param_1,0x13,5);
    (**(code **)(*param_1 + 0x50))(param_1,0x14,6);
  }
  if (*(float *)(*(int *)((int)this + 0x18) + 0xc) < 1.0) {
    (**(code **)(*param_1 + 0x50))(param_1,0x1b,1);
    (**(code **)(*param_1 + 0x50))(param_1,0x13,5);
    (**(code **)(*param_1 + 0x50))(param_1,0x14,2);
  }
  (**(code **)(*param_1 + 0x40))(param_1,*(undefined4 *)((int)this + 0x18));
  return 1;
}

