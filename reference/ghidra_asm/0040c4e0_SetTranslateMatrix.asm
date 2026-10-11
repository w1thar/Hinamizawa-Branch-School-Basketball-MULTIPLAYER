0040c4e0  PUSH EBP
0040c4e1  MOV EBP,ESP
0040c4e3  MOV EAX,dword ptr [EBP + 0x8]
0040c4e6  PUSH EAX
0040c4e7  CALL 0x00401064  ; D3DUtil_SetIdentityMatrix
0040c4ec  ADD ESP,0x4
0040c4ef  MOV ECX,dword ptr [EBP + 0x8]
0040c4f2  MOV EDX,dword ptr [EBP + 0xc]
0040c4f5  MOV dword ptr [ECX + 0x30],EDX
0040c4f8  MOV EAX,dword ptr [EBP + 0x8]
0040c4fb  MOV ECX,dword ptr [EBP + 0x10]
0040c4fe  MOV dword ptr [EAX + 0x34],ECX
0040c501  MOV EDX,dword ptr [EBP + 0x8]
0040c504  MOV EAX,dword ptr [EBP + 0x14]
0040c507  MOV dword ptr [EDX + 0x38],EAX
0040c50a  POP EBP
0040c50b  RET
