0042b23c  PUSH EBP
0042b23d  MOV EBP,ESP
0042b23f  SUB ESP,0x6c
0042b242  MOV dword ptr [EBP + -0x14],ECX
0042b245  MOV EAX,dword ptr [EBP + -0x14]
0042b248  CMP dword ptr [EAX + 0x268],0x0
0042b24f  JGE 0x0042bd26
0042b255  MOV byte ptr [EBP + -0x4],0x0
0042b259  MOV byte ptr [EBP + -0x8],0x0
0042b25d  MOV ECX,dword ptr [EBP + -0x14]
0042b260  FLD float ptr [ECX + 0x250]
0042b266  FCOMP float ptr [0x0044e468] {11}
0042b26c  FNSTSW AX
0042b26e  TEST AH,0x41
0042b271  JNZ 0x0042b277
0042b273  MOV byte ptr [EBP + -0x4],0x1
0042b277  MOV EDX,dword ptr [EBP + -0x14]
0042b27a  FLD float ptr [EDX + 0x24c]
0042b280  FCOMP float ptr [0x0044e46c] {-36}
0042b286  FNSTSW AX
0042b288  TEST AH,0x41
0042b28b  JNZ 0x0042b296
0042b28d  MOV dword ptr [EBP + -0x18],0x1
0042b294  JMP 0x0042b29d
0042b296  MOV dword ptr [EBP + -0x18],0x0
0042b29d  MOV EAX,dword ptr [EBP + -0x14]
0042b2a0  FLD float ptr [EAX + 0x24c]
0042b2a6  FCOMP float ptr [0x0044e470] {36}
0042b2ac  FNSTSW AX
0042b2ae  TEST AH,0x1
0042b2b1  JZ 0x0042b2bc
0042b2b3  MOV dword ptr [EBP + -0x1c],0x1
0042b2ba  JMP 0x0042b2c3
0042b2bc  MOV dword ptr [EBP + -0x1c],0x0
0042b2c3  MOV ECX,dword ptr [EBP + -0x18]
0042b2c6  AND ECX,dword ptr [EBP + -0x1c]
0042b2c9  TEST ECX,ECX
0042b2cb  JZ 0x0042b2d1
0042b2cd  MOV byte ptr [EBP + -0x8],0x1
0042b2d1  MOV EDX,dword ptr [EBP + -0x14]
0042b2d4  FLD float ptr [EDX + 0x260]
0042b2da  FCOMP float ptr [0x0044e474] {-3.14}
0042b2e0  FNSTSW AX
0042b2e2  TEST AH,0x1
0042b2e5  JZ 0x0042b2ff
0042b2e7  MOV EAX,dword ptr [EBP + -0x14]
0042b2ea  FLD float ptr [EAX + 0x260]
0042b2f0  FADD float ptr [0x0044e478] {6.28}
0042b2f6  MOV ECX,dword ptr [EBP + -0x14]
0042b2f9  FSTP float ptr [ECX + 0x260]
0042b2ff  MOV EDX,dword ptr [EBP + -0x14]
0042b302  FLD float ptr [EDX + 0x260]
0042b308  FCOMP float ptr [0x0044e47c] {3.14}
0042b30e  FNSTSW AX
0042b310  TEST AH,0x41
0042b313  JNZ 0x0042b32d
0042b315  MOV EAX,dword ptr [EBP + -0x14]
0042b318  FLD float ptr [EAX + 0x260]
0042b31e  FSUB float ptr [0x0044e478] {6.28}
0042b324  MOV ECX,dword ptr [EBP + -0x14]
0042b327  FSTP float ptr [ECX + 0x260]
0042b32d  MOV EDX,dword ptr [EBP + -0x14]
0042b330  MOV EAX,dword ptr [EDX + 0x260]
0042b336  PUSH EAX
0042b337  CALL 0x00401262  ; sinf
0042b33c  ADD ESP,0x4
0042b33f  MOV ECX,dword ptr [EBP + -0x14]
0042b342  FMUL float ptr [ECX + 0x258]
0042b348  MOV EDX,dword ptr [EBP + -0x14]
0042b34b  FMUL float ptr [EDX + 0x54]
0042b34e  MOV EAX,dword ptr [EBP + -0x14]
0042b351  FADD float ptr [EAX + 0x24c]
0042b357  MOV ECX,dword ptr [EBP + -0x14]
0042b35a  FSTP float ptr [ECX + 0x24c]
0042b360  MOV EDX,dword ptr [EBP + -0x14]
0042b363  MOV EAX,dword ptr [EDX + 0x260]
0042b369  PUSH EAX
0042b36a  CALL 0x0040136b  ; cosf
0042b36f  ADD ESP,0x4
0042b372  MOV ECX,dword ptr [EBP + -0x14]
0042b375  FMUL float ptr [ECX + 0x258]
0042b37b  MOV EDX,dword ptr [EBP + -0x14]
0042b37e  FMUL float ptr [EDX + 0x54]
0042b381  MOV EAX,dword ptr [EBP + -0x14]
0042b384  FADD float ptr [EAX + 0x254]
0042b38a  MOV ECX,dword ptr [EBP + -0x14]
0042b38d  FSTP float ptr [ECX + 0x254]
0042b393  MOV EDX,dword ptr [EBP + -0x14]
0042b396  FLD float ptr [EDX + 0x250]
0042b39c  FCOMP float ptr [0x0044e464] {0.7}
0042b3a2  FNSTSW AX
0042b3a4  TEST AH,0x1
0042b3a7  JZ 0x0042b3b2
0042b3a9  MOV dword ptr [EBP + -0x20],0x1
0042b3b0  JMP 0x0042b3b9
0042b3b2  MOV dword ptr [EBP + -0x20],0x0
0042b3b9  MOV EAX,dword ptr [EBP + -0x14]
0042b3bc  FLD float ptr [EAX + 0x25c]
0042b3c2  FCOMP float ptr [0x0044e480] {0}
0042b3c8  FNSTSW AX
0042b3ca  TEST AH,0x1
0042b3cd  JZ 0x0042b3d8
0042b3cf  MOV dword ptr [EBP + -0x24],0x1
0042b3d6  JMP 0x0042b3df
0042b3d8  MOV dword ptr [EBP + -0x24],0x0
0042b3df  MOV ECX,dword ptr [EBP + -0x20]
0042b3e2  AND ECX,dword ptr [EBP + -0x24]
0042b3e5  TEST ECX,ECX
0042b3e7  JZ 0x0042b491
0042b3ed  MOV EDX,dword ptr [EBP + -0x14]
0042b3f0  FLD float ptr [EDX + 0x25c]
0042b3f6  FMUL float ptr [0x0044e484] {-0.8}
0042b3fc  MOV EAX,dword ptr [EBP + -0x14]
0042b3ff  FSTP float ptr [EAX + 0x25c]
0042b405  MOV ECX,dword ptr [EBP + -0x14]
0042b408  FLD float ptr [ECX + 0x258]
0042b40e  FMUL float ptr [0x0044e488] {0.8}
0042b414  MOV EDX,dword ptr [EBP + -0x14]
0042b417  FSTP float ptr [EDX + 0x258]
0042b41d  MOV EAX,dword ptr [EBP + -0x14]
0042b420  MOV dword ptr [EAX + 0x250],0x3f35c28f
0042b42a  MOV ECX,dword ptr [EBP + -0x14]
0042b42d  MOV EDX,dword ptr [ECX + 0x258]
0042b433  PUSH EDX
0042b434  CALL 0x0040104b  ; sqrtf
0042b439  ADD ESP,0x4
0042b43c  FMUL float ptr [0x0044e48c] {0.5}
0042b442  MOV EAX,dword ptr [EBP + -0x14]
0042b445  FADD float ptr [EAX + 0x264]
0042b44b  MOV ECX,dword ptr [EBP + -0x14]
0042b44e  FSTP float ptr [ECX + 0x264]
0042b454  MOV EDX,dword ptr [EBP + -0x14]
0042b457  FLD float ptr [0x0044e490] {150}
0042b45d  FMUL float ptr [EDX + 0x54]
0042b460  MOV EAX,dword ptr [EBP + -0x14]
0042b463  FCOMP float ptr [EAX + 0x25c]
0042b469  FNSTSW AX
0042b46b  TEST AH,0x1
0042b46e  JZ 0x0042b48f
0042b470  MOV ECX,dword ptr [EBP + -0x14]
0042b473  XOR EDX,EDX
0042b475  MOV DL,byte ptr [ECX + 0x3a7]
0042b47b  TEST EDX,EDX
0042b47d  JZ 0x0042b48f
0042b47f  PUSH 0x3
0042b481  MOV EAX,dword ptr [EBP + -0x14]
0042b484  MOV ECX,dword ptr [EAX + 0xc0]
0042b48a  CALL 0x00401258  ; Sound::Play
0042b48f  JMP 0x0042b4d0
0042b491  MOV ECX,dword ptr [EBP + -0x14]
0042b494  FLD float ptr [0x0044e494] {20}
0042b49a  FMUL float ptr [ECX + 0x54]
0042b49d  MOV EDX,dword ptr [EBP + -0x14]
0042b4a0  FSUBR float ptr [EDX + 0x25c]
0042b4a6  MOV EAX,dword ptr [EBP + -0x14]
0042b4a9  FSTP float ptr [EAX + 0x25c]
0042b4af  MOV ECX,dword ptr [EBP + -0x14]
0042b4b2  MOV EDX,dword ptr [EBP + -0x14]
0042b4b5  FLD float ptr [ECX + 0x25c]
0042b4bb  FMUL float ptr [EDX + 0x54]
0042b4be  MOV EAX,dword ptr [EBP + -0x14]
0042b4c1  FADD float ptr [EAX + 0x250]
0042b4c7  MOV ECX,dword ptr [EBP + -0x14]
0042b4ca  FSTP float ptr [ECX + 0x250]
0042b4d0  MOV EDX,dword ptr [EBP + -0x14]
0042b4d3  FLD float ptr [EDX + 0x24c]
0042b4d9  FCOMP float ptr [0x0044e498] {-30}
0042b4df  FNSTSW AX
0042b4e1  TEST AH,0x1
0042b4e4  JZ 0x0042b4ef
0042b4e6  MOV dword ptr [EBP + -0x28],0x1
0042b4ed  JMP 0x0042b4f6
0042b4ef  MOV dword ptr [EBP + -0x28],0x0
0042b4f6  MOV EAX,dword ptr [EBP + -0x14]
0042b4f9  FLD float ptr [EAX + 0x250]
0042b4ff  FCOMP float ptr [0x0044e468] {11}
0042b505  FNSTSW AX
0042b507  TEST AH,0x1
0042b50a  JZ 0x0042b515
0042b50c  MOV dword ptr [EBP + -0x2c],0x1
0042b513  JMP 0x0042b51c
0042b515  MOV dword ptr [EBP + -0x2c],0x0
0042b51c  MOV ECX,dword ptr [EBP + -0x14]
0042b51f  FLD float ptr [ECX + 0x25c]
0042b525  FCOMP float ptr [0x0044e480] {0}
0042b52b  FNSTSW AX
0042b52d  TEST AH,0x1
0042b530  JZ 0x0042b53b
0042b532  MOV dword ptr [EBP + -0x30],0x1
0042b539  JMP 0x0042b542
0042b53b  MOV dword ptr [EBP + -0x30],0x0
0042b542  MOV EDX,dword ptr [EBP + -0x4]
0042b545  AND EDX,0xff
0042b54b  MOV EAX,dword ptr [EBP + -0x28]
0042b54e  AND EAX,EDX
0042b550  AND EAX,dword ptr [EBP + -0x2c]
0042b553  AND EAX,dword ptr [EBP + -0x30]
0042b556  TEST EAX,EAX
0042b558  JZ 0x0042b7c6
0042b55e  MOV ECX,dword ptr [EBP + -0x14]
0042b561  FLD float ptr [ECX + 0x24c]
0042b567  FADD float ptr [0x0044e49c] {35}
0042b56d  MOV EDX,dword ptr [EBP + -0x14]
0042b570  FLD float ptr [EDX + 0x24c]
0042b576  FADD float ptr [0x0044e49c] {35}
0042b57c  FMULP
0042b57e  MOV EAX,dword ptr [EBP + -0x14]
0042b581  MOV ECX,dword ptr [EBP + -0x14]
0042b584  FLD float ptr [EAX + 0x254]
0042b58a  FMUL float ptr [ECX + 0x254]
0042b590  FADDP
0042b592  FSTP float ptr [EBP + -0xc]
0042b595  FLD float ptr [EBP + -0xc]
0042b598  FCOMP float ptr [0x0044e4a0] {0.25}
0042b59e  FNSTSW AX
0042b5a0  TEST AH,0x1
0042b5a3  JZ 0x0042b66c
0042b5a9  MOV EDX,dword ptr [EBP + -0x14]
0042b5ac  MOV dword ptr [EDX + 0x258],0x0
0042b5b6  PUSH 0x5
0042b5b8  MOV EAX,dword ptr [EBP + -0x14]
0042b5bb  MOV ECX,dword ptr [EAX + 0xc0]
0042b5c1  CALL 0x00401258  ; Sound::Play
0042b5c6  MOV ECX,dword ptr [EBP + -0x14]
0042b5c9  XOR EDX,EDX
0042b5cb  MOV DL,byte ptr [ECX + 0x3a6]
0042b5d1  TEST EDX,EDX
0042b5d3  JZ 0x0042b61f
0042b5d5  MOV EAX,dword ptr [EBP + -0x14]
0042b5d8  XOR ECX,ECX
0042b5da  MOV CL,byte ptr [EAX + 0x3a8]
0042b5e0  TEST ECX,ECX
0042b5e2  JZ 0x0042b5fb
0042b5e4  MOV EDX,dword ptr [EBP + -0x14]
0042b5e7  MOV EAX,dword ptr [EDX + 0x3dc]
0042b5ed  ADD EAX,0x3
0042b5f0  MOV ECX,dword ptr [EBP + -0x14]
0042b5f3  MOV dword ptr [ECX + 0x3dc],EAX
0042b5f9  JMP 0x0042b610
0042b5fb  MOV EDX,dword ptr [EBP + -0x14]
0042b5fe  MOV EAX,dword ptr [EDX + 0x3dc]
0042b604  ADD EAX,0x2
0042b607  MOV ECX,dword ptr [EBP + -0x14]
0042b60a  MOV dword ptr [ECX + 0x3dc],EAX
0042b610  MOV EDX,dword ptr [EBP + -0x14]
0042b613  MOV dword ptr [EDX + 0x418],0x3
0042b61d  JMP 0x0042b667
0042b61f  MOV EAX,dword ptr [EBP + -0x14]
0042b622  XOR ECX,ECX
0042b624  MOV CL,byte ptr [EAX + 0x3a8]
0042b62a  TEST ECX,ECX
0042b62c  JZ 0x0042b645
0042b62e  MOV EDX,dword ptr [EBP + -0x14]
0042b631  MOV EAX,dword ptr [EDX + 0x3d8]
0042b637  ADD EAX,0x3
0042b63a  MOV ECX,dword ptr [EBP + -0x14]
0042b63d  MOV dword ptr [ECX + 0x3d8],EAX
0042b643  JMP 0x0042b65a
0042b645  MOV EDX,dword ptr [EBP + -0x14]
0042b648  MOV EAX,dword ptr [EDX + 0x3d8]
0042b64e  ADD EAX,0x2
0042b651  MOV ECX,dword ptr [EBP + -0x14]
0042b654  MOV dword ptr [ECX + 0x3d8],EAX
0042b65a  MOV EDX,dword ptr [EBP + -0x14]
0042b65d  MOV dword ptr [EDX + 0x418],0x1
0042b667  JMP 0x0042b7c6
0042b66c  FLD float ptr [EBP + -0xc]
0042b66f  FCOMP float ptr [0x0044e4a4] {1.5}
0042b675  FNSTSW AX
0042b677  TEST AH,0x1
0042b67a  JZ 0x0042b748
0042b680  MOV EAX,dword ptr [EBP + -0x14]
0042b683  FLD float ptr [EAX + 0x258]
0042b689  FMUL float ptr [0x0044e4a8] {0.2}
0042b68f  MOV ECX,dword ptr [EBP + -0x14]
0042b692  FSTP float ptr [ECX + 0x258]
0042b698  MOV EDX,dword ptr [EBP + -0x14]
0042b69b  FLD float ptr [EDX + 0x25c]
0042b6a1  FMUL float ptr [0x0044e4ac] {-0.5}
0042b6a7  MOV EAX,dword ptr [EBP + -0x14]
0042b6aa  FSTP float ptr [EAX + 0x25c]
0042b6b0  MOV ECX,dword ptr [EBP + -0x14]
0042b6b3  FLD float ptr [ECX + 0x25c]
0042b6b9  FCOMP float ptr [0x0044e4b0] {1}
0042b6bf  FNSTSW AX
0042b6c1  TEST AH,0x1
0042b6c4  JZ 0x0042b6d3
0042b6c6  MOV EDX,dword ptr [EBP + -0x14]
0042b6c9  MOV dword ptr [EDX + 0x25c],0x3f800000
0042b6d3  MOV EAX,dword ptr [EBP + -0x14]
0042b6d6  FLD float ptr [EAX + 0x258]
0042b6dc  FCOMP float ptr [0x0044e4b0] {1}
0042b6e2  FNSTSW AX
0042b6e4  TEST AH,0x1
0042b6e7  JZ 0x0042b6f6
0042b6e9  MOV ECX,dword ptr [EBP + -0x14]
0042b6ec  MOV dword ptr [ECX + 0x258],0x3f800000
0042b6f6  MOV EDX,dword ptr [EBP + -0x14]
0042b6f9  FLD float ptr [EDX + 0x254]
0042b6ff  FCHS
0042b701  PUSH ECX
0042b702  FSTP float ptr [ESP]
0042b705  MOV EAX,dword ptr [EBP + -0x14]
0042b708  FLD float ptr [0x0044e4b4] {-35}
0042b70e  FSUB float ptr [EAX + 0x24c]
0042b714  PUSH ECX
0042b715  FSTP float ptr [ESP]
0042b718  CALL 0x00401127  ; Atan2
0042b71d  ADD ESP,0x8
0042b720  MOV ECX,dword ptr [EBP + -0x14]
0042b723  FSTP float ptr [ECX + 0x260]
0042b729  MOV EDX,dword ptr [EBP + -0x14]
0042b72c  MOV dword ptr [EDX + 0x250],0x41300419
0042b736  PUSH 0x4
0042b738  MOV EAX,dword ptr [EBP + -0x14]
0042b73b  MOV ECX,dword ptr [EAX + 0xc0]
0042b741  CALL 0x00401258  ; Sound::Play
0042b746  JMP 0x0042b7c6
0042b748  FLD float ptr [EBP + -0xc]
0042b74b  FCOMP float ptr [0x0044e4b8] {4}
0042b751  FNSTSW AX
0042b753  TEST AH,0x1
0042b756  JZ 0x0042b7c6
0042b758  MOV ECX,dword ptr [EBP + -0x14]
0042b75b  FLD float ptr [ECX + 0x258]
0042b761  FMUL float ptr [0x0044e4b0] {1}
0042b767  MOV EDX,dword ptr [EBP + -0x14]
0042b76a  FSTP float ptr [EDX + 0x258]
0042b770  MOV EAX,dword ptr [EBP + -0x14]
0042b773  FLD float ptr [EAX + 0x25c]
0042b779  FMUL float ptr [0x0044e4bc] {-0.2}
0042b77f  MOV ECX,dword ptr [EBP + -0x14]
0042b782  FSTP float ptr [ECX + 0x25c]
0042b788  MOV EDX,dword ptr [EBP + -0x14]
0042b78b  MOV EAX,dword ptr [EDX + 0x254]
0042b791  PUSH EAX
0042b792  MOV ECX,dword ptr [EBP + -0x14]
0042b795  FLD float ptr [ECX + 0x24c]
0042b79b  FADD float ptr [0x0044e49c] {35}
0042b7a1  PUSH ECX
0042b7a2  FSTP float ptr [ESP]
0042b7a5  CALL 0x00401127  ; Atan2
0042b7aa  ADD ESP,0x8
0042b7ad  MOV EDX,dword ptr [EBP + -0x14]
0042b7b0  FSTP float ptr [EDX + 0x260]
0042b7b6  PUSH 0x4
0042b7b8  MOV EAX,dword ptr [EBP + -0x14]
0042b7bb  MOV ECX,dword ptr [EAX + 0xc0]
0042b7c1  CALL 0x00401258  ; Sound::Play
0042b7c6  MOV ECX,dword ptr [EBP + -0x14]
0042b7c9  FLD float ptr [ECX + 0x24c]
0042b7cf  FCOMP float ptr [0x0044e4c0] {30}
0042b7d5  FNSTSW AX
0042b7d7  TEST AH,0x41
0042b7da  JNZ 0x0042b7e5
0042b7dc  MOV dword ptr [EBP + -0x34],0x1
0042b7e3  JMP 0x0042b7ec
0042b7e5  MOV dword ptr [EBP + -0x34],0x0
0042b7ec  MOV EDX,dword ptr [EBP + -0x14]
0042b7ef  FLD float ptr [EDX + 0x250]
0042b7f5  FCOMP float ptr [0x0044e468] {11}
0042b7fb  FNSTSW AX
0042b7fd  TEST AH,0x1
0042b800  JZ 0x0042b80b
0042b802  MOV dword ptr [EBP + -0x38],0x1
0042b809  JMP 0x0042b812
0042b80b  MOV dword ptr [EBP + -0x38],0x0
0042b812  MOV EAX,dword ptr [EBP + -0x14]
0042b815  FLD float ptr [EAX + 0x25c]
0042b81b  FCOMP float ptr [0x0044e480] {0}
0042b821  FNSTSW AX
0042b823  TEST AH,0x1
0042b826  JZ 0x0042b831
0042b828  MOV dword ptr [EBP + -0x3c],0x1
0042b82f  JMP 0x0042b838
0042b831  MOV dword ptr [EBP + -0x3c],0x0
0042b838  MOV ECX,dword ptr [EBP + -0x4]
0042b83b  AND ECX,0xff
0042b841  MOV EDX,dword ptr [EBP + -0x34]
0042b844  AND EDX,ECX
0042b846  AND EDX,dword ptr [EBP + -0x38]
0042b849  AND EDX,dword ptr [EBP + -0x3c]
0042b84c  TEST EDX,EDX
0042b84e  JZ 0x0042babc
0042b854  MOV EAX,dword ptr [EBP + -0x14]
0042b857  FLD float ptr [EAX + 0x24c]
0042b85d  FSUB float ptr [0x0044e49c] {35}
0042b863  MOV ECX,dword ptr [EBP + -0x14]
0042b866  FLD float ptr [ECX + 0x24c]
0042b86c  FSUB float ptr [0x0044e49c] {35}
0042b872  FMULP
0042b874  MOV EDX,dword ptr [EBP + -0x14]
0042b877  MOV EAX,dword ptr [EBP + -0x14]
0042b87a  FLD float ptr [EDX + 0x254]
0042b880  FMUL float ptr [EAX + 0x254]
0042b886  FADDP
0042b888  FSTP float ptr [EBP + -0x10]
0042b88b  FLD float ptr [EBP + -0x10]
0042b88e  FCOMP float ptr [0x0044e4a0] {0.25}
0042b894  FNSTSW AX
0042b896  TEST AH,0x1
0042b899  JZ 0x0042b962
0042b89f  MOV ECX,dword ptr [EBP + -0x14]
0042b8a2  MOV dword ptr [ECX + 0x258],0x0
0042b8ac  PUSH 0x5
0042b8ae  MOV EDX,dword ptr [EBP + -0x14]
0042b8b1  MOV ECX,dword ptr [EDX + 0xc0]
0042b8b7  CALL 0x00401258  ; Sound::Play
0042b8bc  MOV EAX,dword ptr [EBP + -0x14]
0042b8bf  XOR ECX,ECX
0042b8c1  MOV CL,byte ptr [EAX + 0x3a6]
0042b8c7  TEST ECX,ECX
0042b8c9  JZ 0x0042b915
0042b8cb  MOV EDX,dword ptr [EBP + -0x14]
0042b8ce  XOR EAX,EAX
0042b8d0  MOV AL,byte ptr [EDX + 0x3a8]
0042b8d6  TEST EAX,EAX
0042b8d8  JZ 0x0042b8f1
0042b8da  MOV ECX,dword ptr [EBP + -0x14]
0042b8dd  MOV EDX,dword ptr [ECX + 0x3d8]
0042b8e3  ADD EDX,0x3
0042b8e6  MOV EAX,dword ptr [EBP + -0x14]
0042b8e9  MOV dword ptr [EAX + 0x3d8],EDX
0042b8ef  JMP 0x0042b906
0042b8f1  MOV ECX,dword ptr [EBP + -0x14]
0042b8f4  MOV EDX,dword ptr [ECX + 0x3d8]
0042b8fa  ADD EDX,0x2
0042b8fd  MOV EAX,dword ptr [EBP + -0x14]
0042b900  MOV dword ptr [EAX + 0x3d8],EDX
0042b906  MOV ECX,dword ptr [EBP + -0x14]
0042b909  MOV dword ptr [ECX + 0x418],0x4
0042b913  JMP 0x0042b95d
0042b915  MOV EDX,dword ptr [EBP + -0x14]
0042b918  XOR EAX,EAX
0042b91a  MOV AL,byte ptr [EDX + 0x3a8]
0042b920  TEST EAX,EAX
0042b922  JZ 0x0042b93b
0042b924  MOV ECX,dword ptr [EBP + -0x14]
0042b927  MOV EDX,dword ptr [ECX + 0x3dc]
0042b92d  ADD EDX,0x3
0042b930  MOV EAX,dword ptr [EBP + -0x14]
0042b933  MOV dword ptr [EAX + 0x3dc],EDX
0042b939  JMP 0x0042b950
0042b93b  MOV ECX,dword ptr [EBP + -0x14]
0042b93e  MOV EDX,dword ptr [ECX + 0x3dc]
0042b944  ADD EDX,0x2
0042b947  MOV EAX,dword ptr [EBP + -0x14]
0042b94a  MOV dword ptr [EAX + 0x3dc],EDX
0042b950  MOV ECX,dword ptr [EBP + -0x14]
0042b953  MOV dword ptr [ECX + 0x418],0x2
0042b95d  JMP 0x0042babc
0042b962  FLD float ptr [EBP + -0x10]
0042b965  FCOMP float ptr [0x0044e4a4] {1.5}
0042b96b  FNSTSW AX
0042b96d  TEST AH,0x1
0042b970  JZ 0x0042ba3e
0042b976  MOV EDX,dword ptr [EBP + -0x14]
0042b979  FLD float ptr [EDX + 0x258]
0042b97f  FMUL float ptr [0x0044e4a8] {0.2}
0042b985  MOV EAX,dword ptr [EBP + -0x14]
0042b988  FSTP float ptr [EAX + 0x258]
0042b98e  MOV ECX,dword ptr [EBP + -0x14]
0042b991  FLD float ptr [ECX + 0x25c]
0042b997  FMUL float ptr [0x0044e4ac] {-0.5}
0042b99d  MOV EDX,dword ptr [EBP + -0x14]
0042b9a0  FSTP float ptr [EDX + 0x25c]
0042b9a6  MOV EAX,dword ptr [EBP + -0x14]
0042b9a9  FLD float ptr [EAX + 0x25c]
0042b9af  FCOMP float ptr [0x0044e4b0] {1}
0042b9b5  FNSTSW AX
0042b9b7  TEST AH,0x1
0042b9ba  JZ 0x0042b9c9
0042b9bc  MOV ECX,dword ptr [EBP + -0x14]
0042b9bf  MOV dword ptr [ECX + 0x25c],0x3f800000
0042b9c9  MOV EDX,dword ptr [EBP + -0x14]
0042b9cc  FLD float ptr [EDX + 0x258]
0042b9d2  FCOMP float ptr [0x0044e4b0] {1}
0042b9d8  FNSTSW AX
0042b9da  TEST AH,0x1
0042b9dd  JZ 0x0042b9ec
0042b9df  MOV EAX,dword ptr [EBP + -0x14]
0042b9e2  MOV dword ptr [EAX + 0x258],0x3f800000
0042b9ec  MOV ECX,dword ptr [EBP + -0x14]
0042b9ef  FLD float ptr [ECX + 0x254]
0042b9f5  FCHS
0042b9f7  PUSH ECX
0042b9f8  FSTP float ptr [ESP]
0042b9fb  MOV EDX,dword ptr [EBP + -0x14]
0042b9fe  FLD float ptr [0x0044e49c] {35}
0042ba04  FSUB float ptr [EDX + 0x24c]
0042ba0a  PUSH ECX
0042ba0b  FSTP float ptr [ESP]
0042ba0e  CALL 0x00401127  ; Atan2
0042ba13  ADD ESP,0x8
0042ba16  MOV EAX,dword ptr [EBP + -0x14]
0042ba19  FSTP float ptr [EAX + 0x260]
0042ba1f  MOV ECX,dword ptr [EBP + -0x14]
0042ba22  MOV dword ptr [ECX + 0x250],0x41300419
0042ba2c  PUSH 0x4
0042ba2e  MOV EDX,dword ptr [EBP + -0x14]
0042ba31  MOV ECX,dword ptr [EDX + 0xc0]
0042ba37  CALL 0x00401258  ; Sound::Play
0042ba3c  JMP 0x0042babc
0042ba3e  FLD float ptr [EBP + -0x10]
0042ba41  FCOMP float ptr [0x0044e4b8] {4}
0042ba47  FNSTSW AX
0042ba49  TEST AH,0x1
0042ba4c  JZ 0x0042babc
0042ba4e  MOV EAX,dword ptr [EBP + -0x14]
0042ba51  FLD float ptr [EAX + 0x258]
0042ba57  FMUL float ptr [0x0044e4b0] {1}
0042ba5d  MOV ECX,dword ptr [EBP + -0x14]
0042ba60  FSTP float ptr [ECX + 0x258]
0042ba66  MOV EDX,dword ptr [EBP + -0x14]
0042ba69  FLD float ptr [EDX + 0x25c]
0042ba6f  FMUL float ptr [0x0044e4bc] {-0.2}
0042ba75  MOV EAX,dword ptr [EBP + -0x14]
0042ba78  FSTP float ptr [EAX + 0x25c]
0042ba7e  MOV ECX,dword ptr [EBP + -0x14]
0042ba81  MOV EDX,dword ptr [ECX + 0x254]
0042ba87  PUSH EDX
0042ba88  MOV EAX,dword ptr [EBP + -0x14]
0042ba8b  FLD float ptr [EAX + 0x24c]
0042ba91  FSUB float ptr [0x0044e49c] {35}
0042ba97  PUSH ECX
0042ba98  FSTP float ptr [ESP]
0042ba9b  CALL 0x00401127  ; Atan2
0042baa0  ADD ESP,0x8
0042baa3  MOV ECX,dword ptr [EBP + -0x14]
0042baa6  FSTP float ptr [ECX + 0x260]
0042baac  PUSH 0x4
0042baae  MOV EDX,dword ptr [EBP + -0x14]
0042bab1  MOV ECX,dword ptr [EDX + 0xc0]
0042bab7  CALL 0x00401258  ; Sound::Play
0042babc  MOV EAX,dword ptr [EBP + -0x14]
0042babf  FLD float ptr [EAX + 0x24c]
0042bac5  FCOMP float ptr [0x0044e46c] {-36}
0042bacb  FNSTSW AX
0042bacd  TEST AH,0x1
0042bad0  JZ 0x0042badb
0042bad2  MOV dword ptr [EBP + -0x40],0x1
0042bad9  JMP 0x0042bae2
0042badb  MOV dword ptr [EBP + -0x40],0x0
0042bae2  MOV ECX,dword ptr [EBP + -0x14]
0042bae5  FLD float ptr [ECX + 0x260]
0042baeb  FCOMP float ptr [0x0044e480] {0}
0042baf1  FNSTSW AX
0042baf3  TEST AH,0x1
0042baf6  JZ 0x0042bb01
0042baf8  MOV dword ptr [EBP + -0x44],0x1
0042baff  JMP 0x0042bb08
0042bb01  MOV dword ptr [EBP + -0x44],0x0
0042bb08  MOV EDX,dword ptr [EBP + -0x8]
0042bb0b  AND EDX,0xff
0042bb11  MOV EAX,dword ptr [EBP + -0x40]
0042bb14  AND EAX,EDX
0042bb16  AND EAX,dword ptr [EBP + -0x44]
0042bb19  TEST EAX,EAX
0042bb1b  JZ 0x0042bbf1
0042bb21  MOV ECX,dword ptr [EBP + -0x14]
0042bb24  FLD float ptr [ECX + 0x254]
0042bb2a  FCOMP float ptr [0x0044e4c4] {-4}
0042bb30  FNSTSW AX
0042bb32  TEST AH,0x41
0042bb35  JNZ 0x0042bb40
0042bb37  MOV dword ptr [EBP + -0x48],0x1
0042bb3e  JMP 0x0042bb47
0042bb40  MOV dword ptr [EBP + -0x48],0x0
0042bb47  MOV EDX,dword ptr [EBP + -0x14]
0042bb4a  FLD float ptr [EDX + 0x254]
0042bb50  FCOMP float ptr [0x0044e4b8] {4}
0042bb56  FNSTSW AX
0042bb58  TEST AH,0x1
0042bb5b  JZ 0x0042bb66
0042bb5d  MOV dword ptr [EBP + -0x4c],0x1
0042bb64  JMP 0x0042bb6d
0042bb66  MOV dword ptr [EBP + -0x4c],0x0
0042bb6d  MOV EAX,dword ptr [EBP + -0x14]
0042bb70  FLD float ptr [EAX + 0x250]
0042bb76  FCOMP float ptr [0x0044e4c8] {9}
0042bb7c  FNSTSW AX
0042bb7e  TEST AH,0x41
0042bb81  JNZ 0x0042bb8c
0042bb83  MOV dword ptr [EBP + -0x50],0x1
0042bb8a  JMP 0x0042bb93
0042bb8c  MOV dword ptr [EBP + -0x50],0x0
0042bb93  MOV ECX,dword ptr [EBP + -0x14]
0042bb96  FLD float ptr [ECX + 0x250]
0042bb9c  FCOMP float ptr [0x0044e4cc] {16}
0042bba2  FNSTSW AX
0042bba4  TEST AH,0x1
0042bba7  JZ 0x0042bbb2
0042bba9  MOV dword ptr [EBP + -0x54],0x1
0042bbb0  JMP 0x0042bbb9
0042bbb2  MOV dword ptr [EBP + -0x54],0x0
0042bbb9  MOV EDX,dword ptr [EBP + -0x48]
0042bbbc  AND EDX,dword ptr [EBP + -0x4c]
0042bbbf  AND EDX,dword ptr [EBP + -0x50]
0042bbc2  AND EDX,dword ptr [EBP + -0x54]
0042bbc5  TEST EDX,EDX
0042bbc7  JZ 0x0042bbf1
0042bbc9  MOV EAX,dword ptr [EBP + -0x14]
0042bbcc  FLD float ptr [EAX + 0x260]
0042bbd2  FMUL float ptr [0x0044e4d0] {-1}
0042bbd8  MOV ECX,dword ptr [EBP + -0x14]
0042bbdb  FSTP float ptr [ECX + 0x260]
0042bbe1  PUSH 0x4
0042bbe3  MOV EDX,dword ptr [EBP + -0x14]
0042bbe6  MOV ECX,dword ptr [EDX + 0xc0]
0042bbec  CALL 0x00401258  ; Sound::Play
0042bbf1  MOV EAX,dword ptr [EBP + -0x14]
0042bbf4  FLD float ptr [EAX + 0x24c]
0042bbfa  FCOMP float ptr [0x0044e470] {36}
0042bc00  FNSTSW AX
0042bc02  TEST AH,0x41
0042bc05  JNZ 0x0042bc10
0042bc07  MOV dword ptr [EBP + -0x58],0x1
0042bc0e  JMP 0x0042bc17
0042bc10  MOV dword ptr [EBP + -0x58],0x0
0042bc17  MOV ECX,dword ptr [EBP + -0x14]
0042bc1a  FLD float ptr [ECX + 0x260]
0042bc20  FCOMP float ptr [0x0044e480] {0}
0042bc26  FNSTSW AX
0042bc28  TEST AH,0x41
0042bc2b  JNZ 0x0042bc36
0042bc2d  MOV dword ptr [EBP + -0x5c],0x1
0042bc34  JMP 0x0042bc3d
0042bc36  MOV dword ptr [EBP + -0x5c],0x0
0042bc3d  MOV EDX,dword ptr [EBP + -0x8]
0042bc40  AND EDX,0xff
0042bc46  MOV EAX,dword ptr [EBP + -0x58]
0042bc49  AND EAX,EDX
0042bc4b  AND EAX,dword ptr [EBP + -0x5c]
0042bc4e  TEST EAX,EAX
0042bc50  JZ 0x0042bd26
0042bc56  MOV ECX,dword ptr [EBP + -0x14]
0042bc59  FLD float ptr [ECX + 0x254]
0042bc5f  FCOMP float ptr [0x0044e4c4] {-4}
0042bc65  FNSTSW AX
0042bc67  TEST AH,0x41
0042bc6a  JNZ 0x0042bc75
0042bc6c  MOV dword ptr [EBP + -0x60],0x1
0042bc73  JMP 0x0042bc7c
0042bc75  MOV dword ptr [EBP + -0x60],0x0
0042bc7c  MOV EDX,dword ptr [EBP + -0x14]
0042bc7f  FLD float ptr [EDX + 0x254]
0042bc85  FCOMP float ptr [0x0044e4b8] {4}
0042bc8b  FNSTSW AX
0042bc8d  TEST AH,0x1
0042bc90  JZ 0x0042bc9b
0042bc92  MOV dword ptr [EBP + -0x64],0x1
0042bc99  JMP 0x0042bca2
0042bc9b  MOV dword ptr [EBP + -0x64],0x0
0042bca2  MOV EAX,dword ptr [EBP + -0x14]
0042bca5  FLD float ptr [EAX + 0x250]
0042bcab  FCOMP float ptr [0x0044e4c8] {9}
0042bcb1  FNSTSW AX
0042bcb3  TEST AH,0x41
0042bcb6  JNZ 0x0042bcc1
0042bcb8  MOV dword ptr [EBP + -0x68],0x1
0042bcbf  JMP 0x0042bcc8
0042bcc1  MOV dword ptr [EBP + -0x68],0x0
0042bcc8  MOV ECX,dword ptr [EBP + -0x14]
0042bccb  FLD float ptr [ECX + 0x250]
0042bcd1  FCOMP float ptr [0x0044e4cc] {16}
0042bcd7  FNSTSW AX
0042bcd9  TEST AH,0x1
0042bcdc  JZ 0x0042bce7
0042bcde  MOV dword ptr [EBP + -0x6c],0x1
0042bce5  JMP 0x0042bcee
0042bce7  MOV dword ptr [EBP + -0x6c],0x0
0042bcee  MOV EDX,dword ptr [EBP + -0x60]
0042bcf1  AND EDX,dword ptr [EBP + -0x64]
0042bcf4  AND EDX,dword ptr [EBP + -0x68]
0042bcf7  AND EDX,dword ptr [EBP + -0x6c]
0042bcfa  TEST EDX,EDX
0042bcfc  JZ 0x0042bd26
0042bcfe  MOV EAX,dword ptr [EBP + -0x14]
0042bd01  FLD float ptr [EAX + 0x260]
0042bd07  FMUL float ptr [0x0044e4d0] {-1}
0042bd0d  MOV ECX,dword ptr [EBP + -0x14]
0042bd10  FSTP float ptr [ECX + 0x260]
0042bd16  PUSH 0x4
0042bd18  MOV EDX,dword ptr [EBP + -0x14]
0042bd1b  MOV ECX,dword ptr [EDX + 0xc0]
0042bd21  CALL 0x00401258  ; Sound::Play
0042bd26  MOV ESP,EBP
0042bd28  POP EBP
0042bd29  RET
