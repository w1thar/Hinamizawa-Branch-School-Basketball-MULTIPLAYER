// CMesh_Scale @ 0040d99a  size=149

void __thiscall CMesh_Scale(void *this,float param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < *(uint *)((int)this + 4); local_8 = local_8 + 1) {
    *(float *)(*(int *)((int)this + 8) + local_8 * 0x20) =
         *(float *)(*(int *)((int)this + 8) + local_8 * 0x20) * param_1;
    *(float *)(*(int *)((int)this + 8) + 4 + local_8 * 0x20) =
         *(float *)(*(int *)((int)this + 8) + 4 + local_8 * 0x20) * param_1;
    *(float *)(*(int *)((int)this + 8) + 8 + local_8 * 0x20) =
         *(float *)(*(int *)((int)this + 8) + 8 + local_8 * 0x20) * param_1;
  }
  return;
}

