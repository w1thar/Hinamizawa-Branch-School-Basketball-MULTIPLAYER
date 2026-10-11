00419ae5  PUSH EBP
00419ae6  MOV EBP,ESP
00419ae8  SUB ESP,0x20
00419aeb  PUSH ESI
00419aec  MOV dword ptr [EBP + -0x18],ECX
00419aef  LEA ECX,[EBP + -0x10]
00419af2  CALL 0x0040130c
00419af7  MOV EAX,dword ptr [EBP + -0x18]
00419afa  MOV ECX,dword ptr [EBP + 0xc]
00419afd  CMP ECX,dword ptr [EAX + 0x268]
00419b03  JNZ 0x00419bc6
00419b09  MOV EDX,dword ptr [EBP + 0xc]
00419b0c  MOV EAX,dword ptr [EBP + -0x18]
00419b0f  MOV ESI,dword ptr [EAX + EDX*0x4 + 0xd8]
00419b16  MOV ECX,dword ptr [EBP + 0xc]
00419b19  MOV EDX,dword ptr [EBP + -0x18]
00419b1c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00419b23  MOV ECX,dword ptr [EAX + 0x164]
00419b29  PUSH ECX
00419b2a  CALL 0x00401262
00419b2f  ADD ESP,0x4
00419b32  MOV EDX,dword ptr [EBP + 0xc]
00419b35  MOV EAX,dword ptr [EBP + -0x18]
00419b38  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00419b3f  FMUL float ptr [ECX + 0x168]
00419b45  FMUL float ptr [0x0044e170] {0.8}
00419b4b  MOV EDX,dword ptr [EBP + -0x18]
00419b4e  FMUL float ptr [EDX + 0x54]
00419b51  FSUBR float ptr [ESI + 0x158]
00419b57  FSTP float ptr [EBP + -0x10]
00419b5a  MOV EAX,dword ptr [EBP + 0xc]
00419b5d  MOV ECX,dword ptr [EBP + -0x18]
00419b60  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00419b67  MOV EAX,dword ptr [EDX + 0x15c]
00419b6d  MOV dword ptr [EBP + -0xc],EAX
00419b70  MOV ECX,dword ptr [EBP + 0xc]
00419b73  MOV EDX,dword ptr [EBP + -0x18]
00419b76  MOV ESI,dword ptr [EDX + ECX*0x4 + 0xd8]
00419b7d  MOV EAX,dword ptr [EBP + 0xc]
00419b80  MOV ECX,dword ptr [EBP + -0x18]
00419b83  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00419b8a  MOV EAX,dword ptr [EDX + 0x164]
00419b90  PUSH EAX
00419b91  CALL 0x0040136b
00419b96  ADD ESP,0x4
00419b99  MOV ECX,dword ptr [EBP + 0xc]
00419b9c  MOV EDX,dword ptr [EBP + -0x18]
00419b9f  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00419ba6  FMUL float ptr [EAX + 0x168]
00419bac  FMUL float ptr [0x0044e170] {0.8}
00419bb2  MOV ECX,dword ptr [EBP + -0x18]
00419bb5  FMUL float ptr [ECX + 0x54]
00419bb8  FSUBR float ptr [ESI + 0x160]
00419bbe  FSTP float ptr [EBP + -0x8]
00419bc1  JMP 0x00419c72
00419bc6  MOV EDX,dword ptr [EBP + 0xc]
00419bc9  MOV EAX,dword ptr [EBP + -0x18]
00419bcc  MOV ESI,dword ptr [EAX + EDX*0x4 + 0xd8]
00419bd3  MOV ECX,dword ptr [EBP + 0xc]
00419bd6  MOV EDX,dword ptr [EBP + -0x18]
00419bd9  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00419be0  MOV ECX,dword ptr [EAX + 0x164]
00419be6  PUSH ECX
00419be7  CALL 0x00401262
00419bec  ADD ESP,0x4
00419bef  MOV EDX,dword ptr [EBP + 0xc]
00419bf2  MOV EAX,dword ptr [EBP + -0x18]
00419bf5  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00419bfc  FMUL float ptr [ECX + 0x168]
00419c02  MOV EDX,dword ptr [EBP + -0x18]
00419c05  FMUL float ptr [EDX + 0x54]
00419c08  FSUBR float ptr [ESI + 0x158]
00419c0e  FSTP float ptr [EBP + -0x10]
00419c11  MOV EAX,dword ptr [EBP + 0xc]
00419c14  MOV ECX,dword ptr [EBP + -0x18]
00419c17  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00419c1e  MOV EAX,dword ptr [EDX + 0x15c]
00419c24  MOV dword ptr [EBP + -0xc],EAX
00419c27  MOV ECX,dword ptr [EBP + 0xc]
00419c2a  MOV EDX,dword ptr [EBP + -0x18]
00419c2d  MOV ESI,dword ptr [EDX + ECX*0x4 + 0xd8]
00419c34  MOV EAX,dword ptr [EBP + 0xc]
00419c37  MOV ECX,dword ptr [EBP + -0x18]
00419c3a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00419c41  MOV EAX,dword ptr [EDX + 0x164]
00419c47  PUSH EAX
00419c48  CALL 0x0040136b
00419c4d  ADD ESP,0x4
00419c50  MOV ECX,dword ptr [EBP + 0xc]
00419c53  MOV EDX,dword ptr [EBP + -0x18]
00419c56  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00419c5d  FMUL float ptr [EAX + 0x168]
00419c63  MOV ECX,dword ptr [EBP + -0x18]
00419c66  FMUL float ptr [ECX + 0x54]
00419c69  FSUBR float ptr [ESI + 0x160]
00419c6f  FSTP float ptr [EBP + -0x8]
00419c72  MOV dword ptr [EBP + -0x4],0x0
00419c79  JMP 0x00419c84
00419c7b  MOV EDX,dword ptr [EBP + -0x4]
00419c7e  ADD EDX,0x1
00419c81  MOV dword ptr [EBP + -0x4],EDX
00419c84  CMP dword ptr [EBP + -0x4],0x6
00419c88  JGE 0x00419dbe
00419c8e  MOV EAX,dword ptr [EBP + -0x4]
00419c91  XOR ECX,ECX
00419c93  CMP EAX,dword ptr [EBP + 0xc]
00419c96  SETNZ CL
00419c99  MOV EDX,dword ptr [EBP + -0x4]
00419c9c  MOV EAX,dword ptr [EBP + -0x18]
00419c9f  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00419ca6  XOR EAX,EAX
00419ca8  CMP dword ptr [EDX + 0x190],0x2
00419caf  SETG AL
00419cb2  AND ECX,EAX
00419cb4  TEST ECX,ECX
00419cb6  JZ 0x00419db9
00419cbc  MOV ECX,dword ptr [EBP + -0x4]
00419cbf  MOV EDX,dword ptr [EBP + -0x18]
00419cc2  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00419cc9  FLD float ptr [EAX + 0x158]
00419ccf  FSUB float ptr [EBP + -0x10]
00419cd2  MOV ECX,dword ptr [EBP + -0x4]
00419cd5  MOV EDX,dword ptr [EBP + -0x18]
00419cd8  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00419cdf  FLD float ptr [EAX + 0x158]
00419ce5  FSUB float ptr [EBP + -0x10]
00419ce8  FMULP
00419cea  MOV ECX,dword ptr [EBP + -0x4]
00419ced  MOV EDX,dword ptr [EBP + -0x18]
00419cf0  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00419cf7  FLD float ptr [EAX + 0x160]
00419cfd  FSUB float ptr [EBP + -0x8]
00419d00  MOV ECX,dword ptr [EBP + -0x4]
00419d03  MOV EDX,dword ptr [EBP + -0x18]
00419d06  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00419d0d  FLD float ptr [EAX + 0x160]
00419d13  FSUB float ptr [EBP + -0x8]
00419d16  FMULP
00419d18  FADDP
00419d1a  FSTP float ptr [EBP + -0x14]
00419d1d  FLD float ptr [EBP + -0x14]
00419d20  FCOMP float ptr [0x0044e18c] {9}
00419d26  FNSTSW AX
00419d28  TEST AH,0x1
00419d2b  JZ 0x00419db9
00419d31  MOV ECX,dword ptr [EBP + -0x4]
00419d34  MOV EDX,dword ptr [EBP + -0x18]
00419d37  MOV ESI,dword ptr [EDX + ECX*0x4 + 0xd8]
00419d3e  MOV EAX,dword ptr [EBP + -0x4]
00419d41  MOV ECX,dword ptr [EBP + -0x18]
00419d44  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00419d4b  FLD float ptr [EDX + 0x158]
00419d51  FSUB float ptr [EBP + -0x10]
00419d54  FMUL float ptr [0x0044e0ec] {3}
00419d5a  FSTP float ptr [EBP + -0x1c]
00419d5d  MOV EAX,dword ptr [EBP + -0x14]
00419d60  PUSH EAX
00419d61  CALL 0x0040104b
00419d66  ADD ESP,0x4
00419d69  FDIVR float ptr [EBP + -0x1c]
00419d6c  FSUBR float ptr [ESI + 0x158]
00419d72  FSTP float ptr [EBP + -0x10]
00419d75  MOV ECX,dword ptr [EBP + -0x4]
00419d78  MOV EDX,dword ptr [EBP + -0x18]
00419d7b  MOV ESI,dword ptr [EDX + ECX*0x4 + 0xd8]
00419d82  MOV EAX,dword ptr [EBP + -0x4]
00419d85  MOV ECX,dword ptr [EBP + -0x18]
00419d88  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00419d8f  FLD float ptr [EDX + 0x160]
00419d95  FSUB float ptr [EBP + -0x8]
00419d98  FMUL float ptr [0x0044e0ec] {3}
00419d9e  FSTP float ptr [EBP + -0x20]
00419da1  MOV EAX,dword ptr [EBP + -0x14]
00419da4  PUSH EAX
00419da5  CALL 0x0040104b
00419daa  ADD ESP,0x4
00419dad  FDIVR float ptr [EBP + -0x20]
00419db0  FSUBR float ptr [ESI + 0x160]
00419db6  FSTP float ptr [EBP + -0x8]
00419db9  JMP 0x00419c7b
00419dbe  MOV ECX,dword ptr [EBP + 0x8]
00419dc1  MOV EDX,dword ptr [EBP + -0x10]
00419dc4  MOV dword ptr [ECX],EDX
00419dc6  MOV EAX,dword ptr [EBP + -0xc]
00419dc9  MOV dword ptr [ECX + 0x4],EAX
00419dcc  MOV EDX,dword ptr [EBP + -0x8]
00419dcf  MOV dword ptr [ECX + 0x8],EDX
00419dd2  MOV EAX,dword ptr [EBP + 0x8]
00419dd5  POP ESI
00419dd6  MOV ESP,EBP
00419dd8  POP EBP
00419dd9  RET 0x8
