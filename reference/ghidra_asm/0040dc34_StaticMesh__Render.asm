0040dc34  PUSH EBP
0040dc35  MOV EBP,ESP
0040dc37  SUB ESP,0x8
0040dc3a  MOV dword ptr [EBP + -0x8],ECX
0040dc3d  MOV EAX,dword ptr [EBP + -0x8]
0040dc40  MOV ECX,dword ptr [EAX + 0x10]
0040dc43  MOV dword ptr [EBP + -0x4],ECX
0040dc46  MOV EDX,dword ptr [EBP + -0x8]
0040dc49  MOV EAX,dword ptr [EDX + 0x18]
0040dc4c  CMP dword ptr [EAX + 0x144],0x0
0040dc53  JNZ 0x0040dc5c
0040dc55  MOV EAX,0x1
0040dc5a  JMP 0x0040dc95
0040dc5c  PUSH 0x0
0040dc5e  MOV ECX,dword ptr [EBP + -0x8]
0040dc61  MOV EDX,dword ptr [ECX + 0x18]
0040dc64  MOV EAX,dword ptr [EDX + 0x144]
0040dc6a  PUSH EAX
0040dc6b  MOV ECX,dword ptr [EBP + -0x4]
0040dc6e  PUSH ECX
0040dc6f  MOV EDX,dword ptr [EBP + -0x8]
0040dc72  MOV EAX,dword ptr [EDX + 0x4]
0040dc75  PUSH EAX
0040dc76  MOV ECX,dword ptr [EBP + -0x8]
0040dc79  MOV EDX,dword ptr [ECX + 0x8]
0040dc7c  PUSH EDX
0040dc7d  PUSH 0x112
0040dc82  PUSH 0x4
0040dc84  MOV EAX,dword ptr [EBP + 0x8]
0040dc87  MOV ECX,dword ptr [EAX]
0040dc89  MOV EDX,dword ptr [EBP + 0x8]
0040dc8c  PUSH EDX
0040dc8d  CALL dword ptr [ECX + 0x68]
0040dc90  MOV EAX,0x1
0040dc95  MOV ESP,EBP
0040dc97  POP EBP
0040dc98  RET 0x4
