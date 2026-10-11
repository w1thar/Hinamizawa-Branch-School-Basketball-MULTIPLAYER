// FUN_00408a50 @ 00408a50  size=46

undefined4 * __thiscall FUN_00408a50(void *this,uint param_1)

{
  Sound::Dtor(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

