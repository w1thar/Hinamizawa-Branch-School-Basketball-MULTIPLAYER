// Game::Ctor @ 00408df0  size=188

Game * __thiscall Game::Ctor(Game *this)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0044cc39;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  AppCtor(this);
  local_8 = 0;
  CtorMembers((Game *)&this->light);
  thunk_FUN_00403880(&this->matView);
  thunk_FUN_00403880(&this->matShadow);
  thunk_FUN_00407fe0(&this->camPos);
  thunk_FUN_00407fe0(&this->camDir);
  thunk_FUN_00407fe0(&this->lightDir);
  thunk_FUN_00407fe0(&this->v240);
  thunk_FUN_00407fe0(&this->v24c);
  this->vtbl = &PTR_LAB_0044e0a8;
  *unaff_FS_OFFSET = local_10;
  return this;
}

