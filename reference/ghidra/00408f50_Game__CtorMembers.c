// Game::CtorMembers @ 00408f50  size=36

Game * __thiscall Game::CtorMembers(Game *this)

{
  Vec3::CtorDefault((Vec3 *)&this->ddraw);
  Vec3::CtorDefault((Vec3 *)&this->primary);
  return this;
}

