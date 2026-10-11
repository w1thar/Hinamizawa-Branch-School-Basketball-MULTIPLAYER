// FUN_0042dd29 @ 0042dd29  size=131

void __thiscall FUN_0042dd29(void *this,int param_1)

{
  float fVar1;
  undefined4 local_c;
  
  fVar1 = *(float *)(*(int *)(*(int *)((int)this + 4) + 0x28) + 4);
  for (local_c = 0; local_c < **(int **)(*(int *)((int)this + 4) + 0x28); local_c = local_c + 1) {
    *(float *)(*(int *)(*(int *)((int)this + 4) + 0x24) + 0x1c +
              *(int *)(*(int *)(*(int *)(*(int *)((int)this + 4) + 0x28) + 8) + local_c * 0xc) *
              0x20) =
         *(float *)(*(int *)(*(int *)(*(int *)((int)this + 4) + 0x28) + 8) + 4 + local_c * 0xc) +
         (float)param_1 * fVar1;
  }
  return;
}

