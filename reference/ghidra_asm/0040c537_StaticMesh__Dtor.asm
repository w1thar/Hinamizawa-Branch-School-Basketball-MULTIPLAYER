0040c537  PUSH EBP
0040c538  MOV EBP,ESP
0040c53a  SUB ESP,0x14
0040c53d  MOV dword ptr [EBP + -0x14],ECX
0040c540  MOV EAX,dword ptr [EBP + -0x14]
0040c543  MOV dword ptr [EAX],0x44e0bc
0040c549  MOV ECX,dword ptr [EBP + -0x14]
0040c54c  CMP dword ptr [ECX + 0x8],0x0
0040c550  JZ 0x0040c571
0040c552  MOV EDX,dword ptr [EBP + -0x14]
0040c555  MOV EAX,dword ptr [EDX + 0x8]
0040c558  MOV dword ptr [EBP + -0x4],EAX
0040c55b  MOV ECX,dword ptr [EBP + -0x4]
0040c55e  PUSH ECX
0040c55f  CALL 0x00433370  ; operator_delete
0040c564  ADD ESP,0x4
0040c567  MOV EDX,dword ptr [EBP + -0x14]
0040c56a  MOV dword ptr [EDX + 0x8],0x0
0040c571  MOV EAX,dword ptr [EBP + -0x14]
0040c574  CMP dword ptr [EAX + 0x20],0x0
0040c578  JZ 0x0040c599
0040c57a  MOV ECX,dword ptr [EBP + -0x14]
0040c57d  MOV EDX,dword ptr [ECX + 0x20]
0040c580  MOV dword ptr [EBP + -0x8],EDX
0040c583  MOV EAX,dword ptr [EBP + -0x8]
0040c586  PUSH EAX
0040c587  CALL 0x00433370  ; operator_delete
0040c58c  ADD ESP,0x4
0040c58f  MOV ECX,dword ptr [EBP + -0x14]
0040c592  MOV dword ptr [ECX + 0x20],0x0
0040c599  MOV EDX,dword ptr [EBP + -0x14]
0040c59c  CMP dword ptr [EDX + 0x10],0x0
0040c5a0  JZ 0x0040c5c1
0040c5a2  MOV EAX,dword ptr [EBP + -0x14]
0040c5a5  MOV ECX,dword ptr [EAX + 0x10]
0040c5a8  MOV dword ptr [EBP + -0xc],ECX
0040c5ab  MOV EDX,dword ptr [EBP + -0xc]
0040c5ae  PUSH EDX
0040c5af  CALL 0x00433370  ; operator_delete
0040c5b4  ADD ESP,0x4
0040c5b7  MOV EAX,dword ptr [EBP + -0x14]
0040c5ba  MOV dword ptr [EAX + 0x10],0x0
0040c5c1  MOV ECX,dword ptr [EBP + -0x14]
0040c5c4  CMP dword ptr [ECX + 0x18],0x0
0040c5c8  JZ 0x0040c5e9
0040c5ca  MOV EDX,dword ptr [EBP + -0x14]
0040c5cd  MOV EAX,dword ptr [EDX + 0x18]
0040c5d0  MOV dword ptr [EBP + -0x10],EAX
0040c5d3  MOV ECX,dword ptr [EBP + -0x10]
0040c5d6  PUSH ECX
0040c5d7  CALL 0x00433370  ; operator_delete
0040c5dc  ADD ESP,0x4
0040c5df  MOV EDX,dword ptr [EBP + -0x14]
0040c5e2  MOV dword ptr [EDX + 0x18],0x0
0040c5e9  MOV ESP,EBP
0040c5eb  POP EBP
0040c5ec  RET
