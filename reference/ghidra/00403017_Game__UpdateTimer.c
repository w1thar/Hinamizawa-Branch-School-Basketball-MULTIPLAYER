// Game::UpdateTimer @ 00403017  size=114

void __thiscall Game::UpdateTimer(Game *this)

{
  uint uVar1;
  DWORD DVar2;
  
  if (this->usePerfCounter == '\0') {
    DVar2 = timeGetTime();
    *(DWORD *)&this->curTime = DVar2;
    *(undefined4 *)((int)&this->curTime + 4) = 0;
  }
  else {
    QueryPerformanceCounter((LARGE_INTEGER *)&this->curTime);
  }
  uVar1 = (uint)this->curTime;
  this->dt = (float)CONCAT44((*(int *)((int)&this->curTime + 4) - *(int *)((int)&this->lastTime + 4)
                             ) - (uint)(uVar1 < (uint)this->lastTime),uVar1 - (int)this->lastTime) *
             this->secsPerTick;
  *(int *)&this->lastTime = (int)this->curTime;
  *(undefined4 *)((int)&this->lastTime + 4) = *(undefined4 *)((int)&this->curTime + 4);
  return;
}

