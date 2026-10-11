// Game::BltSurface @ 004026a8  size=290

void __thiscall Game::BltSurface(Game *this,int x,int y,void **surf,int sx0,int sy0,int sx1,int sy1)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (0x280 < x + (sx1 - sx0)) {
    sx1 = sx0 - (x + -0x280);
  }
  if (0x1e0 < y + (sy1 - sy0)) {
    sy1 = sy0 - (y + -0x1e0);
  }
  if (x < 0) {
    sx0 = sx0 - x;
    x = 0;
  }
  if (y < 0) {
    sy0 = sy0 - y;
    y = 0;
  }
  if ((sx0 <= sx1) && (sy0 <= sy1)) {
    local_14 = sx0;
    local_10 = sy0;
    local_c = sx1;
    local_8 = sy1;
    iVar1 = (*this->backbuf->lpVtbl->BltFast)(this->backbuf,x,y,*surf,&local_14,0x11);
    if (iVar1 == -0x7789fe3e) {
      (*this->primary->lpVtbl->Restore)(this->primary);
      (**(code **)(*(int *)*surf + 0x6c))(*surf);
      LoadBitmapSurface(this,surf,surf[1]);
    }
  }
  return;
}

