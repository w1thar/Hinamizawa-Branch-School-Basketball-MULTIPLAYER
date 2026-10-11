0040c2f0  PUSH EBP
0040c2f1  MOV EBP,ESP
0040c2f3  PUSH ECX
0040c2f4  MOV dword ptr [EBP + -0x4],ECX
0040c2f7  MOV EAX,dword ptr [EBP + -0x4]
0040c2fa  MOV ECX,dword ptr [EBP + 0x8]
0040c2fd  FLD float ptr [EAX]
0040c2ff  FADD float ptr [ECX]
0040c301  MOV EDX,dword ptr [EBP + -0x4]
0040c304  FSTP float ptr [EDX]
0040c306  MOV EAX,dword ptr [EBP + -0x4]
0040c309  MOV ECX,dword ptr [EBP + 0x8]
0040c30c  FLD float ptr [EAX + 0x4]
0040c30f  FADD float ptr [ECX + 0x4]
0040c312  MOV EDX,dword ptr [EBP + -0x4]
0040c315  FSTP float ptr [EDX + 0x4]
0040c318  MOV EAX,dword ptr [EBP + -0x4]
0040c31b  MOV ECX,dword ptr [EBP + 0x8]
0040c31e  FLD float ptr [EAX + 0x8]
0040c321  FADD float ptr [ECX + 0x8]
0040c324  MOV EDX,dword ptr [EBP + -0x4]
0040c327  FSTP float ptr [EDX + 0x8]
0040c32a  MOV EAX,dword ptr [EBP + -0x4]
0040c32d  MOV ESP,EBP
0040c32f  POP EBP
0040c330  RET 0x4
