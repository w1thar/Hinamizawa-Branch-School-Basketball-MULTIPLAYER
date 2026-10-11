00407e40  PUSH EBP
00407e41  MOV EBP,ESP
00407e43  MOV EAX,dword ptr [EBP + 0x8]
00407e46  MOV ECX,dword ptr [EBP + 0xc]
00407e49  FLD float ptr [EAX]
00407e4b  FMUL float ptr [ECX]
00407e4d  MOV EDX,dword ptr [EBP + 0x8]
00407e50  MOV EAX,dword ptr [EBP + 0xc]
00407e53  FLD float ptr [EDX + 0x4]
00407e56  FMUL float ptr [EAX + 0x4]
00407e59  FADDP
00407e5b  MOV ECX,dword ptr [EBP + 0x8]
00407e5e  MOV EDX,dword ptr [EBP + 0xc]
00407e61  FLD float ptr [ECX + 0x8]
00407e64  FMUL float ptr [EDX + 0x8]
00407e67  FADDP
00407e69  POP EBP
00407e6a  RET
