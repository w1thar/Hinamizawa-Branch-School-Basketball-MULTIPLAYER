00407801  PUSH EBP
00407802  MOV EBP,ESP
00407804  SUB ESP,0x14
00407807  MOV EAX,dword ptr [EBP + 0x10]
0040780a  PUSH EAX
0040780b  CALL 0x0040136b  ; cosf
00407810  ADD ESP,0x4
00407813  FSTP float ptr [EBP + -0x14]
00407816  MOV ECX,dword ptr [EBP + 0x10]
00407819  PUSH ECX
0040781a  CALL 0x00401262  ; sinf
0040781f  ADD ESP,0x4
00407822  FSTP float ptr [EBP + -0x4]
00407825  MOV EDX,dword ptr [EBP + 0xc]
00407828  PUSH EDX
00407829  LEA EAX,[EBP + -0x10]
0040782c  PUSH EAX
0040782d  CALL 0x00401253  ; Vec3_Normalize
00407832  ADD ESP,0x8
00407835  FLD float ptr [EBP + -0x10]
00407838  FMUL float ptr [EBP + -0x10]
0040783b  FLD float ptr [0x0044e09c] {1}
00407841  FSUB float ptr [EBP + -0x14]
00407844  FMULP
00407846  FADD float ptr [EBP + -0x14]
00407849  MOV ECX,dword ptr [EBP + 0x8]
0040784c  FSTP float ptr [ECX]
0040784e  FLD float ptr [EBP + -0x10]
00407851  FMUL float ptr [EBP + -0xc]
00407854  FLD float ptr [0x0044e09c] {1}
0040785a  FSUB float ptr [EBP + -0x14]
0040785d  FMULP
0040785f  FLD float ptr [EBP + -0x8]
00407862  FMUL float ptr [EBP + -0x4]
00407865  FSUBP
00407867  MOV EDX,dword ptr [EBP + 0x8]
0040786a  FSTP float ptr [EDX + 0x4]
0040786d  FLD float ptr [EBP + -0x10]
00407870  FMUL float ptr [EBP + -0x8]
00407873  FLD float ptr [0x0044e09c] {1}
00407879  FSUB float ptr [EBP + -0x14]
0040787c  FMULP
0040787e  FLD float ptr [EBP + -0xc]
00407881  FMUL float ptr [EBP + -0x4]
00407884  FADDP
00407886  MOV EAX,dword ptr [EBP + 0x8]
00407889  FSTP float ptr [EAX + 0x8]
0040788c  FLD float ptr [EBP + -0xc]
0040788f  FMUL float ptr [EBP + -0x10]
00407892  FLD float ptr [0x0044e09c] {1}
00407898  FSUB float ptr [EBP + -0x14]
0040789b  FMULP
0040789d  FLD float ptr [EBP + -0x8]
004078a0  FMUL float ptr [EBP + -0x4]
004078a3  FADDP
004078a5  MOV ECX,dword ptr [EBP + 0x8]
004078a8  FSTP float ptr [ECX + 0x10]
004078ab  FLD float ptr [EBP + -0xc]
004078ae  FMUL float ptr [EBP + -0xc]
004078b1  FLD float ptr [0x0044e09c] {1}
004078b7  FSUB float ptr [EBP + -0x14]
004078ba  FMULP
004078bc  FADD float ptr [EBP + -0x14]
004078bf  MOV EDX,dword ptr [EBP + 0x8]
004078c2  FSTP float ptr [EDX + 0x14]
004078c5  FLD float ptr [EBP + -0xc]
004078c8  FMUL float ptr [EBP + -0x8]
004078cb  FLD float ptr [0x0044e09c] {1}
004078d1  FSUB float ptr [EBP + -0x14]
004078d4  FMULP
004078d6  FLD float ptr [EBP + -0x10]
004078d9  FMUL float ptr [EBP + -0x4]
004078dc  FSUBP
004078de  MOV EAX,dword ptr [EBP + 0x8]
004078e1  FSTP float ptr [EAX + 0x18]
004078e4  FLD float ptr [EBP + -0x8]
004078e7  FMUL float ptr [EBP + -0x10]
004078ea  FLD float ptr [0x0044e09c] {1}
004078f0  FSUB float ptr [EBP + -0x14]
004078f3  FMULP
004078f5  FLD float ptr [EBP + -0xc]
004078f8  FMUL float ptr [EBP + -0x4]
004078fb  FSUBP
004078fd  MOV ECX,dword ptr [EBP + 0x8]
00407900  FSTP float ptr [ECX + 0x20]
00407903  FLD float ptr [EBP + -0x8]
00407906  FMUL float ptr [EBP + -0xc]
00407909  FLD float ptr [0x0044e09c] {1}
0040790f  FSUB float ptr [EBP + -0x14]
00407912  FMULP
00407914  FLD float ptr [EBP + -0x10]
00407917  FMUL float ptr [EBP + -0x4]
0040791a  FADDP
0040791c  MOV EDX,dword ptr [EBP + 0x8]
0040791f  FSTP float ptr [EDX + 0x24]
00407922  FLD float ptr [EBP + -0x8]
00407925  FMUL float ptr [EBP + -0x8]
00407928  FLD float ptr [0x0044e09c] {1}
0040792e  FSUB float ptr [EBP + -0x14]
00407931  FMULP
00407933  FADD float ptr [EBP + -0x14]
00407936  MOV EAX,dword ptr [EBP + 0x8]
00407939  FSTP float ptr [EAX + 0x28]
0040793c  MOV ECX,dword ptr [EBP + 0x8]
0040793f  MOV dword ptr [ECX + 0x2c],0x0
00407946  MOV EDX,dword ptr [EBP + 0x8]
00407949  MOV dword ptr [EDX + 0x1c],0x0
00407950  MOV EAX,dword ptr [EBP + 0x8]
00407953  MOV dword ptr [EAX + 0xc],0x0
0040795a  MOV ECX,dword ptr [EBP + 0x8]
0040795d  MOV dword ptr [ECX + 0x38],0x0
00407964  MOV EDX,dword ptr [EBP + 0x8]
00407967  MOV dword ptr [EDX + 0x34],0x0
0040796e  MOV EAX,dword ptr [EBP + 0x8]
00407971  MOV dword ptr [EAX + 0x30],0x0
00407978  MOV ECX,dword ptr [EBP + 0x8]
0040797b  MOV dword ptr [ECX + 0x3c],0x3f800000
00407982  MOV ESP,EBP
00407984  POP EBP
00407985  RET
