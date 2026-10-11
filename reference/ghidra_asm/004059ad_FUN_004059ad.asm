004059ad  PUSH EBP
004059ae  MOV EBP,ESP
004059b0  SUB ESP,0x554
004059b6  MOV dword ptr [EBP + 0xfffffaac],ECX
004059bc  LEA EAX,[EBP + -0x4]
004059bf  PUSH EAX
004059c0  MOV ECX,dword ptr [EBP + 0xfffffaac]
004059c6  MOV EDX,dword ptr [ECX + 0x6c]
004059c9  MOV EAX,dword ptr [EBP + 0xfffffaac]
004059cf  MOV ECX,dword ptr [EAX + 0x6c]
004059d2  MOV EAX,dword ptr [ECX]
004059d4  PUSH EDX
004059d5  CALL dword ptr [EAX + 0x90]
004059db  LEA ECX,[EBP + 0xffffff60]
004059e1  PUSH ECX
004059e2  PUSH 0x18
004059e4  MOV EDX,dword ptr [EBP + 0xfffffaac]
004059ea  MOV EAX,dword ptr [EDX + 0x70]
004059ed  PUSH EAX
004059ee  CALL dword ptr [0x0045a488] {371054}  ; GDI32.DLL::GetObjectA
004059f4  MOV dword ptr [EBP + -0x80],0x7c
004059fb  LEA ECX,[EBP + -0x80]
004059fe  PUSH ECX
004059ff  MOV EDX,dword ptr [EBP + 0xfffffaac]
00405a05  MOV EAX,dword ptr [EDX + 0x6c]
00405a08  MOV ECX,dword ptr [EBP + 0xfffffaac]
00405a0e  MOV EDX,dword ptr [ECX + 0x6c]
00405a11  MOV ECX,dword ptr [EDX]
00405a13  PUSH EAX
00405a14  CALL dword ptr [ECX + 0x58]
00405a17  MOV dword ptr [EBP + -0x7c],0x101007
00405a1e  MOV dword ptr [EBP + -0x18],0x1800
00405a25  MOV dword ptr [EBP + -0x14],0x0
00405a2c  MOV EDX,dword ptr [EBP + 0xffffff64]
00405a32  MOV dword ptr [EBP + -0x74],EDX
00405a35  MOV EAX,dword ptr [EBP + 0xffffff68]
00405a3b  MOV dword ptr [EBP + -0x78],EAX
00405a3e  PUSH 0x0
00405a40  LEA ECX,[EBP + 0xffffff5c]
00405a46  PUSH ECX
00405a47  LEA EDX,[EBP + -0x80]
00405a4a  PUSH EDX
00405a4b  MOV EAX,dword ptr [EBP + -0x4]
00405a4e  MOV ECX,dword ptr [EAX]
00405a50  MOV EDX,dword ptr [EBP + -0x4]
00405a53  PUSH EDX
00405a54  CALL dword ptr [ECX + 0x18]
00405a57  MOV dword ptr [EBP + 0xffffff7c],EAX
00405a5d  CMP dword ptr [EBP + 0xffffff7c],0x0
00405a64  JGE 0x00405a7d
00405a66  MOV EAX,dword ptr [EBP + -0x4]
00405a69  MOV ECX,dword ptr [EAX]
00405a6b  MOV EDX,dword ptr [EBP + -0x4]
00405a6e  PUSH EDX
00405a6f  CALL dword ptr [ECX + 0x8]
00405a72  MOV EAX,dword ptr [EBP + 0xffffff7c]
00405a78  JMP 0x00405fd3
00405a7d  PUSH 0x0
00405a7f  CALL dword ptr [0x0045a48c] {371016}  ; GDI32.DLL::CreateCompatibleDC
00405a85  MOV dword ptr [EBP + 0xffffff58],EAX
00405a8b  CMP dword ptr [EBP + 0xffffff58],0x0
00405a92  JNZ 0x00405abd
00405a94  MOV EAX,dword ptr [EBP + 0xffffff5c]
00405a9a  MOV ECX,dword ptr [EAX]
00405a9c  MOV EDX,dword ptr [EBP + 0xffffff5c]
00405aa2  PUSH EDX
00405aa3  CALL dword ptr [ECX + 0x8]
00405aa6  MOV EAX,dword ptr [EBP + -0x4]
00405aa9  MOV ECX,dword ptr [EAX]
00405aab  MOV EDX,dword ptr [EBP + -0x4]
00405aae  PUSH EDX
00405aaf  CALL dword ptr [ECX + 0x8]
00405ab2  MOV EAX,dword ptr [EBP + 0xffffff7c]
00405ab8  JMP 0x00405fd3
00405abd  MOV EAX,dword ptr [EBP + 0xfffffaac]
00405ac3  MOV ECX,dword ptr [EAX + 0x70]
00405ac6  PUSH ECX
00405ac7  MOV EDX,dword ptr [EBP + 0xffffff58]
00405acd  PUSH EDX
00405ace  CALL dword ptr [0x0045a47c] {371000}  ; GDI32.DLL::SelectObject
00405ad4  CMP dword ptr [EBP + -0x2c],0x8
00405ad8  JNZ 0x00405d0f
00405ade  MOV dword ptr [EBP + 0xffffff4c],0x44
00405ae8  LEA EAX,[EBP + 0xfffffb48]
00405aee  PUSH EAX
00405aef  PUSH 0x100
00405af4  PUSH 0x0
00405af6  MOV ECX,dword ptr [EBP + 0xffffff58]
00405afc  PUSH ECX
00405afd  CALL dword ptr [0x0045a490] {371154}  ; GDI32.DLL::GetDIBColorTable
00405b03  MOV word ptr [EBP + 0xffffff48],AX
00405b0a  MOV word ptr [EBP + 0xffffff50],0x0
00405b13  JMP 0x00405b27
00405b15  MOV DX,word ptr [EBP + 0xffffff50]
00405b1c  ADD DX,0x1
00405b20  MOV word ptr [EBP + 0xffffff50],DX
00405b27  MOV EAX,dword ptr [EBP + 0xffffff50]
00405b2d  AND EAX,0xffff
00405b32  MOV ECX,dword ptr [EBP + 0xffffff48]
00405b38  AND ECX,0xffff
00405b3e  CMP EAX,ECX
00405b40  JGE 0x00405c70
00405b46  MOV EDX,dword ptr [EBP + 0xffffff50]
00405b4c  AND EDX,0xffff
00405b52  MOV EAX,dword ptr [EBP + EDX*0x4 + 0xfffffb48]
00405b59  SHR EAX,0x10
00405b5c  AND EAX,0xff
00405b61  MOV ECX,dword ptr [EBP + 0xffffff50]
00405b67  AND ECX,0xffff
00405b6d  XOR EDX,EDX
00405b6f  MOV DX,word ptr [EBP + ECX*0x4 + 0xfffffb48]
00405b77  SAR EDX,0x8
00405b7a  AND EDX,0xff
00405b80  SHL EDX,0x8
00405b83  OR EAX,EDX
00405b85  MOV ECX,dword ptr [EBP + 0xffffff50]
00405b8b  AND ECX,0xffff
00405b91  XOR EDX,EDX
00405b93  MOV DL,byte ptr [EBP + ECX*0x4 + 0xfffffb48]
00405b9a  SHL EDX,0x10
00405b9d  OR EAX,EDX
00405b9f  MOV ECX,dword ptr [EBP + 0xffffff50]
00405ba5  AND ECX,0xffff
00405bab  MOV dword ptr [EBP + ECX*0x4 + 0xfffffb48],EAX
00405bb2  MOV EDX,dword ptr [EBP + 0xfffffaac]
00405bb8  MOV EAX,dword ptr [EDX + 0x64]
00405bbb  AND EAX,0x3
00405bbe  TEST EAX,EAX
00405bc0  JZ 0x00405c6b
00405bc6  MOV ECX,dword ptr [EBP + 0xfffffaac]
00405bcc  MOV EDX,dword ptr [ECX + 0x64]
00405bcf  AND EDX,0x2
00405bd2  TEST EDX,EDX
00405bd4  JZ 0x00405c18
00405bd6  MOV EAX,dword ptr [EBP + 0xffffff50]
00405bdc  AND EAX,0xffff
00405be1  CMP dword ptr [EBP + EAX*0x4 + 0xfffffb48],0x0
00405be9  JZ 0x00405c16
00405beb  MOV ECX,dword ptr [EBP + 0xffffff50]
00405bf1  AND ECX,0xffff
00405bf7  MOV EDX,dword ptr [EBP + ECX*0x4 + 0xfffffb48]
00405bfe  OR EDX,0xff000000
00405c04  MOV EAX,dword ptr [EBP + 0xffffff50]
00405c0a  AND EAX,0xffff
00405c0f  MOV dword ptr [EBP + EAX*0x4 + 0xfffffb48],EDX
00405c16  JMP 0x00405c6b
00405c18  MOV ECX,dword ptr [EBP + 0xfffffaac]
00405c1e  MOV EDX,dword ptr [ECX + 0x64]
00405c21  AND EDX,0x1
00405c24  TEST EDX,EDX
00405c26  JZ 0x00405c6b
00405c28  MOV EAX,dword ptr [EBP + 0xffffff50]
00405c2e  AND EAX,0xffff
00405c33  CMP dword ptr [EBP + EAX*0x4 + 0xfffffb48],0xffffff
00405c3e  JZ 0x00405c6b
00405c40  MOV ECX,dword ptr [EBP + 0xffffff50]
00405c46  AND ECX,0xffff
00405c4c  MOV EDX,dword ptr [EBP + ECX*0x4 + 0xfffffb48]
00405c53  OR EDX,0xff000000
00405c59  MOV EAX,dword ptr [EBP + 0xffffff50]
00405c5f  AND EAX,0xffff
00405c64  MOV dword ptr [EBP + EAX*0x4 + 0xfffffb48],EDX
00405c6b  JMP 0x00405b15
00405c70  MOV ECX,dword ptr [EBP + 0xfffffaac]
00405c76  MOV EDX,dword ptr [ECX + 0x64]
00405c79  AND EDX,0x3
00405c7c  TEST EDX,EDX
00405c7e  JZ 0x00405c8f
00405c80  MOV EAX,dword ptr [EBP + 0xffffff4c]
00405c86  OR AH,0x4
00405c89  MOV dword ptr [EBP + 0xffffff4c],EAX
00405c8f  PUSH 0x0
00405c91  LEA ECX,[EBP + 0xffffff54]
00405c97  PUSH ECX
00405c98  LEA EDX,[EBP + 0xfffffb48]
00405c9e  PUSH EDX
00405c9f  MOV EAX,dword ptr [EBP + 0xffffff4c]
00405ca5  PUSH EAX
00405ca6  MOV ECX,dword ptr [EBP + -0x4]
00405ca9  MOV EDX,dword ptr [ECX]
00405cab  MOV EAX,dword ptr [EBP + -0x4]
00405cae  PUSH EAX
00405caf  CALL dword ptr [EDX + 0x14]
00405cb2  MOV ECX,dword ptr [EBP + 0xffffff54]
00405cb8  PUSH ECX
00405cb9  MOV EDX,dword ptr [EBP + 0xffffff5c]
00405cbf  MOV EAX,dword ptr [EDX]
00405cc1  MOV ECX,dword ptr [EBP + 0xffffff5c]
00405cc7  PUSH ECX
00405cc8  CALL dword ptr [EAX + 0x7c]
00405ccb  MOV EDX,dword ptr [EBP + 0xffffff54]
00405cd1  PUSH EDX
00405cd2  MOV EAX,dword ptr [EBP + 0xfffffaac]
00405cd8  MOV ECX,dword ptr [EAX + 0x6c]
00405cdb  MOV EDX,dword ptr [EBP + 0xfffffaac]
00405ce1  MOV EAX,dword ptr [EDX + 0x6c]
00405ce4  MOV EDX,dword ptr [EAX]
00405ce6  PUSH ECX
00405ce7  CALL dword ptr [EDX + 0x7c]
00405cea  CMP dword ptr [EBP + 0xffffff54],0x0
00405cf1  JZ 0x00405d0f
00405cf3  MOV EAX,dword ptr [EBP + 0xffffff54]
00405cf9  MOV ECX,dword ptr [EAX]
00405cfb  MOV EDX,dword ptr [EBP + 0xffffff54]
00405d01  PUSH EDX
00405d02  CALL dword ptr [ECX + 0x8]
00405d05  MOV dword ptr [EBP + 0xffffff54],0x0
00405d0f  LEA EAX,[EBP + 0xffffff78]
00405d15  PUSH EAX
00405d16  MOV ECX,dword ptr [EBP + 0xffffff5c]
00405d1c  MOV EDX,dword ptr [ECX]
00405d1e  MOV EAX,dword ptr [EBP + 0xffffff5c]
00405d24  PUSH EAX
00405d25  CALL dword ptr [EDX + 0x44]
00405d28  TEST EAX,EAX
00405d2a  JL 0x00405d74
00405d2c  PUSH 0xcc0020
00405d31  PUSH 0x0
00405d33  PUSH 0x0
00405d35  MOV ECX,dword ptr [EBP + 0xffffff58]
00405d3b  PUSH ECX
00405d3c  MOV EDX,dword ptr [EBP + 0xffffff68]
00405d42  PUSH EDX
00405d43  MOV EAX,dword ptr [EBP + 0xffffff64]
00405d49  PUSH EAX
00405d4a  PUSH 0x0
00405d4c  PUSH 0x0
00405d4e  MOV ECX,dword ptr [EBP + 0xffffff78]
00405d54  PUSH ECX
00405d55  CALL dword ptr [0x0045a478] {370990}  ; GDI32.DLL::BitBlt
00405d5b  MOV EDX,dword ptr [EBP + 0xffffff78]
00405d61  PUSH EDX
00405d62  MOV EAX,dword ptr [EBP + 0xffffff5c]
00405d68  MOV ECX,dword ptr [EAX]
00405d6a  MOV EDX,dword ptr [EBP + 0xffffff5c]
00405d70  PUSH EDX
00405d71  CALL dword ptr [ECX + 0x68]
00405d74  MOV EAX,dword ptr [EBP + 0xffffff58]
00405d7a  PUSH EAX
00405d7b  CALL dword ptr [0x0045a480] {370978}  ; GDI32.DLL::DeleteDC
00405d81  PUSH 0x0
00405d83  PUSH 0x1000000
00405d88  PUSH 0x0
00405d8a  MOV ECX,dword ptr [EBP + 0xffffff5c]
00405d90  PUSH ECX
00405d91  PUSH 0x0
00405d93  MOV EDX,dword ptr [EBP + 0xfffffaac]
00405d99  MOV EAX,dword ptr [EDX + 0x6c]
00405d9c  MOV ECX,dword ptr [EBP + 0xfffffaac]
00405da2  MOV EDX,dword ptr [ECX + 0x6c]
00405da5  MOV ECX,dword ptr [EDX]
00405da7  PUSH EAX
00405da8  CALL dword ptr [ECX + 0x14]
00405dab  MOV EDX,dword ptr [EBP + 0xffffff5c]
00405db1  MOV EAX,dword ptr [EDX]
00405db3  MOV ECX,dword ptr [EBP + 0xffffff5c]
00405db9  PUSH ECX
00405dba  CALL dword ptr [EAX + 0x8]
00405dbd  CMP dword ptr [EBP + -0x1c],0x0
00405dc1  JZ 0x00405fc5
00405dc7  MOV EDX,dword ptr [EBP + 0xfffffaac]
00405dcd  MOV EAX,dword ptr [EDX + 0x64]
00405dd0  AND EAX,0x3
00405dd3  TEST EAX,EAX
00405dd5  JZ 0x00405fc5
00405ddb  MOV dword ptr [EBP + 0xfffffac8],0x7c
00405de5  PUSH 0x0
00405de7  PUSH 0x0
00405de9  LEA ECX,[EBP + 0xfffffac8]
00405def  PUSH ECX
00405df0  PUSH 0x0
00405df2  MOV EDX,dword ptr [EBP + 0xfffffaac]
00405df8  MOV EAX,dword ptr [EDX + 0x6c]
00405dfb  MOV ECX,dword ptr [EBP + 0xfffffaac]
00405e01  MOV EDX,dword ptr [ECX + 0x6c]
00405e04  MOV ECX,dword ptr [EDX]
00405e06  PUSH EAX
00405e07  CALL dword ptr [ECX + 0x64]
00405e0a  CMP EAX,0x8876021c
00405e0f  JNZ 0x00405e13
00405e11  JMP 0x00405de5
00405e13  MOV EDX,dword ptr [EBP + 0xfffffb2c]
00405e19  MOV dword ptr [EBP + 0xfffffb44],EDX
00405e1f  MOV EAX,dword ptr [EBP + 0xfffffb20]
00405e25  OR EAX,dword ptr [EBP + 0xfffffb24]
00405e2b  OR EAX,dword ptr [EBP + 0xfffffb28]
00405e31  MOV dword ptr [EBP + 0xfffffabc],EAX
00405e37  MOV dword ptr [EBP + 0xfffffac4],0x0
00405e41  MOV ECX,dword ptr [EBP + 0xfffffaac]
00405e47  MOV EDX,dword ptr [ECX + 0x64]
00405e4a  AND EDX,0x1
00405e4d  TEST EDX,EDX
00405e4f  JZ 0x00405e5d
00405e51  MOV EAX,dword ptr [EBP + 0xfffffabc]
00405e57  MOV dword ptr [EBP + 0xfffffac4],EAX
00405e5d  MOV dword ptr [EBP + 0xfffffac0],0x0
00405e67  JMP 0x00405e78
00405e69  MOV ECX,dword ptr [EBP + 0xfffffac0]
00405e6f  ADD ECX,0x1
00405e72  MOV dword ptr [EBP + 0xfffffac0],ECX
00405e78  MOV EDX,dword ptr [EBP + 0xfffffac0]
00405e7e  CMP EDX,dword ptr [EBP + 0xfffffad0]
00405e84  JNC 0x00405fa8
00405e8a  MOV EAX,dword ptr [EBP + 0xfffffac0]
00405e90  IMUL EAX,dword ptr [EBP + 0xfffffad8]
00405e97  MOV ECX,dword ptr [EBP + 0xfffffaec]
00405e9d  ADD ECX,EAX
00405e9f  MOV dword ptr [EBP + 0xfffffab8],ECX
00405ea5  MOV EDX,dword ptr [EBP + 0xfffffac0]
00405eab  IMUL EDX,dword ptr [EBP + 0xfffffad8]
00405eb2  MOV EAX,dword ptr [EBP + 0xfffffaec]
00405eb8  ADD EAX,EDX
00405eba  MOV dword ptr [EBP + 0xfffffab0],EAX
00405ec0  MOV dword ptr [EBP + 0xfffffab4],0x0
00405eca  JMP 0x00405edb
00405ecc  MOV ECX,dword ptr [EBP + 0xfffffab4]
00405ed2  ADD ECX,0x1
00405ed5  MOV dword ptr [EBP + 0xfffffab4],ECX
00405edb  MOV EDX,dword ptr [EBP + 0xfffffab4]
00405ee1  CMP EDX,dword ptr [EBP + 0xfffffad4]
00405ee7  JNC 0x00405fa3
00405eed  CMP dword ptr [EBP + 0xfffffb1c],0x10
00405ef4  JNZ 0x00405f4a
00405ef6  MOV EAX,dword ptr [EBP + 0xfffffab8]
00405efc  MOV CX,word ptr [EAX]
00405eff  AND CX,word ptr [EBP + 0xfffffabc]
00405f06  MOV EDX,dword ptr [EBP + 0xfffffab8]
00405f0c  MOV word ptr [EDX],CX
00405f0f  MOV EAX,dword ptr [EBP + 0xfffffab8]
00405f15  XOR ECX,ECX
00405f17  MOV CX,word ptr [EAX]
00405f1a  CMP ECX,dword ptr [EBP + 0xfffffac4]
00405f20  JZ 0x00405f3b
00405f22  MOV EDX,dword ptr [EBP + 0xfffffab8]
00405f28  MOV AX,word ptr [EDX]
00405f2b  OR AX,word ptr [EBP + 0xfffffb44]
00405f32  MOV ECX,dword ptr [EBP + 0xfffffab8]
00405f38  MOV word ptr [ECX],AX
00405f3b  MOV EDX,dword ptr [EBP + 0xfffffab8]
00405f41  ADD EDX,0x2
00405f44  MOV dword ptr [EBP + 0xfffffab8],EDX
00405f4a  CMP dword ptr [EBP + 0xfffffb1c],0x20
00405f51  JNZ 0x00405f9e
00405f53  MOV EAX,dword ptr [EBP + 0xfffffab0]
00405f59  MOV ECX,dword ptr [EAX]
00405f5b  AND ECX,dword ptr [EBP + 0xfffffabc]
00405f61  MOV EDX,dword ptr [EBP + 0xfffffab0]
00405f67  MOV dword ptr [EDX],ECX
00405f69  MOV EAX,dword ptr [EBP + 0xfffffab0]
00405f6f  MOV ECX,dword ptr [EAX]
00405f71  CMP ECX,dword ptr [EBP + 0xfffffac4]
00405f77  JZ 0x00405f8f
00405f79  MOV EDX,dword ptr [EBP + 0xfffffab0]
00405f7f  MOV EAX,dword ptr [EDX]
00405f81  OR EAX,dword ptr [EBP + 0xfffffb44]
00405f87  MOV ECX,dword ptr [EBP + 0xfffffab0]
00405f8d  MOV dword ptr [ECX],EAX
00405f8f  MOV EDX,dword ptr [EBP + 0xfffffab0]
00405f95  ADD EDX,0x4
00405f98  MOV dword ptr [EBP + 0xfffffab0],EDX
00405f9e  JMP 0x00405ecc
00405fa3  JMP 0x00405e69
00405fa8  PUSH 0x0
00405faa  MOV EAX,dword ptr [EBP + 0xfffffaac]
00405fb0  MOV ECX,dword ptr [EAX + 0x6c]
00405fb3  MOV EDX,dword ptr [EBP + 0xfffffaac]
00405fb9  MOV EAX,dword ptr [EDX + 0x6c]
00405fbc  MOV EDX,dword ptr [EAX]
00405fbe  PUSH ECX
00405fbf  CALL dword ptr [EDX + 0x80]
00405fc5  MOV EAX,dword ptr [EBP + -0x4]
00405fc8  MOV ECX,dword ptr [EAX]
00405fca  MOV EDX,dword ptr [EBP + -0x4]
00405fcd  PUSH EDX
00405fce  CALL dword ptr [ECX + 0x8]
00405fd1  XOR EAX,EAX
00405fd3  MOV ESP,EBP
00405fd5  POP EBP
00405fd6  RET
