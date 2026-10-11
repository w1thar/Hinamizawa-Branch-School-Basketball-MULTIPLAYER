0040c3a0  PUSH EBP
0040c3a1  MOV EBP,ESP
0040c3a3  MOV EAX,dword ptr [EBP + 0x10]
0040c3a6  SUB EAX,0x1
0040c3a9  MOV dword ptr [EBP + 0x10],EAX
0040c3ac  CMP dword ptr [EBP + 0x10],0x0
0040c3b0  JL 0x0040c3c3
0040c3b2  MOV ECX,dword ptr [EBP + 0x8]
0040c3b5  CALL dword ptr [EBP + 0x14]
0040c3b8  MOV ECX,dword ptr [EBP + 0x8]
0040c3bb  ADD ECX,dword ptr [EBP + 0xc]
0040c3be  MOV dword ptr [EBP + 0x8],ECX
0040c3c1  JMP 0x0040c3a3
0040c3c3  POP EBP
0040c3c4  RET 0x10
