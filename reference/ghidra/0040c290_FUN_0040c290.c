// FUN_0040c290 @ 0040c290  size=46

undefined4 * __thiscall FUN_0040c290(void *this,uint param_1)

{
  SkinModel::Dtor(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

