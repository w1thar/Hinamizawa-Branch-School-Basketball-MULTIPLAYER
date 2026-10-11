004029c7  PUSH EBP
004029c8  MOV EBP,ESP
004029ca  SUB ESP,0x1b8
004029d0  PUSH ESI
004029d1  LEA EAX,[EBP + 0xfffffe88]
004029d7  PUSH EAX
004029d8  MOV ECX,dword ptr [EBP + 0x8]
004029db  MOV EDX,dword ptr [ECX]
004029dd  MOV EAX,dword ptr [EBP + 0x8]
004029e0  PUSH EAX
004029e1  CALL dword ptr [EDX + 0xc]
004029e4  TEST EAX,EAX
004029e6  JGE 0x004029ef
004029e8  XOR EAX,EAX
004029ea  JMP 0x00402d29
004029ef  LEA ECX,[EBP + 0xfffffe64]
004029f5  PUSH ECX
004029f6  PUSH 0x18
004029f8  MOV EDX,dword ptr [EBP + 0xc]
004029fb  PUSH EDX
004029fc  CALL dword ptr [0x0045a488] {371054}
00402a02  MOV EAX,dword ptr [EBP + 0xfffffe68]
00402a08  MOV dword ptr [EBP + 0xffffff74],EAX
00402a0e  MOV ECX,dword ptr [EBP + 0xfffffe6c]
00402a14  MOV dword ptr [EBP + -0xc],ECX
00402a17  PUSH 0x7c
00402a19  PUSH 0x0
00402a1b  LEA EDX,[EBP + 0xffffff78]
00402a21  PUSH EDX
00402a22  CALL 0x00433440
00402a27  ADD ESP,0xc
00402a2a  MOV dword ptr [EBP + 0xffffff78],0x7c
00402a34  MOV dword ptr [EBP + 0xffffff7c],0x121007
00402a3e  MOV EAX,dword ptr [EBP + 0x10]
00402a41  MOV dword ptr [EBP + -0x70],EAX
00402a44  MOV dword ptr [EBP + -0x20],0x401008
00402a4b  MOV ECX,dword ptr [EBP + 0xffffff74]
00402a51  MOV dword ptr [EBP + -0x7c],ECX
00402a54  MOV EDX,dword ptr [EBP + -0xc]
00402a57  MOV dword ptr [EBP + -0x80],EDX
00402a5a  PUSH 0x44fca8
00402a5f  LEA EAX,[EBP + 0xffffff4c]
00402a65  PUSH EAX
00402a66  CALL 0x00401172
00402a6b  ADD ESP,0x8
00402a6e  TEST EAX,EAX
00402a70  JZ 0x00402a7b
00402a72  MOV dword ptr [EBP + -0x1c],0x10
00402a79  JMP 0x00402aa5
00402a7b  PUSH 0x44fc68
00402a80  LEA ECX,[EBP + 0xffffff4c]
00402a86  PUSH ECX
00402a87  CALL 0x00401172
00402a8c  ADD ESP,0x8
00402a8f  TEST EAX,EAX
00402a91  JZ 0x00402a9c
00402a93  MOV dword ptr [EBP + -0x1c],0x10
00402a9a  JMP 0x00402aa5
00402a9c  MOV EDX,dword ptr [EBP + -0x20]
00402a9f  OR DH,0x8
00402aa2  MOV dword ptr [EBP + -0x20],EDX
00402aa5  MOV EAX,dword ptr [EBP + 0xfffffee4]
00402aab  AND EAX,0x2
00402aae  TEST EAX,EAX
00402ab0  JZ 0x00402aeb
00402ab2  MOV dword ptr [EBP + -0x7c],0x1
00402ab9  JMP 0x00402ac3
00402abb  MOV ECX,dword ptr [EBP + -0x7c]
00402abe  SHL ECX,0x1
00402ac0  MOV dword ptr [EBP + -0x7c],ECX
00402ac3  MOV EDX,dword ptr [EBP + 0xffffff74]
00402ac9  CMP EDX,dword ptr [EBP + -0x7c]
00402acc  JBE 0x00402ad0
00402ace  JMP 0x00402abb
00402ad0  MOV dword ptr [EBP + -0x80],0x1
00402ad7  JMP 0x00402ae1
00402ad9  MOV EAX,dword ptr [EBP + -0x80]
00402adc  SHL EAX,0x1
00402ade  MOV dword ptr [EBP + -0x80],EAX
00402ae1  MOV ECX,dword ptr [EBP + -0xc]
00402ae4  CMP ECX,dword ptr [EBP + -0x80]
00402ae7  JBE 0x00402aeb
00402ae9  JMP 0x00402ad9
00402aeb  MOV EDX,dword ptr [EBP + 0xfffffee4]
00402af1  AND EDX,0x20
00402af4  TEST EDX,EDX
00402af6  JZ 0x00402b0e
00402af8  MOV EAX,dword ptr [EBP + -0x7c]
00402afb  CMP EAX,dword ptr [EBP + -0x80]
00402afe  JBE 0x00402b08
00402b00  MOV ECX,dword ptr [EBP + -0x7c]
00402b03  MOV dword ptr [EBP + -0x80],ECX
00402b06  JMP 0x00402b0e
00402b08  MOV EDX,dword ptr [EBP + -0x80]
00402b0b  MOV dword ptr [EBP + -0x7c],EDX
00402b0e  LEA EAX,[EBP + -0x40]
00402b11  PUSH EAX
00402b12  PUSH 0x402f31
00402b17  MOV ECX,dword ptr [EBP + 0x8]
00402b1a  MOV EDX,dword ptr [ECX]
00402b1c  MOV EAX,dword ptr [EBP + 0x8]
00402b1f  PUSH EAX
00402b20  CALL dword ptr [EDX + 0x10]
00402b23  CMP dword ptr [EBP + -0x34],0x0
00402b27  JNZ 0x00402b30
00402b29  XOR EAX,EAX
00402b2b  JMP 0x00402d29
00402b30  LEA ECX,[EBP + 0xfffffe60]
00402b36  PUSH ECX
00402b37  MOV EDX,dword ptr [EBP + 0x8]
00402b3a  MOV EAX,dword ptr [EDX]
00402b3c  MOV ECX,dword ptr [EBP + 0x8]
00402b3f  PUSH ECX
00402b40  CALL dword ptr [EAX + 0x24]
00402b43  LEA EDX,[EBP + -0x4]
00402b46  PUSH EDX
00402b47  MOV EAX,dword ptr [EBP + 0xfffffe60]
00402b4d  MOV ECX,dword ptr [EAX]
00402b4f  MOV EDX,dword ptr [EBP + 0xfffffe60]
00402b55  PUSH EDX
00402b56  CALL dword ptr [ECX + 0x90]
00402b5c  MOV EAX,dword ptr [EBP + 0xfffffe60]
00402b62  MOV ECX,dword ptr [EAX]
00402b64  MOV EDX,dword ptr [EBP + 0xfffffe60]
00402b6a  PUSH EDX
00402b6b  CALL dword ptr [ECX + 0x8]
00402b6e  PUSH 0x0
00402b70  LEA EAX,[EBP + 0xfffffe7c]
00402b76  PUSH EAX
00402b77  LEA ECX,[EBP + 0xffffff78]
00402b7d  PUSH ECX
00402b7e  MOV EDX,dword ptr [EBP + -0x4]
00402b81  MOV EAX,dword ptr [EDX]
00402b83  MOV ECX,dword ptr [EBP + -0x4]
00402b86  PUSH ECX
00402b87  CALL dword ptr [EAX + 0x18]
00402b8a  MOV dword ptr [EBP + 0xfffffe84],EAX
00402b90  CMP dword ptr [EBP + 0xfffffe84],0x0
00402b97  JGE 0x00402bac
00402b99  MOV EDX,dword ptr [EBP + -0x4]
00402b9c  MOV EAX,dword ptr [EDX]
00402b9e  MOV ECX,dword ptr [EBP + -0x4]
00402ba1  PUSH ECX
00402ba2  CALL dword ptr [EAX + 0x8]
00402ba5  XOR EAX,EAX
00402ba7  JMP 0x00402d29
00402bac  MOV EDX,dword ptr [EBP + -0x4]
00402baf  MOV EAX,dword ptr [EDX]
00402bb1  MOV ECX,dword ptr [EBP + -0x4]
00402bb4  PUSH ECX
00402bb5  CALL dword ptr [EAX + 0x8]
00402bb8  MOV EDX,dword ptr [EBP + 0xfffffe7c]
00402bbe  MOV dword ptr [EBP + -0x8],EDX
00402bc1  PUSH 0x0
00402bc3  CALL dword ptr [0x0045a48c] {371016}
00402bc9  MOV dword ptr [EBP + 0xfffffe5c],EAX
00402bcf  CMP dword ptr [EBP + 0xfffffe5c],0x0
00402bd6  JNZ 0x00402bf1
00402bd8  MOV EAX,dword ptr [EBP + 0xfffffe7c]
00402bde  MOV ECX,dword ptr [EAX]
00402be0  MOV EDX,dword ptr [EBP + 0xfffffe7c]
00402be6  PUSH EDX
00402be7  CALL dword ptr [ECX + 0x8]
00402bea  XOR EAX,EAX
00402bec  JMP 0x00402d29
00402bf1  MOV EAX,dword ptr [EBP + 0xc]
00402bf4  PUSH EAX
00402bf5  MOV ECX,dword ptr [EBP + 0xfffffe5c]
00402bfb  PUSH ECX
00402bfc  CALL dword ptr [0x0045a47c] {371000}
00402c02  MOV dword ptr [EBP + 0xfffffe80],0x0
00402c0c  JMP 0x00402c1d
00402c0e  MOV EDX,dword ptr [EBP + 0xfffffe80]
00402c14  ADD EDX,0x1
00402c17  MOV dword ptr [EBP + 0xfffffe80],EDX
00402c1d  MOV EAX,dword ptr [EBP + 0xfffffe80]
00402c23  CMP EAX,dword ptr [EBP + -0x70]
00402c26  JNC 0x00402d16
00402c2c  LEA ECX,[EBP + 0xfffffe48]
00402c32  PUSH ECX
00402c33  MOV EDX,dword ptr [EBP + -0x8]
00402c36  MOV EAX,dword ptr [EDX]
00402c38  MOV ECX,dword ptr [EBP + -0x8]
00402c3b  PUSH ECX
00402c3c  CALL dword ptr [EAX + 0x44]
00402c3f  TEST EAX,EAX
00402c41  JL 0x00402ca5
00402c43  PUSH 0xcc0020
00402c48  PUSH 0x0
00402c4a  PUSH 0x0
00402c4c  MOV EDX,dword ptr [EBP + 0xfffffe5c]
00402c52  PUSH EDX
00402c53  MOV ESI,0x1
00402c58  MOV ECX,dword ptr [EBP + 0xfffffe80]
00402c5e  SHL ESI,CL
00402c60  MOV EAX,dword ptr [EBP + 0xfffffe6c]
00402c66  CDQ
00402c67  IDIV ESI
00402c69  PUSH EAX
00402c6a  MOV ESI,0x1
00402c6f  MOV ECX,dword ptr [EBP + 0xfffffe80]
00402c75  SHL ESI,CL
00402c77  MOV EAX,dword ptr [EBP + 0xfffffe68]
00402c7d  CDQ
00402c7e  IDIV ESI
00402c80  PUSH EAX
00402c81  PUSH 0x0
00402c83  PUSH 0x0
00402c85  MOV EAX,dword ptr [EBP + 0xfffffe48]
00402c8b  PUSH EAX
00402c8c  CALL dword ptr [0x0045a478] {370990}
00402c92  MOV ECX,dword ptr [EBP + 0xfffffe48]
00402c98  PUSH ECX
00402c99  MOV EDX,dword ptr [EBP + -0x8]
00402c9c  MOV EAX,dword ptr [EDX]
00402c9e  MOV ECX,dword ptr [EBP + -0x8]
00402ca1  PUSH ECX
00402ca2  CALL dword ptr [EAX + 0x68]
00402ca5  MOV EDX,dword ptr [EBP + 0xfffffe6c]
00402cab  PUSH EDX
00402cac  MOV EAX,dword ptr [EBP + 0xfffffe68]
00402cb2  PUSH EAX
00402cb3  MOV ECX,dword ptr [EBP + 0xfffffe5c]
00402cb9  PUSH ECX
00402cba  CALL 0x00401109
00402cbf  ADD ESP,0xc
00402cc2  MOV dword ptr [EBP + 0xfffffe4c],0x401000
00402ccc  MOV dword ptr [EBP + 0xfffffe50],0x0
00402cd6  MOV dword ptr [EBP + 0xfffffe54],0x0
00402ce0  MOV dword ptr [EBP + 0xfffffe58],0x0
00402cea  LEA EDX,[EBP + -0x8]
00402ced  PUSH EDX
00402cee  LEA EAX,[EBP + 0xfffffe4c]
00402cf4  PUSH EAX
00402cf5  MOV ECX,dword ptr [EBP + -0x8]
00402cf8  MOV EDX,dword ptr [ECX]
00402cfa  MOV EAX,dword ptr [EBP + -0x8]
00402cfd  PUSH EAX
00402cfe  CALL dword ptr [EDX + 0x30]
00402d01  TEST EAX,EAX
00402d03  JL 0x00402d11
00402d05  MOV ECX,dword ptr [EBP + -0x8]
00402d08  MOV EDX,dword ptr [ECX]
00402d0a  MOV EAX,dword ptr [EBP + -0x8]
00402d0d  PUSH EAX
00402d0e  CALL dword ptr [EDX + 0x8]
00402d11  JMP 0x00402c0e
00402d16  MOV ECX,dword ptr [EBP + 0xfffffe5c]
00402d1c  PUSH ECX
00402d1d  CALL dword ptr [0x0045a480] {370978}
00402d23  MOV EAX,dword ptr [EBP + 0xfffffe7c]
00402d29  POP ESI
00402d2a  MOV ESP,EBP
00402d2c  POP EBP
00402d2d  RET
