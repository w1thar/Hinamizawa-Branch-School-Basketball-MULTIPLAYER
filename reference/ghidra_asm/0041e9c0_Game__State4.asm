0041e9c0  PUSH EBP
0041e9c1  MOV EBP,ESP
0041e9c3  SUB ESP,0xb0
0041e9c9  PUSH EBX
0041e9ca  PUSH ESI
0041e9cb  MOV dword ptr [EBP + 0xffffff68],ECX
0041e9d1  MOV EAX,dword ptr [EBP + 0xffffff68]
0041e9d7  MOV ECX,dword ptr [EBP + 0xffffff68]
0041e9dd  FLD float ptr [EAX + 0x390]
0041e9e3  FADD float ptr [ECX + 0x54]
0041e9e6  MOV EDX,dword ptr [EBP + 0xffffff68]
0041e9ec  FSTP float ptr [EDX + 0x390]
0041e9f2  MOV EAX,dword ptr [EBP + 0xffffff68]
0041e9f8  MOV ECX,dword ptr [EBP + 0xffffff68]
0041e9fe  FLD float ptr [EAX + 0x260]
0041ea04  FSUB float ptr [ECX + 0x54]
0041ea07  MOV EDX,dword ptr [EBP + 0xffffff68]
0041ea0d  FSTP float ptr [EDX + 0x260]
0041ea13  MOV EAX,dword ptr [EBP + 0xffffff68]
0041ea19  CMP dword ptr [EAX + 0x3b8],0x3
0041ea20  JGE 0x0041ea4d
0041ea22  MOV ECX,dword ptr [EBP + 0xffffff68]
0041ea28  MOV EDX,dword ptr [ECX + 0x3b4]
0041ea2e  MOV EAX,dword ptr [EBP + 0xffffff68]
0041ea34  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041ea3b  MOV EDX,dword ptr [EBP + 0xffffff68]
0041ea41  MOV EAX,dword ptr [EDX + 0x390]
0041ea47  MOV dword ptr [ECX + 0x164],EAX
0041ea4d  MOV ECX,dword ptr [EBP + 0xffffff68]
0041ea53  XOR EDX,EDX
0041ea55  CMP dword ptr [ECX + 0x3b8],0x3
0041ea5c  SETL DL
0041ea5f  MOV EAX,dword ptr [EBP + 0xffffff68]
0041ea65  MOV ECX,dword ptr [EAX + 0x64]
0041ea68  XOR EAX,EAX
0041ea6a  CMP ECX,dword ptr [0x00452ed0] {1}
0041ea70  SETZ AL
0041ea73  MOV ECX,dword ptr [EBP + 0xffffff68]
0041ea79  MOV ECX,dword ptr [ECX + 0x80]
0041ea7f  XOR EBX,EBX
0041ea81  CMP ECX,dword ptr [0x00452ed0] {1}
0041ea87  SETZ BL
0041ea8a  OR EAX,EBX
0041ea8c  AND EDX,EAX
0041ea8e  TEST EDX,EDX
0041ea90  JZ 0x0041ebe1
0041ea96  PUSH 0x2
0041ea98  MOV EDX,dword ptr [EBP + 0xffffff68]
0041ea9e  MOV ECX,dword ptr [EDX + 0xc0]
0041eaa4  CALL 0x00401258
0041eaa9  PUSH 0x0
0041eaab  PUSH 0xc1f00000
0041eab0  PUSH 0x0
0041eab2  PUSH 0x40000000
0041eab7  LEA ECX,[EBP + -0x10]
0041eaba  CALL 0x00401348
0041eabf  SUB ESP,0xc
0041eac2  MOV ECX,ESP
0041eac4  MOV EDX,dword ptr [EAX]
0041eac6  MOV dword ptr [ECX],EDX
0041eac8  MOV EDX,dword ptr [EAX + 0x4]
0041eacb  MOV dword ptr [ECX + 0x4],EDX
0041eace  MOV EAX,dword ptr [EAX + 0x8]
0041ead1  MOV dword ptr [ECX + 0x8],EAX
0041ead4  MOV ECX,dword ptr [EBP + 0xffffff68]
0041eada  MOV EDX,dword ptr [ECX + 0x3b4]
0041eae0  MOV EAX,dword ptr [EBP + 0xffffff68]
0041eae6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041eaed  CALL 0x004012c6
0041eaf2  MOV ECX,dword ptr [EBP + 0xffffff68]
0041eaf8  MOV EDX,dword ptr [ECX + 0x3b4]
0041eafe  ADD EDX,0x1
0041eb01  MOV EAX,dword ptr [EBP + 0xffffff68]
0041eb07  MOV dword ptr [EAX + 0x3b4],EDX
0041eb0d  MOV ECX,dword ptr [EBP + 0xffffff68]
0041eb13  CMP dword ptr [ECX + 0x3b4],0x5
0041eb1a  JLE 0x0041eb2c
0041eb1c  MOV EDX,dword ptr [EBP + 0xffffff68]
0041eb22  MOV dword ptr [EDX + 0x3b4],0x0
0041eb2c  MOV EAX,dword ptr [EBP + 0xffffff68]
0041eb32  MOV ECX,dword ptr [EAX + 0x3b4]
0041eb38  MOV EDX,dword ptr [EBP + 0xffffff68]
0041eb3e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041eb45  XOR ECX,ECX
0041eb47  MOV CL,byte ptr [EAX + 0x154]
0041eb4d  TEST ECX,ECX
0041eb4f  JZ 0x0041eb8d
0041eb51  MOV EDX,dword ptr [EBP + 0xffffff68]
0041eb57  MOV EAX,dword ptr [EDX + 0x3b4]
0041eb5d  ADD EAX,0x1
0041eb60  MOV ECX,dword ptr [EBP + 0xffffff68]
0041eb66  MOV dword ptr [ECX + 0x3b4],EAX
0041eb6c  MOV EDX,dword ptr [EBP + 0xffffff68]
0041eb72  CMP dword ptr [EDX + 0x3b4],0x5
0041eb79  JLE 0x0041eb8b
0041eb7b  MOV EAX,dword ptr [EBP + 0xffffff68]
0041eb81  MOV dword ptr [EAX + 0x3b4],0x0
0041eb8b  JMP 0x0041eb2c
0041eb8d  MOV ECX,dword ptr [EBP + 0xffffff68]
0041eb93  MOV EDX,dword ptr [ECX + 0x390]
0041eb99  PUSH EDX
0041eb9a  PUSH 0xc1a00000
0041eb9f  PUSH 0x0
0041eba1  PUSH 0xc0000000
0041eba6  LEA ECX,[EBP + -0x1c]
0041eba9  CALL 0x00401348
0041ebae  SUB ESP,0xc
0041ebb1  MOV ECX,ESP
0041ebb3  MOV EDX,dword ptr [EAX]
0041ebb5  MOV dword ptr [ECX],EDX
0041ebb7  MOV EDX,dword ptr [EAX + 0x4]
0041ebba  MOV dword ptr [ECX + 0x4],EDX
0041ebbd  MOV EAX,dword ptr [EAX + 0x8]
0041ebc0  MOV dword ptr [ECX + 0x8],EAX
0041ebc3  MOV ECX,dword ptr [EBP + 0xffffff68]
0041ebc9  MOV EDX,dword ptr [ECX + 0x3b4]
0041ebcf  MOV EAX,dword ptr [EBP + 0xffffff68]
0041ebd5  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041ebdc  CALL 0x004012c6
0041ebe1  MOV ECX,dword ptr [EBP + 0xffffff68]
0041ebe7  XOR EDX,EDX
0041ebe9  CMP dword ptr [ECX + 0x3b8],0x3
0041ebf0  SETL DL
0041ebf3  MOV EAX,dword ptr [EBP + 0xffffff68]
0041ebf9  MOV ECX,dword ptr [EAX + 0x60]
0041ebfc  XOR EAX,EAX
0041ebfe  CMP ECX,dword ptr [0x00452ed0] {1}
0041ec04  SETZ AL
0041ec07  MOV ECX,dword ptr [EBP + 0xffffff68]
0041ec0d  MOV ECX,dword ptr [ECX + 0x7c]
0041ec10  XOR EBX,EBX
0041ec12  CMP ECX,dword ptr [0x00452ed0] {1}
0041ec18  SETZ BL
0041ec1b  OR EAX,EBX
0041ec1d  AND EDX,EAX
0041ec1f  TEST EDX,EDX
0041ec21  JZ 0x0041ed72
0041ec27  PUSH 0x2
0041ec29  MOV EDX,dword ptr [EBP + 0xffffff68]
0041ec2f  MOV ECX,dword ptr [EDX + 0xc0]
0041ec35  CALL 0x00401258
0041ec3a  PUSH 0x0
0041ec3c  PUSH 0xc1f00000
0041ec41  PUSH 0x0
0041ec43  PUSH 0x40000000
0041ec48  LEA ECX,[EBP + -0x28]
0041ec4b  CALL 0x00401348
0041ec50  SUB ESP,0xc
0041ec53  MOV ECX,ESP
0041ec55  MOV EDX,dword ptr [EAX]
0041ec57  MOV dword ptr [ECX],EDX
0041ec59  MOV EDX,dword ptr [EAX + 0x4]
0041ec5c  MOV dword ptr [ECX + 0x4],EDX
0041ec5f  MOV EAX,dword ptr [EAX + 0x8]
0041ec62  MOV dword ptr [ECX + 0x8],EAX
0041ec65  MOV ECX,dword ptr [EBP + 0xffffff68]
0041ec6b  MOV EDX,dword ptr [ECX + 0x3b4]
0041ec71  MOV EAX,dword ptr [EBP + 0xffffff68]
0041ec77  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041ec7e  CALL 0x004012c6
0041ec83  MOV ECX,dword ptr [EBP + 0xffffff68]
0041ec89  MOV EDX,dword ptr [ECX + 0x3b4]
0041ec8f  SUB EDX,0x1
0041ec92  MOV EAX,dword ptr [EBP + 0xffffff68]
0041ec98  MOV dword ptr [EAX + 0x3b4],EDX
0041ec9e  MOV ECX,dword ptr [EBP + 0xffffff68]
0041eca4  CMP dword ptr [ECX + 0x3b4],0x0
0041ecab  JGE 0x0041ecbd
0041ecad  MOV EDX,dword ptr [EBP + 0xffffff68]
0041ecb3  MOV dword ptr [EDX + 0x3b4],0x5
0041ecbd  MOV EAX,dword ptr [EBP + 0xffffff68]
0041ecc3  MOV ECX,dword ptr [EAX + 0x3b4]
0041ecc9  MOV EDX,dword ptr [EBP + 0xffffff68]
0041eccf  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041ecd6  XOR ECX,ECX
0041ecd8  MOV CL,byte ptr [EAX + 0x154]
0041ecde  TEST ECX,ECX
0041ece0  JZ 0x0041ed1e
0041ece2  MOV EDX,dword ptr [EBP + 0xffffff68]
0041ece8  MOV EAX,dword ptr [EDX + 0x3b4]
0041ecee  SUB EAX,0x1
0041ecf1  MOV ECX,dword ptr [EBP + 0xffffff68]
0041ecf7  MOV dword ptr [ECX + 0x3b4],EAX
0041ecfd  MOV EDX,dword ptr [EBP + 0xffffff68]
0041ed03  CMP dword ptr [EDX + 0x3b4],0x0
0041ed0a  JGE 0x0041ed1c
0041ed0c  MOV EAX,dword ptr [EBP + 0xffffff68]
0041ed12  MOV dword ptr [EAX + 0x3b4],0x5
0041ed1c  JMP 0x0041ecbd
0041ed1e  MOV ECX,dword ptr [EBP + 0xffffff68]
0041ed24  MOV EDX,dword ptr [ECX + 0x390]
0041ed2a  PUSH EDX
0041ed2b  PUSH 0xc1a00000
0041ed30  PUSH 0x0
0041ed32  PUSH 0xc0000000
0041ed37  LEA ECX,[EBP + -0x34]
0041ed3a  CALL 0x00401348
0041ed3f  SUB ESP,0xc
0041ed42  MOV ECX,ESP
0041ed44  MOV EDX,dword ptr [EAX]
0041ed46  MOV dword ptr [ECX],EDX
0041ed48  MOV EDX,dword ptr [EAX + 0x4]
0041ed4b  MOV dword ptr [ECX + 0x4],EDX
0041ed4e  MOV EAX,dword ptr [EAX + 0x8]
0041ed51  MOV dword ptr [ECX + 0x8],EAX
0041ed54  MOV ECX,dword ptr [EBP + 0xffffff68]
0041ed5a  MOV EDX,dword ptr [ECX + 0x3b4]
0041ed60  MOV EAX,dword ptr [EBP + 0xffffff68]
0041ed66  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041ed6d  CALL 0x004012c6
0041ed72  MOV ECX,dword ptr [EBP + 0xffffff68]
0041ed78  CMP dword ptr [ECX + 0x3b8],0x2
0041ed7f  JLE 0x0041ed96
0041ed81  MOV EDX,dword ptr [EBP + 0xffffff68]
0041ed87  MOV dword ptr [EDX + 0x39c],0x0
0041ed91  JMP 0x0041ee29
0041ed96  MOV EAX,dword ptr [EBP + 0xffffff68]
0041ed9c  MOV ECX,dword ptr [EAX + 0x64]
0041ed9f  XOR EDX,EDX
0041eda1  CMP ECX,dword ptr [0x00452ed8] {3}
0041eda7  SETZ DL
0041edaa  MOV EAX,dword ptr [EBP + 0xffffff68]
0041edb0  MOV ECX,dword ptr [EAX + 0x80]
0041edb6  XOR EAX,EAX
0041edb8  CMP ECX,dword ptr [0x00452ed8] {3}
0041edbe  SETZ AL
0041edc1  OR EDX,EAX
0041edc3  TEST EDX,EDX
0041edc5  JZ 0x0041edd9
0041edc7  MOV ECX,dword ptr [EBP + 0xffffff68]
0041edcd  MOV dword ptr [ECX + 0x39c],0xfffffffe
0041edd7  JMP 0x0041ee29
0041edd9  MOV EDX,dword ptr [EBP + 0xffffff68]
0041eddf  MOV EAX,dword ptr [EDX + 0x60]
0041ede2  XOR ECX,ECX
0041ede4  CMP EAX,dword ptr [0x00452ed8] {3}
0041edea  SETZ CL
0041eded  MOV EDX,dword ptr [EBP + 0xffffff68]
0041edf3  MOV EAX,dword ptr [EDX + 0x7c]
0041edf6  XOR EDX,EDX
0041edf8  CMP EAX,dword ptr [0x00452ed8] {3}
0041edfe  SETZ DL
0041ee01  OR ECX,EDX
0041ee03  TEST ECX,ECX
0041ee05  JZ 0x0041ee19
0041ee07  MOV EAX,dword ptr [EBP + 0xffffff68]
0041ee0d  MOV dword ptr [EAX + 0x39c],0xfffffffd
0041ee17  JMP 0x0041ee29
0041ee19  MOV ECX,dword ptr [EBP + 0xffffff68]
0041ee1f  MOV dword ptr [ECX + 0x39c],0xffffffff
0041ee29  MOV EDX,dword ptr [EBP + 0xffffff68]
0041ee2f  XOR EAX,EAX
0041ee31  CMP dword ptr [EDX + 0x3b8],0x3
0041ee38  SETL AL
0041ee3b  MOV ECX,dword ptr [EBP + 0xffffff68]
0041ee41  MOV EDX,dword ptr [ECX + 0x6c]
0041ee44  XOR ECX,ECX
0041ee46  CMP EDX,dword ptr [0x00452ed0] {1}
0041ee4c  SETZ CL
0041ee4f  MOV EDX,dword ptr [EBP + 0xffffff68]
0041ee55  MOV EDX,dword ptr [EDX + 0x70]
0041ee58  XOR EBX,EBX
0041ee5a  CMP EDX,dword ptr [0x00452ed0] {1}
0041ee60  SETZ BL
0041ee63  OR ECX,EBX
0041ee65  MOV EDX,dword ptr [EBP + 0xffffff68]
0041ee6b  MOV EDX,dword ptr [EDX + 0x74]
0041ee6e  XOR EBX,EBX
0041ee70  CMP EDX,dword ptr [0x00452ed0] {1}
0041ee76  SETZ BL
0041ee79  OR ECX,EBX
0041ee7b  MOV EDX,dword ptr [EBP + 0xffffff68]
0041ee81  MOV EDX,dword ptr [EDX + 0x68]
0041ee84  XOR EBX,EBX
0041ee86  CMP EDX,dword ptr [0x00452ed0] {1}
0041ee8c  SETZ BL
0041ee8f  OR ECX,EBX
0041ee91  MOV EDX,dword ptr [EBP + 0xffffff68]
0041ee97  MOV EDX,dword ptr [EDX + 0x88]
0041ee9d  XOR EBX,EBX
0041ee9f  CMP EDX,dword ptr [0x00452ed0] {1}
0041eea5  SETZ BL
0041eea8  OR ECX,EBX
0041eeaa  AND EAX,ECX
0041eeac  TEST EAX,EAX
0041eeae  JZ 0x0041f285
0041eeb4  PUSH 0x4
0041eeb6  MOV EAX,dword ptr [EBP + 0xffffff68]
0041eebc  MOV ECX,dword ptr [EAX + 0xc0]
0041eec2  CALL 0x00401258
0041eec7  MOV ECX,dword ptr [EBP + 0xffffff68]
0041eecd  CMP dword ptr [ECX + 0x3b8],0x2
0041eed4  JGE 0x0041f0b6
0041eeda  MOV EDX,dword ptr [EBP + 0xffffff68]
0041eee0  MOV EAX,dword ptr [EDX + 0x3b4]
0041eee6  MOV ECX,dword ptr [EBP + 0xffffff68]
0041eeec  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041eef3  MOV byte ptr [EDX + 0x154],0x1
0041eefa  PUSH 0xc1a00000
0041eeff  MOV EAX,dword ptr [EBP + 0xffffff68]
0041ef05  FILD dword ptr [EAX + 0x3b8]
0041ef0b  FMUL float ptr [0x0044e220] {6}
0041ef11  FADD float ptr [0x0044e224] {3}
0041ef17  FSUB float ptr [0x0044e228] {2}
0041ef1d  PUSH ECX
0041ef1e  FSTP float ptr [ESP]
0041ef21  CALL 0x00401127
0041ef26  ADD ESP,0x8
0041ef29  MOV ECX,dword ptr [EBP + 0xffffff68]
0041ef2f  MOV EDX,dword ptr [ECX + 0x3b4]
0041ef35  MOV EAX,dword ptr [EBP + 0xffffff68]
0041ef3b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041ef42  FSTP float ptr [ECX + 0x164]
0041ef48  MOV EDX,dword ptr [EBP + 0xffffff68]
0041ef4e  MOV EAX,dword ptr [EDX + 0x3b4]
0041ef54  MOV ECX,dword ptr [EBP + 0xffffff68]
0041ef5a  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041ef61  CALL 0x00401212
0041ef66  MOV EDX,dword ptr [EBP + 0xffffff68]
0041ef6c  CMP dword ptr [EDX + 0x3b8],0x0
0041ef73  JNZ 0x0041ef8f
0041ef75  MOV EAX,dword ptr [EBP + 0xffffff68]
0041ef7b  MOV ECX,dword ptr [EBP + 0xffffff68]
0041ef81  MOV EDX,dword ptr [ECX + 0x3b4]
0041ef87  MOV dword ptr [EAX + 0x3c8],EDX
0041ef8d  JMP 0x0041efa7
0041ef8f  MOV EAX,dword ptr [EBP + 0xffffff68]
0041ef95  MOV ECX,dword ptr [EBP + 0xffffff68]
0041ef9b  MOV EDX,dword ptr [ECX + 0x3b4]
0041efa1  MOV dword ptr [EAX + 0x3c0],EDX
0041efa7  MOV EAX,dword ptr [EBP + 0xffffff68]
0041efad  MOV ECX,dword ptr [EAX + 0x3b8]
0041efb3  ADD ECX,0x1
0041efb6  MOV EDX,dword ptr [EBP + 0xffffff68]
0041efbc  MOV dword ptr [EDX + 0x3b8],ECX
0041efc2  MOV EAX,dword ptr [EBP + 0xffffff68]
0041efc8  MOV ECX,dword ptr [EAX + 0x3b4]
0041efce  ADD ECX,0x1
0041efd1  MOV EDX,dword ptr [EBP + 0xffffff68]
0041efd7  MOV dword ptr [EDX + 0x3b4],ECX
0041efdd  MOV EAX,dword ptr [EBP + 0xffffff68]
0041efe3  CMP dword ptr [EAX + 0x3b4],0x5
0041efea  JLE 0x0041effc
0041efec  MOV ECX,dword ptr [EBP + 0xffffff68]
0041eff2  MOV dword ptr [ECX + 0x3b4],0x0
0041effc  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f002  MOV EAX,dword ptr [EDX + 0x3b4]
0041f008  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f00e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041f015  XOR EAX,EAX
0041f017  MOV AL,byte ptr [EDX + 0x154]
0041f01d  TEST EAX,EAX
0041f01f  JZ 0x0041f05d
0041f021  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f027  MOV EDX,dword ptr [ECX + 0x3b4]
0041f02d  ADD EDX,0x1
0041f030  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f036  MOV dword ptr [EAX + 0x3b4],EDX
0041f03c  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f042  CMP dword ptr [ECX + 0x3b4],0x5
0041f049  JLE 0x0041f05b
0041f04b  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f051  MOV dword ptr [EDX + 0x3b4],0x0
0041f05b  JMP 0x0041effc
0041f05d  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f063  MOV ECX,dword ptr [EAX + 0x390]
0041f069  PUSH ECX
0041f06a  PUSH 0xc1a00000
0041f06f  PUSH 0x0
0041f071  PUSH 0xc0000000
0041f076  LEA ECX,[EBP + -0x40]
0041f079  CALL 0x00401348
0041f07e  SUB ESP,0xc
0041f081  MOV EDX,ESP
0041f083  MOV ECX,dword ptr [EAX]
0041f085  MOV dword ptr [EDX],ECX
0041f087  MOV ECX,dword ptr [EAX + 0x4]
0041f08a  MOV dword ptr [EDX + 0x4],ECX
0041f08d  MOV EAX,dword ptr [EAX + 0x8]
0041f090  MOV dword ptr [EDX + 0x8],EAX
0041f093  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f099  MOV EDX,dword ptr [ECX + 0x3b4]
0041f09f  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f0a5  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041f0ac  CALL 0x004012c6
0041f0b1  JMP 0x0041f285
0041f0b6  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f0bc  MOV EDX,dword ptr [ECX + 0x3b4]
0041f0c2  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f0c8  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041f0cf  MOV byte ptr [ECX + 0x154],0x1
0041f0d6  PUSH 0xc1a00000
0041f0db  PUSH 0x40800000
0041f0e0  CALL 0x00401127
0041f0e5  ADD ESP,0x8
0041f0e8  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f0ee  MOV EAX,dword ptr [EDX + 0x3b4]
0041f0f4  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f0fa  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041f101  FSTP float ptr [EDX + 0x164]
0041f107  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f10d  MOV ECX,dword ptr [EAX + 0x3b4]
0041f113  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f119  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041f120  CALL 0x00401212
0041f125  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f12b  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f131  MOV EDX,dword ptr [ECX + 0x3b4]
0041f137  MOV dword ptr [EAX + 0x3c4],EDX
0041f13d  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f143  MOV dword ptr [EAX + 0x3b8],0x0
0041f14d  MOV dword ptr [EBP + -0x4],0x0
0041f154  JMP 0x0041f15f
0041f156  MOV ECX,dword ptr [EBP + -0x4]
0041f159  ADD ECX,0x1
0041f15c  MOV dword ptr [EBP + -0x4],ECX
0041f15f  CMP dword ptr [EBP + -0x4],0x6
0041f163  JGE 0x0041f275
0041f169  MOV EDX,dword ptr [EBP + -0x4]
0041f16c  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f172  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041f179  XOR EDX,EDX
0041f17b  MOV DL,byte ptr [ECX + 0x154]
0041f181  TEST EDX,EDX
0041f183  JNZ 0x0041f270
0041f189  PUSH 0xc1f00000
0041f18e  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f194  FILD dword ptr [EAX + 0x3b8]
0041f19a  FMUL float ptr [0x0044e224] {3}
0041f1a0  FSUBR float ptr [0x0044e22c] {-3}
0041f1a6  FADD float ptr [0x0044e228] {2}
0041f1ac  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f1b2  FILD dword ptr [ECX + 0x3b8]
0041f1b8  FMUL float ptr [0x0044e228] {2}
0041f1be  FADDP
0041f1c0  PUSH ECX
0041f1c1  FSTP float ptr [ESP]
0041f1c4  CALL 0x00401127
0041f1c9  ADD ESP,0x4
0041f1cc  FSTP float ptr [ESP]
0041f1cf  PUSH 0xc1f00000
0041f1d4  PUSH 0x0
0041f1d6  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f1dc  FILD dword ptr [EDX + 0x3b8]
0041f1e2  FMUL float ptr [0x0044e228] {2}
0041f1e8  FADD float ptr [0x0044e228] {2}
0041f1ee  PUSH ECX
0041f1ef  FSTP float ptr [ESP]
0041f1f2  LEA ECX,[EBP + -0x4c]
0041f1f5  CALL 0x00401348
0041f1fa  SUB ESP,0xc
0041f1fd  MOV ECX,ESP
0041f1ff  MOV EDX,dword ptr [EAX]
0041f201  MOV dword ptr [ECX],EDX
0041f203  MOV EDX,dword ptr [EAX + 0x4]
0041f206  MOV dword ptr [ECX + 0x4],EDX
0041f209  MOV EAX,dword ptr [EAX + 0x8]
0041f20c  MOV dword ptr [ECX + 0x8],EAX
0041f20f  MOV ECX,dword ptr [EBP + -0x4]
0041f212  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f218  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041f21f  CALL 0x004012c6
0041f224  MOV EAX,dword ptr [EBP + -0x4]
0041f227  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f22d  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041f234  CALL 0x00401212
0041f239  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f23f  MOV EAX,dword ptr [EDX + 0x3b8]
0041f245  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f24b  MOV EDX,dword ptr [EBP + -0x4]
0041f24e  MOV dword ptr [ECX + EAX*0x4 + 0x3cc],EDX
0041f255  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f25b  MOV ECX,dword ptr [EAX + 0x3b8]
0041f261  ADD ECX,0x1
0041f264  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f26a  MOV dword ptr [EDX + 0x3b8],ECX
0041f270  JMP 0x0041f156
0041f275  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f27b  MOV dword ptr [EAX + 0x3b8],0x3
0041f285  MOV dword ptr [EBP + -0x4],0x0
0041f28c  JMP 0x0041f297
0041f28e  MOV ECX,dword ptr [EBP + -0x4]
0041f291  ADD ECX,0x1
0041f294  MOV dword ptr [EBP + -0x4],ECX
0041f297  CMP dword ptr [EBP + -0x4],0x6
0041f29b  JGE 0x0041f405
0041f2a1  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f2a7  XOR EAX,EAX
0041f2a9  CMP dword ptr [EDX + 0x3b8],0x2
0041f2b0  SETG AL
0041f2b3  MOV ECX,dword ptr [EBP + -0x4]
0041f2b6  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f2bc  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041f2c3  XOR EDX,EDX
0041f2c5  MOV DL,byte ptr [ECX + 0x154]
0041f2cb  OR EAX,EDX
0041f2cd  TEST EAX,EAX
0041f2cf  JZ 0x0041f400
0041f2d5  MOV EAX,dword ptr [EBP + -0x4]
0041f2d8  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f2de  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041f2e5  FLD float ptr [EDX + 0x160]
0041f2eb  FCOMP float ptr [0x0044e230] {0}
0041f2f1  FNSTSW AX
0041f2f3  TEST AH,0x41
0041f2f6  JNZ 0x0041f32c
0041f2f8  MOV EAX,dword ptr [EBP + -0x4]
0041f2fb  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f301  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041f308  MOV dword ptr [EDX + 0x164],0x0
0041f312  MOV EAX,dword ptr [EBP + -0x4]
0041f315  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f31b  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041f322  CALL 0x00401384
0041f327  JMP 0x0041f400
0041f32c  MOV EDX,dword ptr [EBP + -0x4]
0041f32f  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f335  MOV ESI,dword ptr [EAX + EDX*0x4 + 0xd8]
0041f33c  MOV ECX,dword ptr [EBP + -0x4]
0041f33f  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f345  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041f34c  MOV ECX,dword ptr [EAX + 0x164]
0041f352  PUSH ECX
0041f353  CALL 0x00401262
0041f358  ADD ESP,0x4
0041f35b  MOV EDX,dword ptr [EBP + -0x4]
0041f35e  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f364  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041f36b  FMUL float ptr [ECX + 0x168]
0041f371  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f377  FMUL float ptr [EDX + 0x54]
0041f37a  FSUBR float ptr [ESI + 0x158]
0041f380  MOV EAX,dword ptr [EBP + -0x4]
0041f383  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f389  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041f390  FSTP float ptr [EDX + 0x158]
0041f396  MOV EAX,dword ptr [EBP + -0x4]
0041f399  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f39f  MOV ESI,dword ptr [ECX + EAX*0x4 + 0xd8]
0041f3a6  MOV EDX,dword ptr [EBP + -0x4]
0041f3a9  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f3af  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041f3b6  MOV EDX,dword ptr [ECX + 0x164]
0041f3bc  PUSH EDX
0041f3bd  CALL 0x0040136b
0041f3c2  ADD ESP,0x4
0041f3c5  MOV EAX,dword ptr [EBP + -0x4]
0041f3c8  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f3ce  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041f3d5  FMUL float ptr [EDX + 0x168]
0041f3db  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f3e1  FMUL float ptr [EAX + 0x54]
0041f3e4  FSUBR float ptr [ESI + 0x160]
0041f3ea  MOV ECX,dword ptr [EBP + -0x4]
0041f3ed  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f3f3  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041f3fa  FSTP float ptr [EAX + 0x160]
0041f400  JMP 0x0041f28e
0041f405  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f40b  FLD float ptr [ECX + 0x224]
0041f411  FCOMP float ptr [0x0044e234] {-20}
0041f417  FNSTSW AX
0041f419  TEST AH,0x41
0041f41c  JZ 0x0041f42a
0041f41e  MOV dword ptr [EBP + 0xffffff64],0x1
0041f428  JMP 0x0041f434
0041f42a  MOV dword ptr [EBP + 0xffffff64],0x0
0041f434  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f43a  XOR EAX,EAX
0041f43c  CMP dword ptr [EDX + 0x3b8],0x2
0041f443  SETG AL
0041f446  AND EAX,dword ptr [EBP + 0xffffff64]
0041f44c  TEST EAX,EAX
0041f44e  JZ 0x0041f49e
0041f450  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f456  FLD float ptr [0x0044e228] {2}
0041f45c  FMUL float ptr [ECX + 0x54]
0041f45f  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f465  FADD float ptr [EDX + 0x224]
0041f46b  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f471  FSTP float ptr [EAX + 0x224]
0041f477  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f47d  FLD float ptr [0x0044e238] {0.5}
0041f483  FMUL float ptr [ECX + 0x54]
0041f486  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f48c  FADD float ptr [EDX + 0x220]
0041f492  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f498  FSTP float ptr [EAX + 0x220]
0041f49e  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f4a4  FLD float ptr [ECX + 0x224]
0041f4aa  FCOMP float ptr [0x0044e234] {-20}
0041f4b0  FNSTSW AX
0041f4b2  TEST AH,0x41
0041f4b5  JNZ 0x0041f4c3
0041f4b7  MOV dword ptr [EBP + 0xffffff60],0x1
0041f4c1  JMP 0x0041f4cd
0041f4c3  MOV dword ptr [EBP + 0xffffff60],0x0
0041f4cd  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f4d3  MOV EAX,dword ptr [EDX + 0x58]
0041f4d6  XOR ECX,ECX
0041f4d8  CMP EAX,dword ptr [0x00452ed0] {1}
0041f4de  SETZ CL
0041f4e1  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f4e7  MOV EAX,dword ptr [EDX + 0x84]
0041f4ed  XOR EDX,EDX
0041f4ef  CMP EAX,dword ptr [0x00452ed0] {1}
0041f4f5  SETZ DL
0041f4f8  OR ECX,EDX
0041f4fa  MOV EAX,dword ptr [EBP + 0xffffff60]
0041f500  AND EAX,ECX
0041f502  TEST EAX,EAX
0041f504  JZ 0x0041f529
0041f506  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f50c  MOV dword ptr [ECX + 0x3b8],0x3
0041f516  PUSH 0x2
0041f518  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f51e  MOV ECX,dword ptr [EDX + 0xc0]
0041f524  CALL 0x00401258
0041f529  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f52f  FLD float ptr [EAX + 0x224]
0041f535  FCOMP float ptr [0x0044e234] {-20}
0041f53b  FNSTSW AX
0041f53d  TEST AH,0x41
0041f540  JNZ 0x0041f54e
0041f542  MOV dword ptr [EBP + 0xffffff5c],0x1
0041f54c  JMP 0x0041f558
0041f54e  MOV dword ptr [EBP + 0xffffff5c],0x0
0041f558  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f55e  MOV EDX,dword ptr [ECX + 0x5c]
0041f561  XOR EAX,EAX
0041f563  CMP EDX,dword ptr [0x00452ed0] {1}
0041f569  SETZ AL
0041f56c  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f572  MOV EDX,dword ptr [ECX + 0x78]
0041f575  XOR ECX,ECX
0041f577  CMP EDX,dword ptr [0x00452ed0] {1}
0041f57d  SETZ CL
0041f580  OR EAX,ECX
0041f582  MOV EDX,dword ptr [EBP + 0xffffff5c]
0041f588  AND EDX,EAX
0041f58a  TEST EDX,EDX
0041f58c  JZ 0x0041f5b1
0041f58e  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f594  MOV dword ptr [EAX + 0x3b8],0x4
0041f59e  PUSH 0x2
0041f5a0  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f5a6  MOV ECX,dword ptr [ECX + 0xc0]
0041f5ac  CALL 0x00401258
0041f5b1  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f5b7  FLD float ptr [EDX + 0x224]
0041f5bd  FCOMP float ptr [0x0044e234] {-20}
0041f5c3  FNSTSW AX
0041f5c5  TEST AH,0x41
0041f5c8  JNZ 0x0041f5d6
0041f5ca  MOV dword ptr [EBP + 0xffffff58],0x1
0041f5d4  JMP 0x0041f5e0
0041f5d6  MOV dword ptr [EBP + 0xffffff58],0x0
0041f5e0  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f5e6  XOR ECX,ECX
0041f5e8  CMP dword ptr [EAX + 0x3b8],0x3
0041f5ef  SETZ CL
0041f5f2  AND ECX,dword ptr [EBP + 0xffffff58]
0041f5f8  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f5fe  MOV EAX,dword ptr [EDX + 0x6c]
0041f601  XOR EDX,EDX
0041f603  CMP EAX,dword ptr [0x00452ed0] {1}
0041f609  SETZ DL
0041f60c  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f612  MOV EAX,dword ptr [EAX + 0x70]
0041f615  XOR EBX,EBX
0041f617  CMP EAX,dword ptr [0x00452ed0] {1}
0041f61d  SETZ BL
0041f620  OR EDX,EBX
0041f622  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f628  MOV EAX,dword ptr [EAX + 0x74]
0041f62b  XOR EBX,EBX
0041f62d  CMP EAX,dword ptr [0x00452ed0] {1}
0041f633  SETZ BL
0041f636  OR EDX,EBX
0041f638  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f63e  MOV EAX,dword ptr [EAX + 0x68]
0041f641  XOR EBX,EBX
0041f643  CMP EAX,dword ptr [0x00452ed0] {1}
0041f649  SETZ BL
0041f64c  OR EDX,EBX
0041f64e  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f654  MOV EAX,dword ptr [EAX + 0x88]
0041f65a  XOR EBX,EBX
0041f65c  CMP EAX,dword ptr [0x00452ed0] {1}
0041f662  SETZ BL
0041f665  OR EDX,EBX
0041f667  AND ECX,EDX
0041f669  TEST ECX,ECX
0041f66b  JZ 0x0041f6f1
0041f671  PUSH 0x5
0041f673  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f679  MOV ECX,dword ptr [ECX + 0xc0]
0041f67f  CALL 0x00401258
0041f684  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f68a  MOV dword ptr [EDX + 0x3b8],0x5
0041f694  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f69a  MOV dword ptr [EAX + 0x390],0x0
0041f6a4  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f6aa  MOV dword ptr [ECX + 0x394],0x3f800000
0041f6b4  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f6ba  CMP dword ptr [EDX + 0x3b0],0x2
0041f6c1  JNZ 0x0041f6db
0041f6c3  PUSH 0x452edc {'WAV\\LP\\Rika.mp3'}
0041f6c8  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f6ce  MOV ECX,dword ptr [EAX + 0xc0]
0041f6d4  CALL 0x00401078
0041f6d9  JMP 0x0041f6f1
0041f6db  PUSH 0x452eec {'WAV\\LP\\4.mp3'}
0041f6e0  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f6e6  MOV ECX,dword ptr [ECX + 0xc0]
0041f6ec  CALL 0x00401078
0041f6f1  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f6f7  XOR EAX,EAX
0041f6f9  CMP dword ptr [EDX + 0x3b8],0x4
0041f700  SETZ AL
0041f703  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f709  MOV EDX,dword ptr [ECX + 0x6c]
0041f70c  XOR ECX,ECX
0041f70e  CMP EDX,dword ptr [0x00452ed0] {1}
0041f714  SETZ CL
0041f717  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f71d  MOV EDX,dword ptr [EDX + 0x70]
0041f720  XOR EBX,EBX
0041f722  CMP EDX,dword ptr [0x00452ed0] {1}
0041f728  SETZ BL
0041f72b  OR ECX,EBX
0041f72d  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f733  MOV EDX,dword ptr [EDX + 0x74]
0041f736  XOR EBX,EBX
0041f738  CMP EDX,dword ptr [0x00452ed0] {1}
0041f73e  SETZ BL
0041f741  OR ECX,EBX
0041f743  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f749  MOV EDX,dword ptr [EDX + 0x68]
0041f74c  XOR EBX,EBX
0041f74e  CMP EDX,dword ptr [0x00452ed0] {1}
0041f754  SETZ BL
0041f757  OR ECX,EBX
0041f759  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f75f  MOV EDX,dword ptr [EDX + 0x88]
0041f765  XOR EBX,EBX
0041f767  CMP EDX,dword ptr [0x00452ed0] {1}
0041f76d  SETZ BL
0041f770  OR ECX,EBX
0041f772  AND EAX,ECX
0041f774  TEST EAX,EAX
0041f776  JZ 0x0041f79b
0041f778  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f77e  MOV dword ptr [EAX + 0x26c],0x1
0041f788  PUSH 0x2
0041f78a  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f790  MOV ECX,dword ptr [ECX + 0xc0]
0041f796  CALL 0x00401258
0041f79b  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f7a1  FLD float ptr [EDX + 0x224]
0041f7a7  FCOMP float ptr [0x0044e234] {-20}
0041f7ad  FNSTSW AX
0041f7af  TEST AH,0x41
0041f7b2  JNZ 0x0041f7c1
0041f7b4  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f7ba  MOV byte ptr [EAX + 0x3a4],0x1
0041f7c1  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f7c7  FLD float ptr [ECX + 0x390]
0041f7cd  FCOMP float ptr [0x0044e23c] {1}
0041f7d3  FNSTSW AX
0041f7d5  TEST AH,0x41
0041f7d8  JNZ 0x0041f7e6
0041f7da  MOV dword ptr [EBP + 0xffffff54],0x1
0041f7e4  JMP 0x0041f7f0
0041f7e6  MOV dword ptr [EBP + 0xffffff54],0x0
0041f7f0  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f7f6  XOR EAX,EAX
0041f7f8  CMP dword ptr [EDX + 0x3b8],0x5
0041f7ff  SETZ AL
0041f802  AND EAX,dword ptr [EBP + 0xffffff54]
0041f808  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f80e  XOR EDX,EDX
0041f810  MOV DL,byte ptr [ECX + 0x398]
0041f816  NEG EDX
0041f818  SBB EDX,EDX
0041f81a  INC EDX
0041f81b  AND EAX,EDX
0041f81d  TEST EAX,EAX
0041f81f  JZ 0x0041f841
0041f821  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f827  MOV byte ptr [EAX + 0x398],0x1
0041f82e  PUSH 0x3
0041f830  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f836  MOV ECX,dword ptr [ECX + 0xc0]
0041f83c  CALL 0x00401258
0041f841  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f847  FLD float ptr [EDX + 0x390]
0041f84d  FCOMP float ptr [0x0044e224] {3}
0041f853  FNSTSW AX
0041f855  TEST AH,0x41
0041f858  JNZ 0x0041f866
0041f85a  MOV dword ptr [EBP + 0xffffff50],0x1
0041f864  JMP 0x0041f870
0041f866  MOV dword ptr [EBP + 0xffffff50],0x0
0041f870  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f876  XOR ECX,ECX
0041f878  CMP dword ptr [EAX + 0x3b8],0x5
0041f87f  SETZ CL
0041f882  AND ECX,dword ptr [EBP + 0xffffff50]
0041f888  TEST ECX,ECX
0041f88a  JZ 0x0041fe2b
0041f890  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f896  MOV byte ptr [EDX + 0x3a6],0x0
0041f89d  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f8a3  MOV dword ptr [EAX + 0x390],0x0
0041f8ad  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f8b3  MOV dword ptr [ECX + 0x3b8],0x5
0041f8bd  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f8c3  MOV dword ptr [EDX + 0x418],0x0
0041f8cd  MOV dword ptr [EBP + -0x4],0x0
0041f8d4  JMP 0x0041f8df
0041f8d6  MOV EAX,dword ptr [EBP + -0x4]
0041f8d9  ADD EAX,0x1
0041f8dc  MOV dword ptr [EBP + -0x4],EAX
0041f8df  CMP dword ptr [EBP + -0x4],0x6
0041f8e3  JGE 0x0041f907
0041f8e5  MOV ECX,dword ptr [EBP + -0x4]
0041f8e8  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f8ee  MOV EAX,dword ptr [EBP + -0x4]
0041f8f1  MOV ESI,dword ptr [EBP + 0xffffff68]
0041f8f7  MOV EAX,dword ptr [ESI + EAX*0x4 + 0x3c0]
0041f8fe  MOV dword ptr [EDX + ECX*0x4 + 0x3e4],EAX
0041f905  JMP 0x0041f8d6
0041f907  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f90d  XOR EDX,EDX
0041f90f  CMP dword ptr [ECX + 0x3ec],0x3
0041f916  SETZ DL
0041f919  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f91f  XOR ECX,ECX
0041f921  CMP dword ptr [EAX + 0x3ec],0x4
0041f928  SETZ CL
0041f92b  OR EDX,ECX
0041f92d  TEST EDX,EDX
0041f92f  JZ 0x0041f996
0041f931  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f937  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f93d  MOV ECX,dword ptr [EAX + 0x3ec]
0041f943  MOV dword ptr [EDX + 0x3fc],ECX
0041f949  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f94f  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f955  MOV ECX,dword ptr [EAX + 0x3e8]
0041f95b  MOV dword ptr [EDX + 0x3ec],ECX
0041f961  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f967  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f96d  MOV ECX,dword ptr [EAX + 0x3e4]
0041f973  MOV dword ptr [EDX + 0x3e8],ECX
0041f979  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f97f  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f985  MOV ECX,dword ptr [EAX + 0x3fc]
0041f98b  MOV dword ptr [EDX + 0x3e4],ECX
0041f991  JMP 0x0041f907
0041f996  MOV EDX,dword ptr [EBP + 0xffffff68]
0041f99c  XOR EAX,EAX
0041f99e  CMP dword ptr [EDX + 0x3f8],0x3
0041f9a5  SETZ AL
0041f9a8  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f9ae  XOR EDX,EDX
0041f9b0  CMP dword ptr [ECX + 0x3f8],0x4
0041f9b7  SETZ DL
0041f9ba  OR EAX,EDX
0041f9bc  TEST EAX,EAX
0041f9be  JZ 0x0041fa25
0041f9c0  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f9c6  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f9cc  MOV EDX,dword ptr [ECX + 0x3f8]
0041f9d2  MOV dword ptr [EAX + 0x3fc],EDX
0041f9d8  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f9de  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f9e4  MOV EDX,dword ptr [ECX + 0x3f4]
0041f9ea  MOV dword ptr [EAX + 0x3f8],EDX
0041f9f0  MOV EAX,dword ptr [EBP + 0xffffff68]
0041f9f6  MOV ECX,dword ptr [EBP + 0xffffff68]
0041f9fc  MOV EDX,dword ptr [ECX + 0x3f0]
0041fa02  MOV dword ptr [EAX + 0x3f4],EDX
0041fa08  MOV EAX,dword ptr [EBP + 0xffffff68]
0041fa0e  MOV ECX,dword ptr [EBP + 0xffffff68]
0041fa14  MOV EDX,dword ptr [ECX + 0x3fc]
0041fa1a  MOV dword ptr [EAX + 0x3f0],EDX
0041fa20  JMP 0x0041f996
0041fa25  MOV EAX,dword ptr [EBP + 0xffffff68]
0041fa2b  CMP dword ptr [EAX + 0x3b0],0x2
0041fa32  JNZ 0x0041fe1b
0041fa38  PUSH 0xc016b852
0041fa3d  PUSH 0xc0e00000
0041fa42  PUSH 0x0
0041fa44  PUSH 0xc0e00000
0041fa49  LEA ECX,[EBP + -0x58]
0041fa4c  CALL 0x00401348
0041fa51  SUB ESP,0xc
0041fa54  MOV ECX,ESP
0041fa56  MOV EDX,dword ptr [EAX]
0041fa58  MOV dword ptr [ECX],EDX
0041fa5a  MOV EDX,dword ptr [EAX + 0x4]
0041fa5d  MOV dword ptr [ECX + 0x4],EDX
0041fa60  MOV EAX,dword ptr [EAX + 0x8]
0041fa63  MOV dword ptr [ECX + 0x8],EAX
0041fa66  MOV ECX,dword ptr [EBP + 0xffffff68]
0041fa6c  MOV EDX,dword ptr [ECX + 0x3e4]
0041fa72  MOV EAX,dword ptr [EBP + 0xffffff68]
0041fa78  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041fa7f  CALL 0x004012c6
0041fa84  PUSH 0xbf48f5c3
0041fa89  PUSH 0x40e00000
0041fa8e  PUSH 0x0
0041fa90  PUSH 0xc0e00000
0041fa95  LEA ECX,[EBP + -0x64]
0041fa98  CALL 0x00401348
0041fa9d  SUB ESP,0xc
0041faa0  MOV ECX,ESP
0041faa2  MOV EDX,dword ptr [EAX]
0041faa4  MOV dword ptr [ECX],EDX
0041faa6  MOV EDX,dword ptr [EAX + 0x4]
0041faa9  MOV dword ptr [ECX + 0x4],EDX
0041faac  MOV EAX,dword ptr [EAX + 0x8]
0041faaf  MOV dword ptr [ECX + 0x8],EAX
0041fab2  MOV ECX,dword ptr [EBP + 0xffffff68]
0041fab8  MOV EDX,dword ptr [ECX + 0x3e8]
0041fabe  MOV EAX,dword ptr [EBP + 0xffffff68]
0041fac4  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041facb  CALL 0x004012c6
0041fad0  PUSH 0x3fc91687
0041fad5  PUSH 0x0
0041fad7  PUSH 0x0
0041fad9  PUSH 0x40000000
0041fade  LEA ECX,[EBP + -0x70]
0041fae1  CALL 0x00401348
0041fae6  SUB ESP,0xc
0041fae9  MOV ECX,ESP
0041faeb  MOV EDX,dword ptr [EAX]
0041faed  MOV dword ptr [ECX],EDX
0041faef  MOV EDX,dword ptr [EAX + 0x4]
0041faf2  MOV dword ptr [ECX + 0x4],EDX
0041faf5  MOV EAX,dword ptr [EAX + 0x8]
0041faf8  MOV dword ptr [ECX + 0x8],EAX
0041fafb  MOV ECX,dword ptr [EBP + 0xffffff68]
0041fb01  MOV EDX,dword ptr [ECX + 0x3ec]
0041fb07  MOV EAX,dword ptr [EBP + 0xffffff68]
0041fb0d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041fb14  CALL 0x004012c6
0041fb19  PUSH 0x0
0041fb1b  PUSH 0x41b80000
0041fb20  PUSH 0x0
0041fb22  PUSH 0x0
0041fb24  LEA ECX,[EBP + -0x7c]
0041fb27  CALL 0x00401348
0041fb2c  SUB ESP,0xc
0041fb2f  MOV ECX,ESP
0041fb31  MOV EDX,dword ptr [EAX]
0041fb33  MOV dword ptr [ECX],EDX
0041fb35  MOV EDX,dword ptr [EAX + 0x4]
0041fb38  MOV dword ptr [ECX + 0x4],EDX
0041fb3b  MOV EAX,dword ptr [EAX + 0x8]
0041fb3e  MOV dword ptr [ECX + 0x8],EAX
0041fb41  MOV ECX,dword ptr [EBP + 0xffffff68]
0041fb47  MOV EDX,dword ptr [ECX + 0x3f0]
0041fb4d  MOV EAX,dword ptr [EBP + 0xffffff68]
0041fb53  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041fb5a  CALL 0x004012c6
0041fb5f  PUSH 0x0
0041fb61  PUSH 0x41b80000
0041fb66  PUSH 0x0
0041fb68  PUSH 0xc0400000
0041fb6d  LEA ECX,[EBP + 0xffffff78]
0041fb73  CALL 0x00401348
0041fb78  SUB ESP,0xc
0041fb7b  MOV ECX,ESP
0041fb7d  MOV EDX,dword ptr [EAX]
0041fb7f  MOV dword ptr [ECX],EDX
0041fb81  MOV EDX,dword ptr [EAX + 0x4]
0041fb84  MOV dword ptr [ECX + 0x4],EDX
0041fb87  MOV EAX,dword ptr [EAX + 0x8]
0041fb8a  MOV dword ptr [ECX + 0x8],EAX
0041fb8d  MOV ECX,dword ptr [EBP + 0xffffff68]
0041fb93  MOV EDX,dword ptr [ECX + 0x3f4]
0041fb99  MOV EAX,dword ptr [EBP + 0xffffff68]
0041fb9f  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041fba6  CALL 0x004012c6
0041fbab  PUSH 0x0
0041fbad  PUSH 0x41b80000
0041fbb2  PUSH 0x0
0041fbb4  PUSH 0x40400000
0041fbb9  LEA ECX,[EBP + 0xffffff6c]
0041fbbf  CALL 0x00401348
0041fbc4  SUB ESP,0xc
0041fbc7  MOV ECX,ESP
0041fbc9  MOV EDX,dword ptr [EAX]
0041fbcb  MOV dword ptr [ECX],EDX
0041fbcd  MOV EDX,dword ptr [EAX + 0x4]
0041fbd0  MOV dword ptr [ECX + 0x4],EDX
0041fbd3  MOV EAX,dword ptr [EAX + 0x8]
0041fbd6  MOV dword ptr [ECX + 0x8],EAX
0041fbd9  MOV ECX,dword ptr [EBP + 0xffffff68]
0041fbdf  MOV EDX,dword ptr [ECX + 0x3f8]
0041fbe5  MOV EAX,dword ptr [EBP + 0xffffff68]
0041fbeb  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041fbf2  CALL 0x004012c6
0041fbf7  MOV ECX,dword ptr [EBP + 0xffffff68]
0041fbfd  MOV ECX,dword ptr [ECX + 0xc0]
0041fc03  CALL 0x0040100a
0041fc08  PUSH 0x1
0041fc0a  MOV ECX,dword ptr [EBP + 0xffffff68]
0041fc10  CALL 0x0040117c
0041fc15  MOV EDX,dword ptr [EBP + 0xffffff68]
0041fc1b  MOV byte ptr [EDX + 0x398],0x0
0041fc22  MOV EAX,dword ptr [EBP + 0xffffff68]
0041fc28  MOV byte ptr [EAX + 0x3a5],0x1
0041fc2f  MOV ECX,dword ptr [EBP + 0xffffff68]
0041fc35  MOV byte ptr [ECX + 0x3a4],0x1
0041fc3c  MOV EDX,dword ptr [EBP + 0xffffff68]
0041fc42  MOV byte ptr [EDX + 0x3a7],0x1
0041fc49  MOV EAX,dword ptr [EBP + 0xffffff68]
0041fc4f  MOV dword ptr [EAX + 0x39c],0x0
0041fc59  MOV ECX,dword ptr [EBP + 0xffffff68]
0041fc5f  MOV dword ptr [ECX + 0x3e0],0x42b40000
0041fc69  MOV EDX,dword ptr [EBP + 0xffffff68]
0041fc6f  MOV byte ptr [EDX + 0x414],0x0
0041fc76  MOV EAX,dword ptr [EBP + 0xffffff68]
0041fc7c  MOV dword ptr [EAX + 0x394],0x0
0041fc86  MOV ECX,dword ptr [EBP + 0xffffff68]
0041fc8c  MOV dword ptr [ECX + 0x260],0x0
0041fc96  MOV EDX,dword ptr [EBP + 0xffffff68]
0041fc9c  MOV dword ptr [EDX + 0x258],0x0
0041fca6  MOV EAX,dword ptr [EBP + 0xffffff68]
0041fcac  MOV ECX,dword ptr [EBP + 0xffffff68]
0041fcb2  MOV EDX,dword ptr [ECX + 0x3ec]
0041fcb8  MOV dword ptr [EAX + 0x268],EDX
0041fcbe  MOV EAX,dword ptr [EBP + 0xffffff68]
0041fcc4  MOV dword ptr [EAX + 0x3a0],0x0
0041fcce  MOV dword ptr [EBP + -0x4],0x0
0041fcd5  JMP 0x0041fce0
0041fcd7  MOV ECX,dword ptr [EBP + -0x4]
0041fcda  ADD ECX,0x1
0041fcdd  MOV dword ptr [EBP + -0x4],ECX
0041fce0  CMP dword ptr [EBP + -0x4],0x6
0041fce4  JGE 0x0041fd31
0041fce6  MOV EDX,dword ptr [EBP + -0x4]
0041fce9  MOV EAX,dword ptr [EBP + 0xffffff68]
0041fcef  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3e4]
0041fcf6  MOV EDX,dword ptr [EBP + 0xffffff68]
0041fcfc  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041fd03  CALL 0x00401384
0041fd08  MOV EAX,dword ptr [EBP + -0x4]
0041fd0b  MOV ECX,dword ptr [EBP + 0xffffff68]
0041fd11  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3e4]
0041fd18  MOV EAX,dword ptr [EBP + 0xffffff68]
0041fd1e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041fd25  MOV dword ptr [ECX + 0x190],0x7
0041fd2f  JMP 0x0041fcd7
0041fd31  MOV EDX,dword ptr [EBP + 0xffffff68]
0041fd37  MOV EAX,dword ptr [EDX + 0x3ec]
0041fd3d  MOV ECX,dword ptr [EBP + 0xffffff68]
0041fd43  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041fd4a  MOV dword ptr [EDX + 0x190],0x0
0041fd54  MOV EAX,dword ptr [EBP + 0xffffff68]
0041fd5a  MOV dword ptr [EAX + 0x21c],0x0
0041fd64  MOV ECX,dword ptr [EBP + 0xffffff68]
0041fd6a  MOV dword ptr [ECX + 0x220],0x41400000
0041fd74  MOV EDX,dword ptr [EBP + 0xffffff68]
0041fd7a  MOV dword ptr [EDX + 0x224],0xc1a00000
0041fd84  MOV EAX,dword ptr [EBP + 0xffffff68]
0041fd8a  MOV dword ptr [EAX + 0x228],0x0
0041fd94  MOV ECX,dword ptr [EBP + 0xffffff68]
0041fd9a  MOV dword ptr [ECX + 0x22c],0xbf000000
0041fda4  MOV EDX,dword ptr [EBP + 0xffffff68]
0041fdaa  MOV dword ptr [EDX + 0x230],0x3f800000
0041fdb4  MOV EAX,dword ptr [EBP + 0xffffff68]
0041fdba  MOV dword ptr [EAX + 0x3b8],0x0
0041fdc4  MOV ECX,dword ptr [EBP + 0xffffff68]
0041fdca  MOV dword ptr [ECX + 0x3ac],0x1
0041fdd4  MOV EDX,dword ptr [EBP + 0xffffff68]
0041fdda  MOV EAX,dword ptr [EBP + 0xffffff68]
0041fde0  MOV ECX,dword ptr [EAX + 0x3ec]
0041fde6  MOV dword ptr [EDX + 0x404],ECX
0041fdec  MOV EDX,dword ptr [EBP + 0xffffff68]
0041fdf2  MOV dword ptr [EDX + 0x40c],0x0
0041fdfc  MOV EAX,dword ptr [EBP + 0xffffff68]
0041fe02  MOV byte ptr [EAX + 0x414],0x0
0041fe09  MOV ECX,dword ptr [EBP + 0xffffff68]
0041fe0f  MOV dword ptr [ECX + 0x26c],0x6
0041fe19  JMP 0x0041fe2b
0041fe1b  MOV EDX,dword ptr [EBP + 0xffffff68]
0041fe21  MOV dword ptr [EDX + 0x26c],0x5
0041fe2b  POP ESI
0041fe2c  POP EBX
0041fe2d  MOV ESP,EBP
0041fe2f  POP EBP
0041fe30  RET
