// CPlayer_Render @ 0042cfab  size=387

void __thiscall CPlayer_Render(void *this,int *param_1)

{
  HMENU__ *pHVar1;
  undefined4 local_44 [16];
  
  thunk_FUN_00403880(local_44);
  *(undefined4 *)((int)this + 8) = 0x3f19999a;
  *(undefined4 *)((int)this + 0xc) = 0x3f19999a;
  *(undefined4 *)((int)this + 0x10) = 0x3f19999a;
  *(undefined4 *)((int)this + 0x18) = 0x3f666666;
  *(undefined4 *)((int)this + 0x1c) = 0x3f666666;
  *(undefined4 *)((int)this + 0x20) = 0x3f666666;
  (**(code **)(*param_1 + 0x40))(param_1,(int)this + 8);
  (**(code **)(*param_1 + 0x94))(param_1,0,5,2);
  (**(code **)(*param_1 + 0x50))(param_1,0x13,5);
  (**(code **)(*param_1 + 0x50))(param_1,0x14,6);
  pHVar1 = GetMenu((HWND__ *)((int)this + 0x50));
  (**(code **)(*param_1 + 0x8c))(param_1,0,pHVar1);
  thunk_FUN_0040b812(*(void **)((int)this + 4),param_1);
  (**(code **)(*param_1 + 0x94))(param_1,0,5,0);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  (**(code **)(*param_1 + 0x40))(param_1,(int)this + 8);
  (**(code **)(*param_1 + 0x2c))(param_1,1,&stack0x00000008);
  thunk_FUN_0040b812(*(void **)((int)this + 4),param_1);
  (**(code **)(*param_1 + 0x94))(param_1,0,5,2);
  thunk_FUN_00408040(local_44);
  (**(code **)(*param_1 + 0x2c))(param_1,1,local_44);
  return;
}

