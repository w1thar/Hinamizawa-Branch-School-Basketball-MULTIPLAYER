00407df0  PUSH EBP
00407df1  MOV EBP,ESP
00407df3  MOV EAX,dword ptr [EBP + 0xc]
00407df6  FLD float ptr [EAX + 0x8]
00407df9  FDIV float ptr [EBP + 0x10]
00407dfc  PUSH ECX
00407dfd  FSTP float ptr [ESP]
00407e00  MOV ECX,dword ptr [EBP + 0xc]
00407e03  FLD float ptr [ECX + 0x4]
00407e06  FDIV float ptr [EBP + 0x10]
00407e09  PUSH ECX
00407e0a  FSTP float ptr [ESP]
00407e0d  MOV EDX,dword ptr [EBP + 0xc]
00407e10  FLD float ptr [EDX]
00407e12  FDIV float ptr [EBP + 0x10]
00407e15  PUSH ECX
00407e16  FSTP float ptr [ESP]
00407e19  MOV ECX,dword ptr [EBP + 0x8]
00407e1c  CALL 0x00401348  ; Vec3::Ctor
00407e21  MOV EAX,dword ptr [EBP + 0x8]
00407e24  POP EBP
00407e25  RET
