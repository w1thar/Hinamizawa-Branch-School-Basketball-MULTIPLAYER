// FUN_00407c60 @ 00407c60  size=59

float * __thiscall FUN_00407c60(void *this,float param_1)

{
  *(float *)this = *(float *)this / param_1;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) / param_1;
  *(float *)((int)this + 8) = *(float *)((int)this + 8) / param_1;
  return this;
}

