// Game::Cleanup @ 00402388  size=233

void __thiscall Game::Cleanup(Game *this)

{
  if (this->device != (IDirect3DDevice7 *)0x0) {
    (*this->device->lpVtbl->Release)(this->device);
    this->device = (IDirect3DDevice7 *)0x0;
  }
  if (this->d3d != (void *)0x0) {
    (**(code **)(*(int *)this->d3d + 8))(this->d3d);
    this->d3d = (void *)0x0;
  }
  if (this->backbuf != (IDirectDrawSurface7 *)0x0) {
    (*this->backbuf->lpVtbl->Release)(this->backbuf);
    this->backbuf = (IDirectDrawSurface7 *)0x0;
  }
  if (this->clipper != (void *)0x0) {
    (**(code **)(*(int *)this->clipper + 8))(this->clipper);
    this->clipper = (void *)0x0;
  }
  if (this->primary != (IDirectDrawSurface7 *)0x0) {
    (*this->primary->lpVtbl->Release)(this->primary);
    this->primary = (IDirectDrawSurface7 *)0x0;
  }
  if (this->ddraw != (void *)0x0) {
    (**(code **)(*(int *)this->ddraw + 8))(this->ddraw);
    this->ddraw = (void *)0x0;
  }
  return;
}

