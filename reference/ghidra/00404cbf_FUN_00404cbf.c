// FUN_00404cbf @ 00404cbf  size=60

undefined4 __thiscall FUN_00404cbf(void *this,LPCSTR param_1)

{
  HANDLE pvVar1;
  undefined4 uVar2;
  
  pvVar1 = LoadImageA((HINSTANCE)0x0,param_1,0,0,0,0x2010);
  *(HANDLE *)((int)this + 0x70) = pvVar1;
  if (*(int *)((int)this + 0x70) == 0) {
    uVar2 = 0x887600ff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

