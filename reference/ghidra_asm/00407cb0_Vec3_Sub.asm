00407cb0  PUSH EBP
00407cb1  MOV EBP,ESP
00407cb3  MOV EAX,dword ptr [EBP + 0xc]
00407cb6  MOV ECX,dword ptr [EBP + 0x10]
00407cb9  FLD float ptr [EAX + 0x8]
00407cbc  FSUB float ptr [ECX + 0x8]
00407cbf  PUSH ECX
00407cc0  FSTP float ptr [ESP]
00407cc3  MOV EDX,dword ptr [EBP + 0xc]
00407cc6  MOV EAX,dword ptr [EBP + 0x10]
00407cc9  FLD float ptr [EDX + 0x4]
00407ccc  FSUB float ptr [EAX + 0x4]
00407ccf  PUSH ECX
00407cd0  FSTP float ptr [ESP]
00407cd3  MOV ECX,dword ptr [EBP + 0xc]
00407cd6  MOV EDX,dword ptr [EBP + 0x10]
00407cd9  FLD float ptr [ECX]
00407cdb  FSUB float ptr [EDX]
00407cdd  PUSH ECX
00407cde  FSTP float ptr [ESP]
00407ce1  MOV ECX,dword ptr [EBP + 0x8]
00407ce4  CALL 0x00401348  ; Vec3::Ctor
00407ce9  MOV EAX,dword ptr [EBP + 0x8]
00407cec  POP EBP
00407ced  RET
