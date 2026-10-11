0040d99a  PUSH EBP
0040d99b  MOV EBP,ESP
0040d99d  SUB ESP,0x8
0040d9a0  MOV dword ptr [EBP + -0x8],ECX
0040d9a3  MOV dword ptr [EBP + -0x4],0x0
0040d9aa  JMP 0x0040d9b5
0040d9ac  MOV EAX,dword ptr [EBP + -0x4]
0040d9af  ADD EAX,0x1
0040d9b2  MOV dword ptr [EBP + -0x4],EAX
0040d9b5  MOV ECX,dword ptr [EBP + -0x8]
0040d9b8  MOV EDX,dword ptr [EBP + -0x4]
0040d9bb  CMP EDX,dword ptr [ECX + 0x4]
0040d9be  JNC 0x0040da29
0040d9c0  MOV EAX,dword ptr [EBP + -0x4]
0040d9c3  SHL EAX,0x5
0040d9c6  MOV ECX,dword ptr [EBP + -0x8]
0040d9c9  MOV EDX,dword ptr [ECX + 0x8]
0040d9cc  FLD float ptr [EDX + EAX*0x1]
0040d9cf  FMUL float ptr [EBP + 0x8]
0040d9d2  MOV EAX,dword ptr [EBP + -0x4]
0040d9d5  SHL EAX,0x5
0040d9d8  MOV ECX,dword ptr [EBP + -0x8]
0040d9db  MOV EDX,dword ptr [ECX + 0x8]
0040d9de  FSTP float ptr [EDX + EAX*0x1]
0040d9e1  MOV EAX,dword ptr [EBP + -0x4]
0040d9e4  SHL EAX,0x5
0040d9e7  MOV ECX,dword ptr [EBP + -0x8]
0040d9ea  MOV EDX,dword ptr [ECX + 0x8]
0040d9ed  FLD float ptr [EDX + EAX*0x1 + 0x4]
0040d9f1  FMUL float ptr [EBP + 0x8]
0040d9f4  MOV EAX,dword ptr [EBP + -0x4]
0040d9f7  SHL EAX,0x5
0040d9fa  MOV ECX,dword ptr [EBP + -0x8]
0040d9fd  MOV EDX,dword ptr [ECX + 0x8]
0040da00  FSTP float ptr [EDX + EAX*0x1 + 0x4]
0040da04  MOV EAX,dword ptr [EBP + -0x4]
0040da07  SHL EAX,0x5
0040da0a  MOV ECX,dword ptr [EBP + -0x8]
0040da0d  MOV EDX,dword ptr [ECX + 0x8]
0040da10  FLD float ptr [EDX + EAX*0x1 + 0x8]
0040da14  FMUL float ptr [EBP + 0x8]
0040da17  MOV EAX,dword ptr [EBP + -0x4]
0040da1a  SHL EAX,0x5
0040da1d  MOV ECX,dword ptr [EBP + -0x8]
0040da20  MOV EDX,dword ptr [ECX + 0x8]
0040da23  FSTP float ptr [EDX + EAX*0x1 + 0x8]
0040da27  JMP 0x0040d9ac
0040da29  MOV ESP,EBP
0040da2b  POP EBP
0040da2c  RET 0x4
