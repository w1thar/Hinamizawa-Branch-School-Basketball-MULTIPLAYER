// FUN_0040c2f0 @ 0040c2f0  size=67

float * __thiscall FUN_0040c2f0(void *this,float *param_1)

{
  *(float *)this = *(float *)this + *param_1;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) + param_1[1];
  *(float *)((int)this + 8) = *(float *)((int)this + 8) + param_1[2];
  return this;
}

