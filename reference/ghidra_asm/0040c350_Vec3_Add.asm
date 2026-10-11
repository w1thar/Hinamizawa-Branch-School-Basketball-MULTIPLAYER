0040c350  PUSH EBP
0040c351  MOV EBP,ESP
0040c353  MOV EAX,dword ptr [EBP + 0xc]
0040c356  MOV ECX,dword ptr [EBP + 0x10]
0040c359  FLD float ptr [EAX + 0x8]
0040c35c  FADD float ptr [ECX + 0x8]
0040c35f  PUSH ECX
0040c360  FSTP float ptr [ESP]
0040c363  MOV EDX,dword ptr [EBP + 0xc]
0040c366  MOV EAX,dword ptr [EBP + 0x10]
0040c369  FLD float ptr [EDX + 0x4]
0040c36c  FADD float ptr [EAX + 0x4]
0040c36f  PUSH ECX
0040c370  FSTP float ptr [ESP]
0040c373  MOV ECX,dword ptr [EBP + 0xc]
0040c376  MOV EDX,dword ptr [EBP + 0x10]
0040c379  FLD float ptr [ECX]
0040c37b  FADD float ptr [EDX]
0040c37d  PUSH ECX
0040c37e  FSTP float ptr [ESP]
0040c381  MOV ECX,dword ptr [EBP + 0x8]
0040c384  CALL 0x00401348  ; Vec3::Ctor
0040c389  MOV EAX,dword ptr [EBP + 0x8]
0040c38c  POP EBP
0040c38d  RET
