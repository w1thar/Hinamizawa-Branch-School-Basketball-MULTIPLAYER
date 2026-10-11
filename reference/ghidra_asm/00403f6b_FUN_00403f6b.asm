00403f6b  PUSH EBP
00403f6c  MOV EBP,ESP
00403f6e  SUB ESP,0x18
00403f71  FLD float ptr [EBP + 0x18]
00403f74  FDIV float ptr [0x0044e070] {2}
00403f7a  PUSH ECX
00403f7b  FSTP float ptr [ESP]
00403f7e  CALL 0x00401262  ; sinf
00403f83  ADD ESP,0x4
00403f86  FSTP float ptr [EBP + -0xc]
00403f89  FLD float ptr [EBP + 0x1c]
00403f8c  FDIV float ptr [0x0044e070] {2}
00403f92  PUSH ECX
00403f93  FSTP float ptr [ESP]
00403f96  CALL 0x00401262  ; sinf
00403f9b  ADD ESP,0x4
00403f9e  FSTP float ptr [EBP + -0x10]
00403fa1  FLD float ptr [EBP + 0x20]
00403fa4  FDIV float ptr [0x0044e070] {2}
00403faa  PUSH ECX
00403fab  FSTP float ptr [ESP]
00403fae  CALL 0x00401262  ; sinf
00403fb3  ADD ESP,0x4
00403fb6  FSTP float ptr [EBP + -0x18]
00403fb9  FLD float ptr [EBP + 0x18]
00403fbc  FDIV float ptr [0x0044e070] {2}
00403fc2  PUSH ECX
00403fc3  FSTP float ptr [ESP]
00403fc6  CALL 0x0040136b  ; cosf
00403fcb  ADD ESP,0x4
00403fce  FSTP float ptr [EBP + -0x8]
00403fd1  FLD float ptr [EBP + 0x1c]
00403fd4  FDIV float ptr [0x0044e070] {2}
00403fda  PUSH ECX
00403fdb  FSTP float ptr [ESP]
00403fde  CALL 0x0040136b  ; cosf
00403fe3  ADD ESP,0x4
00403fe6  FSTP float ptr [EBP + -0x14]
00403fe9  FLD float ptr [EBP + 0x20]
00403fec  FDIV float ptr [0x0044e070] {2}
00403ff2  PUSH ECX
00403ff3  FSTP float ptr [ESP]
00403ff6  CALL 0x0040136b  ; cosf
00403ffb  ADD ESP,0x4
00403ffe  FSTP float ptr [EBP + -0x4]
00404001  FLD float ptr [EBP + -0x18]
00404004  FMUL float ptr [EBP + -0x14]
00404007  FMUL float ptr [EBP + -0x8]
0040400a  FLD float ptr [EBP + -0x4]
0040400d  FMUL float ptr [EBP + -0x10]
00404010  FMUL float ptr [EBP + -0xc]
00404013  FSUBP
00404015  MOV EAX,dword ptr [EBP + 0x8]
00404018  FSTP float ptr [EAX]
0040401a  FLD float ptr [EBP + -0x4]
0040401d  FMUL float ptr [EBP + -0x10]
00404020  FMUL float ptr [EBP + -0x8]
00404023  FLD float ptr [EBP + -0x18]
00404026  FMUL float ptr [EBP + -0x14]
00404029  FMUL float ptr [EBP + -0xc]
0040402c  FADDP
0040402e  MOV ECX,dword ptr [EBP + 0xc]
00404031  FSTP float ptr [ECX]
00404033  FLD float ptr [EBP + -0x4]
00404036  FMUL float ptr [EBP + -0x14]
00404039  FMUL float ptr [EBP + -0xc]
0040403c  FLD float ptr [EBP + -0x18]
0040403f  FMUL float ptr [EBP + -0x10]
00404042  FMUL float ptr [EBP + -0x8]
00404045  FSUBP
00404047  MOV EDX,dword ptr [EBP + 0x10]
0040404a  FSTP float ptr [EDX]
0040404c  FLD float ptr [EBP + -0x4]
0040404f  FMUL float ptr [EBP + -0x14]
00404052  FMUL float ptr [EBP + -0x8]
00404055  FLD float ptr [EBP + -0x18]
00404058  FMUL float ptr [EBP + -0x10]
0040405b  FMUL float ptr [EBP + -0xc]
0040405e  FADDP
00404060  MOV EAX,dword ptr [EBP + 0x14]
00404063  FSTP float ptr [EAX]
00404065  MOV ESP,EBP
00404067  POP EBP
00404068  RET
