00430497  PUSH EBP
00430498  MOV EBP,ESP
0043049a  SUB ESP,0x8
0043049d  MOV dword ptr [EBP + -0x8],ECX
004304a0  MOV dword ptr [EBP + -0x4],0x0
004304a7  JMP 0x004304b2
004304a9  MOV EAX,dword ptr [EBP + -0x4]
004304ac  ADD EAX,0x1
004304af  MOV dword ptr [EBP + -0x4],EAX
004304b2  CMP dword ptr [EBP + -0x4],0x1
004304b6  JGE 0x004304e2
004304b8  MOV ECX,dword ptr [EBP + -0x8]
004304bb  MOV EDX,dword ptr [ECX + 0x4]
004304be  MOV EAX,dword ptr [EDX + 0x2c]
004304c1  IMUL EAX,EAX,0x18
004304c4  PUSH EAX
004304c5  PUSH 0x0
004304c7  MOV ECX,dword ptr [EBP + -0x4]
004304ca  IMUL ECX,ECX,0xc
004304cd  MOV EDX,dword ptr [EBP + -0x8]
004304d0  MOV EAX,dword ptr [EDX + 0x4c]
004304d3  MOV ECX,dword ptr [EAX + ECX*0x1 + 0x8]
004304d7  PUSH ECX
004304d8  CALL 0x00433440
004304dd  ADD ESP,0xc
004304e0  JMP 0x004304a9
004304e2  MOV EDX,dword ptr [EBP + -0x8]
004304e5  MOV EAX,dword ptr [EDX + 0x4c]
004304e8  MOV dword ptr [EAX],0x3f814f6a
004304ee  MOV ECX,dword ptr [EBP + -0x8]
004304f1  MOV EDX,dword ptr [ECX + 0x4c]
004304f4  MOV dword ptr [EDX + 0x4],0x41a00000
004304fb  MOV EAX,dword ptr [EBP + -0x8]
004304fe  MOV ECX,dword ptr [EAX + 0x4c]
00430501  MOV EDX,dword ptr [ECX + 0x8]
00430504  MOV dword ptr [EDX + 0x24],0x3eded224
0043050b  MOV EAX,dword ptr [EBP + -0x8]
0043050e  MOV ECX,dword ptr [EAX + 0x4c]
00430511  MOV EDX,dword ptr [ECX + 0x8]
00430514  MOV dword ptr [EDX + 0x3c],0xbeab13be
0043051b  MOV EAX,dword ptr [EBP + -0x8]
0043051e  MOV ECX,dword ptr [EAX + 0x4c]
00430521  MOV EDX,dword ptr [ECX + 0x8]
00430524  MOV dword ptr [EDX + 0x9c],0x3f864abe
0043052e  MOV EAX,dword ptr [EBP + -0x8]
00430531  MOV ECX,dword ptr [EAX + 0x4c]
00430534  MOV EDX,dword ptr [ECX + 0x8]
00430537  MOV dword ptr [EDX + 0xa4],0x3f07ae14
00430541  MOV EAX,dword ptr [EBP + -0x8]
00430544  MOV ECX,dword ptr [EAX + 0x4c]
00430547  MOV EDX,dword ptr [ECX + 0x8]
0043054a  MOV dword ptr [EDX + 0xbc],0xbfd9a648
00430554  MOV EAX,dword ptr [EBP + -0x8]
00430557  MOV ECX,dword ptr [EAX + 0x4c]
0043055a  MOV EDX,dword ptr [ECX + 0x8]
0043055d  MOV dword ptr [EDX + 0xe4],0x3f88a466
00430567  MOV EAX,dword ptr [EBP + -0x8]
0043056a  MOV ECX,dword ptr [EAX + 0x4c]
0043056d  MOV EDX,dword ptr [ECX + 0x8]
00430570  MOV dword ptr [EDX + 0xec],0xbf07ae14
0043057a  MOV EAX,dword ptr [EBP + -0x8]
0043057d  MOV ECX,dword ptr [EAX + 0x4c]
00430580  MOV EDX,dword ptr [ECX + 0x8]
00430583  MOV dword ptr [EDX + 0x104],0x3fdbcf1c
0043058d  MOV EAX,dword ptr [EBP + -0x8]
00430590  MOV ECX,dword ptr [EAX + 0x4c]
00430593  MOV EDX,dword ptr [ECX + 0x8]
00430596  MOV dword ptr [EDX + 0x1bc],0xbf973b00
004305a0  MOV EAX,dword ptr [EBP + -0x8]
004305a3  MOV ECX,dword ptr [EAX + 0x4c]
004305a6  MOV dword ptr [ECX + 0xc],0x0
004305ad  MOV ESP,EBP
004305af  POP EBP
004305b0  RET
