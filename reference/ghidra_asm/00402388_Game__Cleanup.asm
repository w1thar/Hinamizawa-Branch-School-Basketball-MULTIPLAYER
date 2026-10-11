00402388  PUSH EBP
00402389  MOV EBP,ESP
0040238b  PUSH ECX
0040238c  MOV dword ptr [EBP + -0x4],ECX
0040238f  MOV EAX,dword ptr [EBP + -0x4]
00402392  CMP dword ptr [EAX + 0x3c],0x0
00402396  JZ 0x004023b4
00402398  MOV ECX,dword ptr [EBP + -0x4]
0040239b  MOV EDX,dword ptr [ECX + 0x3c]
0040239e  MOV EAX,dword ptr [EBP + -0x4]
004023a1  MOV ECX,dword ptr [EAX + 0x3c]
004023a4  MOV EAX,dword ptr [ECX]
004023a6  PUSH EDX
004023a7  CALL dword ptr [EAX + 0x8]
004023aa  MOV ECX,dword ptr [EBP + -0x4]
004023ad  MOV dword ptr [ECX + 0x3c],0x0
004023b4  MOV EDX,dword ptr [EBP + -0x4]
004023b7  CMP dword ptr [EDX + 0x38],0x0
004023bb  JZ 0x004023d9
004023bd  MOV EAX,dword ptr [EBP + -0x4]
004023c0  MOV ECX,dword ptr [EAX + 0x38]
004023c3  MOV EDX,dword ptr [EBP + -0x4]
004023c6  MOV EAX,dword ptr [EDX + 0x38]
004023c9  MOV EDX,dword ptr [EAX]
004023cb  PUSH ECX
004023cc  CALL dword ptr [EDX + 0x8]
004023cf  MOV EAX,dword ptr [EBP + -0x4]
004023d2  MOV dword ptr [EAX + 0x38],0x0
004023d9  MOV ECX,dword ptr [EBP + -0x4]
004023dc  CMP dword ptr [ECX + 0x44],0x0
004023e0  JZ 0x004023fe
004023e2  MOV EDX,dword ptr [EBP + -0x4]
004023e5  MOV EAX,dword ptr [EDX + 0x44]
004023e8  MOV ECX,dword ptr [EBP + -0x4]
004023eb  MOV EDX,dword ptr [ECX + 0x44]
004023ee  MOV ECX,dword ptr [EDX]
004023f0  PUSH EAX
004023f1  CALL dword ptr [ECX + 0x8]
004023f4  MOV EDX,dword ptr [EBP + -0x4]
004023f7  MOV dword ptr [EDX + 0x44],0x0
004023fe  MOV EAX,dword ptr [EBP + -0x4]
00402401  CMP dword ptr [EAX + 0x48],0x0
00402405  JZ 0x00402423
00402407  MOV ECX,dword ptr [EBP + -0x4]
0040240a  MOV EDX,dword ptr [ECX + 0x48]
0040240d  MOV EAX,dword ptr [EBP + -0x4]
00402410  MOV ECX,dword ptr [EAX + 0x48]
00402413  MOV EAX,dword ptr [ECX]
00402415  PUSH EDX
00402416  CALL dword ptr [EAX + 0x8]
00402419  MOV ECX,dword ptr [EBP + -0x4]
0040241c  MOV dword ptr [ECX + 0x48],0x0
00402423  MOV EDX,dword ptr [EBP + -0x4]
00402426  CMP dword ptr [EDX + 0x40],0x0
0040242a  JZ 0x00402448
0040242c  MOV EAX,dword ptr [EBP + -0x4]
0040242f  MOV ECX,dword ptr [EAX + 0x40]
00402432  MOV EDX,dword ptr [EBP + -0x4]
00402435  MOV EAX,dword ptr [EDX + 0x40]
00402438  MOV EDX,dword ptr [EAX]
0040243a  PUSH ECX
0040243b  CALL dword ptr [EDX + 0x8]
0040243e  MOV EAX,dword ptr [EBP + -0x4]
00402441  MOV dword ptr [EAX + 0x40],0x0
00402448  MOV ECX,dword ptr [EBP + -0x4]
0040244b  CMP dword ptr [ECX + 0x34],0x0
0040244f  JZ 0x0040246d
00402451  MOV EDX,dword ptr [EBP + -0x4]
00402454  MOV EAX,dword ptr [EDX + 0x34]
00402457  MOV ECX,dword ptr [EBP + -0x4]
0040245a  MOV EDX,dword ptr [ECX + 0x34]
0040245d  MOV ECX,dword ptr [EDX]
0040245f  PUSH EAX
00402460  CALL dword ptr [ECX + 0x8]
00402463  MOV EDX,dword ptr [EBP + -0x4]
00402466  MOV dword ptr [EDX + 0x34],0x0
0040246d  MOV ESP,EBP
0040246f  POP EBP
00402470  RET
