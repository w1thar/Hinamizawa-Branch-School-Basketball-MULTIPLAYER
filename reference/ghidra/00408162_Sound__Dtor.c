// Sound::Dtor @ 00408162  size=175

void __thiscall Sound::Dtor(Sound *this)

{
  int local_8;
  
  this->vtbl = &PTR_LAB_0044e0a4;
  if (this->mp3Playing != '\0') {
    StopMp3(this);
  }
  mciSendStringA(s_close_midi_00452fb4,(LPSTR)0x0,0,(HWND)0x0);
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
  return;
}

