004041bd  PUSH EBP
004041be  MOV EBP,ESP
004041c0  SUB ESP,0x28
004041c3  MOV EAX,dword ptr [EBP + 0x18]
004041c6  MOV ECX,dword ptr [EBP + 0x18]
004041c9  FLD float ptr [EAX]
004041cb  FADD float ptr [ECX + 0x14]
004041ce  MOV EDX,dword ptr [EBP + 0x18]
004041d1  FADD float ptr [EDX + 0x28]
004041d4  FCOMP float ptr [0x0044e074] {0}
004041da  FNSTSW AX
004041dc  TEST AH,0x41
004041df  JNZ 0x0040426d
004041e5  MOV EAX,dword ptr [EBP + 0x18]
004041e8  MOV ECX,dword ptr [EBP + 0x18]
004041eb  FLD float ptr [EAX]
004041ed  FADD float ptr [ECX + 0x14]
004041f0  MOV EDX,dword ptr [EBP + 0x18]
004041f3  FADD float ptr [EDX + 0x28]
004041f6  MOV EAX,dword ptr [EBP + 0x18]
004041f9  FADD float ptr [EAX + 0x3c]
004041fc  PUSH ECX
004041fd  FSTP float ptr [ESP]
00404200  CALL 0x0040104b  ; sqrtf
00404205  ADD ESP,0x4
00404208  FSTP float ptr [EBP + -0x28]
0040420b  MOV ECX,dword ptr [EBP + 0x18]
0040420e  MOV EDX,dword ptr [EBP + 0x18]
00404211  FLD float ptr [ECX + 0x18]
00404214  FSUB float ptr [EDX + 0x24]
00404217  FLD float ptr [0x0044e070] {2}
0040421d  FMUL float ptr [EBP + -0x28]
00404220  FDIVP
00404222  MOV EAX,dword ptr [EBP + 0x8]
00404225  FSTP float ptr [EAX]
00404227  MOV ECX,dword ptr [EBP + 0x18]
0040422a  MOV EDX,dword ptr [EBP + 0x18]
0040422d  FLD float ptr [ECX + 0x20]
00404230  FSUB float ptr [EDX + 0x8]
00404233  FLD float ptr [0x0044e070] {2}
00404239  FMUL float ptr [EBP + -0x28]
0040423c  FDIVP
0040423e  MOV EAX,dword ptr [EBP + 0xc]
00404241  FSTP float ptr [EAX]
00404243  MOV ECX,dword ptr [EBP + 0x18]
00404246  MOV EDX,dword ptr [EBP + 0x18]
00404249  FLD float ptr [ECX + 0x4]
0040424c  FSUB float ptr [EDX + 0x10]
0040424f  FLD float ptr [0x0044e070] {2}
00404255  FMUL float ptr [EBP + -0x28]
00404258  FDIVP
0040425a  MOV EAX,dword ptr [EBP + 0x10]
0040425d  FSTP float ptr [EAX]
0040425f  FLD float ptr [0x0044e078] {0.5}
00404265  FMUL float ptr [EBP + -0x28]
00404268  MOV ECX,dword ptr [EBP + 0x14]
0040426b  FSTP float ptr [ECX]
0040426d  MOV EDX,dword ptr [EBP + 0x8]
00404270  MOV EAX,dword ptr [EBP + 0x8]
00404273  FLD float ptr [EDX]
00404275  FMUL float ptr [EAX]
00404277  FSTP float ptr [EBP + -0x24]
0040427a  MOV ECX,dword ptr [EBP + 0xc]
0040427d  MOV EDX,dword ptr [EBP + 0xc]
00404280  FLD float ptr [ECX]
00404282  FMUL float ptr [EDX]
00404284  FSTP float ptr [EBP + -0xc]
00404287  MOV EAX,dword ptr [EBP + 0x10]
0040428a  MOV ECX,dword ptr [EBP + 0x10]
0040428d  FLD float ptr [EAX]
0040428f  FMUL float ptr [ECX]
00404291  FSTP float ptr [EBP + -0x14]
00404294  MOV EDX,dword ptr [EBP + 0x8]
00404297  MOV EAX,dword ptr [EBP + 0xc]
0040429a  FLD float ptr [EDX]
0040429c  FMUL float ptr [EAX]
0040429e  FSTP float ptr [EBP + -0x4]
004042a1  MOV ECX,dword ptr [EBP + 0x8]
004042a4  MOV EDX,dword ptr [EBP + 0x10]
004042a7  FLD float ptr [ECX]
004042a9  FMUL float ptr [EDX]
004042ab  FSTP float ptr [EBP + -0x8]
004042ae  MOV EAX,dword ptr [EBP + 0xc]
004042b1  MOV ECX,dword ptr [EBP + 0x10]
004042b4  FLD float ptr [EAX]
004042b6  FMUL float ptr [ECX]
004042b8  FSTP float ptr [EBP + -0x10]
004042bb  MOV EDX,dword ptr [EBP + 0x14]
004042be  MOV EAX,dword ptr [EBP + 0x8]
004042c1  FLD float ptr [EDX]
004042c3  FMUL float ptr [EAX]
004042c5  FSTP float ptr [EBP + -0x18]
004042c8  MOV ECX,dword ptr [EBP + 0x14]
004042cb  MOV EDX,dword ptr [EBP + 0xc]
004042ce  FLD float ptr [ECX]
004042d0  FMUL float ptr [EDX]
004042d2  FSTP float ptr [EBP + -0x1c]
004042d5  MOV EAX,dword ptr [EBP + 0x14]
004042d8  MOV ECX,dword ptr [EBP + 0x10]
004042db  FLD float ptr [EAX]
004042dd  FMUL float ptr [ECX]
004042df  FSTP float ptr [EBP + -0x20]
004042e2  FLD float ptr [EBP + -0xc]
004042e5  FADD float ptr [EBP + -0x14]
004042e8  FMUL float ptr [0x0044e070] {2}
004042ee  FSUBR float ptr [0x0044e064] {1}
004042f4  MOV EDX,dword ptr [EBP + 0x18]
004042f7  FSTP float ptr [EDX]
004042f9  FLD float ptr [EBP + -0x4]
004042fc  FSUB float ptr [EBP + -0x20]
004042ff  FMUL float ptr [0x0044e070] {2}
00404305  MOV EAX,dword ptr [EBP + 0x18]
00404308  FSTP float ptr [EAX + 0x4]
0040430b  FLD float ptr [EBP + -0x8]
0040430e  FADD float ptr [EBP + -0x1c]
00404311  FMUL float ptr [0x0044e070] {2}
00404317  MOV ECX,dword ptr [EBP + 0x18]
0040431a  FSTP float ptr [ECX + 0x8]
0040431d  FLD float ptr [EBP + -0x4]
00404320  FADD float ptr [EBP + -0x20]
00404323  FMUL float ptr [0x0044e070] {2}
00404329  MOV EDX,dword ptr [EBP + 0x18]
0040432c  FSTP float ptr [EDX + 0x10]
0040432f  FLD float ptr [EBP + -0x24]
00404332  FADD float ptr [EBP + -0x14]
00404335  FMUL float ptr [0x0044e070] {2}
0040433b  FSUBR float ptr [0x0044e064] {1}
00404341  MOV EAX,dword ptr [EBP + 0x18]
00404344  FSTP float ptr [EAX + 0x14]
00404347  FLD float ptr [EBP + -0x10]
0040434a  FSUB float ptr [EBP + -0x18]
0040434d  FMUL float ptr [0x0044e070] {2}
00404353  MOV ECX,dword ptr [EBP + 0x18]
00404356  FSTP float ptr [ECX + 0x18]
00404359  FLD float ptr [EBP + -0x8]
0040435c  FSUB float ptr [EBP + -0x1c]
0040435f  FMUL float ptr [0x0044e070] {2}
00404365  MOV EDX,dword ptr [EBP + 0x18]
00404368  FSTP float ptr [EDX + 0x20]
0040436b  FLD float ptr [EBP + -0x10]
0040436e  FADD float ptr [EBP + -0x18]
00404371  FMUL float ptr [0x0044e070] {2}
00404377  MOV EAX,dword ptr [EBP + 0x18]
0040437a  FSTP float ptr [EAX + 0x24]
0040437d  FLD float ptr [EBP + -0x24]
00404380  FADD float ptr [EBP + -0xc]
00404383  FMUL float ptr [0x0044e070] {2}
00404389  FSUBR float ptr [0x0044e064] {1}
0040438f  MOV ECX,dword ptr [EBP + 0x18]
00404392  FSTP float ptr [ECX + 0x28]
00404395  MOV EDX,dword ptr [EBP + 0x18]
00404398  MOV dword ptr [EDX + 0x2c],0x0
0040439f  MOV EAX,dword ptr [EBP + 0x18]
004043a2  MOV dword ptr [EAX + 0x1c],0x0
004043a9  MOV ECX,dword ptr [EBP + 0x18]
004043ac  MOV dword ptr [ECX + 0xc],0x0
004043b3  MOV EDX,dword ptr [EBP + 0x18]
004043b6  MOV dword ptr [EDX + 0x38],0x0
004043bd  MOV EAX,dword ptr [EBP + 0x18]
004043c0  MOV dword ptr [EAX + 0x34],0x0
004043c7  MOV ECX,dword ptr [EBP + 0x18]
004043ca  MOV dword ptr [ECX + 0x30],0x0
004043d1  MOV EDX,dword ptr [EBP + 0x18]
004043d4  MOV dword ptr [EDX + 0x3c],0x3f800000
004043db  MOV ESP,EBP
004043dd  POP EBP
004043de  RET
