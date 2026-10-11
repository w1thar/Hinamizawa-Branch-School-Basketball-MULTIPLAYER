0042ddac  PUSH EBP
0042ddad  MOV EBP,ESP
0042ddaf  SUB ESP,0xc
0042ddb2  MOV dword ptr [EBP + -0xc],ECX
0042ddb5  MOV EAX,dword ptr [EBP + -0xc]
0042ddb8  MOV ECX,dword ptr [EAX + 0x4]
0042ddbb  MOV EDX,dword ptr [ECX + 0x28]
0042ddbe  FILD dword ptr [EBP + 0x8]
0042ddc1  FMUL float ptr [EDX + 0x10]
0042ddc4  FSTP float ptr [EBP + -0x4]
0042ddc7  MOV dword ptr [EBP + -0x8],0x0
0042ddce  JMP 0x0042ddd9
0042ddd0  MOV EAX,dword ptr [EBP + -0x8]
0042ddd3  ADD EAX,0x1
0042ddd6  MOV dword ptr [EBP + -0x8],EAX
0042ddd9  MOV ECX,dword ptr [EBP + -0xc]
0042dddc  MOV EDX,dword ptr [ECX + 0x4]
0042dddf  MOV EAX,dword ptr [EDX + 0x28]
0042dde2  MOV ECX,dword ptr [EBP + -0x8]
0042dde5  CMP ECX,dword ptr [EAX + 0xc]
0042dde8  JGE 0x0042de2a
0042ddea  MOV EDX,dword ptr [EBP + -0xc]
0042dded  MOV EAX,dword ptr [EDX + 0x4]
0042ddf0  MOV ECX,dword ptr [EAX + 0x28]
0042ddf3  MOV EDX,dword ptr [EBP + -0x8]
0042ddf6  IMUL EDX,EDX,0xc
0042ddf9  MOV EAX,dword ptr [ECX + 0x14]
0042ddfc  FLD float ptr [EAX + EDX*0x1 + 0x4]
0042de00  FADD float ptr [EBP + -0x4]
0042de03  MOV ECX,dword ptr [EBP + -0xc]
0042de06  MOV EDX,dword ptr [ECX + 0x4]
0042de09  MOV EAX,dword ptr [EBP + -0xc]
0042de0c  MOV ECX,dword ptr [EAX + 0x4]
0042de0f  MOV EAX,dword ptr [ECX + 0x28]
0042de12  MOV ECX,dword ptr [EBP + -0x8]
0042de15  IMUL ECX,ECX,0xc
0042de18  MOV EAX,dword ptr [EAX + 0x14]
0042de1b  MOV ECX,dword ptr [EAX + ECX*0x1]
0042de1e  SHL ECX,0x5
0042de21  MOV EDX,dword ptr [EDX + 0x24]
0042de24  FSTP float ptr [EDX + ECX*0x1 + 0x1c]
0042de28  JMP 0x0042ddd0
0042de2a  MOV ESP,EBP
0042de2c  POP EBP
0042de2d  RET 0x4
