// FUN_00403840 @ 00403840  size=46

undefined4 * __thiscall FUN_00403840(void *this,uint param_1)

{
  Game::AppDtor(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

