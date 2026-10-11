// Sound::SetVolume @ 0040875f  size=43

void __thiscall Sound::SetVolume(Sound *this,int slot,int vol)

{
  (**(code **)(*(int *)this->buffers[slot] + 0x3c))(this->buffers[slot],vol);
  return;
}

