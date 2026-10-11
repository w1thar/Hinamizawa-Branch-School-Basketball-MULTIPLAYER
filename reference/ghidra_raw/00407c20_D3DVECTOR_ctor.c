// D3DVECTOR_ctor @ 00407c20  size=42

undefined4 * __thiscall
D3DVECTOR_ctor(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return this;
}

