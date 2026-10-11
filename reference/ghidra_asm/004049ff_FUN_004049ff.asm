004049ff  PUSH EBP
00404a00  MOV EBP,ESP
00404a02  PUSH ECX
00404a03  MOV dword ptr [EBP + -0x4],ECX
00404a06  MOV EAX,dword ptr [EBP + 0x8]
00404a09  PUSH EAX
00404a0a  MOV ECX,dword ptr [EBP + -0x4]
00404a0d  ADD ECX,0x4
00404a10  PUSH ECX
00404a11  CALL dword ptr [0x0045a4dc] {370508}  ; KERNEL32.DLL::lstrcpyA
00404a17  MOV EDX,dword ptr [EBP + -0x4]
00404a1a  MOV dword ptr [EDX + 0x54],0x0
00404a21  MOV EAX,dword ptr [EBP + -0x4]
00404a24  MOV dword ptr [EAX + 0x58],0x0
00404a2b  MOV ECX,dword ptr [EBP + -0x4]
00404a2e  MOV EDX,dword ptr [EBP + 0xc]
00404a31  MOV dword ptr [ECX + 0x5c],EDX
00404a34  MOV EAX,dword ptr [EBP + -0x4]
00404a37  MOV dword ptr [EAX + 0x60],0x0
00404a3e  MOV ECX,dword ptr [EBP + -0x4]
00404a41  MOV EDX,dword ptr [EBP + 0x10]
00404a44  MOV dword ptr [ECX + 0x64],EDX
00404a47  MOV EAX,dword ptr [EBP + -0x4]
00404a4a  MOV dword ptr [EAX + 0x68],0x0
00404a51  MOV ECX,dword ptr [EBP + -0x4]
00404a54  MOV dword ptr [ECX + 0x6c],0x0
00404a5b  MOV EDX,dword ptr [EBP + -0x4]
00404a5e  MOV dword ptr [EDX + 0x70],0x0
00404a65  MOV EAX,dword ptr [EBP + -0x4]
00404a68  MOV dword ptr [EAX + 0x74],0x0
00404a6f  MOV ECX,dword ptr [EBP + -0x4]
00404a72  MOV EDX,dword ptr [0x00457ef0] {None}
00404a78  MOV dword ptr [ECX],EDX
00404a7a  MOV EAX,dword ptr [EBP + -0x4]
00404a7d  MOV [0x00457ef0],EAX
00404a82  MOV EAX,dword ptr [EBP + -0x4]
00404a85  MOV ESP,EBP
00404a87  POP EBP
00404a88  RET 0xc
