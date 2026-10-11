// Sound::OpenMp3 @ 0040878a  size=100

void __thiscall Sound::OpenMp3(Sound *this)

{
  CHAR local_104 [256];
  
  sprintf(local_104,(byte *)s_open___s__type_mpegvideo_alias_M_00453140);
  if (this->mp3Playing != '\0') {
    StopMp3(this);
  }
  mciSendStringA(local_104,(LPSTR)0x0,0,(HWND)0x0);
  this->mp3Playing = '\0';
  return;
}

