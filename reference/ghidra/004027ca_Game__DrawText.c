// Game::DrawText @ 004027ca  size=406

void __thiscall Game::DrawText(Game *this,char *str,int size,int x,int y,int r,int g,int b)

{
  int iVar1;
  size_t c;
  
  iVar1 = (*this->backbuf->lpVtbl->GetDC)(this->backbuf,&g_hdc);
  if (iVar1 == 0) {
    g_logFont = GlobalAlloc(0x40,0x3c);
    lstrcpyA((LPSTR)((int)g_logFont + 0x1c),&DAT_00452ec0);
    *(undefined4 *)((int)g_logFont + 0x10) = 400;
    *(undefined4 *)((int)g_logFont + 8) = 0;
    *(undefined4 *)((int)g_logFont + 4) = 0;
    *(int *)g_logFont = size;
    *(undefined1 *)((int)g_logFont + 0x14) = 0;
    *(undefined1 *)((int)g_logFont + 0x15) = 0;
    *(undefined1 *)((int)g_logFont + 0x17) = 0x80;
    g_hFont = CreateFontIndirectA(g_logFont);
    g_hOldFont = SelectObject(g_hdc,g_hFont);
    SetBkMode(g_hdc,1);
    SetTextColor(g_hdc,r & 0xffU | (g & 0xffU) << 8 | (b & 0xffU) << 0x10);
    c = _strlen(str);
    TextOutA(g_hdc,x,y,str,c);
    SelectObject(g_hdc,g_hOldFont);
    DeleteObject(g_hFont);
    (*this->backbuf->lpVtbl->ReleaseDC)(this->backbuf,g_hdc);
    GlobalFree(g_logFont);
  }
  return;
}

