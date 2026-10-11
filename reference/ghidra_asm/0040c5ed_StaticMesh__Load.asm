0040c5ed  PUSH EBP
0040c5ee  MOV EBP,ESP
0040c5f0  PUSH -0x1
0040c5f2  PUSH 0x44ccda
0040c5f7  MOV EAX,FS:[0x0]
0040c5fd  PUSH EAX
0040c5fe  MOV dword ptr FS:[0x0],ESP
0040c605  MOV EAX,0x2114
0040c60a  CALL 0x00435010
0040c60f  PUSH ESI
0040c610  PUSH EDI
0040c611  MOV dword ptr [EBP + 0xffffdf04],ECX
0040c617  MOV byte ptr [EBP + 0xffffdfa0],0x0
0040c61e  MOV ECX,0x3f
0040c623  XOR EAX,EAX
0040c625  LEA EDI,[EBP + 0xffffdfa1]
0040c62b  STOSD.REP ES:EDI
0040c62d  STOSW ES:EDI
0040c62f  STOSB ES:EDI
0040c630  PUSH 0x453504
0040c635  MOV EAX,dword ptr [EBP + 0x8]
0040c638  PUSH EAX
0040c639  CALL 0x00434050
0040c63e  ADD ESP,0x8
0040c641  MOV dword ptr [EBP + 0xffffdf98],EAX
0040c647  PUSH 0x453508 {'Mesh {\n'} {'Mesh {\n'} {'Mesh
0040c64c  LEA ECX,[EBP + 0xffffdfa0]
0040c652  PUSH ECX
0040c653  CALL 0x00434f80
0040c658  ADD ESP,0x8
0040c65b  TEST EAX,EAX
0040c65d  JZ 0x0040c67c
0040c65f  MOV EDX,dword ptr [EBP + 0xffffdf98]
0040c665  PUSH EDX
0040c666  PUSH 0x100
0040c66b  LEA EAX,[EBP + 0xffffdfa0]
0040c671  PUSH EAX
0040c672  CALL 0x00434e50
0040c677  ADD ESP,0xc
0040c67a  JMP 0x0040c647
0040c67c  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040c682  ADD ECX,0x4
0040c685  PUSH ECX
0040c686  PUSH 0x453514 {' %d;'}
0040c68b  MOV EDX,dword ptr [EBP + 0xffffdf98]
0040c691  PUSH EDX
0040c692  CALL 0x00434dc0
0040c697  ADD ESP,0xc
0040c69a  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040c6a0  MOV ECX,dword ptr [EAX + 0x4]
0040c6a3  MOV dword ptr [EBP + -0x10],ECX
0040c6a6  MOV EDX,dword ptr [EBP + -0x10]
0040c6a9  SHL EDX,0x5
0040c6ac  PUSH EDX
0040c6ad  CALL 0x00434250
0040c6b2  ADD ESP,0x4
0040c6b5  MOV dword ptr [EBP + 0xffffdf60],EAX
0040c6bb  MOV dword ptr [EBP + -0x4],0x0
0040c6c2  CMP dword ptr [EBP + 0xffffdf60],0x0
0040c6c9  JZ 0x0040c6f0
0040c6cb  PUSH 0x4010cd
0040c6d0  MOV EAX,dword ptr [EBP + -0x10]
0040c6d3  PUSH EAX
0040c6d4  PUSH 0x20
0040c6d6  MOV ECX,dword ptr [EBP + 0xffffdf60]
0040c6dc  PUSH ECX
0040c6dd  CALL 0x00401294
0040c6e2  MOV EDX,dword ptr [EBP + 0xffffdf60]
0040c6e8  MOV dword ptr [EBP + 0xffffdf00],EDX
0040c6ee  JMP 0x0040c6fa
0040c6f0  MOV dword ptr [EBP + 0xffffdf00],0x0
0040c6fa  MOV EAX,dword ptr [EBP + 0xffffdf00]
0040c700  MOV dword ptr [EBP + 0xffffdf5c],EAX
0040c706  MOV dword ptr [EBP + -0x4],0xffffffff
0040c70d  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040c713  MOV EDX,dword ptr [EBP + 0xffffdf5c]
0040c719  MOV dword ptr [ECX + 0x8],EDX
0040c71c  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040c722  MOV ECX,dword ptr [EAX + 0x4]
0040c725  MOV dword ptr [EBP + -0x14],ECX
0040c728  MOV EDX,dword ptr [EBP + -0x14]
0040c72b  SHL EDX,0x5
0040c72e  PUSH EDX
0040c72f  CALL 0x00434250
0040c734  ADD ESP,0x4
0040c737  MOV dword ptr [EBP + 0xffffdf58],EAX
0040c73d  MOV dword ptr [EBP + -0x4],0x1
0040c744  CMP dword ptr [EBP + 0xffffdf58],0x0
0040c74b  JZ 0x0040c772
0040c74d  PUSH 0x4010cd
0040c752  MOV EAX,dword ptr [EBP + -0x14]
0040c755  PUSH EAX
0040c756  PUSH 0x20
0040c758  MOV ECX,dword ptr [EBP + 0xffffdf58]
0040c75e  PUSH ECX
0040c75f  CALL 0x00401294
0040c764  MOV EDX,dword ptr [EBP + 0xffffdf58]
0040c76a  MOV dword ptr [EBP + 0xffffdefc],EDX
0040c770  JMP 0x0040c77c
0040c772  MOV dword ptr [EBP + 0xffffdefc],0x0
0040c77c  MOV EAX,dword ptr [EBP + 0xffffdefc]
0040c782  MOV dword ptr [EBP + 0xffffdf54],EAX
0040c788  MOV dword ptr [EBP + -0x4],0xffffffff
0040c78f  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040c795  MOV EDX,dword ptr [EBP + 0xffffdf54]
0040c79b  MOV dword ptr [ECX + 0x20],EDX
0040c79e  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040c7a4  MOV ECX,dword ptr [EAX + 0x4]
0040c7a7  SHL ECX,0x5
0040c7aa  PUSH ECX
0040c7ab  PUSH 0x0
0040c7ad  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040c7b3  MOV EAX,dword ptr [EDX + 0x8]
0040c7b6  PUSH EAX
0040c7b7  CALL 0x00433440
0040c7bc  ADD ESP,0xc
0040c7bf  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040c7c5  MOV EDX,dword ptr [ECX + 0x4]
0040c7c8  SHL EDX,0x5
0040c7cb  PUSH EDX
0040c7cc  PUSH 0x0
0040c7ce  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040c7d4  MOV ECX,dword ptr [EAX + 0x20]
0040c7d7  PUSH ECX
0040c7d8  CALL 0x00433440
0040c7dd  ADD ESP,0xc
0040c7e0  MOV dword ptr [EBP + -0x20],0x0
0040c7e7  JMP 0x0040c7f2
0040c7e9  MOV EDX,dword ptr [EBP + -0x20]
0040c7ec  ADD EDX,0x1
0040c7ef  MOV dword ptr [EBP + -0x20],EDX
0040c7f2  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040c7f8  MOV ECX,dword ptr [EAX + 0x4]
0040c7fb  SUB ECX,0x1
0040c7fe  CMP dword ptr [EBP + -0x20],ECX
0040c801  JNC 0x0040c853
0040c803  MOV EDX,dword ptr [EBP + -0x20]
0040c806  SHL EDX,0x5
0040c809  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040c80f  MOV ECX,dword ptr [EAX + 0x8]
0040c812  LEA EDX,[ECX + EDX*0x1 + 0x8]
0040c816  PUSH EDX
0040c817  MOV EAX,dword ptr [EBP + -0x20]
0040c81a  SHL EAX,0x5
0040c81d  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040c823  MOV EDX,dword ptr [ECX + 0x8]
0040c826  LEA EAX,[EDX + EAX*0x1 + 0x4]
0040c82a  PUSH EAX
0040c82b  MOV ECX,dword ptr [EBP + -0x20]
0040c82e  SHL ECX,0x5
0040c831  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040c837  MOV EAX,dword ptr [EDX + 0x8]
0040c83a  ADD EAX,ECX
0040c83c  PUSH EAX
0040c83d  PUSH 0x45351c {' %f;%f;%f;,'}
0040c842  MOV ECX,dword ptr [EBP + 0xffffdf98]
0040c848  PUSH ECX
0040c849  CALL 0x00434dc0
0040c84e  ADD ESP,0x14
0040c851  JMP 0x0040c7e9
0040c853  MOV EDX,dword ptr [EBP + -0x20]
0040c856  SHL EDX,0x5
0040c859  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040c85f  MOV ECX,dword ptr [EAX + 0x8]
0040c862  LEA EDX,[ECX + EDX*0x1 + 0x8]
0040c866  PUSH EDX
0040c867  MOV EAX,dword ptr [EBP + -0x20]
0040c86a  SHL EAX,0x5
0040c86d  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040c873  MOV EDX,dword ptr [ECX + 0x8]
0040c876  LEA EAX,[EDX + EAX*0x1 + 0x4]
0040c87a  PUSH EAX
0040c87b  MOV ECX,dword ptr [EBP + -0x20]
0040c87e  SHL ECX,0x5
0040c881  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040c887  MOV EAX,dword ptr [EDX + 0x8]
0040c88a  ADD EAX,ECX
0040c88c  PUSH EAX
0040c88d  PUSH 0x453528 {' %f;%f;%f;;'}
0040c892  MOV ECX,dword ptr [EBP + 0xffffdf98]
0040c898  PUSH ECX
0040c899  CALL 0x00434dc0
0040c89e  ADD ESP,0x14
0040c8a1  MOV dword ptr [EBP + 0xffffdf94],0x0
0040c8ab  MOV EDX,dword ptr [EBP + 0xffffdf98]
0040c8b1  PUSH EDX
0040c8b2  CALL 0x00434d10
0040c8b7  ADD ESP,0x4
0040c8ba  LEA EAX,[EBP + 0xffffdf94]
0040c8c0  PUSH EAX
0040c8c1  PUSH 0x453534 {' %d;'}
0040c8c6  MOV ECX,dword ptr [EBP + 0xffffdf98]
0040c8cc  PUSH ECX
0040c8cd  CALL 0x00434dc0
0040c8d2  ADD ESP,0xc
0040c8d5  MOV EDX,dword ptr [EBP + 0xffffdf94]
0040c8db  IMUL EDX,EDX,0x14
0040c8de  PUSH EDX
0040c8df  CALL 0x00434250
0040c8e4  ADD ESP,0x4
0040c8e7  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040c8ed  MOV dword ptr [ECX + 0x1c],EAX
0040c8f0  MOV EDX,dword ptr [EBP + 0xffffdf94]
0040c8f6  IMUL EDX,EDX,0x14
0040c8f9  PUSH EDX
0040c8fa  PUSH 0x0
0040c8fc  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040c902  MOV ECX,dword ptr [EAX + 0x1c]
0040c905  PUSH ECX
0040c906  CALL 0x00433440
0040c90b  ADD ESP,0xc
0040c90e  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040c914  MOV dword ptr [EDX + 0xc],0x0
0040c91b  MOV dword ptr [EBP + -0x20],0x0
0040c922  JMP 0x0040c92d
0040c924  MOV EAX,dword ptr [EBP + -0x20]
0040c927  ADD EAX,0x1
0040c92a  MOV dword ptr [EBP + -0x20],EAX
0040c92d  MOV ECX,dword ptr [EBP + 0xffffdf94]
0040c933  SUB ECX,0x1
0040c936  CMP dword ptr [EBP + -0x20],ECX
0040c939  JNC 0x0040ca16
0040c93f  MOV EDX,dword ptr [EBP + -0x20]
0040c942  IMUL EDX,EDX,0x14
0040c945  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040c94b  MOV ECX,dword ptr [EAX + 0x1c]
0040c94e  LEA EDX,[ECX + EDX*0x1 + 0x10]
0040c952  PUSH EDX
0040c953  MOV EAX,dword ptr [EBP + -0x20]
0040c956  IMUL EAX,EAX,0x14
0040c959  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040c95f  MOV EDX,dword ptr [ECX + 0x1c]
0040c962  LEA EAX,[EDX + EAX*0x1 + 0xc]
0040c966  PUSH EAX
0040c967  MOV ECX,dword ptr [EBP + -0x20]
0040c96a  IMUL ECX,ECX,0x14
0040c96d  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040c973  MOV EAX,dword ptr [EDX + 0x1c]
0040c976  LEA ECX,[EAX + ECX*0x1 + 0x8]
0040c97a  PUSH ECX
0040c97b  MOV EDX,dword ptr [EBP + -0x20]
0040c97e  IMUL EDX,EDX,0x14
0040c981  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040c987  MOV ECX,dword ptr [EAX + 0x1c]
0040c98a  LEA EDX,[ECX + EDX*0x1 + 0x4]
0040c98e  PUSH EDX
0040c98f  MOV EAX,dword ptr [EBP + -0x20]
0040c992  IMUL EAX,EAX,0x14
0040c995  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040c99b  MOV EDX,dword ptr [ECX + 0x1c]
0040c99e  ADD EDX,EAX
0040c9a0  PUSH EDX
0040c9a1  PUSH 0x45353c {' %d;%d,%d,%d,%d;,'}
0040c9a6  MOV EAX,dword ptr [EBP + 0xffffdf98]
0040c9ac  PUSH EAX
0040c9ad  CALL 0x00434dc0
0040c9b2  ADD ESP,0x1c
0040c9b5  MOV ECX,dword ptr [EBP + -0x20]
0040c9b8  IMUL ECX,ECX,0x14
0040c9bb  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040c9c1  MOV EAX,dword ptr [EDX + 0x1c]
0040c9c4  MOV ECX,dword ptr [EAX + ECX*0x1]
0040c9c7  SUB ECX,0x2
0040c9ca  IMUL ECX,ECX,0x3
0040c9cd  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040c9d3  MOV EAX,dword ptr [EDX + 0xc]
0040c9d6  ADD EAX,ECX
0040c9d8  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040c9de  MOV dword ptr [ECX + 0xc],EAX
0040c9e1  MOV EDX,dword ptr [EBP + -0x20]
0040c9e4  IMUL EDX,EDX,0x14
0040c9e7  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040c9ed  MOV ECX,dword ptr [EAX + 0x1c]
0040c9f0  CMP dword ptr [ECX + EDX*0x1],0x3
0040c9f4  JNZ 0x0040ca11
0040c9f6  MOV EDX,dword ptr [EBP + 0xffffdf98]
0040c9fc  PUSH EDX
0040c9fd  PUSH 0x100
0040ca02  LEA EAX,[EBP + 0xffffdfa0]
0040ca08  PUSH EAX
0040ca09  CALL 0x00434e50
0040ca0e  ADD ESP,0xc
0040ca11  JMP 0x0040c924
0040ca16  MOV ECX,dword ptr [EBP + -0x20]
0040ca19  IMUL ECX,ECX,0x14
0040ca1c  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040ca22  MOV EAX,dword ptr [EDX + 0x1c]
0040ca25  LEA ECX,[EAX + ECX*0x1 + 0x10]
0040ca29  PUSH ECX
0040ca2a  MOV EDX,dword ptr [EBP + -0x20]
0040ca2d  IMUL EDX,EDX,0x14
0040ca30  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040ca36  MOV ECX,dword ptr [EAX + 0x1c]
0040ca39  LEA EDX,[ECX + EDX*0x1 + 0xc]
0040ca3d  PUSH EDX
0040ca3e  MOV EAX,dword ptr [EBP + -0x20]
0040ca41  IMUL EAX,EAX,0x14
0040ca44  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040ca4a  MOV EDX,dword ptr [ECX + 0x1c]
0040ca4d  LEA EAX,[EDX + EAX*0x1 + 0x8]
0040ca51  PUSH EAX
0040ca52  MOV ECX,dword ptr [EBP + -0x20]
0040ca55  IMUL ECX,ECX,0x14
0040ca58  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040ca5e  MOV EAX,dword ptr [EDX + 0x1c]
0040ca61  LEA ECX,[EAX + ECX*0x1 + 0x4]
0040ca65  PUSH ECX
0040ca66  MOV EDX,dword ptr [EBP + -0x20]
0040ca69  IMUL EDX,EDX,0x14
0040ca6c  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040ca72  MOV ECX,dword ptr [EAX + 0x1c]
0040ca75  ADD ECX,EDX
0040ca77  PUSH ECX
0040ca78  PUSH 0x453550 {' %d;%d,%d,%d,%d;;'}
0040ca7d  MOV EDX,dword ptr [EBP + 0xffffdf98]
0040ca83  PUSH EDX
0040ca84  CALL 0x00434dc0
0040ca89  ADD ESP,0x1c
0040ca8c  MOV EAX,dword ptr [EBP + -0x20]
0040ca8f  IMUL EAX,EAX,0x14
0040ca92  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040ca98  MOV EDX,dword ptr [ECX + 0x1c]
0040ca9b  MOV EAX,dword ptr [EDX + EAX*0x1]
0040ca9e  SUB EAX,0x2
0040caa1  IMUL EAX,EAX,0x3
0040caa4  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040caaa  MOV EDX,dword ptr [ECX + 0xc]
0040caad  ADD EDX,EAX
0040caaf  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040cab5  MOV dword ptr [EAX + 0xc],EDX
0040cab8  MOV ECX,dword ptr [EBP + 0xffffdf98]
0040cabe  PUSH ECX
0040cabf  PUSH 0x100
0040cac4  LEA EDX,[EBP + 0xffffdfa0]
0040caca  PUSH EDX
0040cacb  CALL 0x00434e50
0040cad0  ADD ESP,0xc
0040cad3  MOV EAX,dword ptr [EBP + 0xffffdf98]
0040cad9  PUSH EAX
0040cada  PUSH 0x100
0040cadf  LEA ECX,[EBP + 0xffffdfa0]
0040cae5  PUSH ECX
0040cae6  CALL 0x00434e50
0040caeb  ADD ESP,0xc
0040caee  MOV EDX,dword ptr [EBP + 0xffffdf98]
0040caf4  PUSH EDX
0040caf5  PUSH 0x100
0040cafa  LEA EAX,[EBP + 0xffffdfa0]
0040cb00  PUSH EAX
0040cb01  CALL 0x00434e50
0040cb06  ADD ESP,0xc
0040cb09  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040cb0f  ADD ECX,0x14
0040cb12  PUSH ECX
0040cb13  PUSH 0x453564 {'  %d;'}
0040cb18  MOV EDX,dword ptr [EBP + 0xffffdf98]
0040cb1e  PUSH EDX
0040cb1f  CALL 0x00434dc0
0040cb24  ADD ESP,0xc
0040cb27  MOV EAX,dword ptr [EBP + 0xffffdf98]
0040cb2d  PUSH EAX
0040cb2e  PUSH 0x100
0040cb33  LEA ECX,[EBP + 0xffffdfa0]
0040cb39  PUSH ECX
0040cb3a  CALL 0x00434e50
0040cb3f  ADD ESP,0xc
0040cb42  MOV EDX,dword ptr [EBP + 0xffffdf98]
0040cb48  PUSH EDX
0040cb49  PUSH 0x100
0040cb4e  LEA EAX,[EBP + 0xffffdfa0]
0040cb54  PUSH EAX
0040cb55  CALL 0x00434e50
0040cb5a  ADD ESP,0xc
0040cb5d  MOV dword ptr [EBP + -0x20],0x0
0040cb64  JMP 0x0040cb6f
0040cb66  MOV ECX,dword ptr [EBP + -0x20]
0040cb69  ADD ECX,0x1
0040cb6c  MOV dword ptr [EBP + -0x20],ECX
0040cb6f  MOV EDX,dword ptr [EBP + 0xffffdf94]
0040cb75  SUB EDX,0x1
0040cb78  CMP dword ptr [EBP + -0x20],EDX
0040cb7b  JNC 0x0040cb9e
0040cb7d  MOV EAX,dword ptr [EBP + -0x20]
0040cb80  LEA ECX,[EBP + EAX*0x4 + 0xffffe0a0]
0040cb87  PUSH ECX
0040cb88  PUSH 0x45356c {'  %d,'}
0040cb8d  MOV EDX,dword ptr [EBP + 0xffffdf98]
0040cb93  PUSH EDX
0040cb94  CALL 0x00434dc0
0040cb99  ADD ESP,0xc
0040cb9c  JMP 0x0040cb66
0040cb9e  MOV EAX,dword ptr [EBP + -0x20]
0040cba1  LEA ECX,[EBP + EAX*0x4 + 0xffffe0a0]
0040cba8  PUSH ECX
0040cba9  PUSH 0x453574 {'  %d;;'}
0040cbae  MOV EDX,dword ptr [EBP + 0xffffdf98]
0040cbb4  PUSH EDX
0040cbb5  CALL 0x00434dc0
0040cbba  ADD ESP,0xc
0040cbbd  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040cbc3  MOV ECX,dword ptr [EAX + 0xc]
0040cbc6  SHL ECX,0x1
0040cbc8  PUSH ECX
0040cbc9  CALL 0x00434250
0040cbce  ADD ESP,0x4
0040cbd1  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040cbd7  MOV dword ptr [EDX + 0x10],EAX
0040cbda  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040cbe0  MOV ECX,dword ptr [EAX + 0xc]
0040cbe3  SHL ECX,0x1
0040cbe5  PUSH ECX
0040cbe6  PUSH 0x0
0040cbe8  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040cbee  MOV EAX,dword ptr [EDX + 0x10]
0040cbf1  PUSH EAX
0040cbf2  CALL 0x00433440
0040cbf7  ADD ESP,0xc
0040cbfa  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040cc00  MOV EDX,dword ptr [ECX + 0x14]
0040cc03  IMUL EDX,EDX,0x148
0040cc09  PUSH EDX
0040cc0a  CALL 0x00434250
0040cc0f  ADD ESP,0x4
0040cc12  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040cc18  MOV dword ptr [ECX + 0x18],EAX
0040cc1b  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040cc21  MOV EAX,dword ptr [EDX + 0x14]
0040cc24  IMUL EAX,EAX,0x148
0040cc2a  PUSH EAX
0040cc2b  PUSH 0x0
0040cc2d  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040cc33  MOV EDX,dword ptr [ECX + 0x18]
0040cc36  PUSH EDX
0040cc37  CALL 0x00433440
0040cc3c  ADD ESP,0xc
0040cc3f  MOV dword ptr [EBP + -0x1c],0x0
0040cc46  MOV dword ptr [EBP + -0x20],0x0
0040cc4d  JMP 0x0040cc58
0040cc4f  MOV EAX,dword ptr [EBP + -0x20]
0040cc52  ADD EAX,0x1
0040cc55  MOV dword ptr [EBP + -0x20],EAX
0040cc58  MOV ECX,dword ptr [EBP + -0x20]
0040cc5b  CMP ECX,dword ptr [EBP + 0xffffdf94]
0040cc61  JNC 0x0040cfbb
0040cc67  MOV EDX,dword ptr [EBP + -0x20]
0040cc6a  IMUL EDX,EDX,0x14
0040cc6d  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040cc73  MOV ECX,dword ptr [EAX + 0x1c]
0040cc76  CMP dword ptr [ECX + EDX*0x1],0x3
0040cc7a  JNZ 0x0040cde6
0040cc80  MOV dword ptr [EBP + -0x1c],0x0
0040cc87  MOV dword ptr [EBP + 0xffffdf90],0x0
0040cc91  JMP 0x0040cca2
0040cc93  MOV EDX,dword ptr [EBP + 0xffffdf90]
0040cc99  ADD EDX,0x1
0040cc9c  MOV dword ptr [EBP + 0xffffdf90],EDX
0040cca2  MOV EAX,dword ptr [EBP + -0x20]
0040cca5  MOV ECX,dword ptr [EBP + 0xffffdf90]
0040ccab  CMP ECX,dword ptr [EBP + EAX*0x4 + 0xffffe0a0]
0040ccb2  JA 0x0040ccd8
0040ccb4  MOV EDX,dword ptr [EBP + 0xffffdf90]
0040ccba  IMUL EDX,EDX,0x148
0040ccc0  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040ccc6  MOV ECX,dword ptr [EAX + 0x18]
0040ccc9  MOV EAX,dword ptr [EBP + -0x1c]
0040cccc  ADD EAX,dword ptr [ECX + EDX*0x1 + 0x144]
0040ccd3  MOV dword ptr [EBP + -0x1c],EAX
0040ccd6  JMP 0x0040cc93
0040ccd8  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040ccde  MOV EDX,dword ptr [ECX + 0xc]
0040cce1  SUB EDX,0x3
0040cce4  MOV dword ptr [EBP + 0xffffdf90],EDX
0040ccea  JMP 0x0040ccfb
0040ccec  MOV EAX,dword ptr [EBP + 0xffffdf90]
0040ccf2  SUB EAX,0x1
0040ccf5  MOV dword ptr [EBP + 0xffffdf90],EAX
0040ccfb  MOV ECX,dword ptr [EBP + 0xffffdf90]
0040cd01  CMP ECX,dword ptr [EBP + -0x1c]
0040cd04  JBE 0x0040cd30
0040cd06  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040cd0c  MOV EAX,dword ptr [EDX + 0x10]
0040cd0f  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040cd15  MOV EDX,dword ptr [ECX + 0x10]
0040cd18  MOV ECX,dword ptr [EBP + 0xffffdf90]
0040cd1e  MOV ESI,dword ptr [EBP + 0xffffdf90]
0040cd24  MOV AX,word ptr [EAX + ESI*0x2 + -0x2]
0040cd29  MOV word ptr [EDX + ECX*0x2 + 0x4],AX
0040cd2e  JMP 0x0040ccec
0040cd30  MOV ECX,dword ptr [EBP + -0x20]
0040cd33  IMUL ECX,ECX,0x14
0040cd36  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040cd3c  MOV EAX,dword ptr [EDX + 0x1c]
0040cd3f  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040cd45  MOV EDX,dword ptr [EDX + 0x10]
0040cd48  MOV ESI,dword ptr [EBP + -0x1c]
0040cd4b  MOV AX,word ptr [EAX + ECX*0x1 + 0x4]
0040cd50  MOV word ptr [EDX + ESI*0x2],AX
0040cd54  MOV ECX,dword ptr [EBP + -0x20]
0040cd57  IMUL ECX,ECX,0x14
0040cd5a  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040cd60  MOV EAX,dword ptr [EDX + 0x1c]
0040cd63  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040cd69  MOV EDX,dword ptr [EDX + 0x10]
0040cd6c  MOV ESI,dword ptr [EBP + -0x1c]
0040cd6f  MOV AX,word ptr [EAX + ECX*0x1 + 0x8]
0040cd74  MOV word ptr [EDX + ESI*0x2 + 0x2],AX
0040cd79  MOV ECX,dword ptr [EBP + -0x20]
0040cd7c  IMUL ECX,ECX,0x14
0040cd7f  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040cd85  MOV EAX,dword ptr [EDX + 0x1c]
0040cd88  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040cd8e  MOV EDX,dword ptr [EDX + 0x10]
0040cd91  MOV ESI,dword ptr [EBP + -0x1c]
0040cd94  MOV AX,word ptr [EAX + ECX*0x1 + 0xc]
0040cd99  MOV word ptr [EDX + ESI*0x2 + 0x4],AX
0040cd9e  MOV ECX,dword ptr [EBP + -0x20]
0040cda1  MOV EDX,dword ptr [EBP + ECX*0x4 + 0xffffe0a0]
0040cda8  IMUL EDX,EDX,0x148
0040cdae  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040cdb4  MOV ECX,dword ptr [EAX + 0x18]
0040cdb7  MOV EDX,dword ptr [ECX + EDX*0x1 + 0x144]
0040cdbe  ADD EDX,0x3
0040cdc1  MOV EAX,dword ptr [EBP + -0x20]
0040cdc4  MOV ECX,dword ptr [EBP + EAX*0x4 + 0xffffe0a0]
0040cdcb  IMUL ECX,ECX,0x148
0040cdd1  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040cdd7  MOV EAX,dword ptr [EAX + 0x18]
0040cdda  MOV dword ptr [EAX + ECX*0x1 + 0x144],EDX
0040cde1  JMP 0x0040cfb6
0040cde6  MOV dword ptr [EBP + -0x1c],0x0
0040cded  MOV dword ptr [EBP + 0xffffdf8c],0x0
0040cdf7  JMP 0x0040ce08
0040cdf9  MOV ECX,dword ptr [EBP + 0xffffdf8c]
0040cdff  ADD ECX,0x1
0040ce02  MOV dword ptr [EBP + 0xffffdf8c],ECX
0040ce08  MOV EDX,dword ptr [EBP + -0x20]
0040ce0b  MOV EAX,dword ptr [EBP + 0xffffdf8c]
0040ce11  CMP EAX,dword ptr [EBP + EDX*0x4 + 0xffffe0a0]
0040ce18  JA 0x0040ce3e
0040ce1a  MOV ECX,dword ptr [EBP + 0xffffdf8c]
0040ce20  IMUL ECX,ECX,0x148
0040ce26  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040ce2c  MOV EAX,dword ptr [EDX + 0x18]
0040ce2f  MOV EDX,dword ptr [EBP + -0x1c]
0040ce32  ADD EDX,dword ptr [EAX + ECX*0x1 + 0x144]
0040ce39  MOV dword ptr [EBP + -0x1c],EDX
0040ce3c  JMP 0x0040cdf9
0040ce3e  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040ce44  MOV ECX,dword ptr [EAX + 0xc]
0040ce47  SUB ECX,0x6
0040ce4a  MOV dword ptr [EBP + 0xffffdf8c],ECX
0040ce50  JMP 0x0040ce61
0040ce52  MOV EDX,dword ptr [EBP + 0xffffdf8c]
0040ce58  SUB EDX,0x1
0040ce5b  MOV dword ptr [EBP + 0xffffdf8c],EDX
0040ce61  MOV EAX,dword ptr [EBP + 0xffffdf8c]
0040ce67  CMP EAX,dword ptr [EBP + -0x1c]
0040ce6a  JBE 0x0040ce96
0040ce6c  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040ce72  MOV EDX,dword ptr [ECX + 0x10]
0040ce75  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040ce7b  MOV ECX,dword ptr [EAX + 0x10]
0040ce7e  MOV EAX,dword ptr [EBP + 0xffffdf8c]
0040ce84  MOV ESI,dword ptr [EBP + 0xffffdf8c]
0040ce8a  MOV DX,word ptr [EDX + ESI*0x2 + -0x2]
0040ce8f  MOV word ptr [ECX + EAX*0x2 + 0xa],DX
0040ce94  JMP 0x0040ce52
0040ce96  MOV EAX,dword ptr [EBP + -0x20]
0040ce99  IMUL EAX,EAX,0x14
0040ce9c  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040cea2  MOV EDX,dword ptr [ECX + 0x1c]
0040cea5  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040ceab  MOV ECX,dword ptr [ECX + 0x10]
0040ceae  MOV ESI,dword ptr [EBP + -0x1c]
0040ceb1  MOV DX,word ptr [EDX + EAX*0x1 + 0x4]
0040ceb6  MOV word ptr [ECX + ESI*0x2],DX
0040ceba  MOV EAX,dword ptr [EBP + -0x20]
0040cebd  IMUL EAX,EAX,0x14
0040cec0  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040cec6  MOV EDX,dword ptr [ECX + 0x1c]
0040cec9  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040cecf  MOV ECX,dword ptr [ECX + 0x10]
0040ced2  MOV ESI,dword ptr [EBP + -0x1c]
0040ced5  MOV DX,word ptr [EDX + EAX*0x1 + 0x8]
0040ceda  MOV word ptr [ECX + ESI*0x2 + 0x2],DX
0040cedf  MOV EAX,dword ptr [EBP + -0x20]
0040cee2  IMUL EAX,EAX,0x14
0040cee5  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040ceeb  MOV EDX,dword ptr [ECX + 0x1c]
0040ceee  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040cef4  MOV ECX,dword ptr [ECX + 0x10]
0040cef7  MOV ESI,dword ptr [EBP + -0x1c]
0040cefa  MOV DX,word ptr [EDX + EAX*0x1 + 0xc]
0040ceff  MOV word ptr [ECX + ESI*0x2 + 0x4],DX
0040cf04  MOV EAX,dword ptr [EBP + -0x20]
0040cf07  IMUL EAX,EAX,0x14
0040cf0a  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040cf10  MOV EDX,dword ptr [ECX + 0x1c]
0040cf13  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040cf19  MOV ECX,dword ptr [ECX + 0x10]
0040cf1c  MOV ESI,dword ptr [EBP + -0x1c]
0040cf1f  MOV DX,word ptr [EDX + EAX*0x1 + 0x4]
0040cf24  MOV word ptr [ECX + ESI*0x2 + 0x6],DX
0040cf29  MOV EAX,dword ptr [EBP + -0x20]
0040cf2c  IMUL EAX,EAX,0x14
0040cf2f  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040cf35  MOV EDX,dword ptr [ECX + 0x1c]
0040cf38  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040cf3e  MOV ECX,dword ptr [ECX + 0x10]
0040cf41  MOV ESI,dword ptr [EBP + -0x1c]
0040cf44  MOV DX,word ptr [EDX + EAX*0x1 + 0xc]
0040cf49  MOV word ptr [ECX + ESI*0x2 + 0x8],DX
0040cf4e  MOV EAX,dword ptr [EBP + -0x20]
0040cf51  IMUL EAX,EAX,0x14
0040cf54  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040cf5a  MOV EDX,dword ptr [ECX + 0x1c]
0040cf5d  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040cf63  MOV ECX,dword ptr [ECX + 0x10]
0040cf66  MOV ESI,dword ptr [EBP + -0x1c]
0040cf69  MOV DX,word ptr [EDX + EAX*0x1 + 0x10]
0040cf6e  MOV word ptr [ECX + ESI*0x2 + 0xa],DX
0040cf73  MOV EAX,dword ptr [EBP + -0x20]
0040cf76  MOV ECX,dword ptr [EBP + EAX*0x4 + 0xffffe0a0]
0040cf7d  IMUL ECX,ECX,0x148
0040cf83  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040cf89  MOV EAX,dword ptr [EDX + 0x18]
0040cf8c  MOV ECX,dword ptr [EAX + ECX*0x1 + 0x144]
0040cf93  ADD ECX,0x6
0040cf96  MOV EDX,dword ptr [EBP + -0x20]
0040cf99  MOV EAX,dword ptr [EBP + EDX*0x4 + 0xffffe0a0]
0040cfa0  IMUL EAX,EAX,0x148
0040cfa6  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040cfac  MOV EDX,dword ptr [EDX + 0x18]
0040cfaf  MOV dword ptr [EDX + EAX*0x1 + 0x144],ECX
0040cfb6  JMP 0x0040cc4f
0040cfbb  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040cfc1  MOV ECX,dword ptr [EAX + 0x1c]
0040cfc4  MOV dword ptr [EBP + 0xffffdf50],ECX
0040cfca  MOV EDX,dword ptr [EBP + 0xffffdf50]
0040cfd0  PUSH EDX
0040cfd1  CALL 0x00433370
0040cfd6  ADD ESP,0x4
0040cfd9  MOV EAX,dword ptr [EBP + 0xffffdf98]
0040cfdf  PUSH EAX
0040cfe0  PUSH 0x100
0040cfe5  LEA ECX,[EBP + 0xffffdfa0]
0040cfeb  PUSH ECX
0040cfec  CALL 0x00434e50
0040cff1  ADD ESP,0xc
0040cff4  MOV EDX,dword ptr [EBP + 0xffffdf98]
0040cffa  PUSH EDX
0040cffb  PUSH 0x100
0040d000  LEA EAX,[EBP + 0xffffdfa0]
0040d006  PUSH EAX
0040d007  CALL 0x00434e50
0040d00c  ADD ESP,0xc
0040d00f  MOV dword ptr [EBP + -0x20],0x0
0040d016  JMP 0x0040d021
0040d018  MOV ECX,dword ptr [EBP + -0x20]
0040d01b  ADD ECX,0x1
0040d01e  MOV dword ptr [EBP + -0x20],ECX
0040d021  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040d027  MOV EAX,dword ptr [EBP + -0x20]
0040d02a  CMP EAX,dword ptr [EDX + 0x14]
0040d02d  JNC 0x0040d2c1
0040d033  MOV ECX,dword ptr [EBP + -0x20]
0040d036  IMUL ECX,ECX,0x148
0040d03c  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040d042  MOV EAX,dword ptr [EDX + 0x18]
0040d045  LEA ECX,[EAX + ECX*0x1 + 0xc]
0040d049  PUSH ECX
0040d04a  MOV EDX,dword ptr [EBP + -0x20]
0040d04d  IMUL EDX,EDX,0x148
0040d053  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040d059  MOV ECX,dword ptr [EAX + 0x18]
0040d05c  LEA EDX,[ECX + EDX*0x1 + 0x8]
0040d060  PUSH EDX
0040d061  MOV EAX,dword ptr [EBP + -0x20]
0040d064  IMUL EAX,EAX,0x148
0040d06a  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040d070  MOV EDX,dword ptr [ECX + 0x18]
0040d073  LEA EAX,[EDX + EAX*0x1 + 0x4]
0040d077  PUSH EAX
0040d078  MOV ECX,dword ptr [EBP + -0x20]
0040d07b  IMUL ECX,ECX,0x148
0040d081  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040d087  MOV EAX,dword ptr [EDX + 0x18]
0040d08a  ADD EAX,ECX
0040d08c  PUSH EAX
0040d08d  PUSH 0x45357c {'   %f;%f;%f;%f;;'}
0040d092  MOV ECX,dword ptr [EBP + 0xffffdf98]
0040d098  PUSH ECX
0040d099  CALL 0x00434dc0
0040d09e  ADD ESP,0x18
0040d0a1  MOV EDX,dword ptr [EBP + -0x20]
0040d0a4  IMUL EDX,EDX,0x148
0040d0aa  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040d0b0  MOV ECX,dword ptr [EAX + 0x18]
0040d0b3  ADD ECX,EDX
0040d0b5  MOV EDX,dword ptr [EBP + -0x20]
0040d0b8  IMUL EDX,EDX,0x148
0040d0be  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040d0c4  MOV EAX,dword ptr [EAX + 0x18]
0040d0c7  LEA EDX,[EAX + EDX*0x1 + 0x10]
0040d0cb  MOV EAX,dword ptr [ECX]
0040d0cd  MOV dword ptr [EDX],EAX
0040d0cf  MOV EAX,dword ptr [ECX + 0x4]
0040d0d2  MOV dword ptr [EDX + 0x4],EAX
0040d0d5  MOV EAX,dword ptr [ECX + 0x8]
0040d0d8  MOV dword ptr [EDX + 0x8],EAX
0040d0db  MOV ECX,dword ptr [ECX + 0xc]
0040d0de  MOV dword ptr [EDX + 0xc],ECX
0040d0e1  MOV EDX,dword ptr [EBP + -0x20]
0040d0e4  IMUL EDX,EDX,0x148
0040d0ea  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040d0f0  MOV ECX,dword ptr [EAX + 0x18]
0040d0f3  LEA EDX,[ECX + EDX*0x1 + 0x40]
0040d0f7  PUSH EDX
0040d0f8  PUSH 0x453590 {'   %f;'}
0040d0fd  MOV EAX,dword ptr [EBP + 0xffffdf98]
0040d103  PUSH EAX
0040d104  CALL 0x00434dc0
0040d109  ADD ESP,0xc
0040d10c  MOV ECX,dword ptr [EBP + -0x20]
0040d10f  IMUL ECX,ECX,0x148
0040d115  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040d11b  MOV EAX,dword ptr [EDX + 0x18]
0040d11e  LEA ECX,[EAX + ECX*0x1 + 0x28]
0040d122  PUSH ECX
0040d123  MOV EDX,dword ptr [EBP + -0x20]
0040d126  IMUL EDX,EDX,0x148
0040d12c  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040d132  MOV ECX,dword ptr [EAX + 0x18]
0040d135  LEA EDX,[ECX + EDX*0x1 + 0x24]
0040d139  PUSH EDX
0040d13a  MOV EAX,dword ptr [EBP + -0x20]
0040d13d  IMUL EAX,EAX,0x148
0040d143  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040d149  MOV EDX,dword ptr [ECX + 0x18]
0040d14c  LEA EAX,[EDX + EAX*0x1 + 0x20]
0040d150  PUSH EAX
0040d151  PUSH 0x453598 {'   %f;%f;%f;;'}
0040d156  MOV ECX,dword ptr [EBP + 0xffffdf98]
0040d15c  PUSH ECX
0040d15d  CALL 0x00434dc0
0040d162  ADD ESP,0x14
0040d165  MOV EDX,dword ptr [EBP + -0x20]
0040d168  IMUL EDX,EDX,0x148
0040d16e  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040d174  MOV ECX,dword ptr [EAX + 0x18]
0040d177  LEA EDX,[ECX + EDX*0x1 + 0x38]
0040d17b  PUSH EDX
0040d17c  MOV EAX,dword ptr [EBP + -0x20]
0040d17f  IMUL EAX,EAX,0x148
0040d185  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040d18b  MOV EDX,dword ptr [ECX + 0x18]
0040d18e  LEA EAX,[EDX + EAX*0x1 + 0x34]
0040d192  PUSH EAX
0040d193  MOV ECX,dword ptr [EBP + -0x20]
0040d196  IMUL ECX,ECX,0x148
0040d19c  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040d1a2  MOV EAX,dword ptr [EDX + 0x18]
0040d1a5  LEA ECX,[EAX + ECX*0x1 + 0x30]
0040d1a9  PUSH ECX
0040d1aa  PUSH 0x4535a8 {'   %f;%f;%f;;'}
0040d1af  MOV EDX,dword ptr [EBP + 0xffffdf98]
0040d1b5  PUSH EDX
0040d1b6  CALL 0x00434dc0
0040d1bb  ADD ESP,0x14
0040d1be  MOV EAX,dword ptr [EBP + 0xffffdf98]
0040d1c4  PUSH EAX
0040d1c5  PUSH 0x100
0040d1ca  LEA ECX,[EBP + 0xffffdfa0]
0040d1d0  PUSH ECX
0040d1d1  CALL 0x00434e50
0040d1d6  ADD ESP,0xc
0040d1d9  LEA EDX,[EBP + 0xffffdfa0]
0040d1df  PUSH EDX
0040d1e0  PUSH 0x4535b8 {'%s'}
0040d1e5  MOV EAX,dword ptr [EBP + 0xffffdf98]
0040d1eb  PUSH EAX
0040d1ec  CALL 0x00434dc0
0040d1f1  ADD ESP,0xc
0040d1f4  MOV ECX,dword ptr [EBP + 0xffffdf98]
0040d1fa  PUSH ECX
0040d1fb  PUSH 0x100
0040d200  LEA EDX,[EBP + 0xffffdfa0]
0040d206  PUSH EDX
0040d207  CALL 0x00434e50
0040d20c  ADD ESP,0xc
0040d20f  LEA EAX,[EBP + 0xffffdfa0]
0040d215  PUSH EAX
0040d216  PUSH 0x4535bc {'    %*c%[^"]'}
0040d21b  MOV ECX,dword ptr [EBP + 0xffffdf98]
0040d221  PUSH ECX
0040d222  CALL 0x00434dc0
0040d227  ADD ESP,0xc
0040d22a  LEA EDX,[EBP + 0xffffdfa0]
0040d230  PUSH EDX
0040d231  MOV EAX,dword ptr [EBP + -0x20]
0040d234  IMUL EAX,EAX,0x148
0040d23a  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040d240  MOV EDX,dword ptr [ECX + 0x18]
0040d243  LEA EAX,[EDX + EAX*0x1 + 0x44]
0040d247  PUSH EAX
0040d248  CALL 0x00434a40
0040d24d  ADD ESP,0x8
0040d250  MOV ECX,dword ptr [EBP + 0xffffdf98]
0040d256  PUSH ECX
0040d257  PUSH 0x100
0040d25c  LEA EDX,[EBP + 0xffffdfa0]
0040d262  PUSH EDX
0040d263  CALL 0x00434e50
0040d268  ADD ESP,0xc
0040d26b  MOV EAX,dword ptr [EBP + 0xffffdf98]
0040d271  PUSH EAX
0040d272  PUSH 0x100
0040d277  LEA ECX,[EBP + 0xffffdfa0]
0040d27d  PUSH ECX
0040d27e  CALL 0x00434e50
0040d283  ADD ESP,0xc
0040d286  MOV EDX,dword ptr [EBP + 0xffffdf98]
0040d28c  PUSH EDX
0040d28d  PUSH 0x100
0040d292  LEA EAX,[EBP + 0xffffdfa0]
0040d298  PUSH EAX
0040d299  CALL 0x00434e50
0040d29e  ADD ESP,0xc
0040d2a1  MOV ECX,dword ptr [EBP + 0xffffdf98]
0040d2a7  PUSH ECX
0040d2a8  PUSH 0x100
0040d2ad  LEA EDX,[EBP + 0xffffdfa0]
0040d2b3  PUSH EDX
0040d2b4  CALL 0x00434e50
0040d2b9  ADD ESP,0xc
0040d2bc  JMP 0x0040d018
0040d2c1  MOV EAX,dword ptr [EBP + 0xffffdf98]
0040d2c7  PUSH EAX
0040d2c8  PUSH 0x100
0040d2cd  LEA ECX,[EBP + 0xffffdfa0]
0040d2d3  PUSH ECX
0040d2d4  CALL 0x00434e50
0040d2d9  ADD ESP,0xc
0040d2dc  MOV EDX,dword ptr [EBP + 0xffffdf98]
0040d2e2  PUSH EDX
0040d2e3  PUSH 0x100
0040d2e8  LEA EAX,[EBP + 0xffffdfa0]
0040d2ee  PUSH EAX
0040d2ef  CALL 0x00434e50
0040d2f4  ADD ESP,0xc
0040d2f7  MOV dword ptr [EBP + -0x20],0x0
0040d2fe  JMP 0x0040d309
0040d300  MOV ECX,dword ptr [EBP + -0x20]
0040d303  ADD ECX,0x1
0040d306  MOV dword ptr [EBP + -0x20],ECX
0040d309  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040d30f  MOV EAX,dword ptr [EDX + 0x4]
0040d312  SUB EAX,0x1
0040d315  CMP dword ptr [EBP + -0x20],EAX
0040d318  JNC 0x0040d358
0040d31a  MOV ECX,dword ptr [EBP + -0x20]
0040d31d  SHL ECX,0x5
0040d320  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040d326  MOV EAX,dword ptr [EDX + 0x8]
0040d329  LEA ECX,[EAX + ECX*0x1 + 0x1c]
0040d32d  PUSH ECX
0040d32e  MOV EDX,dword ptr [EBP + -0x20]
0040d331  SHL EDX,0x5
0040d334  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040d33a  MOV ECX,dword ptr [EAX + 0x8]
0040d33d  LEA EDX,[ECX + EDX*0x1 + 0x18]
0040d341  PUSH EDX
0040d342  PUSH 0x4535cc {'  %f;%f;'}
0040d347  MOV EAX,dword ptr [EBP + 0xffffdf98]
0040d34d  PUSH EAX
0040d34e  CALL 0x00434dc0
0040d353  ADD ESP,0x10
0040d356  JMP 0x0040d300
0040d358  MOV ECX,dword ptr [EBP + -0x20]
0040d35b  SHL ECX,0x5
0040d35e  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040d364  MOV EAX,dword ptr [EDX + 0x8]
0040d367  LEA ECX,[EAX + ECX*0x1 + 0x1c]
0040d36b  PUSH ECX
0040d36c  MOV EDX,dword ptr [EBP + -0x20]
0040d36f  SHL EDX,0x5
0040d372  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040d378  MOV ECX,dword ptr [EAX + 0x8]
0040d37b  LEA EDX,[ECX + EDX*0x1 + 0x18]
0040d37f  PUSH EDX
0040d380  PUSH 0x4535d8 {'  %f;%f;'}
0040d385  MOV EAX,dword ptr [EBP + 0xffffdf98]
0040d38b  PUSH EAX
0040d38c  CALL 0x00434dc0
0040d391  ADD ESP,0x10
0040d394  MOV ECX,dword ptr [EBP + 0xffffdf98]
0040d39a  PUSH ECX
0040d39b  CALL 0x00433e80
0040d3a0  ADD ESP,0x4
0040d3a3  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040d3a9  MOV EAX,dword ptr [EDX + 0xc]
0040d3ac  MOV dword ptr [EBP + -0x18],EAX
0040d3af  MOV ECX,dword ptr [EBP + -0x18]
0040d3b2  IMUL ECX,ECX,0xc
0040d3b5  PUSH ECX
0040d3b6  CALL 0x00434250
0040d3bb  ADD ESP,0x4
0040d3be  MOV dword ptr [EBP + 0xffffdf4c],EAX
0040d3c4  MOV dword ptr [EBP + -0x4],0x2
0040d3cb  CMP dword ptr [EBP + 0xffffdf4c],0x0
0040d3d2  JZ 0x0040d3f9
0040d3d4  PUSH 0x40130c
0040d3d9  MOV EDX,dword ptr [EBP + -0x18]
0040d3dc  PUSH EDX
0040d3dd  PUSH 0xc
0040d3df  MOV EAX,dword ptr [EBP + 0xffffdf4c]
0040d3e5  PUSH EAX
0040d3e6  CALL 0x00401294
0040d3eb  MOV ECX,dword ptr [EBP + 0xffffdf4c]
0040d3f1  MOV dword ptr [EBP + 0xffffdef8],ECX
0040d3f7  JMP 0x0040d403
0040d3f9  MOV dword ptr [EBP + 0xffffdef8],0x0
0040d403  MOV EDX,dword ptr [EBP + 0xffffdef8]
0040d409  MOV dword ptr [EBP + 0xffffdf48],EDX
0040d40f  MOV dword ptr [EBP + -0x4],0xffffffff
0040d416  MOV EAX,dword ptr [EBP + 0xffffdf48]
0040d41c  MOV dword ptr [EBP + 0xffffdf9c],EAX
0040d422  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040d428  MOV EDX,dword ptr [ECX + 0xc]
0040d42b  IMUL EDX,EDX,0xc
0040d42e  PUSH EDX
0040d42f  PUSH 0x0
0040d431  MOV EAX,dword ptr [EBP + 0xffffdf9c]
0040d437  PUSH EAX
0040d438  CALL 0x00433440
0040d43d  ADD ESP,0xc
0040d440  MOV dword ptr [EBP + -0x20],0x0
0040d447  JMP 0x0040d452
0040d449  MOV ECX,dword ptr [EBP + -0x20]
0040d44c  ADD ECX,0x3
0040d44f  MOV dword ptr [EBP + -0x20],ECX
0040d452  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040d458  MOV EAX,dword ptr [EBP + -0x20]
0040d45b  CMP EAX,dword ptr [EDX + 0xc]
0040d45e  JNC 0x0040d5d4
0040d464  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040d46a  MOV EDX,dword ptr [ECX + 0x10]
0040d46d  MOV EAX,dword ptr [EBP + -0x20]
0040d470  MOV CX,word ptr [EDX + EAX*0x2]
0040d474  MOV word ptr [EBP + 0xffffdf80],CX
0040d47b  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040d481  MOV EAX,dword ptr [EDX + 0x10]
0040d484  MOV ECX,dword ptr [EBP + -0x20]
0040d487  MOV DX,word ptr [EAX + ECX*0x2 + 0x2]
0040d48c  MOV word ptr [EBP + 0xffffdf78],DX
0040d493  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040d499  MOV ECX,dword ptr [EAX + 0x10]
0040d49c  MOV EDX,dword ptr [EBP + -0x20]
0040d49f  MOV AX,word ptr [ECX + EDX*0x2 + 0x4]
0040d4a4  MOV word ptr [EBP + 0xffffdf74],AX
0040d4ab  MOV ECX,dword ptr [EBP + 0xffffdf80]
0040d4b1  AND ECX,0xffff
0040d4b7  SHL ECX,0x5
0040d4ba  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040d4c0  MOV EAX,dword ptr [EDX + 0x8]
0040d4c3  ADD EAX,ECX
0040d4c5  MOV dword ptr [EBP + 0xffffdf88],EAX
0040d4cb  MOV ECX,dword ptr [EBP + 0xffffdf78]
0040d4d1  AND ECX,0xffff
0040d4d7  SHL ECX,0x5
0040d4da  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040d4e0  MOV EAX,dword ptr [EDX + 0x8]
0040d4e3  ADD EAX,ECX
0040d4e5  MOV dword ptr [EBP + 0xffffdf84],EAX
0040d4eb  MOV ECX,dword ptr [EBP + 0xffffdf74]
0040d4f1  AND ECX,0xffff
0040d4f7  SHL ECX,0x5
0040d4fa  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040d500  MOV EAX,dword ptr [EDX + 0x8]
0040d503  ADD EAX,ECX
0040d505  MOV dword ptr [EBP + 0xffffdf7c],EAX
0040d50b  MOV ECX,dword ptr [EBP + 0xffffdf84]
0040d511  PUSH ECX
0040d512  MOV EDX,dword ptr [EBP + 0xffffdf7c]
0040d518  PUSH EDX
0040d519  LEA EAX,[EBP + 0xffffdf3c]
0040d51f  PUSH EAX
0040d520  CALL 0x00401271
0040d525  ADD ESP,0xc
0040d528  PUSH EAX
0040d529  MOV ECX,dword ptr [EBP + 0xffffdf88]
0040d52f  PUSH ECX
0040d530  MOV EDX,dword ptr [EBP + 0xffffdf84]
0040d536  PUSH EDX
0040d537  LEA EAX,[EBP + 0xffffdf30]
0040d53d  PUSH EAX
0040d53e  CALL 0x00401271
0040d543  ADD ESP,0xc
0040d546  PUSH EAX
0040d547  LEA ECX,[EBP + 0xffffdf24]
0040d54d  PUSH ECX
0040d54e  CALL 0x00401307
0040d553  ADD ESP,0xc
0040d556  PUSH EAX
0040d557  LEA EDX,[EBP + 0xffffdf68]
0040d55d  PUSH EDX
0040d55e  CALL 0x00401253
0040d563  ADD ESP,0x8
0040d566  LEA EAX,[EBP + 0xffffdf68]
0040d56c  PUSH EAX
0040d56d  MOV ECX,dword ptr [EBP + 0xffffdf80]
0040d573  AND ECX,0xffff
0040d579  IMUL ECX,ECX,0xc
0040d57c  MOV EDX,dword ptr [EBP + 0xffffdf9c]
0040d582  ADD ECX,EDX
0040d584  CALL 0x00401249
0040d589  LEA EAX,[EBP + 0xffffdf68]
0040d58f  PUSH EAX
0040d590  MOV ECX,dword ptr [EBP + 0xffffdf78]
0040d596  AND ECX,0xffff
0040d59c  IMUL ECX,ECX,0xc
0040d59f  MOV EDX,dword ptr [EBP + 0xffffdf9c]
0040d5a5  ADD ECX,EDX
0040d5a7  CALL 0x00401249
0040d5ac  LEA EAX,[EBP + 0xffffdf68]
0040d5b2  PUSH EAX
0040d5b3  MOV ECX,dword ptr [EBP + 0xffffdf74]
0040d5b9  AND ECX,0xffff
0040d5bf  IMUL ECX,ECX,0xc
0040d5c2  MOV EDX,dword ptr [EBP + 0xffffdf9c]
0040d5c8  ADD ECX,EDX
0040d5ca  CALL 0x00401249
0040d5cf  JMP 0x0040d449
0040d5d4  MOV dword ptr [EBP + -0x20],0x0
0040d5db  JMP 0x0040d5e6
0040d5dd  MOV EAX,dword ptr [EBP + -0x20]
0040d5e0  ADD EAX,0x1
0040d5e3  MOV dword ptr [EBP + -0x20],EAX
0040d5e6  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040d5ec  MOV EDX,dword ptr [EBP + -0x20]
0040d5ef  CMP EDX,dword ptr [ECX + 0x4]
0040d5f2  JNC 0x0040d89b
0040d5f8  MOV dword ptr [EBP + 0xffffdf64],0x0
0040d602  JMP 0x0040d613
0040d604  MOV EAX,dword ptr [EBP + 0xffffdf64]
0040d60a  ADD EAX,0x1
0040d60d  MOV dword ptr [EBP + 0xffffdf64],EAX
0040d613  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040d619  MOV EDX,dword ptr [EBP + 0xffffdf64]
0040d61f  CMP EDX,dword ptr [ECX + 0x4]
0040d622  JNC 0x0040d896
0040d628  MOV EAX,dword ptr [EBP + -0x20]
0040d62b  SHL EAX,0x5
0040d62e  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040d634  MOV EDX,dword ptr [ECX + 0x8]
0040d637  MOV ECX,dword ptr [EBP + 0xffffdf64]
0040d63d  SHL ECX,0x5
0040d640  MOV ESI,dword ptr [EBP + 0xffffdf04]
0040d646  MOV ESI,dword ptr [ESI + 0x8]
0040d649  FLD float ptr [EDX + EAX*0x1]
0040d64c  FSUB float ptr [ESI + ECX*0x1]
0040d64f  FCOMP float ptr [0x0044e0c0] {1e-06}
0040d655  FNSTSW AX
0040d657  TEST AH,0x1
0040d65a  JZ 0x0040d668
0040d65c  MOV dword ptr [EBP + 0xffffdef4],0x1
0040d666  JMP 0x0040d672
0040d668  MOV dword ptr [EBP + 0xffffdef4],0x0
0040d672  MOV EDX,dword ptr [EBP + -0x20]
0040d675  SHL EDX,0x5
0040d678  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040d67e  MOV ECX,dword ptr [EAX + 0x8]
0040d681  MOV EAX,dword ptr [EBP + 0xffffdf64]
0040d687  SHL EAX,0x5
0040d68a  MOV ESI,dword ptr [EBP + 0xffffdf04]
0040d690  MOV ESI,dword ptr [ESI + 0x8]
0040d693  FLD float ptr [ECX + EDX*0x1]
0040d696  FSUB float ptr [ESI + EAX*0x1]
0040d699  FCOMP float ptr [0x0044e0c4] {-1e-06}
0040d69f  FNSTSW AX
0040d6a1  TEST AH,0x41
0040d6a4  JNZ 0x0040d6b2
0040d6a6  MOV dword ptr [EBP + 0xffffdef0],0x1
0040d6b0  JMP 0x0040d6bc
0040d6b2  MOV dword ptr [EBP + 0xffffdef0],0x0
0040d6bc  MOV ECX,dword ptr [EBP + -0x20]
0040d6bf  SHL ECX,0x5
0040d6c2  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040d6c8  MOV EAX,dword ptr [EDX + 0x8]
0040d6cb  MOV EDX,dword ptr [EBP + 0xffffdf64]
0040d6d1  SHL EDX,0x5
0040d6d4  MOV ESI,dword ptr [EBP + 0xffffdf04]
0040d6da  MOV ESI,dword ptr [ESI + 0x8]
0040d6dd  FLD float ptr [EAX + ECX*0x1 + 0x4]
0040d6e1  FSUB float ptr [ESI + EDX*0x1 + 0x4]
0040d6e5  FCOMP float ptr [0x0044e0c0] {1e-06}
0040d6eb  FNSTSW AX
0040d6ed  TEST AH,0x1
0040d6f0  JZ 0x0040d6fe
0040d6f2  MOV dword ptr [EBP + 0xffffdeec],0x1
0040d6fc  JMP 0x0040d708
0040d6fe  MOV dword ptr [EBP + 0xffffdeec],0x0
0040d708  MOV EAX,dword ptr [EBP + -0x20]
0040d70b  SHL EAX,0x5
0040d70e  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040d714  MOV EDX,dword ptr [ECX + 0x8]
0040d717  MOV ECX,dword ptr [EBP + 0xffffdf64]
0040d71d  SHL ECX,0x5
0040d720  MOV ESI,dword ptr [EBP + 0xffffdf04]
0040d726  MOV ESI,dword ptr [ESI + 0x8]
0040d729  FLD float ptr [EDX + EAX*0x1 + 0x4]
0040d72d  FSUB float ptr [ESI + ECX*0x1 + 0x4]
0040d731  FCOMP float ptr [0x0044e0c4] {-1e-06}
0040d737  FNSTSW AX
0040d739  TEST AH,0x41
0040d73c  JNZ 0x0040d74a
0040d73e  MOV dword ptr [EBP + 0xffffdee8],0x1
0040d748  JMP 0x0040d754
0040d74a  MOV dword ptr [EBP + 0xffffdee8],0x0
0040d754  MOV EDX,dword ptr [EBP + -0x20]
0040d757  SHL EDX,0x5
0040d75a  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040d760  MOV ECX,dword ptr [EAX + 0x8]
0040d763  MOV EAX,dword ptr [EBP + 0xffffdf64]
0040d769  SHL EAX,0x5
0040d76c  MOV ESI,dword ptr [EBP + 0xffffdf04]
0040d772  MOV ESI,dword ptr [ESI + 0x8]
0040d775  FLD float ptr [ECX + EDX*0x1 + 0x8]
0040d779  FSUB float ptr [ESI + EAX*0x1 + 0x8]
0040d77d  FCOMP float ptr [0x0044e0c0] {1e-06}
0040d783  FNSTSW AX
0040d785  TEST AH,0x1
0040d788  JZ 0x0040d796
0040d78a  MOV dword ptr [EBP + 0xffffdee4],0x1
0040d794  JMP 0x0040d7a0
0040d796  MOV dword ptr [EBP + 0xffffdee4],0x0
0040d7a0  MOV ECX,dword ptr [EBP + -0x20]
0040d7a3  SHL ECX,0x5
0040d7a6  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040d7ac  MOV EAX,dword ptr [EDX + 0x8]
0040d7af  MOV EDX,dword ptr [EBP + 0xffffdf64]
0040d7b5  SHL EDX,0x5
0040d7b8  MOV ESI,dword ptr [EBP + 0xffffdf04]
0040d7be  MOV ESI,dword ptr [ESI + 0x8]
0040d7c1  FLD float ptr [EAX + ECX*0x1 + 0x8]
0040d7c5  FSUB float ptr [ESI + EDX*0x1 + 0x8]
0040d7c9  FCOMP float ptr [0x0044e0c4] {-1e-06}
0040d7cf  FNSTSW AX
0040d7d1  TEST AH,0x41
0040d7d4  JNZ 0x0040d7e2
0040d7d6  MOV dword ptr [EBP + 0xffffdee0],0x1
0040d7e0  JMP 0x0040d7ec
0040d7e2  MOV dword ptr [EBP + 0xffffdee0],0x0
0040d7ec  MOV EAX,dword ptr [EBP + 0xffffdef4]
0040d7f2  AND EAX,dword ptr [EBP + 0xffffdef0]
0040d7f8  AND EAX,dword ptr [EBP + 0xffffdeec]
0040d7fe  AND EAX,dword ptr [EBP + 0xffffdee8]
0040d804  AND EAX,dword ptr [EBP + 0xffffdee4]
0040d80a  AND EAX,dword ptr [EBP + 0xffffdee0]
0040d810  TEST EAX,EAX
0040d812  JZ 0x0040d891
0040d814  MOV ECX,dword ptr [EBP + 0xffffdf64]
0040d81a  IMUL ECX,ECX,0xc
0040d81d  MOV EDX,dword ptr [EBP + 0xffffdf9c]
0040d823  ADD EDX,ECX
0040d825  PUSH EDX
0040d826  MOV EAX,dword ptr [EBP + -0x20]
0040d829  IMUL EAX,EAX,0xc
0040d82c  MOV ECX,dword ptr [EBP + 0xffffdf9c]
0040d832  ADD ECX,EAX
0040d834  PUSH ECX
0040d835  LEA EDX,[EBP + 0xffffdf18]
0040d83b  PUSH EDX
0040d83c  CALL 0x00401393
0040d841  ADD ESP,0xc
0040d844  MOV ECX,dword ptr [EBP + -0x20]
0040d847  IMUL ECX,ECX,0xc
0040d84a  MOV EDX,dword ptr [EBP + 0xffffdf9c]
0040d850  ADD EDX,ECX
0040d852  MOV ECX,dword ptr [EAX]
0040d854  MOV dword ptr [EDX],ECX
0040d856  MOV ECX,dword ptr [EAX + 0x4]
0040d859  MOV dword ptr [EDX + 0x4],ECX
0040d85c  MOV EAX,dword ptr [EAX + 0x8]
0040d85f  MOV dword ptr [EDX + 0x8],EAX
0040d862  MOV ECX,dword ptr [EBP + -0x20]
0040d865  IMUL ECX,ECX,0xc
0040d868  MOV EDX,dword ptr [EBP + 0xffffdf9c]
0040d86e  ADD EDX,ECX
0040d870  MOV EAX,dword ptr [EBP + 0xffffdf64]
0040d876  IMUL EAX,EAX,0xc
0040d879  MOV ECX,dword ptr [EBP + 0xffffdf9c]
0040d87f  ADD ECX,EAX
0040d881  MOV EAX,dword ptr [EDX]
0040d883  MOV dword ptr [ECX],EAX
0040d885  MOV EAX,dword ptr [EDX + 0x4]
0040d888  MOV dword ptr [ECX + 0x4],EAX
0040d88b  MOV EDX,dword ptr [EDX + 0x8]
0040d88e  MOV dword ptr [ECX + 0x8],EDX
0040d891  JMP 0x0040d604
0040d896  JMP 0x0040d5dd
0040d89b  MOV dword ptr [EBP + -0x20],0x0
0040d8a2  JMP 0x0040d8ad
0040d8a4  MOV EAX,dword ptr [EBP + -0x20]
0040d8a7  ADD EAX,0x1
0040d8aa  MOV dword ptr [EBP + -0x20],EAX
0040d8ad  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040d8b3  MOV EDX,dword ptr [EBP + -0x20]
0040d8b6  CMP EDX,dword ptr [ECX + 0x4]
0040d8b9  JNC 0x0040d968
0040d8bf  MOV EAX,dword ptr [EBP + -0x20]
0040d8c2  IMUL EAX,EAX,0xc
0040d8c5  MOV ECX,dword ptr [EBP + 0xffffdf9c]
0040d8cb  ADD ECX,EAX
0040d8cd  PUSH ECX
0040d8ce  LEA EDX,[EBP + 0xffffdf0c]
0040d8d4  PUSH EDX
0040d8d5  CALL 0x00401253
0040d8da  ADD ESP,0x8
0040d8dd  MOV ECX,dword ptr [EBP + -0x20]
0040d8e0  IMUL ECX,ECX,0xc
0040d8e3  MOV EDX,dword ptr [EBP + 0xffffdf9c]
0040d8e9  ADD EDX,ECX
0040d8eb  MOV ECX,dword ptr [EAX]
0040d8ed  MOV dword ptr [EDX],ECX
0040d8ef  MOV ECX,dword ptr [EAX + 0x4]
0040d8f2  MOV dword ptr [EDX + 0x4],ECX
0040d8f5  MOV EAX,dword ptr [EAX + 0x8]
0040d8f8  MOV dword ptr [EDX + 0x8],EAX
0040d8fb  MOV ECX,dword ptr [EBP + -0x20]
0040d8fe  IMUL ECX,ECX,0xc
0040d901  MOV EDX,dword ptr [EBP + -0x20]
0040d904  SHL EDX,0x5
0040d907  MOV EAX,dword ptr [EBP + 0xffffdf04]
0040d90d  MOV EAX,dword ptr [EAX + 0x8]
0040d910  MOV ESI,dword ptr [EBP + 0xffffdf9c]
0040d916  MOV ECX,dword ptr [ESI + ECX*0x1]
0040d919  MOV dword ptr [EAX + EDX*0x1 + 0xc],ECX
0040d91d  MOV EDX,dword ptr [EBP + -0x20]
0040d920  IMUL EDX,EDX,0xc
0040d923  MOV EAX,dword ptr [EBP + -0x20]
0040d926  SHL EAX,0x5
0040d929  MOV ECX,dword ptr [EBP + 0xffffdf04]
0040d92f  MOV ECX,dword ptr [ECX + 0x8]
0040d932  MOV ESI,dword ptr [EBP + 0xffffdf9c]
0040d938  MOV EDX,dword ptr [ESI + EDX*0x1 + 0x4]
0040d93c  MOV dword ptr [ECX + EAX*0x1 + 0x10],EDX
0040d940  MOV EAX,dword ptr [EBP + -0x20]
0040d943  IMUL EAX,EAX,0xc
0040d946  MOV ECX,dword ptr [EBP + -0x20]
0040d949  SHL ECX,0x5
0040d94c  MOV EDX,dword ptr [EBP + 0xffffdf04]
0040d952  MOV EDX,dword ptr [EDX + 0x8]
0040d955  MOV ESI,dword ptr [EBP + 0xffffdf9c]
0040d95b  MOV EAX,dword ptr [ESI + EAX*0x1 + 0x8]
0040d95f  MOV dword ptr [EDX + ECX*0x1 + 0x14],EAX
0040d963  JMP 0x0040d8a4
0040d968  MOV ECX,dword ptr [EBP + 0xffffdf9c]
0040d96e  MOV dword ptr [EBP + 0xffffdf08],ECX
0040d974  MOV EDX,dword ptr [EBP + 0xffffdf08]
0040d97a  PUSH EDX
0040d97b  CALL 0x00433370
0040d980  ADD ESP,0x4
0040d983  MOV EAX,0x1
0040d988  MOV ECX,dword ptr [EBP + -0xc]
0040d98b  MOV dword ptr FS:[0x0],ECX
0040d992  POP EDI
0040d993  POP ESI
0040d994  MOV ESP,EBP
0040d996  POP EBP
0040d997  RET 0x4
