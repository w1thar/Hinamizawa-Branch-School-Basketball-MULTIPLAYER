// Sound::StopMp3 @ 0040882a  size=65

void __thiscall Sound::StopMp3(Sound *this)

{
  if (this->mp3Playing == '\x01') {
    mciSendStringA(s_stop_MP3_00453174,(LPSTR)0x0,0,(HWND)0x0);
    mciSendStringA(s_close_MP3_00453180,(LPSTR)0x0,0,(HWND)0x0);
    this->mp3Playing = '\0';
  }
  return;
}

