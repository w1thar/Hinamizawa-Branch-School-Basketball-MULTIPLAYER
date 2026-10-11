// Game::LoadSoundSet @ 0042b0bb  size=385

void __thiscall Game::LoadSoundSet(Game *this,int set)

{
  Sound::Init(this->sound,this->hwnd);
  if (set == 0) {
    Sound::LoadWav(this->sound,0,s_WAV_LP_semi_wav_00454274);
    Sound::LoadWav(this->sound,1,s_WAV_kyupirn_wav_00454284);
    Sound::LoadWav(this->sound,2,s_WAV_Pou_wav_00454294);
    Sound::LoadWav(this->sound,3,s_WAV_SE194_wav_004542a0);
    Sound::LoadWav(this->sound,4,s_WAV_Finish_wav_004542b0);
    Sound::LoadWav(this->sound,5,s_WAV_SE068_wav_004542c0);
    Sound::LoadWav(this->sound,6,s_WAV_Chaimu_wav_004542d0);
    Sound::LoadWav(this->sound,7,s_WAV_A6_wav_004542e0);
  }
  else {
    Sound::LoadWav(this->sound,0,s_basket_pii_wav_004542ec);
    Sound::LoadWav(this->sound,1,s_WAV_Nageru_wav_004542fc);
    Sound::LoadWav(this->sound,2,s_WAV_Boyoon_wav_0045430c);
    Sound::LoadWav(this->sound,3,s_WAV_Down_wav_0045431c);
    Sound::LoadWav(this->sound,4,s_WAV_SE149_wav_0045432c);
    Sound::LoadWav(this->sound,5,s_WAV_Down2_wav_0045433c);
    Sound::LoadWav(this->sound,6,s_basket_pi_wav_0045434c);
    Sound::LoadWav(this->sound,7,s_WAV_Hikaru_wav_0045435c);
  }
  return;
}

