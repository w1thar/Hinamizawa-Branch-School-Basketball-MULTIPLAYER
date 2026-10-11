0043006a  PUSH EBP
0043006b  MOV EBP,ESP
0043006d  SUB ESP,0x8
00430070  MOV dword ptr [EBP + -0x8],ECX
00430073  MOV dword ptr [EBP + -0x4],0x0
0043007a  JMP 0x00430085
0043007c  MOV EAX,dword ptr [EBP + -0x4]
0043007f  ADD EAX,0x1
00430082  MOV dword ptr [EBP + -0x4],EAX
00430085  CMP dword ptr [EBP + -0x4],0x1
00430089  JGE 0x004300b5
0043008b  MOV ECX,dword ptr [EBP + -0x8]
0043008e  MOV EDX,dword ptr [ECX + 0x4]
00430091  MOV EAX,dword ptr [EDX + 0x2c]
00430094  IMUL EAX,EAX,0x18
00430097  PUSH EAX
00430098  PUSH 0x0
0043009a  MOV ECX,dword ptr [EBP + -0x4]
0043009d  IMUL ECX,ECX,0xc
004300a0  MOV EDX,dword ptr [EBP + -0x8]
004300a3  MOV EAX,dword ptr [EDX + 0x4c]
004300a6  MOV ECX,dword ptr [EAX + ECX*0x1 + 0x8]
004300aa  PUSH ECX
004300ab  CALL 0x00433440
004300b0  ADD ESP,0xc
004300b3  JMP 0x0043007c
004300b5  MOV EDX,dword ptr [EBP + -0x8]
004300b8  MOV EAX,dword ptr [EDX + 0x4c]
004300bb  MOV dword ptr [EAX],0x3ed5768a
004300c1  MOV ECX,dword ptr [EBP + -0x8]
004300c4  MOV EDX,dword ptr [ECX + 0x4c]
004300c7  MOV dword ptr [EDX + 0x4],0x4124d5e6
004300ce  MOV EAX,dword ptr [EBP + -0x8]
004300d1  MOV ECX,dword ptr [EAX + 0x4c]
004300d4  MOV EDX,dword ptr [ECX + 0x8]
004300d7  MOV dword ptr [EDX + 0x4],0xbf69b5b7
004300de  MOV EAX,dword ptr [EBP + -0x8]
004300e1  MOV ECX,dword ptr [EAX + 0x4c]
004300e4  MOV EDX,dword ptr [ECX + 0x8]
004300e7  MOV dword ptr [EDX + 0x24],0xbec35782
004300ee  MOV EAX,dword ptr [EBP + -0x8]
004300f1  MOV ECX,dword ptr [EAX + 0x4c]
004300f4  MOV EDX,dword ptr [ECX + 0x8]
004300f7  MOV dword ptr [EDX + 0x3c],0x3f5d6c2f
004300fe  MOV EAX,dword ptr [EBP + -0x8]
00430101  XOR ECX,ECX
00430103  CMP dword ptr [EAX + 0x150],0x1
0043010a  SETZ CL
0043010d  MOV EDX,dword ptr [EBP + -0x8]
00430110  XOR EAX,EAX
00430112  CMP dword ptr [EDX + 0x150],0x5
00430119  SETZ AL
0043011c  OR ECX,EAX
0043011e  TEST ECX,ECX
00430120  JZ 0x00430135
00430122  MOV ECX,dword ptr [EBP + -0x8]
00430125  MOV EDX,dword ptr [ECX + 0x4c]
00430128  MOV EAX,dword ptr [EDX + 0x8]
0043012b  MOV dword ptr [EAX + 0x84],0xbef780dc
00430135  MOV ECX,dword ptr [EBP + -0x8]
00430138  MOV EDX,dword ptr [ECX + 0x4c]
0043013b  MOV EAX,dword ptr [EDX + 0x8]
0043013e  MOV dword ptr [EAX + 0x12c],0x3f6658a3
00430148  MOV ECX,dword ptr [EBP + -0x8]
0043014b  MOV EDX,dword ptr [ECX + 0x4c]
0043014e  MOV EAX,dword ptr [EDX + 0x8]
00430151  MOV dword ptr [EAX + 0x144],0xc0079bb2
0043015b  MOV ECX,dword ptr [EBP + -0x8]
0043015e  MOV EDX,dword ptr [ECX + 0x4c]
00430161  MOV EAX,dword ptr [EDX + 0x8]
00430164  MOV dword ptr [EAX + 0x15c],0x3f99c372
0043016e  MOV ECX,dword ptr [EBP + -0x8]
00430171  MOV EDX,dword ptr [ECX + 0x4c]
00430174  MOV EAX,dword ptr [EDX + 0x8]
00430177  MOV dword ptr [EAX + 0x174],0x3f845ce6
00430181  MOV ECX,dword ptr [EBP + -0x8]
00430184  MOV EDX,dword ptr [ECX + 0x4c]
00430187  MOV EAX,dword ptr [EDX + 0x8]
0043018a  MOV dword ptr [EAX + 0x18c],0xc00e30f9
00430194  MOV ECX,dword ptr [EBP + -0x8]
00430197  MOV EDX,dword ptr [ECX + 0x4c]
0043019a  MOV EAX,dword ptr [EDX + 0x8]
0043019d  MOV dword ptr [EAX + 0x1a4],0x3f8f5d9a
004301a7  MOV ECX,dword ptr [EBP + -0x8]
004301aa  MOV EDX,dword ptr [ECX + 0x4c]
004301ad  MOV EAX,dword ptr [EDX + 0x8]
004301b0  MOV dword ptr [EAX + 0x1bc],0xbfd15dee
004301ba  MOV ECX,dword ptr [EBP + -0x8]
004301bd  MOV EDX,dword ptr [ECX + 0x4c]
004301c0  MOV dword ptr [EDX + 0xc],0x0
004301c7  MOV ESP,EBP
004301c9  POP EBP
004301ca  RET
