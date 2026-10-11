// FUN_004026a8 @ 004026a8  size=290

void __thiscall
FUN_004026a8(void *this,int param_1,int param_2,undefined4 *param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (0x280 < param_1 + (param_6 - param_4)) {
    param_6 = param_4 - (param_1 + -0x280);
  }
  if (0x1e0 < param_2 + (param_7 - param_5)) {
    param_7 = param_5 - (param_2 + -0x1e0);
  }
  if (param_1 < 0) {
    param_4 = param_4 - param_1;
    param_1 = 0;
  }
  if (param_2 < 0) {
    param_5 = param_5 - param_2;
    param_2 = 0;
  }
  if ((param_4 <= param_6) && (param_5 <= param_7)) {
    local_14 = param_4;
    local_10 = param_5;
    local_c = param_6;
    local_8 = param_7;
    iVar1 = (**(code **)(**(int **)((int)this + 0x44) + 0x1c))
                      (*(undefined4 *)((int)this + 0x44),param_1,param_2,*param_3,&local_14,0x11);
    if (iVar1 == -0x7789fe3e) {
      (**(code **)(**(int **)((int)this + 0x40) + 0x6c))(*(undefined4 *)((int)this + 0x40));
      (**(code **)(*(int *)*param_3 + 0x6c))(*param_3);
      thunk_FUN_00402471(this,param_3,(LPCSTR)param_3[1]);
    }
  }
  return;
}

