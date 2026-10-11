// Sound::Ctor @ 00408110  size=82

Sound * __thiscall Sound::Ctor(Sound *this)

{
  int local_8;
  
  this->vtbl = &PTR_LAB_0044e0a4;
  this->dsound = (void *)0x0;
  for (local_8 = 0; local_8 < 0xf; local_8 = local_8 + 1) {
    this->buffers[local_8] = (void *)0x0;
  }
  this->mp3Playing = '\0';
  return this;
}

