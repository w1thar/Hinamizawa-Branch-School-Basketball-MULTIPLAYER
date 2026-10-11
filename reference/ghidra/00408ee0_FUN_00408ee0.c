// FUN_00408ee0 @ 00408ee0  size=46

undefined4 * __thiscall FUN_00408ee0(void *this,uint param_1)

{
  Game::Dtor(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

