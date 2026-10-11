00407c20  PUSH EBP
00407c21  MOV EBP,ESP
00407c23  PUSH ECX
00407c24  MOV dword ptr [EBP + -0x4],ECX
00407c27  MOV EAX,dword ptr [EBP + -0x4]
00407c2a  MOV ECX,dword ptr [EBP + 0x8]
00407c2d  MOV dword ptr [EAX],ECX
00407c2f  MOV EDX,dword ptr [EBP + -0x4]
00407c32  MOV EAX,dword ptr [EBP + 0xc]
00407c35  MOV dword ptr [EDX + 0x4],EAX
00407c38  MOV ECX,dword ptr [EBP + -0x4]
00407c3b  MOV EDX,dword ptr [EBP + 0x10]
00407c3e  MOV dword ptr [ECX + 0x8],EDX
00407c41  MOV EAX,dword ptr [EBP + -0x4]
00407c44  MOV ESP,EBP
00407c46  POP EBP
00407c47  RET 0xc
