// Sound::Play @ 00408716  size=73

void __thiscall Sound::Play(Sound *this,int slot)

{
  (**(code **)(*(int *)this->buffers[slot] + 0x34))(this->buffers[slot],0);
  (**(code **)(*(int *)this->buffers[slot] + 0x30))(this->buffers[slot],0,0,0);
  return;
}

