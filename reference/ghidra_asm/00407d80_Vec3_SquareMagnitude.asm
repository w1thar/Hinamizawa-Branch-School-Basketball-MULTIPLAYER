00407d80  PUSH EBP
00407d81  MOV EBP,ESP
00407d83  MOV EAX,dword ptr [EBP + 0x8]
00407d86  MOV ECX,dword ptr [EBP + 0x8]
00407d89  FLD float ptr [EAX]
00407d8b  FMUL float ptr [ECX]
00407d8d  MOV EDX,dword ptr [EBP + 0x8]
00407d90  MOV EAX,dword ptr [EBP + 0x8]
00407d93  FLD float ptr [EDX + 0x4]
00407d96  FMUL float ptr [EAX + 0x4]
00407d99  FADDP
00407d9b  MOV ECX,dword ptr [EBP + 0x8]
00407d9e  MOV EDX,dword ptr [EBP + 0x8]
00407da1  FLD float ptr [ECX + 0x8]
00407da4  FMUL float ptr [EDX + 0x8]
00407da7  FADDP
00407da9  POP EBP
00407daa  RET
