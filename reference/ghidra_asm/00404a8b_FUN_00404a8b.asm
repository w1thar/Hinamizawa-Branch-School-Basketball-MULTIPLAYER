00404a8b  PUSH EBP
00404a8c  MOV EBP,ESP
00404a8e  SUB ESP,0xc
00404a91  MOV dword ptr [EBP + -0xc],ECX
00404a94  MOV EAX,dword ptr [EBP + -0xc]
00404a97  CMP dword ptr [EAX + 0x6c],0x0
00404a9b  JZ 0x00404ab9
00404a9d  MOV ECX,dword ptr [EBP + -0xc]
00404aa0  MOV EDX,dword ptr [ECX + 0x6c]
00404aa3  MOV EAX,dword ptr [EBP + -0xc]
00404aa6  MOV ECX,dword ptr [EAX + 0x6c]
00404aa9  MOV EAX,dword ptr [ECX]
00404aab  PUSH EDX
00404aac  CALL dword ptr [EAX + 0x8]
00404aaf  MOV ECX,dword ptr [EBP + -0xc]
00404ab2  MOV dword ptr [ECX + 0x6c],0x0
00404ab9  MOV EDX,dword ptr [EBP + -0xc]
00404abc  CMP dword ptr [EDX + 0x74],0x0
00404ac0  JZ 0x00404ae1
00404ac2  MOV EAX,dword ptr [EBP + -0xc]
00404ac5  MOV ECX,dword ptr [EAX + 0x74]
00404ac8  MOV dword ptr [EBP + -0x8],ECX
00404acb  MOV EDX,dword ptr [EBP + -0x8]
00404ace  PUSH EDX
00404acf  CALL 0x00433370
00404ad4  ADD ESP,0x4
00404ad7  MOV EAX,dword ptr [EBP + -0xc]
00404ada  MOV dword ptr [EAX + 0x74],0x0
00404ae1  MOV ECX,dword ptr [EBP + -0xc]
00404ae4  MOV EDX,dword ptr [ECX + 0x70]
00404ae7  PUSH EDX
00404ae8  CALL dword ptr [0x0045a484] {371038}
00404aee  MOV EAX,[0x00457ef0]
00404af3  CMP EAX,dword ptr [EBP + -0xc]
00404af6  JNZ 0x00404b05
00404af8  MOV ECX,dword ptr [EBP + -0xc]
00404afb  MOV EDX,dword ptr [ECX]
00404afd  MOV dword ptr [0x00457ef0] {None} {None} {None} {None},EDX
00404b03  JMP 0x00404b33
00404b05  MOV EAX,[0x00457ef0]
00404b0a  MOV dword ptr [EBP + -0x4],EAX
00404b0d  JMP 0x00404b17
00404b0f  MOV ECX,dword ptr [EBP + -0x4]
00404b12  MOV EDX,dword ptr [ECX]
00404b14  MOV dword ptr [EBP + -0x4],EDX
00404b17  CMP dword ptr [EBP + -0x4],0x0
00404b1b  JZ 0x00404b33
00404b1d  MOV EAX,dword ptr [EBP + -0x4]
00404b20  MOV ECX,dword ptr [EAX]
00404b22  CMP ECX,dword ptr [EBP + -0xc]
00404b25  JNZ 0x00404b31
00404b27  MOV EDX,dword ptr [EBP + -0x4]
00404b2a  MOV EAX,dword ptr [EBP + -0xc]
00404b2d  MOV ECX,dword ptr [EAX]
00404b2f  MOV dword ptr [EDX],ECX
00404b31  JMP 0x00404b0f
00404b33  MOV ESP,EBP
00404b35  POP EBP
00404b36  RET
