// FUN_00433100 @ 00433100  size=46

undefined4 * __thiscall FUN_00433100(void *this,uint param_1)

{
  Player::Dtor(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

