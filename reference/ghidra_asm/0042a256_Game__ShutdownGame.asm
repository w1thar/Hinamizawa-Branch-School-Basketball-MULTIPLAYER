0042a256  PUSH EBP
0042a257  MOV EBP,ESP
0042a259  SUB ESP,0x5c
0042a25c  MOV dword ptr [EBP + -0x40],ECX
0042a25f  MOV dword ptr [EBP + -0x4],0x0
0042a266  JMP 0x0042a271
0042a268  MOV EAX,dword ptr [EBP + -0x4]
0042a26b  ADD EAX,0x1
0042a26e  MOV dword ptr [EBP + -0x4],EAX
0042a271  CMP dword ptr [EBP + -0x4],0x6
0042a275  JGE 0x0042a2ce
0042a277  MOV ECX,dword ptr [EBP + -0x4]
0042a27a  MOV EDX,dword ptr [EBP + -0x40]
0042a27d  CMP dword ptr [EDX + ECX*0x4 + 0xd8],0x0
0042a285  JZ 0x0042a2cc
0042a287  MOV EAX,dword ptr [EBP + -0x4]
0042a28a  MOV ECX,dword ptr [EBP + -0x40]
0042a28d  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0042a294  MOV dword ptr [EBP + -0xc],EDX
0042a297  MOV EAX,dword ptr [EBP + -0xc]
0042a29a  MOV dword ptr [EBP + -0x8],EAX
0042a29d  CMP dword ptr [EBP + -0x8],0x0
0042a2a1  JZ 0x0042a2b4
0042a2a3  PUSH 0x1
0042a2a5  MOV ECX,dword ptr [EBP + -0x8]
0042a2a8  MOV EDX,dword ptr [ECX]
0042a2aa  MOV ECX,dword ptr [EBP + -0x8]
0042a2ad  CALL dword ptr [EDX]
0042a2af  MOV dword ptr [EBP + -0x44],EAX
0042a2b2  JMP 0x0042a2bb
0042a2b4  MOV dword ptr [EBP + -0x44],0x0
0042a2bb  MOV EAX,dword ptr [EBP + -0x4]
0042a2be  MOV ECX,dword ptr [EBP + -0x40]
0042a2c1  MOV dword ptr [ECX + EAX*0x4 + 0xd8],0x0
0042a2cc  JMP 0x0042a268
0042a2ce  MOV EDX,dword ptr [EBP + -0x40]
0042a2d1  CMP dword ptr [EDX + 0xd4],0x0
0042a2d8  JZ 0x0042a317
0042a2da  MOV EAX,dword ptr [EBP + -0x40]
0042a2dd  MOV ECX,dword ptr [EAX + 0xd4]
0042a2e3  MOV dword ptr [EBP + -0x14],ECX
0042a2e6  MOV EDX,dword ptr [EBP + -0x14]
0042a2e9  MOV dword ptr [EBP + -0x10],EDX
0042a2ec  CMP dword ptr [EBP + -0x10],0x0
0042a2f0  JZ 0x0042a303
0042a2f2  PUSH 0x1
0042a2f4  MOV EAX,dword ptr [EBP + -0x10]
0042a2f7  MOV EDX,dword ptr [EAX]
0042a2f9  MOV ECX,dword ptr [EBP + -0x10]
0042a2fc  CALL dword ptr [EDX]
0042a2fe  MOV dword ptr [EBP + -0x48],EAX
0042a301  JMP 0x0042a30a
0042a303  MOV dword ptr [EBP + -0x48],0x0
0042a30a  MOV EAX,dword ptr [EBP + -0x40]
0042a30d  MOV dword ptr [EAX + 0xd4],0x0
0042a317  MOV ECX,dword ptr [EBP + -0x40]
0042a31a  CMP dword ptr [ECX + 0xd0],0x0
0042a321  JZ 0x0042a360
0042a323  MOV EDX,dword ptr [EBP + -0x40]
0042a326  MOV EAX,dword ptr [EDX + 0xd0]
0042a32c  MOV dword ptr [EBP + -0x1c],EAX
0042a32f  MOV ECX,dword ptr [EBP + -0x1c]
0042a332  MOV dword ptr [EBP + -0x18],ECX
0042a335  CMP dword ptr [EBP + -0x18],0x0
0042a339  JZ 0x0042a34c
0042a33b  PUSH 0x1
0042a33d  MOV EDX,dword ptr [EBP + -0x18]
0042a340  MOV EAX,dword ptr [EDX]
0042a342  MOV ECX,dword ptr [EBP + -0x18]
0042a345  CALL dword ptr [EAX]
0042a347  MOV dword ptr [EBP + -0x4c],EAX
0042a34a  JMP 0x0042a353
0042a34c  MOV dword ptr [EBP + -0x4c],0x0
0042a353  MOV ECX,dword ptr [EBP + -0x40]
0042a356  MOV dword ptr [ECX + 0xd0],0x0
0042a360  MOV EDX,dword ptr [EBP + -0x40]
0042a363  CMP dword ptr [EDX + 0xcc],0x0
0042a36a  JZ 0x0042a3a9
0042a36c  MOV EAX,dword ptr [EBP + -0x40]
0042a36f  MOV ECX,dword ptr [EAX + 0xcc]
0042a375  MOV dword ptr [EBP + -0x24],ECX
0042a378  MOV EDX,dword ptr [EBP + -0x24]
0042a37b  MOV dword ptr [EBP + -0x20],EDX
0042a37e  CMP dword ptr [EBP + -0x20],0x0
0042a382  JZ 0x0042a395
0042a384  PUSH 0x1
0042a386  MOV EAX,dword ptr [EBP + -0x20]
0042a389  MOV EDX,dword ptr [EAX]
0042a38b  MOV ECX,dword ptr [EBP + -0x20]
0042a38e  CALL dword ptr [EDX]
0042a390  MOV dword ptr [EBP + -0x50],EAX
0042a393  JMP 0x0042a39c
0042a395  MOV dword ptr [EBP + -0x50],0x0
0042a39c  MOV EAX,dword ptr [EBP + -0x40]
0042a39f  MOV dword ptr [EAX + 0xcc],0x0
0042a3a9  MOV ECX,dword ptr [EBP + -0x40]
0042a3ac  CMP dword ptr [ECX + 0xc8],0x0
0042a3b3  JZ 0x0042a3f2
0042a3b5  MOV EDX,dword ptr [EBP + -0x40]
0042a3b8  MOV EAX,dword ptr [EDX + 0xc8]
0042a3be  MOV dword ptr [EBP + -0x2c],EAX
0042a3c1  MOV ECX,dword ptr [EBP + -0x2c]
0042a3c4  MOV dword ptr [EBP + -0x28],ECX
0042a3c7  CMP dword ptr [EBP + -0x28],0x0
0042a3cb  JZ 0x0042a3de
0042a3cd  PUSH 0x1
0042a3cf  MOV EDX,dword ptr [EBP + -0x28]
0042a3d2  MOV EAX,dword ptr [EDX]
0042a3d4  MOV ECX,dword ptr [EBP + -0x28]
0042a3d7  CALL dword ptr [EAX]
0042a3d9  MOV dword ptr [EBP + -0x54],EAX
0042a3dc  JMP 0x0042a3e5
0042a3de  MOV dword ptr [EBP + -0x54],0x0
0042a3e5  MOV ECX,dword ptr [EBP + -0x40]
0042a3e8  MOV dword ptr [ECX + 0xc8],0x0
0042a3f2  MOV EDX,dword ptr [EBP + -0x40]
0042a3f5  CMP dword ptr [EDX + 0xc4],0x0
0042a3fc  JZ 0x0042a43b
0042a3fe  MOV EAX,dword ptr [EBP + -0x40]
0042a401  MOV ECX,dword ptr [EAX + 0xc4]
0042a407  MOV dword ptr [EBP + -0x34],ECX
0042a40a  MOV EDX,dword ptr [EBP + -0x34]
0042a40d  MOV dword ptr [EBP + -0x30],EDX
0042a410  CMP dword ptr [EBP + -0x30],0x0
0042a414  JZ 0x0042a427
0042a416  PUSH 0x1
0042a418  MOV EAX,dword ptr [EBP + -0x30]
0042a41b  MOV EDX,dword ptr [EAX]
0042a41d  MOV ECX,dword ptr [EBP + -0x30]
0042a420  CALL dword ptr [EDX]
0042a422  MOV dword ptr [EBP + -0x58],EAX
0042a425  JMP 0x0042a42e
0042a427  MOV dword ptr [EBP + -0x58],0x0
0042a42e  MOV EAX,dword ptr [EBP + -0x40]
0042a431  MOV dword ptr [EAX + 0xc4],0x0
0042a43b  MOV ECX,dword ptr [EBP + -0x40]
0042a43e  CMP dword ptr [ECX + 0xc0],0x0
0042a445  JZ 0x0042a484
0042a447  MOV EDX,dword ptr [EBP + -0x40]
0042a44a  MOV EAX,dword ptr [EDX + 0xc0]
0042a450  MOV dword ptr [EBP + -0x3c],EAX
0042a453  MOV ECX,dword ptr [EBP + -0x3c]
0042a456  MOV dword ptr [EBP + -0x38],ECX
0042a459  CMP dword ptr [EBP + -0x38],0x0
0042a45d  JZ 0x0042a470
0042a45f  PUSH 0x1
0042a461  MOV EDX,dword ptr [EBP + -0x38]
0042a464  MOV EAX,dword ptr [EDX]
0042a466  MOV ECX,dword ptr [EBP + -0x38]
0042a469  CALL dword ptr [EAX]
0042a46b  MOV dword ptr [EBP + -0x5c],EAX
0042a46e  JMP 0x0042a477
0042a470  MOV dword ptr [EBP + -0x5c],0x0
0042a477  MOV ECX,dword ptr [EBP + -0x40]
0042a47a  MOV dword ptr [ECX + 0xc0],0x0
0042a484  MOV ESP,EBP
0042a486  POP EBP
0042a487  RET
