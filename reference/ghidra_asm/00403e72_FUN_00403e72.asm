00403e72  PUSH EBP
00403e73  MOV EBP,ESP
00403e75  FLD float ptr [EBP + 0x1c]
00403e78  FDIV float ptr [0x0044e070] {2}
00403e7e  PUSH ECX
00403e7f  FSTP float ptr [ESP]
00403e82  CALL 0x00401262
00403e87  ADD ESP,0x4
00403e8a  MOV EAX,dword ptr [EBP + 0x18]
00403e8d  FMUL float ptr [EAX]
00403e8f  MOV ECX,dword ptr [EBP + 0x8]
00403e92  FSTP float ptr [ECX]
00403e94  FLD float ptr [EBP + 0x1c]
00403e97  FDIV float ptr [0x0044e070] {2}
00403e9d  PUSH ECX
00403e9e  FSTP float ptr [ESP]
00403ea1  CALL 0x00401262
00403ea6  ADD ESP,0x4
00403ea9  MOV EDX,dword ptr [EBP + 0x18]
00403eac  FMUL float ptr [EDX + 0x4]
00403eaf  MOV EAX,dword ptr [EBP + 0xc]
00403eb2  FSTP float ptr [EAX]
00403eb4  FLD float ptr [EBP + 0x1c]
00403eb7  FDIV float ptr [0x0044e070] {2}
00403ebd  PUSH ECX
00403ebe  FSTP float ptr [ESP]
00403ec1  CALL 0x00401262
00403ec6  ADD ESP,0x4
00403ec9  MOV ECX,dword ptr [EBP + 0x18]
00403ecc  FMUL float ptr [ECX + 0x8]
00403ecf  MOV EDX,dword ptr [EBP + 0x10]
00403ed2  FSTP float ptr [EDX]
00403ed4  FLD float ptr [EBP + 0x1c]
00403ed7  FDIV float ptr [0x0044e070] {2}
00403edd  PUSH ECX
00403ede  FSTP float ptr [ESP]
00403ee1  CALL 0x0040136b
00403ee6  ADD ESP,0x4
00403ee9  MOV EAX,dword ptr [EBP + 0x14]
00403eec  FSTP float ptr [EAX]
00403eee  POP EBP
00403eef  RET
