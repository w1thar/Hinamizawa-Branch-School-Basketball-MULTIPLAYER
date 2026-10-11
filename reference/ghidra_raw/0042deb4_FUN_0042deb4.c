// FUN_0042deb4 @ 0042deb4  size=132

void __thiscall FUN_0042deb4(void *this,int param_1)

{
  float fVar1;
  undefined4 local_c;
  
  fVar1 = *(float *)(*(int *)(*(int *)((int)this + 4) + 0x28) + 0x28);
  for (local_c = 0; local_c < *(int *)(*(int *)(*(int *)((int)this + 4) + 0x28) + 0x24);
      local_c = local_c + 1) {
    *(float *)(*(int *)(*(int *)((int)this + 4) + 0x24) + 0x1c +
              *(int *)(*(int *)(*(int *)(*(int *)((int)this + 4) + 0x28) + 0x2c) + local_c * 0xc) *
              0x20) =
         *(float *)(*(int *)(*(int *)(*(int *)((int)this + 4) + 0x28) + 0x2c) + 4 + local_c * 0xc) +
         (float)param_1 * fVar1;
  }
  return;
}

