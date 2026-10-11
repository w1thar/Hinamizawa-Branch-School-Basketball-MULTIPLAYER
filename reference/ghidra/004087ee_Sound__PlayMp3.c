// Sound::PlayMp3 @ 004087ee  size=60

void __thiscall Sound::PlayMp3(Sound *this)

{
  if (this->mp3Playing != '\0') {
    StopMp3(this);
  }
  mciSendStringA(s_play_MP3_notify_00453164,(LPSTR)0x0,0,this->hwnd);
  this->mp3Playing = '\x01';
  return;
}

