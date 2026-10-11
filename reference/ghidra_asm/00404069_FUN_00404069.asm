00404069  PUSH EBP
0040406a  MOV EBP,ESP
0040406c  SUB ESP,0x24
0040406f  FLD float ptr [EBP + 0xc]
00404072  FMUL float ptr [EBP + 0xc]
00404075  FSTP float ptr [EBP + -0x24]
00404078  FLD float ptr [EBP + 0x10]
0040407b  FMUL float ptr [EBP + 0x10]
0040407e  FSTP float ptr [EBP + -0xc]
00404081  FLD float ptr [EBP + 0x14]
00404084  FMUL float ptr [EBP + 0x14]
00404087  FSTP float ptr [EBP + -0x14]
0040408a  FLD float ptr [EBP + 0xc]
0040408d  FMUL float ptr [EBP + 0x10]
00404090  FSTP float ptr [EBP + -0x4]
00404093  FLD float ptr [EBP + 0xc]
00404096  FMUL float ptr [EBP + 0x14]
00404099  FSTP float ptr [EBP + -0x8]
0040409c  FLD float ptr [EBP + 0x10]
0040409f  FMUL float ptr [EBP + 0x14]
004040a2  FSTP float ptr [EBP + -0x10]
004040a5  FLD float ptr [EBP + 0x18]
004040a8  FMUL float ptr [EBP + 0xc]
004040ab  FSTP float ptr [EBP + -0x18]
004040ae  FLD float ptr [EBP + 0x18]
004040b1  FMUL float ptr [EBP + 0x10]
004040b4  FSTP float ptr [EBP + -0x1c]
004040b7  FLD float ptr [EBP + 0x18]
004040ba  FMUL float ptr [EBP + 0x14]
004040bd  FSTP float ptr [EBP + -0x20]
004040c0  FLD float ptr [EBP + -0xc]
004040c3  FADD float ptr [EBP + -0x14]
004040c6  FMUL float ptr [0x0044e070] {2}
004040cc  FSUBR float ptr [0x0044e064] {1}
004040d2  MOV EAX,dword ptr [EBP + 0x8]
004040d5  FSTP float ptr [EAX]
004040d7  FLD float ptr [EBP + -0x4]
004040da  FSUB float ptr [EBP + -0x20]
004040dd  FMUL float ptr [0x0044e070] {2}
004040e3  MOV ECX,dword ptr [EBP + 0x8]
004040e6  FSTP float ptr [ECX + 0x4]
004040e9  FLD float ptr [EBP + -0x8]
004040ec  FADD float ptr [EBP + -0x1c]
004040ef  FMUL float ptr [0x0044e070] {2}
004040f5  MOV EDX,dword ptr [EBP + 0x8]
004040f8  FSTP float ptr [EDX + 0x8]
004040fb  FLD float ptr [EBP + -0x4]
004040fe  FADD float ptr [EBP + -0x20]
00404101  FMUL float ptr [0x0044e070] {2}
00404107  MOV EAX,dword ptr [EBP + 0x8]
0040410a  FSTP float ptr [EAX + 0x10]
0040410d  FLD float ptr [EBP + -0x24]
00404110  FADD float ptr [EBP + -0x14]
00404113  FMUL float ptr [0x0044e070] {2}
00404119  FSUBR float ptr [0x0044e064] {1}
0040411f  MOV ECX,dword ptr [EBP + 0x8]
00404122  FSTP float ptr [ECX + 0x14]
00404125  FLD float ptr [EBP + -0x10]
00404128  FSUB float ptr [EBP + -0x18]
0040412b  FMUL float ptr [0x0044e070] {2}
00404131  MOV EDX,dword ptr [EBP + 0x8]
00404134  FSTP float ptr [EDX + 0x18]
00404137  FLD float ptr [EBP + -0x8]
0040413a  FSUB float ptr [EBP + -0x1c]
0040413d  FMUL float ptr [0x0044e070] {2}
00404143  MOV EAX,dword ptr [EBP + 0x8]
00404146  FSTP float ptr [EAX + 0x20]
00404149  FLD float ptr [EBP + -0x10]
0040414c  FADD float ptr [EBP + -0x18]
0040414f  FMUL float ptr [0x0044e070] {2}
00404155  MOV ECX,dword ptr [EBP + 0x8]
00404158  FSTP float ptr [ECX + 0x24]
0040415b  FLD float ptr [EBP + -0x24]
0040415e  FADD float ptr [EBP + -0xc]
00404161  FMUL float ptr [0x0044e070] {2}
00404167  FSUBR float ptr [0x0044e064] {1}
0040416d  MOV EDX,dword ptr [EBP + 0x8]
00404170  FSTP float ptr [EDX + 0x28]
00404173  MOV EAX,dword ptr [EBP + 0x8]
00404176  MOV dword ptr [EAX + 0x2c],0x0
0040417d  MOV ECX,dword ptr [EBP + 0x8]
00404180  MOV dword ptr [ECX + 0x1c],0x0
00404187  MOV EDX,dword ptr [EBP + 0x8]
0040418a  MOV dword ptr [EDX + 0xc],0x0
00404191  MOV EAX,dword ptr [EBP + 0x8]
00404194  MOV dword ptr [EAX + 0x38],0x0
0040419b  MOV ECX,dword ptr [EBP + 0x8]
0040419e  MOV dword ptr [ECX + 0x34],0x0
004041a5  MOV EDX,dword ptr [EBP + 0x8]
004041a8  MOV dword ptr [EDX + 0x30],0x0
004041af  MOV EAX,dword ptr [EBP + 0x8]
004041b2  MOV dword ptr [EAX + 0x3c],0x3f800000
004041b9  MOV ESP,EBP
004041bb  POP EBP
004041bc  RET
