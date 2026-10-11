// Game::AppCtor @ 00401750  size=151

undefined4 * __thiscall Game::AppCtor(Game *this)

{
  this->vtbl = &PTR_LAB_0044e054;
  this->windowed = '\0';
  this->ddraw = (void *)0x0;
  this->primary = (IDirectDrawSurface7 *)0x0;
  this->backbuf = (IDirectDrawSurface7 *)0x0;
  this->clipper = (void *)0x0;
  this->d3d = (void *)0x0;
  this->device = (IDirect3DDevice7 *)0x0;
  this->zbuffer = (IDirectDrawSurface7 *)0x0;
  this->devType = '\0';
  this->usePerfCounter = '\0';
  *(undefined4 *)&this->lastTime = 0;
  *(undefined4 *)((int)&this->lastTime + 4) = 0;
  this->dt = 0.0;
  this->quit = '\0';
  return &this->vtbl;
}

