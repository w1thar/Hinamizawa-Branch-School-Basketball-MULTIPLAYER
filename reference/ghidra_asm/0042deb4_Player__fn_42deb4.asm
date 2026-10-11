0042deb4  PUSH EBP
0042deb5  MOV EBP,ESP
0042deb7  SUB ESP,0xc
0042deba  MOV dword ptr [EBP + -0xc],ECX
0042debd  MOV EAX,dword ptr [EBP + -0xc]
0042dec0  MOV ECX,dword ptr [EAX + 0x4]
0042dec3  MOV EDX,dword ptr [ECX + 0x28]
0042dec6  FILD dword ptr [EBP + 0x8]
0042dec9  FMUL float ptr [EDX + 0x28]
0042decc  FSTP float ptr [EBP + -0x4]
0042decf  MOV dword ptr [EBP + -0x8],0x0
0042ded6  JMP 0x0042dee1
0042ded8  MOV EAX,dword ptr [EBP + -0x8]
0042dedb  ADD EAX,0x1
0042dede  MOV dword ptr [EBP + -0x8],EAX
0042dee1  MOV ECX,dword ptr [EBP + -0xc]
0042dee4  MOV EDX,dword ptr [ECX + 0x4]
0042dee7  MOV EAX,dword ptr [EDX + 0x28]
0042deea  MOV ECX,dword ptr [EBP + -0x8]
0042deed  CMP ECX,dword ptr [EAX + 0x24]
0042def0  JGE 0x0042df32
0042def2  MOV EDX,dword ptr [EBP + -0xc]
0042def5  MOV EAX,dword ptr [EDX + 0x4]
0042def8  MOV ECX,dword ptr [EAX + 0x28]
0042defb  MOV EDX,dword ptr [EBP + -0x8]
0042defe  IMUL EDX,EDX,0xc
0042df01  MOV EAX,dword ptr [ECX + 0x2c]
0042df04  FLD float ptr [EAX + EDX*0x1 + 0x4]
0042df08  FADD float ptr [EBP + -0x4]
0042df0b  MOV ECX,dword ptr [EBP + -0xc]
0042df0e  MOV EDX,dword ptr [ECX + 0x4]
0042df11  MOV EAX,dword ptr [EBP + -0xc]
0042df14  MOV ECX,dword ptr [EAX + 0x4]
0042df17  MOV EAX,dword ptr [ECX + 0x28]
0042df1a  MOV ECX,dword ptr [EBP + -0x8]
0042df1d  IMUL ECX,ECX,0xc
0042df20  MOV EAX,dword ptr [EAX + 0x2c]
0042df23  MOV ECX,dword ptr [EAX + ECX*0x1]
0042df26  SHL ECX,0x5
0042df29  MOV EDX,dword ptr [EDX + 0x24]
0042df2c  FSTP float ptr [EDX + ECX*0x1 + 0x1c]
0042df30  JMP 0x0042ded8
0042df32  MOV ESP,EBP
0042df34  POP EBP
0042df35  RET 0x4
