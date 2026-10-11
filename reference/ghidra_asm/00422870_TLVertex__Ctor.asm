00422870  PUSH EBP
00422871  MOV EBP,ESP
00422873  PUSH ECX
00422874  MOV dword ptr [EBP + -0x4],ECX
00422877  MOV EAX,dword ptr [EBP + -0x4]
0042287a  MOV ECX,dword ptr [EBP + 0x8]
0042287d  MOV EDX,dword ptr [ECX]
0042287f  MOV dword ptr [EAX],EDX
00422881  MOV EAX,dword ptr [EBP + -0x4]
00422884  MOV ECX,dword ptr [EBP + 0x8]
00422887  MOV EDX,dword ptr [ECX + 0x4]
0042288a  MOV dword ptr [EAX + 0x4],EDX
0042288d  MOV EAX,dword ptr [EBP + -0x4]
00422890  MOV ECX,dword ptr [EBP + 0x8]
00422893  MOV EDX,dword ptr [ECX + 0x8]
00422896  MOV dword ptr [EAX + 0x8],EDX
00422899  MOV EAX,dword ptr [EBP + -0x4]
0042289c  MOV ECX,dword ptr [EBP + 0xc]
0042289f  MOV dword ptr [EAX + 0xc],ECX
004228a2  MOV EDX,dword ptr [EBP + -0x4]
004228a5  MOV EAX,dword ptr [EBP + 0x10]
004228a8  MOV dword ptr [EDX + 0x10],EAX
004228ab  MOV ECX,dword ptr [EBP + -0x4]
004228ae  MOV EDX,dword ptr [EBP + 0x14]
004228b1  MOV dword ptr [ECX + 0x14],EDX
004228b4  MOV EAX,dword ptr [EBP + -0x4]
004228b7  MOV ECX,dword ptr [EBP + 0x18]
004228ba  MOV dword ptr [EAX + 0x18],ECX
004228bd  MOV EDX,dword ptr [EBP + -0x4]
004228c0  MOV EAX,dword ptr [EBP + 0x1c]
004228c3  MOV dword ptr [EDX + 0x1c],EAX
004228c6  MOV EAX,dword ptr [EBP + -0x4]
004228c9  MOV ESP,EBP
004228cb  POP EBP
004228cc  RET 0x18
