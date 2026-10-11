0042a8fa  PUSH EBP
0042a8fb  MOV EBP,ESP
0042a8fd  SUB ESP,0x84
0042a903  MOV dword ptr [EBP + 0xffffff7c],ECX
0042a909  LEA ECX,[EBP + -0x40]
0042a90c  CALL 0x004011d6
0042a911  LEA ECX,[EBP + -0x80]
0042a914  CALL 0x004011d6
0042a919  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042a91f  MOV dword ptr [EAX + 0xf0],0x3f800000
0042a929  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042a92f  MOV dword ptr [ECX + 0xf4],0x3f800000
0042a939  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042a93f  MOV dword ptr [EDX + 0xf8],0x3f800000
0042a949  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042a94f  MOV dword ptr [EAX + 0xfc],0x3f000000
0042a959  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042a95f  MOV dword ptr [ECX + 0x100],0x3f800000
0042a969  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042a96f  MOV dword ptr [EDX + 0x104],0x3f800000
0042a979  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042a97f  MOV dword ptr [EAX + 0x108],0x3f800000
0042a989  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042a98f  ADD ECX,0xf0
0042a995  PUSH ECX
0042a996  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042a99c  MOV EAX,dword ptr [EDX + 0x3c]
0042a99f  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042a9a5  MOV EDX,dword ptr [ECX + 0x3c]
0042a9a8  MOV ECX,dword ptr [EDX]
0042a9aa  PUSH EAX
0042a9ab  CALL dword ptr [ECX + 0x40]
0042a9ae  PUSH 0x454260 {'basket\\efect.tga'}
0042a9b3  CALL 0x004010e6
0042a9b8  ADD ESP,0x4
0042a9bb  PUSH EAX
0042a9bc  PUSH 0x0
0042a9be  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042a9c4  MOV EAX,dword ptr [EDX + 0x3c]
0042a9c7  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042a9cd  MOV EDX,dword ptr [ECX + 0x3c]
0042a9d0  MOV ECX,dword ptr [EDX]
0042a9d2  PUSH EAX
0042a9d3  CALL dword ptr [ECX + 0x8c]
0042a9d9  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042a9df  MOV EAX,dword ptr [EDX + 0x264]
0042a9e5  PUSH EAX
0042a9e6  LEA ECX,[EBP + -0x40]
0042a9e9  PUSH ECX
0042a9ea  CALL 0x004011f4
0042a9ef  ADD ESP,0x8
0042a9f2  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042a9f8  MOV EAX,dword ptr [EDX + 0x260]
0042a9fe  PUSH EAX
0042a9ff  LEA ECX,[EBP + -0x80]
0042aa02  PUSH ECX
0042aa03  CALL 0x00401375
0042aa08  ADD ESP,0x8
0042aa0b  LEA EDX,[EBP + -0x80]
0042aa0e  PUSH EDX
0042aa0f  LEA EAX,[EBP + -0x40]
0042aa12  PUSH EAX
0042aa13  LEA ECX,[EBP + -0x40]
0042aa16  PUSH ECX
0042aa17  CALL 0x0040108c
0042aa1c  ADD ESP,0xc
0042aa1f  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042aa25  FLD float ptr [EDX + 0x250]
0042aa2b  FCOMP float ptr [0x0044e464] {0.7}
0042aa31  FNSTSW AX
0042aa33  TEST AH,0x41
0042aa36  JNZ 0x0042aa6d
0042aa38  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042aa3e  MOV ECX,dword ptr [EAX + 0x254]
0042aa44  PUSH ECX
0042aa45  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042aa4b  MOV EAX,dword ptr [EDX + 0x250]
0042aa51  PUSH EAX
0042aa52  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042aa58  MOV EDX,dword ptr [ECX + 0x24c]
0042aa5e  PUSH EDX
0042aa5f  LEA EAX,[EBP + -0x80]
0042aa62  PUSH EAX
0042aa63  CALL 0x0040121c
0042aa68  ADD ESP,0x10
0042aa6b  JMP 0x0042aa98
0042aa6d  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042aa73  MOV EDX,dword ptr [ECX + 0x254]
0042aa79  PUSH EDX
0042aa7a  PUSH 0x3f333333
0042aa7f  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042aa85  MOV ECX,dword ptr [EAX + 0x24c]
0042aa8b  PUSH ECX
0042aa8c  LEA EDX,[EBP + -0x80]
0042aa8f  PUSH EDX
0042aa90  CALL 0x0040121c
0042aa95  ADD ESP,0x10
0042aa98  LEA EAX,[EBP + -0x80]
0042aa9b  PUSH EAX
0042aa9c  LEA ECX,[EBP + -0x40]
0042aa9f  PUSH ECX
0042aaa0  LEA EDX,[EBP + -0x40]
0042aaa3  PUSH EDX
0042aaa4  CALL 0x0040108c
0042aaa9  ADD ESP,0xc
0042aaac  LEA EAX,[EBP + -0x40]
0042aaaf  PUSH EAX
0042aab0  PUSH 0x1
0042aab2  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042aab8  MOV EDX,dword ptr [ECX + 0x3c]
0042aabb  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042aac1  MOV ECX,dword ptr [EAX + 0x3c]
0042aac4  MOV EAX,dword ptr [ECX]
0042aac6  PUSH EDX
0042aac7  CALL dword ptr [EAX + 0x2c]
0042aaca  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042aad0  MOV EDX,dword ptr [ECX + 0x3c]
0042aad3  PUSH EDX
0042aad4  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042aada  MOV ECX,dword ptr [EAX + 0xd0]
0042aae0  CALL 0x0040116d
0042aae5  PUSH 0x0
0042aae7  PUSH 0x0
0042aae9  PUSH 0x420c0000
0042aaee  LEA ECX,[EBP + -0x40]
0042aaf1  PUSH ECX
0042aaf2  CALL 0x0040121c
0042aaf7  ADD ESP,0x10
0042aafa  LEA EDX,[EBP + -0x40]
0042aafd  PUSH EDX
0042aafe  PUSH 0x1
0042ab00  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042ab06  MOV ECX,dword ptr [EAX + 0x3c]
0042ab09  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042ab0f  MOV EAX,dword ptr [EDX + 0x3c]
0042ab12  MOV EDX,dword ptr [EAX]
0042ab14  PUSH ECX
0042ab15  CALL dword ptr [EDX + 0x2c]
0042ab18  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042ab1e  MOV ECX,dword ptr [EAX + 0x3c]
0042ab21  PUSH ECX
0042ab22  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042ab28  MOV ECX,dword ptr [EDX + 0xcc]
0042ab2e  CALL 0x0040116d
0042ab33  PUSH 0x4048f5c3
0042ab38  LEA EAX,[EBP + -0x80]
0042ab3b  PUSH EAX
0042ab3c  CALL 0x00401375
0042ab41  ADD ESP,0x8
0042ab44  PUSH 0x0
0042ab46  PUSH 0x0
0042ab48  PUSH 0xc20c0000
0042ab4d  LEA ECX,[EBP + -0x40]
0042ab50  PUSH ECX
0042ab51  CALL 0x0040121c
0042ab56  ADD ESP,0x10
0042ab59  LEA EDX,[EBP + -0x40]
0042ab5c  PUSH EDX
0042ab5d  LEA EAX,[EBP + -0x80]
0042ab60  PUSH EAX
0042ab61  LEA ECX,[EBP + -0x40]
0042ab64  PUSH ECX
0042ab65  CALL 0x0040108c
0042ab6a  ADD ESP,0xc
0042ab6d  LEA EDX,[EBP + -0x40]
0042ab70  PUSH EDX
0042ab71  PUSH 0x1
0042ab73  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042ab79  MOV ECX,dword ptr [EAX + 0x3c]
0042ab7c  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042ab82  MOV EAX,dword ptr [EDX + 0x3c]
0042ab85  MOV EDX,dword ptr [EAX]
0042ab87  PUSH ECX
0042ab88  CALL dword ptr [EDX + 0x2c]
0042ab8b  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042ab91  MOV ECX,dword ptr [EAX + 0x3c]
0042ab94  PUSH ECX
0042ab95  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042ab9b  MOV ECX,dword ptr [EDX + 0xcc]
0042aba1  CALL 0x0040116d
0042aba6  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042abac  CMP dword ptr [EAX + 0x3ac],0x0
0042abb3  JLE 0x0042adf5
0042abb9  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042abbf  CMP dword ptr [ECX + 0x3ac],0x1
0042abc6  JNZ 0x0042ac2d
0042abc8  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042abce  MOV dword ptr [EDX + 0xf0],0x0
0042abd8  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042abde  MOV dword ptr [EAX + 0xf4],0x0
0042abe8  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042abee  MOV dword ptr [ECX + 0xf8],0x3f800000
0042abf8  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042abfe  MOV dword ptr [EDX + 0x100],0x0
0042ac08  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042ac0e  MOV dword ptr [EAX + 0x104],0x0
0042ac18  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042ac1e  MOV dword ptr [ECX + 0x108],0x3f800000
0042ac28  JMP 0x0042acfe
0042ac2d  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042ac33  CMP dword ptr [EDX + 0x3ac],0x2
0042ac3a  JNZ 0x0042ac9e
0042ac3c  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042ac42  MOV dword ptr [EAX + 0xf0],0x0
0042ac4c  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042ac52  MOV dword ptr [ECX + 0xf4],0x3f800000
0042ac5c  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042ac62  MOV dword ptr [EDX + 0xf8],0x0
0042ac6c  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042ac72  MOV dword ptr [EAX + 0x100],0x0
0042ac7c  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042ac82  MOV dword ptr [ECX + 0x104],0x3f800000
0042ac8c  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042ac92  MOV dword ptr [EDX + 0x108],0x0
0042ac9c  JMP 0x0042acfe
0042ac9e  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042aca4  MOV dword ptr [EAX + 0xf0],0x3f800000
0042acae  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042acb4  MOV dword ptr [ECX + 0xf4],0x0
0042acbe  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042acc4  MOV dword ptr [EDX + 0xf8],0x0
0042acce  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042acd4  MOV dword ptr [EAX + 0x100],0x3f800000
0042acde  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042ace4  MOV dword ptr [ECX + 0x104],0x0
0042acee  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042acf4  MOV dword ptr [EDX + 0x108],0x0
0042acfe  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042ad04  ADD EAX,0xf0
0042ad09  PUSH EAX
0042ad0a  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042ad10  MOV EDX,dword ptr [ECX + 0x3c]
0042ad13  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042ad19  MOV ECX,dword ptr [EAX + 0x3c]
0042ad1c  MOV EAX,dword ptr [ECX]
0042ad1e  PUSH EDX
0042ad1f  CALL dword ptr [EAX + 0x40]
0042ad22  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042ad28  MOV EDX,dword ptr [ECX + 0x3e0]
0042ad2e  PUSH EDX
0042ad2f  LEA EAX,[EBP + -0x80]
0042ad32  PUSH EAX
0042ad33  CALL 0x00401375
0042ad38  ADD ESP,0x8
0042ad3b  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042ad41  MOV EDX,dword ptr [ECX + 0x248]
0042ad47  PUSH EDX
0042ad48  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042ad4e  MOV ECX,dword ptr [EAX + 0x244]
0042ad54  PUSH ECX
0042ad55  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042ad5b  MOV EAX,dword ptr [EDX + 0x240]
0042ad61  PUSH EAX
0042ad62  LEA ECX,[EBP + -0x40]
0042ad65  PUSH ECX
0042ad66  CALL 0x0040121c
0042ad6b  ADD ESP,0x10
0042ad6e  LEA EDX,[EBP + -0x40]
0042ad71  PUSH EDX
0042ad72  LEA EAX,[EBP + -0x80]
0042ad75  PUSH EAX
0042ad76  LEA ECX,[EBP + -0x40]
0042ad79  PUSH ECX
0042ad7a  CALL 0x0040108c
0042ad7f  ADD ESP,0xc
0042ad82  LEA EDX,[EBP + -0x40]
0042ad85  PUSH EDX
0042ad86  PUSH 0x1
0042ad88  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042ad8e  MOV ECX,dword ptr [EAX + 0x3c]
0042ad91  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042ad97  MOV EAX,dword ptr [EDX + 0x3c]
0042ad9a  MOV EDX,dword ptr [EAX]
0042ad9c  PUSH ECX
0042ad9d  CALL dword ptr [EDX + 0x2c]
0042ada0  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042ada6  MOV ECX,dword ptr [EAX + 0x3c]
0042ada9  PUSH ECX
0042adaa  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042adb0  MOV ECX,dword ptr [EDX + 0xd4]
0042adb6  CALL 0x0040116d
0042adbb  PUSH 0x4048f5c3
0042adc0  LEA EAX,[EBP + -0x80]
0042adc3  PUSH EAX
0042adc4  CALL 0x00401375
0042adc9  ADD ESP,0x8
0042adcc  PUSH 0x0
0042adce  PUSH 0x0
0042add0  PUSH 0xc20c0000
0042add5  LEA ECX,[EBP + -0x40]
0042add8  PUSH ECX
0042add9  CALL 0x0040121c
0042adde  ADD ESP,0x10
0042ade1  LEA EDX,[EBP + -0x40]
0042ade4  PUSH EDX
0042ade5  LEA EAX,[EBP + -0x80]
0042ade8  PUSH EAX
0042ade9  LEA ECX,[EBP + -0x40]
0042adec  PUSH ECX
0042aded  CALL 0x0040108c
0042adf2  ADD ESP,0xc
0042adf5  PUSH 0x0
0042adf7  PUSH 0x5
0042adf9  PUSH 0x0
0042adfb  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042ae01  MOV EAX,dword ptr [EDX + 0x3c]
0042ae04  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042ae0a  MOV EDX,dword ptr [ECX + 0x3c]
0042ae0d  MOV ECX,dword ptr [EDX]
0042ae0f  PUSH EAX
0042ae10  CALL dword ptr [ECX + 0x94]
0042ae16  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042ae1c  MOV dword ptr [EDX + 0xf0],0x0
0042ae26  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042ae2c  MOV dword ptr [EAX + 0xf4],0x0
0042ae36  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042ae3c  MOV dword ptr [ECX + 0xf8],0x0
0042ae46  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042ae4c  MOV dword ptr [EDX + 0x100],0x0
0042ae56  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042ae5c  MOV dword ptr [EAX + 0x104],0x0
0042ae66  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042ae6c  MOV dword ptr [ECX + 0x108],0x0
0042ae76  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042ae7c  ADD EDX,0xf0
0042ae82  PUSH EDX
0042ae83  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042ae89  MOV ECX,dword ptr [EAX + 0x3c]
0042ae8c  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042ae92  MOV EAX,dword ptr [EDX + 0x3c]
0042ae95  MOV EDX,dword ptr [EAX]
0042ae97  PUSH ECX
0042ae98  CALL dword ptr [EDX + 0x40]
0042ae9b  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042aea1  ADD EAX,0x1dc
0042aea6  PUSH EAX
0042aea7  LEA ECX,[EBP + -0x40]
0042aeaa  PUSH ECX
0042aeab  LEA EDX,[EBP + -0x40]
0042aeae  PUSH EDX
0042aeaf  CALL 0x0040108c
0042aeb4  ADD ESP,0xc
0042aeb7  LEA EAX,[EBP + -0x40]
0042aeba  PUSH EAX
0042aebb  PUSH 0x1
0042aebd  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042aec3  MOV EDX,dword ptr [ECX + 0x3c]
0042aec6  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042aecc  MOV ECX,dword ptr [EAX + 0x3c]
0042aecf  MOV EAX,dword ptr [ECX]
0042aed1  PUSH EDX
0042aed2  CALL dword ptr [EAX + 0x2c]
0042aed5  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042aedb  MOV EDX,dword ptr [ECX + 0x3c]
0042aede  PUSH EDX
0042aedf  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042aee5  MOV ECX,dword ptr [EAX + 0xcc]
0042aeeb  CALL 0x0040116d
0042aef0  PUSH 0x0
0042aef2  PUSH 0x0
0042aef4  PUSH 0x420c0000
0042aef9  LEA ECX,[EBP + -0x40]
0042aefc  PUSH ECX
0042aefd  CALL 0x0040121c
0042af02  ADD ESP,0x10
0042af05  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042af0b  ADD EDX,0x1dc
0042af11  PUSH EDX
0042af12  LEA EAX,[EBP + -0x40]
0042af15  PUSH EAX
0042af16  LEA ECX,[EBP + -0x40]
0042af19  PUSH ECX
0042af1a  CALL 0x0040108c
0042af1f  ADD ESP,0xc
0042af22  LEA EDX,[EBP + -0x40]
0042af25  PUSH EDX
0042af26  PUSH 0x1
0042af28  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042af2e  MOV ECX,dword ptr [EAX + 0x3c]
0042af31  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042af37  MOV EAX,dword ptr [EDX + 0x3c]
0042af3a  MOV EDX,dword ptr [EAX]
0042af3c  PUSH ECX
0042af3d  CALL dword ptr [EDX + 0x2c]
0042af40  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042af46  MOV ECX,dword ptr [EAX + 0x3c]
0042af49  PUSH ECX
0042af4a  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042af50  MOV ECX,dword ptr [EDX + 0xcc]
0042af56  CALL 0x0040116d
0042af5b  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042af61  FLD float ptr [EAX + 0x250]
0042af67  FCOMP float ptr [0x0044e464] {0.7}
0042af6d  FNSTSW AX
0042af6f  TEST AH,0x41
0042af72  JNZ 0x0042afa9
0042af74  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042af7a  MOV EDX,dword ptr [ECX + 0x254]
0042af80  PUSH EDX
0042af81  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042af87  MOV ECX,dword ptr [EAX + 0x250]
0042af8d  PUSH ECX
0042af8e  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042af94  MOV EAX,dword ptr [EDX + 0x24c]
0042af9a  PUSH EAX
0042af9b  LEA ECX,[EBP + -0x40]
0042af9e  PUSH ECX
0042af9f  CALL 0x0040121c
0042afa4  ADD ESP,0x10
0042afa7  JMP 0x0042afd4
0042afa9  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042afaf  MOV EAX,dword ptr [EDX + 0x254]
0042afb5  PUSH EAX
0042afb6  PUSH 0x3f333333
0042afbb  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042afc1  MOV EDX,dword ptr [ECX + 0x24c]
0042afc7  PUSH EDX
0042afc8  LEA EAX,[EBP + -0x40]
0042afcb  PUSH EAX
0042afcc  CALL 0x0040121c
0042afd1  ADD ESP,0x10
0042afd4  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042afda  ADD ECX,0x1dc
0042afe0  PUSH ECX
0042afe1  LEA EDX,[EBP + -0x40]
0042afe4  PUSH EDX
0042afe5  LEA EAX,[EBP + -0x40]
0042afe8  PUSH EAX
0042afe9  CALL 0x0040108c
0042afee  ADD ESP,0xc
0042aff1  LEA ECX,[EBP + -0x40]
0042aff4  PUSH ECX
0042aff5  PUSH 0x1
0042aff7  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042affd  MOV EAX,dword ptr [EDX + 0x3c]
0042b000  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042b006  MOV EDX,dword ptr [ECX + 0x3c]
0042b009  MOV ECX,dword ptr [EDX]
0042b00b  PUSH EAX
0042b00c  CALL dword ptr [ECX + 0x2c]
0042b00f  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042b015  MOV EAX,dword ptr [EDX + 0x3c]
0042b018  PUSH EAX
0042b019  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042b01f  MOV ECX,dword ptr [ECX + 0xd0]
0042b025  CALL 0x0040116d
0042b02a  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042b030  ADD EDX,0x1dc
0042b036  PUSH EDX
0042b037  PUSH 0x1
0042b039  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042b03f  MOV ECX,dword ptr [EAX + 0x3c]
0042b042  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042b048  MOV EAX,dword ptr [EDX + 0x3c]
0042b04b  MOV EDX,dword ptr [EAX]
0042b04d  PUSH ECX
0042b04e  CALL dword ptr [EDX + 0x2c]
0042b051  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042b057  MOV ECX,dword ptr [EAX + 0x3c]
0042b05a  PUSH ECX
0042b05b  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042b061  MOV ECX,dword ptr [EDX + 0xc8]
0042b067  CALL 0x0040116d
0042b06c  PUSH 0x2
0042b06e  PUSH 0x5
0042b070  PUSH 0x0
0042b072  MOV EAX,dword ptr [EBP + 0xffffff7c]
0042b078  MOV ECX,dword ptr [EAX + 0x3c]
0042b07b  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042b081  MOV EAX,dword ptr [EDX + 0x3c]
0042b084  MOV EDX,dword ptr [EAX]
0042b086  PUSH ECX
0042b087  CALL dword ptr [EDX + 0x94]
0042b08d  LEA EAX,[EBP + -0x40]
0042b090  PUSH EAX
0042b091  CALL 0x00401064
0042b096  ADD ESP,0x4
0042b099  LEA ECX,[EBP + -0x40]
0042b09c  PUSH ECX
0042b09d  PUSH 0x1
0042b09f  MOV EDX,dword ptr [EBP + 0xffffff7c]
0042b0a5  MOV EAX,dword ptr [EDX + 0x3c]
0042b0a8  MOV ECX,dword ptr [EBP + 0xffffff7c]
0042b0ae  MOV EDX,dword ptr [ECX + 0x3c]
0042b0b1  MOV ECX,dword ptr [EDX]
0042b0b3  PUSH EAX
0042b0b4  CALL dword ptr [ECX + 0x2c]
0042b0b7  MOV ESP,EBP
0042b0b9  POP EBP
0042b0ba  RET
