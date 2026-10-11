// FUN_00408211 @ 00408211  size=241

uint __thiscall FUN_00408211(void *this,undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int local_8;
  
  *(undefined4 *)((int)this + 8) = param_1;
  for (local_8 = 0; local_8 < 0xf; local_8 = local_8 + 1) {
    if (*(int *)((int)this + local_8 * 4 + 0x10) != 0) {
      (**(code **)(**(int **)((int)this + local_8 * 4 + 0x10) + 8))
                (*(undefined4 *)((int)this + local_8 * 4 + 0x10));
      *(undefined4 *)((int)this + local_8 * 4 + 0x10) = 0;
    }
  }
  if (*(int *)((int)this + 0xc) != 0) {
    (**(code **)(**(int **)((int)this + 0xc) + 8))(*(undefined4 *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  iVar1 = DirectSoundCreate(0,(int)this + 0xc,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)((int)this + 0xc) + 0x18))
                      (*(undefined4 *)((int)this + 0xc),*(undefined4 *)((int)this + 8),1);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = MessageBoxA((HWND)0x0,&DAT_00452fd8,&DAT_004581d4,0);
      uVar2 = uVar2 & 0xffffff00;
    }
  }
  else {
    uVar2 = MessageBoxA((HWND)0x0,&DAT_00452fc0,&DAT_004581d0,0);
    uVar2 = uVar2 & 0xffffff00;
  }
  return uVar2;
}

