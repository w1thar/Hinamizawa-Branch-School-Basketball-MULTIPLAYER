0042c6ce  PUSH EBP
0042c6cf  MOV EBP,ESP
0042c6d1  SUB ESP,0x1c
0042c6d4  MOV dword ptr [EBP + -0x18],ECX
0042c6d7  MOV EAX,dword ptr [EBP + -0x18]
0042c6da  MOV dword ptr [EAX],0x44e4ec
0042c6e0  MOV dword ptr [EBP + -0x4],0x0
0042c6e7  JMP 0x0042c6f2
0042c6e9  MOV ECX,dword ptr [EBP + -0x4]
0042c6ec  ADD ECX,0x1
0042c6ef  MOV dword ptr [EBP + -0x4],ECX
0042c6f2  CMP dword ptr [EBP + -0x4],0xa
0042c6f6  JGE 0x0042c740
0042c6f8  MOV EDX,dword ptr [EBP + -0x4]
0042c6fb  IMUL EDX,EDX,0xc
0042c6fe  MOV EAX,dword ptr [EBP + -0x18]
0042c701  MOV ECX,dword ptr [EAX + 0x4c]
0042c704  CMP dword ptr [ECX + EDX*0x1 + 0x8],0x0
0042c709  JZ 0x0042c73e
0042c70b  MOV EDX,dword ptr [EBP + -0x4]
0042c70e  IMUL EDX,EDX,0xc
0042c711  MOV EAX,dword ptr [EBP + -0x18]
0042c714  MOV ECX,dword ptr [EAX + 0x4c]
0042c717  MOV EDX,dword ptr [ECX + EDX*0x1 + 0x8]
0042c71b  MOV dword ptr [EBP + -0x8],EDX
0042c71e  MOV EAX,dword ptr [EBP + -0x8]
0042c721  PUSH EAX
0042c722  CALL 0x00433370
0042c727  ADD ESP,0x4
0042c72a  MOV ECX,dword ptr [EBP + -0x4]
0042c72d  IMUL ECX,ECX,0xc
0042c730  MOV EDX,dword ptr [EBP + -0x18]
0042c733  MOV EAX,dword ptr [EDX + 0x4c]
0042c736  MOV dword ptr [EAX + ECX*0x1 + 0x8],0x0
0042c73e  JMP 0x0042c6e9
0042c740  MOV ECX,dword ptr [EBP + -0x18]
0042c743  CMP dword ptr [ECX + 0x4c],0x0
0042c747  JZ 0x0042c768
0042c749  MOV EDX,dword ptr [EBP + -0x18]
0042c74c  MOV EAX,dword ptr [EDX + 0x4c]
0042c74f  MOV dword ptr [EBP + -0xc],EAX
0042c752  MOV ECX,dword ptr [EBP + -0xc]
0042c755  PUSH ECX
0042c756  CALL 0x00433370
0042c75b  ADD ESP,0x4
0042c75e  MOV EDX,dword ptr [EBP + -0x18]
0042c761  MOV dword ptr [EDX + 0x4c],0x0
0042c768  MOV EAX,dword ptr [EBP + -0x18]
0042c76b  CMP dword ptr [EAX + 0x4],0x0
0042c76f  JZ 0x0042c7a8
0042c771  MOV ECX,dword ptr [EBP + -0x18]
0042c774  MOV EDX,dword ptr [ECX + 0x4]
0042c777  MOV dword ptr [EBP + -0x14],EDX
0042c77a  MOV EAX,dword ptr [EBP + -0x14]
0042c77d  MOV dword ptr [EBP + -0x10],EAX
0042c780  CMP dword ptr [EBP + -0x10],0x0
0042c784  JZ 0x0042c797
0042c786  PUSH 0x1
0042c788  MOV ECX,dword ptr [EBP + -0x10]
0042c78b  MOV EDX,dword ptr [ECX]
0042c78d  MOV ECX,dword ptr [EBP + -0x10]
0042c790  CALL dword ptr [EDX]
0042c792  MOV dword ptr [EBP + -0x1c],EAX
0042c795  JMP 0x0042c79e
0042c797  MOV dword ptr [EBP + -0x1c],0x0
0042c79e  MOV EAX,dword ptr [EBP + -0x18]
0042c7a1  MOV dword ptr [EAX + 0x4],0x0
0042c7a8  MOV ESP,EBP
0042c7aa  POP EBP
0042c7ab  RET
