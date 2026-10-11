0040ab8f  PUSH EBP
0040ab90  MOV EBP,ESP
0040ab92  SUB ESP,0xc
0040ab95  MOV dword ptr [EBP + -0xc],ECX
0040ab98  MOV dword ptr [EBP + -0x8],0x0
0040ab9f  JMP 0x0040abaa
0040aba1  MOV EAX,dword ptr [EBP + -0x8]
0040aba4  ADD EAX,0x1
0040aba7  MOV dword ptr [EBP + -0x8],EAX
0040abaa  MOV ECX,dword ptr [EBP + -0xc]
0040abad  MOV EDX,dword ptr [EBP + -0x8]
0040abb0  CMP EDX,dword ptr [ECX + 0x8]
0040abb3  JNC 0x0040ac1e
0040abb5  MOV EAX,dword ptr [EBP + -0x8]
0040abb8  IMUL EAX,EAX,0x1c
0040abbb  MOV ECX,dword ptr [EBP + -0xc]
0040abbe  MOV EDX,dword ptr [ECX + 0x1c]
0040abc1  FLD float ptr [EDX + EAX*0x1]
0040abc4  FMUL float ptr [EBP + 0x8]
0040abc7  MOV EAX,dword ptr [EBP + -0x8]
0040abca  IMUL EAX,EAX,0x1c
0040abcd  MOV ECX,dword ptr [EBP + -0xc]
0040abd0  MOV EDX,dword ptr [ECX + 0x1c]
0040abd3  FSTP float ptr [EDX + EAX*0x1]
0040abd6  MOV EAX,dword ptr [EBP + -0x8]
0040abd9  IMUL EAX,EAX,0x1c
0040abdc  MOV ECX,dword ptr [EBP + -0xc]
0040abdf  MOV EDX,dword ptr [ECX + 0x1c]
0040abe2  FLD float ptr [EDX + EAX*0x1 + 0x4]
0040abe6  FMUL float ptr [EBP + 0x8]
0040abe9  MOV EAX,dword ptr [EBP + -0x8]
0040abec  IMUL EAX,EAX,0x1c
0040abef  MOV ECX,dword ptr [EBP + -0xc]
0040abf2  MOV EDX,dword ptr [ECX + 0x1c]
0040abf5  FSTP float ptr [EDX + EAX*0x1 + 0x4]
0040abf9  MOV EAX,dword ptr [EBP + -0x8]
0040abfc  IMUL EAX,EAX,0x1c
0040abff  MOV ECX,dword ptr [EBP + -0xc]
0040ac02  MOV EDX,dword ptr [ECX + 0x1c]
0040ac05  FLD float ptr [EDX + EAX*0x1 + 0x8]
0040ac09  FMUL float ptr [EBP + 0x8]
0040ac0c  MOV EAX,dword ptr [EBP + -0x8]
0040ac0f  IMUL EAX,EAX,0x1c
0040ac12  MOV ECX,dword ptr [EBP + -0xc]
0040ac15  MOV EDX,dword ptr [ECX + 0x1c]
0040ac18  FSTP float ptr [EDX + EAX*0x1 + 0x8]
0040ac1c  JMP 0x0040aba1
0040ac1e  MOV dword ptr [EBP + -0x4],0x0
0040ac25  JMP 0x0040ac30
0040ac27  MOV EAX,dword ptr [EBP + -0x4]
0040ac2a  ADD EAX,0x1
0040ac2d  MOV dword ptr [EBP + -0x4],EAX
0040ac30  MOV ECX,dword ptr [EBP + -0xc]
0040ac33  MOV EDX,dword ptr [EBP + -0x4]
0040ac36  CMP EDX,dword ptr [ECX + 0x2c]
0040ac39  JGE 0x0040ad82
0040ac3f  MOV EAX,dword ptr [EBP + -0x4]
0040ac42  IMUL EAX,EAX,0xa8
0040ac48  MOV ECX,dword ptr [EBP + -0xc]
0040ac4b  MOV EDX,dword ptr [ECX + 0x20]
0040ac4e  FLD float ptr [EDX + EAX*0x1 + 0x84]
0040ac55  FMUL float ptr [EBP + 0x8]
0040ac58  FDIV float ptr [0x0044e0b0] {9}
0040ac5e  MOV EAX,dword ptr [EBP + -0x4]
0040ac61  IMUL EAX,EAX,0xa8
0040ac67  MOV ECX,dword ptr [EBP + -0xc]
0040ac6a  MOV EDX,dword ptr [ECX + 0x20]
0040ac6d  FSTP float ptr [EDX + EAX*0x1 + 0x84]
0040ac74  MOV EAX,dword ptr [EBP + -0x4]
0040ac77  IMUL EAX,EAX,0xa8
0040ac7d  MOV ECX,dword ptr [EBP + -0xc]
0040ac80  MOV EDX,dword ptr [ECX + 0x20]
0040ac83  FLD float ptr [EDX + EAX*0x1 + 0x88]
0040ac8a  FMUL float ptr [EBP + 0x8]
0040ac8d  FDIV float ptr [0x0044e0b0] {9}
0040ac93  MOV EAX,dword ptr [EBP + -0x4]
0040ac96  IMUL EAX,EAX,0xa8
0040ac9c  MOV ECX,dword ptr [EBP + -0xc]
0040ac9f  MOV EDX,dword ptr [ECX + 0x20]
0040aca2  FSTP float ptr [EDX + EAX*0x1 + 0x88]
0040aca9  MOV EAX,dword ptr [EBP + -0x4]
0040acac  IMUL EAX,EAX,0xa8
0040acb2  MOV ECX,dword ptr [EBP + -0xc]
0040acb5  MOV EDX,dword ptr [ECX + 0x20]
0040acb8  FLD float ptr [EDX + EAX*0x1 + 0x8c]
0040acbf  FMUL float ptr [EBP + 0x8]
0040acc2  FDIV float ptr [0x0044e0b0] {9}
0040acc8  MOV EAX,dword ptr [EBP + -0x4]
0040accb  IMUL EAX,EAX,0xa8
0040acd1  MOV ECX,dword ptr [EBP + -0xc]
0040acd4  MOV EDX,dword ptr [ECX + 0x20]
0040acd7  FSTP float ptr [EDX + EAX*0x1 + 0x8c]
0040acde  MOV EAX,dword ptr [EBP + -0x4]
0040ace1  IMUL EAX,EAX,0xa8
0040ace7  MOV ECX,dword ptr [EBP + -0xc]
0040acea  MOV EDX,dword ptr [ECX + 0x20]
0040aced  FLD float ptr [EDX + EAX*0x1 + 0x90]
0040acf4  FMUL float ptr [EBP + 0x8]
0040acf7  FDIV float ptr [0x0044e0b0] {9}
0040acfd  MOV EAX,dword ptr [EBP + -0x4]
0040ad00  IMUL EAX,EAX,0xa8
0040ad06  MOV ECX,dword ptr [EBP + -0xc]
0040ad09  MOV EDX,dword ptr [ECX + 0x20]
0040ad0c  FSTP float ptr [EDX + EAX*0x1 + 0x90]
0040ad13  MOV EAX,dword ptr [EBP + -0x4]
0040ad16  IMUL EAX,EAX,0xa8
0040ad1c  MOV ECX,dword ptr [EBP + -0xc]
0040ad1f  MOV EDX,dword ptr [ECX + 0x20]
0040ad22  FLD float ptr [EDX + EAX*0x1 + 0x94]
0040ad29  FMUL float ptr [EBP + 0x8]
0040ad2c  FDIV float ptr [0x0044e0b0] {9}
0040ad32  MOV EAX,dword ptr [EBP + -0x4]
0040ad35  IMUL EAX,EAX,0xa8
0040ad3b  MOV ECX,dword ptr [EBP + -0xc]
0040ad3e  MOV EDX,dword ptr [ECX + 0x20]
0040ad41  FSTP float ptr [EDX + EAX*0x1 + 0x94]
0040ad48  MOV EAX,dword ptr [EBP + -0x4]
0040ad4b  IMUL EAX,EAX,0xa8
0040ad51  MOV ECX,dword ptr [EBP + -0xc]
0040ad54  MOV EDX,dword ptr [ECX + 0x20]
0040ad57  FLD float ptr [EDX + EAX*0x1 + 0x98]
0040ad5e  FMUL float ptr [EBP + 0x8]
0040ad61  FDIV float ptr [0x0044e0b0] {9}
0040ad67  MOV EAX,dword ptr [EBP + -0x4]
0040ad6a  IMUL EAX,EAX,0xa8
0040ad70  MOV ECX,dword ptr [EBP + -0xc]
0040ad73  MOV EDX,dword ptr [ECX + 0x20]
0040ad76  FSTP float ptr [EDX + EAX*0x1 + 0x98]
0040ad7d  JMP 0x0040ac27
0040ad82  MOV ESP,EBP
0040ad84  POP EBP
0040ad85  RET 0x4
