00407c60  PUSH EBP
00407c61  MOV EBP,ESP
00407c63  PUSH ECX
00407c64  MOV dword ptr [EBP + -0x4],ECX
00407c67  MOV EAX,dword ptr [EBP + -0x4]
00407c6a  FLD float ptr [EAX]
00407c6c  FDIV float ptr [EBP + 0x8]
00407c6f  MOV ECX,dword ptr [EBP + -0x4]
00407c72  FSTP float ptr [ECX]
00407c74  MOV EDX,dword ptr [EBP + -0x4]
00407c77  FLD float ptr [EDX + 0x4]
00407c7a  FDIV float ptr [EBP + 0x8]
00407c7d  MOV EAX,dword ptr [EBP + -0x4]
00407c80  FSTP float ptr [EAX + 0x4]
00407c83  MOV ECX,dword ptr [EBP + -0x4]
00407c86  FLD float ptr [ECX + 0x8]
00407c89  FDIV float ptr [EBP + 0x8]
00407c8c  MOV EDX,dword ptr [EBP + -0x4]
00407c8f  FSTP float ptr [EDX + 0x8]
00407c92  MOV EAX,dword ptr [EBP + -0x4]
00407c95  MOV ESP,EBP
00407c97  POP EBP
00407c98  RET 0x4
