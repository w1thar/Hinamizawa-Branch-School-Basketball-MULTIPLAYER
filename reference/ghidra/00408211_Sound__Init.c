// Sound::Init @ 00408211  size=241

bool __thiscall Sound::Init(Sound *this,void *hwnd)

{
  bool bVar1;
  int iVar2;
  int local_8;
  
  this->hwnd = hwnd;
  for (local_8 = 0; local_8 < 0xf; local_8 = local_8 + 1) {
    if (this->buffers[local_8] != (void *)0x0) {
      (**(code **)(*(int *)this->buffers[local_8] + 8))(this->buffers[local_8]);
      this->buffers[local_8] = (void *)0x0;
    }
  }
  if (this->dsound != (void *)0x0) {
    (**(code **)(*(int *)this->dsound + 8))(this->dsound);
    this->dsound = (void *)0x0;
  }
  iVar2 = DirectSoundCreate(0,&this->dsound,0);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*(int *)this->dsound + 0x18))(this->dsound,this->hwnd,1);
    if (iVar2 == 0) {
      bVar1 = true;
    }
    else {
      MessageBoxA((HWND)0x0,&DAT_00452fd8,&DAT_004581d4,0);
      bVar1 = false;
    }
  }
  else {
    MessageBoxA((HWND)0x0,&DAT_00452fc0,&DAT_004581d0,0);
    bVar1 = false;
  }
  return bVar1;
}

