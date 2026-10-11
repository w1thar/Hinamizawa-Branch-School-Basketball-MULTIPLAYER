// Game::DrawText @ 004027ca  size=406

void __thiscall Game::DrawText(Game *this,char *str,int size,int x,int y,int r,int g,int b)

{
  int iVar1;
  size_t c;
  
  iVar1 = (*this->backbuf->lpVtbl->GetDC)(this->backbuf,&DAT_00457c8c);
  if (iVar1 == 0) {
    DAT_00457c88 = GlobalAlloc(0x40,0x3c);
    lstrcpyA(DAT_00457c88->lfFaceName,&DAT_00452ec0);
    DAT_00457c88->lfWeight = 400;
    DAT_00457c88->lfEscapement = 0;
    DAT_00457c88->lfWidth = 0;
    DAT_00457c88->lfHeight = size;
    DAT_00457c88->lfItalic = '\0';
    DAT_00457c88->lfUnderline = '\0';
    DAT_00457c88->lfCharSet = 0x80;
    DAT_00457c84 = CreateFontIndirectA(DAT_00457c88);
    DAT_00457c80 = SelectObject(DAT_00457c8c,DAT_00457c84);
    SetBkMode(DAT_00457c8c,1);
    SetTextColor(DAT_00457c8c,r & 0xffU | (g & 0xffU) << 8 | (b & 0xffU) << 0x10);
    c = _strlen(str);
    TextOutA(DAT_00457c8c,x,y,str,c);
    SelectObject(DAT_00457c8c,DAT_00457c80);
    DeleteObject(DAT_00457c84);
    (*this->backbuf->lpVtbl->ReleaseDC)(this->backbuf,DAT_00457c8c);
    GlobalFree(DAT_00457c88);
  }
  return;
}

