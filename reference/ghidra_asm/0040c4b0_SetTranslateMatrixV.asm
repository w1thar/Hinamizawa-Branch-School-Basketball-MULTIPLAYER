0040c4b0  PUSH EBP
0040c4b1  MOV EBP,ESP
0040c4b3  MOV EAX,dword ptr [EBP + 0xc]
0040c4b6  MOV ECX,dword ptr [EAX + 0x8]
0040c4b9  PUSH ECX
0040c4ba  MOV EDX,dword ptr [EBP + 0xc]
0040c4bd  MOV EAX,dword ptr [EDX + 0x4]
0040c4c0  PUSH EAX
0040c4c1  MOV ECX,dword ptr [EBP + 0xc]
0040c4c4  MOV EDX,dword ptr [ECX]
0040c4c6  PUSH EDX
0040c4c7  MOV EAX,dword ptr [EBP + 0x8]
0040c4ca  PUSH EAX
0040c4cb  CALL 0x0040121c  ; SetTranslateMatrix
0040c4d0  ADD ESP,0x10
0040c4d3  POP EBP
0040c4d4  RET
