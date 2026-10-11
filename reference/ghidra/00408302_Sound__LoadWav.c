// Sound::LoadWav @ 00408302  size=1044

bool __thiscall Sound::LoadWav(Sound *this,int slot,char *file)

{
  bool bVar1;
  MMRESULT MVar2;
  LONG LVar3;
  u32 uVar4;
  int iVar5;
  _MMCKINFO *p_Var6;
  _MMCKINFO *p_Var7;
  undefined4 *local_8c;
  undefined2 local_88;
  undefined2 local_86;
  undefined4 local_84;
  undefined4 local_80;
  undefined2 local_7c;
  undefined2 local_7a;
  HMMIO local_78;
  _MMCKINFO local_74;
  undefined4 local_60;
  undefined4 local_5c;
  u32 local_58;
  undefined2 *local_50;
  uint local_3c;
  _MMCKINFO local_38;
  undefined4 *local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  HPSTR local_8;
  
  local_78 = mmioOpenA(file,(LPMMIOINFO)0x0,0x10000);
  if (local_78 == (HMMIO)0x0) {
    MessageBoxA((HWND)0x0,&DAT_00452ff0,(LPCSTR)0x0,0);
    bVar1 = false;
  }
  else {
    local_38.ckid = 0;
    local_38.cksize = 0;
    local_38.fccType = 0;
    local_38.dwDataOffset = 0;
    local_38.dwFlags = 0;
    p_Var6 = &local_38;
    p_Var7 = &local_74;
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      p_Var7->ckid = p_Var6->ckid;
      p_Var6 = (_MMCKINFO *)&p_Var6->cksize;
      p_Var7 = (_MMCKINFO *)&p_Var7->cksize;
    }
    local_38.fccType = 0x45564157;
    MVar2 = mmioDescend(local_78,&local_38,(MMCKINFO *)0x0,0x20);
    if (MVar2 == 0) {
      local_74.ckid = 0x20746d66;
      MVar2 = mmioDescend(local_78,&local_74,&local_38,0);
      if (MVar2 == 0) {
        LVar3 = mmioRead(local_78,(HPSTR)&local_1c,0x12);
        if (LVar3 == 0x12) {
          if ((local_1c & 0xffff) == 1) {
            MVar2 = mmioAscend(local_78,&local_74,0);
            if (MVar2 == 0) {
              local_74.ckid = 0x61746164;
              MVar2 = mmioDescend(local_78,&local_74,&local_38,0x10);
              if (MVar2 == 0) {
                local_8 = operator_new(local_74.cksize);
                uVar4 = mmioRead(local_78,local_8,local_74.cksize);
                if (uVar4 == local_74.cksize) {
                  mmioClose(local_78,0);
                  _memset(&local_88,0,0x10);
                  local_88 = 1;
                  local_86 = local_1c._2_2_;
                  local_84 = local_18;
                  local_7c = local_10;
                  local_80 = local_14;
                  local_7a = local_e;
                  _memset(&local_60,0,0x24);
                  local_60 = 0x24;
                  local_5c = 0xe0;
                  local_58 = local_74.cksize;
                  local_50 = &local_88;
                  iVar5 = (**(code **)(*(int *)this->dsound + 0xc))
                                    (this->dsound,&local_60,this->buffers + slot,0);
                  if (iVar5 == 0) {
                    iVar5 = (**(code **)(*(int *)this->buffers[slot] + 0x2c))
                                      (this->buffers[slot],0,local_74.cksize,&local_24,&local_3c,
                                       &local_8c,&local_20,0);
                    if (iVar5 == -0x7787ff6a) {
                      (**(code **)(*(int *)this->buffers[slot] + 0x50))(this->buffers[slot]);
                      (**(code **)(*(int *)this->buffers[slot] + 0x2c))
                                (this->buffers[slot],0,local_74.cksize,&local_24,&local_3c,&local_8c
                                 ,&local_20,0);
                    }
                    FUN_004334a0(local_24,(undefined4 *)local_8,local_3c);
                    if (local_8c != (undefined4 *)0x0) {
                      FUN_004334a0(local_8c,(undefined4 *)(local_8 + local_3c),local_20);
                    }
                    (**(code **)(*(int *)this->buffers[slot] + 0x4c))
                              (this->buffers[slot],local_24,local_3c,local_8c,local_20);
                    operator_delete(local_8);
                    bVar1 = true;
                  }
                  else {
                    MessageBoxA((HWND)0x0,&DAT_00453118,(LPCSTR)0x0,0);
                    bVar1 = false;
                  }
                }
                else {
                  mmioClose(local_78,0);
                  MessageBoxA((HWND)0x0,&DAT_004530f0,(LPCSTR)0x0,0);
                  bVar1 = false;
                }
              }
              else {
                mmioClose(local_78,0);
                MessageBoxA((HWND)0x0,&DAT_004530c8,(LPCSTR)0x0,0);
                bVar1 = false;
              }
            }
            else {
              mmioClose(local_78,0);
              MessageBoxA((HWND)0x0,&DAT_004530a0,(LPCSTR)0x0,0);
              bVar1 = false;
            }
          }
          else {
            mmioClose(local_78,0);
            MessageBoxA((HWND)0x0,&DAT_00453080,(LPCSTR)0x0,0);
            bVar1 = false;
          }
        }
        else {
          mmioClose(local_78,0);
          MessageBoxA((HWND)0x0,&DAT_00453058,(LPCSTR)0x0,0);
          bVar1 = false;
        }
      }
      else {
        mmioClose(local_78,0);
        MessageBoxA((HWND)0x0,&DAT_00453034,(LPCSTR)0x0,0);
        bVar1 = false;
      }
    }
    else {
      mmioClose(local_78,0);
      MessageBoxA((HWND)0x0,&DAT_00453010,(LPCSTR)0x0,0);
      bVar1 = false;
    }
  }
  return bVar1;
}

