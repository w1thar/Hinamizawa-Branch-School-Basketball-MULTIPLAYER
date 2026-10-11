00403ef0  PUSH EBP
00403ef1  MOV EBP,ESP
00403ef3  MOV EAX,dword ptr [EBP + 0x1c]
00403ef6  PUSH EAX
00403ef7  CALL 0x0040105a  ; acosf
00403efc  ADD ESP,0x4
00403eff  FMUL float ptr [0x0044e070] {2}
00403f05  MOV ECX,dword ptr [EBP + 0xc]
00403f08  FSTP float ptr [ECX]
00403f0a  MOV EDX,dword ptr [EBP + 0xc]
00403f0d  FLD float ptr [EDX]
00403f0f  FDIV float ptr [0x0044e070] {2}
00403f15  PUSH ECX
00403f16  FSTP float ptr [ESP]
00403f19  CALL 0x00401262  ; sinf
00403f1e  ADD ESP,0x4
00403f21  FDIVR float ptr [EBP + 0x10]
00403f24  MOV EAX,dword ptr [EBP + 0x8]
00403f27  FSTP float ptr [EAX]
00403f29  MOV ECX,dword ptr [EBP + 0xc]
00403f2c  FLD float ptr [ECX]
00403f2e  FDIV float ptr [0x0044e070] {2}
00403f34  PUSH ECX
00403f35  FSTP float ptr [ESP]
00403f38  CALL 0x00401262  ; sinf
00403f3d  ADD ESP,0x4
00403f40  FDIVR float ptr [EBP + 0x14]
00403f43  MOV EDX,dword ptr [EBP + 0x8]
00403f46  FSTP float ptr [EDX + 0x4]
00403f49  MOV EAX,dword ptr [EBP + 0xc]
00403f4c  FLD float ptr [EAX]
00403f4e  FDIV float ptr [0x0044e070] {2}
00403f54  PUSH ECX
00403f55  FSTP float ptr [ESP]
00403f58  CALL 0x00401262  ; sinf
00403f5d  ADD ESP,0x4
00403f60  FDIVR float ptr [EBP + 0x18]
00403f63  MOV ECX,dword ptr [EBP + 0x8]
00403f66  FSTP float ptr [ECX + 0x8]
00403f69  POP EBP
00403f6a  RET
