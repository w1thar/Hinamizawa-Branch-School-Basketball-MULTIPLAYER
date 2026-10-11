00408fa1  PUSH EBP
00408fa2  MOV EBP,ESP
00408fa4  SUB ESP,0x1c
00408fa7  MOV dword ptr [EBP + -0x1c],ECX
00408faa  MOV EAX,dword ptr [EBP + -0x1c]
00408fad  MOV dword ptr [EAX],0x44e0ac
00408fb3  MOV dword ptr [EBP + -0x4],0x0
00408fba  JMP 0x00408fc5
00408fbc  MOV ECX,dword ptr [EBP + -0x4]
00408fbf  ADD ECX,0x1
00408fc2  MOV dword ptr [EBP + -0x4],ECX
00408fc5  MOV EDX,dword ptr [EBP + -0x1c]
00408fc8  MOV EAX,dword ptr [EBP + -0x4]
00408fcb  CMP EAX,dword ptr [EDX + 0x30]
00408fce  JGE 0x00409018
00408fd0  MOV ECX,dword ptr [EBP + -0x4]
00408fd3  IMUL ECX,ECX,0xc
00408fd6  MOV EDX,dword ptr [EBP + -0x1c]
00408fd9  MOV EAX,dword ptr [EDX + 0x28]
00408fdc  CMP dword ptr [EAX + ECX*0x1 + 0x8],0x0
00408fe1  JZ 0x00409016
00408fe3  MOV ECX,dword ptr [EBP + -0x4]
00408fe6  IMUL ECX,ECX,0xc
00408fe9  MOV EDX,dword ptr [EBP + -0x1c]
00408fec  MOV EAX,dword ptr [EDX + 0x28]
00408fef  MOV ECX,dword ptr [EAX + ECX*0x1 + 0x8]
00408ff3  MOV dword ptr [EBP + -0x8],ECX
00408ff6  MOV EDX,dword ptr [EBP + -0x8]
00408ff9  PUSH EDX
00408ffa  CALL 0x00433370  ; operator_delete
00408fff  ADD ESP,0x4
00409002  MOV EAX,dword ptr [EBP + -0x4]
00409005  IMUL EAX,EAX,0xc
00409008  MOV ECX,dword ptr [EBP + -0x1c]
0040900b  MOV EDX,dword ptr [ECX + 0x28]
0040900e  MOV dword ptr [EDX + EAX*0x1 + 0x8],0x0
00409016  JMP 0x00408fbc
00409018  MOV EAX,dword ptr [EBP + -0x1c]
0040901b  CMP dword ptr [EAX + 0x28],0x0
0040901f  JZ 0x00409040
00409021  MOV ECX,dword ptr [EBP + -0x1c]
00409024  MOV EDX,dword ptr [ECX + 0x28]
00409027  MOV dword ptr [EBP + -0xc],EDX
0040902a  MOV EAX,dword ptr [EBP + -0xc]
0040902d  PUSH EAX
0040902e  CALL 0x00433370  ; operator_delete
00409033  ADD ESP,0x4
00409036  MOV ECX,dword ptr [EBP + -0x1c]
00409039  MOV dword ptr [ECX + 0x28],0x0
00409040  MOV EDX,dword ptr [EBP + -0x1c]
00409043  CMP dword ptr [EDX + 0x24],0x0
00409047  JZ 0x00409068
00409049  MOV EAX,dword ptr [EBP + -0x1c]
0040904c  MOV ECX,dword ptr [EAX + 0x24]
0040904f  MOV dword ptr [EBP + -0x10],ECX
00409052  MOV EDX,dword ptr [EBP + -0x10]
00409055  PUSH EDX
00409056  CALL 0x00433370  ; operator_delete
0040905b  ADD ESP,0x4
0040905e  MOV EAX,dword ptr [EBP + -0x1c]
00409061  MOV dword ptr [EAX + 0x24],0x0
00409068  MOV ECX,dword ptr [EBP + -0x1c]
0040906b  CMP dword ptr [ECX + 0x10],0x0
0040906f  JZ 0x00409090
00409071  MOV EDX,dword ptr [EBP + -0x1c]
00409074  MOV EAX,dword ptr [EDX + 0x10]
00409077  MOV dword ptr [EBP + -0x14],EAX
0040907a  MOV ECX,dword ptr [EBP + -0x14]
0040907d  PUSH ECX
0040907e  CALL 0x00433370  ; operator_delete
00409083  ADD ESP,0x4
00409086  MOV EDX,dword ptr [EBP + -0x1c]
00409089  MOV dword ptr [EDX + 0x10],0x0
00409090  MOV EAX,dword ptr [EBP + -0x1c]
00409093  CMP dword ptr [EAX + 0x18],0x0
00409097  JZ 0x004090b8
00409099  MOV ECX,dword ptr [EBP + -0x1c]
0040909c  MOV EDX,dword ptr [ECX + 0x18]
0040909f  MOV dword ptr [EBP + -0x18],EDX
004090a2  MOV EAX,dword ptr [EBP + -0x18]
004090a5  PUSH EAX
004090a6  CALL 0x00433370  ; operator_delete
004090ab  ADD ESP,0x4
004090ae  MOV ECX,dword ptr [EBP + -0x1c]
004090b1  MOV dword ptr [ECX + 0x18],0x0
004090b8  MOV ESP,EBP
004090ba  POP EBP
004090bb  RET
