// FUN_0040e3c0 @ 0040e3c0  size=46

undefined4 * __thiscall FUN_0040e3c0(void *this,uint param_1)

{
  StaticMesh::Dtor(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

