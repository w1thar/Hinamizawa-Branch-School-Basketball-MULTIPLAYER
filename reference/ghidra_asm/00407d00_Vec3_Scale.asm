00407d00  PUSH EBP
00407d01  MOV EBP,ESP
00407d03  MOV EAX,dword ptr [EBP + 0x10]
00407d06  FLD float ptr [EBP + 0xc]
00407d09  FMUL float ptr [EAX + 0x8]
00407d0c  PUSH ECX
00407d0d  FSTP float ptr [ESP]
00407d10  MOV ECX,dword ptr [EBP + 0x10]
00407d13  FLD float ptr [EBP + 0xc]
00407d16  FMUL float ptr [ECX + 0x4]
00407d19  PUSH ECX
00407d1a  FSTP float ptr [ESP]
00407d1d  MOV EDX,dword ptr [EBP + 0x10]
00407d20  FLD float ptr [EBP + 0xc]
00407d23  FMUL float ptr [EDX]
00407d25  PUSH ECX
00407d26  FSTP float ptr [ESP]
00407d29  MOV ECX,dword ptr [EBP + 0x8]
00407d2c  CALL 0x00401348  ; Vec3::Ctor
00407d31  MOV EAX,dword ptr [EBP + 0x8]
00407d34  POP EBP
00407d35  RET
