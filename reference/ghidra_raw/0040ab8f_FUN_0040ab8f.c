// FUN_0040ab8f @ 0040ab8f  size=505

void __thiscall FUN_0040ab8f(void *this,float param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  for (local_c = 0; local_c < *(uint *)((int)this + 8); local_c = local_c + 1) {
    *(float *)(*(int *)((int)this + 0x1c) + local_c * 0x1c) =
         *(float *)(*(int *)((int)this + 0x1c) + local_c * 0x1c) * param_1;
    *(float *)(*(int *)((int)this + 0x1c) + 4 + local_c * 0x1c) =
         *(float *)(*(int *)((int)this + 0x1c) + 4 + local_c * 0x1c) * param_1;
    *(float *)(*(int *)((int)this + 0x1c) + 8 + local_c * 0x1c) =
         *(float *)(*(int *)((int)this + 0x1c) + 8 + local_c * 0x1c) * param_1;
  }
  for (local_8 = 0; local_8 < *(int *)((int)this + 0x2c); local_8 = local_8 + 1) {
    *(float *)(*(int *)((int)this + 0x20) + 0x84 + local_8 * 0xa8) =
         (*(float *)(*(int *)((int)this + 0x20) + 0x84 + local_8 * 0xa8) * param_1) / 9.0;
    *(float *)(*(int *)((int)this + 0x20) + 0x88 + local_8 * 0xa8) =
         (*(float *)(*(int *)((int)this + 0x20) + 0x88 + local_8 * 0xa8) * param_1) / 9.0;
    *(float *)(*(int *)((int)this + 0x20) + 0x8c + local_8 * 0xa8) =
         (*(float *)(*(int *)((int)this + 0x20) + 0x8c + local_8 * 0xa8) * param_1) / 9.0;
    *(float *)(*(int *)((int)this + 0x20) + 0x90 + local_8 * 0xa8) =
         (*(float *)(*(int *)((int)this + 0x20) + 0x90 + local_8 * 0xa8) * param_1) / 9.0;
    *(float *)(*(int *)((int)this + 0x20) + 0x94 + local_8 * 0xa8) =
         (*(float *)(*(int *)((int)this + 0x20) + 0x94 + local_8 * 0xa8) * param_1) / 9.0;
    *(float *)(*(int *)((int)this + 0x20) + 0x98 + local_8 * 0xa8) =
         (*(float *)(*(int *)((int)this + 0x20) + 0x98 + local_8 * 0xa8) * param_1) / 9.0;
  }
  return;
}

