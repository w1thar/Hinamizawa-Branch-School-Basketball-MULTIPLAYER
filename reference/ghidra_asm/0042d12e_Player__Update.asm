0042d12e  PUSH EBP
0042d12f  MOV EBP,ESP
0042d131  SUB ESP,0x68
0042d134  PUSH EBX
0042d135  PUSH ESI
0042d136  PUSH EDI
0042d137  MOV dword ptr [EBP + -0x18],ECX
0042d13a  MOV dword ptr [EBP + -0xc],0x0
0042d141  MOV EAX,dword ptr [EBP + -0xc]
0042d144  IMUL EAX,EAX,0xc
0042d147  MOV ECX,dword ptr [EBP + -0x18]
0042d14a  MOV EDX,dword ptr [ECX + 0x4c]
0042d14d  MOV EAX,dword ptr [EDX + EAX*0x1]
0042d150  MOV dword ptr [EBP + -0x8],EAX
0042d153  FLD float ptr [EBP + -0x8]
0042d156  FCOMP float ptr [0x0044e4f0] {0}
0042d15c  FNSTSW AX
0042d15e  TEST AH,0x40
0042d161  JZ 0x0042d168
0042d163  JMP 0x0042dcae
0042d168  MOV ECX,dword ptr [EBP + -0x18]
0042d16b  FLD float ptr [ECX + 0x194]
0042d171  FCOMP float ptr [EBP + -0x8]
0042d174  FNSTSW AX
0042d176  TEST AH,0x41
0042d179  JNZ 0x0042d1d5
0042d17b  MOV EDX,dword ptr [EBP + -0xc]
0042d17e  ADD EDX,0x1
0042d181  MOV dword ptr [EBP + -0xc],EDX
0042d184  MOV EAX,dword ptr [EBP + -0xc]
0042d187  IMUL EAX,EAX,0xc
0042d18a  MOV ECX,dword ptr [EBP + -0x18]
0042d18d  MOV EDX,dword ptr [ECX + 0x4c]
0042d190  FLD float ptr [EDX + EAX*0x1]
0042d193  FCOMP float ptr [0x0044e4f0] {0}
0042d199  FNSTSW AX
0042d19b  TEST AH,0x40
0042d19e  JZ 0x0042d1be
0042d1a0  MOV EAX,dword ptr [EBP + -0x18]
0042d1a3  FLD float ptr [EAX + 0x194]
0042d1a9  FSUB float ptr [EBP + -0x8]
0042d1ac  MOV ECX,dword ptr [EBP + -0x18]
0042d1af  FSTP float ptr [ECX + 0x194]
0042d1b5  MOV dword ptr [EBP + -0xc],0x0
0042d1bc  JMP 0x0042d1d3
0042d1be  MOV EDX,dword ptr [EBP + -0xc]
0042d1c1  IMUL EDX,EDX,0xc
0042d1c4  MOV EAX,dword ptr [EBP + -0x18]
0042d1c7  MOV ECX,dword ptr [EAX + 0x4c]
0042d1ca  FLD float ptr [EBP + -0x8]
0042d1cd  FADD float ptr [ECX + EDX*0x1]
0042d1d0  FSTP float ptr [EBP + -0x8]
0042d1d3  JMP 0x0042d168
0042d1d5  MOV EDX,dword ptr [EBP + -0x18]
0042d1d8  FLD float ptr [EDX + 0x164]
0042d1de  FCOMP float ptr [0x0044e4f4] {3.14}
0042d1e4  FNSTSW AX
0042d1e6  TEST AH,0x41
0042d1e9  JNZ 0x0042d203
0042d1eb  MOV EAX,dword ptr [EBP + -0x18]
0042d1ee  FLD float ptr [EAX + 0x164]
0042d1f4  FSUB float ptr [0x0044e4f8] {6.28}
0042d1fa  MOV ECX,dword ptr [EBP + -0x18]
0042d1fd  FSTP float ptr [ECX + 0x164]
0042d203  MOV EDX,dword ptr [EBP + -0x18]
0042d206  FLD float ptr [EDX + 0x164]
0042d20c  FCOMP float ptr [0x0044e4fc] {-3.14}
0042d212  FNSTSW AX
0042d214  TEST AH,0x1
0042d217  JZ 0x0042d231
0042d219  MOV EAX,dword ptr [EBP + -0x18]
0042d21c  FLD float ptr [EAX + 0x164]
0042d222  FADD float ptr [0x0044e4f8] {6.28}
0042d228  MOV ECX,dword ptr [EBP + -0x18]
0042d22b  FSTP float ptr [ECX + 0x164]
0042d231  MOV EDX,dword ptr [EBP + -0x18]
0042d234  MOV EAX,dword ptr [EBP + -0xc]
0042d237  CMP EAX,dword ptr [EDX + 0x188]
0042d23d  JZ 0x0042d24b
0042d23f  MOV ECX,dword ptr [EBP + -0x18]
0042d242  MOV byte ptr [ECX + 0x184],0x1
0042d249  JMP 0x0042d255
0042d24b  MOV EDX,dword ptr [EBP + -0x18]
0042d24e  MOV byte ptr [EDX + 0x184],0x0
0042d255  MOV EAX,dword ptr [EBP + -0x18]
0042d258  MOV ECX,dword ptr [EAX + 0x4]
0042d25b  MOV EDX,dword ptr [ECX + 0x20]
0042d25e  MOV EAX,dword ptr [EBP + -0xc]
0042d261  IMUL EAX,EAX,0xc
0042d264  MOV ECX,dword ptr [EBP + -0x18]
0042d267  MOV ECX,dword ptr [ECX + 0x4c]
0042d26a  MOV EAX,dword ptr [ECX + EAX*0x1 + 0x8]
0042d26e  FLD float ptr [EDX + 0xa0]
0042d274  FSUB float ptr [EAX + 0x10]
0042d277  MOV ECX,dword ptr [EBP + -0x18]
0042d27a  FSUB float ptr [ECX + 0x164]
0042d280  FCOMP float ptr [0x0044e4f4] {3.14}
0042d286  FNSTSW AX
0042d288  TEST AH,0x41
0042d28b  JNZ 0x0042d2b1
0042d28d  MOV EDX,dword ptr [EBP + -0x18]
0042d290  MOV EAX,dword ptr [EDX + 0x4]
0042d293  MOV ECX,dword ptr [EAX + 0x20]
0042d296  FLD float ptr [ECX + 0xa0]
0042d29c  FSUB float ptr [0x0044e4f8] {6.28}
0042d2a2  MOV EDX,dword ptr [EBP + -0x18]
0042d2a5  MOV EAX,dword ptr [EDX + 0x4]
0042d2a8  MOV ECX,dword ptr [EAX + 0x20]
0042d2ab  FSTP float ptr [ECX + 0xa0]
0042d2b1  MOV EDX,dword ptr [EBP + -0x18]
0042d2b4  MOV EAX,dword ptr [EDX + 0x4]
0042d2b7  MOV ECX,dword ptr [EAX + 0x20]
0042d2ba  MOV EDX,dword ptr [EBP + -0xc]
0042d2bd  IMUL EDX,EDX,0xc
0042d2c0  MOV EAX,dword ptr [EBP + -0x18]
0042d2c3  MOV EAX,dword ptr [EAX + 0x4c]
0042d2c6  MOV EDX,dword ptr [EAX + EDX*0x1 + 0x8]
0042d2ca  FLD float ptr [ECX + 0xa0]
0042d2d0  FSUB float ptr [EDX + 0x10]
0042d2d3  MOV EAX,dword ptr [EBP + -0x18]
0042d2d6  FSUB float ptr [EAX + 0x164]
0042d2dc  FCOMP float ptr [0x0044e4fc] {-3.14}
0042d2e2  FNSTSW AX
0042d2e4  TEST AH,0x1
0042d2e7  JZ 0x0042d30d
0042d2e9  MOV ECX,dword ptr [EBP + -0x18]
0042d2ec  MOV EDX,dword ptr [ECX + 0x4]
0042d2ef  MOV EAX,dword ptr [EDX + 0x20]
0042d2f2  FLD float ptr [EAX + 0xa0]
0042d2f8  FADD float ptr [0x0044e4f8] {6.28}
0042d2fe  MOV ECX,dword ptr [EBP + -0x18]
0042d301  MOV EDX,dword ptr [ECX + 0x4]
0042d304  MOV EAX,dword ptr [EDX + 0x20]
0042d307  FSTP float ptr [EAX + 0xa0]
0042d30d  MOV ECX,dword ptr [EBP + -0xc]
0042d310  IMUL ECX,ECX,0xc
0042d313  MOV EDX,dword ptr [EBP + -0x18]
0042d316  MOV EAX,dword ptr [EDX + 0x4c]
0042d319  MOV ESI,dword ptr [EAX + ECX*0x1 + 0x8]
0042d31d  MOV ECX,dword ptr [EBP + -0x18]
0042d320  FLD float ptr [ECX + 0x164]
0042d326  FCHS
0042d328  PUSH ECX
0042d329  FSTP float ptr [ESP]
0042d32c  CALL 0x0040136b
0042d331  ADD ESP,0x4
0042d334  FMUL float ptr [ESI]
0042d336  FSTP float ptr [EBP + -0x1c]
0042d339  MOV EDX,dword ptr [EBP + -0xc]
0042d33c  IMUL EDX,EDX,0xc
0042d33f  MOV EAX,dword ptr [EBP + -0x18]
0042d342  MOV ECX,dword ptr [EAX + 0x4c]
0042d345  MOV ESI,dword ptr [ECX + EDX*0x1 + 0x8]
0042d349  MOV EDX,dword ptr [EBP + -0x18]
0042d34c  FLD float ptr [EDX + 0x164]
0042d352  FCHS
0042d354  PUSH ECX
0042d355  FSTP float ptr [ESP]
0042d358  CALL 0x00401262
0042d35d  ADD ESP,0x4
0042d360  FMUL float ptr [ESI + 0x8]
0042d363  FSUBR float ptr [EBP + -0x1c]
0042d366  FSTP float ptr [EBP + -0x4]
0042d369  MOV EAX,dword ptr [EBP + -0xc]
0042d36c  IMUL EAX,EAX,0xc
0042d36f  MOV ECX,dword ptr [EBP + -0x18]
0042d372  MOV EDX,dword ptr [ECX + 0x4c]
0042d375  MOV ESI,dword ptr [EDX + EAX*0x1 + 0x8]
0042d379  MOV EAX,dword ptr [EBP + -0x18]
0042d37c  FLD float ptr [EAX + 0x164]
0042d382  FCHS
0042d384  PUSH ECX
0042d385  FSTP float ptr [ESP]
0042d388  CALL 0x00401262
0042d38d  ADD ESP,0x4
0042d390  FMUL float ptr [ESI]
0042d392  FSTP float ptr [EBP + -0x20]
0042d395  MOV ECX,dword ptr [EBP + -0xc]
0042d398  IMUL ECX,ECX,0xc
0042d39b  MOV EDX,dword ptr [EBP + -0x18]
0042d39e  MOV EAX,dword ptr [EDX + 0x4c]
0042d3a1  MOV ESI,dword ptr [EAX + ECX*0x1 + 0x8]
0042d3a5  MOV ECX,dword ptr [EBP + -0x18]
0042d3a8  FLD float ptr [ECX + 0x164]
0042d3ae  FCHS
0042d3b0  PUSH ECX
0042d3b1  FSTP float ptr [ESP]
0042d3b4  CALL 0x0040136b
0042d3b9  ADD ESP,0x4
0042d3bc  FMUL float ptr [ESI + 0x8]
0042d3bf  FADD float ptr [EBP + -0x20]
0042d3c2  FSTP float ptr [EBP + -0x10]
0042d3c5  MOV EDX,dword ptr [EBP + -0x18]
0042d3c8  FLD float ptr [EBP + -0x4]
0042d3cb  FADD float ptr [EDX + 0x158]
0042d3d1  MOV EAX,dword ptr [EBP + -0x18]
0042d3d4  MOV ECX,dword ptr [EAX + 0x4]
0042d3d7  MOV EDX,dword ptr [ECX + 0x20]
0042d3da  FSUB float ptr [EDX + 0x90]
0042d3e0  FCOMP float ptr [0x0044e500] {0.01}
0042d3e6  FNSTSW AX
0042d3e8  TEST AH,0x41
0042d3eb  JNZ 0x0042d3f6
0042d3ed  MOV dword ptr [EBP + -0x24],0x1
0042d3f4  JMP 0x0042d3fd
0042d3f6  MOV dword ptr [EBP + -0x24],0x0
0042d3fd  MOV EAX,dword ptr [EBP + -0x18]
0042d400  FLD float ptr [EBP + -0x4]
0042d403  FADD float ptr [EAX + 0x158]
0042d409  MOV ECX,dword ptr [EBP + -0x18]
0042d40c  MOV EDX,dword ptr [ECX + 0x4]
0042d40f  MOV EAX,dword ptr [EDX + 0x20]
0042d412  FSUB float ptr [EAX + 0x90]
0042d418  FCOMP float ptr [0x0044e504] {-0.01}
0042d41e  FNSTSW AX
0042d420  TEST AH,0x1
0042d423  JZ 0x0042d42e
0042d425  MOV dword ptr [EBP + -0x28],0x1
0042d42c  JMP 0x0042d435
0042d42e  MOV dword ptr [EBP + -0x28],0x0
0042d435  MOV ECX,dword ptr [EBP + -0x24]
0042d438  OR ECX,dword ptr [EBP + -0x28]
0042d43b  TEST ECX,ECX
0042d43d  JZ 0x0042d48b
0042d43f  MOV EDX,dword ptr [EBP + -0x18]
0042d442  MOV EAX,dword ptr [EDX + 0x4]
0042d445  MOV ECX,dword ptr [EAX + 0x20]
0042d448  MOV EDX,dword ptr [EBP + -0x18]
0042d44b  FLD float ptr [EBP + -0x4]
0042d44e  FADD float ptr [EDX + 0x158]
0042d454  MOV EAX,dword ptr [EBP + -0x18]
0042d457  MOV EDX,dword ptr [EAX + 0x4]
0042d45a  MOV EAX,dword ptr [EDX + 0x20]
0042d45d  FSUB float ptr [EAX + 0x90]
0042d463  MOV EDX,dword ptr [EBP + -0xc]
0042d466  IMUL EDX,EDX,0xc
0042d469  MOV EAX,dword ptr [EBP + -0x18]
0042d46c  MOV EAX,dword ptr [EAX + 0x4c]
0042d46f  FMUL float ptr [EAX + EDX*0x1 + 0x4]
0042d473  FMUL float ptr [EBP + 0x8]
0042d476  FADD float ptr [ECX + 0x90]
0042d47c  MOV ECX,dword ptr [EBP + -0x18]
0042d47f  MOV EDX,dword ptr [ECX + 0x4]
0042d482  MOV EAX,dword ptr [EDX + 0x20]
0042d485  FSTP float ptr [EAX + 0x90]
0042d48b  MOV ECX,dword ptr [EBP + -0xc]
0042d48e  IMUL ECX,ECX,0xc
0042d491  MOV EDX,dword ptr [EBP + -0x18]
0042d494  MOV EAX,dword ptr [EDX + 0x4c]
0042d497  MOV ECX,dword ptr [EAX + ECX*0x1 + 0x8]
0042d49b  MOV EDX,dword ptr [EBP + -0x18]
0042d49e  FLD float ptr [ECX + 0x4]
0042d4a1  FADD float ptr [EDX + 0x15c]
0042d4a7  MOV EAX,dword ptr [EBP + -0x18]
0042d4aa  MOV ECX,dword ptr [EAX + 0x4]
0042d4ad  MOV EDX,dword ptr [ECX + 0x20]
0042d4b0  FSUB float ptr [EDX + 0x94]
0042d4b6  FCOMP float ptr [0x0044e500] {0.01}
0042d4bc  FNSTSW AX
0042d4be  TEST AH,0x41
0042d4c1  JNZ 0x0042d4cc
0042d4c3  MOV dword ptr [EBP + -0x2c],0x1
0042d4ca  JMP 0x0042d4d3
0042d4cc  MOV dword ptr [EBP + -0x2c],0x0
0042d4d3  MOV EAX,dword ptr [EBP + -0xc]
0042d4d6  IMUL EAX,EAX,0xc
0042d4d9  MOV ECX,dword ptr [EBP + -0x18]
0042d4dc  MOV EDX,dword ptr [ECX + 0x4c]
0042d4df  MOV EAX,dword ptr [EDX + EAX*0x1 + 0x8]
0042d4e3  MOV ECX,dword ptr [EBP + -0x18]
0042d4e6  FLD float ptr [EAX + 0x4]
0042d4e9  FADD float ptr [ECX + 0x15c]
0042d4ef  MOV EDX,dword ptr [EBP + -0x18]
0042d4f2  MOV EAX,dword ptr [EDX + 0x4]
0042d4f5  MOV ECX,dword ptr [EAX + 0x20]
0042d4f8  FSUB float ptr [ECX + 0x94]
0042d4fe  FCOMP float ptr [0x0044e504] {-0.01}
0042d504  FNSTSW AX
0042d506  TEST AH,0x1
0042d509  JZ 0x0042d514
0042d50b  MOV dword ptr [EBP + -0x30],0x1
0042d512  JMP 0x0042d51b
0042d514  MOV dword ptr [EBP + -0x30],0x0
0042d51b  MOV EDX,dword ptr [EBP + -0x2c]
0042d51e  OR EDX,dword ptr [EBP + -0x30]
0042d521  TEST EDX,EDX
0042d523  JZ 0x0042d581
0042d525  MOV EAX,dword ptr [EBP + -0x18]
0042d528  MOV ECX,dword ptr [EAX + 0x4]
0042d52b  MOV EDX,dword ptr [ECX + 0x20]
0042d52e  MOV EAX,dword ptr [EBP + -0xc]
0042d531  IMUL EAX,EAX,0xc
0042d534  MOV ECX,dword ptr [EBP + -0x18]
0042d537  MOV ECX,dword ptr [ECX + 0x4c]
0042d53a  MOV EAX,dword ptr [ECX + EAX*0x1 + 0x8]
0042d53e  MOV ECX,dword ptr [EBP + -0x18]
0042d541  FLD float ptr [EAX + 0x4]
0042d544  FADD float ptr [ECX + 0x15c]
0042d54a  MOV EAX,dword ptr [EBP + -0x18]
0042d54d  MOV ECX,dword ptr [EAX + 0x4]
0042d550  MOV EAX,dword ptr [ECX + 0x20]
0042d553  FSUB float ptr [EAX + 0x94]
0042d559  MOV ECX,dword ptr [EBP + -0xc]
0042d55c  IMUL ECX,ECX,0xc
0042d55f  MOV EAX,dword ptr [EBP + -0x18]
0042d562  MOV EAX,dword ptr [EAX + 0x4c]
0042d565  FMUL float ptr [EAX + ECX*0x1 + 0x4]
0042d569  FMUL float ptr [EBP + 0x8]
0042d56c  FADD float ptr [EDX + 0x94]
0042d572  MOV ECX,dword ptr [EBP + -0x18]
0042d575  MOV EDX,dword ptr [ECX + 0x4]
0042d578  MOV EAX,dword ptr [EDX + 0x20]
0042d57b  FSTP float ptr [EAX + 0x94]
0042d581  MOV ECX,dword ptr [EBP + -0x18]
0042d584  FLD float ptr [EBP + -0x10]
0042d587  FADD float ptr [ECX + 0x160]
0042d58d  MOV EDX,dword ptr [EBP + -0x18]
0042d590  MOV EAX,dword ptr [EDX + 0x4]
0042d593  MOV ECX,dword ptr [EAX + 0x20]
0042d596  FSUB float ptr [ECX + 0x98]
0042d59c  FCOMP float ptr [0x0044e500] {0.01}
0042d5a2  FNSTSW AX
0042d5a4  TEST AH,0x41
0042d5a7  JNZ 0x0042d5b2
0042d5a9  MOV dword ptr [EBP + -0x34],0x1
0042d5b0  JMP 0x0042d5b9
0042d5b2  MOV dword ptr [EBP + -0x34],0x0
0042d5b9  MOV EDX,dword ptr [EBP + -0x18]
0042d5bc  FLD float ptr [EBP + -0x10]
0042d5bf  FADD float ptr [EDX + 0x160]
0042d5c5  MOV EAX,dword ptr [EBP + -0x18]
0042d5c8  MOV ECX,dword ptr [EAX + 0x4]
0042d5cb  MOV EDX,dword ptr [ECX + 0x20]
0042d5ce  FSUB float ptr [EDX + 0x98]
0042d5d4  FCOMP float ptr [0x0044e504] {-0.01}
0042d5da  FNSTSW AX
0042d5dc  TEST AH,0x1
0042d5df  JZ 0x0042d5ea
0042d5e1  MOV dword ptr [EBP + -0x38],0x1
0042d5e8  JMP 0x0042d5f1
0042d5ea  MOV dword ptr [EBP + -0x38],0x0
0042d5f1  MOV EAX,dword ptr [EBP + -0x34]
0042d5f4  OR EAX,dword ptr [EBP + -0x38]
0042d5f7  TEST EAX,EAX
0042d5f9  JZ 0x0042d647
0042d5fb  MOV ECX,dword ptr [EBP + -0x18]
0042d5fe  MOV EDX,dword ptr [ECX + 0x4]
0042d601  MOV EAX,dword ptr [EDX + 0x20]
0042d604  MOV ECX,dword ptr [EBP + -0x18]
0042d607  FLD float ptr [EBP + -0x10]
0042d60a  FADD float ptr [ECX + 0x160]
0042d610  MOV EDX,dword ptr [EBP + -0x18]
0042d613  MOV ECX,dword ptr [EDX + 0x4]
0042d616  MOV EDX,dword ptr [ECX + 0x20]
0042d619  FSUB float ptr [EDX + 0x98]
0042d61f  MOV ECX,dword ptr [EBP + -0xc]
0042d622  IMUL ECX,ECX,0xc
0042d625  MOV EDX,dword ptr [EBP + -0x18]
0042d628  MOV EDX,dword ptr [EDX + 0x4c]
0042d62b  FMUL float ptr [EDX + ECX*0x1 + 0x4]
0042d62f  FMUL float ptr [EBP + 0x8]
0042d632  FADD float ptr [EAX + 0x98]
0042d638  MOV EAX,dword ptr [EBP + -0x18]
0042d63b  MOV ECX,dword ptr [EAX + 0x4]
0042d63e  MOV EDX,dword ptr [ECX + 0x20]
0042d641  FSTP float ptr [EDX + 0x98]
0042d647  MOV EAX,dword ptr [EBP + -0xc]
0042d64a  IMUL EAX,EAX,0xc
0042d64d  MOV ECX,dword ptr [EBP + -0x18]
0042d650  MOV EDX,dword ptr [ECX + 0x4c]
0042d653  MOV EAX,dword ptr [EDX + EAX*0x1 + 0x8]
0042d657  MOV ECX,dword ptr [EBP + -0x18]
0042d65a  MOV EDX,dword ptr [ECX + 0x4]
0042d65d  MOV ECX,dword ptr [EDX + 0x20]
0042d660  FLD float ptr [EAX + 0xc]
0042d663  FSUB float ptr [ECX + 0x9c]
0042d669  FCOMP float ptr [0x0044e500] {0.01}
0042d66f  FNSTSW AX
0042d671  TEST AH,0x41
0042d674  JNZ 0x0042d67f
0042d676  MOV dword ptr [EBP + -0x3c],0x1
0042d67d  JMP 0x0042d686
0042d67f  MOV dword ptr [EBP + -0x3c],0x0
0042d686  MOV EDX,dword ptr [EBP + -0xc]
0042d689  IMUL EDX,EDX,0xc
0042d68c  MOV EAX,dword ptr [EBP + -0x18]
0042d68f  MOV ECX,dword ptr [EAX + 0x4c]
0042d692  MOV EDX,dword ptr [ECX + EDX*0x1 + 0x8]
0042d696  MOV EAX,dword ptr [EBP + -0x18]
0042d699  MOV ECX,dword ptr [EAX + 0x4]
0042d69c  MOV EAX,dword ptr [ECX + 0x20]
0042d69f  FLD float ptr [EDX + 0xc]
0042d6a2  FSUB float ptr [EAX + 0x9c]
0042d6a8  FCOMP float ptr [0x0044e504] {-0.01}
0042d6ae  FNSTSW AX
0042d6b0  TEST AH,0x1
0042d6b3  JZ 0x0042d6be
0042d6b5  MOV dword ptr [EBP + -0x40],0x1
0042d6bc  JMP 0x0042d6c5
0042d6be  MOV dword ptr [EBP + -0x40],0x0
0042d6c5  MOV ECX,dword ptr [EBP + -0x3c]
0042d6c8  OR ECX,dword ptr [EBP + -0x40]
0042d6cb  TEST ECX,ECX
0042d6cd  JZ 0x0042d722
0042d6cf  MOV EDX,dword ptr [EBP + -0x18]
0042d6d2  MOV EAX,dword ptr [EDX + 0x4]
0042d6d5  MOV ECX,dword ptr [EAX + 0x20]
0042d6d8  MOV EDX,dword ptr [EBP + -0xc]
0042d6db  IMUL EDX,EDX,0xc
0042d6de  MOV EAX,dword ptr [EBP + -0x18]
0042d6e1  MOV EAX,dword ptr [EAX + 0x4c]
0042d6e4  MOV EDX,dword ptr [EAX + EDX*0x1 + 0x8]
0042d6e8  MOV EAX,dword ptr [EBP + -0x18]
0042d6eb  MOV EAX,dword ptr [EAX + 0x4]
0042d6ee  MOV EAX,dword ptr [EAX + 0x20]
0042d6f1  FLD float ptr [EDX + 0xc]
0042d6f4  FSUB float ptr [EAX + 0x9c]
0042d6fa  MOV EDX,dword ptr [EBP + -0xc]
0042d6fd  IMUL EDX,EDX,0xc
0042d700  MOV EAX,dword ptr [EBP + -0x18]
0042d703  MOV EAX,dword ptr [EAX + 0x4c]
0042d706  FMUL float ptr [EAX + EDX*0x1 + 0x4]
0042d70a  FMUL float ptr [EBP + 0x8]
0042d70d  FADD float ptr [ECX + 0x9c]
0042d713  MOV ECX,dword ptr [EBP + -0x18]
0042d716  MOV EDX,dword ptr [ECX + 0x4]
0042d719  MOV EAX,dword ptr [EDX + 0x20]
0042d71c  FSTP float ptr [EAX + 0x9c]
0042d722  MOV ECX,dword ptr [EBP + -0xc]
0042d725  IMUL ECX,ECX,0xc
0042d728  MOV EDX,dword ptr [EBP + -0x18]
0042d72b  MOV EAX,dword ptr [EDX + 0x4c]
0042d72e  MOV ECX,dword ptr [EAX + ECX*0x1 + 0x8]
0042d732  MOV EDX,dword ptr [EBP + -0x18]
0042d735  FLD float ptr [ECX + 0x10]
0042d738  FADD float ptr [EDX + 0x164]
0042d73e  MOV EAX,dword ptr [EBP + -0x18]
0042d741  MOV ECX,dword ptr [EAX + 0x4]
0042d744  MOV EDX,dword ptr [ECX + 0x20]
0042d747  FSUB float ptr [EDX + 0xa0]
0042d74d  FCOMP float ptr [0x0044e500] {0.01}
0042d753  FNSTSW AX
0042d755  TEST AH,0x41
0042d758  JNZ 0x0042d763
0042d75a  MOV dword ptr [EBP + -0x44],0x1
0042d761  JMP 0x0042d76a
0042d763  MOV dword ptr [EBP + -0x44],0x0
0042d76a  MOV EAX,dword ptr [EBP + -0xc]
0042d76d  IMUL EAX,EAX,0xc
0042d770  MOV ECX,dword ptr [EBP + -0x18]
0042d773  MOV EDX,dword ptr [ECX + 0x4c]
0042d776  MOV EAX,dword ptr [EDX + EAX*0x1 + 0x8]
0042d77a  MOV ECX,dword ptr [EBP + -0x18]
0042d77d  FLD float ptr [EAX + 0x10]
0042d780  FADD float ptr [ECX + 0x164]
0042d786  MOV EDX,dword ptr [EBP + -0x18]
0042d789  MOV EAX,dword ptr [EDX + 0x4]
0042d78c  MOV ECX,dword ptr [EAX + 0x20]
0042d78f  FSUB float ptr [ECX + 0xa0]
0042d795  FCOMP float ptr [0x0044e504] {-0.01}
0042d79b  FNSTSW AX
0042d79d  TEST AH,0x1
0042d7a0  JZ 0x0042d7ab
0042d7a2  MOV dword ptr [EBP + -0x48],0x1
0042d7a9  JMP 0x0042d7b2
0042d7ab  MOV dword ptr [EBP + -0x48],0x0
0042d7b2  MOV EDX,dword ptr [EBP + -0x44]
0042d7b5  OR EDX,dword ptr [EBP + -0x48]
0042d7b8  TEST EDX,EDX
0042d7ba  JZ 0x0042d818
0042d7bc  MOV EAX,dword ptr [EBP + -0x18]
0042d7bf  MOV ECX,dword ptr [EAX + 0x4]
0042d7c2  MOV EDX,dword ptr [ECX + 0x20]
0042d7c5  MOV EAX,dword ptr [EBP + -0xc]
0042d7c8  IMUL EAX,EAX,0xc
0042d7cb  MOV ECX,dword ptr [EBP + -0x18]
0042d7ce  MOV ECX,dword ptr [ECX + 0x4c]
0042d7d1  MOV EAX,dword ptr [ECX + EAX*0x1 + 0x8]
0042d7d5  MOV ECX,dword ptr [EBP + -0x18]
0042d7d8  FLD float ptr [EAX + 0x10]
0042d7db  FADD float ptr [ECX + 0x164]
0042d7e1  MOV EAX,dword ptr [EBP + -0x18]
0042d7e4  MOV ECX,dword ptr [EAX + 0x4]
0042d7e7  MOV EAX,dword ptr [ECX + 0x20]
0042d7ea  FSUB float ptr [EAX + 0xa0]
0042d7f0  MOV ECX,dword ptr [EBP + -0xc]
0042d7f3  IMUL ECX,ECX,0xc
0042d7f6  MOV EAX,dword ptr [EBP + -0x18]
0042d7f9  MOV EAX,dword ptr [EAX + 0x4c]
0042d7fc  FMUL float ptr [EAX + ECX*0x1 + 0x4]
0042d800  FMUL float ptr [EBP + 0x8]
0042d803  FADD float ptr [EDX + 0xa0]
0042d809  MOV ECX,dword ptr [EBP + -0x18]
0042d80c  MOV EDX,dword ptr [ECX + 0x4]
0042d80f  MOV EAX,dword ptr [EDX + 0x20]
0042d812  FSTP float ptr [EAX + 0xa0]
0042d818  MOV ECX,dword ptr [EBP + -0xc]
0042d81b  IMUL ECX,ECX,0xc
0042d81e  MOV EDX,dword ptr [EBP + -0x18]
0042d821  MOV EAX,dword ptr [EDX + 0x4c]
0042d824  MOV ECX,dword ptr [EAX + ECX*0x1 + 0x8]
0042d828  MOV EDX,dword ptr [EBP + -0x18]
0042d82b  MOV EAX,dword ptr [EDX + 0x4]
0042d82e  MOV EDX,dword ptr [EAX + 0x20]
0042d831  FLD float ptr [ECX + 0x14]
0042d834  FSUB float ptr [EDX + 0xa4]
0042d83a  FCOMP float ptr [0x0044e500] {0.01}
0042d840  FNSTSW AX
0042d842  TEST AH,0x41
0042d845  JNZ 0x0042d850
0042d847  MOV dword ptr [EBP + -0x4c],0x1
0042d84e  JMP 0x0042d857
0042d850  MOV dword ptr [EBP + -0x4c],0x0
0042d857  MOV EAX,dword ptr [EBP + -0xc]
0042d85a  IMUL EAX,EAX,0xc
0042d85d  MOV ECX,dword ptr [EBP + -0x18]
0042d860  MOV EDX,dword ptr [ECX + 0x4c]
0042d863  MOV EAX,dword ptr [EDX + EAX*0x1 + 0x8]
0042d867  MOV ECX,dword ptr [EBP + -0x18]
0042d86a  MOV EDX,dword ptr [ECX + 0x4]
0042d86d  MOV ECX,dword ptr [EDX + 0x20]
0042d870  FLD float ptr [EAX + 0x14]
0042d873  FSUB float ptr [ECX + 0xa4]
0042d879  FCOMP float ptr [0x0044e504] {-0.01}
0042d87f  FNSTSW AX
0042d881  TEST AH,0x1
0042d884  JZ 0x0042d88f
0042d886  MOV dword ptr [EBP + -0x50],0x1
0042d88d  JMP 0x0042d896
0042d88f  MOV dword ptr [EBP + -0x50],0x0
0042d896  MOV EDX,dword ptr [EBP + -0x4c]
0042d899  OR EDX,dword ptr [EBP + -0x50]
0042d89c  TEST EDX,EDX
0042d89e  JZ 0x0042d8f3
0042d8a0  MOV EAX,dword ptr [EBP + -0x18]
0042d8a3  MOV ECX,dword ptr [EAX + 0x4]
0042d8a6  MOV EDX,dword ptr [ECX + 0x20]
0042d8a9  MOV EAX,dword ptr [EBP + -0xc]
0042d8ac  IMUL EAX,EAX,0xc
0042d8af  MOV ECX,dword ptr [EBP + -0x18]
0042d8b2  MOV ECX,dword ptr [ECX + 0x4c]
0042d8b5  MOV EAX,dword ptr [ECX + EAX*0x1 + 0x8]
0042d8b9  MOV ECX,dword ptr [EBP + -0x18]
0042d8bc  MOV ECX,dword ptr [ECX + 0x4]
0042d8bf  MOV ECX,dword ptr [ECX + 0x20]
0042d8c2  FLD float ptr [EAX + 0x14]
0042d8c5  FSUB float ptr [ECX + 0xa4]
0042d8cb  MOV EAX,dword ptr [EBP + -0xc]
0042d8ce  IMUL EAX,EAX,0xc
0042d8d1  MOV ECX,dword ptr [EBP + -0x18]
0042d8d4  MOV ECX,dword ptr [ECX + 0x4c]
0042d8d7  FMUL float ptr [ECX + EAX*0x1 + 0x4]
0042d8db  FMUL float ptr [EBP + 0x8]
0042d8de  FADD float ptr [EDX + 0xa4]
0042d8e4  MOV EDX,dword ptr [EBP + -0x18]
0042d8e7  MOV EAX,dword ptr [EDX + 0x4]
0042d8ea  MOV ECX,dword ptr [EAX + 0x20]
0042d8ed  FSTP float ptr [ECX + 0xa4]
0042d8f3  MOV dword ptr [EBP + -0x14],0x1
0042d8fa  JMP 0x0042d905
0042d8fc  MOV EDX,dword ptr [EBP + -0x14]
0042d8ff  ADD EDX,0x1
0042d902  MOV dword ptr [EBP + -0x14],EDX
0042d905  MOV EAX,dword ptr [EBP + -0x18]
0042d908  MOV ECX,dword ptr [EAX + 0x4]
0042d90b  MOV EDX,dword ptr [EBP + -0x14]
0042d90e  CMP EDX,dword ptr [ECX + 0x2c]
0042d911  JGE 0x0042dc82
0042d917  MOV EAX,dword ptr [EBP + -0xc]
0042d91a  IMUL EAX,EAX,0xc
0042d91d  MOV ECX,dword ptr [EBP + -0x18]
0042d920  MOV EDX,dword ptr [ECX + 0x4c]
0042d923  MOV ECX,dword ptr [EBP + -0x14]
0042d926  IMUL ECX,ECX,0x18
0042d929  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x8]
0042d92d  MOV EAX,dword ptr [EBP + -0x18]
0042d930  MOV EAX,dword ptr [EAX + 0x4]
0042d933  MOV ESI,dword ptr [EBP + -0x14]
0042d936  IMUL ESI,ESI,0xa8
0042d93c  MOV EAX,dword ptr [EAX + 0x20]
0042d93f  FLD float ptr [EDX + ECX*0x1 + 0xc]
0042d943  FSUB float ptr [EAX + ESI*0x1 + 0x9c]
0042d94a  FCOMP float ptr [0x0044e500] {0.01}
0042d950  FNSTSW AX
0042d952  TEST AH,0x41
0042d955  JNZ 0x0042d960
0042d957  MOV dword ptr [EBP + -0x54],0x1
0042d95e  JMP 0x0042d967
0042d960  MOV dword ptr [EBP + -0x54],0x0
0042d967  MOV ECX,dword ptr [EBP + -0xc]
0042d96a  IMUL ECX,ECX,0xc
0042d96d  MOV EDX,dword ptr [EBP + -0x18]
0042d970  MOV EAX,dword ptr [EDX + 0x4c]
0042d973  MOV EDX,dword ptr [EBP + -0x14]
0042d976  IMUL EDX,EDX,0x18
0042d979  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x8]
0042d97d  MOV ECX,dword ptr [EBP + -0x18]
0042d980  MOV ECX,dword ptr [ECX + 0x4]
0042d983  MOV ESI,dword ptr [EBP + -0x14]
0042d986  IMUL ESI,ESI,0xa8
0042d98c  MOV ECX,dword ptr [ECX + 0x20]
0042d98f  FLD float ptr [EAX + EDX*0x1 + 0xc]
0042d993  FSUB float ptr [ECX + ESI*0x1 + 0x9c]
0042d99a  FCOMP float ptr [0x0044e504] {-0.01}
0042d9a0  FNSTSW AX
0042d9a2  TEST AH,0x1
0042d9a5  JZ 0x0042d9b0
0042d9a7  MOV dword ptr [EBP + -0x58],0x1
0042d9ae  JMP 0x0042d9b7
0042d9b0  MOV dword ptr [EBP + -0x58],0x0
0042d9b7  MOV EDX,dword ptr [EBP + -0x54]
0042d9ba  OR EDX,dword ptr [EBP + -0x58]
0042d9bd  TEST EDX,EDX
0042d9bf  JZ 0x0042da39
0042d9c1  MOV EAX,dword ptr [EBP + -0x18]
0042d9c4  MOV ECX,dword ptr [EAX + 0x4]
0042d9c7  MOV EDX,dword ptr [EBP + -0x14]
0042d9ca  IMUL EDX,EDX,0xa8
0042d9d0  MOV EAX,dword ptr [ECX + 0x20]
0042d9d3  MOV ECX,dword ptr [EBP + -0xc]
0042d9d6  IMUL ECX,ECX,0xc
0042d9d9  MOV ESI,dword ptr [EBP + -0x18]
0042d9dc  MOV ESI,dword ptr [ESI + 0x4c]
0042d9df  MOV EDI,dword ptr [EBP + -0x14]
0042d9e2  IMUL EDI,EDI,0x18
0042d9e5  MOV ECX,dword ptr [ESI + ECX*0x1 + 0x8]
0042d9e9  MOV ESI,dword ptr [EBP + -0x18]
0042d9ec  MOV ESI,dword ptr [ESI + 0x4]
0042d9ef  MOV EBX,dword ptr [EBP + -0x14]
0042d9f2  IMUL EBX,EBX,0xa8
0042d9f8  MOV ESI,dword ptr [ESI + 0x20]
0042d9fb  FLD float ptr [ECX + EDI*0x1 + 0xc]
0042d9ff  FSUB float ptr [ESI + EBX*0x1 + 0x9c]
0042da06  MOV ECX,dword ptr [EBP + -0xc]
0042da09  IMUL ECX,ECX,0xc
0042da0c  MOV ESI,dword ptr [EBP + -0x18]
0042da0f  MOV ESI,dword ptr [ESI + 0x4c]
0042da12  FMUL float ptr [ESI + ECX*0x1 + 0x4]
0042da16  FMUL float ptr [EBP + 0x8]
0042da19  FADD float ptr [EAX + EDX*0x1 + 0x9c]
0042da20  MOV EDX,dword ptr [EBP + -0x18]
0042da23  MOV EAX,dword ptr [EDX + 0x4]
0042da26  MOV ECX,dword ptr [EBP + -0x14]
0042da29  IMUL ECX,ECX,0xa8
0042da2f  MOV EDX,dword ptr [EAX + 0x20]
0042da32  FSTP float ptr [EDX + ECX*0x1 + 0x9c]
0042da39  MOV EAX,dword ptr [EBP + -0xc]
0042da3c  IMUL EAX,EAX,0xc
0042da3f  MOV ECX,dword ptr [EBP + -0x18]
0042da42  MOV EDX,dword ptr [ECX + 0x4c]
0042da45  MOV ECX,dword ptr [EBP + -0x14]
0042da48  IMUL ECX,ECX,0x18
0042da4b  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x8]
0042da4f  MOV EAX,dword ptr [EBP + -0x18]
0042da52  MOV EAX,dword ptr [EAX + 0x4]
0042da55  MOV ESI,dword ptr [EBP + -0x14]
0042da58  IMUL ESI,ESI,0xa8
0042da5e  MOV EAX,dword ptr [EAX + 0x20]
0042da61  FLD float ptr [EDX + ECX*0x1 + 0x10]
0042da65  FSUB float ptr [EAX + ESI*0x1 + 0xa0]
0042da6c  FCOMP float ptr [0x0044e500] {0.01}
0042da72  FNSTSW AX
0042da74  TEST AH,0x41
0042da77  JNZ 0x0042da82
0042da79  MOV dword ptr [EBP + -0x5c],0x1
0042da80  JMP 0x0042da89
0042da82  MOV dword ptr [EBP + -0x5c],0x0
0042da89  MOV ECX,dword ptr [EBP + -0xc]
0042da8c  IMUL ECX,ECX,0xc
0042da8f  MOV EDX,dword ptr [EBP + -0x18]
0042da92  MOV EAX,dword ptr [EDX + 0x4c]
0042da95  MOV EDX,dword ptr [EBP + -0x14]
0042da98  IMUL EDX,EDX,0x18
0042da9b  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x8]
0042da9f  MOV ECX,dword ptr [EBP + -0x18]
0042daa2  MOV ECX,dword ptr [ECX + 0x4]
0042daa5  MOV ESI,dword ptr [EBP + -0x14]
0042daa8  IMUL ESI,ESI,0xa8
0042daae  MOV ECX,dword ptr [ECX + 0x20]
0042dab1  FLD float ptr [EAX + EDX*0x1 + 0x10]
0042dab5  FSUB float ptr [ECX + ESI*0x1 + 0xa0]
0042dabc  FCOMP float ptr [0x0044e504] {-0.01}
0042dac2  FNSTSW AX
0042dac4  TEST AH,0x1
0042dac7  JZ 0x0042dad2
0042dac9  MOV dword ptr [EBP + -0x60],0x1
0042dad0  JMP 0x0042dad9
0042dad2  MOV dword ptr [EBP + -0x60],0x0
0042dad9  MOV EDX,dword ptr [EBP + -0x5c]
0042dadc  OR EDX,dword ptr [EBP + -0x60]
0042dadf  TEST EDX,EDX
0042dae1  JZ 0x0042db5b
0042dae3  MOV EAX,dword ptr [EBP + -0x18]
0042dae6  MOV ECX,dword ptr [EAX + 0x4]
0042dae9  MOV EDX,dword ptr [EBP + -0x14]
0042daec  IMUL EDX,EDX,0xa8
0042daf2  MOV EAX,dword ptr [ECX + 0x20]
0042daf5  MOV ECX,dword ptr [EBP + -0xc]
0042daf8  IMUL ECX,ECX,0xc
0042dafb  MOV ESI,dword ptr [EBP + -0x18]
0042dafe  MOV ESI,dword ptr [ESI + 0x4c]
0042db01  MOV EDI,dword ptr [EBP + -0x14]
0042db04  IMUL EDI,EDI,0x18
0042db07  MOV ECX,dword ptr [ESI + ECX*0x1 + 0x8]
0042db0b  MOV ESI,dword ptr [EBP + -0x18]
0042db0e  MOV ESI,dword ptr [ESI + 0x4]
0042db11  MOV EBX,dword ptr [EBP + -0x14]
0042db14  IMUL EBX,EBX,0xa8
0042db1a  MOV ESI,dword ptr [ESI + 0x20]
0042db1d  FLD float ptr [ECX + EDI*0x1 + 0x10]
0042db21  FSUB float ptr [ESI + EBX*0x1 + 0xa0]
0042db28  MOV ECX,dword ptr [EBP + -0xc]
0042db2b  IMUL ECX,ECX,0xc
0042db2e  MOV ESI,dword ptr [EBP + -0x18]
0042db31  MOV ESI,dword ptr [ESI + 0x4c]
0042db34  FMUL float ptr [ESI + ECX*0x1 + 0x4]
0042db38  FMUL float ptr [EBP + 0x8]
0042db3b  FADD float ptr [EAX + EDX*0x1 + 0xa0]
0042db42  MOV EDX,dword ptr [EBP + -0x18]
0042db45  MOV EAX,dword ptr [EDX + 0x4]
0042db48  MOV ECX,dword ptr [EBP + -0x14]
0042db4b  IMUL ECX,ECX,0xa8
0042db51  MOV EDX,dword ptr [EAX + 0x20]
0042db54  FSTP float ptr [EDX + ECX*0x1 + 0xa0]
0042db5b  MOV EAX,dword ptr [EBP + -0xc]
0042db5e  IMUL EAX,EAX,0xc
0042db61  MOV ECX,dword ptr [EBP + -0x18]
0042db64  MOV EDX,dword ptr [ECX + 0x4c]
0042db67  MOV ECX,dword ptr [EBP + -0x14]
0042db6a  IMUL ECX,ECX,0x18
0042db6d  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x8]
0042db71  MOV EAX,dword ptr [EBP + -0x18]
0042db74  MOV EAX,dword ptr [EAX + 0x4]
0042db77  MOV ESI,dword ptr [EBP + -0x14]
0042db7a  IMUL ESI,ESI,0xa8
0042db80  MOV EAX,dword ptr [EAX + 0x20]
0042db83  FLD float ptr [EDX + ECX*0x1 + 0x14]
0042db87  FSUB float ptr [EAX + ESI*0x1 + 0xa4]
0042db8e  FCOMP float ptr [0x0044e500] {0.01}
0042db94  FNSTSW AX
0042db96  TEST AH,0x41
0042db99  JNZ 0x0042dba4
0042db9b  MOV dword ptr [EBP + -0x64],0x1
0042dba2  JMP 0x0042dbab
0042dba4  MOV dword ptr [EBP + -0x64],0x0
0042dbab  MOV ECX,dword ptr [EBP + -0xc]
0042dbae  IMUL ECX,ECX,0xc
0042dbb1  MOV EDX,dword ptr [EBP + -0x18]
0042dbb4  MOV EAX,dword ptr [EDX + 0x4c]
0042dbb7  MOV EDX,dword ptr [EBP + -0x14]
0042dbba  IMUL EDX,EDX,0x18
0042dbbd  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x8]
0042dbc1  MOV ECX,dword ptr [EBP + -0x18]
0042dbc4  MOV ECX,dword ptr [ECX + 0x4]
0042dbc7  MOV ESI,dword ptr [EBP + -0x14]
0042dbca  IMUL ESI,ESI,0xa8
0042dbd0  MOV ECX,dword ptr [ECX + 0x20]
0042dbd3  FLD float ptr [EAX + EDX*0x1 + 0x14]
0042dbd7  FSUB float ptr [ECX + ESI*0x1 + 0xa4]
0042dbde  FCOMP float ptr [0x0044e504] {-0.01}
0042dbe4  FNSTSW AX
0042dbe6  TEST AH,0x1
0042dbe9  JZ 0x0042dbf4
0042dbeb  MOV dword ptr [EBP + -0x68],0x1
0042dbf2  JMP 0x0042dbfb
0042dbf4  MOV dword ptr [EBP + -0x68],0x0
0042dbfb  MOV EDX,dword ptr [EBP + -0x64]
0042dbfe  OR EDX,dword ptr [EBP + -0x68]
0042dc01  TEST EDX,EDX
0042dc03  JZ 0x0042dc7d
0042dc05  MOV EAX,dword ptr [EBP + -0x18]
0042dc08  MOV ECX,dword ptr [EAX + 0x4]
0042dc0b  MOV EDX,dword ptr [EBP + -0x14]
0042dc0e  IMUL EDX,EDX,0xa8
0042dc14  MOV EAX,dword ptr [ECX + 0x20]
0042dc17  MOV ECX,dword ptr [EBP + -0xc]
0042dc1a  IMUL ECX,ECX,0xc
0042dc1d  MOV ESI,dword ptr [EBP + -0x18]
0042dc20  MOV ESI,dword ptr [ESI + 0x4c]
0042dc23  MOV EDI,dword ptr [EBP + -0x14]
0042dc26  IMUL EDI,EDI,0x18
0042dc29  MOV ECX,dword ptr [ESI + ECX*0x1 + 0x8]
0042dc2d  MOV ESI,dword ptr [EBP + -0x18]
0042dc30  MOV ESI,dword ptr [ESI + 0x4]
0042dc33  MOV EBX,dword ptr [EBP + -0x14]
0042dc36  IMUL EBX,EBX,0xa8
0042dc3c  MOV ESI,dword ptr [ESI + 0x20]
0042dc3f  FLD float ptr [ECX + EDI*0x1 + 0x14]
0042dc43  FSUB float ptr [ESI + EBX*0x1 + 0xa4]
0042dc4a  MOV ECX,dword ptr [EBP + -0xc]
0042dc4d  IMUL ECX,ECX,0xc
0042dc50  MOV ESI,dword ptr [EBP + -0x18]
0042dc53  MOV ESI,dword ptr [ESI + 0x4c]
0042dc56  FMUL float ptr [ESI + ECX*0x1 + 0x4]
0042dc5a  FMUL float ptr [EBP + 0x8]
0042dc5d  FADD float ptr [EAX + EDX*0x1 + 0xa4]
0042dc64  MOV EDX,dword ptr [EBP + -0x18]
0042dc67  MOV EAX,dword ptr [EDX + 0x4]
0042dc6a  MOV ECX,dword ptr [EBP + -0x14]
0042dc6d  IMUL ECX,ECX,0xa8
0042dc73  MOV EDX,dword ptr [EAX + 0x20]
0042dc76  FSTP float ptr [EDX + ECX*0x1 + 0xa4]
0042dc7d  JMP 0x0042d8fc
0042dc82  MOV EAX,dword ptr [EBP + -0x18]
0042dc85  FLD float ptr [EAX + 0x194]
0042dc8b  FADD float ptr [EBP + 0x8]
0042dc8e  MOV ECX,dword ptr [EBP + -0x18]
0042dc91  FSTP float ptr [ECX + 0x194]
0042dc97  MOV EDX,dword ptr [EBP + -0x18]
0042dc9a  MOV EAX,dword ptr [EBP + -0xc]
0042dc9d  MOV dword ptr [EDX + 0x188],EAX
0042dca3  MOV ECX,dword ptr [EBP + -0x18]
0042dca6  MOV ECX,dword ptr [ECX + 0x4]
0042dca9  CALL 0x0040135c
0042dcae  POP EDI
0042dcaf  POP ESI
0042dcb0  POP EBX
0042dcb1  MOV ESP,EBP
0042dcb3  POP EBP
0042dcb4  RET 0x4
