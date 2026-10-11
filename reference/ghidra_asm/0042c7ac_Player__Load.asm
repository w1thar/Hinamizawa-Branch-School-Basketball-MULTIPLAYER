0042c7ac  PUSH EBP
0042c7ad  MOV EBP,ESP
0042c7af  PUSH -0x1
0042c7b1  PUSH 0x44cd8c
0042c7b6  MOV EAX,FS:[0x0]
0042c7bc  PUSH EAX
0042c7bd  MOV dword ptr FS:[0x0],ESP
0042c7c4  SUB ESP,0x12c
0042c7ca  PUSH ESI
0042c7cb  MOV dword ptr [EBP + 0xfffffed4],ECX
0042c7d1  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042c7d7  MOV ECX,dword ptr [EBP + 0xc]
0042c7da  MOV dword ptr [EAX + 0x150],ECX
0042c7e0  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042c7e6  MOV EAX,dword ptr [EDX + 0x150]
0042c7ec  MOV dword ptr [EBP + 0xfffffed0],EAX
0042c7f2  CMP dword ptr [EBP + 0xfffffed0],0x5
0042c7f9  JA 0x0042cb3d
0042c7ff  MOV ECX,dword ptr [EBP + 0xfffffed0]
0042c805  JMP dword ptr [ECX*0x4 + 0x42cf93]
0042c80c  PUSH 0x4543d4 {'k1'}
0042c811  LEA EDX,[EBP + 0xfffffef0]
0042c817  PUSH EDX
0042c818  CALL 0x00434a40  ; sprintf
0042c81d  ADD ESP,0x8
0042c820  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042c826  MOV dword ptr [EAX + 0x168],0x41200000
0042c830  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042c836  MOV dword ptr [ECX + 0x16c],0x41700000
0042c840  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042c846  MOV dword ptr [EDX + 0x170],0x40800000
0042c850  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042c856  MOV dword ptr [EAX + 0x174],0x41000000
0042c860  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042c866  MOV dword ptr [ECX + 0x178],0x41700000
0042c870  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042c876  MOV dword ptr [EDX + 0x17c],0x41100000
0042c880  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042c886  MOV dword ptr [EAX + 0x180],0x40a9999a
0042c890  JMP 0x0042cb3d
0042c895  PUSH 0x4543d8 {'mion'}
0042c89a  LEA ECX,[EBP + 0xfffffef0]
0042c8a0  PUSH ECX
0042c8a1  CALL 0x00434a40  ; sprintf
0042c8a6  ADD ESP,0x8
0042c8a9  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042c8af  MOV dword ptr [EDX + 0x168],0x41200000
0042c8b9  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042c8bf  MOV dword ptr [EAX + 0x16c],0x41700000
0042c8c9  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042c8cf  MOV dword ptr [ECX + 0x170],0x4079999a
0042c8d9  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042c8df  MOV dword ptr [EDX + 0x174],0x40e00000
0042c8e9  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042c8ef  MOV dword ptr [EAX + 0x178],0x41600000
0042c8f9  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042c8ff  MOV dword ptr [ECX + 0x17c],0x41100000
0042c909  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042c90f  MOV dword ptr [EDX + 0x180],0x40a9999a
0042c919  JMP 0x0042cb3d
0042c91e  PUSH 0x4543e0 {'rena'}
0042c923  LEA EAX,[EBP + 0xfffffef0]
0042c929  PUSH EAX
0042c92a  CALL 0x00434a40  ; sprintf
0042c92f  ADD ESP,0x8
0042c932  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042c938  MOV dword ptr [ECX + 0x168],0x41100000
0042c942  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042c948  MOV dword ptr [EDX + 0x16c],0x41800000
0042c952  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042c958  MOV dword ptr [EAX + 0x170],0x4078f5c3
0042c962  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042c968  MOV dword ptr [ECX + 0x174],0x40c00000
0042c972  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042c978  MOV dword ptr [EDX + 0x178],0x41500000
0042c982  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042c988  MOV dword ptr [EAX + 0x17c],0x41000000
0042c992  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042c998  MOV dword ptr [ECX + 0x180],0x40a9999a
0042c9a2  JMP 0x0042cb3d
0042c9a7  PUSH 0x4543e8 {'satoko'}
0042c9ac  LEA EDX,[EBP + 0xfffffef0]
0042c9b2  PUSH EDX
0042c9b3  CALL 0x00434a40  ; sprintf
0042c9b8  ADD ESP,0x8
0042c9bb  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042c9c1  MOV dword ptr [EAX + 0x168],0x41280000
0042c9cb  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042c9d1  MOV dword ptr [ECX + 0x16c],0x41500000
0042c9db  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042c9e1  MOV dword ptr [EDX + 0x170],0x40466666
0042c9eb  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042c9f1  MOV dword ptr [EAX + 0x174],0x40a00000
0042c9fb  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042ca01  MOV dword ptr [ECX + 0x178],0x41400000
0042ca0b  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042ca11  MOV dword ptr [EDX + 0x17c],0x40800000
0042ca1b  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042ca21  MOV dword ptr [EAX + 0x180],0x4099999a
0042ca2b  JMP 0x0042cb3d
0042ca30  PUSH 0x4543f0 {'rika'}
0042ca35  LEA ECX,[EBP + 0xfffffef0]
0042ca3b  PUSH ECX
0042ca3c  CALL 0x00434a40  ; sprintf
0042ca41  ADD ESP,0x8
0042ca44  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042ca4a  MOV dword ptr [EDX + 0x168],0x41000000
0042ca54  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042ca5a  MOV dword ptr [EAX + 0x16c],0x41400000
0042ca64  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042ca6a  MOV dword ptr [ECX + 0x170],0x40533333
0042ca74  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042ca7a  MOV dword ptr [EDX + 0x174],0x40a00000
0042ca84  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042ca8a  MOV dword ptr [EAX + 0x178],0x41400000
0042ca94  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042ca9a  MOV dword ptr [ECX + 0x17c],0x41400000
0042caa4  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042caaa  MOV dword ptr [EDX + 0x180],0x4099999a
0042cab4  JMP 0x0042cb3d
0042cab9  PUSH 0x4543f8 {'sion'}
0042cabe  LEA EAX,[EBP + 0xfffffef0]
0042cac4  PUSH EAX
0042cac5  CALL 0x00434a40  ; sprintf
0042caca  ADD ESP,0x8
0042cacd  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042cad3  MOV dword ptr [ECX + 0x168],0x41100000
0042cadd  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042cae3  MOV dword ptr [EDX + 0x16c],0x41700000
0042caed  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042caf3  MOV dword ptr [EAX + 0x170],0x4079999a
0042cafd  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042cb03  MOV dword ptr [ECX + 0x174],0x40e00000
0042cb0d  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042cb13  MOV dword ptr [EDX + 0x178],0x41600000
0042cb1d  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042cb23  MOV dword ptr [EAX + 0x17c],0x41000000
0042cb2d  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042cb33  MOV dword ptr [ECX + 0x180],0x40a9999a
0042cb3d  PUSH 0x34
0042cb3f  CALL 0x00434250  ; operator_new
0042cb44  ADD ESP,0x4
0042cb47  MOV dword ptr [EBP + 0xfffffee4],EAX
0042cb4d  MOV dword ptr [EBP + -0x4],0x0
0042cb54  CMP dword ptr [EBP + 0xfffffee4],0x0
0042cb5b  JZ 0x0042cb70
0042cb5d  MOV ECX,dword ptr [EBP + 0xfffffee4]
0042cb63  CALL 0x004010b4  ; SkinModel::Ctor
0042cb68  MOV dword ptr [EBP + 0xfffffecc],EAX
0042cb6e  JMP 0x0042cb7a
0042cb70  MOV dword ptr [EBP + 0xfffffecc],0x0
0042cb7a  MOV EDX,dword ptr [EBP + 0xfffffecc]
0042cb80  MOV dword ptr [EBP + 0xfffffee0],EDX
0042cb86  MOV dword ptr [EBP + -0x4],0xffffffff
0042cb8d  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042cb93  MOV ECX,dword ptr [EBP + 0xfffffee0]
0042cb99  MOV dword ptr [EAX + 0x4],ECX
0042cb9c  LEA EDX,[EBP + 0xfffffef0]
0042cba2  PUSH EDX
0042cba3  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042cba9  MOV ECX,dword ptr [EAX + 0x4]
0042cbac  CALL 0x004011db  ; SkinModel::Load
0042cbb1  LEA ECX,[EBP + 0xfffffef0]
0042cbb7  PUSH ECX
0042cbb8  PUSH 0x454400 {'basket\\%s.tga'}
0042cbbd  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042cbc3  ADD EDX,0x50
0042cbc6  PUSH EDX
0042cbc7  CALL 0x00434a40  ; sprintf
0042cbcc  ADD ESP,0xc
0042cbcf  PUSH 0x0
0042cbd1  PUSH 0x0
0042cbd3  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042cbd9  ADD EAX,0x50
0042cbdc  PUSH EAX
0042cbdd  CALL 0x004012d5  ; D3DTextr_CreateTextureFromFile
0042cbe2  ADD ESP,0xc
0042cbe5  PUSH 0x78
0042cbe7  CALL 0x00434250  ; operator_new
0042cbec  ADD ESP,0x4
0042cbef  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042cbf5  MOV dword ptr [ECX + 0x4c],EAX
0042cbf8  PUSH 0x78
0042cbfa  PUSH 0x0
0042cbfc  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042cc02  MOV EAX,dword ptr [EDX + 0x4c]
0042cc05  PUSH EAX
0042cc06  CALL 0x00433440  ; _memset
0042cc0b  ADD ESP,0xc
0042cc0e  MOV dword ptr [EBP + -0x10],0x0
0042cc15  JMP 0x0042cc20
0042cc17  MOV ECX,dword ptr [EBP + -0x10]
0042cc1a  ADD ECX,0x1
0042cc1d  MOV dword ptr [EBP + -0x10],ECX
0042cc20  CMP dword ptr [EBP + -0x10],0xa
0042cc24  JGE 0x0042ce19
0042cc2a  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042cc30  MOV EAX,dword ptr [EDX + 0x4]
0042cc33  MOV ECX,dword ptr [EAX + 0x2c]
0042cc36  MOV dword ptr [EBP + 0xfffffeec],ECX
0042cc3c  MOV EDX,dword ptr [EBP + 0xfffffeec]
0042cc42  IMUL EDX,EDX,0x18
0042cc45  PUSH EDX
0042cc46  CALL 0x00434250  ; operator_new
0042cc4b  ADD ESP,0x4
0042cc4e  MOV dword ptr [EBP + 0xfffffedc],EAX
0042cc54  MOV dword ptr [EBP + -0x4],0x1
0042cc5b  CMP dword ptr [EBP + 0xfffffedc],0x0
0042cc62  JZ 0x0042cc8c
0042cc64  PUSH 0x4010c8
0042cc69  MOV EAX,dword ptr [EBP + 0xfffffeec]
0042cc6f  PUSH EAX
0042cc70  PUSH 0x18
0042cc72  MOV ECX,dword ptr [EBP + 0xfffffedc]
0042cc78  PUSH ECX
0042cc79  CALL 0x00401294  ; FUN_0040c3a0
0042cc7e  MOV EDX,dword ptr [EBP + 0xfffffedc]
0042cc84  MOV dword ptr [EBP + 0xfffffec8],EDX
0042cc8a  JMP 0x0042cc96
0042cc8c  MOV dword ptr [EBP + 0xfffffec8],0x0
0042cc96  MOV EAX,dword ptr [EBP + 0xfffffec8]
0042cc9c  MOV dword ptr [EBP + 0xfffffed8],EAX
0042cca2  MOV dword ptr [EBP + -0x4],0xffffffff
0042cca9  MOV ECX,dword ptr [EBP + -0x10]
0042ccac  IMUL ECX,ECX,0xc
0042ccaf  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042ccb5  MOV EAX,dword ptr [EDX + 0x4c]
0042ccb8  MOV EDX,dword ptr [EBP + 0xfffffed8]
0042ccbe  MOV dword ptr [EAX + ECX*0x1 + 0x8],EDX
0042ccc2  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042ccc8  MOV ECX,dword ptr [EAX + 0x4]
0042cccb  MOV EDX,dword ptr [ECX + 0x2c]
0042ccce  IMUL EDX,EDX,0x18
0042ccd1  PUSH EDX
0042ccd2  PUSH 0x0
0042ccd4  MOV EAX,dword ptr [EBP + -0x10]
0042ccd7  IMUL EAX,EAX,0xc
0042ccda  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042cce0  MOV EDX,dword ptr [ECX + 0x4c]
0042cce3  MOV EAX,dword ptr [EDX + EAX*0x1 + 0x8]
0042cce7  PUSH EAX
0042cce8  CALL 0x00433440  ; _memset
0042cced  ADD ESP,0xc
0042ccf0  MOV dword ptr [EBP + 0xfffffee8],0x0
0042ccfa  JMP 0x0042cd0b
0042ccfc  MOV ECX,dword ptr [EBP + 0xfffffee8]
0042cd02  ADD ECX,0x1
0042cd05  MOV dword ptr [EBP + 0xfffffee8],ECX
0042cd0b  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042cd11  MOV EAX,dword ptr [EDX + 0x4]
0042cd14  MOV ECX,dword ptr [EBP + 0xfffffee8]
0042cd1a  CMP ECX,dword ptr [EAX + 0x2c]
0042cd1d  JGE 0x0042cdc4
0042cd23  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042cd29  MOV EAX,dword ptr [EDX + 0x4]
0042cd2c  MOV ECX,dword ptr [EBP + 0xfffffee8]
0042cd32  IMUL ECX,ECX,0xa8
0042cd38  MOV EDX,dword ptr [EAX + 0x20]
0042cd3b  LEA EAX,[EDX + ECX*0x1 + 0x90]
0042cd42  MOV ECX,dword ptr [EBP + -0x10]
0042cd45  IMUL ECX,ECX,0xc
0042cd48  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042cd4e  MOV EDX,dword ptr [EDX + 0x4c]
0042cd51  MOV ESI,dword ptr [EBP + 0xfffffee8]
0042cd57  IMUL ESI,ESI,0x18
0042cd5a  MOV ECX,dword ptr [EDX + ECX*0x1 + 0x8]
0042cd5e  ADD ECX,ESI
0042cd60  MOV EDX,dword ptr [EAX]
0042cd62  MOV dword ptr [ECX],EDX
0042cd64  MOV EDX,dword ptr [EAX + 0x4]
0042cd67  MOV dword ptr [ECX + 0x4],EDX
0042cd6a  MOV EAX,dword ptr [EAX + 0x8]
0042cd6d  MOV dword ptr [ECX + 0x8],EAX
0042cd70  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042cd76  MOV EDX,dword ptr [ECX + 0x4]
0042cd79  MOV EAX,dword ptr [EBP + 0xfffffee8]
0042cd7f  IMUL EAX,EAX,0xa8
0042cd85  MOV ECX,dword ptr [EDX + 0x20]
0042cd88  LEA EDX,[ECX + EAX*0x1 + 0x9c]
0042cd8f  MOV EAX,dword ptr [EBP + -0x10]
0042cd92  IMUL EAX,EAX,0xc
0042cd95  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042cd9b  MOV ECX,dword ptr [ECX + 0x4c]
0042cd9e  MOV ESI,dword ptr [EBP + 0xfffffee8]
0042cda4  IMUL ESI,ESI,0x18
0042cda7  MOV EAX,dword ptr [ECX + EAX*0x1 + 0x8]
0042cdab  LEA ECX,[EAX + ESI*0x1 + 0xc]
0042cdaf  MOV EAX,dword ptr [EDX]
0042cdb1  MOV dword ptr [ECX],EAX
0042cdb3  MOV EAX,dword ptr [EDX + 0x4]
0042cdb6  MOV dword ptr [ECX + 0x4],EAX
0042cdb9  MOV EDX,dword ptr [EDX + 0x8]
0042cdbc  MOV dword ptr [ECX + 0x8],EDX
0042cdbf  JMP 0x0042ccfc
0042cdc4  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042cdca  ADD EAX,0x158
0042cdcf  MOV ECX,dword ptr [EBP + -0x10]
0042cdd2  IMUL ECX,ECX,0xc
0042cdd5  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042cddb  MOV EDX,dword ptr [EDX + 0x4c]
0042cdde  MOV ECX,dword ptr [EDX + ECX*0x1 + 0x8]
0042cde2  MOV EDX,dword ptr [EAX]
0042cde4  MOV dword ptr [ECX],EDX
0042cde6  MOV EDX,dword ptr [EAX + 0x4]
0042cde9  MOV dword ptr [ECX + 0x4],EDX
0042cdec  MOV EAX,dword ptr [EAX + 0x8]
0042cdef  MOV dword ptr [ECX + 0x8],EAX
0042cdf2  MOV ECX,dword ptr [EBP + -0x10]
0042cdf5  IMUL ECX,ECX,0xc
0042cdf8  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042cdfe  MOV EAX,dword ptr [EDX + 0x4c]
0042ce01  MOV ECX,dword ptr [EAX + ECX*0x1 + 0x8]
0042ce05  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042ce0b  MOV EAX,dword ptr [EDX + 0x164]
0042ce11  MOV dword ptr [ECX + 0x10],EAX
0042ce14  JMP 0x0042cc17
0042ce19  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042ce1f  ADD ECX,0x158
0042ce25  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042ce2b  MOV EAX,dword ptr [EDX + 0x4]
0042ce2e  MOV EDX,dword ptr [EAX + 0x20]
0042ce31  ADD EDX,0x90
0042ce37  MOV EAX,dword ptr [ECX]
0042ce39  MOV dword ptr [EDX],EAX
0042ce3b  MOV EAX,dword ptr [ECX + 0x4]
0042ce3e  MOV dword ptr [EDX + 0x4],EAX
0042ce41  MOV ECX,dword ptr [ECX + 0x8]
0042ce44  MOV dword ptr [EDX + 0x8],ECX
0042ce47  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042ce4d  MOV EAX,dword ptr [EDX + 0x4]
0042ce50  MOV ECX,dword ptr [EAX + 0x20]
0042ce53  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042ce59  MOV EAX,dword ptr [EDX + 0x164]
0042ce5f  MOV dword ptr [ECX + 0xa0],EAX
0042ce65  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042ce6b  MOV EDX,dword ptr [ECX + 0x4]
0042ce6e  MOV EAX,dword ptr [EDX + 0x20]
0042ce71  MOV dword ptr [EAX + 0x9c],0x0
0042ce7b  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042ce81  MOV EDX,dword ptr [ECX + 0x4]
0042ce84  MOV EAX,dword ptr [EDX + 0x20]
0042ce87  MOV dword ptr [EAX + 0xa4],0x0
0042ce91  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042ce97  CALL 0x00401384  ; Player::Motion_Stand
0042ce9c  PUSH 0x44
0042ce9e  PUSH 0x0
0042cea0  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042cea6  ADD ECX,0x8
0042cea9  PUSH ECX
0042ceaa  CALL 0x00433440  ; _memset
0042ceaf  ADD ESP,0xc
0042ceb2  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042ceb8  MOV dword ptr [EDX + 0x8],0x3f4ccccd
0042cebf  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042cec5  MOV dword ptr [EAX + 0xc],0x3f4ccccd
0042cecc  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042ced2  MOV dword ptr [ECX + 0x10],0x3f4ccccd
0042ced9  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042cedf  MOV dword ptr [EDX + 0x14],0x3f000000
0042cee6  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042ceec  MOV dword ptr [EAX + 0x18],0x3f4ccccd
0042cef3  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042cef9  MOV dword ptr [ECX + 0x1c],0x3f4ccccd
0042cf00  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042cf06  MOV dword ptr [EDX + 0x20],0x3f4ccccd
0042cf0d  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042cf13  MOV dword ptr [EAX + 0x24],0x3f800000
0042cf1a  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042cf20  MOV dword ptr [ECX + 0x28],0x0
0042cf27  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042cf2d  MOV dword ptr [EDX + 0x2c],0x0
0042cf34  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042cf3a  MOV dword ptr [EAX + 0x30],0x0
0042cf41  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042cf47  MOV dword ptr [ECX + 0x34],0x3f800000
0042cf4e  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042cf54  MOV dword ptr [EDX + 0x38],0x3dcccccd
0042cf5b  MOV EAX,dword ptr [EBP + 0xfffffed4]
0042cf61  MOV dword ptr [EAX + 0x3c],0x3dcccccd
0042cf68  MOV ECX,dword ptr [EBP + 0xfffffed4]
0042cf6e  MOV dword ptr [ECX + 0x40],0x3dcccccd
0042cf75  MOV EDX,dword ptr [EBP + 0xfffffed4]
0042cf7b  MOV dword ptr [EDX + 0x48],0x0
0042cf82  MOV ECX,dword ptr [EBP + -0xc]
0042cf85  MOV dword ptr FS:[0x0],ECX
0042cf8c  POP ESI
0042cf8d  MOV ESP,EBP
0042cf8f  POP EBP
0042cf90  RET 0x8
