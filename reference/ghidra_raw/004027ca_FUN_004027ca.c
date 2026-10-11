// FUN_004027ca @ 004027ca  size=406

void __thiscall
FUN_004027ca(void *this,char *param_1,LONG param_2,int param_3,int param_4,uint param_5,uint param_6
            ,uint param_7)

{
  int iVar1;
  size_t c;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0x44) + 0x44))
                    (*(undefined4 *)((int)this + 0x44),&DAT_00457c8c);
  if (iVar1 == 0) {
    DAT_00457c88 = GlobalAlloc(0x40,0x3c);
    lstrcpyA(DAT_00457c88->lfFaceName,&DAT_00452ec0);
    DAT_00457c88->lfWeight = 400;
    DAT_00457c88->lfEscapement = 0;
    DAT_00457c88->lfWidth = 0;
    DAT_00457c88->lfHeight = param_2;
    DAT_00457c88->lfItalic = '\0';
    DAT_00457c88->lfUnderline = '\0';
    DAT_00457c88->lfCharSet = 0x80;
    DAT_00457c84 = CreateFontIndirectA(DAT_00457c88);
    DAT_00457c80 = SelectObject(DAT_00457c8c,DAT_00457c84);
    SetBkMode(DAT_00457c8c,1);
    SetTextColor(DAT_00457c8c,param_5 & 0xff | (param_6 & 0xff) << 8 | (param_7 & 0xff) << 0x10);
    c = _strlen(param_1);
    TextOutA(DAT_00457c8c,param_3,param_4,param_1,c);
    SelectObject(DAT_00457c8c,DAT_00457c80);
    DeleteObject(DAT_00457c84);
    (**(code **)(**(int **)((int)this + 0x44) + 0x68))
              (*(undefined4 *)((int)this + 0x44),DAT_00457c8c);
    GlobalFree(DAT_00457c88);
  }
  return;
}

