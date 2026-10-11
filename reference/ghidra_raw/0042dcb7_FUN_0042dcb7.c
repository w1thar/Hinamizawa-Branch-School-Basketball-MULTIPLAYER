// FUN_0042dcb7 @ 0042dcb7  size=114

void __thiscall
FUN_0042dcb7(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x158) = param_1;
  *(undefined4 *)((int)this + 0x15c) = param_2;
  *(undefined4 *)((int)this + 0x160) = param_3;
  *(undefined4 *)((int)this + 0x164) = param_4;
  iVar1 = *(int *)(*(int *)((int)this + 4) + 0x20);
  *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)((int)this + 0x158);
  *(undefined4 *)(iVar1 + 0x94) = *(undefined4 *)((int)this + 0x15c);
  *(undefined4 *)(iVar1 + 0x98) = *(undefined4 *)((int)this + 0x160);
  *(undefined4 *)(*(int *)(*(int *)((int)this + 4) + 0x20) + 0xa0) =
       *(undefined4 *)((int)this + 0x164);
  return;
}

