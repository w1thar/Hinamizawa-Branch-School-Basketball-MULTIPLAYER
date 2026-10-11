0042dd29  PUSH EBP
0042dd2a  MOV EBP,ESP
0042dd2c  SUB ESP,0xc
0042dd2f  MOV dword ptr [EBP + -0xc],ECX
0042dd32  MOV EAX,dword ptr [EBP + -0xc]
0042dd35  MOV ECX,dword ptr [EAX + 0x4]
0042dd38  MOV EDX,dword ptr [ECX + 0x28]
0042dd3b  FILD dword ptr [EBP + 0x8]
0042dd3e  FMUL float ptr [EDX + 0x4]
0042dd41  FSTP float ptr [EBP + -0x4]
0042dd44  MOV dword ptr [EBP + -0x8],0x0
0042dd4b  JMP 0x0042dd56
0042dd4d  MOV EAX,dword ptr [EBP + -0x8]
0042dd50  ADD EAX,0x1
0042dd53  MOV dword ptr [EBP + -0x8],EAX
0042dd56  MOV ECX,dword ptr [EBP + -0xc]
0042dd59  MOV EDX,dword ptr [ECX + 0x4]
0042dd5c  MOV EAX,dword ptr [EDX + 0x28]
0042dd5f  MOV ECX,dword ptr [EBP + -0x8]
0042dd62  CMP ECX,dword ptr [EAX]
0042dd64  JGE 0x0042dda6
0042dd66  MOV EDX,dword ptr [EBP + -0xc]
0042dd69  MOV EAX,dword ptr [EDX + 0x4]
0042dd6c  MOV ECX,dword ptr [EAX + 0x28]
0042dd6f  MOV EDX,dword ptr [EBP + -0x8]
0042dd72  IMUL EDX,EDX,0xc
0042dd75  MOV EAX,dword ptr [ECX + 0x8]
0042dd78  FLD float ptr [EAX + EDX*0x1 + 0x4]
0042dd7c  FADD float ptr [EBP + -0x4]
0042dd7f  MOV ECX,dword ptr [EBP + -0xc]
0042dd82  MOV EDX,dword ptr [ECX + 0x4]
0042dd85  MOV EAX,dword ptr [EBP + -0xc]
0042dd88  MOV ECX,dword ptr [EAX + 0x4]
0042dd8b  MOV EAX,dword ptr [ECX + 0x28]
0042dd8e  MOV ECX,dword ptr [EBP + -0x8]
0042dd91  IMUL ECX,ECX,0xc
0042dd94  MOV EAX,dword ptr [EAX + 0x8]
0042dd97  MOV ECX,dword ptr [EAX + ECX*0x1]
0042dd9a  SHL ECX,0x5
0042dd9d  MOV EDX,dword ptr [EDX + 0x24]
0042dda0  FSTP float ptr [EDX + ECX*0x1 + 0x1c]
0042dda4  JMP 0x0042dd4d
0042dda6  MOV ESP,EBP
0042dda8  POP EBP
0042dda9  RET 0x4
