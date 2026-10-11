00407273  PUSH EBP
00407274  MOV EBP,ESP
00407276  PUSH 0x44
00407278  PUSH 0x0
0040727a  MOV EAX,dword ptr [EBP + 0x8]
0040727d  PUSH EAX
0040727e  CALL 0x00433440
00407283  ADD ESP,0xc
00407286  MOV ECX,dword ptr [EBP + 0x8]
00407289  MOV EDX,dword ptr [EBP + 0xc]
0040728c  MOV dword ptr [ECX + 0x10],EDX
0040728f  MOV EAX,dword ptr [EBP + 0x8]
00407292  MOV ECX,dword ptr [EBP + 0xc]
00407295  MOV dword ptr [EAX],ECX
00407297  MOV EDX,dword ptr [EBP + 0x8]
0040729a  MOV EAX,dword ptr [EBP + 0x10]
0040729d  MOV dword ptr [EDX + 0x14],EAX
004072a0  MOV ECX,dword ptr [EBP + 0x8]
004072a3  MOV EDX,dword ptr [EBP + 0x10]
004072a6  MOV dword ptr [ECX + 0x4],EDX
004072a9  MOV EAX,dword ptr [EBP + 0x8]
004072ac  MOV ECX,dword ptr [EBP + 0x14]
004072af  MOV dword ptr [EAX + 0x18],ECX
004072b2  MOV EDX,dword ptr [EBP + 0x8]
004072b5  MOV EAX,dword ptr [EBP + 0x14]
004072b8  MOV dword ptr [EDX + 0x8],EAX
004072bb  MOV ECX,dword ptr [EBP + 0x8]
004072be  MOV EDX,dword ptr [EBP + 0x18]
004072c1  MOV dword ptr [ECX + 0x1c],EDX
004072c4  MOV EAX,dword ptr [EBP + 0x8]
004072c7  MOV ECX,dword ptr [EBP + 0x18]
004072ca  MOV dword ptr [EAX + 0xc],ECX
004072cd  POP EBP
004072ce  RET
