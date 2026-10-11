// Game::Flip @ 004022d2  size=182

void __thiscall Game::Flip(Game *this)

{
  tagRECT local_2c;
  tagPOINT local_1c;
  tagRECT local_14;
  
  if (this->windowed == '\0') {
    (*this->primary->lpVtbl->Flip)(this->primary,(IDirectDrawSurface7 *)0x0,1);
  }
  else {
    local_1c.y = 0;
    local_1c.x = 0;
    ClientToScreen(this->hwnd,&local_1c);
    GetClientRect(this->hwnd,&local_14);
    OffsetRect(&local_14,local_1c.x,local_1c.y);
    SetRect(&local_2c,0,0,0x280,0x1e0);
    (*this->primary->lpVtbl->Blt)
              (this->primary,&local_14,this->backbuf,&local_2c,0x1000000,(void *)0x0);
  }
  return;
}

