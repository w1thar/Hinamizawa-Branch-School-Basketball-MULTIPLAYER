004199d4  PUSH EBP
004199d5  MOV EBP,ESP
004199d7  SUB ESP,0x18
004199da  MOV dword ptr [EBP + -0x8],ECX
004199dd  FLD float ptr [EBP + 0x8]
004199e0  FADD float ptr [0x0044e0f0] {3.14}
004199e6  FSTP float ptr [EBP + -0x4]
004199e9  FLD float ptr [EBP + -0x4]
004199ec  FCOMP float ptr [0x0044e0f0] {3.14}
004199f2  FNSTSW AX
004199f4  TEST AH,0x1
004199f7  JNZ 0x00419a05
004199f9  FLD float ptr [EBP + -0x4]
004199fc  FSUB float ptr [0x0044e1a0] {6.28}
00419a02  FSTP float ptr [EBP + -0x4]
00419a05  FLD float ptr [EBP + -0x4]
00419a08  FCOMP float ptr [EBP + 0x8]
00419a0b  FNSTSW AX
00419a0d  TEST AH,0x1
00419a10  JNZ 0x00419a78
00419a12  FLD float ptr [EBP + 0xc]
00419a15  FCOMP float ptr [EBP + 0x8]
00419a18  FNSTSW AX
00419a1a  TEST AH,0x1
00419a1d  JNZ 0x00419a28
00419a1f  MOV dword ptr [EBP + -0xc],0x1
00419a26  JMP 0x00419a2f
00419a28  MOV dword ptr [EBP + -0xc],0x0
00419a2f  FLD float ptr [EBP + -0x4]
00419a32  FCOMP float ptr [EBP + 0xc]
00419a35  FNSTSW AX
00419a37  TEST AH,0x1
00419a3a  JNZ 0x00419a45
00419a3c  MOV dword ptr [EBP + -0x10],0x1
00419a43  JMP 0x00419a4c
00419a45  MOV dword ptr [EBP + -0x10],0x0
00419a4c  MOV EAX,dword ptr [EBP + -0xc]
00419a4f  AND EAX,dword ptr [EBP + -0x10]
00419a52  TEST EAX,EAX
00419a54  JZ 0x00419a67
00419a56  MOV ECX,dword ptr [EBP + -0x8]
00419a59  FLD float ptr [EBP + 0x10]
00419a5c  FMUL float ptr [ECX + 0x54]
00419a5f  FSUBR float ptr [EBP + 0xc]
00419a62  FSTP float ptr [EBP + -0x4]
00419a65  JMP 0x00419a76
00419a67  MOV EDX,dword ptr [EBP + -0x8]
00419a6a  FLD float ptr [EBP + 0x10]
00419a6d  FMUL float ptr [EDX + 0x54]
00419a70  FADD float ptr [EBP + 0xc]
00419a73  FSTP float ptr [EBP + -0x4]
00419a76  JMP 0x00419adc
00419a78  FLD float ptr [EBP + 0xc]
00419a7b  FCOMP float ptr [EBP + 0x8]
00419a7e  FNSTSW AX
00419a80  TEST AH,0x1
00419a83  JZ 0x00419a8e
00419a85  MOV dword ptr [EBP + -0x14],0x1
00419a8c  JMP 0x00419a95
00419a8e  MOV dword ptr [EBP + -0x14],0x0
00419a95  FLD float ptr [EBP + -0x4]
00419a98  FCOMP float ptr [EBP + 0xc]
00419a9b  FNSTSW AX
00419a9d  TEST AH,0x1
00419aa0  JZ 0x00419aab
00419aa2  MOV dword ptr [EBP + -0x18],0x1
00419aa9  JMP 0x00419ab2
00419aab  MOV dword ptr [EBP + -0x18],0x0
00419ab2  MOV EAX,dword ptr [EBP + -0x14]
00419ab5  AND EAX,dword ptr [EBP + -0x18]
00419ab8  TEST EAX,EAX
00419aba  JZ 0x00419acd
00419abc  MOV ECX,dword ptr [EBP + -0x8]
00419abf  FLD float ptr [EBP + 0x10]
00419ac2  FMUL float ptr [ECX + 0x54]
00419ac5  FADD float ptr [EBP + 0xc]
00419ac8  FSTP float ptr [EBP + -0x4]
00419acb  JMP 0x00419adc
00419acd  MOV EDX,dword ptr [EBP + -0x8]
00419ad0  FLD float ptr [EBP + 0x10]
00419ad3  FMUL float ptr [EDX + 0x54]
00419ad6  FSUBR float ptr [EBP + 0xc]
00419ad9  FSTP float ptr [EBP + -0x4]
00419adc  FLD float ptr [EBP + -0x4]
00419adf  MOV ESP,EBP
00419ae1  POP EBP
00419ae2  RET 0xc
