0042de30  PUSH EBP
0042de31  MOV EBP,ESP
0042de33  SUB ESP,0xc
0042de36  MOV dword ptr [EBP + -0xc],ECX
0042de39  MOV EAX,dword ptr [EBP + -0xc]
0042de3c  MOV ECX,dword ptr [EAX + 0x4]
0042de3f  MOV EDX,dword ptr [ECX + 0x28]
0042de42  FILD dword ptr [EBP + 0x8]
0042de45  FMUL float ptr [EDX + 0x1c]
0042de48  FSTP float ptr [EBP + -0x4]
0042de4b  MOV dword ptr [EBP + -0x8],0x0
0042de52  JMP 0x0042de5d
0042de54  MOV EAX,dword ptr [EBP + -0x8]
0042de57  ADD EAX,0x1
0042de5a  MOV dword ptr [EBP + -0x8],EAX
0042de5d  MOV ECX,dword ptr [EBP + -0xc]
0042de60  MOV EDX,dword ptr [ECX + 0x4]
0042de63  MOV EAX,dword ptr [EDX + 0x28]
0042de66  MOV ECX,dword ptr [EBP + -0x8]
0042de69  CMP ECX,dword ptr [EAX + 0x18]
0042de6c  JGE 0x0042deae
0042de6e  MOV EDX,dword ptr [EBP + -0xc]
0042de71  MOV EAX,dword ptr [EDX + 0x4]
0042de74  MOV ECX,dword ptr [EAX + 0x28]
0042de77  MOV EDX,dword ptr [EBP + -0x8]
0042de7a  IMUL EDX,EDX,0xc
0042de7d  MOV EAX,dword ptr [ECX + 0x20]
0042de80  FLD float ptr [EAX + EDX*0x1 + 0x4]
0042de84  FADD float ptr [EBP + -0x4]
0042de87  MOV ECX,dword ptr [EBP + -0xc]
0042de8a  MOV EDX,dword ptr [ECX + 0x4]
0042de8d  MOV EAX,dword ptr [EBP + -0xc]
0042de90  MOV ECX,dword ptr [EAX + 0x4]
0042de93  MOV EAX,dword ptr [ECX + 0x28]
0042de96  MOV ECX,dword ptr [EBP + -0x8]
0042de99  IMUL ECX,ECX,0xc
0042de9c  MOV EAX,dword ptr [EAX + 0x20]
0042de9f  MOV ECX,dword ptr [EAX + ECX*0x1]
0042dea2  SHL ECX,0x5
0042dea5  MOV EDX,dword ptr [EDX + 0x24]
0042dea8  FSTP float ptr [EDX + ECX*0x1 + 0x1c]
0042deac  JMP 0x0042de54
0042deae  MOV ESP,EBP
0042deb0  POP EBP
0042deb1  RET 0x4
