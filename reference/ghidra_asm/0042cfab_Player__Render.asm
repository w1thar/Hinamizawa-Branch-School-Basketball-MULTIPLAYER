0042cfab  PUSH EBP
0042cfac  MOV EBP,ESP
0042cfae  SUB ESP,0x44
0042cfb1  MOV dword ptr [EBP + -0x44],ECX
0042cfb4  LEA ECX,[EBP + -0x40]
0042cfb7  CALL 0x004011d6
0042cfbc  MOV EAX,dword ptr [EBP + -0x44]
0042cfbf  MOV dword ptr [EAX + 0x8],0x3f19999a
0042cfc6  MOV ECX,dword ptr [EBP + -0x44]
0042cfc9  MOV dword ptr [ECX + 0xc],0x3f19999a
0042cfd0  MOV EDX,dword ptr [EBP + -0x44]
0042cfd3  MOV dword ptr [EDX + 0x10],0x3f19999a
0042cfda  MOV EAX,dword ptr [EBP + -0x44]
0042cfdd  MOV dword ptr [EAX + 0x18],0x3f666666
0042cfe4  MOV ECX,dword ptr [EBP + -0x44]
0042cfe7  MOV dword ptr [ECX + 0x1c],0x3f666666
0042cfee  MOV EDX,dword ptr [EBP + -0x44]
0042cff1  MOV dword ptr [EDX + 0x20],0x3f666666
0042cff8  MOV EAX,dword ptr [EBP + -0x44]
0042cffb  ADD EAX,0x8
0042cffe  PUSH EAX
0042cfff  MOV ECX,dword ptr [EBP + 0x8]
0042d002  MOV EDX,dword ptr [ECX]
0042d004  MOV EAX,dword ptr [EBP + 0x8]
0042d007  PUSH EAX
0042d008  CALL dword ptr [EDX + 0x40]
0042d00b  PUSH 0x2
0042d00d  PUSH 0x5
0042d00f  PUSH 0x0
0042d011  MOV ECX,dword ptr [EBP + 0x8]
0042d014  MOV EDX,dword ptr [ECX]
0042d016  MOV EAX,dword ptr [EBP + 0x8]
0042d019  PUSH EAX
0042d01a  CALL dword ptr [EDX + 0x94]
0042d020  PUSH 0x5
0042d022  PUSH 0x13
0042d024  MOV ECX,dword ptr [EBP + 0x8]
0042d027  MOV EDX,dword ptr [ECX]
0042d029  MOV EAX,dword ptr [EBP + 0x8]
0042d02c  PUSH EAX
0042d02d  CALL dword ptr [EDX + 0x50]
0042d030  PUSH 0x6
0042d032  PUSH 0x14
0042d034  MOV ECX,dword ptr [EBP + 0x8]
0042d037  MOV EDX,dword ptr [ECX]
0042d039  MOV EAX,dword ptr [EBP + 0x8]
0042d03c  PUSH EAX
0042d03d  CALL dword ptr [EDX + 0x50]
0042d040  MOV ECX,dword ptr [EBP + -0x44]
0042d043  ADD ECX,0x50
0042d046  PUSH ECX
0042d047  CALL 0x004010e6
0042d04c  ADD ESP,0x4
0042d04f  PUSH EAX
0042d050  PUSH 0x0
0042d052  MOV EDX,dword ptr [EBP + 0x8]
0042d055  MOV EAX,dword ptr [EDX]
0042d057  MOV ECX,dword ptr [EBP + 0x8]
0042d05a  PUSH ECX
0042d05b  CALL dword ptr [EAX + 0x8c]
0042d061  MOV EDX,dword ptr [EBP + 0x8]
0042d064  PUSH EDX
0042d065  MOV EAX,dword ptr [EBP + -0x44]
0042d068  MOV ECX,dword ptr [EAX + 0x4]
0042d06b  CALL 0x004012cb
0042d070  PUSH 0x0
0042d072  PUSH 0x5
0042d074  PUSH 0x0
0042d076  MOV ECX,dword ptr [EBP + 0x8]
0042d079  MOV EDX,dword ptr [ECX]
0042d07b  MOV EAX,dword ptr [EBP + 0x8]
0042d07e  PUSH EAX
0042d07f  CALL dword ptr [EDX + 0x94]
0042d085  MOV ECX,dword ptr [EBP + -0x44]
0042d088  MOV dword ptr [ECX + 0x8],0x0
0042d08f  MOV EDX,dword ptr [EBP + -0x44]
0042d092  MOV dword ptr [EDX + 0xc],0x0
0042d099  MOV EAX,dword ptr [EBP + -0x44]
0042d09c  MOV dword ptr [EAX + 0x10],0x0
0042d0a3  MOV ECX,dword ptr [EBP + -0x44]
0042d0a6  MOV dword ptr [ECX + 0x18],0x0
0042d0ad  MOV EDX,dword ptr [EBP + -0x44]
0042d0b0  MOV dword ptr [EDX + 0x1c],0x0
0042d0b7  MOV EAX,dword ptr [EBP + -0x44]
0042d0ba  MOV dword ptr [EAX + 0x20],0x0
0042d0c1  MOV ECX,dword ptr [EBP + -0x44]
0042d0c4  ADD ECX,0x8
0042d0c7  PUSH ECX
0042d0c8  MOV EDX,dword ptr [EBP + 0x8]
0042d0cb  MOV EAX,dword ptr [EDX]
0042d0cd  MOV ECX,dword ptr [EBP + 0x8]
0042d0d0  PUSH ECX
0042d0d1  CALL dword ptr [EAX + 0x40]
0042d0d4  LEA EDX,[EBP + 0xc]
0042d0d7  PUSH EDX
0042d0d8  PUSH 0x1
0042d0da  MOV EAX,dword ptr [EBP + 0x8]
0042d0dd  MOV ECX,dword ptr [EAX]
0042d0df  MOV EDX,dword ptr [EBP + 0x8]
0042d0e2  PUSH EDX
0042d0e3  CALL dword ptr [ECX + 0x2c]
0042d0e6  MOV EAX,dword ptr [EBP + 0x8]
0042d0e9  PUSH EAX
0042d0ea  MOV ECX,dword ptr [EBP + -0x44]
0042d0ed  MOV ECX,dword ptr [ECX + 0x4]
0042d0f0  CALL 0x004012cb
0042d0f5  PUSH 0x2
0042d0f7  PUSH 0x5
0042d0f9  PUSH 0x0
0042d0fb  MOV EDX,dword ptr [EBP + 0x8]
0042d0fe  MOV EAX,dword ptr [EDX]
0042d100  MOV ECX,dword ptr [EBP + 0x8]
0042d103  PUSH ECX
0042d104  CALL dword ptr [EAX + 0x94]
0042d10a  LEA EDX,[EBP + -0x40]
0042d10d  PUSH EDX
0042d10e  CALL 0x00401064
0042d113  ADD ESP,0x4
0042d116  LEA EAX,[EBP + -0x40]
0042d119  PUSH EAX
0042d11a  PUSH 0x1
0042d11c  MOV ECX,dword ptr [EBP + 0x8]
0042d11f  MOV EDX,dword ptr [ECX]
0042d121  MOV EAX,dword ptr [EBP + 0x8]
0042d124  PUSH EAX
0042d125  CALL dword ptr [EDX + 0x2c]
0042d128  MOV ESP,EBP
0042d12a  POP EBP
0042d12b  RET 0x44
