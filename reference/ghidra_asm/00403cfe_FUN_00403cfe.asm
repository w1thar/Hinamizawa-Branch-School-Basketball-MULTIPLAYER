00403cfe  PUSH EBP
00403cff  MOV EBP,ESP
00403d01  SUB ESP,0x10
00403d04  MOV EAX,dword ptr [EBP + 0xc]
00403d07  MOV ECX,dword ptr [EBP + 0x10]
00403d0a  FLD float ptr [EAX]
00403d0c  FMUL float ptr [ECX]
00403d0e  MOV EDX,dword ptr [EBP + 0xc]
00403d11  MOV EAX,dword ptr [EBP + 0x10]
00403d14  FLD float ptr [EDX + 0x4]
00403d17  FMUL float ptr [EAX + 0x10]
00403d1a  FADDP
00403d1c  MOV ECX,dword ptr [EBP + 0xc]
00403d1f  MOV EDX,dword ptr [EBP + 0x10]
00403d22  FLD float ptr [ECX + 0x8]
00403d25  FMUL float ptr [EDX + 0x20]
00403d28  FADDP
00403d2a  MOV EAX,dword ptr [EBP + 0x10]
00403d2d  FADD float ptr [EAX + 0x30]
00403d30  FSTP float ptr [EBP + -0x8]
00403d33  MOV ECX,dword ptr [EBP + 0xc]
00403d36  MOV EDX,dword ptr [EBP + 0x10]
00403d39  FLD float ptr [ECX]
00403d3b  FMUL float ptr [EDX + 0x4]
00403d3e  MOV EAX,dword ptr [EBP + 0xc]
00403d41  MOV ECX,dword ptr [EBP + 0x10]
00403d44  FLD float ptr [EAX + 0x4]
00403d47  FMUL float ptr [ECX + 0x14]
00403d4a  FADDP
00403d4c  MOV EDX,dword ptr [EBP + 0xc]
00403d4f  MOV EAX,dword ptr [EBP + 0x10]
00403d52  FLD float ptr [EDX + 0x8]
00403d55  FMUL float ptr [EAX + 0x24]
00403d58  FADDP
00403d5a  MOV ECX,dword ptr [EBP + 0x10]
00403d5d  FADD float ptr [ECX + 0x34]
00403d60  FSTP float ptr [EBP + -0xc]
00403d63  MOV EDX,dword ptr [EBP + 0xc]
00403d66  MOV EAX,dword ptr [EBP + 0x10]
00403d69  FLD float ptr [EDX]
00403d6b  FMUL float ptr [EAX + 0x8]
00403d6e  MOV ECX,dword ptr [EBP + 0xc]
00403d71  MOV EDX,dword ptr [EBP + 0x10]
00403d74  FLD float ptr [ECX + 0x4]
00403d77  FMUL float ptr [EDX + 0x18]
00403d7a  FADDP
00403d7c  MOV EAX,dword ptr [EBP + 0xc]
00403d7f  MOV ECX,dword ptr [EBP + 0x10]
00403d82  FLD float ptr [EAX + 0x8]
00403d85  FMUL float ptr [ECX + 0x28]
00403d88  FADDP
00403d8a  MOV EDX,dword ptr [EBP + 0x10]
00403d8d  FADD float ptr [EDX + 0x38]
00403d90  FSTP float ptr [EBP + -0x10]
00403d93  MOV EAX,dword ptr [EBP + 0xc]
00403d96  MOV ECX,dword ptr [EBP + 0x10]
00403d99  FLD float ptr [EAX]
00403d9b  FMUL float ptr [ECX + 0xc]
00403d9e  MOV EDX,dword ptr [EBP + 0xc]
00403da1  MOV EAX,dword ptr [EBP + 0x10]
00403da4  FLD float ptr [EDX + 0x4]
00403da7  FMUL float ptr [EAX + 0x1c]
00403daa  FADDP
00403dac  MOV ECX,dword ptr [EBP + 0xc]
00403daf  MOV EDX,dword ptr [EBP + 0x10]
00403db2  FLD float ptr [ECX + 0x8]
00403db5  FMUL float ptr [EDX + 0x2c]
00403db8  FADDP
00403dba  MOV EAX,dword ptr [EBP + 0x10]
00403dbd  FADD float ptr [EAX + 0x3c]
00403dc0  FSTP float ptr [EBP + -0x4]
00403dc3  FLD float ptr [EBP + -0x4]
00403dc6  SUB ESP,0x8
00403dc9  FSTP double ptr [ESP]
00403dcc  CALL 0x00433940  ; fabs
00403dd1  ADD ESP,0x8
00403dd4  FLD float ptr [0x0044e060] {1e-05}
00403dda  FCOMPP
00403ddc  FNSTSW AX
00403dde  TEST AH,0x41
00403de1  JNZ 0x00403dea
00403de3  MOV EAX,0x80070057
00403de8  JMP 0x00403e0f
00403dea  FLD float ptr [EBP + -0x8]
00403ded  FDIV float ptr [EBP + -0x4]
00403df0  MOV ECX,dword ptr [EBP + 0x8]
00403df3  FSTP float ptr [ECX]
00403df5  FLD float ptr [EBP + -0xc]
00403df8  FDIV float ptr [EBP + -0x4]
00403dfb  MOV EDX,dword ptr [EBP + 0x8]
00403dfe  FSTP float ptr [EDX + 0x4]
00403e01  FLD float ptr [EBP + -0x10]
00403e04  FDIV float ptr [EBP + -0x4]
00403e07  MOV EAX,dword ptr [EBP + 0x8]
00403e0a  FSTP float ptr [EAX + 0x8]
00403e0d  XOR EAX,EAX
00403e0f  MOV ESP,EBP
00403e11  POP EBP
00403e12  RET
