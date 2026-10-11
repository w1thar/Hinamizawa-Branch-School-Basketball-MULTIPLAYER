004039ed  PUSH EBP
004039ee  MOV EBP,ESP
004039f0  PUSH ECX
004039f1  MOV EAX,dword ptr [EBP + 0xc]
004039f4  FLD float ptr [EAX + 0x3c]
004039f7  FSUB float ptr [0x0044e064] {1}
004039fd  SUB ESP,0x8
00403a00  FSTP double ptr [ESP]
00403a03  CALL 0x00433940
00403a08  ADD ESP,0x8
00403a0b  FCOMP double ptr [0x0044e068] {0.001}
00403a11  FNSTSW AX
00403a13  TEST AH,0x41
00403a16  JNZ 0x00403a22
00403a18  MOV EAX,0x80070057
00403a1d  JMP 0x00403cfa
00403a22  MOV ECX,dword ptr [EBP + 0xc]
00403a25  FLD float ptr [ECX + 0xc]
00403a28  SUB ESP,0x8
00403a2b  FSTP double ptr [ESP]
00403a2e  CALL 0x00433940
00403a33  ADD ESP,0x8
00403a36  FCOMP double ptr [0x0044e068] {0.001}
00403a3c  FNSTSW AX
00403a3e  TEST AH,0x41
00403a41  JZ 0x00403a85
00403a43  MOV EDX,dword ptr [EBP + 0xc]
00403a46  FLD float ptr [EDX + 0x1c]
00403a49  SUB ESP,0x8
00403a4c  FSTP double ptr [ESP]
00403a4f  CALL 0x00433940
00403a54  ADD ESP,0x8
00403a57  FCOMP double ptr [0x0044e068] {0.001}
00403a5d  FNSTSW AX
00403a5f  TEST AH,0x41
00403a62  JZ 0x00403a85
00403a64  MOV EAX,dword ptr [EBP + 0xc]
00403a67  FLD float ptr [EAX + 0x2c]
00403a6a  SUB ESP,0x8
00403a6d  FSTP double ptr [ESP]
00403a70  CALL 0x00433940
00403a75  ADD ESP,0x8
00403a78  FCOMP double ptr [0x0044e068] {0.001}
00403a7e  FNSTSW AX
00403a80  TEST AH,0x41
00403a83  JNZ 0x00403a8f
00403a85  MOV EAX,0x80070057
00403a8a  JMP 0x00403cfa
00403a8f  MOV ECX,dword ptr [EBP + 0xc]
00403a92  MOV EDX,dword ptr [EBP + 0xc]
00403a95  FLD float ptr [ECX + 0x14]
00403a98  FMUL float ptr [EDX + 0x28]
00403a9b  MOV EAX,dword ptr [EBP + 0xc]
00403a9e  MOV ECX,dword ptr [EBP + 0xc]
00403aa1  FLD float ptr [EAX + 0x18]
00403aa4  FMUL float ptr [ECX + 0x24]
00403aa7  FSUBP
00403aa9  MOV EDX,dword ptr [EBP + 0xc]
00403aac  FMUL float ptr [EDX]
00403aae  MOV EAX,dword ptr [EBP + 0xc]
00403ab1  MOV ECX,dword ptr [EBP + 0xc]
00403ab4  FLD float ptr [EAX + 0x10]
00403ab7  FMUL float ptr [ECX + 0x28]
00403aba  MOV EDX,dword ptr [EBP + 0xc]
00403abd  MOV EAX,dword ptr [EBP + 0xc]
00403ac0  FLD float ptr [EDX + 0x18]
00403ac3  FMUL float ptr [EAX + 0x20]
00403ac6  FSUBP
00403ac8  MOV ECX,dword ptr [EBP + 0xc]
00403acb  FMUL float ptr [ECX + 0x4]
00403ace  FSUBP
00403ad0  MOV EDX,dword ptr [EBP + 0xc]
00403ad3  MOV EAX,dword ptr [EBP + 0xc]
00403ad6  FLD float ptr [EDX + 0x10]
00403ad9  FMUL float ptr [EAX + 0x24]
00403adc  MOV ECX,dword ptr [EBP + 0xc]
00403adf  MOV EDX,dword ptr [EBP + 0xc]
00403ae2  FLD float ptr [ECX + 0x14]
00403ae5  FMUL float ptr [EDX + 0x20]
00403ae8  FSUBP
00403aea  MOV EAX,dword ptr [EBP + 0xc]
00403aed  FMUL float ptr [EAX + 0x8]
00403af0  FADDP
00403af2  FDIVR float ptr [0x0044e064] {1}
00403af8  FSTP float ptr [EBP + -0x4]
00403afb  MOV ECX,dword ptr [EBP + 0xc]
00403afe  MOV EDX,dword ptr [EBP + 0xc]
00403b01  FLD float ptr [ECX + 0x14]
00403b04  FMUL float ptr [EDX + 0x28]
00403b07  MOV EAX,dword ptr [EBP + 0xc]
00403b0a  MOV ECX,dword ptr [EBP + 0xc]
00403b0d  FLD float ptr [EAX + 0x18]
00403b10  FMUL float ptr [ECX + 0x24]
00403b13  FSUBP
00403b15  FMUL float ptr [EBP + -0x4]
00403b18  MOV EDX,dword ptr [EBP + 0x8]
00403b1b  FSTP float ptr [EDX]
00403b1d  FLD float ptr [EBP + -0x4]
00403b20  FCHS
00403b22  MOV EAX,dword ptr [EBP + 0xc]
00403b25  MOV ECX,dword ptr [EBP + 0xc]
00403b28  FLD float ptr [EAX + 0x4]
00403b2b  FMUL float ptr [ECX + 0x28]
00403b2e  MOV EDX,dword ptr [EBP + 0xc]
00403b31  MOV EAX,dword ptr [EBP + 0xc]
00403b34  FLD float ptr [EDX + 0x8]
00403b37  FMUL float ptr [EAX + 0x24]
00403b3a  FSUBP
00403b3c  FMULP
00403b3e  MOV ECX,dword ptr [EBP + 0x8]
00403b41  FSTP float ptr [ECX + 0x4]
00403b44  MOV EDX,dword ptr [EBP + 0xc]
00403b47  MOV EAX,dword ptr [EBP + 0xc]
00403b4a  FLD float ptr [EDX + 0x4]
00403b4d  FMUL float ptr [EAX + 0x18]
00403b50  MOV ECX,dword ptr [EBP + 0xc]
00403b53  MOV EDX,dword ptr [EBP + 0xc]
00403b56  FLD float ptr [ECX + 0x8]
00403b59  FMUL float ptr [EDX + 0x14]
00403b5c  FSUBP
00403b5e  FMUL float ptr [EBP + -0x4]
00403b61  MOV EAX,dword ptr [EBP + 0x8]
00403b64  FSTP float ptr [EAX + 0x8]
00403b67  MOV ECX,dword ptr [EBP + 0x8]
00403b6a  MOV dword ptr [ECX + 0xc],0x0
00403b71  FLD float ptr [EBP + -0x4]
00403b74  FCHS
00403b76  MOV EDX,dword ptr [EBP + 0xc]
00403b79  MOV EAX,dword ptr [EBP + 0xc]
00403b7c  FLD float ptr [EDX + 0x10]
00403b7f  FMUL float ptr [EAX + 0x28]
00403b82  MOV ECX,dword ptr [EBP + 0xc]
00403b85  MOV EDX,dword ptr [EBP + 0xc]
00403b88  FLD float ptr [ECX + 0x18]
00403b8b  FMUL float ptr [EDX + 0x20]
00403b8e  FSUBP
00403b90  FMULP
00403b92  MOV EAX,dword ptr [EBP + 0x8]
00403b95  FSTP float ptr [EAX + 0x10]
00403b98  MOV ECX,dword ptr [EBP + 0xc]
00403b9b  MOV EDX,dword ptr [EBP + 0xc]
00403b9e  FLD float ptr [ECX]
00403ba0  FMUL float ptr [EDX + 0x28]
00403ba3  MOV EAX,dword ptr [EBP + 0xc]
00403ba6  MOV ECX,dword ptr [EBP + 0xc]
00403ba9  FLD float ptr [EAX + 0x8]
00403bac  FMUL float ptr [ECX + 0x20]
00403baf  FSUBP
00403bb1  FMUL float ptr [EBP + -0x4]
00403bb4  MOV EDX,dword ptr [EBP + 0x8]
00403bb7  FSTP float ptr [EDX + 0x14]
00403bba  FLD float ptr [EBP + -0x4]
00403bbd  FCHS
00403bbf  MOV EAX,dword ptr [EBP + 0xc]
00403bc2  MOV ECX,dword ptr [EBP + 0xc]
00403bc5  FLD float ptr [EAX]
00403bc7  FMUL float ptr [ECX + 0x18]
00403bca  MOV EDX,dword ptr [EBP + 0xc]
00403bcd  MOV EAX,dword ptr [EBP + 0xc]
00403bd0  FLD float ptr [EDX + 0x8]
00403bd3  FMUL float ptr [EAX + 0x10]
00403bd6  FSUBP
00403bd8  FMULP
00403bda  MOV ECX,dword ptr [EBP + 0x8]
00403bdd  FSTP float ptr [ECX + 0x18]
00403be0  MOV EDX,dword ptr [EBP + 0x8]
00403be3  MOV dword ptr [EDX + 0x1c],0x0
00403bea  MOV EAX,dword ptr [EBP + 0xc]
00403bed  MOV ECX,dword ptr [EBP + 0xc]
00403bf0  FLD float ptr [EAX + 0x10]
00403bf3  FMUL float ptr [ECX + 0x24]
00403bf6  MOV EDX,dword ptr [EBP + 0xc]
00403bf9  MOV EAX,dword ptr [EBP + 0xc]
00403bfc  FLD float ptr [EDX + 0x14]
00403bff  FMUL float ptr [EAX + 0x20]
00403c02  FSUBP
00403c04  FMUL float ptr [EBP + -0x4]
00403c07  MOV ECX,dword ptr [EBP + 0x8]
00403c0a  FSTP float ptr [ECX + 0x20]
00403c0d  FLD float ptr [EBP + -0x4]
00403c10  FCHS
00403c12  MOV EDX,dword ptr [EBP + 0xc]
00403c15  MOV EAX,dword ptr [EBP + 0xc]
00403c18  FLD float ptr [EDX]
00403c1a  FMUL float ptr [EAX + 0x24]
00403c1d  MOV ECX,dword ptr [EBP + 0xc]
00403c20  MOV EDX,dword ptr [EBP + 0xc]
00403c23  FLD float ptr [ECX + 0x4]
00403c26  FMUL float ptr [EDX + 0x20]
00403c29  FSUBP
00403c2b  FMULP
00403c2d  MOV EAX,dword ptr [EBP + 0x8]
00403c30  FSTP float ptr [EAX + 0x24]
00403c33  MOV ECX,dword ptr [EBP + 0xc]
00403c36  MOV EDX,dword ptr [EBP + 0xc]
00403c39  FLD float ptr [ECX]
00403c3b  FMUL float ptr [EDX + 0x14]
00403c3e  MOV EAX,dword ptr [EBP + 0xc]
00403c41  MOV ECX,dword ptr [EBP + 0xc]
00403c44  FLD float ptr [EAX + 0x4]
00403c47  FMUL float ptr [ECX + 0x10]
00403c4a  FSUBP
00403c4c  FMUL float ptr [EBP + -0x4]
00403c4f  MOV EDX,dword ptr [EBP + 0x8]
00403c52  FSTP float ptr [EDX + 0x28]
00403c55  MOV EAX,dword ptr [EBP + 0x8]
00403c58  MOV dword ptr [EAX + 0x2c],0x0
00403c5f  MOV ECX,dword ptr [EBP + 0xc]
00403c62  MOV EDX,dword ptr [EBP + 0x8]
00403c65  FLD float ptr [ECX + 0x30]
00403c68  FMUL float ptr [EDX]
00403c6a  MOV EAX,dword ptr [EBP + 0xc]
00403c6d  MOV ECX,dword ptr [EBP + 0x8]
00403c70  FLD float ptr [EAX + 0x34]
00403c73  FMUL float ptr [ECX + 0x10]
00403c76  FADDP
00403c78  MOV EDX,dword ptr [EBP + 0xc]
00403c7b  MOV EAX,dword ptr [EBP + 0x8]
00403c7e  FLD float ptr [EDX + 0x38]
00403c81  FMUL float ptr [EAX + 0x20]
00403c84  FADDP
00403c86  FCHS
00403c88  MOV ECX,dword ptr [EBP + 0x8]
00403c8b  FSTP float ptr [ECX + 0x30]
00403c8e  MOV EDX,dword ptr [EBP + 0xc]
00403c91  MOV EAX,dword ptr [EBP + 0x8]
00403c94  FLD float ptr [EDX + 0x30]
00403c97  FMUL float ptr [EAX + 0x4]
00403c9a  MOV ECX,dword ptr [EBP + 0xc]
00403c9d  MOV EDX,dword ptr [EBP + 0x8]
00403ca0  FLD float ptr [ECX + 0x34]
00403ca3  FMUL float ptr [EDX + 0x14]
00403ca6  FADDP
00403ca8  MOV EAX,dword ptr [EBP + 0xc]
00403cab  MOV ECX,dword ptr [EBP + 0x8]
00403cae  FLD float ptr [EAX + 0x38]
00403cb1  FMUL float ptr [ECX + 0x24]
00403cb4  FADDP
00403cb6  FCHS
00403cb8  MOV EDX,dword ptr [EBP + 0x8]
00403cbb  FSTP float ptr [EDX + 0x34]
00403cbe  MOV EAX,dword ptr [EBP + 0xc]
00403cc1  MOV ECX,dword ptr [EBP + 0x8]
00403cc4  FLD float ptr [EAX + 0x30]
00403cc7  FMUL float ptr [ECX + 0x8]
00403cca  MOV EDX,dword ptr [EBP + 0xc]
00403ccd  MOV EAX,dword ptr [EBP + 0x8]
00403cd0  FLD float ptr [EDX + 0x34]
00403cd3  FMUL float ptr [EAX + 0x18]
00403cd6  FADDP
00403cd8  MOV ECX,dword ptr [EBP + 0xc]
00403cdb  MOV EDX,dword ptr [EBP + 0x8]
00403cde  FLD float ptr [ECX + 0x38]
00403ce1  FMUL float ptr [EDX + 0x28]
00403ce4  FADDP
00403ce6  FCHS
00403ce8  MOV EAX,dword ptr [EBP + 0x8]
00403ceb  FSTP float ptr [EAX + 0x38]
00403cee  MOV ECX,dword ptr [EBP + 0x8]
00403cf1  MOV dword ptr [ECX + 0x3c],0x3f800000
00403cf8  XOR EAX,EAX
00403cfa  MOV ESP,EBP
00403cfc  POP EBP
00403cfd  RET
