00423d53  PUSH EBP
00423d54  MOV EBP,ESP
00423d56  SUB ESP,0x58
00423d59  MOV dword ptr [EBP + -0x50],ECX
00423d5c  MOV EAX,dword ptr [EBP + -0x50]
00423d5f  MOV ECX,dword ptr [EBP + -0x50]
00423d62  FLD float ptr [EAX + 0x390]
00423d68  FADD float ptr [ECX + 0x54]
00423d6b  MOV EDX,dword ptr [EBP + -0x50]
00423d6e  FSTP float ptr [EDX + 0x390]
00423d74  MOV EAX,dword ptr [EBP + -0x50]
00423d77  CMP dword ptr [EAX + 0x3b8],0x0
00423d7e  JNZ 0x004241da
00423d84  MOV ECX,dword ptr [EBP + -0x50]
00423d87  MOV dword ptr [ECX + 0x390],0x0
00423d91  MOV EDX,dword ptr [EBP + -0x50]
00423d94  MOV byte ptr [EDX + 0x3a5],0x0
00423d9b  MOV EAX,dword ptr [EBP + -0x50]
00423d9e  MOV byte ptr [EAX + 0x3a4],0x0
00423da5  MOV ECX,dword ptr [EBP + -0x50]
00423da8  MOV byte ptr [ECX + 0x3a6],0x0
00423daf  MOV EDX,dword ptr [EBP + -0x50]
00423db2  MOV byte ptr [EDX + 0x398],0x0
00423db9  MOV EAX,dword ptr [EBP + -0x50]
00423dbc  MOV byte ptr [EAX + 0x399],0x0
00423dc3  MOV ECX,dword ptr [EBP + -0x50]
00423dc6  MOV dword ptr [ECX + 0x3ac],0x0
00423dd0  MOV EDX,dword ptr [EBP + -0x50]
00423dd3  MOV dword ptr [EDX + 0x394],0x3f800000
00423ddd  MOV EAX,dword ptr [EBP + -0x50]
00423de0  MOV dword ptr [EAX + 0x234],0x3f800000
00423dea  MOV ECX,dword ptr [EBP + -0x50]
00423ded  MOV dword ptr [ECX + 0x238],0xbf4ccccd
00423df7  MOV EDX,dword ptr [EBP + -0x50]
00423dfa  MOV dword ptr [EDX + 0x23c],0xbf800000
00423e04  MOV EAX,dword ptr [EBP + -0x50]
00423e07  ADD EAX,0x234
00423e0c  MOV ECX,dword ptr [EBP + -0x50]
00423e0f  ADD ECX,0x174
00423e15  MOV EDX,dword ptr [EAX]
00423e17  MOV dword ptr [ECX],EDX
00423e19  MOV EDX,dword ptr [EAX + 0x4]
00423e1c  MOV dword ptr [ECX + 0x4],EDX
00423e1f  MOV EAX,dword ptr [EAX + 0x8]
00423e22  MOV dword ptr [ECX + 0x8],EAX
00423e25  MOV ECX,dword ptr [EBP + -0x50]
00423e28  MOV dword ptr [ECX + 0x138],0x3f4ccccd
00423e32  MOV EDX,dword ptr [EBP + -0x50]
00423e35  MOV dword ptr [EDX + 0x13c],0x3f000000
00423e3f  MOV EAX,dword ptr [EBP + -0x50]
00423e42  MOV dword ptr [EAX + 0x140],0x3f000000
00423e4c  MOV ECX,dword ptr [EBP + -0x50]
00423e4f  MOV dword ptr [ECX + 0x158],0x3f000000
00423e59  MOV EDX,dword ptr [EBP + -0x50]
00423e5c  MOV dword ptr [EDX + 0x15c],0x3e99999a
00423e66  MOV EAX,dword ptr [EBP + -0x50]
00423e69  MOV dword ptr [EAX + 0x160],0x3e99999a
00423e73  MOV ECX,dword ptr [EBP + -0x50]
00423e76  MOV dword ptr [ECX + 0x1dc],0x3f800000
00423e80  MOV EDX,dword ptr [EBP + -0x50]
00423e83  MOV dword ptr [EDX + 0x1e0],0x0
00423e8d  MOV EAX,dword ptr [EBP + -0x50]
00423e90  MOV dword ptr [EAX + 0x1e4],0x0
00423e9a  MOV ECX,dword ptr [EBP + -0x50]
00423e9d  MOV dword ptr [ECX + 0x1e8],0x0
00423ea7  MOV EDX,dword ptr [EBP + -0x50]
00423eaa  FLD float ptr [EDX + 0x234]
00423eb0  FCHS
00423eb2  MOV EAX,dword ptr [EBP + -0x50]
00423eb5  FDIV float ptr [EAX + 0x238]
00423ebb  MOV ECX,dword ptr [EBP + -0x50]
00423ebe  FSTP float ptr [ECX + 0x1ec]
00423ec4  MOV EDX,dword ptr [EBP + -0x50]
00423ec7  MOV dword ptr [EDX + 0x1f0],0x0
00423ed1  MOV EAX,dword ptr [EBP + -0x50]
00423ed4  FLD float ptr [EAX + 0x23c]
00423eda  FCHS
00423edc  MOV ECX,dword ptr [EBP + -0x50]
00423edf  FDIV float ptr [ECX + 0x238]
00423ee5  MOV EDX,dword ptr [EBP + -0x50]
00423ee8  FSTP float ptr [EDX + 0x1f4]
00423eee  MOV EAX,dword ptr [EBP + -0x50]
00423ef1  MOV dword ptr [EAX + 0x1f8],0x0
00423efb  MOV ECX,dword ptr [EBP + -0x50]
00423efe  MOV dword ptr [ECX + 0x1fc],0x0
00423f08  MOV EDX,dword ptr [EBP + -0x50]
00423f0b  MOV dword ptr [EDX + 0x200],0x0
00423f15  MOV EAX,dword ptr [EBP + -0x50]
00423f18  MOV dword ptr [EAX + 0x204],0x3f800000
00423f22  MOV ECX,dword ptr [EBP + -0x50]
00423f25  MOV dword ptr [ECX + 0x208],0x0
00423f2f  MOV EDX,dword ptr [EBP + -0x50]
00423f32  MOV dword ptr [EDX + 0x20c],0x0
00423f3c  MOV EAX,dword ptr [EBP + -0x50]
00423f3f  MOV dword ptr [EAX + 0x210],0x3d4ccccd
00423f49  MOV ECX,dword ptr [EBP + -0x50]
00423f4c  MOV dword ptr [ECX + 0x214],0x0
00423f56  MOV EDX,dword ptr [EBP + -0x50]
00423f59  MOV dword ptr [EDX + 0x218],0x3f800000
00423f63  PUSH 0x4540f0 {'WAV\\LP\\5.mp3'}
00423f68  MOV EAX,dword ptr [EBP + -0x50]
00423f6b  MOV ECX,dword ptr [EAX + 0xc0]
00423f71  CALL 0x00401078  ; Sound::OpenMp3
00423f76  PUSH 0x0
00423f78  PUSH 0x41880000
00423f7d  PUSH 0x0
00423f7f  PUSH 0x0
00423f81  LEA ECX,[EBP + -0x10]
00423f84  CALL 0x00401348  ; Vec3::Ctor
00423f89  SUB ESP,0xc
00423f8c  MOV ECX,ESP
00423f8e  MOV EDX,dword ptr [EAX]
00423f90  MOV dword ptr [ECX],EDX
00423f92  MOV EDX,dword ptr [EAX + 0x4]
00423f95  MOV dword ptr [ECX + 0x4],EDX
00423f98  MOV EAX,dword ptr [EAX + 0x8]
00423f9b  MOV dword ptr [ECX + 0x8],EAX
00423f9e  MOV ECX,dword ptr [EBP + -0x50]
00423fa1  MOV ECX,dword ptr [ECX + 0xd8]
00423fa7  CALL 0x004012c6  ; Player::SetPos
00423fac  PUSH 0xbe4ccccd
00423fb1  PUSH 0x41880000
00423fb6  PUSH 0x0
00423fb8  PUSH 0xc0400000
00423fbd  LEA ECX,[EBP + -0x1c]
00423fc0  CALL 0x00401348  ; Vec3::Ctor
00423fc5  SUB ESP,0xc
00423fc8  MOV EDX,ESP
00423fca  MOV ECX,dword ptr [EAX]
00423fcc  MOV dword ptr [EDX],ECX
00423fce  MOV ECX,dword ptr [EAX + 0x4]
00423fd1  MOV dword ptr [EDX + 0x4],ECX
00423fd4  MOV EAX,dword ptr [EAX + 0x8]
00423fd7  MOV dword ptr [EDX + 0x8],EAX
00423fda  MOV ECX,dword ptr [EBP + -0x50]
00423fdd  MOV ECX,dword ptr [ECX + 0xdc]
00423fe3  CALL 0x004012c6  ; Player::SetPos
00423fe8  PUSH 0x4048f5c3
00423fed  PUSH 0x41000000
00423ff2  PUSH 0x0
00423ff4  PUSH 0xbf800000
00423ff9  LEA ECX,[EBP + -0x28]
00423ffc  CALL 0x00401348  ; Vec3::Ctor
00424001  SUB ESP,0xc
00424004  MOV EDX,ESP
00424006  MOV ECX,dword ptr [EAX]
00424008  MOV dword ptr [EDX],ECX
0042400a  MOV ECX,dword ptr [EAX + 0x4]
0042400d  MOV dword ptr [EDX + 0x4],ECX
00424010  MOV EAX,dword ptr [EAX + 0x8]
00424013  MOV dword ptr [EDX + 0x8],EAX
00424016  MOV ECX,dword ptr [EBP + -0x50]
00424019  MOV ECX,dword ptr [ECX + 0xe0]
0042401f  CALL 0x004012c6  ; Player::SetPos
00424024  PUSH 0xbf800000
00424029  PUSH 0x41700000
0042402e  PUSH 0x0
00424030  PUSH 0xc0a00000
00424035  LEA ECX,[EBP + -0x34]
00424038  CALL 0x00401348  ; Vec3::Ctor
0042403d  SUB ESP,0xc
00424040  MOV EDX,ESP
00424042  MOV ECX,dword ptr [EAX]
00424044  MOV dword ptr [EDX],ECX
00424046  MOV ECX,dword ptr [EAX + 0x4]
00424049  MOV dword ptr [EDX + 0x4],ECX
0042404c  MOV EAX,dword ptr [EAX + 0x8]
0042404f  MOV dword ptr [EDX + 0x8],EAX
00424052  MOV ECX,dword ptr [EBP + -0x50]
00424055  MOV ECX,dword ptr [ECX + 0xe4]
0042405b  CALL 0x004012c6  ; Player::SetPos
00424060  PUSH 0x40000000
00424065  PUSH 0x41400000
0042406a  PUSH 0x0
0042406c  PUSH 0x40800000
00424071  LEA ECX,[EBP + -0x40]
00424074  CALL 0x00401348  ; Vec3::Ctor
00424079  SUB ESP,0xc
0042407c  MOV EDX,ESP
0042407e  MOV ECX,dword ptr [EAX]
00424080  MOV dword ptr [EDX],ECX
00424082  MOV ECX,dword ptr [EAX + 0x4]
00424085  MOV dword ptr [EDX + 0x4],ECX
00424088  MOV EAX,dword ptr [EAX + 0x8]
0042408b  MOV dword ptr [EDX + 0x8],EAX
0042408e  MOV ECX,dword ptr [EBP + -0x50]
00424091  MOV ECX,dword ptr [ECX + 0xe8]
00424097  CALL 0x004012c6  ; Player::SetPos
0042409c  PUSH 0x3f000000
004240a1  PUSH 0x41800000
004240a6  PUSH 0x0
004240a8  PUSH 0x40400000
004240ad  LEA ECX,[EBP + -0x4c]
004240b0  CALL 0x00401348  ; Vec3::Ctor
004240b5  SUB ESP,0xc
004240b8  MOV EDX,ESP
004240ba  MOV ECX,dword ptr [EAX]
004240bc  MOV dword ptr [EDX],ECX
004240be  MOV ECX,dword ptr [EAX + 0x4]
004240c1  MOV dword ptr [EDX + 0x4],ECX
004240c4  MOV EAX,dword ptr [EAX + 0x8]
004240c7  MOV dword ptr [EDX + 0x8],EAX
004240ca  MOV ECX,dword ptr [EBP + -0x50]
004240cd  MOV ECX,dword ptr [ECX + 0xec]
004240d3  CALL 0x004012c6  ; Player::SetPos
004240d8  MOV EDX,dword ptr [EBP + -0x50]
004240db  MOV ECX,dword ptr [EDX + 0xd8]
004240e1  CALL 0x00401005  ; Player::Motion_430c40
004240e6  MOV EAX,dword ptr [EBP + -0x50]
004240e9  MOV ECX,dword ptr [EAX + 0xdc]
004240ef  CALL 0x00401005  ; Player::Motion_430c40
004240f4  MOV ECX,dword ptr [EBP + -0x50]
004240f7  MOV ECX,dword ptr [ECX + 0xe0]
004240fd  CALL 0x00401005  ; Player::Motion_430c40
00424102  MOV EDX,dword ptr [EBP + -0x50]
00424105  MOV ECX,dword ptr [EDX + 0xe4]
0042410b  CALL 0x00401384  ; Player::Motion_Stand
00424110  MOV EAX,dword ptr [EBP + -0x50]
00424113  MOV ECX,dword ptr [EAX + 0xe8]
00424119  CALL 0x00401384  ; Player::Motion_Stand
0042411e  MOV ECX,dword ptr [EBP + -0x50]
00424121  MOV ECX,dword ptr [ECX + 0xec]
00424127  CALL 0x00401005  ; Player::Motion_430c40
0042412c  MOV EDX,dword ptr [EBP + -0x50]
0042412f  MOV dword ptr [EDX + 0x21c],0x41a00000
00424139  MOV EAX,dword ptr [EBP + -0x50]
0042413c  MOV dword ptr [EAX + 0x220],0x41200000
00424146  MOV ECX,dword ptr [EBP + -0x50]
00424149  MOV dword ptr [ECX + 0x224],0xc2640000
00424153  MOV EDX,dword ptr [EBP + -0x50]
00424156  MOV dword ptr [EDX + 0x228],0xbedc28f6
00424160  MOV EAX,dword ptr [EBP + -0x50]
00424163  MOV dword ptr [EAX + 0x22c],0x0
0042416d  MOV ECX,dword ptr [EBP + -0x50]
00424170  MOV dword ptr [ECX + 0x230],0x3f666666
0042417a  MOV EDX,dword ptr [EBP + -0x50]
0042417d  MOV dword ptr [EDX + 0x24c],0x0
00424187  MOV EAX,dword ptr [EBP + -0x50]
0042418a  MOV dword ptr [EAX + 0x250],0x3f333333
00424194  MOV ECX,dword ptr [EBP + -0x50]
00424197  MOV dword ptr [ECX + 0x254],0x0
004241a1  MOV EDX,dword ptr [EBP + -0x50]
004241a4  MOV dword ptr [EDX + 0x25c],0x0
004241ae  MOV EAX,dword ptr [EBP + -0x50]
004241b1  MOV dword ptr [EAX + 0x258],0x0
004241bb  MOV ECX,dword ptr [EBP + -0x50]
004241be  MOV dword ptr [ECX + 0x268],0x0
004241c8  MOV EDX,dword ptr [EBP + -0x50]
004241cb  MOV dword ptr [EDX + 0x3b8],0x1
004241d5  JMP 0x0042478a
004241da  MOV EAX,dword ptr [EBP + -0x50]
004241dd  FLD float ptr [EAX + 0x390]
004241e3  FCOMP float ptr [0x0044e2c4] {1}
004241e9  FNSTSW AX
004241eb  TEST AH,0x41
004241ee  JNZ 0x004241f9
004241f0  MOV dword ptr [EBP + -0x54],0x1
004241f7  JMP 0x00424200
004241f9  MOV dword ptr [EBP + -0x54],0x0
00424200  MOV ECX,dword ptr [EBP + -0x50]
00424203  XOR EDX,EDX
00424205  CMP dword ptr [ECX + 0x3b8],0x1
0042420c  SETZ DL
0042420f  AND EDX,dword ptr [EBP + -0x54]
00424212  TEST EDX,EDX
00424214  JZ 0x00424250
00424216  MOV EAX,dword ptr [EBP + -0x50]
00424219  MOV dword ptr [EAX + 0x3b8],0x2
00424223  MOV ECX,dword ptr [EBP + -0x50]
00424226  MOV dword ptr [ECX + 0x394],0x0
00424230  MOV EDX,dword ptr [EBP + -0x50]
00424233  MOV ECX,dword ptr [EDX + 0xc0]
00424239  CALL 0x0040100a  ; Sound::PlayMp3
0042423e  MOV EAX,dword ptr [EBP + -0x50]
00424241  MOV dword ptr [EAX + 0x390],0x0
0042424b  JMP 0x0042478a
00424250  MOV ECX,dword ptr [EBP + -0x50]
00424253  FLD float ptr [ECX + 0x390]
00424259  FCOMP float ptr [0x0044e2e4] {265}
0042425f  FNSTSW AX
00424261  TEST AH,0x41
00424264  JNZ 0x0042426f
00424266  MOV dword ptr [EBP + -0x58],0x1
0042426d  JMP 0x00424276
0042426f  MOV dword ptr [EBP + -0x58],0x0
00424276  MOV EDX,dword ptr [EBP + -0x50]
00424279  XOR EAX,EAX
0042427b  CMP dword ptr [EDX + 0x3b8],0x2
00424282  SETZ AL
00424285  AND EAX,dword ptr [EBP + -0x58]
00424288  TEST EAX,EAX
0042428a  JZ 0x0042429e
0042428c  MOV ECX,dword ptr [EBP + -0x50]
0042428f  MOV dword ptr [ECX + 0x3b8],0x3
00424299  JMP 0x0042478a
0042429e  MOV EDX,dword ptr [EBP + -0x50]
004242a1  CMP dword ptr [EDX + 0x3b8],0x3
004242a8  JNZ 0x004242fd
004242aa  MOV EAX,dword ptr [EBP + -0x50]
004242ad  FLD float ptr [0x0044e2e8] {0.2}
004242b3  FMUL float ptr [EAX + 0x54]
004242b6  MOV ECX,dword ptr [EBP + -0x50]
004242b9  FADD float ptr [ECX + 0x394]
004242bf  MOV EDX,dword ptr [EBP + -0x50]
004242c2  FSTP float ptr [EDX + 0x394]
004242c8  MOV EAX,dword ptr [EBP + -0x50]
004242cb  FLD float ptr [EAX + 0x394]
004242d1  FCOMP float ptr [0x0044e2c4] {1}
004242d7  FNSTSW AX
004242d9  TEST AH,0x41
004242dc  JNZ 0x004242f8
004242de  MOV ECX,dword ptr [EBP + -0x50]
004242e1  MOV dword ptr [ECX + 0x394],0x3f800000
004242eb  MOV EDX,dword ptr [EBP + -0x50]
004242ee  MOV dword ptr [EDX + 0x3b8],0x4
004242f8  JMP 0x0042478a
004242fd  MOV EAX,dword ptr [EBP + -0x50]
00424300  CMP dword ptr [EAX + 0x3b8],0x4
00424307  JNZ 0x0042478a
0042430d  MOV ECX,dword ptr [EBP + -0x50]
00424310  MOV ECX,dword ptr [ECX + 0xc0]
00424316  CALL 0x00401276  ; Sound::StopMp3
0042431b  MOV EDX,dword ptr [EBP + -0x50]
0042431e  MOV dword ptr [EDX + 0x394],0x3f800000
00424328  PUSH 0x454100 {'WAV\\LP\\1.mp3'}
0042432d  MOV EAX,dword ptr [EBP + -0x50]
00424330  MOV ECX,dword ptr [EAX + 0xc0]
00424336  CALL 0x00401078  ; Sound::OpenMp3
0042433b  MOV dword ptr [EBP + -0x4],0x0
00424342  JMP 0x0042434d
00424344  MOV ECX,dword ptr [EBP + -0x4]
00424347  ADD ECX,0x1
0042434a  MOV dword ptr [EBP + -0x4],ECX
0042434d  CMP dword ptr [EBP + -0x4],0x6
00424351  JGE 0x00424391
00424353  PUSH 0x0
00424355  MOV EDX,dword ptr [EBP + -0x4]
00424358  MOV EAX,dword ptr [EBP + -0x50]
0042435b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c0]
00424362  MOV EDX,dword ptr [EBP + -0x50]
00424365  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0042436c  CALL 0x004012df  ; Player::SetTex1
00424371  PUSH 0x0
00424373  MOV EAX,dword ptr [EBP + -0x4]
00424376  MOV ECX,dword ptr [EBP + -0x50]
00424379  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3c0]
00424380  MOV EAX,dword ptr [EBP + -0x50]
00424383  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0042438a  CALL 0x0040113b  ; Player::SetTex2
0042438f  JMP 0x00424344
00424391  MOV ECX,dword ptr [EBP + -0x50]
00424394  MOV dword ptr [ECX + 0x21c],0x0
0042439e  MOV EDX,dword ptr [EBP + -0x50]
004243a1  MOV dword ptr [EDX + 0x220],0x0
004243ab  MOV EAX,dword ptr [EBP + -0x50]
004243ae  MOV dword ptr [EAX + 0x224],0x0
004243b8  MOV ECX,dword ptr [EBP + -0x50]
004243bb  MOV dword ptr [ECX + 0x228],0x3f800000
004243c5  MOV EDX,dword ptr [EBP + -0x50]
004243c8  MOV dword ptr [EDX + 0x22c],0x0
004243d2  MOV EAX,dword ptr [EBP + -0x50]
004243d5  MOV dword ptr [EAX + 0x230],0x3f800000
004243df  MOV ECX,dword ptr [EBP + -0x50]
004243e2  MOV dword ptr [ECX + 0x234],0x3f800000
004243ec  MOV EDX,dword ptr [EBP + -0x50]
004243ef  MOV dword ptr [EDX + 0x238],0xbf800000
004243f9  MOV EAX,dword ptr [EBP + -0x50]
004243fc  MOV dword ptr [EAX + 0x23c],0x3f800000
00424406  MOV ECX,dword ptr [EBP + -0x50]
00424409  ADD ECX,0x234
0042440f  MOV EDX,dword ptr [EBP + -0x50]
00424412  ADD EDX,0x174
00424418  MOV EAX,dword ptr [ECX]
0042441a  MOV dword ptr [EDX],EAX
0042441c  MOV EAX,dword ptr [ECX + 0x4]
0042441f  MOV dword ptr [EDX + 0x4],EAX
00424422  MOV ECX,dword ptr [ECX + 0x8]
00424425  MOV dword ptr [EDX + 0x8],ECX
00424428  MOV EDX,dword ptr [EBP + -0x50]
0042442b  MOV dword ptr [EDX + 0x138],0x3f4ccccd
00424435  MOV EAX,dword ptr [EBP + -0x50]
00424438  MOV dword ptr [EAX + 0x13c],0x3f4ccccd
00424442  MOV ECX,dword ptr [EBP + -0x50]
00424445  MOV dword ptr [ECX + 0x140],0x3f4ccccd
0042444f  MOV EDX,dword ptr [EBP + -0x50]
00424452  MOV dword ptr [EDX + 0x158],0x3f000000
0042445c  MOV EAX,dword ptr [EBP + -0x50]
0042445f  MOV dword ptr [EAX + 0x15c],0x3f000000
00424469  MOV ECX,dword ptr [EBP + -0x50]
0042446c  MOV dword ptr [ECX + 0x160],0x3f000000
00424476  MOV EDX,dword ptr [EBP + -0x50]
00424479  MOV dword ptr [EDX + 0x1dc],0x3f800000
00424483  MOV EAX,dword ptr [EBP + -0x50]
00424486  MOV dword ptr [EAX + 0x1e0],0x0
00424490  MOV ECX,dword ptr [EBP + -0x50]
00424493  MOV dword ptr [ECX + 0x1e4],0x0
0042449d  MOV EDX,dword ptr [EBP + -0x50]
004244a0  MOV dword ptr [EDX + 0x1e8],0x0
004244aa  MOV EAX,dword ptr [EBP + -0x50]
004244ad  FLD float ptr [EAX + 0x234]
004244b3  FCHS
004244b5  MOV ECX,dword ptr [EBP + -0x50]
004244b8  FDIV float ptr [ECX + 0x238]
004244be  MOV EDX,dword ptr [EBP + -0x50]
004244c1  FSTP float ptr [EDX + 0x1ec]
004244c7  MOV EAX,dword ptr [EBP + -0x50]
004244ca  MOV dword ptr [EAX + 0x1f0],0x0
004244d4  MOV ECX,dword ptr [EBP + -0x50]
004244d7  FLD float ptr [ECX + 0x23c]
004244dd  FCHS
004244df  MOV EDX,dword ptr [EBP + -0x50]
004244e2  FDIV float ptr [EDX + 0x238]
004244e8  MOV EAX,dword ptr [EBP + -0x50]
004244eb  FSTP float ptr [EAX + 0x1f4]
004244f1  MOV ECX,dword ptr [EBP + -0x50]
004244f4  MOV dword ptr [ECX + 0x1f8],0x0
004244fe  MOV EDX,dword ptr [EBP + -0x50]
00424501  MOV dword ptr [EDX + 0x1fc],0x0
0042450b  MOV EAX,dword ptr [EBP + -0x50]
0042450e  MOV dword ptr [EAX + 0x200],0x0
00424518  MOV ECX,dword ptr [EBP + -0x50]
0042451b  MOV dword ptr [ECX + 0x204],0x3f800000
00424525  MOV EDX,dword ptr [EBP + -0x50]
00424528  MOV dword ptr [EDX + 0x208],0x0
00424532  MOV EAX,dword ptr [EBP + -0x50]
00424535  MOV dword ptr [EAX + 0x20c],0x0
0042453f  MOV ECX,dword ptr [EBP + -0x50]
00424542  MOV dword ptr [ECX + 0x210],0x3d4ccccd
0042454c  MOV EDX,dword ptr [EBP + -0x50]
0042454f  MOV dword ptr [EDX + 0x214],0x0
00424559  MOV EAX,dword ptr [EBP + -0x50]
0042455c  MOV dword ptr [EAX + 0x218],0x3f800000
00424566  MOV ECX,dword ptr [EBP + -0x50]
00424569  MOV dword ptr [ECX + 0x240],0x0
00424573  MOV EDX,dword ptr [EBP + -0x50]
00424576  MOV dword ptr [EDX + 0x244],0x40c00000
00424580  MOV EAX,dword ptr [EBP + -0x50]
00424583  MOV dword ptr [EAX + 0x248],0x0
0042458d  MOV ECX,dword ptr [EBP + -0x50]
00424590  MOV dword ptr [ECX + 0x24c],0x0
0042459a  MOV EDX,dword ptr [EBP + -0x50]
0042459d  MOV dword ptr [EDX + 0x250],0x40c00000
004245a7  MOV EAX,dword ptr [EBP + -0x50]
004245aa  MOV dword ptr [EAX + 0x254],0x0
004245b4  MOV ECX,dword ptr [EBP + -0x50]
004245b7  MOV dword ptr [ECX + 0x260],0x0
004245c1  MOV EDX,dword ptr [EBP + -0x50]
004245c4  MOV dword ptr [EDX + 0x264],0x0
004245ce  MOV EAX,dword ptr [EBP + -0x50]
004245d1  MOV dword ptr [EAX + 0x258],0x0
004245db  MOV ECX,dword ptr [EBP + -0x50]
004245de  MOV dword ptr [ECX + 0x25c],0x0
004245e8  MOV EDX,dword ptr [EBP + -0x50]
004245eb  MOV dword ptr [EDX + 0x268],0xffffffff
004245f5  MOV EAX,dword ptr [EBP + -0x50]
004245f8  MOV dword ptr [EAX + 0x370],0x0
00424602  MOV ECX,dword ptr [EBP + -0x50]
00424605  MOV dword ptr [ECX + 0x374],0x0
0042460f  MOV EDX,dword ptr [EBP + -0x50]
00424612  MOV dword ptr [EDX + 0x378],0x0
0042461c  MOV EAX,dword ptr [EBP + -0x50]
0042461f  MOV dword ptr [EAX + 0x234],0x3f800000
00424629  MOV ECX,dword ptr [EBP + -0x50]
0042462c  MOV dword ptr [ECX + 0x238],0xbf800000
00424636  MOV EDX,dword ptr [EBP + -0x50]
00424639  MOV dword ptr [EDX + 0x23c],0x3f800000
00424643  MOV EAX,dword ptr [EBP + -0x50]
00424646  MOV dword ptr [EAX + 0x37c],0x0
00424650  MOV ECX,dword ptr [EBP + -0x50]
00424653  MOV dword ptr [ECX + 0x380],0x0
0042465d  MOV EDX,dword ptr [EBP + -0x50]
00424660  MOV dword ptr [EDX + 0x384],0x0
0042466a  MOV EAX,dword ptr [EBP + -0x50]
0042466d  MOV dword ptr [EAX + 0x390],0x0
00424677  MOV ECX,dword ptr [EBP + -0x50]
0042467a  MOV dword ptr [ECX + 0x394],0x3f800000
00424684  MOV EDX,dword ptr [EBP + -0x50]
00424687  MOV byte ptr [EDX + 0x398],0x0
0042468e  MOV EAX,dword ptr [EBP + -0x50]
00424691  MOV byte ptr [EAX + 0x399],0x0
00424698  MOV ECX,dword ptr [EBP + -0x50]
0042469b  MOV byte ptr [ECX + 0x39a],0x0
004246a2  MOV EDX,dword ptr [EBP + -0x50]
004246a5  MOV byte ptr [EDX + 0x3a4],0x0
004246ac  MOV EAX,dword ptr [EBP + -0x50]
004246af  MOV byte ptr [EAX + 0x3a5],0x0
004246b6  MOV ECX,dword ptr [EBP + -0x50]
004246b9  MOV byte ptr [ECX + 0x3a6],0x0
004246c0  MOV EDX,dword ptr [EBP + -0x50]
004246c3  MOV byte ptr [EDX + 0x3a7],0x0
004246ca  MOV EAX,dword ptr [EBP + -0x50]
004246cd  MOV dword ptr [EAX + 0x3ac],0x0
004246d7  MOV ECX,dword ptr [EBP + -0x50]
004246da  MOV dword ptr [ECX + 0x3b8],0x0
004246e4  MOV EDX,dword ptr [EBP + -0x50]
004246e7  MOV dword ptr [EDX + 0x3bc],0x0
004246f1  MOV EAX,dword ptr [EBP + -0x50]
004246f4  MOV dword ptr [EAX + 0x39c],0x0
004246fe  MOV ECX,dword ptr [EBP + -0x50]
00424701  MOV dword ptr [ECX + 0x3a0],0xbf800000
0042470b  MOV EDX,dword ptr [EBP + -0x50]
0042470e  MOV dword ptr [EDX + 0x3b0],0x0
00424718  MOV EAX,dword ptr [EBP + -0x50]
0042471b  MOV dword ptr [EAX + 0x3b4],0x0
00424725  MOV ECX,dword ptr [EBP + -0x50]
00424728  MOV dword ptr [ECX + 0x3e0],0x43960000
00424732  MOV EDX,dword ptr [EBP + -0x50]
00424735  MOV dword ptr [EDX + 0x3d8],0x0
0042473f  MOV EAX,dword ptr [EBP + -0x50]
00424742  MOV dword ptr [EAX + 0x3dc],0x0
0042474c  MOV ECX,dword ptr [EBP + -0x50]
0042474f  MOV dword ptr [ECX + 0x400],0x40800000
00424759  MOV EDX,dword ptr [EBP + -0x50]
0042475c  MOV dword ptr [EDX + 0x40c],0x0
00424766  MOV EAX,dword ptr [EBP + -0x50]
00424769  MOV byte ptr [EAX + 0x414],0x0
00424770  MOV ECX,dword ptr [EBP + -0x50]
00424773  MOV dword ptr [ECX + 0x418],0xffffffff
0042477d  MOV EDX,dword ptr [EBP + -0x50]
00424780  MOV dword ptr [EDX + 0x26c],0x1
0042478a  MOV EAX,dword ptr [EBP + -0x50]
0042478d  CMP dword ptr [EAX + 0x3b8],0x2
00424794  JNZ 0x00424924
0042479a  MOV ECX,dword ptr [EBP + -0x50]
0042479d  FLD float ptr [0x0044e2ec] {0.002222}
004247a3  FMUL float ptr [ECX + 0x54]
004247a6  MOV EDX,dword ptr [EBP + -0x50]
004247a9  FADD float ptr [EDX + 0x238]
004247af  MOV EAX,dword ptr [EBP + -0x50]
004247b2  FSTP float ptr [EAX + 0x238]
004247b8  MOV ECX,dword ptr [EBP + -0x50]
004247bb  ADD ECX,0x234
004247c1  MOV EDX,dword ptr [EBP + -0x50]
004247c4  ADD EDX,0x174
004247ca  MOV EAX,dword ptr [ECX]
004247cc  MOV dword ptr [EDX],EAX
004247ce  MOV EAX,dword ptr [ECX + 0x4]
004247d1  MOV dword ptr [EDX + 0x4],EAX
004247d4  MOV ECX,dword ptr [ECX + 0x8]
004247d7  MOV dword ptr [EDX + 0x8],ECX
004247da  MOV EDX,dword ptr [EBP + -0x50]
004247dd  FLD float ptr [0x0044e2f0] {0.00074074}
004247e3  FMUL float ptr [EDX + 0x54]
004247e6  MOV EAX,dword ptr [EBP + -0x50]
004247e9  FSUBR float ptr [EAX + 0x158]
004247ef  MOV ECX,dword ptr [EBP + -0x50]
004247f2  FSTP float ptr [ECX + 0x158]
004247f8  MOV EDX,dword ptr [EBP + -0x50]
004247fb  FLD float ptr [0x0044e2f4] {0.00037037}
00424801  FMUL float ptr [EDX + 0x54]
00424804  MOV EAX,dword ptr [EBP + -0x50]
00424807  FSUBR float ptr [EAX + 0x15c]
0042480d  MOV ECX,dword ptr [EBP + -0x50]
00424810  FSTP float ptr [ECX + 0x15c]
00424816  MOV EDX,dword ptr [EBP + -0x50]
00424819  FLD float ptr [0x0044e2f4] {0.00037037}
0042481f  FMUL float ptr [EDX + 0x54]
00424822  MOV EAX,dword ptr [EBP + -0x50]
00424825  FSUBR float ptr [EAX + 0x160]
0042482b  MOV ECX,dword ptr [EBP + -0x50]
0042482e  FSTP float ptr [ECX + 0x160]
00424834  MOV EDX,dword ptr [EBP + -0x50]
00424837  MOV dword ptr [EDX + 0x1dc],0x3f800000
00424841  MOV EAX,dword ptr [EBP + -0x50]
00424844  MOV dword ptr [EAX + 0x1e0],0x0
0042484e  MOV ECX,dword ptr [EBP + -0x50]
00424851  MOV dword ptr [ECX + 0x1e4],0x0
0042485b  MOV EDX,dword ptr [EBP + -0x50]
0042485e  MOV dword ptr [EDX + 0x1e8],0x0
00424868  MOV EAX,dword ptr [EBP + -0x50]
0042486b  FLD float ptr [EAX + 0x234]
00424871  FCHS
00424873  MOV ECX,dword ptr [EBP + -0x50]
00424876  FDIV float ptr [ECX + 0x238]
0042487c  MOV EDX,dword ptr [EBP + -0x50]
0042487f  FSTP float ptr [EDX + 0x1ec]
00424885  MOV EAX,dword ptr [EBP + -0x50]
00424888  MOV dword ptr [EAX + 0x1f0],0x0
00424892  MOV ECX,dword ptr [EBP + -0x50]
00424895  FLD float ptr [ECX + 0x23c]
0042489b  FCHS
0042489d  MOV EDX,dword ptr [EBP + -0x50]
004248a0  FDIV float ptr [EDX + 0x238]
004248a6  MOV EAX,dword ptr [EBP + -0x50]
004248a9  FSTP float ptr [EAX + 0x1f4]
004248af  MOV ECX,dword ptr [EBP + -0x50]
004248b2  MOV dword ptr [ECX + 0x1f8],0x0
004248bc  MOV EDX,dword ptr [EBP + -0x50]
004248bf  MOV dword ptr [EDX + 0x1fc],0x0
004248c9  MOV EAX,dword ptr [EBP + -0x50]
004248cc  MOV dword ptr [EAX + 0x200],0x0
004248d6  MOV ECX,dword ptr [EBP + -0x50]
004248d9  MOV dword ptr [ECX + 0x204],0x3f800000
004248e3  MOV EDX,dword ptr [EBP + -0x50]
004248e6  MOV dword ptr [EDX + 0x208],0x0
004248f0  MOV EAX,dword ptr [EBP + -0x50]
004248f3  MOV dword ptr [EAX + 0x20c],0x0
004248fd  MOV ECX,dword ptr [EBP + -0x50]
00424900  MOV dword ptr [ECX + 0x210],0x3d4ccccd
0042490a  MOV EDX,dword ptr [EBP + -0x50]
0042490d  MOV dword ptr [EDX + 0x214],0x0
00424917  MOV EAX,dword ptr [EBP + -0x50]
0042491a  MOV dword ptr [EAX + 0x218],0x3f800000
00424924  MOV ECX,dword ptr [EBP + -0x50]
00424927  MOV EDX,dword ptr [ECX + 0x6c]
0042492a  XOR EAX,EAX
0042492c  CMP EDX,dword ptr [0x004540c0] {1}
00424932  SETZ AL
00424935  MOV ECX,dword ptr [EBP + -0x50]
00424938  MOV EDX,dword ptr [ECX + 0x70]
0042493b  XOR ECX,ECX
0042493d  CMP EDX,dword ptr [0x004540c0] {1}
00424943  SETZ CL
00424946  OR EAX,ECX
00424948  MOV EDX,dword ptr [EBP + -0x50]
0042494b  MOV ECX,dword ptr [EDX + 0x74]
0042494e  XOR EDX,EDX
00424950  CMP ECX,dword ptr [0x004540c0] {1}
00424956  SETZ DL
00424959  OR EAX,EDX
0042495b  TEST EAX,EAX
0042495d  JZ 0x0042496c
0042495f  MOV EAX,dword ptr [EBP + -0x50]
00424962  MOV dword ptr [EAX + 0x3b8],0x3
0042496c  MOV ESP,EBP
0042496e  POP EBP
0042496f  RET
