// Game::ShutdownGame @ 0042a256  size=562

void __thiscall Game::ShutdownGame(Game *this)

{
  int local_8;
  
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    if (this->players[local_8] != (Player *)0x0) {
      if (this->players[local_8] != (Player *)0x0) {
        (**(code **)this->players[local_8]->vtbl)(1);
      }
      this->players[local_8] = (Player *)0x0;
    }
  }
  if (this->meshCone != (StaticMesh *****)0x0) {
    if (this->meshCone != (StaticMesh *****)0x0) {
      (*(code *)**this->meshCone)(1);
    }
    this->meshCone = (StaticMesh *****)0x0;
  }
  if (this->meshBall != (StaticMesh ****)0x0) {
    if (this->meshBall != (StaticMesh ****)0x0) {
      (*(code *)**this->meshBall)(1);
    }
    this->meshBall = (StaticMesh ****)0x0;
  }
  if (this->meshGoal != (StaticMesh ***)0x0) {
    if (this->meshGoal != (StaticMesh ***)0x0) {
      (*(code *)**this->meshGoal)(1);
    }
    this->meshGoal = (StaticMesh ***)0x0;
  }
  if (this->meshBuild != (StaticMesh **)0x0) {
    if (this->meshBuild != (StaticMesh **)0x0) {
      (*(*this->meshBuild)->vtbl)(1);
    }
    this->meshBuild = (StaticMesh **)0x0;
  }
  if (this->meshCourt != (StaticMesh *)0x0) {
    if (this->meshCourt != (StaticMesh *)0x0) {
      (**(code **)this->meshCourt->vtbl)(1);
    }
    this->meshCourt = (StaticMesh *)0x0;
  }
  if (this->sound != (Sound *)0x0) {
    if (this->sound != (Sound *)0x0) {
      (**(code **)this->sound->vtbl)(1);
    }
    this->sound = (Sound *)0x0;
  }
  return;
}

