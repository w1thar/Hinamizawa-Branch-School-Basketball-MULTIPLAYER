0042b0bb  PUSH EBP
0042b0bc  MOV EBP,ESP
0042b0be  PUSH ECX
0042b0bf  MOV dword ptr [EBP + -0x4],ECX
0042b0c2  MOV EAX,dword ptr [EBP + -0x4]
0042b0c5  MOV ECX,dword ptr [EAX + 0x30]
0042b0c8  PUSH ECX
0042b0c9  MOV EDX,dword ptr [EBP + -0x4]
0042b0cc  MOV ECX,dword ptr [EDX + 0xc0]
0042b0d2  CALL 0x004010be  ; Sound::Init
0042b0d7  CMP dword ptr [EBP + 0x8],0x0
0042b0db  JNZ 0x0042b18e
0042b0e1  PUSH 0x454274 {'WAV\\LP\\semi.wav'}
0042b0e6  PUSH 0x0
0042b0e8  MOV EAX,dword ptr [EBP + -0x4]
0042b0eb  MOV ECX,dword ptr [EAX + 0xc0]
0042b0f1  CALL 0x004010a5  ; Sound::LoadWav
0042b0f6  PUSH 0x454284 {'WAV\\kyupirn.wav'}
0042b0fb  PUSH 0x1
0042b0fd  MOV ECX,dword ptr [EBP + -0x4]
0042b100  MOV ECX,dword ptr [ECX + 0xc0]
0042b106  CALL 0x004010a5  ; Sound::LoadWav
0042b10b  PUSH 0x454294 {'WAV\\Pou.wav'}
0042b110  PUSH 0x2
0042b112  MOV EDX,dword ptr [EBP + -0x4]
0042b115  MOV ECX,dword ptr [EDX + 0xc0]
0042b11b  CALL 0x004010a5  ; Sound::LoadWav
0042b120  PUSH 0x4542a0 {'WAV\\SE194.wav'}
0042b125  PUSH 0x3
0042b127  MOV EAX,dword ptr [EBP + -0x4]
0042b12a  MOV ECX,dword ptr [EAX + 0xc0]
0042b130  CALL 0x004010a5  ; Sound::LoadWav
0042b135  PUSH 0x4542b0 {'WAV\\Finish.wav'}
0042b13a  PUSH 0x4
0042b13c  MOV ECX,dword ptr [EBP + -0x4]
0042b13f  MOV ECX,dword ptr [ECX + 0xc0]
0042b145  CALL 0x004010a5  ; Sound::LoadWav
0042b14a  PUSH 0x4542c0 {'WAV\\SE068.wav'}
0042b14f  PUSH 0x5
0042b151  MOV EDX,dword ptr [EBP + -0x4]
0042b154  MOV ECX,dword ptr [EDX + 0xc0]
0042b15a  CALL 0x004010a5  ; Sound::LoadWav
0042b15f  PUSH 0x4542d0 {'WAV\\Chaimu.wav'}
0042b164  PUSH 0x6
0042b166  MOV EAX,dword ptr [EBP + -0x4]
0042b169  MOV ECX,dword ptr [EAX + 0xc0]
0042b16f  CALL 0x004010a5  ; Sound::LoadWav
0042b174  PUSH 0x4542e0 {'WAV\\A6.wav'}
0042b179  PUSH 0x7
0042b17b  MOV ECX,dword ptr [EBP + -0x4]
0042b17e  MOV ECX,dword ptr [ECX + 0xc0]
0042b184  CALL 0x004010a5  ; Sound::LoadWav
0042b189  JMP 0x0042b236
0042b18e  PUSH 0x4542ec {'basket\\pii.wav'}
0042b193  PUSH 0x0
0042b195  MOV EDX,dword ptr [EBP + -0x4]
0042b198  MOV ECX,dword ptr [EDX + 0xc0]
0042b19e  CALL 0x004010a5  ; Sound::LoadWav
0042b1a3  PUSH 0x4542fc {'WAV\\Nageru.wav'}
0042b1a8  PUSH 0x1
0042b1aa  MOV EAX,dword ptr [EBP + -0x4]
0042b1ad  MOV ECX,dword ptr [EAX + 0xc0]
0042b1b3  CALL 0x004010a5  ; Sound::LoadWav
0042b1b8  PUSH 0x45430c {'WAV\\Boyoon.wav'}
0042b1bd  PUSH 0x2
0042b1bf  MOV ECX,dword ptr [EBP + -0x4]
0042b1c2  MOV ECX,dword ptr [ECX + 0xc0]
0042b1c8  CALL 0x004010a5  ; Sound::LoadWav
0042b1cd  PUSH 0x45431c {'WAV\\Down.wav'}
0042b1d2  PUSH 0x3
0042b1d4  MOV EDX,dword ptr [EBP + -0x4]
0042b1d7  MOV ECX,dword ptr [EDX + 0xc0]
0042b1dd  CALL 0x004010a5  ; Sound::LoadWav
0042b1e2  PUSH 0x45432c {'WAV\\SE149.wav'}
0042b1e7  PUSH 0x4
0042b1e9  MOV EAX,dword ptr [EBP + -0x4]
0042b1ec  MOV ECX,dword ptr [EAX + 0xc0]
0042b1f2  CALL 0x004010a5  ; Sound::LoadWav
0042b1f7  PUSH 0x45433c {'WAV\\Down2.wav'}
0042b1fc  PUSH 0x5
0042b1fe  MOV ECX,dword ptr [EBP + -0x4]
0042b201  MOV ECX,dword ptr [ECX + 0xc0]
0042b207  CALL 0x004010a5  ; Sound::LoadWav
0042b20c  PUSH 0x45434c {'basket\\pi.wav'}
0042b211  PUSH 0x6
0042b213  MOV EDX,dword ptr [EBP + -0x4]
0042b216  MOV ECX,dword ptr [EDX + 0xc0]
0042b21c  CALL 0x004010a5  ; Sound::LoadWav
0042b221  PUSH 0x45435c {'WAV\\Hikaru.wav'}
0042b226  PUSH 0x7
0042b228  MOV EAX,dword ptr [EBP + -0x4]
0042b22b  MOV ECX,dword ptr [EAX + 0xc0]
0042b231  CALL 0x004010a5  ; Sound::LoadWav
0042b236  MOV ESP,EBP
0042b238  POP EBP
0042b239  RET 0x4
