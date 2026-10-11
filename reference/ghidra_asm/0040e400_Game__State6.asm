0040e400  PUSH EBP
0040e401  MOV EBP,ESP
0040e403  SUB ESP,0x730
0040e409  PUSH EBX
0040e40a  PUSH ESI
0040e40b  MOV dword ptr [EBP + 0xfffff994],ECX
0040e411  MOV EAX,dword ptr [EBP + 0xfffff994]
0040e417  MOV ECX,dword ptr [EBP + 0xfffff994]
0040e41d  FLD float ptr [EAX + 0x3e0]
0040e423  FSUB float ptr [ECX + 0x54]
0040e426  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e42c  FSTP float ptr [EDX + 0x3e0]
0040e432  MOV dword ptr [EBP + -0x4],0x0
0040e439  MOV dword ptr [EBP + -0x34],0x0
0040e440  MOV dword ptr [EBP + -0x18],0x461c4000
0040e447  MOV dword ptr [EBP + -0x30],0x461c4000
0040e44e  MOV dword ptr [EBP + -0x14],0x0
0040e455  MOV dword ptr [EBP + -0x10],0x0
0040e45c  MOV dword ptr [EBP + -0x2c],0x0
0040e463  MOV dword ptr [EBP + -0x28],0x0
0040e46a  MOV EAX,dword ptr [EBP + 0xfffff994]
0040e470  FLD float ptr [EAX + 0x3e0]
0040e476  FCOMP float ptr [0x0044e0d0] {0}
0040e47c  FNSTSW AX
0040e47e  TEST AH,0x1
0040e481  JZ 0x0040e6ad
0040e487  MOV ECX,dword ptr [EBP + 0xfffff994]
0040e48d  CMP dword ptr [ECX + 0x3b8],0x5
0040e494  JGE 0x0040e55a
0040e49a  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e4a0  MOV dword ptr [EDX + 0x250],0x3f333333
0040e4aa  MOV EAX,dword ptr [EBP + 0xfffff994]
0040e4b0  MOV dword ptr [EAX + 0x25c],0x0
0040e4ba  MOV ECX,dword ptr [EBP + 0xfffff994]
0040e4c0  MOV dword ptr [ECX + 0x390],0x0
0040e4ca  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e4d0  XOR EAX,EAX
0040e4d2  MOV AL,byte ptr [EDX + 0x3a6]
0040e4d8  TEST EAX,EAX
0040e4da  JZ 0x0040e4fe
0040e4dc  PUSH 0x0
0040e4de  MOV ECX,dword ptr [EBP + 0xfffff994]
0040e4e4  CALL 0x0040117c
0040e4e9  PUSH 0x6
0040e4eb  MOV ECX,dword ptr [EBP + 0xfffff994]
0040e4f1  MOV ECX,dword ptr [ECX + 0xc0]
0040e4f7  CALL 0x00401258
0040e4fc  JMP 0x0040e55a
0040e4fe  PUSH 0x0
0040e500  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e506  MOV ECX,dword ptr [EDX + 0xc0]
0040e50c  CALL 0x00401258
0040e511  MOV dword ptr [EBP + -0x38],0x0
0040e518  JMP 0x0040e523
0040e51a  MOV EAX,dword ptr [EBP + -0x38]
0040e51d  ADD EAX,0x1
0040e520  MOV dword ptr [EBP + -0x38],EAX
0040e523  CMP dword ptr [EBP + -0x38],0x6
0040e527  JGE 0x0040e55a
0040e529  MOV ECX,dword ptr [EBP + -0x38]
0040e52c  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e532  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040e539  MOV dword ptr [EAX + 0x190],0x7
0040e543  MOV ECX,dword ptr [EBP + -0x38]
0040e546  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e54c  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040e553  CALL 0x00401384
0040e558  JMP 0x0040e51a
0040e55a  MOV EAX,dword ptr [EBP + 0xfffff994]
0040e560  MOV ECX,dword ptr [EBP + 0xfffff994]
0040e566  FLD float ptr [EAX + 0x390]
0040e56c  FADD float ptr [ECX + 0x54]
0040e56f  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e575  FSTP float ptr [EDX + 0x390]
0040e57b  MOV EAX,dword ptr [EBP + 0xfffff994]
0040e581  MOV dword ptr [EAX + 0x3b8],0x5
0040e58b  MOV ECX,dword ptr [EBP + 0xfffff994]
0040e591  MOV dword ptr [ECX + 0x39c],0x0
0040e59b  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e5a1  MOV dword ptr [EDX + 0x3a0],0xbf800000
0040e5ab  MOV EAX,dword ptr [EBP + 0xfffff994]
0040e5b1  MOV dword ptr [EAX + 0x3ac],0x0
0040e5bb  MOV ECX,dword ptr [EBP + 0xfffff994]
0040e5c1  MOV dword ptr [ECX + 0x3e0],0x0
0040e5cb  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e5d1  MOV dword ptr [EDX + 0x21c],0x0
0040e5db  MOV EAX,dword ptr [EBP + 0xfffff994]
0040e5e1  MOV dword ptr [EAX + 0x220],0x40c00000
0040e5eb  MOV ECX,dword ptr [EBP + 0xfffff994]
0040e5f1  MOV dword ptr [ECX + 0x224],0xc1a00000
0040e5fb  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e601  MOV dword ptr [EDX + 0x228],0x0
0040e60b  MOV EAX,dword ptr [EBP + 0xfffff994]
0040e611  MOV dword ptr [EAX + 0x22c],0x0
0040e61b  MOV ECX,dword ptr [EBP + 0xfffff994]
0040e621  MOV dword ptr [ECX + 0x230],0x3f800000
0040e62b  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e631  FLD float ptr [EDX + 0x390]
0040e637  FCOMP float ptr [0x0044e0d4] {5}
0040e63d  FNSTSW AX
0040e63f  TEST AH,0x41
0040e642  JNZ 0x0040e6a8
0040e644  MOV EAX,dword ptr [EBP + 0xfffff994]
0040e64a  XOR ECX,ECX
0040e64c  MOV CL,byte ptr [EAX + 0x3a6]
0040e652  TEST ECX,ECX
0040e654  JZ 0x0040e688
0040e656  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e65c  MOV dword ptr [EDX + 0x3b8],0x0
0040e666  MOV EAX,dword ptr [EBP + 0xfffff994]
0040e66c  MOV dword ptr [EAX + 0x26c],0x8
0040e676  MOV ECX,dword ptr [EBP + 0xfffff994]
0040e67c  MOV dword ptr [ECX + 0x390],0x0
0040e686  JMP 0x0040e6a8
0040e688  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e68e  MOV dword ptr [EDX + 0x3b8],0x0
0040e698  MOV EAX,dword ptr [EBP + 0xfffff994]
0040e69e  MOV dword ptr [EAX + 0x26c],0x7
0040e6a8  JMP 0x004199ce
0040e6ad  MOV dword ptr [EBP + -0x1c],0x0
0040e6b4  JMP 0x0040e6bf
0040e6b6  MOV ECX,dword ptr [EBP + -0x1c]
0040e6b9  ADD ECX,0x1
0040e6bc  MOV dword ptr [EBP + -0x1c],ECX
0040e6bf  CMP dword ptr [EBP + -0x1c],0x6
0040e6c3  JGE 0x0040e911
0040e6c9  MOV EDX,dword ptr [EBP + -0x1c]
0040e6cc  MOV EAX,dword ptr [EBP + 0xfffff994]
0040e6d2  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040e6d9  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e6df  FLD float ptr [ECX + 0x158]
0040e6e5  FSUB float ptr [EDX + 0x24c]
0040e6eb  MOV EAX,dword ptr [EBP + -0x1c]
0040e6ee  MOV ECX,dword ptr [EBP + 0xfffff994]
0040e6f4  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040e6fb  MOV EAX,dword ptr [EBP + 0xfffff994]
0040e701  FLD float ptr [EDX + 0x158]
0040e707  FSUB float ptr [EAX + 0x24c]
0040e70d  FMULP
0040e70f  MOV ECX,dword ptr [EBP + -0x1c]
0040e712  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e718  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040e71f  MOV ECX,dword ptr [EBP + 0xfffff994]
0040e725  FLD float ptr [EAX + 0x160]
0040e72b  FSUB float ptr [ECX + 0x254]
0040e731  MOV EDX,dword ptr [EBP + -0x1c]
0040e734  MOV EAX,dword ptr [EBP + 0xfffff994]
0040e73a  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040e741  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e747  FLD float ptr [ECX + 0x160]
0040e74d  FSUB float ptr [EDX + 0x254]
0040e753  FMULP
0040e755  FADDP
0040e757  MOV EAX,dword ptr [EBP + 0xfffff994]
0040e75d  FSTP float ptr [EAX + 0x3bc]
0040e763  MOV ECX,dword ptr [EBP + -0x1c]
0040e766  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e76c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040e773  XOR ECX,ECX
0040e775  MOV CL,byte ptr [EAX + 0x154]
0040e77b  TEST ECX,ECX
0040e77d  JZ 0x0040e84a
0040e783  MOV EDX,dword ptr [EBP + -0x1c]
0040e786  MOV EAX,dword ptr [EBP + 0xfffff994]
0040e78c  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040e793  CMP dword ptr [ECX + 0x190],0x3
0040e79a  JGE 0x0040e7c2
0040e79c  MOV EDX,dword ptr [EBP + -0x14]
0040e79f  MOV dword ptr [EBP + -0x10],EDX
0040e7a2  MOV EAX,dword ptr [EBP + -0x4]
0040e7a5  MOV dword ptr [EBP + -0x14],EAX
0040e7a8  MOV ECX,dword ptr [EBP + -0x1c]
0040e7ab  MOV dword ptr [EBP + -0x4],ECX
0040e7ae  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e7b4  MOV EAX,dword ptr [EDX + 0x3bc]
0040e7ba  MOV dword ptr [EBP + -0x18],EAX
0040e7bd  JMP 0x0040e845
0040e7c2  MOV ECX,dword ptr [EBP + 0xfffff994]
0040e7c8  FLD float ptr [ECX + 0x3bc]
0040e7ce  FCOMP float ptr [EBP + -0x18]
0040e7d1  FNSTSW AX
0040e7d3  TEST AH,0x1
0040e7d6  JZ 0x0040e7e4
0040e7d8  MOV dword ptr [EBP + 0xfffff990],0x1
0040e7e2  JMP 0x0040e7ee
0040e7e4  MOV dword ptr [EBP + 0xfffff990],0x0
0040e7ee  MOV EDX,dword ptr [EBP + -0x1c]
0040e7f1  MOV EAX,dword ptr [EBP + 0xfffff994]
0040e7f7  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040e7fe  XOR EDX,EDX
0040e800  CMP dword ptr [ECX + 0x190],0xf
0040e807  SETL DL
0040e80a  MOV EAX,dword ptr [EBP + 0xfffff990]
0040e810  AND EAX,EDX
0040e812  TEST EAX,EAX
0040e814  JZ 0x0040e839
0040e816  MOV ECX,dword ptr [EBP + -0x14]
0040e819  MOV dword ptr [EBP + -0x10],ECX
0040e81c  MOV EDX,dword ptr [EBP + -0x4]
0040e81f  MOV dword ptr [EBP + -0x14],EDX
0040e822  MOV EAX,dword ptr [EBP + -0x1c]
0040e825  MOV dword ptr [EBP + -0x4],EAX
0040e828  MOV ECX,dword ptr [EBP + 0xfffff994]
0040e82e  MOV EDX,dword ptr [ECX + 0x3bc]
0040e834  MOV dword ptr [EBP + -0x18],EDX
0040e837  JMP 0x0040e845
0040e839  MOV EAX,dword ptr [EBP + -0x14]
0040e83c  MOV dword ptr [EBP + -0x10],EAX
0040e83f  MOV ECX,dword ptr [EBP + -0x1c]
0040e842  MOV dword ptr [EBP + -0x14],ECX
0040e845  JMP 0x0040e90c
0040e84a  MOV EDX,dword ptr [EBP + -0x1c]
0040e84d  MOV EAX,dword ptr [EBP + 0xfffff994]
0040e853  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040e85a  CMP dword ptr [ECX + 0x190],0x3
0040e861  JGE 0x0040e889
0040e863  MOV EDX,dword ptr [EBP + -0x2c]
0040e866  MOV dword ptr [EBP + -0x28],EDX
0040e869  MOV EAX,dword ptr [EBP + -0x34]
0040e86c  MOV dword ptr [EBP + -0x2c],EAX
0040e86f  MOV ECX,dword ptr [EBP + -0x1c]
0040e872  MOV dword ptr [EBP + -0x34],ECX
0040e875  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e87b  MOV EAX,dword ptr [EDX + 0x3bc]
0040e881  MOV dword ptr [EBP + -0x30],EAX
0040e884  JMP 0x0040e90c
0040e889  MOV ECX,dword ptr [EBP + 0xfffff994]
0040e88f  FLD float ptr [ECX + 0x3bc]
0040e895  FCOMP float ptr [EBP + -0x30]
0040e898  FNSTSW AX
0040e89a  TEST AH,0x1
0040e89d  JZ 0x0040e8ab
0040e89f  MOV dword ptr [EBP + 0xfffff98c],0x1
0040e8a9  JMP 0x0040e8b5
0040e8ab  MOV dword ptr [EBP + 0xfffff98c],0x0
0040e8b5  MOV EDX,dword ptr [EBP + -0x1c]
0040e8b8  MOV EAX,dword ptr [EBP + 0xfffff994]
0040e8be  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040e8c5  XOR EDX,EDX
0040e8c7  CMP dword ptr [ECX + 0x190],0xa
0040e8ce  SETL DL
0040e8d1  MOV EAX,dword ptr [EBP + 0xfffff98c]
0040e8d7  AND EAX,EDX
0040e8d9  TEST EAX,EAX
0040e8db  JZ 0x0040e900
0040e8dd  MOV ECX,dword ptr [EBP + -0x2c]
0040e8e0  MOV dword ptr [EBP + -0x28],ECX
0040e8e3  MOV EDX,dword ptr [EBP + -0x34]
0040e8e6  MOV dword ptr [EBP + -0x2c],EDX
0040e8e9  MOV EAX,dword ptr [EBP + -0x1c]
0040e8ec  MOV dword ptr [EBP + -0x34],EAX
0040e8ef  MOV ECX,dword ptr [EBP + 0xfffff994]
0040e8f5  MOV EDX,dword ptr [ECX + 0x3bc]
0040e8fb  MOV dword ptr [EBP + -0x30],EDX
0040e8fe  JMP 0x0040e90c
0040e900  MOV EAX,dword ptr [EBP + -0x2c]
0040e903  MOV dword ptr [EBP + -0x28],EAX
0040e906  MOV ECX,dword ptr [EBP + -0x1c]
0040e909  MOV dword ptr [EBP + -0x2c],ECX
0040e90c  JMP 0x0040e6b6
0040e911  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e917  XOR EAX,EAX
0040e919  MOV AL,byte ptr [EDX + 0x3a6]
0040e91f  TEST EAX,EAX
0040e921  JZ 0x0040e9b6
0040e927  MOV ECX,dword ptr [EBP + -0x14]
0040e92a  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e930  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040e937  MOV ECX,dword ptr [EBP + -0x10]
0040e93a  MOV EDX,dword ptr [EBP + 0xfffff994]
0040e940  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040e947  FLD float ptr [EAX + 0x158]
0040e94d  FCOMP float ptr [ECX + 0x158]
0040e953  FNSTSW AX
0040e955  TEST AH,0x1
0040e958  JZ 0x0040e96c
0040e95a  MOV EDX,dword ptr [EBP + -0x14]
0040e95d  MOV dword ptr [EBP + -0x24],EDX
0040e960  MOV EAX,dword ptr [EBP + -0x10]
0040e963  MOV dword ptr [EBP + -0x14],EAX
0040e966  MOV ECX,dword ptr [EBP + -0x24]
0040e969  MOV dword ptr [EBP + -0x10],ECX
0040e96c  MOV EDX,dword ptr [EBP + -0x2c]
0040e96f  MOV EAX,dword ptr [EBP + 0xfffff994]
0040e975  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040e97c  MOV EDX,dword ptr [EBP + -0x28]
0040e97f  MOV EAX,dword ptr [EBP + 0xfffff994]
0040e985  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040e98c  FLD float ptr [ECX + 0x158]
0040e992  FCOMP float ptr [EDX + 0x158]
0040e998  FNSTSW AX
0040e99a  TEST AH,0x41
0040e99d  JNZ 0x0040e9b1
0040e99f  MOV EAX,dword ptr [EBP + -0x2c]
0040e9a2  MOV dword ptr [EBP + -0x24],EAX
0040e9a5  MOV ECX,dword ptr [EBP + -0x28]
0040e9a8  MOV dword ptr [EBP + -0x2c],ECX
0040e9ab  MOV EDX,dword ptr [EBP + -0x24]
0040e9ae  MOV dword ptr [EBP + -0x28],EDX
0040e9b1  JMP 0x0040ea40
0040e9b6  MOV EAX,dword ptr [EBP + -0x14]
0040e9b9  MOV ECX,dword ptr [EBP + 0xfffff994]
0040e9bf  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040e9c6  MOV EAX,dword ptr [EBP + -0x10]
0040e9c9  MOV ECX,dword ptr [EBP + 0xfffff994]
0040e9cf  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040e9d6  FLD float ptr [EDX + 0x158]
0040e9dc  FCOMP float ptr [EAX + 0x158]
0040e9e2  FNSTSW AX
0040e9e4  TEST AH,0x41
0040e9e7  JNZ 0x0040e9fb
0040e9e9  MOV ECX,dword ptr [EBP + -0x14]
0040e9ec  MOV dword ptr [EBP + -0x24],ECX
0040e9ef  MOV EDX,dword ptr [EBP + -0x10]
0040e9f2  MOV dword ptr [EBP + -0x14],EDX
0040e9f5  MOV EAX,dword ptr [EBP + -0x24]
0040e9f8  MOV dword ptr [EBP + -0x10],EAX
0040e9fb  MOV ECX,dword ptr [EBP + -0x2c]
0040e9fe  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ea04  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040ea0b  MOV ECX,dword ptr [EBP + -0x28]
0040ea0e  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ea14  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040ea1b  FLD float ptr [EAX + 0x158]
0040ea21  FCOMP float ptr [ECX + 0x158]
0040ea27  FNSTSW AX
0040ea29  TEST AH,0x1
0040ea2c  JZ 0x0040ea40
0040ea2e  MOV EDX,dword ptr [EBP + -0x2c]
0040ea31  MOV dword ptr [EBP + -0x24],EDX
0040ea34  MOV EAX,dword ptr [EBP + -0x28]
0040ea37  MOV dword ptr [EBP + -0x2c],EAX
0040ea3a  MOV ECX,dword ptr [EBP + -0x24]
0040ea3d  MOV dword ptr [EBP + -0x28],ECX
0040ea40  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ea46  CMP dword ptr [EDX + 0x418],0x1
0040ea4d  JNZ 0x0040eac3
0040ea4f  MOV EAX,dword ptr [EBP + 0xfffff994]
0040ea55  MOV byte ptr [EAX + 0x414],0x1
0040ea5c  MOV ECX,dword ptr [EBP + 0xfffff994]
0040ea62  MOV dword ptr [ECX + 0x390],0x0
0040ea6c  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ea72  MOV EAX,dword ptr [EBP + -0x4]
0040ea75  MOV dword ptr [EDX + 0x408],EAX
0040ea7b  PUSH 0x0
0040ea7d  MOV ECX,dword ptr [EBP + 0xfffff994]
0040ea83  MOV ECX,dword ptr [ECX + 0xc0]
0040ea89  CALL 0x00401258
0040ea8e  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ea94  MOV dword ptr [EDX + 0x40c],0x2
0040ea9e  MOV EAX,dword ptr [EBP + 0xfffff994]
0040eaa4  MOV dword ptr [EAX + 0x410],0xc0400000
0040eaae  MOV ECX,dword ptr [EBP + 0xfffff994]
0040eab4  MOV dword ptr [ECX + 0x418],0x5
0040eabe  JMP 0x0040ec44
0040eac3  MOV EDX,dword ptr [EBP + 0xfffff994]
0040eac9  CMP dword ptr [EDX + 0x418],0x2
0040ead0  JNZ 0x0040eb46
0040ead2  MOV EAX,dword ptr [EBP + 0xfffff994]
0040ead8  MOV byte ptr [EAX + 0x414],0x1
0040eadf  MOV ECX,dword ptr [EBP + 0xfffff994]
0040eae5  MOV dword ptr [ECX + 0x390],0x0
0040eaef  MOV EDX,dword ptr [EBP + 0xfffff994]
0040eaf5  MOV EAX,dword ptr [EBP + -0x34]
0040eaf8  MOV dword ptr [EDX + 0x408],EAX
0040eafe  PUSH 0x0
0040eb00  MOV ECX,dword ptr [EBP + 0xfffff994]
0040eb06  MOV ECX,dword ptr [ECX + 0xc0]
0040eb0c  CALL 0x00401258
0040eb11  MOV EDX,dword ptr [EBP + 0xfffff994]
0040eb17  MOV dword ptr [EDX + 0x40c],0x1
0040eb21  MOV EAX,dword ptr [EBP + 0xfffff994]
0040eb27  MOV dword ptr [EAX + 0x410],0xc0400000
0040eb31  MOV ECX,dword ptr [EBP + 0xfffff994]
0040eb37  MOV dword ptr [ECX + 0x418],0x5
0040eb41  JMP 0x0040ec44
0040eb46  MOV EDX,dword ptr [EBP + 0xfffff994]
0040eb4c  CMP dword ptr [EDX + 0x418],0x3
0040eb53  JNZ 0x0040ebc6
0040eb55  MOV EAX,dword ptr [EBP + 0xfffff994]
0040eb5b  MOV byte ptr [EAX + 0x414],0x1
0040eb62  MOV ECX,dword ptr [EBP + 0xfffff994]
0040eb68  MOV dword ptr [ECX + 0x390],0x0
0040eb72  MOV EDX,dword ptr [EBP + 0xfffff994]
0040eb78  MOV EAX,dword ptr [EBP + -0x34]
0040eb7b  MOV dword ptr [EDX + 0x408],EAX
0040eb81  PUSH 0x0
0040eb83  MOV ECX,dword ptr [EBP + 0xfffff994]
0040eb89  MOV ECX,dword ptr [ECX + 0xc0]
0040eb8f  CALL 0x00401258
0040eb94  MOV EDX,dword ptr [EBP + 0xfffff994]
0040eb9a  MOV dword ptr [EDX + 0x40c],0x2
0040eba4  MOV EAX,dword ptr [EBP + 0xfffff994]
0040ebaa  MOV dword ptr [EAX + 0x410],0xc0400000
0040ebb4  MOV ECX,dword ptr [EBP + 0xfffff994]
0040ebba  MOV dword ptr [ECX + 0x418],0x5
0040ebc4  JMP 0x0040ec44
0040ebc6  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ebcc  CMP dword ptr [EDX + 0x418],0x4
0040ebd3  JNZ 0x0040ec44
0040ebd5  MOV EAX,dword ptr [EBP + 0xfffff994]
0040ebdb  MOV byte ptr [EAX + 0x414],0x1
0040ebe2  MOV ECX,dword ptr [EBP + 0xfffff994]
0040ebe8  MOV dword ptr [ECX + 0x390],0x0
0040ebf2  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ebf8  MOV EAX,dword ptr [EBP + -0x4]
0040ebfb  MOV dword ptr [EDX + 0x408],EAX
0040ec01  PUSH 0x0
0040ec03  MOV ECX,dword ptr [EBP + 0xfffff994]
0040ec09  MOV ECX,dword ptr [ECX + 0xc0]
0040ec0f  CALL 0x00401258
0040ec14  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ec1a  MOV dword ptr [EDX + 0x40c],0x1
0040ec24  MOV EAX,dword ptr [EBP + 0xfffff994]
0040ec2a  MOV dword ptr [EAX + 0x410],0xc0400000
0040ec34  MOV ECX,dword ptr [EBP + 0xfffff994]
0040ec3a  MOV dword ptr [ECX + 0x418],0x5
0040ec44  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ec4a  CMP dword ptr [EDX + 0x40c],0x0
0040ec51  JNZ 0x0040ed67
0040ec57  MOV EAX,dword ptr [EBP + 0xfffff994]
0040ec5d  FLD float ptr [EAX + 0x24c]
0040ec63  FCOMP float ptr [0x0044e0d8] {38}
0040ec69  FNSTSW AX
0040ec6b  TEST AH,0x41
0040ec6e  JNZ 0x0040ec9d
0040ec70  MOV ECX,dword ptr [EBP + 0xfffff994]
0040ec76  MOV dword ptr [ECX + 0x40c],0x1
0040ec80  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ec86  MOV EAX,dword ptr [EBP + 0xfffff994]
0040ec8c  MOV ECX,dword ptr [EAX + 0x254]
0040ec92  MOV dword ptr [EDX + 0x410],ECX
0040ec98  JMP 0x0040ed67
0040ec9d  MOV EDX,dword ptr [EBP + 0xfffff994]
0040eca3  FLD float ptr [EDX + 0x24c]
0040eca9  FCOMP float ptr [0x0044e0dc] {-38}
0040ecaf  FNSTSW AX
0040ecb1  TEST AH,0x1
0040ecb4  JZ 0x0040ece3
0040ecb6  MOV EAX,dword ptr [EBP + 0xfffff994]
0040ecbc  MOV dword ptr [EAX + 0x40c],0x2
0040ecc6  MOV ECX,dword ptr [EBP + 0xfffff994]
0040eccc  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ecd2  MOV EAX,dword ptr [EDX + 0x254]
0040ecd8  MOV dword ptr [ECX + 0x410],EAX
0040ecde  JMP 0x0040ed67
0040ece3  MOV ECX,dword ptr [EBP + 0xfffff994]
0040ece9  FLD float ptr [ECX + 0x254]
0040ecef  FCOMP float ptr [0x0044e0e0] {19}
0040ecf5  FNSTSW AX
0040ecf7  TEST AH,0x41
0040ecfa  JNZ 0x0040ed26
0040ecfc  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ed02  MOV dword ptr [EDX + 0x40c],0x3
0040ed0c  MOV EAX,dword ptr [EBP + 0xfffff994]
0040ed12  MOV ECX,dword ptr [EBP + 0xfffff994]
0040ed18  MOV EDX,dword ptr [ECX + 0x24c]
0040ed1e  MOV dword ptr [EAX + 0x410],EDX
0040ed24  JMP 0x0040ed67
0040ed26  MOV EAX,dword ptr [EBP + 0xfffff994]
0040ed2c  FLD float ptr [EAX + 0x254]
0040ed32  FCOMP float ptr [0x0044e0e4] {-19}
0040ed38  FNSTSW AX
0040ed3a  TEST AH,0x1
0040ed3d  JZ 0x0040ed67
0040ed3f  MOV ECX,dword ptr [EBP + 0xfffff994]
0040ed45  MOV dword ptr [ECX + 0x40c],0x4
0040ed4f  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ed55  MOV EAX,dword ptr [EBP + 0xfffff994]
0040ed5b  MOV ECX,dword ptr [EAX + 0x24c]
0040ed61  MOV dword ptr [EDX + 0x410],ECX
0040ed67  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ed6d  FLD float ptr [EDX + 0x250]
0040ed73  FCOMP float ptr [0x0044e0e8] {1}
0040ed79  FNSTSW AX
0040ed7b  TEST AH,0x1
0040ed7e  JZ 0x0040ed8c
0040ed80  MOV dword ptr [EBP + 0xfffff988],0x1
0040ed8a  JMP 0x0040ed96
0040ed8c  MOV dword ptr [EBP + 0xfffff988],0x0
0040ed96  MOV EAX,dword ptr [EBP + 0xfffff994]
0040ed9c  XOR ECX,ECX
0040ed9e  MOV CL,byte ptr [EAX + 0x414]
0040eda4  NEG ECX
0040eda6  SBB ECX,ECX
0040eda8  INC ECX
0040eda9  AND ECX,dword ptr [EBP + 0xfffff988]
0040edaf  TEST ECX,ECX
0040edb1  JZ 0x0040ef25
0040edb7  MOV EDX,dword ptr [EBP + 0xfffff994]
0040edbd  FLD float ptr [EDX + 0x24c]
0040edc3  FCOMP float ptr [0x0044e0d8] {38}
0040edc9  FNSTSW AX
0040edcb  TEST AH,0x41
0040edce  JNZ 0x0040eddc
0040edd0  MOV dword ptr [EBP + 0xfffff984],0x1
0040edda  JMP 0x0040ede6
0040eddc  MOV dword ptr [EBP + 0xfffff984],0x0
0040ede6  MOV EAX,dword ptr [EBP + 0xfffff994]
0040edec  FLD float ptr [EAX + 0x24c]
0040edf2  FCOMP float ptr [0x0044e0dc] {-38}
0040edf8  FNSTSW AX
0040edfa  TEST AH,0x1
0040edfd  JZ 0x0040ee0b
0040edff  MOV dword ptr [EBP + 0xfffff980],0x1
0040ee09  JMP 0x0040ee15
0040ee0b  MOV dword ptr [EBP + 0xfffff980],0x0
0040ee15  MOV ECX,dword ptr [EBP + 0xfffff994]
0040ee1b  FLD float ptr [ECX + 0x254]
0040ee21  FCOMP float ptr [0x0044e0e0] {19}
0040ee27  FNSTSW AX
0040ee29  TEST AH,0x41
0040ee2c  JNZ 0x0040ee3a
0040ee2e  MOV dword ptr [EBP + 0xfffff97c],0x1
0040ee38  JMP 0x0040ee44
0040ee3a  MOV dword ptr [EBP + 0xfffff97c],0x0
0040ee44  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ee4a  FLD float ptr [EDX + 0x254]
0040ee50  FCOMP float ptr [0x0044e0e4] {-19}
0040ee56  FNSTSW AX
0040ee58  TEST AH,0x1
0040ee5b  JZ 0x0040ee69
0040ee5d  MOV dword ptr [EBP + 0xfffff978],0x1
0040ee67  JMP 0x0040ee73
0040ee69  MOV dword ptr [EBP + 0xfffff978],0x0
0040ee73  MOV EAX,dword ptr [EBP + 0xfffff984]
0040ee79  OR EAX,dword ptr [EBP + 0xfffff980]
0040ee7f  OR EAX,dword ptr [EBP + 0xfffff97c]
0040ee85  OR EAX,dword ptr [EBP + 0xfffff978]
0040ee8b  TEST EAX,EAX
0040ee8d  JZ 0x0040eef8
0040ee8f  MOV ECX,dword ptr [EBP + 0xfffff994]
0040ee95  MOV byte ptr [ECX + 0x414],0x1
0040ee9c  MOV EDX,dword ptr [EBP + 0xfffff994]
0040eea2  MOV dword ptr [EDX + 0x390],0x0
0040eeac  MOV EAX,dword ptr [EBP + 0xfffff994]
0040eeb2  MOV ECX,dword ptr [EBP + 0xfffff994]
0040eeb8  MOV EDX,dword ptr [ECX + 0x404]
0040eebe  MOV dword ptr [EAX + 0x408],EDX
0040eec4  PUSH 0x6
0040eec6  MOV EAX,dword ptr [EBP + 0xfffff994]
0040eecc  MOV ECX,dword ptr [EAX + 0xc0]
0040eed2  CALL 0x00401258
0040eed7  MOV ECX,dword ptr [EBP + 0xfffff994]
0040eedd  CMP dword ptr [ECX + 0x268],0x0
0040eee4  JLE 0x0040eef6
0040eee6  MOV EDX,dword ptr [EBP + 0xfffff994]
0040eeec  MOV dword ptr [EDX + 0x258],0x0
0040eef6  JMP 0x0040ef25
0040eef8  MOV EAX,dword ptr [EBP + 0xfffff994]
0040eefe  MOV byte ptr [EAX + 0x414],0x0
0040ef05  MOV ECX,dword ptr [EBP + 0xfffff994]
0040ef0b  MOV dword ptr [ECX + 0x40c],0x0
0040ef15  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ef1b  MOV dword ptr [EDX + 0x410],0x0
0040ef25  MOV EAX,dword ptr [EBP + 0xfffff994]
0040ef2b  XOR ECX,ECX
0040ef2d  MOV CL,byte ptr [EAX + 0x414]
0040ef33  TEST ECX,ECX
0040ef35  JZ 0x00411b29
0040ef3b  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ef41  MOV EAX,dword ptr [EBP + 0xfffff994]
0040ef47  FLD float ptr [EDX + 0x390]
0040ef4d  FADD float ptr [EAX + 0x54]
0040ef50  MOV ECX,dword ptr [EBP + 0xfffff994]
0040ef56  FSTP float ptr [ECX + 0x390]
0040ef5c  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ef62  FLD float ptr [EDX + 0x390]
0040ef68  FCOMP float ptr [0x0044e0ec] {3}
0040ef6e  FNSTSW AX
0040ef70  TEST AH,0x41
0040ef73  JNZ 0x00411ae5
0040ef79  PUSH 0x1
0040ef7b  MOV ECX,dword ptr [EBP + 0xfffff994]
0040ef81  CALL 0x0040117c
0040ef86  MOV EAX,dword ptr [EBP + 0xfffff994]
0040ef8c  MOV dword ptr [EAX + 0x418],0x0
0040ef96  MOV dword ptr [EBP + -0x18],0x42c80000
0040ef9d  MOV dword ptr [EBP + -0x30],0x42c80000
0040efa4  MOV dword ptr [EBP + -0x3c],0x0
0040efab  JMP 0x0040efb6
0040efad  MOV ECX,dword ptr [EBP + -0x3c]
0040efb0  ADD ECX,0x1
0040efb3  MOV dword ptr [EBP + -0x3c],ECX
0040efb6  CMP dword ptr [EBP + -0x3c],0x6
0040efba  JGE 0x0040efed
0040efbc  MOV EDX,dword ptr [EBP + -0x3c]
0040efbf  MOV EAX,dword ptr [EBP + 0xfffff994]
0040efc5  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040efcc  MOV dword ptr [ECX + 0x190],0x7
0040efd6  MOV EDX,dword ptr [EBP + -0x3c]
0040efd9  MOV EAX,dword ptr [EBP + 0xfffff994]
0040efdf  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040efe6  CALL 0x00401384
0040efeb  JMP 0x0040efad
0040efed  MOV ECX,dword ptr [EBP + 0xfffff994]
0040eff3  CMP dword ptr [ECX + 0x40c],0x1
0040effa  JNZ 0x0040faf5
0040f000  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f006  CMP dword ptr [EDX + 0x3b0],0x2
0040f00d  JNZ 0x0040f3a7
0040f013  PUSH 0x3fc51eb8
0040f018  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f01e  MOV ECX,dword ptr [EAX + 0x410]
0040f024  PUSH ECX
0040f025  PUSH 0x0
0040f027  PUSH 0x42200000
0040f02c  LEA ECX,[EBP + -0x68]
0040f02f  CALL 0x00401348
0040f034  SUB ESP,0xc
0040f037  MOV EDX,ESP
0040f039  MOV ECX,dword ptr [EAX]
0040f03b  MOV dword ptr [EDX],ECX
0040f03d  MOV ECX,dword ptr [EAX + 0x4]
0040f040  MOV dword ptr [EDX + 0x4],ECX
0040f043  MOV EAX,dword ptr [EAX + 0x8]
0040f046  MOV dword ptr [EDX + 0x8],EAX
0040f049  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f04f  MOV EDX,dword ptr [ECX + 0x3f8]
0040f055  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f05b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040f062  CALL 0x004012c6
0040f067  PUSH 0x1
0040f069  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f06f  MOV ECX,dword ptr [ECX + 0xc0]
0040f075  CALL 0x00401258
0040f07a  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f080  MOV EAX,dword ptr [EDX + 0x3f8]
0040f086  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f08c  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040f093  MOV dword ptr [EDX + 0x198],0x0
0040f09d  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f0a3  MOV ECX,dword ptr [EAX + 0x3f8]
0040f0a9  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f0af  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040f0b6  MOV dword ptr [EAX + 0x164],0x3fc51eb8
0040f0c0  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f0c6  MOV EDX,dword ptr [ECX + 0x3f8]
0040f0cc  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f0d2  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040f0d9  MOV dword ptr [ECX + 0x190],0xa
0040f0e3  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f0e9  MOV EAX,dword ptr [EDX + 0x3f8]
0040f0ef  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f0f5  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040f0fc  CALL 0x00401163
0040f101  PUSH 0xbfc51eb8
0040f106  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f10c  MOV EAX,dword ptr [EDX + 0x410]
0040f112  PUSH EAX
0040f113  PUSH 0x0
0040f115  PUSH 0x41200000
0040f11a  LEA ECX,[EBP + -0x74]
0040f11d  CALL 0x00401348
0040f122  SUB ESP,0xc
0040f125  MOV ECX,ESP
0040f127  MOV EDX,dword ptr [EAX]
0040f129  MOV dword ptr [ECX],EDX
0040f12b  MOV EDX,dword ptr [EAX + 0x4]
0040f12e  MOV dword ptr [ECX + 0x4],EDX
0040f131  MOV EAX,dword ptr [EAX + 0x8]
0040f134  MOV dword ptr [ECX + 0x8],EAX
0040f137  MOV ECX,dword ptr [EBP + -0x4]
0040f13a  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f140  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040f147  CALL 0x004012c6
0040f14c  PUSH 0xbfc51eb8
0040f151  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f157  FLD float ptr [EAX + 0x410]
0040f15d  FADD float ptr [0x0044e0d4] {5}
0040f163  PUSH ECX
0040f164  FSTP float ptr [ESP]
0040f167  PUSH 0x0
0040f169  PUSH 0x41700000
0040f16e  LEA ECX,[EBP + -0x80]
0040f171  CALL 0x00401348
0040f176  SUB ESP,0xc
0040f179  MOV ECX,ESP
0040f17b  MOV EDX,dword ptr [EAX]
0040f17d  MOV dword ptr [ECX],EDX
0040f17f  MOV EDX,dword ptr [EAX + 0x4]
0040f182  MOV dword ptr [ECX + 0x4],EDX
0040f185  MOV EAX,dword ptr [EAX + 0x8]
0040f188  MOV dword ptr [ECX + 0x8],EAX
0040f18b  MOV ECX,dword ptr [EBP + -0x14]
0040f18e  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f194  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040f19b  CALL 0x004012c6
0040f1a0  PUSH 0xbfc51eb8
0040f1a5  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f1ab  FLD float ptr [EAX + 0x410]
0040f1b1  FSUB float ptr [0x0044e0d4] {5}
0040f1b7  PUSH ECX
0040f1b8  FSTP float ptr [ESP]
0040f1bb  PUSH 0x0
0040f1bd  PUSH 0x41800000
0040f1c2  LEA ECX,[EBP + 0xffffff74]
0040f1c8  CALL 0x00401348
0040f1cd  SUB ESP,0xc
0040f1d0  MOV ECX,ESP
0040f1d2  MOV EDX,dword ptr [EAX]
0040f1d4  MOV dword ptr [ECX],EDX
0040f1d6  MOV EDX,dword ptr [EAX + 0x4]
0040f1d9  MOV dword ptr [ECX + 0x4],EDX
0040f1dc  MOV EAX,dword ptr [EAX + 0x8]
0040f1df  MOV dword ptr [ECX + 0x8],EAX
0040f1e2  MOV ECX,dword ptr [EBP + -0x10]
0040f1e5  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f1eb  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040f1f2  CALL 0x004012c6
0040f1f7  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f1fd  MOV ECX,dword ptr [EAX + 0x3f8]
0040f203  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f209  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040f210  FLD float ptr [EAX + 0x164]
0040f216  FSUB float ptr [0x0044e0f0] {3.14}
0040f21c  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f222  FSTP float ptr [ECX + 0x260]
0040f228  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f22e  MOV EAX,dword ptr [EDX + 0x3f8]
0040f234  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f23a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040f241  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f247  MOV ECX,dword ptr [EDX + 0x174]
0040f24d  MOV dword ptr [EAX + 0x25c],ECX
0040f253  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f259  MOV EAX,dword ptr [EDX + 0x3f8]
0040f25f  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f265  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040f26c  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f272  MOV ECX,dword ptr [EDX + 0x178]
0040f278  MOV dword ptr [EAX + 0x258],ECX
0040f27e  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f284  MOV EAX,dword ptr [EDX + 0x3f8]
0040f28a  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f290  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040f297  FLD float ptr [EDX + 0x164]
0040f29d  FCHS
0040f29f  PUSH ECX
0040f2a0  FSTP float ptr [ESP]
0040f2a3  CALL 0x00401262
0040f2a8  ADD ESP,0x4
0040f2ab  FCHS
0040f2ad  FMUL float ptr [0x0044e0f4] {-2}
0040f2b3  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f2b9  MOV ECX,dword ptr [EAX + 0x3f8]
0040f2bf  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f2c5  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040f2cc  FADD float ptr [EAX + 0x158]
0040f2d2  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f2d8  FSTP float ptr [ECX + 0x24c]
0040f2de  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f2e4  MOV EAX,dword ptr [EDX + 0x3f8]
0040f2ea  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f2f0  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040f2f7  FLD float ptr [EDX + 0x170]
0040f2fd  FMUL float ptr [0x0044e0f8] {0.9}
0040f303  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f309  FSTP float ptr [EAX + 0x250]
0040f30f  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f315  MOV EDX,dword ptr [ECX + 0x3f8]
0040f31b  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f321  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040f328  FLD float ptr [ECX + 0x164]
0040f32e  FCHS
0040f330  PUSH ECX
0040f331  FSTP float ptr [ESP]
0040f334  CALL 0x0040136b
0040f339  ADD ESP,0x4
0040f33c  FMUL float ptr [0x0044e0f4] {-2}
0040f342  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f348  MOV EAX,dword ptr [EDX + 0x3f8]
0040f34e  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f354  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040f35b  FADD float ptr [EDX + 0x160]
0040f361  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f367  FSTP float ptr [EAX + 0x254]
0040f36d  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f373  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f379  MOV EAX,dword ptr [EDX + 0x3f8]
0040f37f  MOV dword ptr [ECX + 0x404],EAX
0040f385  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f38b  MOV dword ptr [ECX + 0x268],0xffffffff
0040f395  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f39b  MOV byte ptr [EDX + 0x414],0x0
0040f3a2  JMP 0x0040faf0
0040f3a7  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f3ad  XOR ECX,ECX
0040f3af  MOV CL,byte ptr [EAX + 0x3a6]
0040f3b5  TEST ECX,ECX
0040f3b7  JZ 0x0040f837
0040f3bd  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f3c3  MOV EAX,dword ptr [EDX + 0x408]
0040f3c9  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f3cf  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040f3d6  XOR EAX,EAX
0040f3d8  MOV AL,byte ptr [EDX + 0x154]
0040f3de  TEST EAX,EAX
0040f3e0  JZ 0x0040f7e7
0040f3e6  PUSH 0x3fc51eb8
0040f3eb  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f3f1  MOV EDX,dword ptr [ECX + 0x410]
0040f3f7  PUSH EDX
0040f3f8  PUSH 0x0
0040f3fa  PUSH 0x42180000
0040f3ff  LEA ECX,[EBP + 0xffffff68]
0040f405  CALL 0x00401348
0040f40a  SUB ESP,0xc
0040f40d  MOV ECX,ESP
0040f40f  MOV EDX,dword ptr [EAX]
0040f411  MOV dword ptr [ECX],EDX
0040f413  MOV EDX,dword ptr [EAX + 0x4]
0040f416  MOV dword ptr [ECX + 0x4],EDX
0040f419  MOV EAX,dword ptr [EAX + 0x8]
0040f41c  MOV dword ptr [ECX + 0x8],EAX
0040f41f  MOV ECX,dword ptr [EBP + -0x34]
0040f422  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f428  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040f42f  CALL 0x004012c6
0040f434  PUSH 0xbfc51eb8
0040f439  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f43f  FLD float ptr [EAX + 0x410]
0040f445  FADD float ptr [0x0044e0d4] {5}
0040f44b  PUSH ECX
0040f44c  FSTP float ptr [ESP]
0040f44f  PUSH 0x0
0040f451  PUSH 0x41f00000
0040f456  LEA ECX,[EBP + 0xffffff5c]
0040f45c  CALL 0x00401348
0040f461  SUB ESP,0xc
0040f464  MOV ECX,ESP
0040f466  MOV EDX,dword ptr [EAX]
0040f468  MOV dword ptr [ECX],EDX
0040f46a  MOV EDX,dword ptr [EAX + 0x4]
0040f46d  MOV dword ptr [ECX + 0x4],EDX
0040f470  MOV EAX,dword ptr [EAX + 0x8]
0040f473  MOV dword ptr [ECX + 0x8],EAX
0040f476  MOV ECX,dword ptr [EBP + -0x2c]
0040f479  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f47f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040f486  CALL 0x004012c6
0040f48b  PUSH 0xbfc51eb8
0040f490  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f496  FLD float ptr [EAX + 0x410]
0040f49c  FSUB float ptr [0x0044e0d4] {5}
0040f4a2  PUSH ECX
0040f4a3  FSTP float ptr [ESP]
0040f4a6  PUSH 0x0
0040f4a8  PUSH 0x42000000
0040f4ad  LEA ECX,[EBP + 0xffffff50]
0040f4b3  CALL 0x00401348
0040f4b8  SUB ESP,0xc
0040f4bb  MOV ECX,ESP
0040f4bd  MOV EDX,dword ptr [EAX]
0040f4bf  MOV dword ptr [ECX],EDX
0040f4c1  MOV EDX,dword ptr [EAX + 0x4]
0040f4c4  MOV dword ptr [ECX + 0x4],EDX
0040f4c7  MOV EAX,dword ptr [EAX + 0x8]
0040f4ca  MOV dword ptr [ECX + 0x8],EAX
0040f4cd  MOV ECX,dword ptr [EBP + -0x28]
0040f4d0  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f4d6  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040f4dd  CALL 0x004012c6
0040f4e2  PUSH 0xbfc51eb8
0040f4e7  PUSH 0x40800000
0040f4ec  PUSH 0x0
0040f4ee  PUSH 0x41200000
0040f4f3  LEA ECX,[EBP + 0xffffff44]
0040f4f9  CALL 0x00401348
0040f4fe  SUB ESP,0xc
0040f501  MOV ECX,ESP
0040f503  MOV EDX,dword ptr [EAX]
0040f505  MOV dword ptr [ECX],EDX
0040f507  MOV EDX,dword ptr [EAX + 0x4]
0040f50a  MOV dword ptr [ECX + 0x4],EDX
0040f50d  MOV EAX,dword ptr [EAX + 0x8]
0040f510  MOV dword ptr [ECX + 0x8],EAX
0040f513  MOV ECX,dword ptr [EBP + -0x14]
0040f516  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f51c  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040f523  CALL 0x004012c6
0040f528  PUSH 0x3fc51eb8
0040f52d  PUSH 0xc0800000
0040f532  PUSH 0x0
0040f534  PUSH 0x40000000
0040f539  LEA ECX,[EBP + 0xffffff38]
0040f53f  CALL 0x00401348
0040f544  SUB ESP,0xc
0040f547  MOV ECX,ESP
0040f549  MOV EDX,dword ptr [EAX]
0040f54b  MOV dword ptr [ECX],EDX
0040f54d  MOV EDX,dword ptr [EAX + 0x4]
0040f550  MOV dword ptr [ECX + 0x4],EDX
0040f553  MOV EAX,dword ptr [EAX + 0x8]
0040f556  MOV dword ptr [ECX + 0x8],EAX
0040f559  MOV ECX,dword ptr [EBP + -0x10]
0040f55c  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f562  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040f569  CALL 0x004012c6
0040f56e  PUSH 0x3fc51eb8
0040f573  PUSH 0x0
0040f575  PUSH 0x0
0040f577  PUSH 0x40400000
0040f57c  LEA ECX,[EBP + 0xffffff2c]
0040f582  CALL 0x00401348
0040f587  SUB ESP,0xc
0040f58a  MOV ECX,ESP
0040f58c  MOV EDX,dword ptr [EAX]
0040f58e  MOV dword ptr [ECX],EDX
0040f590  MOV EDX,dword ptr [EAX + 0x4]
0040f593  MOV dword ptr [ECX + 0x4],EDX
0040f596  MOV EAX,dword ptr [EAX + 0x8]
0040f599  MOV dword ptr [ECX + 0x8],EAX
0040f59c  MOV ECX,dword ptr [EBP + -0x4]
0040f59f  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f5a5  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040f5ac  CALL 0x004012c6
0040f5b1  PUSH 0x1
0040f5b3  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f5b9  MOV ECX,dword ptr [EAX + 0xc0]
0040f5bf  CALL 0x00401258
0040f5c4  MOV ECX,dword ptr [EBP + -0x34]
0040f5c7  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f5cd  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040f5d4  MOV dword ptr [EAX + 0x198],0x0
0040f5de  MOV ECX,dword ptr [EBP + -0x34]
0040f5e1  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f5e7  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040f5ee  MOV ECX,dword ptr [EBP + -0x2c]
0040f5f1  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f5f7  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040f5fe  FLD float ptr [EAX + 0x160]
0040f604  FSUB float ptr [ECX + 0x160]
0040f60a  PUSH ECX
0040f60b  FSTP float ptr [ESP]
0040f60e  MOV EDX,dword ptr [EBP + -0x34]
0040f611  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f617  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040f61e  MOV EDX,dword ptr [EBP + -0x2c]
0040f621  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f627  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040f62e  FLD float ptr [ECX + 0x158]
0040f634  FSUB float ptr [EDX + 0x158]
0040f63a  PUSH ECX
0040f63b  FSTP float ptr [ESP]
0040f63e  CALL 0x00401127
0040f643  ADD ESP,0x8
0040f646  MOV EAX,dword ptr [EBP + -0x34]
0040f649  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f64f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040f656  FSTP float ptr [EDX + 0x164]
0040f65c  MOV EAX,dword ptr [EBP + -0x34]
0040f65f  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f665  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040f66c  MOV dword ptr [EDX + 0x190],0xa
0040f676  MOV EAX,dword ptr [EBP + -0x34]
0040f679  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f67f  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040f686  CALL 0x00401163
0040f68b  MOV EDX,dword ptr [EBP + -0x34]
0040f68e  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f694  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040f69b  FLD float ptr [ECX + 0x164]
0040f6a1  FSUB float ptr [0x0044e0f0] {3.14}
0040f6a7  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f6ad  FSTP float ptr [EDX + 0x260]
0040f6b3  MOV EAX,dword ptr [EBP + -0x34]
0040f6b6  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f6bc  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040f6c3  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f6c9  MOV ECX,dword ptr [EDX + 0x174]
0040f6cf  MOV dword ptr [EAX + 0x25c],ECX
0040f6d5  MOV EDX,dword ptr [EBP + -0x34]
0040f6d8  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f6de  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040f6e5  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f6eb  MOV EAX,dword ptr [ECX + 0x178]
0040f6f1  MOV dword ptr [EDX + 0x258],EAX
0040f6f7  MOV ECX,dword ptr [EBP + -0x34]
0040f6fa  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f700  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040f707  FLD float ptr [EAX + 0x164]
0040f70d  FCHS
0040f70f  PUSH ECX
0040f710  FSTP float ptr [ESP]
0040f713  CALL 0x00401262
0040f718  ADD ESP,0x4
0040f71b  FCHS
0040f71d  FMUL float ptr [0x0044e0f4] {-2}
0040f723  MOV ECX,dword ptr [EBP + -0x34]
0040f726  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f72c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040f733  FADD float ptr [EAX + 0x158]
0040f739  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f73f  FSTP float ptr [ECX + 0x24c]
0040f745  MOV EDX,dword ptr [EBP + -0x34]
0040f748  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f74e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040f755  FLD float ptr [ECX + 0x170]
0040f75b  FMUL float ptr [0x0044e0f8] {0.9}
0040f761  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f767  FSTP float ptr [EDX + 0x250]
0040f76d  MOV EAX,dword ptr [EBP + -0x34]
0040f770  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f776  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040f77d  FLD float ptr [EDX + 0x164]
0040f783  FCHS
0040f785  PUSH ECX
0040f786  FSTP float ptr [ESP]
0040f789  CALL 0x0040136b
0040f78e  ADD ESP,0x4
0040f791  FMUL float ptr [0x0044e0f4] {-2}
0040f797  MOV EAX,dword ptr [EBP + -0x34]
0040f79a  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f7a0  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040f7a7  FADD float ptr [EDX + 0x160]
0040f7ad  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f7b3  FSTP float ptr [EAX + 0x254]
0040f7b9  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f7bf  MOV EDX,dword ptr [EBP + -0x34]
0040f7c2  MOV dword ptr [ECX + 0x404],EDX
0040f7c8  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f7ce  MOV dword ptr [EAX + 0x268],0xffffffff
0040f7d8  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f7de  MOV byte ptr [ECX + 0x414],0x0
0040f7e5  JMP 0x0040f832
0040f7e7  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f7ed  FLD float ptr [EDX + 0x410]
0040f7f3  FCOMP float ptr [0x0044e0d0] {0}
0040f7f9  FNSTSW AX
0040f7fb  TEST AH,0x41
0040f7fe  JNZ 0x0040f812
0040f800  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f806  MOV dword ptr [EAX + 0x40c],0x3
0040f810  JMP 0x0040f822
0040f812  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f818  MOV dword ptr [ECX + 0x40c],0x4
0040f822  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f828  MOV dword ptr [EDX + 0x410],0x420c0000
0040f832  JMP 0x0040faf0
0040f837  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f83d  MOV ECX,dword ptr [EAX + 0x408]
0040f843  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f849  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040f850  XOR ECX,ECX
0040f852  MOV CL,byte ptr [EAX + 0x154]
0040f858  TEST ECX,ECX
0040f85a  JZ 0x0040f8ac
0040f85c  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f862  FLD float ptr [EDX + 0x410]
0040f868  FCOMP float ptr [0x0044e0d0] {0}
0040f86e  FNSTSW AX
0040f870  TEST AH,0x41
0040f873  JNZ 0x0040f887
0040f875  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f87b  MOV dword ptr [EAX + 0x40c],0x3
0040f885  JMP 0x0040f897
0040f887  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f88d  MOV dword ptr [ECX + 0x40c],0x4
0040f897  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f89d  MOV dword ptr [EDX + 0x410],0x420c0000
0040f8a7  JMP 0x0040faf0
0040f8ac  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f8b2  CMP dword ptr [EAX + 0x3b0],0x1
0040f8b9  JNZ 0x0040f8cb
0040f8bb  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f8c1  MOV dword ptr [ECX + 0x41c],0x40600000
0040f8cb  MOV EDX,dword ptr [EBP + -0x4]
0040f8ce  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f8d4  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040f8db  MOV dword ptr [ECX + 0x190],0x4
0040f8e5  MOV EDX,dword ptr [EBP + -0x4]
0040f8e8  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f8ee  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040f8f5  CALL 0x0040100f
0040f8fa  MOV ECX,dword ptr [EBP + 0xfffff994]
0040f900  MOV EDX,dword ptr [EBP + -0x4]
0040f903  MOV dword ptr [ECX + 0x268],EDX
0040f909  PUSH 0x3fc51eb8
0040f90e  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f914  MOV ECX,dword ptr [EAX + 0x410]
0040f91a  PUSH ECX
0040f91b  PUSH 0x0
0040f91d  PUSH 0x42180000
0040f922  LEA ECX,[EBP + 0xffffff20]
0040f928  CALL 0x00401348
0040f92d  SUB ESP,0xc
0040f930  MOV EDX,ESP
0040f932  MOV ECX,dword ptr [EAX]
0040f934  MOV dword ptr [EDX],ECX
0040f936  MOV ECX,dword ptr [EAX + 0x4]
0040f939  MOV dword ptr [EDX + 0x4],ECX
0040f93c  MOV EAX,dword ptr [EAX + 0x8]
0040f93f  MOV dword ptr [EDX + 0x8],EAX
0040f942  MOV ECX,dword ptr [EBP + -0x4]
0040f945  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f94b  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040f952  CALL 0x004012c6
0040f957  PUSH 0xbfc51eb8
0040f95c  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f962  FLD float ptr [EAX + 0x410]
0040f968  FADD float ptr [0x0044e0d4] {5}
0040f96e  PUSH ECX
0040f96f  FSTP float ptr [ESP]
0040f972  PUSH 0x0
0040f974  PUSH 0x41f00000
0040f979  LEA ECX,[EBP + 0xffffff14]
0040f97f  CALL 0x00401348
0040f984  SUB ESP,0xc
0040f987  MOV ECX,ESP
0040f989  MOV EDX,dword ptr [EAX]
0040f98b  MOV dword ptr [ECX],EDX
0040f98d  MOV EDX,dword ptr [EAX + 0x4]
0040f990  MOV dword ptr [ECX + 0x4],EDX
0040f993  MOV EAX,dword ptr [EAX + 0x8]
0040f996  MOV dword ptr [ECX + 0x8],EAX
0040f999  MOV ECX,dword ptr [EBP + -0x14]
0040f99c  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f9a2  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040f9a9  CALL 0x004012c6
0040f9ae  PUSH 0xbfc51eb8
0040f9b3  MOV EAX,dword ptr [EBP + 0xfffff994]
0040f9b9  FLD float ptr [EAX + 0x410]
0040f9bf  FSUB float ptr [0x0044e0d4] {5}
0040f9c5  PUSH ECX
0040f9c6  FSTP float ptr [ESP]
0040f9c9  PUSH 0x0
0040f9cb  PUSH 0x42000000
0040f9d0  LEA ECX,[EBP + 0xffffff08]
0040f9d6  CALL 0x00401348
0040f9db  SUB ESP,0xc
0040f9de  MOV ECX,ESP
0040f9e0  MOV EDX,dword ptr [EAX]
0040f9e2  MOV dword ptr [ECX],EDX
0040f9e4  MOV EDX,dword ptr [EAX + 0x4]
0040f9e7  MOV dword ptr [ECX + 0x4],EDX
0040f9ea  MOV EAX,dword ptr [EAX + 0x8]
0040f9ed  MOV dword ptr [ECX + 0x8],EAX
0040f9f0  MOV ECX,dword ptr [EBP + -0x10]
0040f9f3  MOV EDX,dword ptr [EBP + 0xfffff994]
0040f9f9  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040fa00  CALL 0x004012c6
0040fa05  PUSH 0x3fc51eb8
0040fa0a  PUSH 0x40800000
0040fa0f  PUSH 0x0
0040fa11  PUSH 0x3f800000
0040fa16  LEA ECX,[EBP + 0xfffffefc]
0040fa1c  CALL 0x00401348
0040fa21  SUB ESP,0xc
0040fa24  MOV ECX,ESP
0040fa26  MOV EDX,dword ptr [EAX]
0040fa28  MOV dword ptr [ECX],EDX
0040fa2a  MOV EDX,dword ptr [EAX + 0x4]
0040fa2d  MOV dword ptr [ECX + 0x4],EDX
0040fa30  MOV EAX,dword ptr [EAX + 0x8]
0040fa33  MOV dword ptr [ECX + 0x8],EAX
0040fa36  MOV ECX,dword ptr [EBP + -0x2c]
0040fa39  MOV EDX,dword ptr [EBP + 0xfffff994]
0040fa3f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040fa46  CALL 0x004012c6
0040fa4b  PUSH 0x3fc51eb8
0040fa50  PUSH 0xc0800000
0040fa55  PUSH 0x0
0040fa57  PUSH 0x40000000
0040fa5c  LEA ECX,[EBP + 0xfffffef0]
0040fa62  CALL 0x00401348
0040fa67  SUB ESP,0xc
0040fa6a  MOV ECX,ESP
0040fa6c  MOV EDX,dword ptr [EAX]
0040fa6e  MOV dword ptr [ECX],EDX
0040fa70  MOV EDX,dword ptr [EAX + 0x4]
0040fa73  MOV dword ptr [ECX + 0x4],EDX
0040fa76  MOV EAX,dword ptr [EAX + 0x8]
0040fa79  MOV dword ptr [ECX + 0x8],EAX
0040fa7c  MOV ECX,dword ptr [EBP + -0x28]
0040fa7f  MOV EDX,dword ptr [EBP + 0xfffff994]
0040fa85  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040fa8c  CALL 0x004012c6
0040fa91  PUSH 0x3fc51eb8
0040fa96  PUSH 0x0
0040fa98  PUSH 0x0
0040fa9a  PUSH 0x40400000
0040fa9f  LEA ECX,[EBP + 0xfffffee4]
0040faa5  CALL 0x00401348
0040faaa  SUB ESP,0xc
0040faad  MOV ECX,ESP
0040faaf  MOV EDX,dword ptr [EAX]
0040fab1  MOV dword ptr [ECX],EDX
0040fab3  MOV EDX,dword ptr [EAX + 0x4]
0040fab6  MOV dword ptr [ECX + 0x4],EDX
0040fab9  MOV EAX,dword ptr [EAX + 0x8]
0040fabc  MOV dword ptr [ECX + 0x8],EAX
0040fabf  MOV ECX,dword ptr [EBP + -0x34]
0040fac2  MOV EDX,dword ptr [EBP + 0xfffff994]
0040fac8  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040facf  CALL 0x004012c6
0040fad4  MOV EAX,dword ptr [EBP + 0xfffff994]
0040fada  MOV ECX,dword ptr [EBP + -0x4]
0040fadd  MOV dword ptr [EAX + 0x404],ECX
0040fae3  MOV EDX,dword ptr [EBP + 0xfffff994]
0040fae9  MOV byte ptr [EDX + 0x414],0x0
0040faf0  JMP 0x00410601
0040faf5  MOV EAX,dword ptr [EBP + 0xfffff994]
0040fafb  CMP dword ptr [EAX + 0x40c],0x2
0040fb02  JNZ 0x00410601
0040fb08  MOV ECX,dword ptr [EBP + 0xfffff994]
0040fb0e  CMP dword ptr [ECX + 0x3b0],0x2
0040fb15  JNZ 0x0040feb8
0040fb1b  PUSH 0xbfc51eb8
0040fb20  MOV EDX,dword ptr [EBP + 0xfffff994]
0040fb26  MOV EAX,dword ptr [EDX + 0x410]
0040fb2c  PUSH EAX
0040fb2d  PUSH 0x0
0040fb2f  PUSH 0xc2200000
0040fb34  LEA ECX,[EBP + 0xfffffed8]
0040fb3a  CALL 0x00401348
0040fb3f  SUB ESP,0xc
0040fb42  MOV ECX,ESP
0040fb44  MOV EDX,dword ptr [EAX]
0040fb46  MOV dword ptr [ECX],EDX
0040fb48  MOV EDX,dword ptr [EAX + 0x4]
0040fb4b  MOV dword ptr [ECX + 0x4],EDX
0040fb4e  MOV EAX,dword ptr [EAX + 0x8]
0040fb51  MOV dword ptr [ECX + 0x8],EAX
0040fb54  MOV ECX,dword ptr [EBP + 0xfffff994]
0040fb5a  MOV EDX,dword ptr [ECX + 0x3f8]
0040fb60  MOV EAX,dword ptr [EBP + 0xfffff994]
0040fb66  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040fb6d  CALL 0x004012c6
0040fb72  PUSH 0x1
0040fb74  MOV ECX,dword ptr [EBP + 0xfffff994]
0040fb7a  MOV ECX,dword ptr [ECX + 0xc0]
0040fb80  CALL 0x00401258
0040fb85  MOV EDX,dword ptr [EBP + 0xfffff994]
0040fb8b  MOV EAX,dword ptr [EDX + 0x3f8]
0040fb91  MOV ECX,dword ptr [EBP + 0xfffff994]
0040fb97  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040fb9e  MOV dword ptr [EDX + 0x198],0x0
0040fba8  MOV EAX,dword ptr [EBP + 0xfffff994]
0040fbae  MOV ECX,dword ptr [EAX + 0x3f8]
0040fbb4  MOV EDX,dword ptr [EBP + 0xfffff994]
0040fbba  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040fbc1  MOV dword ptr [EAX + 0x164],0xbfc51eb8
0040fbcb  MOV ECX,dword ptr [EBP + 0xfffff994]
0040fbd1  MOV EDX,dword ptr [ECX + 0x3f8]
0040fbd7  MOV EAX,dword ptr [EBP + 0xfffff994]
0040fbdd  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040fbe4  MOV dword ptr [ECX + 0x190],0xa
0040fbee  MOV EDX,dword ptr [EBP + 0xfffff994]
0040fbf4  MOV EAX,dword ptr [EDX + 0x3f8]
0040fbfa  MOV ECX,dword ptr [EBP + 0xfffff994]
0040fc00  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040fc07  CALL 0x00401163
0040fc0c  PUSH 0x3fc51eb8
0040fc11  MOV EDX,dword ptr [EBP + 0xfffff994]
0040fc17  MOV EAX,dword ptr [EDX + 0x410]
0040fc1d  PUSH EAX
0040fc1e  PUSH 0x0
0040fc20  PUSH 0xc1200000
0040fc25  LEA ECX,[EBP + 0xfffffecc]
0040fc2b  CALL 0x00401348
0040fc30  SUB ESP,0xc
0040fc33  MOV ECX,ESP
0040fc35  MOV EDX,dword ptr [EAX]
0040fc37  MOV dword ptr [ECX],EDX
0040fc39  MOV EDX,dword ptr [EAX + 0x4]
0040fc3c  MOV dword ptr [ECX + 0x4],EDX
0040fc3f  MOV EAX,dword ptr [EAX + 0x8]
0040fc42  MOV dword ptr [ECX + 0x8],EAX
0040fc45  MOV ECX,dword ptr [EBP + -0x4]
0040fc48  MOV EDX,dword ptr [EBP + 0xfffff994]
0040fc4e  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040fc55  CALL 0x004012c6
0040fc5a  PUSH 0x3fc51eb8
0040fc5f  MOV EAX,dword ptr [EBP + 0xfffff994]
0040fc65  FLD float ptr [EAX + 0x410]
0040fc6b  FADD float ptr [0x0044e0d4] {5}
0040fc71  PUSH ECX
0040fc72  FSTP float ptr [ESP]
0040fc75  PUSH 0x0
0040fc77  PUSH 0xc1700000
0040fc7c  LEA ECX,[EBP + 0xfffffec0]
0040fc82  CALL 0x00401348
0040fc87  SUB ESP,0xc
0040fc8a  MOV ECX,ESP
0040fc8c  MOV EDX,dword ptr [EAX]
0040fc8e  MOV dword ptr [ECX],EDX
0040fc90  MOV EDX,dword ptr [EAX + 0x4]
0040fc93  MOV dword ptr [ECX + 0x4],EDX
0040fc96  MOV EAX,dword ptr [EAX + 0x8]
0040fc99  MOV dword ptr [ECX + 0x8],EAX
0040fc9c  MOV ECX,dword ptr [EBP + -0x14]
0040fc9f  MOV EDX,dword ptr [EBP + 0xfffff994]
0040fca5  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040fcac  CALL 0x004012c6
0040fcb1  PUSH 0x3fc51eb8
0040fcb6  MOV EAX,dword ptr [EBP + 0xfffff994]
0040fcbc  FLD float ptr [EAX + 0x410]
0040fcc2  FSUB float ptr [0x0044e0d4] {5}
0040fcc8  PUSH ECX
0040fcc9  FSTP float ptr [ESP]
0040fccc  PUSH 0x0
0040fcce  PUSH 0xc1800000
0040fcd3  LEA ECX,[EBP + 0xfffffeb4]
0040fcd9  CALL 0x00401348
0040fcde  SUB ESP,0xc
0040fce1  MOV ECX,ESP
0040fce3  MOV EDX,dword ptr [EAX]
0040fce5  MOV dword ptr [ECX],EDX
0040fce7  MOV EDX,dword ptr [EAX + 0x4]
0040fcea  MOV dword ptr [ECX + 0x4],EDX
0040fced  MOV EAX,dword ptr [EAX + 0x8]
0040fcf0  MOV dword ptr [ECX + 0x8],EAX
0040fcf3  MOV ECX,dword ptr [EBP + -0x10]
0040fcf6  MOV EDX,dword ptr [EBP + 0xfffff994]
0040fcfc  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040fd03  CALL 0x004012c6
0040fd08  MOV EAX,dword ptr [EBP + 0xfffff994]
0040fd0e  MOV ECX,dword ptr [EAX + 0x3f8]
0040fd14  MOV EDX,dword ptr [EBP + 0xfffff994]
0040fd1a  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040fd21  FLD float ptr [EAX + 0x164]
0040fd27  FSUB float ptr [0x0044e0f0] {3.14}
0040fd2d  MOV ECX,dword ptr [EBP + 0xfffff994]
0040fd33  FSTP float ptr [ECX + 0x260]
0040fd39  MOV EDX,dword ptr [EBP + 0xfffff994]
0040fd3f  MOV EAX,dword ptr [EDX + 0x3f8]
0040fd45  MOV ECX,dword ptr [EBP + 0xfffff994]
0040fd4b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040fd52  MOV EAX,dword ptr [EBP + 0xfffff994]
0040fd58  MOV ECX,dword ptr [EDX + 0x174]
0040fd5e  MOV dword ptr [EAX + 0x25c],ECX
0040fd64  MOV EDX,dword ptr [EBP + 0xfffff994]
0040fd6a  MOV EAX,dword ptr [EDX + 0x3f8]
0040fd70  MOV ECX,dword ptr [EBP + 0xfffff994]
0040fd76  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040fd7d  MOV EAX,dword ptr [EBP + 0xfffff994]
0040fd83  MOV ECX,dword ptr [EDX + 0x178]
0040fd89  MOV dword ptr [EAX + 0x258],ECX
0040fd8f  MOV EDX,dword ptr [EBP + 0xfffff994]
0040fd95  MOV EAX,dword ptr [EDX + 0x3f8]
0040fd9b  MOV ECX,dword ptr [EBP + 0xfffff994]
0040fda1  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040fda8  FLD float ptr [EDX + 0x164]
0040fdae  FCHS
0040fdb0  PUSH ECX
0040fdb1  FSTP float ptr [ESP]
0040fdb4  CALL 0x00401262
0040fdb9  ADD ESP,0x4
0040fdbc  FCHS
0040fdbe  FMUL float ptr [0x0044e0f4] {-2}
0040fdc4  MOV EAX,dword ptr [EBP + 0xfffff994]
0040fdca  MOV ECX,dword ptr [EAX + 0x3f8]
0040fdd0  MOV EDX,dword ptr [EBP + 0xfffff994]
0040fdd6  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040fddd  FADD float ptr [EAX + 0x158]
0040fde3  MOV ECX,dword ptr [EBP + 0xfffff994]
0040fde9  FSTP float ptr [ECX + 0x24c]
0040fdef  MOV EDX,dword ptr [EBP + 0xfffff994]
0040fdf5  MOV EAX,dword ptr [EDX + 0x3f8]
0040fdfb  MOV ECX,dword ptr [EBP + 0xfffff994]
0040fe01  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040fe08  FLD float ptr [EDX + 0x170]
0040fe0e  FMUL float ptr [0x0044e0f8] {0.9}
0040fe14  MOV EAX,dword ptr [EBP + 0xfffff994]
0040fe1a  FSTP float ptr [EAX + 0x250]
0040fe20  MOV ECX,dword ptr [EBP + 0xfffff994]
0040fe26  MOV EDX,dword ptr [ECX + 0x3f8]
0040fe2c  MOV EAX,dword ptr [EBP + 0xfffff994]
0040fe32  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0040fe39  FLD float ptr [ECX + 0x164]
0040fe3f  FCHS
0040fe41  PUSH ECX
0040fe42  FSTP float ptr [ESP]
0040fe45  CALL 0x0040136b
0040fe4a  ADD ESP,0x4
0040fe4d  FMUL float ptr [0x0044e0f4] {-2}
0040fe53  MOV EDX,dword ptr [EBP + 0xfffff994]
0040fe59  MOV EAX,dword ptr [EDX + 0x3f8]
0040fe5f  MOV ECX,dword ptr [EBP + 0xfffff994]
0040fe65  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040fe6c  FADD float ptr [EDX + 0x160]
0040fe72  MOV EAX,dword ptr [EBP + 0xfffff994]
0040fe78  FSTP float ptr [EAX + 0x254]
0040fe7e  MOV ECX,dword ptr [EBP + 0xfffff994]
0040fe84  MOV EDX,dword ptr [EBP + 0xfffff994]
0040fe8a  MOV EAX,dword ptr [EDX + 0x3f8]
0040fe90  MOV dword ptr [ECX + 0x404],EAX
0040fe96  MOV ECX,dword ptr [EBP + 0xfffff994]
0040fe9c  MOV dword ptr [ECX + 0x268],0xffffffff
0040fea6  MOV EDX,dword ptr [EBP + 0xfffff994]
0040feac  MOV byte ptr [EDX + 0x414],0x0
0040feb3  JMP 0x00410601
0040feb8  MOV EAX,dword ptr [EBP + 0xfffff994]
0040febe  XOR ECX,ECX
0040fec0  MOV CL,byte ptr [EAX + 0x3a6]
0040fec6  TEST ECX,ECX
0040fec8  JZ 0x0041018c
0040fece  MOV EDX,dword ptr [EBP + 0xfffff994]
0040fed4  MOV EAX,dword ptr [EDX + 0x408]
0040feda  MOV ECX,dword ptr [EBP + 0xfffff994]
0040fee0  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0040fee7  XOR EAX,EAX
0040fee9  MOV AL,byte ptr [EDX + 0x154]
0040feef  TEST EAX,EAX
0040fef1  JZ 0x0040ff43
0040fef3  MOV ECX,dword ptr [EBP + 0xfffff994]
0040fef9  FLD float ptr [ECX + 0x410]
0040feff  FCOMP float ptr [0x0044e0d0] {0}
0040ff05  FNSTSW AX
0040ff07  TEST AH,0x41
0040ff0a  JNZ 0x0040ff1e
0040ff0c  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ff12  MOV dword ptr [EDX + 0x40c],0x3
0040ff1c  JMP 0x0040ff2e
0040ff1e  MOV EAX,dword ptr [EBP + 0xfffff994]
0040ff24  MOV dword ptr [EAX + 0x40c],0x4
0040ff2e  MOV ECX,dword ptr [EBP + 0xfffff994]
0040ff34  MOV dword ptr [ECX + 0x410],0xc20c0000
0040ff3e  JMP 0x00410187
0040ff43  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ff49  CMP dword ptr [EDX + 0x3b0],0x1
0040ff50  JNZ 0x0040ff62
0040ff52  MOV EAX,dword ptr [EBP + 0xfffff994]
0040ff58  MOV dword ptr [EAX + 0x41c],0x40600000
0040ff62  MOV ECX,dword ptr [EBP + -0x4]
0040ff65  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ff6b  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040ff72  MOV dword ptr [EAX + 0x190],0x4
0040ff7c  MOV ECX,dword ptr [EBP + -0x4]
0040ff7f  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ff85  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040ff8c  CALL 0x0040100f
0040ff91  MOV EAX,dword ptr [EBP + 0xfffff994]
0040ff97  MOV ECX,dword ptr [EBP + -0x4]
0040ff9a  MOV dword ptr [EAX + 0x268],ECX
0040ffa0  PUSH 0xbfc51eb8
0040ffa5  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ffab  MOV EAX,dword ptr [EDX + 0x410]
0040ffb1  PUSH EAX
0040ffb2  PUSH 0x0
0040ffb4  PUSH 0xc2180000
0040ffb9  LEA ECX,[EBP + 0xfffffea8]
0040ffbf  CALL 0x00401348
0040ffc4  SUB ESP,0xc
0040ffc7  MOV ECX,ESP
0040ffc9  MOV EDX,dword ptr [EAX]
0040ffcb  MOV dword ptr [ECX],EDX
0040ffcd  MOV EDX,dword ptr [EAX + 0x4]
0040ffd0  MOV dword ptr [ECX + 0x4],EDX
0040ffd3  MOV EAX,dword ptr [EAX + 0x8]
0040ffd6  MOV dword ptr [ECX + 0x8],EAX
0040ffd9  MOV ECX,dword ptr [EBP + -0x4]
0040ffdc  MOV EDX,dword ptr [EBP + 0xfffff994]
0040ffe2  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0040ffe9  CALL 0x004012c6
0040ffee  PUSH 0x3fc51eb8
0040fff3  MOV EAX,dword ptr [EBP + 0xfffff994]
0040fff9  FLD float ptr [EAX + 0x410]
0040ffff  FADD float ptr [0x0044e0d4] {5}
00410005  PUSH ECX
00410006  FSTP float ptr [ESP]
00410009  PUSH 0x0
0041000b  PUSH 0xc1f00000
00410010  LEA ECX,[EBP + 0xfffffe9c]
00410016  CALL 0x00401348
0041001b  SUB ESP,0xc
0041001e  MOV ECX,ESP
00410020  MOV EDX,dword ptr [EAX]
00410022  MOV dword ptr [ECX],EDX
00410024  MOV EDX,dword ptr [EAX + 0x4]
00410027  MOV dword ptr [ECX + 0x4],EDX
0041002a  MOV EAX,dword ptr [EAX + 0x8]
0041002d  MOV dword ptr [ECX + 0x8],EAX
00410030  MOV ECX,dword ptr [EBP + -0x14]
00410033  MOV EDX,dword ptr [EBP + 0xfffff994]
00410039  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410040  CALL 0x004012c6
00410045  PUSH 0x3fc51eb8
0041004a  MOV EAX,dword ptr [EBP + 0xfffff994]
00410050  FLD float ptr [EAX + 0x410]
00410056  FSUB float ptr [0x0044e0d4] {5}
0041005c  PUSH ECX
0041005d  FSTP float ptr [ESP]
00410060  PUSH 0x0
00410062  PUSH 0xc2000000
00410067  LEA ECX,[EBP + 0xfffffe90]
0041006d  CALL 0x00401348
00410072  SUB ESP,0xc
00410075  MOV ECX,ESP
00410077  MOV EDX,dword ptr [EAX]
00410079  MOV dword ptr [ECX],EDX
0041007b  MOV EDX,dword ptr [EAX + 0x4]
0041007e  MOV dword ptr [ECX + 0x4],EDX
00410081  MOV EAX,dword ptr [EAX + 0x8]
00410084  MOV dword ptr [ECX + 0x8],EAX
00410087  MOV ECX,dword ptr [EBP + -0x10]
0041008a  MOV EDX,dword ptr [EBP + 0xfffff994]
00410090  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410097  CALL 0x004012c6
0041009c  PUSH 0xbfc51eb8
004100a1  PUSH 0x40800000
004100a6  PUSH 0x0
004100a8  PUSH 0x3f800000
004100ad  LEA ECX,[EBP + 0xfffffe84]
004100b3  CALL 0x00401348
004100b8  SUB ESP,0xc
004100bb  MOV ECX,ESP
004100bd  MOV EDX,dword ptr [EAX]
004100bf  MOV dword ptr [ECX],EDX
004100c1  MOV EDX,dword ptr [EAX + 0x4]
004100c4  MOV dword ptr [ECX + 0x4],EDX
004100c7  MOV EAX,dword ptr [EAX + 0x8]
004100ca  MOV dword ptr [ECX + 0x8],EAX
004100cd  MOV ECX,dword ptr [EBP + -0x2c]
004100d0  MOV EDX,dword ptr [EBP + 0xfffff994]
004100d6  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004100dd  CALL 0x004012c6
004100e2  PUSH 0xbfc51eb8
004100e7  PUSH 0xc0800000
004100ec  PUSH 0x0
004100ee  PUSH 0x40000000
004100f3  LEA ECX,[EBP + 0xfffffe78]
004100f9  CALL 0x00401348
004100fe  SUB ESP,0xc
00410101  MOV ECX,ESP
00410103  MOV EDX,dword ptr [EAX]
00410105  MOV dword ptr [ECX],EDX
00410107  MOV EDX,dword ptr [EAX + 0x4]
0041010a  MOV dword ptr [ECX + 0x4],EDX
0041010d  MOV EAX,dword ptr [EAX + 0x8]
00410110  MOV dword ptr [ECX + 0x8],EAX
00410113  MOV ECX,dword ptr [EBP + -0x28]
00410116  MOV EDX,dword ptr [EBP + 0xfffff994]
0041011c  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410123  CALL 0x004012c6
00410128  PUSH 0xbfc51eb8
0041012d  PUSH 0x0
0041012f  PUSH 0x0
00410131  PUSH 0x40400000
00410136  LEA ECX,[EBP + 0xfffffe6c]
0041013c  CALL 0x00401348
00410141  SUB ESP,0xc
00410144  MOV ECX,ESP
00410146  MOV EDX,dword ptr [EAX]
00410148  MOV dword ptr [ECX],EDX
0041014a  MOV EDX,dword ptr [EAX + 0x4]
0041014d  MOV dword ptr [ECX + 0x4],EDX
00410150  MOV EAX,dword ptr [EAX + 0x8]
00410153  MOV dword ptr [ECX + 0x8],EAX
00410156  MOV ECX,dword ptr [EBP + -0x34]
00410159  MOV EDX,dword ptr [EBP + 0xfffff994]
0041015f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410166  CALL 0x004012c6
0041016b  MOV EAX,dword ptr [EBP + 0xfffff994]
00410171  MOV ECX,dword ptr [EBP + -0x4]
00410174  MOV dword ptr [EAX + 0x404],ECX
0041017a  MOV EDX,dword ptr [EBP + 0xfffff994]
00410180  MOV byte ptr [EDX + 0x414],0x0
00410187  JMP 0x00410601
0041018c  MOV EAX,dword ptr [EBP + 0xfffff994]
00410192  MOV ECX,dword ptr [EAX + 0x408]
00410198  MOV EDX,dword ptr [EBP + 0xfffff994]
0041019e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004101a5  XOR ECX,ECX
004101a7  MOV CL,byte ptr [EAX + 0x154]
004101ad  TEST ECX,ECX
004101af  JZ 0x004105b6
004101b5  PUSH 0xbfc51eb8
004101ba  MOV EDX,dword ptr [EBP + 0xfffff994]
004101c0  MOV EAX,dword ptr [EDX + 0x410]
004101c6  PUSH EAX
004101c7  PUSH 0x0
004101c9  PUSH 0xc2180000
004101ce  LEA ECX,[EBP + 0xfffffe60]
004101d4  CALL 0x00401348
004101d9  SUB ESP,0xc
004101dc  MOV ECX,ESP
004101de  MOV EDX,dword ptr [EAX]
004101e0  MOV dword ptr [ECX],EDX
004101e2  MOV EDX,dword ptr [EAX + 0x4]
004101e5  MOV dword ptr [ECX + 0x4],EDX
004101e8  MOV EAX,dword ptr [EAX + 0x8]
004101eb  MOV dword ptr [ECX + 0x8],EAX
004101ee  MOV ECX,dword ptr [EBP + -0x34]
004101f1  MOV EDX,dword ptr [EBP + 0xfffff994]
004101f7  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004101fe  CALL 0x004012c6
00410203  PUSH 0x3fc51eb8
00410208  MOV EAX,dword ptr [EBP + 0xfffff994]
0041020e  FLD float ptr [EAX + 0x410]
00410214  FADD float ptr [0x0044e0d4] {5}
0041021a  PUSH ECX
0041021b  FSTP float ptr [ESP]
0041021e  PUSH 0x0
00410220  PUSH 0xc1f00000
00410225  LEA ECX,[EBP + 0xfffffe54]
0041022b  CALL 0x00401348
00410230  SUB ESP,0xc
00410233  MOV ECX,ESP
00410235  MOV EDX,dword ptr [EAX]
00410237  MOV dword ptr [ECX],EDX
00410239  MOV EDX,dword ptr [EAX + 0x4]
0041023c  MOV dword ptr [ECX + 0x4],EDX
0041023f  MOV EAX,dword ptr [EAX + 0x8]
00410242  MOV dword ptr [ECX + 0x8],EAX
00410245  MOV ECX,dword ptr [EBP + -0x2c]
00410248  MOV EDX,dword ptr [EBP + 0xfffff994]
0041024e  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410255  CALL 0x004012c6
0041025a  PUSH 0x3fc51eb8
0041025f  MOV EAX,dword ptr [EBP + 0xfffff994]
00410265  FLD float ptr [EAX + 0x410]
0041026b  FSUB float ptr [0x0044e0d4] {5}
00410271  PUSH ECX
00410272  FSTP float ptr [ESP]
00410275  PUSH 0x0
00410277  PUSH 0xc2000000
0041027c  LEA ECX,[EBP + 0xfffffe48]
00410282  CALL 0x00401348
00410287  SUB ESP,0xc
0041028a  MOV ECX,ESP
0041028c  MOV EDX,dword ptr [EAX]
0041028e  MOV dword ptr [ECX],EDX
00410290  MOV EDX,dword ptr [EAX + 0x4]
00410293  MOV dword ptr [ECX + 0x4],EDX
00410296  MOV EAX,dword ptr [EAX + 0x8]
00410299  MOV dword ptr [ECX + 0x8],EAX
0041029c  MOV ECX,dword ptr [EBP + -0x28]
0041029f  MOV EDX,dword ptr [EBP + 0xfffff994]
004102a5  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004102ac  CALL 0x004012c6
004102b1  PUSH 0x3fc51eb8
004102b6  PUSH 0x40800000
004102bb  PUSH 0x0
004102bd  PUSH 0xc1200000
004102c2  LEA ECX,[EBP + 0xfffffe3c]
004102c8  CALL 0x00401348
004102cd  SUB ESP,0xc
004102d0  MOV ECX,ESP
004102d2  MOV EDX,dword ptr [EAX]
004102d4  MOV dword ptr [ECX],EDX
004102d6  MOV EDX,dword ptr [EAX + 0x4]
004102d9  MOV dword ptr [ECX + 0x4],EDX
004102dc  MOV EAX,dword ptr [EAX + 0x8]
004102df  MOV dword ptr [ECX + 0x8],EAX
004102e2  MOV ECX,dword ptr [EBP + -0x14]
004102e5  MOV EDX,dword ptr [EBP + 0xfffff994]
004102eb  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004102f2  CALL 0x004012c6
004102f7  PUSH 0xbfc51eb8
004102fc  PUSH 0xc0800000
00410301  PUSH 0x0
00410303  PUSH 0x40000000
00410308  LEA ECX,[EBP + 0xfffffe30]
0041030e  CALL 0x00401348
00410313  SUB ESP,0xc
00410316  MOV ECX,ESP
00410318  MOV EDX,dword ptr [EAX]
0041031a  MOV dword ptr [ECX],EDX
0041031c  MOV EDX,dword ptr [EAX + 0x4]
0041031f  MOV dword ptr [ECX + 0x4],EDX
00410322  MOV EAX,dword ptr [EAX + 0x8]
00410325  MOV dword ptr [ECX + 0x8],EAX
00410328  MOV ECX,dword ptr [EBP + -0x10]
0041032b  MOV EDX,dword ptr [EBP + 0xfffff994]
00410331  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410338  CALL 0x004012c6
0041033d  PUSH 0xbfc51eb8
00410342  PUSH 0x0
00410344  PUSH 0x0
00410346  PUSH 0x40400000
0041034b  LEA ECX,[EBP + 0xfffffe24]
00410351  CALL 0x00401348
00410356  SUB ESP,0xc
00410359  MOV ECX,ESP
0041035b  MOV EDX,dword ptr [EAX]
0041035d  MOV dword ptr [ECX],EDX
0041035f  MOV EDX,dword ptr [EAX + 0x4]
00410362  MOV dword ptr [ECX + 0x4],EDX
00410365  MOV EAX,dword ptr [EAX + 0x8]
00410368  MOV dword ptr [ECX + 0x8],EAX
0041036b  MOV ECX,dword ptr [EBP + -0x4]
0041036e  MOV EDX,dword ptr [EBP + 0xfffff994]
00410374  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041037b  CALL 0x004012c6
00410380  PUSH 0x1
00410382  MOV EAX,dword ptr [EBP + 0xfffff994]
00410388  MOV ECX,dword ptr [EAX + 0xc0]
0041038e  CALL 0x00401258
00410393  MOV ECX,dword ptr [EBP + -0x34]
00410396  MOV EDX,dword ptr [EBP + 0xfffff994]
0041039c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004103a3  MOV dword ptr [EAX + 0x198],0x0
004103ad  MOV ECX,dword ptr [EBP + -0x34]
004103b0  MOV EDX,dword ptr [EBP + 0xfffff994]
004103b6  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004103bd  MOV ECX,dword ptr [EBP + -0x2c]
004103c0  MOV EDX,dword ptr [EBP + 0xfffff994]
004103c6  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004103cd  FLD float ptr [EAX + 0x160]
004103d3  FSUB float ptr [ECX + 0x160]
004103d9  PUSH ECX
004103da  FSTP float ptr [ESP]
004103dd  MOV EDX,dword ptr [EBP + -0x34]
004103e0  MOV EAX,dword ptr [EBP + 0xfffff994]
004103e6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004103ed  MOV EDX,dword ptr [EBP + -0x2c]
004103f0  MOV EAX,dword ptr [EBP + 0xfffff994]
004103f6  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
004103fd  FLD float ptr [ECX + 0x158]
00410403  FSUB float ptr [EDX + 0x158]
00410409  PUSH ECX
0041040a  FSTP float ptr [ESP]
0041040d  CALL 0x00401127
00410412  ADD ESP,0x8
00410415  MOV EAX,dword ptr [EBP + -0x34]
00410418  MOV ECX,dword ptr [EBP + 0xfffff994]
0041041e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00410425  FSTP float ptr [EDX + 0x164]
0041042b  MOV EAX,dword ptr [EBP + -0x34]
0041042e  MOV ECX,dword ptr [EBP + 0xfffff994]
00410434  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041043b  MOV dword ptr [EDX + 0x190],0xa
00410445  MOV EAX,dword ptr [EBP + -0x34]
00410448  MOV ECX,dword ptr [EBP + 0xfffff994]
0041044e  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
00410455  CALL 0x00401163
0041045a  MOV EDX,dword ptr [EBP + -0x34]
0041045d  MOV EAX,dword ptr [EBP + 0xfffff994]
00410463  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041046a  FLD float ptr [ECX + 0x164]
00410470  FSUB float ptr [0x0044e0f0] {3.14}
00410476  MOV EDX,dword ptr [EBP + 0xfffff994]
0041047c  FSTP float ptr [EDX + 0x260]
00410482  MOV EAX,dword ptr [EBP + -0x34]
00410485  MOV ECX,dword ptr [EBP + 0xfffff994]
0041048b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00410492  MOV EAX,dword ptr [EBP + 0xfffff994]
00410498  MOV ECX,dword ptr [EDX + 0x174]
0041049e  MOV dword ptr [EAX + 0x25c],ECX
004104a4  MOV EDX,dword ptr [EBP + -0x34]
004104a7  MOV EAX,dword ptr [EBP + 0xfffff994]
004104ad  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004104b4  MOV EDX,dword ptr [EBP + 0xfffff994]
004104ba  MOV EAX,dword ptr [ECX + 0x178]
004104c0  MOV dword ptr [EDX + 0x258],EAX
004104c6  MOV ECX,dword ptr [EBP + -0x34]
004104c9  MOV EDX,dword ptr [EBP + 0xfffff994]
004104cf  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004104d6  FLD float ptr [EAX + 0x164]
004104dc  FCHS
004104de  PUSH ECX
004104df  FSTP float ptr [ESP]
004104e2  CALL 0x00401262
004104e7  ADD ESP,0x4
004104ea  FCHS
004104ec  FMUL float ptr [0x0044e0f4] {-2}
004104f2  MOV ECX,dword ptr [EBP + -0x34]
004104f5  MOV EDX,dword ptr [EBP + 0xfffff994]
004104fb  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410502  FADD float ptr [EAX + 0x158]
00410508  MOV ECX,dword ptr [EBP + 0xfffff994]
0041050e  FSTP float ptr [ECX + 0x24c]
00410514  MOV EDX,dword ptr [EBP + -0x34]
00410517  MOV EAX,dword ptr [EBP + 0xfffff994]
0041051d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00410524  FLD float ptr [ECX + 0x170]
0041052a  FMUL float ptr [0x0044e0f8] {0.9}
00410530  MOV EDX,dword ptr [EBP + 0xfffff994]
00410536  FSTP float ptr [EDX + 0x250]
0041053c  MOV EAX,dword ptr [EBP + -0x34]
0041053f  MOV ECX,dword ptr [EBP + 0xfffff994]
00410545  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041054c  FLD float ptr [EDX + 0x164]
00410552  FCHS
00410554  PUSH ECX
00410555  FSTP float ptr [ESP]
00410558  CALL 0x0040136b
0041055d  ADD ESP,0x4
00410560  FMUL float ptr [0x0044e0f4] {-2}
00410566  MOV EAX,dword ptr [EBP + -0x34]
00410569  MOV ECX,dword ptr [EBP + 0xfffff994]
0041056f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00410576  FADD float ptr [EDX + 0x160]
0041057c  MOV EAX,dword ptr [EBP + 0xfffff994]
00410582  FSTP float ptr [EAX + 0x254]
00410588  MOV ECX,dword ptr [EBP + 0xfffff994]
0041058e  MOV EDX,dword ptr [EBP + -0x34]
00410591  MOV dword ptr [ECX + 0x404],EDX
00410597  MOV EAX,dword ptr [EBP + 0xfffff994]
0041059d  MOV dword ptr [EAX + 0x268],0xffffffff
004105a7  MOV ECX,dword ptr [EBP + 0xfffff994]
004105ad  MOV byte ptr [ECX + 0x414],0x0
004105b4  JMP 0x00410601
004105b6  MOV EDX,dword ptr [EBP + 0xfffff994]
004105bc  FLD float ptr [EDX + 0x410]
004105c2  FCOMP float ptr [0x0044e0d0] {0}
004105c8  FNSTSW AX
004105ca  TEST AH,0x41
004105cd  JNZ 0x004105e1
004105cf  MOV EAX,dword ptr [EBP + 0xfffff994]
004105d5  MOV dword ptr [EAX + 0x40c],0x3
004105df  JMP 0x004105f1
004105e1  MOV ECX,dword ptr [EBP + 0xfffff994]
004105e7  MOV dword ptr [ECX + 0x40c],0x4
004105f1  MOV EDX,dword ptr [EBP + 0xfffff994]
004105f7  MOV dword ptr [EDX + 0x410],0xc20c0000
00410601  MOV EAX,dword ptr [EBP + 0xfffff994]
00410607  CMP dword ptr [EAX + 0x40c],0x3
0041060e  JNZ 0x00411085
00410614  MOV ECX,dword ptr [EBP + 0xfffff994]
0041061a  CMP dword ptr [ECX + 0x3b0],0x2
00410621  JNZ 0x004109be
00410627  PUSH 0x0
00410629  PUSH 0x41a00000
0041062e  PUSH 0x0
00410630  MOV EDX,dword ptr [EBP + 0xfffff994]
00410636  MOV EAX,dword ptr [EDX + 0x410]
0041063c  PUSH EAX
0041063d  LEA ECX,[EBP + 0xfffffe18]
00410643  CALL 0x00401348
00410648  SUB ESP,0xc
0041064b  MOV ECX,ESP
0041064d  MOV EDX,dword ptr [EAX]
0041064f  MOV dword ptr [ECX],EDX
00410651  MOV EDX,dword ptr [EAX + 0x4]
00410654  MOV dword ptr [ECX + 0x4],EDX
00410657  MOV EAX,dword ptr [EAX + 0x8]
0041065a  MOV dword ptr [ECX + 0x8],EAX
0041065d  MOV ECX,dword ptr [EBP + 0xfffff994]
00410663  MOV EDX,dword ptr [ECX + 0x3f8]
00410669  MOV EAX,dword ptr [EBP + 0xfffff994]
0041066f  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00410676  CALL 0x004012c6
0041067b  PUSH 0x1
0041067d  MOV ECX,dword ptr [EBP + 0xfffff994]
00410683  MOV ECX,dword ptr [ECX + 0xc0]
00410689  CALL 0x00401258
0041068e  MOV EDX,dword ptr [EBP + 0xfffff994]
00410694  MOV EAX,dword ptr [EDX + 0x3f8]
0041069a  MOV ECX,dword ptr [EBP + 0xfffff994]
004106a0  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004106a7  MOV dword ptr [EDX + 0x198],0x0
004106b1  MOV EAX,dword ptr [EBP + 0xfffff994]
004106b7  MOV ECX,dword ptr [EAX + 0x3f8]
004106bd  MOV EDX,dword ptr [EBP + 0xfffff994]
004106c3  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004106ca  MOV dword ptr [EAX + 0x164],0x0
004106d4  MOV ECX,dword ptr [EBP + 0xfffff994]
004106da  MOV EDX,dword ptr [ECX + 0x3f8]
004106e0  MOV EAX,dword ptr [EBP + 0xfffff994]
004106e6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004106ed  MOV dword ptr [ECX + 0x190],0xa
004106f7  MOV EDX,dword ptr [EBP + 0xfffff994]
004106fd  MOV EAX,dword ptr [EDX + 0x3f8]
00410703  MOV ECX,dword ptr [EBP + 0xfffff994]
00410709  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
00410710  CALL 0x00401163
00410715  PUSH 0x4048f5c3
0041071a  PUSH 0x0
0041071c  PUSH 0x0
0041071e  MOV EDX,dword ptr [EBP + 0xfffff994]
00410724  MOV EAX,dword ptr [EDX + 0x410]
0041072a  PUSH EAX
0041072b  LEA ECX,[EBP + 0xfffffe0c]
00410731  CALL 0x00401348
00410736  SUB ESP,0xc
00410739  MOV ECX,ESP
0041073b  MOV EDX,dword ptr [EAX]
0041073d  MOV dword ptr [ECX],EDX
0041073f  MOV EDX,dword ptr [EAX + 0x4]
00410742  MOV dword ptr [ECX + 0x4],EDX
00410745  MOV EAX,dword ptr [EAX + 0x8]
00410748  MOV dword ptr [ECX + 0x8],EAX
0041074b  MOV ECX,dword ptr [EBP + -0x4]
0041074e  MOV EDX,dword ptr [EBP + 0xfffff994]
00410754  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041075b  CALL 0x004012c6
00410760  PUSH 0x4048f5c3
00410765  PUSH 0x40400000
0041076a  PUSH 0x0
0041076c  MOV EAX,dword ptr [EBP + 0xfffff994]
00410772  FLD float ptr [EAX + 0x410]
00410778  FADD float ptr [0x0044e0d4] {5}
0041077e  PUSH ECX
0041077f  FSTP float ptr [ESP]
00410782  LEA ECX,[EBP + 0xfffffe00]
00410788  CALL 0x00401348
0041078d  SUB ESP,0xc
00410790  MOV ECX,ESP
00410792  MOV EDX,dword ptr [EAX]
00410794  MOV dword ptr [ECX],EDX
00410796  MOV EDX,dword ptr [EAX + 0x4]
00410799  MOV dword ptr [ECX + 0x4],EDX
0041079c  MOV EAX,dword ptr [EAX + 0x8]
0041079f  MOV dword ptr [ECX + 0x8],EAX
004107a2  MOV ECX,dword ptr [EBP + -0x14]
004107a5  MOV EDX,dword ptr [EBP + 0xfffff994]
004107ab  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004107b2  CALL 0x004012c6
004107b7  PUSH 0x4048f5c3
004107bc  PUSH 0x40800000
004107c1  PUSH 0x0
004107c3  MOV EAX,dword ptr [EBP + 0xfffff994]
004107c9  FLD float ptr [EAX + 0x410]
004107cf  FSUB float ptr [0x0044e0e8] {1}
004107d5  PUSH ECX
004107d6  FSTP float ptr [ESP]
004107d9  LEA ECX,[EBP + 0xfffffdf4]
004107df  CALL 0x00401348
004107e4  SUB ESP,0xc
004107e7  MOV ECX,ESP
004107e9  MOV EDX,dword ptr [EAX]
004107eb  MOV dword ptr [ECX],EDX
004107ed  MOV EDX,dword ptr [EAX + 0x4]
004107f0  MOV dword ptr [ECX + 0x4],EDX
004107f3  MOV EAX,dword ptr [EAX + 0x8]
004107f6  MOV dword ptr [ECX + 0x8],EAX
004107f9  MOV ECX,dword ptr [EBP + -0x10]
004107fc  MOV EDX,dword ptr [EBP + 0xfffff994]
00410802  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410809  CALL 0x004012c6
0041080e  MOV EAX,dword ptr [EBP + 0xfffff994]
00410814  MOV ECX,dword ptr [EAX + 0x3f8]
0041081a  MOV EDX,dword ptr [EBP + 0xfffff994]
00410820  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410827  FLD float ptr [EAX + 0x164]
0041082d  FSUB float ptr [0x0044e0f0] {3.14}
00410833  MOV ECX,dword ptr [EBP + 0xfffff994]
00410839  FSTP float ptr [ECX + 0x260]
0041083f  MOV EDX,dword ptr [EBP + 0xfffff994]
00410845  MOV EAX,dword ptr [EDX + 0x3f8]
0041084b  MOV ECX,dword ptr [EBP + 0xfffff994]
00410851  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00410858  MOV EAX,dword ptr [EBP + 0xfffff994]
0041085e  MOV ECX,dword ptr [EDX + 0x174]
00410864  MOV dword ptr [EAX + 0x25c],ECX
0041086a  MOV EDX,dword ptr [EBP + 0xfffff994]
00410870  MOV EAX,dword ptr [EDX + 0x3f8]
00410876  MOV ECX,dword ptr [EBP + 0xfffff994]
0041087c  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00410883  MOV EAX,dword ptr [EBP + 0xfffff994]
00410889  MOV ECX,dword ptr [EDX + 0x178]
0041088f  MOV dword ptr [EAX + 0x258],ECX
00410895  MOV EDX,dword ptr [EBP + 0xfffff994]
0041089b  MOV EAX,dword ptr [EDX + 0x3f8]
004108a1  MOV ECX,dword ptr [EBP + 0xfffff994]
004108a7  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004108ae  FLD float ptr [EDX + 0x164]
004108b4  FCHS
004108b6  PUSH ECX
004108b7  FSTP float ptr [ESP]
004108ba  CALL 0x00401262
004108bf  ADD ESP,0x4
004108c2  FCHS
004108c4  FMUL float ptr [0x0044e0f4] {-2}
004108ca  MOV EAX,dword ptr [EBP + 0xfffff994]
004108d0  MOV ECX,dword ptr [EAX + 0x3f8]
004108d6  MOV EDX,dword ptr [EBP + 0xfffff994]
004108dc  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004108e3  FADD float ptr [EAX + 0x158]
004108e9  MOV ECX,dword ptr [EBP + 0xfffff994]
004108ef  FSTP float ptr [ECX + 0x24c]
004108f5  MOV EDX,dword ptr [EBP + 0xfffff994]
004108fb  MOV EAX,dword ptr [EDX + 0x3f8]
00410901  MOV ECX,dword ptr [EBP + 0xfffff994]
00410907  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041090e  FLD float ptr [EDX + 0x170]
00410914  FMUL float ptr [0x0044e0f8] {0.9}
0041091a  MOV EAX,dword ptr [EBP + 0xfffff994]
00410920  FSTP float ptr [EAX + 0x250]
00410926  MOV ECX,dword ptr [EBP + 0xfffff994]
0041092c  MOV EDX,dword ptr [ECX + 0x3f8]
00410932  MOV EAX,dword ptr [EBP + 0xfffff994]
00410938  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041093f  FLD float ptr [ECX + 0x164]
00410945  FCHS
00410947  PUSH ECX
00410948  FSTP float ptr [ESP]
0041094b  CALL 0x0040136b
00410950  ADD ESP,0x4
00410953  FMUL float ptr [0x0044e0f4] {-2}
00410959  MOV EDX,dword ptr [EBP + 0xfffff994]
0041095f  MOV EAX,dword ptr [EDX + 0x3f8]
00410965  MOV ECX,dword ptr [EBP + 0xfffff994]
0041096b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00410972  FADD float ptr [EDX + 0x160]
00410978  MOV EAX,dword ptr [EBP + 0xfffff994]
0041097e  FSTP float ptr [EAX + 0x254]
00410984  MOV ECX,dword ptr [EBP + 0xfffff994]
0041098a  MOV EDX,dword ptr [EBP + 0xfffff994]
00410990  MOV EAX,dword ptr [EDX + 0x3f8]
00410996  MOV dword ptr [ECX + 0x404],EAX
0041099c  MOV ECX,dword ptr [EBP + 0xfffff994]
004109a2  MOV dword ptr [ECX + 0x268],0xffffffff
004109ac  MOV EDX,dword ptr [EBP + 0xfffff994]
004109b2  MOV byte ptr [EDX + 0x414],0x0
004109b9  JMP 0x00411080
004109be  MOV EAX,dword ptr [EBP + 0xfffff994]
004109c4  MOV ECX,dword ptr [EAX + 0x408]
004109ca  MOV EDX,dword ptr [EBP + 0xfffff994]
004109d0  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004109d7  XOR ECX,ECX
004109d9  MOV CL,byte ptr [EAX + 0x154]
004109df  TEST ECX,ECX
004109e1  JZ 0x00410e15
004109e7  PUSH 0x0
004109e9  PUSH 0x41a00000
004109ee  PUSH 0x0
004109f0  MOV EDX,dword ptr [EBP + 0xfffff994]
004109f6  MOV EAX,dword ptr [EDX + 0x410]
004109fc  PUSH EAX
004109fd  LEA ECX,[EBP + 0xfffffde8]
00410a03  CALL 0x00401348
00410a08  SUB ESP,0xc
00410a0b  MOV ECX,ESP
00410a0d  MOV EDX,dword ptr [EAX]
00410a0f  MOV dword ptr [ECX],EDX
00410a11  MOV EDX,dword ptr [EAX + 0x4]
00410a14  MOV dword ptr [ECX + 0x4],EDX
00410a17  MOV EAX,dword ptr [EAX + 0x8]
00410a1a  MOV dword ptr [ECX + 0x8],EAX
00410a1d  MOV ECX,dword ptr [EBP + -0x34]
00410a20  MOV EDX,dword ptr [EBP + 0xfffff994]
00410a26  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410a2d  CALL 0x004012c6
00410a32  PUSH 0x4048f5c3
00410a37  PUSH 0x41200000
00410a3c  PUSH 0x0
00410a3e  MOV EAX,dword ptr [EBP + 0xfffff994]
00410a44  FLD float ptr [EAX + 0x410]
00410a4a  FADD float ptr [0x0044e0d4] {5}
00410a50  PUSH ECX
00410a51  FSTP float ptr [ESP]
00410a54  LEA ECX,[EBP + 0xfffffddc]
00410a5a  CALL 0x00401348
00410a5f  SUB ESP,0xc
00410a62  MOV ECX,ESP
00410a64  MOV EDX,dword ptr [EAX]
00410a66  MOV dword ptr [ECX],EDX
00410a68  MOV EDX,dword ptr [EAX + 0x4]
00410a6b  MOV dword ptr [ECX + 0x4],EDX
00410a6e  MOV EAX,dword ptr [EAX + 0x8]
00410a71  MOV dword ptr [ECX + 0x8],EAX
00410a74  MOV ECX,dword ptr [EBP + -0x2c]
00410a77  MOV EDX,dword ptr [EBP + 0xfffff994]
00410a7d  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410a84  CALL 0x004012c6
00410a89  PUSH 0x4048f5c3
00410a8e  PUSH 0x41400000
00410a93  PUSH 0x0
00410a95  MOV EAX,dword ptr [EBP + 0xfffff994]
00410a9b  FLD float ptr [EAX + 0x410]
00410aa1  FSUB float ptr [0x0044e0e8] {1}
00410aa7  PUSH ECX
00410aa8  FSTP float ptr [ESP]
00410aab  LEA ECX,[EBP + 0xfffffdd0]
00410ab1  CALL 0x00401348
00410ab6  SUB ESP,0xc
00410ab9  MOV ECX,ESP
00410abb  MOV EDX,dword ptr [EAX]
00410abd  MOV dword ptr [ECX],EDX
00410abf  MOV EDX,dword ptr [EAX + 0x4]
00410ac2  MOV dword ptr [ECX + 0x4],EDX
00410ac5  MOV EAX,dword ptr [EAX + 0x8]
00410ac8  MOV dword ptr [ECX + 0x8],EAX
00410acb  MOV ECX,dword ptr [EBP + -0x28]
00410ace  MOV EDX,dword ptr [EBP + 0xfffff994]
00410ad4  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410adb  CALL 0x004012c6
00410ae0  PUSH 0x4048f5c3
00410ae5  PUSH 0x3f800000
00410aea  PUSH 0x0
00410aec  MOV EAX,dword ptr [EBP + 0xfffff994]
00410af2  FLD float ptr [EAX + 0x410]
00410af8  FADD float ptr [0x0044e0fc] {8}
00410afe  PUSH ECX
00410aff  FSTP float ptr [ESP]
00410b02  LEA ECX,[EBP + 0xfffffdc4]
00410b08  CALL 0x00401348
00410b0d  SUB ESP,0xc
00410b10  MOV ECX,ESP
00410b12  MOV EDX,dword ptr [EAX]
00410b14  MOV dword ptr [ECX],EDX
00410b16  MOV EDX,dword ptr [EAX + 0x4]
00410b19  MOV dword ptr [ECX + 0x4],EDX
00410b1c  MOV EAX,dword ptr [EAX + 0x8]
00410b1f  MOV dword ptr [ECX + 0x8],EAX
00410b22  MOV ECX,dword ptr [EBP + -0x14]
00410b25  MOV EDX,dword ptr [EBP + 0xfffff994]
00410b2b  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410b32  CALL 0x004012c6
00410b37  PUSH 0x4048f5c3
00410b3c  PUSH 0x40000000
00410b41  PUSH 0x0
00410b43  MOV EAX,dword ptr [EBP + 0xfffff994]
00410b49  FLD float ptr [EAX + 0x410]
00410b4f  FSUB float ptr [0x0044e0fc] {8}
00410b55  PUSH ECX
00410b56  FSTP float ptr [ESP]
00410b59  LEA ECX,[EBP + 0xfffffdb8]
00410b5f  CALL 0x00401348
00410b64  SUB ESP,0xc
00410b67  MOV ECX,ESP
00410b69  MOV EDX,dword ptr [EAX]
00410b6b  MOV dword ptr [ECX],EDX
00410b6d  MOV EDX,dword ptr [EAX + 0x4]
00410b70  MOV dword ptr [ECX + 0x4],EDX
00410b73  MOV EAX,dword ptr [EAX + 0x8]
00410b76  MOV dword ptr [ECX + 0x8],EAX
00410b79  MOV ECX,dword ptr [EBP + -0x10]
00410b7c  MOV EDX,dword ptr [EBP + 0xfffff994]
00410b82  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410b89  CALL 0x004012c6
00410b8e  PUSH 0x4048f5c3
00410b93  PUSH 0x40400000
00410b98  PUSH 0x0
00410b9a  MOV EAX,dword ptr [EBP + 0xfffff994]
00410ba0  MOV ECX,dword ptr [EAX + 0x410]
00410ba6  PUSH ECX
00410ba7  LEA ECX,[EBP + 0xfffffdac]
00410bad  CALL 0x00401348
00410bb2  SUB ESP,0xc
00410bb5  MOV EDX,ESP
00410bb7  MOV ECX,dword ptr [EAX]
00410bb9  MOV dword ptr [EDX],ECX
00410bbb  MOV ECX,dword ptr [EAX + 0x4]
00410bbe  MOV dword ptr [EDX + 0x4],ECX
00410bc1  MOV EAX,dword ptr [EAX + 0x8]
00410bc4  MOV dword ptr [EDX + 0x8],EAX
00410bc7  MOV ECX,dword ptr [EBP + -0x4]
00410bca  MOV EDX,dword ptr [EBP + 0xfffff994]
00410bd0  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410bd7  CALL 0x004012c6
00410bdc  PUSH 0x1
00410bde  MOV EAX,dword ptr [EBP + 0xfffff994]
00410be4  MOV ECX,dword ptr [EAX + 0xc0]
00410bea  CALL 0x00401258
00410bef  MOV ECX,dword ptr [EBP + -0x34]
00410bf2  MOV EDX,dword ptr [EBP + 0xfffff994]
00410bf8  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410bff  MOV dword ptr [EAX + 0x198],0x0
00410c09  MOV ECX,dword ptr [EBP + -0x34]
00410c0c  MOV EDX,dword ptr [EBP + 0xfffff994]
00410c12  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410c19  MOV ECX,dword ptr [EBP + -0x2c]
00410c1c  MOV EDX,dword ptr [EBP + 0xfffff994]
00410c22  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410c29  FLD float ptr [EAX + 0x160]
00410c2f  FSUB float ptr [ECX + 0x160]
00410c35  PUSH ECX
00410c36  FSTP float ptr [ESP]
00410c39  MOV EDX,dword ptr [EBP + -0x34]
00410c3c  MOV EAX,dword ptr [EBP + 0xfffff994]
00410c42  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00410c49  MOV EDX,dword ptr [EBP + -0x2c]
00410c4c  MOV EAX,dword ptr [EBP + 0xfffff994]
00410c52  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00410c59  FLD float ptr [ECX + 0x158]
00410c5f  FSUB float ptr [EDX + 0x158]
00410c65  PUSH ECX
00410c66  FSTP float ptr [ESP]
00410c69  CALL 0x00401127
00410c6e  ADD ESP,0x8
00410c71  MOV EAX,dword ptr [EBP + -0x34]
00410c74  MOV ECX,dword ptr [EBP + 0xfffff994]
00410c7a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00410c81  FSTP float ptr [EDX + 0x164]
00410c87  MOV EAX,dword ptr [EBP + -0x34]
00410c8a  MOV ECX,dword ptr [EBP + 0xfffff994]
00410c90  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00410c97  MOV dword ptr [EDX + 0x190],0xa
00410ca1  MOV EAX,dword ptr [EBP + -0x34]
00410ca4  MOV ECX,dword ptr [EBP + 0xfffff994]
00410caa  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
00410cb1  CALL 0x00401163
00410cb6  MOV EDX,dword ptr [EBP + -0x34]
00410cb9  MOV EAX,dword ptr [EBP + 0xfffff994]
00410cbf  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00410cc6  FLD float ptr [ECX + 0x164]
00410ccc  FSUB float ptr [0x0044e0f0] {3.14}
00410cd2  MOV EDX,dword ptr [EBP + 0xfffff994]
00410cd8  FSTP float ptr [EDX + 0x260]
00410cde  MOV EAX,dword ptr [EBP + -0x34]
00410ce1  MOV ECX,dword ptr [EBP + 0xfffff994]
00410ce7  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00410cee  MOV EAX,dword ptr [EBP + 0xfffff994]
00410cf4  MOV ECX,dword ptr [EDX + 0x174]
00410cfa  MOV dword ptr [EAX + 0x25c],ECX
00410d00  MOV EDX,dword ptr [EBP + -0x34]
00410d03  MOV EAX,dword ptr [EBP + 0xfffff994]
00410d09  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00410d10  MOV EDX,dword ptr [EBP + 0xfffff994]
00410d16  MOV EAX,dword ptr [ECX + 0x178]
00410d1c  MOV dword ptr [EDX + 0x258],EAX
00410d22  MOV ECX,dword ptr [EBP + -0x34]
00410d25  MOV EDX,dword ptr [EBP + 0xfffff994]
00410d2b  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410d32  FLD float ptr [EAX + 0x164]
00410d38  FCHS
00410d3a  PUSH ECX
00410d3b  FSTP float ptr [ESP]
00410d3e  CALL 0x00401262
00410d43  ADD ESP,0x4
00410d46  FCHS
00410d48  FMUL float ptr [0x0044e0f4] {-2}
00410d4e  MOV ECX,dword ptr [EBP + -0x34]
00410d51  MOV EDX,dword ptr [EBP + 0xfffff994]
00410d57  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410d5e  FADD float ptr [EAX + 0x158]
00410d64  MOV ECX,dword ptr [EBP + 0xfffff994]
00410d6a  FSTP float ptr [ECX + 0x24c]
00410d70  MOV EDX,dword ptr [EBP + -0x34]
00410d73  MOV EAX,dword ptr [EBP + 0xfffff994]
00410d79  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00410d80  FLD float ptr [ECX + 0x170]
00410d86  FMUL float ptr [0x0044e0f8] {0.9}
00410d8c  MOV EDX,dword ptr [EBP + 0xfffff994]
00410d92  FSTP float ptr [EDX + 0x250]
00410d98  MOV EAX,dword ptr [EBP + -0x34]
00410d9b  MOV ECX,dword ptr [EBP + 0xfffff994]
00410da1  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00410da8  FLD float ptr [EDX + 0x164]
00410dae  FCHS
00410db0  PUSH ECX
00410db1  FSTP float ptr [ESP]
00410db4  CALL 0x0040136b
00410db9  ADD ESP,0x4
00410dbc  FMUL float ptr [0x0044e0f4] {-2}
00410dc2  MOV EAX,dword ptr [EBP + -0x34]
00410dc5  MOV ECX,dword ptr [EBP + 0xfffff994]
00410dcb  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00410dd2  FADD float ptr [EDX + 0x160]
00410dd8  MOV EAX,dword ptr [EBP + 0xfffff994]
00410dde  FSTP float ptr [EAX + 0x254]
00410de4  MOV ECX,dword ptr [EBP + 0xfffff994]
00410dea  MOV EDX,dword ptr [EBP + -0x34]
00410ded  MOV dword ptr [ECX + 0x404],EDX
00410df3  MOV EAX,dword ptr [EBP + 0xfffff994]
00410df9  MOV dword ptr [EAX + 0x268],0xffffffff
00410e03  MOV ECX,dword ptr [EBP + 0xfffff994]
00410e09  MOV byte ptr [ECX + 0x414],0x0
00410e10  JMP 0x00411080
00410e15  MOV EDX,dword ptr [EBP + 0xfffff994]
00410e1b  CMP dword ptr [EDX + 0x3b0],0x1
00410e22  JNZ 0x00410e34
00410e24  MOV EAX,dword ptr [EBP + 0xfffff994]
00410e2a  MOV dword ptr [EAX + 0x41c],0x40600000
00410e34  MOV ECX,dword ptr [EBP + -0x4]
00410e37  MOV EDX,dword ptr [EBP + 0xfffff994]
00410e3d  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410e44  MOV dword ptr [EAX + 0x190],0x4
00410e4e  MOV ECX,dword ptr [EBP + -0x4]
00410e51  MOV EDX,dword ptr [EBP + 0xfffff994]
00410e57  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410e5e  CALL 0x0040100f
00410e63  MOV EAX,dword ptr [EBP + 0xfffff994]
00410e69  MOV ECX,dword ptr [EBP + -0x4]
00410e6c  MOV dword ptr [EAX + 0x268],ECX
00410e72  PUSH 0x0
00410e74  PUSH 0x41a00000
00410e79  PUSH 0x0
00410e7b  MOV EDX,dword ptr [EBP + 0xfffff994]
00410e81  MOV EAX,dword ptr [EDX + 0x410]
00410e87  PUSH EAX
00410e88  LEA ECX,[EBP + 0xfffffda0]
00410e8e  CALL 0x00401348
00410e93  SUB ESP,0xc
00410e96  MOV ECX,ESP
00410e98  MOV EDX,dword ptr [EAX]
00410e9a  MOV dword ptr [ECX],EDX
00410e9c  MOV EDX,dword ptr [EAX + 0x4]
00410e9f  MOV dword ptr [ECX + 0x4],EDX
00410ea2  MOV EAX,dword ptr [EAX + 0x8]
00410ea5  MOV dword ptr [ECX + 0x8],EAX
00410ea8  MOV ECX,dword ptr [EBP + -0x4]
00410eab  MOV EDX,dword ptr [EBP + 0xfffff994]
00410eb1  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410eb8  CALL 0x004012c6
00410ebd  PUSH 0x4048f5c3
00410ec2  PUSH 0x41200000
00410ec7  PUSH 0x0
00410ec9  MOV EAX,dword ptr [EBP + 0xfffff994]
00410ecf  FLD float ptr [EAX + 0x410]
00410ed5  FADD float ptr [0x0044e0d4] {5}
00410edb  PUSH ECX
00410edc  FSTP float ptr [ESP]
00410edf  LEA ECX,[EBP + 0xfffffd94]
00410ee5  CALL 0x00401348
00410eea  SUB ESP,0xc
00410eed  MOV ECX,ESP
00410eef  MOV EDX,dword ptr [EAX]
00410ef1  MOV dword ptr [ECX],EDX
00410ef3  MOV EDX,dword ptr [EAX + 0x4]
00410ef6  MOV dword ptr [ECX + 0x4],EDX
00410ef9  MOV EAX,dword ptr [EAX + 0x8]
00410efc  MOV dword ptr [ECX + 0x8],EAX
00410eff  MOV ECX,dword ptr [EBP + -0x14]
00410f02  MOV EDX,dword ptr [EBP + 0xfffff994]
00410f08  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410f0f  CALL 0x004012c6
00410f14  PUSH 0x4048f5c3
00410f19  PUSH 0x41400000
00410f1e  PUSH 0x0
00410f20  MOV EAX,dword ptr [EBP + 0xfffff994]
00410f26  FLD float ptr [EAX + 0x410]
00410f2c  FSUB float ptr [0x0044e0e8] {1}
00410f32  PUSH ECX
00410f33  FSTP float ptr [ESP]
00410f36  LEA ECX,[EBP + 0xfffffd88]
00410f3c  CALL 0x00401348
00410f41  SUB ESP,0xc
00410f44  MOV ECX,ESP
00410f46  MOV EDX,dword ptr [EAX]
00410f48  MOV dword ptr [ECX],EDX
00410f4a  MOV EDX,dword ptr [EAX + 0x4]
00410f4d  MOV dword ptr [ECX + 0x4],EDX
00410f50  MOV EAX,dword ptr [EAX + 0x8]
00410f53  MOV dword ptr [ECX + 0x8],EAX
00410f56  MOV ECX,dword ptr [EBP + -0x10]
00410f59  MOV EDX,dword ptr [EBP + 0xfffff994]
00410f5f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410f66  CALL 0x004012c6
00410f6b  PUSH 0x4048f5c3
00410f70  PUSH 0x40a00000
00410f75  PUSH 0x0
00410f77  MOV EAX,dword ptr [EBP + 0xfffff994]
00410f7d  FLD float ptr [EAX + 0x410]
00410f83  FADD float ptr [0x0044e0fc] {8}
00410f89  PUSH ECX
00410f8a  FSTP float ptr [ESP]
00410f8d  LEA ECX,[EBP + 0xfffffd7c]
00410f93  CALL 0x00401348
00410f98  SUB ESP,0xc
00410f9b  MOV ECX,ESP
00410f9d  MOV EDX,dword ptr [EAX]
00410f9f  MOV dword ptr [ECX],EDX
00410fa1  MOV EDX,dword ptr [EAX + 0x4]
00410fa4  MOV dword ptr [ECX + 0x4],EDX
00410fa7  MOV EAX,dword ptr [EAX + 0x8]
00410faa  MOV dword ptr [ECX + 0x8],EAX
00410fad  MOV ECX,dword ptr [EBP + -0x2c]
00410fb0  MOV EDX,dword ptr [EBP + 0xfffff994]
00410fb6  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00410fbd  CALL 0x004012c6
00410fc2  PUSH 0x4048f5c3
00410fc7  PUSH 0x40800000
00410fcc  PUSH 0x0
00410fce  MOV EAX,dword ptr [EBP + 0xfffff994]
00410fd4  FLD float ptr [EAX + 0x410]
00410fda  FSUB float ptr [0x0044e0fc] {8}
00410fe0  PUSH ECX
00410fe1  FSTP float ptr [ESP]
00410fe4  LEA ECX,[EBP + 0xfffffd70]
00410fea  CALL 0x00401348
00410fef  SUB ESP,0xc
00410ff2  MOV ECX,ESP
00410ff4  MOV EDX,dword ptr [EAX]
00410ff6  MOV dword ptr [ECX],EDX
00410ff8  MOV EDX,dword ptr [EAX + 0x4]
00410ffb  MOV dword ptr [ECX + 0x4],EDX
00410ffe  MOV EAX,dword ptr [EAX + 0x8]
00411001  MOV dword ptr [ECX + 0x8],EAX
00411004  MOV ECX,dword ptr [EBP + -0x28]
00411007  MOV EDX,dword ptr [EBP + 0xfffff994]
0041100d  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411014  CALL 0x004012c6
00411019  PUSH 0x4048f5c3
0041101e  PUSH 0x0
00411020  PUSH 0x0
00411022  MOV EAX,dword ptr [EBP + 0xfffff994]
00411028  MOV ECX,dword ptr [EAX + 0x410]
0041102e  PUSH ECX
0041102f  LEA ECX,[EBP + 0xfffffd64]
00411035  CALL 0x00401348
0041103a  SUB ESP,0xc
0041103d  MOV EDX,ESP
0041103f  MOV ECX,dword ptr [EAX]
00411041  MOV dword ptr [EDX],ECX
00411043  MOV ECX,dword ptr [EAX + 0x4]
00411046  MOV dword ptr [EDX + 0x4],ECX
00411049  MOV EAX,dword ptr [EAX + 0x8]
0041104c  MOV dword ptr [EDX + 0x8],EAX
0041104f  MOV ECX,dword ptr [EBP + -0x34]
00411052  MOV EDX,dword ptr [EBP + 0xfffff994]
00411058  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041105f  CALL 0x004012c6
00411064  MOV EAX,dword ptr [EBP + 0xfffff994]
0041106a  MOV ECX,dword ptr [EBP + -0x4]
0041106d  MOV dword ptr [EAX + 0x404],ECX
00411073  MOV EDX,dword ptr [EBP + 0xfffff994]
00411079  MOV byte ptr [EDX + 0x414],0x0
00411080  JMP 0x00411ae3
00411085  MOV EAX,dword ptr [EBP + 0xfffff994]
0041108b  CMP dword ptr [EAX + 0x40c],0x4
00411092  JNZ 0x00411ae3
00411098  MOV ECX,dword ptr [EBP + 0xfffff994]
0041109e  CMP dword ptr [ECX + 0x3b0],0x2
004110a5  JNZ 0x0041143c
004110ab  PUSH 0x4048f5c3
004110b0  PUSH 0xc1a00000
004110b5  PUSH 0x0
004110b7  MOV EDX,dword ptr [EBP + 0xfffff994]
004110bd  MOV EAX,dword ptr [EDX + 0x410]
004110c3  PUSH EAX
004110c4  LEA ECX,[EBP + 0xfffffd58]
004110ca  CALL 0x00401348
004110cf  SUB ESP,0xc
004110d2  MOV ECX,ESP
004110d4  MOV EDX,dword ptr [EAX]
004110d6  MOV dword ptr [ECX],EDX
004110d8  MOV EDX,dword ptr [EAX + 0x4]
004110db  MOV dword ptr [ECX + 0x4],EDX
004110de  MOV EAX,dword ptr [EAX + 0x8]
004110e1  MOV dword ptr [ECX + 0x8],EAX
004110e4  MOV ECX,dword ptr [EBP + 0xfffff994]
004110ea  MOV EDX,dword ptr [ECX + 0x3f8]
004110f0  MOV EAX,dword ptr [EBP + 0xfffff994]
004110f6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004110fd  CALL 0x004012c6
00411102  PUSH 0x1
00411104  MOV ECX,dword ptr [EBP + 0xfffff994]
0041110a  MOV ECX,dword ptr [ECX + 0xc0]
00411110  CALL 0x00401258
00411115  MOV EDX,dword ptr [EBP + 0xfffff994]
0041111b  MOV EAX,dword ptr [EDX + 0x3f8]
00411121  MOV ECX,dword ptr [EBP + 0xfffff994]
00411127  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041112e  MOV dword ptr [EDX + 0x198],0x0
00411138  MOV EAX,dword ptr [EBP + 0xfffff994]
0041113e  MOV ECX,dword ptr [EAX + 0x3f8]
00411144  MOV EDX,dword ptr [EBP + 0xfffff994]
0041114a  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411151  MOV dword ptr [EAX + 0x164],0x4048f5c3
0041115b  MOV ECX,dword ptr [EBP + 0xfffff994]
00411161  MOV EDX,dword ptr [ECX + 0x3f8]
00411167  MOV EAX,dword ptr [EBP + 0xfffff994]
0041116d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00411174  MOV dword ptr [ECX + 0x190],0xa
0041117e  MOV EDX,dword ptr [EBP + 0xfffff994]
00411184  MOV EAX,dword ptr [EDX + 0x3f8]
0041118a  MOV ECX,dword ptr [EBP + 0xfffff994]
00411190  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
00411197  CALL 0x00401163
0041119c  PUSH 0x0
0041119e  PUSH 0x0
004111a0  PUSH 0x0
004111a2  MOV EDX,dword ptr [EBP + 0xfffff994]
004111a8  MOV EAX,dword ptr [EDX + 0x410]
004111ae  PUSH EAX
004111af  LEA ECX,[EBP + 0xfffffd4c]
004111b5  CALL 0x00401348
004111ba  SUB ESP,0xc
004111bd  MOV ECX,ESP
004111bf  MOV EDX,dword ptr [EAX]
004111c1  MOV dword ptr [ECX],EDX
004111c3  MOV EDX,dword ptr [EAX + 0x4]
004111c6  MOV dword ptr [ECX + 0x4],EDX
004111c9  MOV EAX,dword ptr [EAX + 0x8]
004111cc  MOV dword ptr [ECX + 0x8],EAX
004111cf  MOV ECX,dword ptr [EBP + -0x4]
004111d2  MOV EDX,dword ptr [EBP + 0xfffff994]
004111d8  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004111df  CALL 0x004012c6
004111e4  PUSH 0x0
004111e6  PUSH 0xc0400000
004111eb  PUSH 0x0
004111ed  MOV EAX,dword ptr [EBP + 0xfffff994]
004111f3  FLD float ptr [EAX + 0x410]
004111f9  FADD float ptr [0x0044e0d4] {5}
004111ff  PUSH ECX
00411200  FSTP float ptr [ESP]
00411203  LEA ECX,[EBP + 0xfffffd40]
00411209  CALL 0x00401348
0041120e  SUB ESP,0xc
00411211  MOV ECX,ESP
00411213  MOV EDX,dword ptr [EAX]
00411215  MOV dword ptr [ECX],EDX
00411217  MOV EDX,dword ptr [EAX + 0x4]
0041121a  MOV dword ptr [ECX + 0x4],EDX
0041121d  MOV EAX,dword ptr [EAX + 0x8]
00411220  MOV dword ptr [ECX + 0x8],EAX
00411223  MOV ECX,dword ptr [EBP + -0x14]
00411226  MOV EDX,dword ptr [EBP + 0xfffff994]
0041122c  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411233  CALL 0x004012c6
00411238  PUSH 0x0
0041123a  PUSH 0xc0800000
0041123f  PUSH 0x0
00411241  MOV EAX,dword ptr [EBP + 0xfffff994]
00411247  FLD float ptr [EAX + 0x410]
0041124d  FSUB float ptr [0x0044e0e8] {1}
00411253  PUSH ECX
00411254  FSTP float ptr [ESP]
00411257  LEA ECX,[EBP + 0xfffffd34]
0041125d  CALL 0x00401348
00411262  SUB ESP,0xc
00411265  MOV ECX,ESP
00411267  MOV EDX,dword ptr [EAX]
00411269  MOV dword ptr [ECX],EDX
0041126b  MOV EDX,dword ptr [EAX + 0x4]
0041126e  MOV dword ptr [ECX + 0x4],EDX
00411271  MOV EAX,dword ptr [EAX + 0x8]
00411274  MOV dword ptr [ECX + 0x8],EAX
00411277  MOV ECX,dword ptr [EBP + -0x10]
0041127a  MOV EDX,dword ptr [EBP + 0xfffff994]
00411280  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411287  CALL 0x004012c6
0041128c  MOV EAX,dword ptr [EBP + 0xfffff994]
00411292  MOV ECX,dword ptr [EAX + 0x3f8]
00411298  MOV EDX,dword ptr [EBP + 0xfffff994]
0041129e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004112a5  FLD float ptr [EAX + 0x164]
004112ab  FSUB float ptr [0x0044e0f0] {3.14}
004112b1  MOV ECX,dword ptr [EBP + 0xfffff994]
004112b7  FSTP float ptr [ECX + 0x260]
004112bd  MOV EDX,dword ptr [EBP + 0xfffff994]
004112c3  MOV EAX,dword ptr [EDX + 0x3f8]
004112c9  MOV ECX,dword ptr [EBP + 0xfffff994]
004112cf  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004112d6  MOV EAX,dword ptr [EBP + 0xfffff994]
004112dc  MOV ECX,dword ptr [EDX + 0x174]
004112e2  MOV dword ptr [EAX + 0x25c],ECX
004112e8  MOV EDX,dword ptr [EBP + 0xfffff994]
004112ee  MOV EAX,dword ptr [EDX + 0x3f8]
004112f4  MOV ECX,dword ptr [EBP + 0xfffff994]
004112fa  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00411301  MOV EAX,dword ptr [EBP + 0xfffff994]
00411307  MOV ECX,dword ptr [EDX + 0x178]
0041130d  MOV dword ptr [EAX + 0x258],ECX
00411313  MOV EDX,dword ptr [EBP + 0xfffff994]
00411319  MOV EAX,dword ptr [EDX + 0x3f8]
0041131f  MOV ECX,dword ptr [EBP + 0xfffff994]
00411325  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041132c  FLD float ptr [EDX + 0x164]
00411332  FCHS
00411334  PUSH ECX
00411335  FSTP float ptr [ESP]
00411338  CALL 0x00401262
0041133d  ADD ESP,0x4
00411340  FCHS
00411342  FMUL float ptr [0x0044e0f4] {-2}
00411348  MOV EAX,dword ptr [EBP + 0xfffff994]
0041134e  MOV ECX,dword ptr [EAX + 0x3f8]
00411354  MOV EDX,dword ptr [EBP + 0xfffff994]
0041135a  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411361  FADD float ptr [EAX + 0x158]
00411367  MOV ECX,dword ptr [EBP + 0xfffff994]
0041136d  FSTP float ptr [ECX + 0x24c]
00411373  MOV EDX,dword ptr [EBP + 0xfffff994]
00411379  MOV EAX,dword ptr [EDX + 0x3f8]
0041137f  MOV ECX,dword ptr [EBP + 0xfffff994]
00411385  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041138c  FLD float ptr [EDX + 0x170]
00411392  FMUL float ptr [0x0044e0f8] {0.9}
00411398  MOV EAX,dword ptr [EBP + 0xfffff994]
0041139e  FSTP float ptr [EAX + 0x250]
004113a4  MOV ECX,dword ptr [EBP + 0xfffff994]
004113aa  MOV EDX,dword ptr [ECX + 0x3f8]
004113b0  MOV EAX,dword ptr [EBP + 0xfffff994]
004113b6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004113bd  FLD float ptr [ECX + 0x164]
004113c3  FCHS
004113c5  PUSH ECX
004113c6  FSTP float ptr [ESP]
004113c9  CALL 0x0040136b
004113ce  ADD ESP,0x4
004113d1  FMUL float ptr [0x0044e0f4] {-2}
004113d7  MOV EDX,dword ptr [EBP + 0xfffff994]
004113dd  MOV EAX,dword ptr [EDX + 0x3f8]
004113e3  MOV ECX,dword ptr [EBP + 0xfffff994]
004113e9  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004113f0  FADD float ptr [EDX + 0x160]
004113f6  MOV EAX,dword ptr [EBP + 0xfffff994]
004113fc  FSTP float ptr [EAX + 0x254]
00411402  MOV ECX,dword ptr [EBP + 0xfffff994]
00411408  MOV EDX,dword ptr [EBP + 0xfffff994]
0041140e  MOV EAX,dword ptr [EDX + 0x3f8]
00411414  MOV dword ptr [ECX + 0x404],EAX
0041141a  MOV ECX,dword ptr [EBP + 0xfffff994]
00411420  MOV dword ptr [ECX + 0x268],0xffffffff
0041142a  MOV EDX,dword ptr [EBP + 0xfffff994]
00411430  MOV byte ptr [EDX + 0x414],0x0
00411437  JMP 0x00411ae3
0041143c  MOV EAX,dword ptr [EBP + 0xfffff994]
00411442  MOV ECX,dword ptr [EAX + 0x408]
00411448  MOV EDX,dword ptr [EBP + 0xfffff994]
0041144e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411455  XOR ECX,ECX
00411457  MOV CL,byte ptr [EAX + 0x154]
0041145d  TEST ECX,ECX
0041145f  JZ 0x00411884
00411465  PUSH 0x4048f5c3
0041146a  PUSH 0xc1a00000
0041146f  PUSH 0x0
00411471  MOV EDX,dword ptr [EBP + 0xfffff994]
00411477  MOV EAX,dword ptr [EDX + 0x410]
0041147d  PUSH EAX
0041147e  LEA ECX,[EBP + 0xfffffd28]
00411484  CALL 0x00401348
00411489  SUB ESP,0xc
0041148c  MOV ECX,ESP
0041148e  MOV EDX,dword ptr [EAX]
00411490  MOV dword ptr [ECX],EDX
00411492  MOV EDX,dword ptr [EAX + 0x4]
00411495  MOV dword ptr [ECX + 0x4],EDX
00411498  MOV EAX,dword ptr [EAX + 0x8]
0041149b  MOV dword ptr [ECX + 0x8],EAX
0041149e  MOV ECX,dword ptr [EBP + -0x34]
004114a1  MOV EDX,dword ptr [EBP + 0xfffff994]
004114a7  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004114ae  CALL 0x004012c6
004114b3  PUSH 0x0
004114b5  PUSH 0xc1200000
004114ba  PUSH 0x0
004114bc  MOV EAX,dword ptr [EBP + 0xfffff994]
004114c2  FLD float ptr [EAX + 0x410]
004114c8  FADD float ptr [0x0044e0d4] {5}
004114ce  PUSH ECX
004114cf  FSTP float ptr [ESP]
004114d2  LEA ECX,[EBP + 0xfffffd1c]
004114d8  CALL 0x00401348
004114dd  SUB ESP,0xc
004114e0  MOV ECX,ESP
004114e2  MOV EDX,dword ptr [EAX]
004114e4  MOV dword ptr [ECX],EDX
004114e6  MOV EDX,dword ptr [EAX + 0x4]
004114e9  MOV dword ptr [ECX + 0x4],EDX
004114ec  MOV EAX,dword ptr [EAX + 0x8]
004114ef  MOV dword ptr [ECX + 0x8],EAX
004114f2  MOV ECX,dword ptr [EBP + -0x2c]
004114f5  MOV EDX,dword ptr [EBP + 0xfffff994]
004114fb  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411502  CALL 0x004012c6
00411507  PUSH 0x0
00411509  PUSH 0xc1400000
0041150e  PUSH 0x0
00411510  MOV EAX,dword ptr [EBP + 0xfffff994]
00411516  FLD float ptr [EAX + 0x410]
0041151c  FSUB float ptr [0x0044e0e8] {1}
00411522  PUSH ECX
00411523  FSTP float ptr [ESP]
00411526  LEA ECX,[EBP + 0xfffffd10]
0041152c  CALL 0x00401348
00411531  SUB ESP,0xc
00411534  MOV ECX,ESP
00411536  MOV EDX,dword ptr [EAX]
00411538  MOV dword ptr [ECX],EDX
0041153a  MOV EDX,dword ptr [EAX + 0x4]
0041153d  MOV dword ptr [ECX + 0x4],EDX
00411540  MOV EAX,dword ptr [EAX + 0x8]
00411543  MOV dword ptr [ECX + 0x8],EAX
00411546  MOV ECX,dword ptr [EBP + -0x28]
00411549  MOV EDX,dword ptr [EBP + 0xfffff994]
0041154f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411556  CALL 0x004012c6
0041155b  PUSH 0x0
0041155d  PUSH 0xc0a00000
00411562  PUSH 0x0
00411564  MOV EAX,dword ptr [EBP + 0xfffff994]
0041156a  FLD float ptr [EAX + 0x410]
00411570  FADD float ptr [0x0044e0fc] {8}
00411576  PUSH ECX
00411577  FSTP float ptr [ESP]
0041157a  LEA ECX,[EBP + 0xfffffd04]
00411580  CALL 0x00401348
00411585  SUB ESP,0xc
00411588  MOV ECX,ESP
0041158a  MOV EDX,dword ptr [EAX]
0041158c  MOV dword ptr [ECX],EDX
0041158e  MOV EDX,dword ptr [EAX + 0x4]
00411591  MOV dword ptr [ECX + 0x4],EDX
00411594  MOV EAX,dword ptr [EAX + 0x8]
00411597  MOV dword ptr [ECX + 0x8],EAX
0041159a  MOV ECX,dword ptr [EBP + -0x14]
0041159d  MOV EDX,dword ptr [EBP + 0xfffff994]
004115a3  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004115aa  CALL 0x004012c6
004115af  PUSH 0x0
004115b1  PUSH 0xc0800000
004115b6  PUSH 0x0
004115b8  MOV EAX,dword ptr [EBP + 0xfffff994]
004115be  FLD float ptr [EAX + 0x410]
004115c4  FSUB float ptr [0x0044e0fc] {8}
004115ca  PUSH ECX
004115cb  FSTP float ptr [ESP]
004115ce  LEA ECX,[EBP + 0xfffffcf8]
004115d4  CALL 0x00401348
004115d9  SUB ESP,0xc
004115dc  MOV ECX,ESP
004115de  MOV EDX,dword ptr [EAX]
004115e0  MOV dword ptr [ECX],EDX
004115e2  MOV EDX,dword ptr [EAX + 0x4]
004115e5  MOV dword ptr [ECX + 0x4],EDX
004115e8  MOV EAX,dword ptr [EAX + 0x8]
004115eb  MOV dword ptr [ECX + 0x8],EAX
004115ee  MOV ECX,dword ptr [EBP + -0x10]
004115f1  MOV EDX,dword ptr [EBP + 0xfffff994]
004115f7  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004115fe  CALL 0x004012c6
00411603  PUSH 0x0
00411605  PUSH 0x0
00411607  PUSH 0x0
00411609  MOV EAX,dword ptr [EBP + 0xfffff994]
0041160f  MOV ECX,dword ptr [EAX + 0x410]
00411615  PUSH ECX
00411616  LEA ECX,[EBP + 0xfffffcec]
0041161c  CALL 0x00401348
00411621  SUB ESP,0xc
00411624  MOV EDX,ESP
00411626  MOV ECX,dword ptr [EAX]
00411628  MOV dword ptr [EDX],ECX
0041162a  MOV ECX,dword ptr [EAX + 0x4]
0041162d  MOV dword ptr [EDX + 0x4],ECX
00411630  MOV EAX,dword ptr [EAX + 0x8]
00411633  MOV dword ptr [EDX + 0x8],EAX
00411636  MOV ECX,dword ptr [EBP + -0x4]
00411639  MOV EDX,dword ptr [EBP + 0xfffff994]
0041163f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411646  CALL 0x004012c6
0041164b  PUSH 0x1
0041164d  MOV EAX,dword ptr [EBP + 0xfffff994]
00411653  MOV ECX,dword ptr [EAX + 0xc0]
00411659  CALL 0x00401258
0041165e  MOV ECX,dword ptr [EBP + -0x34]
00411661  MOV EDX,dword ptr [EBP + 0xfffff994]
00411667  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041166e  MOV dword ptr [EAX + 0x198],0x0
00411678  MOV ECX,dword ptr [EBP + -0x34]
0041167b  MOV EDX,dword ptr [EBP + 0xfffff994]
00411681  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411688  MOV ECX,dword ptr [EBP + -0x2c]
0041168b  MOV EDX,dword ptr [EBP + 0xfffff994]
00411691  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411698  FLD float ptr [EAX + 0x160]
0041169e  FSUB float ptr [ECX + 0x160]
004116a4  PUSH ECX
004116a5  FSTP float ptr [ESP]
004116a8  MOV EDX,dword ptr [EBP + -0x34]
004116ab  MOV EAX,dword ptr [EBP + 0xfffff994]
004116b1  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004116b8  MOV EDX,dword ptr [EBP + -0x2c]
004116bb  MOV EAX,dword ptr [EBP + 0xfffff994]
004116c1  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
004116c8  FLD float ptr [ECX + 0x158]
004116ce  FSUB float ptr [EDX + 0x158]
004116d4  PUSH ECX
004116d5  FSTP float ptr [ESP]
004116d8  CALL 0x00401127
004116dd  ADD ESP,0x8
004116e0  MOV EAX,dword ptr [EBP + -0x34]
004116e3  MOV ECX,dword ptr [EBP + 0xfffff994]
004116e9  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004116f0  FSTP float ptr [EDX + 0x164]
004116f6  MOV EAX,dword ptr [EBP + -0x34]
004116f9  MOV ECX,dword ptr [EBP + 0xfffff994]
004116ff  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00411706  MOV dword ptr [EDX + 0x190],0xa
00411710  MOV EAX,dword ptr [EBP + -0x34]
00411713  MOV ECX,dword ptr [EBP + 0xfffff994]
00411719  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
00411720  CALL 0x00401163
00411725  MOV EDX,dword ptr [EBP + -0x34]
00411728  MOV EAX,dword ptr [EBP + 0xfffff994]
0041172e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00411735  FLD float ptr [ECX + 0x164]
0041173b  FSUB float ptr [0x0044e0f0] {3.14}
00411741  MOV EDX,dword ptr [EBP + 0xfffff994]
00411747  FSTP float ptr [EDX + 0x260]
0041174d  MOV EAX,dword ptr [EBP + -0x34]
00411750  MOV ECX,dword ptr [EBP + 0xfffff994]
00411756  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041175d  MOV EAX,dword ptr [EBP + 0xfffff994]
00411763  MOV ECX,dword ptr [EDX + 0x174]
00411769  MOV dword ptr [EAX + 0x25c],ECX
0041176f  MOV EDX,dword ptr [EBP + -0x34]
00411772  MOV EAX,dword ptr [EBP + 0xfffff994]
00411778  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041177f  MOV EDX,dword ptr [EBP + 0xfffff994]
00411785  MOV EAX,dword ptr [ECX + 0x178]
0041178b  MOV dword ptr [EDX + 0x258],EAX
00411791  MOV ECX,dword ptr [EBP + -0x34]
00411794  MOV EDX,dword ptr [EBP + 0xfffff994]
0041179a  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004117a1  FLD float ptr [EAX + 0x164]
004117a7  FCHS
004117a9  PUSH ECX
004117aa  FSTP float ptr [ESP]
004117ad  CALL 0x00401262
004117b2  ADD ESP,0x4
004117b5  FCHS
004117b7  FMUL float ptr [0x0044e0f4] {-2}
004117bd  MOV ECX,dword ptr [EBP + -0x34]
004117c0  MOV EDX,dword ptr [EBP + 0xfffff994]
004117c6  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004117cd  FADD float ptr [EAX + 0x158]
004117d3  MOV ECX,dword ptr [EBP + 0xfffff994]
004117d9  FSTP float ptr [ECX + 0x24c]
004117df  MOV EDX,dword ptr [EBP + -0x34]
004117e2  MOV EAX,dword ptr [EBP + 0xfffff994]
004117e8  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004117ef  FLD float ptr [ECX + 0x170]
004117f5  FMUL float ptr [0x0044e0f8] {0.9}
004117fb  MOV EDX,dword ptr [EBP + 0xfffff994]
00411801  FSTP float ptr [EDX + 0x250]
00411807  MOV EAX,dword ptr [EBP + -0x34]
0041180a  MOV ECX,dword ptr [EBP + 0xfffff994]
00411810  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00411817  FLD float ptr [EDX + 0x164]
0041181d  FCHS
0041181f  PUSH ECX
00411820  FSTP float ptr [ESP]
00411823  CALL 0x0040136b
00411828  ADD ESP,0x4
0041182b  FMUL float ptr [0x0044e0f4] {-2}
00411831  MOV EAX,dword ptr [EBP + -0x34]
00411834  MOV ECX,dword ptr [EBP + 0xfffff994]
0041183a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00411841  FADD float ptr [EDX + 0x160]
00411847  MOV EAX,dword ptr [EBP + 0xfffff994]
0041184d  FSTP float ptr [EAX + 0x254]
00411853  MOV ECX,dword ptr [EBP + 0xfffff994]
00411859  MOV EDX,dword ptr [EBP + -0x34]
0041185c  MOV dword ptr [ECX + 0x404],EDX
00411862  MOV EAX,dword ptr [EBP + 0xfffff994]
00411868  MOV dword ptr [EAX + 0x268],0xffffffff
00411872  MOV ECX,dword ptr [EBP + 0xfffff994]
00411878  MOV byte ptr [ECX + 0x414],0x0
0041187f  JMP 0x00411ae3
00411884  MOV EDX,dword ptr [EBP + 0xfffff994]
0041188a  CMP dword ptr [EDX + 0x3b0],0x1
00411891  JNZ 0x004118a3
00411893  MOV EAX,dword ptr [EBP + 0xfffff994]
00411899  MOV dword ptr [EAX + 0x41c],0x40600000
004118a3  MOV ECX,dword ptr [EBP + -0x4]
004118a6  MOV EDX,dword ptr [EBP + 0xfffff994]
004118ac  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004118b3  MOV dword ptr [EAX + 0x190],0x4
004118bd  MOV ECX,dword ptr [EBP + -0x4]
004118c0  MOV EDX,dword ptr [EBP + 0xfffff994]
004118c6  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004118cd  CALL 0x0040100f
004118d2  MOV EAX,dword ptr [EBP + 0xfffff994]
004118d8  MOV ECX,dword ptr [EBP + -0x4]
004118db  MOV dword ptr [EAX + 0x268],ECX
004118e1  PUSH 0x4048f5c3
004118e6  PUSH 0xc1a00000
004118eb  PUSH 0x0
004118ed  MOV EDX,dword ptr [EBP + 0xfffff994]
004118f3  MOV EAX,dword ptr [EDX + 0x410]
004118f9  PUSH EAX
004118fa  LEA ECX,[EBP + 0xfffffce0]
00411900  CALL 0x00401348
00411905  SUB ESP,0xc
00411908  MOV ECX,ESP
0041190a  MOV EDX,dword ptr [EAX]
0041190c  MOV dword ptr [ECX],EDX
0041190e  MOV EDX,dword ptr [EAX + 0x4]
00411911  MOV dword ptr [ECX + 0x4],EDX
00411914  MOV EAX,dword ptr [EAX + 0x8]
00411917  MOV dword ptr [ECX + 0x8],EAX
0041191a  MOV ECX,dword ptr [EBP + -0x4]
0041191d  MOV EDX,dword ptr [EBP + 0xfffff994]
00411923  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041192a  CALL 0x004012c6
0041192f  PUSH 0x0
00411931  PUSH 0xc1200000
00411936  PUSH 0x0
00411938  MOV EAX,dword ptr [EBP + 0xfffff994]
0041193e  FLD float ptr [EAX + 0x410]
00411944  FADD float ptr [0x0044e0d4] {5}
0041194a  PUSH ECX
0041194b  FSTP float ptr [ESP]
0041194e  LEA ECX,[EBP + 0xfffffcd4]
00411954  CALL 0x00401348
00411959  SUB ESP,0xc
0041195c  MOV ECX,ESP
0041195e  MOV EDX,dword ptr [EAX]
00411960  MOV dword ptr [ECX],EDX
00411962  MOV EDX,dword ptr [EAX + 0x4]
00411965  MOV dword ptr [ECX + 0x4],EDX
00411968  MOV EAX,dword ptr [EAX + 0x8]
0041196b  MOV dword ptr [ECX + 0x8],EAX
0041196e  MOV ECX,dword ptr [EBP + -0x14]
00411971  MOV EDX,dword ptr [EBP + 0xfffff994]
00411977  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041197e  CALL 0x004012c6
00411983  PUSH 0x0
00411985  PUSH 0xc1400000
0041198a  PUSH 0x0
0041198c  MOV EAX,dword ptr [EBP + 0xfffff994]
00411992  FLD float ptr [EAX + 0x410]
00411998  FSUB float ptr [0x0044e0e8] {1}
0041199e  PUSH ECX
0041199f  FSTP float ptr [ESP]
004119a2  LEA ECX,[EBP + 0xfffffcc8]
004119a8  CALL 0x00401348
004119ad  SUB ESP,0xc
004119b0  MOV ECX,ESP
004119b2  MOV EDX,dword ptr [EAX]
004119b4  MOV dword ptr [ECX],EDX
004119b6  MOV EDX,dword ptr [EAX + 0x4]
004119b9  MOV dword ptr [ECX + 0x4],EDX
004119bc  MOV EAX,dword ptr [EAX + 0x8]
004119bf  MOV dword ptr [ECX + 0x8],EAX
004119c2  MOV ECX,dword ptr [EBP + -0x10]
004119c5  MOV EDX,dword ptr [EBP + 0xfffff994]
004119cb  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004119d2  CALL 0x004012c6
004119d7  PUSH 0x0
004119d9  PUSH 0xc0a00000
004119de  PUSH 0x0
004119e0  MOV EAX,dword ptr [EBP + 0xfffff994]
004119e6  FLD float ptr [EAX + 0x410]
004119ec  FADD float ptr [0x0044e0fc] {8}
004119f2  PUSH ECX
004119f3  FSTP float ptr [ESP]
004119f6  LEA ECX,[EBP + 0xfffffcbc]
004119fc  CALL 0x00401348
00411a01  SUB ESP,0xc
00411a04  MOV ECX,ESP
00411a06  MOV EDX,dword ptr [EAX]
00411a08  MOV dword ptr [ECX],EDX
00411a0a  MOV EDX,dword ptr [EAX + 0x4]
00411a0d  MOV dword ptr [ECX + 0x4],EDX
00411a10  MOV EAX,dword ptr [EAX + 0x8]
00411a13  MOV dword ptr [ECX + 0x8],EAX
00411a16  MOV ECX,dword ptr [EBP + -0x2c]
00411a19  MOV EDX,dword ptr [EBP + 0xfffff994]
00411a1f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411a26  CALL 0x004012c6
00411a2b  PUSH 0x0
00411a2d  PUSH 0xc0800000
00411a32  PUSH 0x0
00411a34  MOV EAX,dword ptr [EBP + 0xfffff994]
00411a3a  FLD float ptr [EAX + 0x410]
00411a40  FSUB float ptr [0x0044e0fc] {8}
00411a46  PUSH ECX
00411a47  FSTP float ptr [ESP]
00411a4a  LEA ECX,[EBP + 0xfffffcb0]
00411a50  CALL 0x00401348
00411a55  SUB ESP,0xc
00411a58  MOV ECX,ESP
00411a5a  MOV EDX,dword ptr [EAX]
00411a5c  MOV dword ptr [ECX],EDX
00411a5e  MOV EDX,dword ptr [EAX + 0x4]
00411a61  MOV dword ptr [ECX + 0x4],EDX
00411a64  MOV EAX,dword ptr [EAX + 0x8]
00411a67  MOV dword ptr [ECX + 0x8],EAX
00411a6a  MOV ECX,dword ptr [EBP + -0x28]
00411a6d  MOV EDX,dword ptr [EBP + 0xfffff994]
00411a73  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411a7a  CALL 0x004012c6
00411a7f  PUSH 0x0
00411a81  PUSH 0x0
00411a83  PUSH 0x0
00411a85  MOV EAX,dword ptr [EBP + 0xfffff994]
00411a8b  MOV ECX,dword ptr [EAX + 0x410]
00411a91  PUSH ECX
00411a92  LEA ECX,[EBP + 0xfffffca4]
00411a98  CALL 0x00401348
00411a9d  SUB ESP,0xc
00411aa0  MOV EDX,ESP
00411aa2  MOV ECX,dword ptr [EAX]
00411aa4  MOV dword ptr [EDX],ECX
00411aa6  MOV ECX,dword ptr [EAX + 0x4]
00411aa9  MOV dword ptr [EDX + 0x4],ECX
00411aac  MOV EAX,dword ptr [EAX + 0x8]
00411aaf  MOV dword ptr [EDX + 0x8],EAX
00411ab2  MOV ECX,dword ptr [EBP + -0x34]
00411ab5  MOV EDX,dword ptr [EBP + 0xfffff994]
00411abb  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411ac2  CALL 0x004012c6
00411ac7  MOV EAX,dword ptr [EBP + 0xfffff994]
00411acd  MOV ECX,dword ptr [EBP + -0x4]
00411ad0  MOV dword ptr [EAX + 0x404],ECX
00411ad6  MOV EDX,dword ptr [EBP + 0xfffff994]
00411adc  MOV byte ptr [EDX + 0x414],0x0
00411ae3  JMP 0x00411b29
00411ae5  MOV dword ptr [EBP + -0x40],0x0
00411aec  JMP 0x00411af7
00411aee  MOV EAX,dword ptr [EBP + -0x40]
00411af1  ADD EAX,0x1
00411af4  MOV dword ptr [EBP + -0x40],EAX
00411af7  CMP dword ptr [EBP + -0x40],0x6
00411afb  JGE 0x00411b19
00411afd  MOV ECX,dword ptr [EBP + -0x40]
00411b00  MOV EDX,dword ptr [EBP + 0xfffff994]
00411b06  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411b0d  MOV dword ptr [EAX + 0x190],0x7
00411b17  JMP 0x00411aee
00411b19  MOV ECX,dword ptr [EBP + 0xfffff994]
00411b1f  MOV dword ptr [ECX + 0x268],0xffffffff
00411b29  MOV EDX,dword ptr [EBP + -0x4]
00411b2c  MOV EAX,dword ptr [EBP + 0xfffff994]
00411b32  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00411b39  XOR EDX,EDX
00411b3b  CMP dword ptr [ECX + 0x190],0x3
00411b42  SETL DL
00411b45  MOV EAX,dword ptr [EBP + 0xfffff994]
00411b4b  MOV ECX,dword ptr [EAX + 0x58]
00411b4e  XOR EAX,EAX
00411b50  CMP ECX,dword ptr [0x00453618] {3}
00411b56  SETZ AL
00411b59  MOV ECX,dword ptr [EBP + 0xfffff994]
00411b5f  MOV ECX,dword ptr [ECX + 0x84]
00411b65  XOR EBX,EBX
00411b67  CMP ECX,dword ptr [0x00453618] {3}
00411b6d  SETZ BL
00411b70  OR EAX,EBX
00411b72  AND EDX,EAX
00411b74  TEST EDX,EDX
00411b76  JZ 0x00411be8
00411b78  MOV EDX,dword ptr [EBP + -0x4]
00411b7b  PUSH EDX
00411b7c  LEA EAX,[EBP + 0xfffffc98]
00411b82  PUSH EAX
00411b83  MOV ECX,dword ptr [EBP + 0xfffff994]
00411b89  CALL 0x00401136
00411b8e  MOV ECX,dword ptr [EBP + -0x4]
00411b91  MOV EDX,dword ptr [EBP + 0xfffff994]
00411b97  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411b9e  ADD ECX,0x158
00411ba4  MOV EDX,dword ptr [EAX]
00411ba6  MOV dword ptr [ECX],EDX
00411ba8  MOV EDX,dword ptr [EAX + 0x4]
00411bab  MOV dword ptr [ECX + 0x4],EDX
00411bae  MOV EAX,dword ptr [EAX + 0x8]
00411bb1  MOV dword ptr [ECX + 0x8],EAX
00411bb4  MOV ECX,dword ptr [EBP + -0x4]
00411bb7  MOV EDX,dword ptr [EBP + 0xfffff994]
00411bbd  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411bc4  MOV dword ptr [EAX + 0x190],0x1
00411bce  MOV ECX,dword ptr [EBP + -0x4]
00411bd1  MOV EDX,dword ptr [EBP + 0xfffff994]
00411bd7  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411bde  CALL 0x0040102d
00411be3  JMP 0x00412062
00411be8  MOV EAX,dword ptr [EBP + -0x4]
00411beb  MOV ECX,dword ptr [EBP + 0xfffff994]
00411bf1  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00411bf8  XOR EAX,EAX
00411bfa  CMP dword ptr [EDX + 0x190],0x6
00411c01  SETG AL
00411c04  MOV ECX,dword ptr [EBP + -0x4]
00411c07  MOV EDX,dword ptr [EBP + 0xfffff994]
00411c0d  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411c14  XOR EDX,EDX
00411c16  CMP dword ptr [ECX + 0x190],0xa
00411c1d  SETL DL
00411c20  AND EAX,EDX
00411c22  MOV ECX,dword ptr [EBP + 0xfffff994]
00411c28  MOV EDX,dword ptr [ECX + 0x58]
00411c2b  XOR ECX,ECX
00411c2d  CMP EDX,dword ptr [0x00453618] {3}
00411c33  SETZ CL
00411c36  MOV EDX,dword ptr [EBP + 0xfffff994]
00411c3c  MOV EDX,dword ptr [EDX + 0x84]
00411c42  XOR EBX,EBX
00411c44  CMP EDX,dword ptr [0x00453618] {3}
00411c4a  SETZ BL
00411c4d  OR ECX,EBX
00411c4f  AND EAX,ECX
00411c51  TEST EAX,EAX
00411c53  JZ 0x00411cc5
00411c55  MOV EAX,dword ptr [EBP + -0x4]
00411c58  PUSH EAX
00411c59  LEA ECX,[EBP + 0xfffffc8c]
00411c5f  PUSH ECX
00411c60  MOV ECX,dword ptr [EBP + 0xfffff994]
00411c66  CALL 0x00401136
00411c6b  MOV EDX,dword ptr [EBP + -0x4]
00411c6e  MOV ECX,dword ptr [EBP + 0xfffff994]
00411c74  MOV EDX,dword ptr [ECX + EDX*0x4 + 0xd8]
00411c7b  ADD EDX,0x158
00411c81  MOV ECX,dword ptr [EAX]
00411c83  MOV dword ptr [EDX],ECX
00411c85  MOV ECX,dword ptr [EAX + 0x4]
00411c88  MOV dword ptr [EDX + 0x4],ECX
00411c8b  MOV EAX,dword ptr [EAX + 0x8]
00411c8e  MOV dword ptr [EDX + 0x8],EAX
00411c91  MOV ECX,dword ptr [EBP + -0x4]
00411c94  MOV EDX,dword ptr [EBP + 0xfffff994]
00411c9a  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411ca1  MOV dword ptr [EAX + 0x190],0x8
00411cab  MOV ECX,dword ptr [EBP + -0x4]
00411cae  MOV EDX,dword ptr [EBP + 0xfffff994]
00411cb4  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411cbb  CALL 0x00401212
00411cc0  JMP 0x00412062
00411cc5  MOV EAX,dword ptr [EBP + -0x4]
00411cc8  MOV ECX,dword ptr [EBP + 0xfffff994]
00411cce  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00411cd5  XOR EAX,EAX
00411cd7  CMP dword ptr [EDX + 0x190],0x3
00411cde  SETL AL
00411ce1  MOV ECX,dword ptr [EBP + 0xfffff994]
00411ce7  MOV EDX,dword ptr [ECX + 0x5c]
00411cea  XOR ECX,ECX
00411cec  CMP EDX,dword ptr [0x00453618] {3}
00411cf2  SETZ CL
00411cf5  MOV EDX,dword ptr [EBP + 0xfffff994]
00411cfb  MOV EDX,dword ptr [EDX + 0x78]
00411cfe  XOR EBX,EBX
00411d00  CMP EDX,dword ptr [0x00453618] {3}
00411d06  SETZ BL
00411d09  OR ECX,EBX
00411d0b  AND EAX,ECX
00411d0d  TEST EAX,EAX
00411d0f  JZ 0x00411e29
00411d15  MOV EAX,dword ptr [EBP + -0x4]
00411d18  MOV ECX,dword ptr [EBP + 0xfffff994]
00411d1e  MOV ESI,dword ptr [ECX + EAX*0x4 + 0xd8]
00411d25  MOV EDX,dword ptr [EBP + -0x4]
00411d28  MOV EAX,dword ptr [EBP + 0xfffff994]
00411d2e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00411d35  MOV EDX,dword ptr [ECX + 0x164]
00411d3b  PUSH EDX
00411d3c  CALL 0x00401262
00411d41  ADD ESP,0x4
00411d44  MOV EAX,dword ptr [EBP + -0x4]
00411d47  MOV ECX,dword ptr [EBP + 0xfffff994]
00411d4d  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00411d54  FMUL float ptr [EDX + 0x168]
00411d5a  FMUL float ptr [0x0044e100] {0.6}
00411d60  MOV EAX,dword ptr [EBP + 0xfffff994]
00411d66  FMUL float ptr [EAX + 0x54]
00411d69  FADD float ptr [ESI + 0x158]
00411d6f  MOV ECX,dword ptr [EBP + -0x4]
00411d72  MOV EDX,dword ptr [EBP + 0xfffff994]
00411d78  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411d7f  FSTP float ptr [EAX + 0x158]
00411d85  MOV ECX,dword ptr [EBP + -0x4]
00411d88  MOV EDX,dword ptr [EBP + 0xfffff994]
00411d8e  MOV ESI,dword ptr [EDX + ECX*0x4 + 0xd8]
00411d95  MOV EAX,dword ptr [EBP + -0x4]
00411d98  MOV ECX,dword ptr [EBP + 0xfffff994]
00411d9e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00411da5  MOV EAX,dword ptr [EDX + 0x164]
00411dab  PUSH EAX
00411dac  CALL 0x0040136b
00411db1  ADD ESP,0x4
00411db4  MOV ECX,dword ptr [EBP + -0x4]
00411db7  MOV EDX,dword ptr [EBP + 0xfffff994]
00411dbd  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411dc4  FMUL float ptr [EAX + 0x168]
00411dca  FMUL float ptr [0x0044e100] {0.6}
00411dd0  MOV ECX,dword ptr [EBP + 0xfffff994]
00411dd6  FMUL float ptr [ECX + 0x54]
00411dd9  FADD float ptr [ESI + 0x160]
00411ddf  MOV EDX,dword ptr [EBP + -0x4]
00411de2  MOV EAX,dword ptr [EBP + 0xfffff994]
00411de8  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00411def  FSTP float ptr [ECX + 0x160]
00411df5  MOV EDX,dword ptr [EBP + -0x4]
00411df8  MOV EAX,dword ptr [EBP + 0xfffff994]
00411dfe  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00411e05  MOV dword ptr [ECX + 0x190],0x2
00411e0f  MOV EDX,dword ptr [EBP + -0x4]
00411e12  MOV EAX,dword ptr [EBP + 0xfffff994]
00411e18  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00411e1f  CALL 0x0040125d
00411e24  JMP 0x00412062
00411e29  MOV ECX,dword ptr [EBP + -0x4]
00411e2c  MOV EDX,dword ptr [EBP + 0xfffff994]
00411e32  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411e39  XOR ECX,ECX
00411e3b  CMP dword ptr [EAX + 0x190],0x6
00411e42  SETG CL
00411e45  MOV EDX,dword ptr [EBP + -0x4]
00411e48  MOV EAX,dword ptr [EBP + 0xfffff994]
00411e4e  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00411e55  XOR EAX,EAX
00411e57  CMP dword ptr [EDX + 0x190],0xa
00411e5e  SETL AL
00411e61  AND ECX,EAX
00411e63  MOV EDX,dword ptr [EBP + 0xfffff994]
00411e69  MOV EAX,dword ptr [EDX + 0x5c]
00411e6c  XOR EDX,EDX
00411e6e  CMP EAX,dword ptr [0x00453618] {3}
00411e74  SETZ DL
00411e77  MOV EAX,dword ptr [EBP + 0xfffff994]
00411e7d  MOV EAX,dword ptr [EAX + 0x78]
00411e80  XOR EBX,EBX
00411e82  CMP EAX,dword ptr [0x00453618] {3}
00411e88  SETZ BL
00411e8b  OR EDX,EBX
00411e8d  AND ECX,EDX
00411e8f  TEST ECX,ECX
00411e91  JZ 0x00411fab
00411e97  MOV ECX,dword ptr [EBP + -0x4]
00411e9a  MOV EDX,dword ptr [EBP + 0xfffff994]
00411ea0  MOV ESI,dword ptr [EDX + ECX*0x4 + 0xd8]
00411ea7  MOV EAX,dword ptr [EBP + -0x4]
00411eaa  MOV ECX,dword ptr [EBP + 0xfffff994]
00411eb0  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00411eb7  MOV EAX,dword ptr [EDX + 0x164]
00411ebd  PUSH EAX
00411ebe  CALL 0x00401262
00411ec3  ADD ESP,0x4
00411ec6  MOV ECX,dword ptr [EBP + -0x4]
00411ec9  MOV EDX,dword ptr [EBP + 0xfffff994]
00411ecf  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411ed6  FMUL float ptr [EAX + 0x168]
00411edc  FMUL float ptr [0x0044e100] {0.6}
00411ee2  MOV ECX,dword ptr [EBP + 0xfffff994]
00411ee8  FMUL float ptr [ECX + 0x54]
00411eeb  FADD float ptr [ESI + 0x158]
00411ef1  MOV EDX,dword ptr [EBP + -0x4]
00411ef4  MOV EAX,dword ptr [EBP + 0xfffff994]
00411efa  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00411f01  FSTP float ptr [ECX + 0x158]
00411f07  MOV EDX,dword ptr [EBP + -0x4]
00411f0a  MOV EAX,dword ptr [EBP + 0xfffff994]
00411f10  MOV ESI,dword ptr [EAX + EDX*0x4 + 0xd8]
00411f17  MOV ECX,dword ptr [EBP + -0x4]
00411f1a  MOV EDX,dword ptr [EBP + 0xfffff994]
00411f20  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00411f27  MOV ECX,dword ptr [EAX + 0x164]
00411f2d  PUSH ECX
00411f2e  CALL 0x0040136b
00411f33  ADD ESP,0x4
00411f36  MOV EDX,dword ptr [EBP + -0x4]
00411f39  MOV EAX,dword ptr [EBP + 0xfffff994]
00411f3f  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00411f46  FMUL float ptr [ECX + 0x168]
00411f4c  FMUL float ptr [0x0044e100] {0.6}
00411f52  MOV EDX,dword ptr [EBP + 0xfffff994]
00411f58  FMUL float ptr [EDX + 0x54]
00411f5b  FADD float ptr [ESI + 0x160]
00411f61  MOV EAX,dword ptr [EBP + -0x4]
00411f64  MOV ECX,dword ptr [EBP + 0xfffff994]
00411f6a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00411f71  FSTP float ptr [EDX + 0x160]
00411f77  MOV EAX,dword ptr [EBP + -0x4]
00411f7a  MOV ECX,dword ptr [EBP + 0xfffff994]
00411f80  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00411f87  MOV dword ptr [EDX + 0x190],0x9
00411f91  MOV EAX,dword ptr [EBP + -0x4]
00411f94  MOV ECX,dword ptr [EBP + 0xfffff994]
00411f9a  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
00411fa1  CALL 0x0040124e
00411fa6  JMP 0x00412062
00411fab  MOV EDX,dword ptr [EBP + -0x4]
00411fae  MOV EAX,dword ptr [EBP + 0xfffff994]
00411fb4  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00411fbb  CMP dword ptr [ECX + 0x190],0x3
00411fc2  JGE 0x00411ff5
00411fc4  MOV EDX,dword ptr [EBP + -0x4]
00411fc7  MOV EAX,dword ptr [EBP + 0xfffff994]
00411fcd  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00411fd4  MOV dword ptr [ECX + 0x190],0x0
00411fde  MOV EDX,dword ptr [EBP + -0x4]
00411fe1  MOV EAX,dword ptr [EBP + 0xfffff994]
00411fe7  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00411fee  CALL 0x00401226
00411ff3  JMP 0x00412062
00411ff5  MOV ECX,dword ptr [EBP + -0x4]
00411ff8  MOV EDX,dword ptr [EBP + 0xfffff994]
00411ffe  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412005  XOR ECX,ECX
00412007  CMP dword ptr [EAX + 0x190],0x6
0041200e  SETG CL
00412011  MOV EDX,dword ptr [EBP + -0x4]
00412014  MOV EAX,dword ptr [EBP + 0xfffff994]
0041201a  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00412021  XOR EAX,EAX
00412023  CMP dword ptr [EDX + 0x190],0xa
0041202a  SETL AL
0041202d  AND ECX,EAX
0041202f  TEST ECX,ECX
00412031  JZ 0x00412062
00412033  MOV ECX,dword ptr [EBP + -0x4]
00412036  MOV EDX,dword ptr [EBP + 0xfffff994]
0041203c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412043  MOV dword ptr [EAX + 0x190],0x7
0041204d  MOV ECX,dword ptr [EBP + -0x4]
00412050  MOV EDX,dword ptr [EBP + 0xfffff994]
00412056  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041205d  CALL 0x00401384
00412062  MOV EAX,dword ptr [EBP + -0x4]
00412065  MOV ECX,dword ptr [EBP + 0xfffff994]
0041206b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00412072  XOR EAX,EAX
00412074  CMP dword ptr [EDX + 0x190],0x3
0041207b  SETL AL
0041207e  MOV ECX,dword ptr [EBP + 0xfffff994]
00412084  MOV EDX,dword ptr [ECX + 0x6c]
00412087  XOR ECX,ECX
00412089  CMP EDX,dword ptr [0x00453618] {3}
0041208f  SETZ CL
00412092  AND EAX,ECX
00412094  TEST EAX,EAX
00412096  JZ 0x004120e6
00412098  MOV EDX,dword ptr [EBP + -0x4]
0041209b  MOV EAX,dword ptr [EBP + 0xfffff994]
004120a1  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004120a8  MOV dword ptr [ECX + 0x190],0x4
004120b2  MOV EDX,dword ptr [EBP + -0x4]
004120b5  MOV EAX,dword ptr [EBP + 0xfffff994]
004120bb  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004120c2  CALL 0x0040100f
004120c7  MOV ECX,dword ptr [EBP + 0xfffff994]
004120cd  CMP dword ptr [ECX + 0x3b0],0x1
004120d4  JNZ 0x004120e6
004120d6  MOV EDX,dword ptr [EBP + 0xfffff994]
004120dc  MOV dword ptr [EDX + 0x41c],0x40600000
004120e6  MOV EAX,dword ptr [EBP + -0x4]
004120e9  MOV ECX,dword ptr [EBP + 0xfffff994]
004120ef  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004120f6  XOR EAX,EAX
004120f8  CMP dword ptr [EDX + 0x190],0x3
004120ff  SETZ AL
00412102  MOV ECX,dword ptr [EBP + -0x4]
00412105  MOV EDX,dword ptr [EBP + 0xfffff994]
0041210b  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412112  XOR EDX,EDX
00412114  CMP dword ptr [ECX + 0x190],0x4
0041211b  SETZ DL
0041211e  OR EAX,EDX
00412120  MOV ECX,dword ptr [EBP + 0xfffff994]
00412126  XOR EDX,EDX
00412128  CMP dword ptr [ECX + 0x3b0],0x1
0041212f  SETZ DL
00412132  AND EAX,EDX
00412134  TEST EAX,EAX
00412136  JZ 0x00412159
00412138  MOV EAX,dword ptr [EBP + 0xfffff994]
0041213e  MOV ECX,dword ptr [EBP + 0xfffff994]
00412144  FLD float ptr [EAX + 0x41c]
0041214a  FSUB float ptr [ECX + 0x54]
0041214d  MOV EDX,dword ptr [EBP + 0xfffff994]
00412153  FSTP float ptr [EDX + 0x41c]
00412159  MOV EAX,dword ptr [EBP + 0xfffff994]
0041215f  FLD float ptr [EAX + 0x41c]
00412165  FCOMP float ptr [0x0044e104] {-0.01}
0041216b  FNSTSW AX
0041216d  TEST AH,0x1
00412170  JZ 0x0041217e
00412172  MOV dword ptr [EBP + 0xfffff974],0x1
0041217c  JMP 0x00412188
0041217e  MOV dword ptr [EBP + 0xfffff974],0x0
00412188  MOV ECX,dword ptr [EBP + -0x4]
0041218b  MOV EDX,dword ptr [EBP + 0xfffff994]
00412191  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412198  XOR ECX,ECX
0041219a  CMP dword ptr [EAX + 0x190],0x4
004121a1  SETZ CL
004121a4  MOV EDX,dword ptr [EBP + 0xfffff994]
004121aa  MOV EAX,dword ptr [EDX + 0x6c]
004121ad  XOR EDX,EDX
004121af  CMP EAX,dword ptr [0x00453614] {2}
004121b5  SETZ DL
004121b8  OR EDX,dword ptr [EBP + 0xfffff974]
004121be  AND ECX,EDX
004121c0  TEST ECX,ECX
004121c2  JZ 0x00412359
004121c8  PUSH 0x1
004121ca  MOV EAX,dword ptr [EBP + 0xfffff994]
004121d0  MOV ECX,dword ptr [EAX + 0xc0]
004121d6  CALL 0x00401258
004121db  MOV ECX,dword ptr [EBP + -0x4]
004121de  MOV EDX,dword ptr [EBP + 0xfffff994]
004121e4  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004121eb  MOV dword ptr [EAX + 0x198],0x0
004121f5  MOV ECX,dword ptr [EBP + -0x4]
004121f8  MOV EDX,dword ptr [EBP + 0xfffff994]
004121fe  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412205  MOV dword ptr [EAX + 0x190],0xa
0041220f  MOV ECX,dword ptr [EBP + -0x4]
00412212  MOV EDX,dword ptr [EBP + 0xfffff994]
00412218  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041221f  CALL 0x00401163
00412224  MOV EAX,dword ptr [EBP + 0xfffff994]
0041222a  MOV dword ptr [EAX + 0x41c],0x0
00412234  MOV ECX,dword ptr [EBP + -0x4]
00412237  MOV EDX,dword ptr [EBP + 0xfffff994]
0041223d  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412244  FLD float ptr [EAX + 0x164]
0041224a  FSUB float ptr [0x0044e0f0] {3.14}
00412250  MOV ECX,dword ptr [EBP + 0xfffff994]
00412256  FSTP float ptr [ECX + 0x260]
0041225c  MOV EDX,dword ptr [EBP + -0x4]
0041225f  MOV EAX,dword ptr [EBP + 0xfffff994]
00412265  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041226c  MOV EDX,dword ptr [EBP + 0xfffff994]
00412272  MOV EAX,dword ptr [ECX + 0x174]
00412278  MOV dword ptr [EDX + 0x25c],EAX
0041227e  MOV ECX,dword ptr [EBP + -0x4]
00412281  MOV EDX,dword ptr [EBP + 0xfffff994]
00412287  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041228e  MOV ECX,dword ptr [EBP + 0xfffff994]
00412294  MOV EDX,dword ptr [EAX + 0x178]
0041229a  MOV dword ptr [ECX + 0x258],EDX
004122a0  MOV EAX,dword ptr [EBP + -0x4]
004122a3  MOV ECX,dword ptr [EBP + 0xfffff994]
004122a9  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004122b0  FLD float ptr [EDX + 0x164]
004122b6  FCHS
004122b8  PUSH ECX
004122b9  FSTP float ptr [ESP]
004122bc  CALL 0x00401262
004122c1  ADD ESP,0x4
004122c4  FCHS
004122c6  FMUL float ptr [0x0044e0f4] {-2}
004122cc  MOV EAX,dword ptr [EBP + -0x4]
004122cf  MOV ECX,dword ptr [EBP + 0xfffff994]
004122d5  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004122dc  FADD float ptr [EDX + 0x158]
004122e2  MOV EAX,dword ptr [EBP + 0xfffff994]
004122e8  FSTP float ptr [EAX + 0x24c]
004122ee  MOV ECX,dword ptr [EBP + -0x4]
004122f1  MOV EDX,dword ptr [EBP + 0xfffff994]
004122f7  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004122fe  FLD float ptr [EAX + 0x164]
00412304  FCHS
00412306  PUSH ECX
00412307  FSTP float ptr [ESP]
0041230a  CALL 0x0040136b
0041230f  ADD ESP,0x4
00412312  FMUL float ptr [0x0044e0f4] {-2}
00412318  MOV ECX,dword ptr [EBP + -0x4]
0041231b  MOV EDX,dword ptr [EBP + 0xfffff994]
00412321  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412328  FADD float ptr [EAX + 0x160]
0041232e  MOV ECX,dword ptr [EBP + 0xfffff994]
00412334  FSTP float ptr [ECX + 0x254]
0041233a  MOV EDX,dword ptr [EBP + 0xfffff994]
00412340  MOV EAX,dword ptr [EBP + -0x4]
00412343  MOV dword ptr [EDX + 0x404],EAX
00412349  MOV ECX,dword ptr [EBP + 0xfffff994]
0041234f  MOV dword ptr [ECX + 0x268],0xffffffff
00412359  MOV EDX,dword ptr [EBP + 0xfffff994]
0041235f  XOR EAX,EAX
00412361  CMP dword ptr [EDX + 0x3ac],0x3
00412368  SETZ AL
0041236b  MOV ECX,dword ptr [EBP + 0xfffff994]
00412371  MOV EDX,dword ptr [ECX + 0x70]
00412374  XOR ECX,ECX
00412376  CMP EDX,dword ptr [0x00453610] {1}
0041237c  SETZ CL
0041237f  AND EAX,ECX
00412381  TEST EAX,EAX
00412383  JZ 0x004123fb
00412385  PUSH 0x1
00412387  MOV EDX,dword ptr [EBP + 0xfffff994]
0041238d  MOV ECX,dword ptr [EDX + 0xc0]
00412393  CALL 0x00401258
00412398  MOV EAX,dword ptr [EBP + -0x4]
0041239b  MOV ECX,dword ptr [EBP + 0xfffff994]
004123a1  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004123a8  MOV dword ptr [EDX + 0x190],0x6
004123b2  MOV EAX,dword ptr [EBP + -0x4]
004123b5  MOV ECX,dword ptr [EBP + 0xfffff994]
004123bb  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
004123c2  CALL 0x00401091
004123c7  MOV EDX,dword ptr [EBP + -0x4]
004123ca  MOV EAX,dword ptr [EBP + 0xfffff994]
004123d0  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004123d7  MOV dword ptr [ECX + 0x198],0x0
004123e1  MOV EDX,dword ptr [EBP + -0x4]
004123e4  MOV EAX,dword ptr [EBP + 0xfffff994]
004123ea  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004123f1  MOV dword ptr [ECX + 0x18c],0x41400000
004123fb  MOV EDX,dword ptr [EBP + -0x4]
004123fe  MOV EAX,dword ptr [EBP + 0xfffff994]
00412404  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041240b  XOR EDX,EDX
0041240d  CMP dword ptr [ECX + 0x190],0x3
00412414  SETL DL
00412417  MOV EAX,dword ptr [EBP + 0xfffff994]
0041241d  MOV ECX,dword ptr [EAX + 0x70]
00412420  XOR EAX,EAX
00412422  CMP ECX,dword ptr [0x00453618] {3}
00412428  SETZ AL
0041242b  AND EDX,EAX
0041242d  TEST EDX,EDX
0041242f  JZ 0x0041249e
00412431  MOV ECX,dword ptr [EBP + -0x4]
00412434  MOV EDX,dword ptr [EBP + 0xfffff994]
0041243a  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412441  MOV dword ptr [EAX + 0x190],0x3
0041244b  MOV ECX,dword ptr [EBP + -0x4]
0041244e  MOV EDX,dword ptr [EBP + 0xfffff994]
00412454  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041245b  CALL 0x0040100f
00412460  MOV EAX,dword ptr [EBP + 0xfffff994]
00412466  MOV ECX,dword ptr [EBP + -0x4]
00412469  MOV dword ptr [EAX + 0x3fc],ECX
0041246f  MOV EDX,dword ptr [EBP + 0xfffff994]
00412475  MOV dword ptr [EDX + 0x3b8],0x2
0041247f  MOV EAX,dword ptr [EBP + 0xfffff994]
00412485  CMP dword ptr [EAX + 0x3b0],0x1
0041248c  JNZ 0x0041249e
0041248e  MOV ECX,dword ptr [EBP + 0xfffff994]
00412494  MOV dword ptr [ECX + 0x41c],0x41200000
0041249e  MOV EDX,dword ptr [EBP + -0x4]
004124a1  MOV EAX,dword ptr [EBP + 0xfffff994]
004124a7  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004124ae  CMP dword ptr [ECX + 0x190],0x3
004124b5  JNZ 0x0041285d
004124bb  MOV EDX,dword ptr [EBP + 0xfffff994]
004124c1  FLD float ptr [EDX + 0x41c]
004124c7  FCOMP float ptr [0x0044e0d4] {5}
004124cd  FNSTSW AX
004124cf  TEST AH,0x41
004124d2  JNZ 0x004124e0
004124d4  MOV dword ptr [EBP + 0xfffff970],0x1
004124de  JMP 0x004124ea
004124e0  MOV dword ptr [EBP + 0xfffff970],0x0
004124ea  MOV EAX,dword ptr [EBP + 0xfffff994]
004124f0  FLD float ptr [EAX + 0x41c]
004124f6  FCOMP float ptr [0x0044e108] {6.5}
004124fc  FNSTSW AX
004124fe  TEST AH,0x1
00412501  JZ 0x0041250f
00412503  MOV dword ptr [EBP + 0xfffff96c],0x1
0041250d  JMP 0x00412519
0041250f  MOV dword ptr [EBP + 0xfffff96c],0x0
00412519  MOV ECX,dword ptr [EBP + 0xfffff994]
0041251f  MOV EDX,dword ptr [ECX + 0x70]
00412522  XOR EAX,EAX
00412524  CMP EDX,dword ptr [0x00453614] {2}
0041252a  SETZ AL
0041252d  MOV ECX,dword ptr [EBP + 0xfffff970]
00412533  AND ECX,dword ptr [EBP + 0xfffff96c]
00412539  OR EAX,ECX
0041253b  TEST EAX,EAX
0041253d  JZ 0x00412813
00412543  PUSH 0x1
00412545  MOV EDX,dword ptr [EBP + 0xfffff994]
0041254b  MOV ECX,dword ptr [EDX + 0xc0]
00412551  CALL 0x00401258
00412556  MOV EAX,dword ptr [EBP + -0x4]
00412559  MOV ECX,dword ptr [EBP + 0xfffff994]
0041255f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00412566  MOV dword ptr [EDX + 0x198],0x0
00412570  MOV EAX,dword ptr [EBP + -0x4]
00412573  MOV ECX,dword ptr [EBP + 0xfffff994]
00412579  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00412580  MOV dword ptr [EDX + 0x190],0xb
0041258a  MOV EAX,dword ptr [EBP + -0x4]
0041258d  MOV ECX,dword ptr [EBP + 0xfffff994]
00412593  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041259a  CALL 0x00401145
0041259f  MOV EDX,dword ptr [EBP + -0x4]
004125a2  MOV EAX,dword ptr [EBP + 0xfffff994]
004125a8  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004125af  FLD float ptr [ECX + 0x164]
004125b5  FSUB float ptr [0x0044e0f0] {3.14}
004125bb  MOV EDX,dword ptr [EBP + 0xfffff994]
004125c1  FSTP float ptr [EDX + 0x260]
004125c7  MOV EAX,dword ptr [EBP + 0xfffff994]
004125cd  MOV dword ptr [EAX + 0x25c],0x41b80000
004125d7  MOV ECX,dword ptr [EBP + -0x4]
004125da  MOV EDX,dword ptr [EBP + 0xfffff994]
004125e0  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004125e7  MOV ECX,dword ptr [EBP + 0xfffff994]
004125ed  FLD float ptr [ECX + 0x3a0]
004125f3  FMUL float ptr [EAX + 0x17c]
004125f9  FADD float ptr [0x0044e0e8] {1}
004125ff  MOV EDX,dword ptr [EBP + 0xfffff994]
00412605  FSTP float ptr [EDX + 0x258]
0041260b  MOV EAX,dword ptr [EBP + -0x4]
0041260e  MOV ECX,dword ptr [EBP + 0xfffff994]
00412614  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041261b  FLD float ptr [EDX + 0x164]
00412621  FCHS
00412623  PUSH ECX
00412624  FSTP float ptr [ESP]
00412627  CALL 0x00401262
0041262c  ADD ESP,0x4
0041262f  FCHS
00412631  FMUL float ptr [0x0044e0f4] {-2}
00412637  MOV EAX,dword ptr [EBP + -0x4]
0041263a  MOV ECX,dword ptr [EBP + 0xfffff994]
00412640  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00412647  FADD float ptr [EDX + 0x158]
0041264d  MOV EAX,dword ptr [EBP + 0xfffff994]
00412653  FSTP float ptr [EAX + 0x24c]
00412659  MOV ECX,dword ptr [EBP + -0x4]
0041265c  MOV EDX,dword ptr [EBP + 0xfffff994]
00412662  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412669  FLD float ptr [EAX + 0x164]
0041266f  FCHS
00412671  PUSH ECX
00412672  FSTP float ptr [ESP]
00412675  CALL 0x0040136b
0041267a  ADD ESP,0x4
0041267d  FMUL float ptr [0x0044e0f4] {-2}
00412683  MOV ECX,dword ptr [EBP + -0x4]
00412686  MOV EDX,dword ptr [EBP + 0xfffff994]
0041268c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412693  FADD float ptr [EAX + 0x160]
00412699  MOV ECX,dword ptr [EBP + 0xfffff994]
0041269f  FSTP float ptr [ECX + 0x254]
004126a5  MOV EDX,dword ptr [EBP + 0xfffff994]
004126ab  MOV EAX,dword ptr [EBP + -0x4]
004126ae  MOV dword ptr [EDX + 0x404],EAX
004126b4  MOV ECX,dword ptr [EBP + 0xfffff994]
004126ba  MOV dword ptr [ECX + 0x41c],0x0
004126c4  MOV EDX,dword ptr [EBP + 0xfffff994]
004126ca  MOV dword ptr [EDX + 0x268],0xffffffff
004126d4  MOV EAX,dword ptr [EBP + 0xfffff994]
004126da  XOR ECX,ECX
004126dc  MOV CL,byte ptr [EAX + 0x3a6]
004126e2  TEST ECX,ECX
004126e4  JZ 0x00412780
004126ea  MOV EDX,dword ptr [EBP + -0x4]
004126ed  MOV EAX,dword ptr [EBP + 0xfffff994]
004126f3  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004126fa  FLD float ptr [ECX + 0x158]
00412700  FSUB float ptr [0x0044e10c] {35}
00412706  MOV EDX,dword ptr [EBP + -0x4]
00412709  MOV EAX,dword ptr [EBP + 0xfffff994]
0041270f  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00412716  FLD float ptr [ECX + 0x158]
0041271c  FSUB float ptr [0x0044e10c] {35}
00412722  FMULP
00412724  MOV EDX,dword ptr [EBP + -0x4]
00412727  MOV EAX,dword ptr [EBP + 0xfffff994]
0041272d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00412734  MOV EDX,dword ptr [EBP + -0x4]
00412737  MOV EAX,dword ptr [EBP + 0xfffff994]
0041273d  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00412744  FLD float ptr [ECX + 0x160]
0041274a  FMUL float ptr [EDX + 0x160]
00412750  FADDP
00412752  FCOMP float ptr [0x0044e110] {225}
00412758  FNSTSW AX
0041275a  TEST AH,0x1
0041275d  JZ 0x0041276e
0041275f  MOV EAX,dword ptr [EBP + 0xfffff994]
00412765  MOV byte ptr [EAX + 0x3a8],0x0
0041276c  JMP 0x0041277b
0041276e  MOV ECX,dword ptr [EBP + 0xfffff994]
00412774  MOV byte ptr [ECX + 0x3a8],0x1
0041277b  JMP 0x00412811
00412780  MOV EDX,dword ptr [EBP + -0x4]
00412783  MOV EAX,dword ptr [EBP + 0xfffff994]
00412789  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00412790  FLD float ptr [ECX + 0x158]
00412796  FADD float ptr [0x0044e10c] {35}
0041279c  MOV EDX,dword ptr [EBP + -0x4]
0041279f  MOV EAX,dword ptr [EBP + 0xfffff994]
004127a5  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004127ac  FLD float ptr [ECX + 0x158]
004127b2  FADD float ptr [0x0044e10c] {35}
004127b8  FMULP
004127ba  MOV EDX,dword ptr [EBP + -0x4]
004127bd  MOV EAX,dword ptr [EBP + 0xfffff994]
004127c3  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004127ca  MOV EDX,dword ptr [EBP + -0x4]
004127cd  MOV EAX,dword ptr [EBP + 0xfffff994]
004127d3  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
004127da  FLD float ptr [ECX + 0x160]
004127e0  FMUL float ptr [EDX + 0x160]
004127e6  FADDP
004127e8  FCOMP float ptr [0x0044e110] {225}
004127ee  FNSTSW AX
004127f0  TEST AH,0x1
004127f3  JZ 0x00412804
004127f5  MOV EAX,dword ptr [EBP + 0xfffff994]
004127fb  MOV byte ptr [EAX + 0x3a8],0x0
00412802  JMP 0x00412811
00412804  MOV ECX,dword ptr [EBP + 0xfffff994]
0041280a  MOV byte ptr [ECX + 0x3a8],0x1
00412811  JMP 0x0041285d
00412813  MOV EDX,dword ptr [EBP + 0xfffff994]
00412819  MOV EAX,dword ptr [EBP + 0xfffff994]
0041281f  FLD float ptr [EDX + 0x3a0]
00412825  FADD float ptr [EAX + 0x54]
00412828  MOV ECX,dword ptr [EBP + 0xfffff994]
0041282e  FSTP float ptr [ECX + 0x3a0]
00412834  MOV EDX,dword ptr [EBP + 0xfffff994]
0041283a  FLD float ptr [EDX + 0x3a0]
00412840  FCOMP float ptr [0x0044e0e8] {1}
00412846  FNSTSW AX
00412848  TEST AH,0x41
0041284b  JNZ 0x0041285d
0041284d  MOV EAX,dword ptr [EBP + 0xfffff994]
00412853  MOV dword ptr [EAX + 0x3a0],0x3a83126f
0041285d  MOV ECX,dword ptr [EBP + 0xfffff994]
00412863  MOV EDX,dword ptr [ECX + 0x64]
00412866  XOR EAX,EAX
00412868  CMP EDX,dword ptr [0x00453618] {3}
0041286e  SETZ AL
00412871  MOV ECX,dword ptr [EBP + 0xfffff994]
00412877  MOV EDX,dword ptr [ECX + 0x80]
0041287d  XOR ECX,ECX
0041287f  CMP EDX,dword ptr [0x00453618] {3}
00412885  SETZ CL
00412888  OR EAX,ECX
0041288a  MOV EDX,dword ptr [EBP + -0x4]
0041288d  MOV ECX,dword ptr [EBP + 0xfffff994]
00412893  MOV EDX,dword ptr [ECX + EDX*0x4 + 0xd8]
0041289a  XOR ECX,ECX
0041289c  CMP dword ptr [EDX + 0x190],0xa
004128a3  SETL CL
004128a6  AND EAX,ECX
004128a8  TEST EAX,EAX
004128aa  JZ 0x00412989
004128b0  MOV EDX,dword ptr [EBP + -0x4]
004128b3  MOV EAX,dword ptr [EBP + 0xfffff994]
004128b9  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004128c0  XOR EDX,EDX
004128c2  CMP dword ptr [ECX + 0x190],0x0
004128c9  SETZ DL
004128cc  MOV EAX,dword ptr [EBP + -0x4]
004128cf  MOV ECX,dword ptr [EBP + 0xfffff994]
004128d5  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
004128dc  XOR ECX,ECX
004128de  CMP dword ptr [EAX + 0x190],0x3
004128e5  SETG CL
004128e8  MOV EAX,dword ptr [EBP + -0x4]
004128eb  MOV ESI,dword ptr [EBP + 0xfffff994]
004128f1  MOV EAX,dword ptr [ESI + EAX*0x4 + 0xd8]
004128f8  XOR EBX,EBX
004128fa  CMP dword ptr [EAX + 0x190],0x8
00412901  SETL BL
00412904  AND ECX,EBX
00412906  OR EDX,ECX
00412908  TEST EDX,EDX
0041290a  JZ 0x00412949
0041290c  MOV ECX,dword ptr [EBP + -0x4]
0041290f  MOV EDX,dword ptr [EBP + 0xfffff994]
00412915  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041291c  MOV ECX,dword ptr [EBP + 0xfffff994]
00412922  FLD float ptr [0x0044e0d4] {5}
00412928  FMUL float ptr [ECX + 0x54]
0041292b  FADD float ptr [EAX + 0x164]
00412931  MOV EDX,dword ptr [EBP + -0x4]
00412934  MOV EAX,dword ptr [EBP + 0xfffff994]
0041293a  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00412941  FSTP float ptr [ECX + 0x164]
00412947  JMP 0x00412984
00412949  MOV EDX,dword ptr [EBP + -0x4]
0041294c  MOV EAX,dword ptr [EBP + 0xfffff994]
00412952  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00412959  MOV EDX,dword ptr [EBP + 0xfffff994]
0041295f  FLD float ptr [0x0044e114] {2}
00412965  FMUL float ptr [EDX + 0x54]
00412968  FADD float ptr [ECX + 0x164]
0041296e  MOV EAX,dword ptr [EBP + -0x4]
00412971  MOV ECX,dword ptr [EBP + 0xfffff994]
00412977  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041297e  FSTP float ptr [EDX + 0x164]
00412984  JMP 0x00412da2
00412989  MOV EAX,dword ptr [EBP + 0xfffff994]
0041298f  MOV ECX,dword ptr [EAX + 0x60]
00412992  XOR EDX,EDX
00412994  CMP ECX,dword ptr [0x00453618] {3}
0041299a  SETZ DL
0041299d  MOV EAX,dword ptr [EBP + 0xfffff994]
004129a3  MOV ECX,dword ptr [EAX + 0x7c]
004129a6  XOR EAX,EAX
004129a8  CMP ECX,dword ptr [0x00453618] {3}
004129ae  SETZ AL
004129b1  OR EDX,EAX
004129b3  MOV ECX,dword ptr [EBP + -0x4]
004129b6  MOV EAX,dword ptr [EBP + 0xfffff994]
004129bc  MOV ECX,dword ptr [EAX + ECX*0x4 + 0xd8]
004129c3  XOR EAX,EAX
004129c5  CMP dword ptr [ECX + 0x190],0xa
004129cc  SETL AL
004129cf  AND EDX,EAX
004129d1  TEST EDX,EDX
004129d3  JZ 0x00412ab2
004129d9  MOV ECX,dword ptr [EBP + -0x4]
004129dc  MOV EDX,dword ptr [EBP + 0xfffff994]
004129e2  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004129e9  XOR ECX,ECX
004129eb  CMP dword ptr [EAX + 0x190],0x0
004129f2  SETZ CL
004129f5  MOV EDX,dword ptr [EBP + -0x4]
004129f8  MOV EAX,dword ptr [EBP + 0xfffff994]
004129fe  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00412a05  XOR EAX,EAX
00412a07  CMP dword ptr [EDX + 0x190],0x3
00412a0e  SETG AL
00412a11  MOV EDX,dword ptr [EBP + -0x4]
00412a14  MOV ESI,dword ptr [EBP + 0xfffff994]
00412a1a  MOV EDX,dword ptr [ESI + EDX*0x4 + 0xd8]
00412a21  XOR EBX,EBX
00412a23  CMP dword ptr [EDX + 0x190],0x8
00412a2a  SETL BL
00412a2d  AND EAX,EBX
00412a2f  OR ECX,EAX
00412a31  TEST ECX,ECX
00412a33  JZ 0x00412a72
00412a35  MOV EAX,dword ptr [EBP + -0x4]
00412a38  MOV ECX,dword ptr [EBP + 0xfffff994]
00412a3e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00412a45  MOV EAX,dword ptr [EBP + 0xfffff994]
00412a4b  FLD float ptr [0x0044e0d4] {5}
00412a51  FMUL float ptr [EAX + 0x54]
00412a54  FSUBR float ptr [EDX + 0x164]
00412a5a  MOV ECX,dword ptr [EBP + -0x4]
00412a5d  MOV EDX,dword ptr [EBP + 0xfffff994]
00412a63  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412a6a  FSTP float ptr [EAX + 0x164]
00412a70  JMP 0x00412aad
00412a72  MOV ECX,dword ptr [EBP + -0x4]
00412a75  MOV EDX,dword ptr [EBP + 0xfffff994]
00412a7b  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412a82  MOV ECX,dword ptr [EBP + 0xfffff994]
00412a88  FLD float ptr [0x0044e114] {2}
00412a8e  FMUL float ptr [ECX + 0x54]
00412a91  FSUBR float ptr [EAX + 0x164]
00412a97  MOV EDX,dword ptr [EBP + -0x4]
00412a9a  MOV EAX,dword ptr [EBP + 0xfffff994]
00412aa0  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00412aa7  FSTP float ptr [ECX + 0x164]
00412aad  JMP 0x00412da2
00412ab2  MOV EDX,dword ptr [EBP + 0xfffff994]
00412ab8  CMP dword ptr [EDX + 0x418],0x5
00412abf  JNZ 0x00412c85
00412ac5  MOV EAX,dword ptr [EBP + 0xfffff994]
00412acb  XOR ECX,ECX
00412acd  MOV CL,byte ptr [EAX + 0x3a6]
00412ad3  TEST ECX,ECX
00412ad5  JZ 0x00412bb0
00412adb  PUSH 0x40000000
00412ae0  MOV EDX,dword ptr [EBP + -0x4]
00412ae3  MOV EAX,dword ptr [EBP + 0xfffff994]
00412ae9  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00412af0  MOV EDX,dword ptr [ECX + 0x164]
00412af6  PUSH EDX
00412af7  MOV EAX,dword ptr [EBP + -0x4]
00412afa  MOV ECX,dword ptr [EBP + 0xfffff994]
00412b00  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00412b07  MOV EAX,dword ptr [EDX + 0x160]
00412b0d  PUSH EAX
00412b0e  MOV ECX,dword ptr [EBP + -0x4]
00412b11  MOV EDX,dword ptr [EBP + 0xfffff994]
00412b17  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412b1e  FLD float ptr [EAX + 0x158]
00412b24  FADD float ptr [0x0044e10c] {35}
00412b2a  PUSH ECX
00412b2b  FSTP float ptr [ESP]
00412b2e  CALL 0x00401127
00412b33  ADD ESP,0x4
00412b36  FSTP float ptr [ESP]
00412b39  MOV ECX,dword ptr [EBP + 0xfffff994]
00412b3f  CALL 0x00401140
00412b44  MOV ECX,dword ptr [EBP + -0x4]
00412b47  MOV EDX,dword ptr [EBP + 0xfffff994]
00412b4d  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412b54  FSTP float ptr [EAX + 0x164]
00412b5a  MOV ECX,dword ptr [EBP + -0x4]
00412b5d  PUSH ECX
00412b5e  LEA EDX,[EBP + 0xfffffc80]
00412b64  PUSH EDX
00412b65  MOV ECX,dword ptr [EBP + 0xfffff994]
00412b6b  CALL 0x00401136
00412b70  MOV ECX,dword ptr [EBP + -0x4]
00412b73  MOV EDX,dword ptr [EBP + 0xfffff994]
00412b79  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412b80  ADD ECX,0x158
00412b86  MOV EDX,dword ptr [EAX]
00412b88  MOV dword ptr [ECX],EDX
00412b8a  MOV EDX,dword ptr [EAX + 0x4]
00412b8d  MOV dword ptr [ECX + 0x4],EDX
00412b90  MOV EAX,dword ptr [EAX + 0x8]
00412b93  MOV dword ptr [ECX + 0x8],EAX
00412b96  MOV ECX,dword ptr [EBP + -0x4]
00412b99  MOV EDX,dword ptr [EBP + 0xfffff994]
00412b9f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412ba6  CALL 0x00401212
00412bab  JMP 0x00412c80
00412bb0  PUSH 0x40000000
00412bb5  MOV EAX,dword ptr [EBP + -0x4]
00412bb8  MOV ECX,dword ptr [EBP + 0xfffff994]
00412bbe  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00412bc5  MOV EAX,dword ptr [EDX + 0x164]
00412bcb  PUSH EAX
00412bcc  MOV ECX,dword ptr [EBP + -0x4]
00412bcf  MOV EDX,dword ptr [EBP + 0xfffff994]
00412bd5  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412bdc  MOV ECX,dword ptr [EAX + 0x160]
00412be2  PUSH ECX
00412be3  MOV EDX,dword ptr [EBP + -0x4]
00412be6  MOV EAX,dword ptr [EBP + 0xfffff994]
00412bec  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00412bf3  FLD float ptr [ECX + 0x158]
00412bf9  FSUB float ptr [0x0044e10c] {35}
00412bff  PUSH ECX
00412c00  FSTP float ptr [ESP]
00412c03  CALL 0x00401127
00412c08  ADD ESP,0x4
00412c0b  FSTP float ptr [ESP]
00412c0e  MOV ECX,dword ptr [EBP + 0xfffff994]
00412c14  CALL 0x00401140
00412c19  MOV EDX,dword ptr [EBP + -0x4]
00412c1c  MOV EAX,dword ptr [EBP + 0xfffff994]
00412c22  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00412c29  FSTP float ptr [ECX + 0x164]
00412c2f  MOV EDX,dword ptr [EBP + -0x4]
00412c32  PUSH EDX
00412c33  LEA EAX,[EBP + 0xfffffc74]
00412c39  PUSH EAX
00412c3a  MOV ECX,dword ptr [EBP + 0xfffff994]
00412c40  CALL 0x00401136
00412c45  MOV ECX,dword ptr [EBP + -0x4]
00412c48  MOV EDX,dword ptr [EBP + 0xfffff994]
00412c4e  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412c55  ADD ECX,0x158
00412c5b  MOV EDX,dword ptr [EAX]
00412c5d  MOV dword ptr [ECX],EDX
00412c5f  MOV EDX,dword ptr [EAX + 0x4]
00412c62  MOV dword ptr [ECX + 0x4],EDX
00412c65  MOV EAX,dword ptr [EAX + 0x8]
00412c68  MOV dword ptr [ECX + 0x8],EAX
00412c6b  MOV ECX,dword ptr [EBP + -0x4]
00412c6e  MOV EDX,dword ptr [EBP + 0xfffff994]
00412c74  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412c7b  CALL 0x00401212
00412c80  JMP 0x00412da2
00412c85  MOV EAX,dword ptr [EBP + -0x4]
00412c88  MOV ECX,dword ptr [EBP + 0xfffff994]
00412c8e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00412c95  XOR EAX,EAX
00412c97  CMP dword ptr [EDX + 0x190],0x7
00412c9e  SETZ AL
00412ca1  MOV ECX,dword ptr [EBP + 0xfffff994]
00412ca7  XOR EDX,EDX
00412ca9  CMP dword ptr [ECX + 0x268],0x0
00412cb0  SETL DL
00412cb3  AND EAX,EDX
00412cb5  TEST EAX,EAX
00412cb7  JZ 0x00412da2
00412cbd  PUSH 0x41200000
00412cc2  MOV EAX,dword ptr [EBP + -0x4]
00412cc5  MOV ECX,dword ptr [EBP + 0xfffff994]
00412ccb  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00412cd2  MOV EAX,dword ptr [EDX + 0x164]
00412cd8  PUSH EAX
00412cd9  MOV ECX,dword ptr [EBP + -0x4]
00412cdc  MOV EDX,dword ptr [EBP + 0xfffff994]
00412ce2  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412ce9  MOV ECX,dword ptr [EBP + 0xfffff994]
00412cef  FLD float ptr [EAX + 0x160]
00412cf5  FSUB float ptr [ECX + 0x254]
00412cfb  PUSH ECX
00412cfc  FSTP float ptr [ESP]
00412cff  MOV EDX,dword ptr [EBP + -0x4]
00412d02  MOV EAX,dword ptr [EBP + 0xfffff994]
00412d08  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00412d0f  MOV EDX,dword ptr [EBP + 0xfffff994]
00412d15  FLD float ptr [ECX + 0x158]
00412d1b  FSUB float ptr [EDX + 0x24c]
00412d21  PUSH ECX
00412d22  FSTP float ptr [ESP]
00412d25  CALL 0x00401127
00412d2a  ADD ESP,0x4
00412d2d  FSTP float ptr [ESP]
00412d30  MOV ECX,dword ptr [EBP + 0xfffff994]
00412d36  CALL 0x00401140
00412d3b  MOV EAX,dword ptr [EBP + -0x4]
00412d3e  MOV ECX,dword ptr [EBP + 0xfffff994]
00412d44  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00412d4b  FSTP float ptr [EDX + 0x164]
00412d51  MOV EAX,dword ptr [EBP + -0x4]
00412d54  PUSH EAX
00412d55  LEA ECX,[EBP + 0xfffffc68]
00412d5b  PUSH ECX
00412d5c  MOV ECX,dword ptr [EBP + 0xfffff994]
00412d62  CALL 0x00401136
00412d67  MOV EDX,dword ptr [EBP + -0x4]
00412d6a  MOV ECX,dword ptr [EBP + 0xfffff994]
00412d70  MOV EDX,dword ptr [ECX + EDX*0x4 + 0xd8]
00412d77  ADD EDX,0x158
00412d7d  MOV ECX,dword ptr [EAX]
00412d7f  MOV dword ptr [EDX],ECX
00412d81  MOV ECX,dword ptr [EAX + 0x4]
00412d84  MOV dword ptr [EDX + 0x4],ECX
00412d87  MOV EAX,dword ptr [EAX + 0x8]
00412d8a  MOV dword ptr [EDX + 0x8],EAX
00412d8d  MOV ECX,dword ptr [EBP + -0x4]
00412d90  MOV EDX,dword ptr [EBP + 0xfffff994]
00412d96  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412d9d  CALL 0x00401212
00412da2  MOV EAX,dword ptr [EBP + 0xfffff994]
00412da8  XOR ECX,ECX
00412daa  MOV CL,byte ptr [EAX + 0x3a6]
00412db0  TEST ECX,ECX
00412db2  JZ 0x00413bcb
00412db8  MOV EDX,dword ptr [EBP + -0x14]
00412dbb  MOV EAX,dword ptr [EBP + 0xfffff994]
00412dc1  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00412dc8  XOR EDX,EDX
00412dca  CMP dword ptr [ECX + 0x190],0x6
00412dd1  SETG DL
00412dd4  MOV EAX,dword ptr [EBP + -0x14]
00412dd7  MOV ECX,dword ptr [EBP + 0xfffff994]
00412ddd  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
00412de4  XOR ECX,ECX
00412de6  CMP dword ptr [EAX + 0x190],0xa
00412ded  SETL CL
00412df0  AND EDX,ECX
00412df2  TEST EDX,EDX
00412df4  JZ 0x004133b6
00412dfa  MOV EDX,dword ptr [EBP + -0x14]
00412dfd  MOV EAX,dword ptr [EBP + 0xfffff994]
00412e03  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00412e0a  FLD float ptr [ECX + 0x160]
00412e10  FCOMP float ptr [0x0044e118] {18}
00412e16  FNSTSW AX
00412e18  TEST AH,0x41
00412e1b  JNZ 0x00412eb6
00412e21  PUSH 0x40a00000
00412e26  MOV EDX,dword ptr [EBP + -0x14]
00412e29  MOV EAX,dword ptr [EBP + 0xfffff994]
00412e2f  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00412e36  MOV EDX,dword ptr [ECX + 0x164]
00412e3c  PUSH EDX
00412e3d  PUSH 0x0
00412e3f  MOV ECX,dword ptr [EBP + 0xfffff994]
00412e45  CALL 0x00401140
00412e4a  MOV EAX,dword ptr [EBP + -0x14]
00412e4d  MOV ECX,dword ptr [EBP + 0xfffff994]
00412e53  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00412e5a  FSTP float ptr [EDX + 0x164]
00412e60  MOV EAX,dword ptr [EBP + -0x14]
00412e63  PUSH EAX
00412e64  LEA ECX,[EBP + 0xfffffc5c]
00412e6a  PUSH ECX
00412e6b  MOV ECX,dword ptr [EBP + 0xfffff994]
00412e71  CALL 0x00401136
00412e76  MOV EDX,dword ptr [EBP + -0x14]
00412e79  MOV ECX,dword ptr [EBP + 0xfffff994]
00412e7f  MOV EDX,dword ptr [ECX + EDX*0x4 + 0xd8]
00412e86  ADD EDX,0x158
00412e8c  MOV ECX,dword ptr [EAX]
00412e8e  MOV dword ptr [EDX],ECX
00412e90  MOV ECX,dword ptr [EAX + 0x4]
00412e93  MOV dword ptr [EDX + 0x4],ECX
00412e96  MOV EAX,dword ptr [EAX + 0x8]
00412e99  MOV dword ptr [EDX + 0x8],EAX
00412e9c  MOV ECX,dword ptr [EBP + -0x14]
00412e9f  MOV EDX,dword ptr [EBP + 0xfffff994]
00412ea5  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412eac  CALL 0x00401212
00412eb1  JMP 0x004133b6
00412eb6  MOV EAX,dword ptr [EBP + -0x14]
00412eb9  MOV ECX,dword ptr [EBP + 0xfffff994]
00412ebf  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00412ec6  FLD float ptr [EDX + 0x160]
00412ecc  FCOMP float ptr [0x0044e11c] {-18}
00412ed2  FNSTSW AX
00412ed4  TEST AH,0x1
00412ed7  JZ 0x00412f75
00412edd  PUSH 0x40a00000
00412ee2  MOV EAX,dword ptr [EBP + -0x14]
00412ee5  MOV ECX,dword ptr [EBP + 0xfffff994]
00412eeb  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00412ef2  MOV EAX,dword ptr [EDX + 0x164]
00412ef8  PUSH EAX
00412ef9  PUSH 0x4048f5c3
00412efe  MOV ECX,dword ptr [EBP + 0xfffff994]
00412f04  CALL 0x00401140
00412f09  MOV ECX,dword ptr [EBP + -0x14]
00412f0c  MOV EDX,dword ptr [EBP + 0xfffff994]
00412f12  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412f19  FSTP float ptr [EAX + 0x164]
00412f1f  MOV ECX,dword ptr [EBP + -0x14]
00412f22  PUSH ECX
00412f23  LEA EDX,[EBP + 0xfffffc50]
00412f29  PUSH EDX
00412f2a  MOV ECX,dword ptr [EBP + 0xfffff994]
00412f30  CALL 0x00401136
00412f35  MOV ECX,dword ptr [EBP + -0x14]
00412f38  MOV EDX,dword ptr [EBP + 0xfffff994]
00412f3e  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412f45  ADD ECX,0x158
00412f4b  MOV EDX,dword ptr [EAX]
00412f4d  MOV dword ptr [ECX],EDX
00412f4f  MOV EDX,dword ptr [EAX + 0x4]
00412f52  MOV dword ptr [ECX + 0x4],EDX
00412f55  MOV EAX,dword ptr [EAX + 0x8]
00412f58  MOV dword ptr [ECX + 0x8],EAX
00412f5b  MOV ECX,dword ptr [EBP + -0x14]
00412f5e  MOV EDX,dword ptr [EBP + 0xfffff994]
00412f64  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412f6b  CALL 0x00401212
00412f70  JMP 0x004133b6
00412f75  MOV EAX,dword ptr [EBP + -0x4]
00412f78  MOV ECX,dword ptr [EBP + 0xfffff994]
00412f7e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00412f85  FLD float ptr [EDX + 0x158]
00412f8b  FCOMP float ptr [0x0044e120] {25}
00412f91  FNSTSW AX
00412f93  TEST AH,0x1
00412f96  JZ 0x00413229
00412f9c  MOV EAX,dword ptr [EBP + -0x14]
00412f9f  MOV ECX,dword ptr [EBP + 0xfffff994]
00412fa5  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00412fac  MOV EAX,dword ptr [EBP + -0x4]
00412faf  MOV ECX,dword ptr [EBP + 0xfffff994]
00412fb5  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
00412fbc  FLD float ptr [EDX + 0x158]
00412fc2  FSUB float ptr [EAX + 0x158]
00412fc8  FCOMP float ptr [0x0044e124] {10}
00412fce  FNSTSW AX
00412fd0  TEST AH,0x1
00412fd3  JZ 0x00413071
00412fd9  PUSH 0x40a00000
00412fde  MOV ECX,dword ptr [EBP + -0x14]
00412fe1  MOV EDX,dword ptr [EBP + 0xfffff994]
00412fe7  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00412fee  MOV ECX,dword ptr [EAX + 0x164]
00412ff4  PUSH ECX
00412ff5  PUSH 0xbfc8f5c3
00412ffa  MOV ECX,dword ptr [EBP + 0xfffff994]
00413000  CALL 0x00401140
00413005  MOV EDX,dword ptr [EBP + -0x14]
00413008  MOV EAX,dword ptr [EBP + 0xfffff994]
0041300e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00413015  FSTP float ptr [ECX + 0x164]
0041301b  MOV EDX,dword ptr [EBP + -0x14]
0041301e  PUSH EDX
0041301f  LEA EAX,[EBP + 0xfffffc44]
00413025  PUSH EAX
00413026  MOV ECX,dword ptr [EBP + 0xfffff994]
0041302c  CALL 0x00401136
00413031  MOV ECX,dword ptr [EBP + -0x14]
00413034  MOV EDX,dword ptr [EBP + 0xfffff994]
0041303a  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413041  ADD ECX,0x158
00413047  MOV EDX,dword ptr [EAX]
00413049  MOV dword ptr [ECX],EDX
0041304b  MOV EDX,dword ptr [EAX + 0x4]
0041304e  MOV dword ptr [ECX + 0x4],EDX
00413051  MOV EAX,dword ptr [EAX + 0x8]
00413054  MOV dword ptr [ECX + 0x8],EAX
00413057  MOV ECX,dword ptr [EBP + -0x14]
0041305a  MOV EDX,dword ptr [EBP + 0xfffff994]
00413060  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413067  CALL 0x00401212
0041306c  JMP 0x00413224
00413071  MOV EAX,dword ptr [EBP + -0x14]
00413074  MOV ECX,dword ptr [EBP + 0xfffff994]
0041307a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413081  MOV EAX,dword ptr [EBP + -0x4]
00413084  MOV ECX,dword ptr [EBP + 0xfffff994]
0041308a  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413091  FLD float ptr [EDX + 0x158]
00413097  FSUB float ptr [EAX + 0x158]
0041309d  FCOMP float ptr [0x0044e128] {15}
004130a3  FNSTSW AX
004130a5  TEST AH,0x41
004130a8  JNZ 0x00413146
004130ae  PUSH 0x40a00000
004130b3  MOV ECX,dword ptr [EBP + -0x14]
004130b6  MOV EDX,dword ptr [EBP + 0xfffff994]
004130bc  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004130c3  MOV ECX,dword ptr [EAX + 0x164]
004130c9  PUSH ECX
004130ca  PUSH 0x3fc8f5c3
004130cf  MOV ECX,dword ptr [EBP + 0xfffff994]
004130d5  CALL 0x00401140
004130da  MOV EDX,dword ptr [EBP + -0x14]
004130dd  MOV EAX,dword ptr [EBP + 0xfffff994]
004130e3  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004130ea  FSTP float ptr [ECX + 0x164]
004130f0  MOV EDX,dword ptr [EBP + -0x14]
004130f3  PUSH EDX
004130f4  LEA EAX,[EBP + 0xfffffc38]
004130fa  PUSH EAX
004130fb  MOV ECX,dword ptr [EBP + 0xfffff994]
00413101  CALL 0x00401136
00413106  MOV ECX,dword ptr [EBP + -0x14]
00413109  MOV EDX,dword ptr [EBP + 0xfffff994]
0041310f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413116  ADD ECX,0x158
0041311c  MOV EDX,dword ptr [EAX]
0041311e  MOV dword ptr [ECX],EDX
00413120  MOV EDX,dword ptr [EAX + 0x4]
00413123  MOV dword ptr [ECX + 0x4],EDX
00413126  MOV EAX,dword ptr [EAX + 0x8]
00413129  MOV dword ptr [ECX + 0x8],EAX
0041312c  MOV ECX,dword ptr [EBP + -0x14]
0041312f  MOV EDX,dword ptr [EBP + 0xfffff994]
00413135  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041313c  CALL 0x00401212
00413141  JMP 0x00413224
00413146  MOV EAX,dword ptr [EBP + 0xfffff994]
0041314c  MOV ECX,dword ptr [EAX + 0x58]
0041314f  XOR EDX,EDX
00413151  CMP ECX,dword ptr [0x004581e8] {None}
00413157  SETZ DL
0041315a  MOV EAX,dword ptr [EBP + 0xfffff994]
00413160  MOV ECX,dword ptr [EAX + 0x84]
00413166  XOR EAX,EAX
00413168  CMP ECX,dword ptr [0x004581e8] {None}
0041316e  SETZ AL
00413171  AND EDX,EAX
00413173  TEST EDX,EDX
00413175  JZ 0x00413224
0041317b  PUSH 0x40a00000
00413180  MOV ECX,dword ptr [EBP + -0x14]
00413183  MOV EDX,dword ptr [EBP + 0xfffff994]
00413189  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413190  MOV ECX,dword ptr [EAX + 0x164]
00413196  PUSH ECX
00413197  MOV EDX,dword ptr [EBP + -0x14]
0041319a  MOV EAX,dword ptr [EBP + 0xfffff994]
004131a0  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004131a7  MOV EDX,dword ptr [EBP + 0xfffff994]
004131ad  FLD float ptr [ECX + 0x160]
004131b3  FSUB float ptr [EDX + 0x254]
004131b9  PUSH ECX
004131ba  FSTP float ptr [ESP]
004131bd  MOV EAX,dword ptr [EBP + -0x14]
004131c0  MOV ECX,dword ptr [EBP + 0xfffff994]
004131c6  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004131cd  MOV EAX,dword ptr [EBP + 0xfffff994]
004131d3  FLD float ptr [EDX + 0x158]
004131d9  FSUB float ptr [EAX + 0x24c]
004131df  PUSH ECX
004131e0  FSTP float ptr [ESP]
004131e3  CALL 0x00401127
004131e8  ADD ESP,0x4
004131eb  FSTP float ptr [ESP]
004131ee  MOV ECX,dword ptr [EBP + 0xfffff994]
004131f4  CALL 0x00401140
004131f9  MOV ECX,dword ptr [EBP + -0x14]
004131fc  MOV EDX,dword ptr [EBP + 0xfffff994]
00413202  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413209  FSTP float ptr [EAX + 0x164]
0041320f  MOV ECX,dword ptr [EBP + -0x14]
00413212  MOV EDX,dword ptr [EBP + 0xfffff994]
00413218  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041321f  CALL 0x00401384
00413224  JMP 0x004133b6
00413229  MOV EAX,dword ptr [EBP + -0x4]
0041322c  MOV ECX,dword ptr [EBP + 0xfffff994]
00413232  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413239  FLD float ptr [EDX + 0x160]
0041323f  FCOMP float ptr [0x0044e0d0] {0}
00413245  FNSTSW AX
00413247  TEST AH,0x41
0041324a  JNZ 0x004132dd
00413250  PUSH 0x40a00000
00413255  MOV EAX,dword ptr [EBP + -0x14]
00413258  MOV ECX,dword ptr [EBP + 0xfffff994]
0041325e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413265  MOV EAX,dword ptr [EDX + 0x164]
0041326b  PUSH EAX
0041326c  MOV ECX,dword ptr [EBP + -0x14]
0041326f  MOV EDX,dword ptr [EBP + 0xfffff994]
00413275  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041327c  FLD float ptr [EAX + 0x160]
00413282  FADD float ptr [0x0044e128] {15}
00413288  PUSH ECX
00413289  FSTP float ptr [ESP]
0041328c  MOV ECX,dword ptr [EBP + -0x14]
0041328f  MOV EDX,dword ptr [EBP + 0xfffff994]
00413295  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041329c  FLD float ptr [EAX + 0x158]
004132a2  FSUB float ptr [0x0044e12c] {30}
004132a8  PUSH ECX
004132a9  FSTP float ptr [ESP]
004132ac  CALL 0x00401127
004132b1  ADD ESP,0x4
004132b4  FSTP float ptr [ESP]
004132b7  MOV ECX,dword ptr [EBP + 0xfffff994]
004132bd  CALL 0x00401140
004132c2  MOV ECX,dword ptr [EBP + -0x14]
004132c5  MOV EDX,dword ptr [EBP + 0xfffff994]
004132cb  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004132d2  FSTP float ptr [EAX + 0x164]
004132d8  JMP 0x00413365
004132dd  PUSH 0x40a00000
004132e2  MOV ECX,dword ptr [EBP + -0x14]
004132e5  MOV EDX,dword ptr [EBP + 0xfffff994]
004132eb  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004132f2  MOV ECX,dword ptr [EAX + 0x164]
004132f8  PUSH ECX
004132f9  MOV EDX,dword ptr [EBP + -0x14]
004132fc  MOV EAX,dword ptr [EBP + 0xfffff994]
00413302  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00413309  FLD float ptr [ECX + 0x160]
0041330f  FSUB float ptr [0x0044e128] {15}
00413315  PUSH ECX
00413316  FSTP float ptr [ESP]
00413319  MOV EDX,dword ptr [EBP + -0x14]
0041331c  MOV EAX,dword ptr [EBP + 0xfffff994]
00413322  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00413329  FLD float ptr [ECX + 0x158]
0041332f  FSUB float ptr [0x0044e12c] {30}
00413335  PUSH ECX
00413336  FSTP float ptr [ESP]
00413339  CALL 0x00401127
0041333e  ADD ESP,0x4
00413341  FSTP float ptr [ESP]
00413344  MOV ECX,dword ptr [EBP + 0xfffff994]
0041334a  CALL 0x00401140
0041334f  MOV EDX,dword ptr [EBP + -0x14]
00413352  MOV EAX,dword ptr [EBP + 0xfffff994]
00413358  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041335f  FSTP float ptr [ECX + 0x164]
00413365  MOV EDX,dword ptr [EBP + -0x14]
00413368  PUSH EDX
00413369  LEA EAX,[EBP + 0xfffffc2c]
0041336f  PUSH EAX
00413370  MOV ECX,dword ptr [EBP + 0xfffff994]
00413376  CALL 0x00401136
0041337b  MOV ECX,dword ptr [EBP + -0x14]
0041337e  MOV EDX,dword ptr [EBP + 0xfffff994]
00413384  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041338b  ADD ECX,0x158
00413391  MOV EDX,dword ptr [EAX]
00413393  MOV dword ptr [ECX],EDX
00413395  MOV EDX,dword ptr [EAX + 0x4]
00413398  MOV dword ptr [ECX + 0x4],EDX
0041339b  MOV EAX,dword ptr [EAX + 0x8]
0041339e  MOV dword ptr [ECX + 0x8],EAX
004133a1  MOV ECX,dword ptr [EBP + -0x14]
004133a4  MOV EDX,dword ptr [EBP + 0xfffff994]
004133aa  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004133b1  CALL 0x00401212
004133b6  MOV EAX,dword ptr [EBP + -0x10]
004133b9  MOV ECX,dword ptr [EBP + 0xfffff994]
004133bf  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004133c6  XOR EAX,EAX
004133c8  CMP dword ptr [EDX + 0x190],0x6
004133cf  SETG AL
004133d2  MOV ECX,dword ptr [EBP + -0x10]
004133d5  MOV EDX,dword ptr [EBP + 0xfffff994]
004133db  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004133e2  XOR EDX,EDX
004133e4  CMP dword ptr [ECX + 0x190],0xa
004133eb  SETL DL
004133ee  AND EAX,EDX
004133f0  TEST EAX,EAX
004133f2  JZ 0x00413bc6
004133f8  MOV EAX,dword ptr [EBP + -0x10]
004133fb  MOV ECX,dword ptr [EBP + 0xfffff994]
00413401  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413408  FLD float ptr [EDX + 0x160]
0041340e  FCOMP float ptr [0x0044e118] {18}
00413414  FNSTSW AX
00413416  TEST AH,0x41
00413419  JNZ 0x004134b4
0041341f  PUSH 0x40a00000
00413424  MOV EAX,dword ptr [EBP + -0x10]
00413427  MOV ECX,dword ptr [EBP + 0xfffff994]
0041342d  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413434  MOV EAX,dword ptr [EDX + 0x164]
0041343a  PUSH EAX
0041343b  PUSH 0x0
0041343d  MOV ECX,dword ptr [EBP + 0xfffff994]
00413443  CALL 0x00401140
00413448  MOV ECX,dword ptr [EBP + -0x10]
0041344b  MOV EDX,dword ptr [EBP + 0xfffff994]
00413451  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413458  FSTP float ptr [EAX + 0x164]
0041345e  MOV ECX,dword ptr [EBP + -0x10]
00413461  PUSH ECX
00413462  LEA EDX,[EBP + 0xfffffc20]
00413468  PUSH EDX
00413469  MOV ECX,dword ptr [EBP + 0xfffff994]
0041346f  CALL 0x00401136
00413474  MOV ECX,dword ptr [EBP + -0x10]
00413477  MOV EDX,dword ptr [EBP + 0xfffff994]
0041347d  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413484  ADD ECX,0x158
0041348a  MOV EDX,dword ptr [EAX]
0041348c  MOV dword ptr [ECX],EDX
0041348e  MOV EDX,dword ptr [EAX + 0x4]
00413491  MOV dword ptr [ECX + 0x4],EDX
00413494  MOV EAX,dword ptr [EAX + 0x8]
00413497  MOV dword ptr [ECX + 0x8],EAX
0041349a  MOV ECX,dword ptr [EBP + -0x10]
0041349d  MOV EDX,dword ptr [EBP + 0xfffff994]
004134a3  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004134aa  CALL 0x00401212
004134af  JMP 0x00413bc6
004134b4  MOV EAX,dword ptr [EBP + -0x10]
004134b7  MOV ECX,dword ptr [EBP + 0xfffff994]
004134bd  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004134c4  FLD float ptr [EDX + 0x160]
004134ca  FCOMP float ptr [0x0044e11c] {-18}
004134d0  FNSTSW AX
004134d2  TEST AH,0x1
004134d5  JZ 0x00413573
004134db  PUSH 0x40a00000
004134e0  MOV EAX,dword ptr [EBP + -0x10]
004134e3  MOV ECX,dword ptr [EBP + 0xfffff994]
004134e9  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004134f0  MOV EAX,dword ptr [EDX + 0x164]
004134f6  PUSH EAX
004134f7  PUSH 0x4048f5c3
004134fc  MOV ECX,dword ptr [EBP + 0xfffff994]
00413502  CALL 0x00401140
00413507  MOV ECX,dword ptr [EBP + -0x10]
0041350a  MOV EDX,dword ptr [EBP + 0xfffff994]
00413510  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413517  FSTP float ptr [EAX + 0x164]
0041351d  MOV ECX,dword ptr [EBP + -0x10]
00413520  PUSH ECX
00413521  LEA EDX,[EBP + 0xfffffc14]
00413527  PUSH EDX
00413528  MOV ECX,dword ptr [EBP + 0xfffff994]
0041352e  CALL 0x00401136
00413533  MOV ECX,dword ptr [EBP + -0x10]
00413536  MOV EDX,dword ptr [EBP + 0xfffff994]
0041353c  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413543  ADD ECX,0x158
00413549  MOV EDX,dword ptr [EAX]
0041354b  MOV dword ptr [ECX],EDX
0041354d  MOV EDX,dword ptr [EAX + 0x4]
00413550  MOV dword ptr [ECX + 0x4],EDX
00413553  MOV EAX,dword ptr [EAX + 0x8]
00413556  MOV dword ptr [ECX + 0x8],EAX
00413559  MOV ECX,dword ptr [EBP + -0x10]
0041355c  MOV EDX,dword ptr [EBP + 0xfffff994]
00413562  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413569  CALL 0x00401212
0041356e  JMP 0x00413bc6
00413573  MOV EAX,dword ptr [EBP + -0x10]
00413576  MOV ECX,dword ptr [EBP + 0xfffff994]
0041357c  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413583  FLD float ptr [EDX + 0x158]
00413589  FCOMP float ptr [0x0044e130] {-35}
0041358f  FNSTSW AX
00413591  TEST AH,0x1
00413594  JZ 0x00413632
0041359a  PUSH 0x40a00000
0041359f  MOV EAX,dword ptr [EBP + -0x10]
004135a2  MOV ECX,dword ptr [EBP + 0xfffff994]
004135a8  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004135af  MOV EAX,dword ptr [EDX + 0x164]
004135b5  PUSH EAX
004135b6  PUSH 0xbfc8f5c3
004135bb  MOV ECX,dword ptr [EBP + 0xfffff994]
004135c1  CALL 0x00401140
004135c6  MOV ECX,dword ptr [EBP + -0x10]
004135c9  MOV EDX,dword ptr [EBP + 0xfffff994]
004135cf  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004135d6  FSTP float ptr [EAX + 0x164]
004135dc  MOV ECX,dword ptr [EBP + -0x10]
004135df  PUSH ECX
004135e0  LEA EDX,[EBP + 0xfffffc08]
004135e6  PUSH EDX
004135e7  MOV ECX,dword ptr [EBP + 0xfffff994]
004135ed  CALL 0x00401136
004135f2  MOV ECX,dword ptr [EBP + -0x10]
004135f5  MOV EDX,dword ptr [EBP + 0xfffff994]
004135fb  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413602  ADD ECX,0x158
00413608  MOV EDX,dword ptr [EAX]
0041360a  MOV dword ptr [ECX],EDX
0041360c  MOV EDX,dword ptr [EAX + 0x4]
0041360f  MOV dword ptr [ECX + 0x4],EDX
00413612  MOV EAX,dword ptr [EAX + 0x8]
00413615  MOV dword ptr [ECX + 0x8],EAX
00413618  MOV ECX,dword ptr [EBP + -0x10]
0041361b  MOV EDX,dword ptr [EBP + 0xfffff994]
00413621  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413628  CALL 0x00401212
0041362d  JMP 0x00413bc6
00413632  MOV EAX,dword ptr [EBP + -0x10]
00413635  MOV ECX,dword ptr [EBP + 0xfffff994]
0041363b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413642  FLD float ptr [EDX + 0x158]
00413648  FCOMP float ptr [0x0044e10c] {35}
0041364e  FNSTSW AX
00413650  TEST AH,0x41
00413653  JNZ 0x004136f1
00413659  PUSH 0x40a00000
0041365e  MOV EAX,dword ptr [EBP + -0x10]
00413661  MOV ECX,dword ptr [EBP + 0xfffff994]
00413667  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041366e  MOV EAX,dword ptr [EDX + 0x164]
00413674  PUSH EAX
00413675  PUSH 0x3fc8f5c3
0041367a  MOV ECX,dword ptr [EBP + 0xfffff994]
00413680  CALL 0x00401140
00413685  MOV ECX,dword ptr [EBP + -0x10]
00413688  MOV EDX,dword ptr [EBP + 0xfffff994]
0041368e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413695  FSTP float ptr [EAX + 0x164]
0041369b  MOV ECX,dword ptr [EBP + -0x10]
0041369e  PUSH ECX
0041369f  LEA EDX,[EBP + 0xfffffbfc]
004136a5  PUSH EDX
004136a6  MOV ECX,dword ptr [EBP + 0xfffff994]
004136ac  CALL 0x00401136
004136b1  MOV ECX,dword ptr [EBP + -0x10]
004136b4  MOV EDX,dword ptr [EBP + 0xfffff994]
004136ba  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004136c1  ADD ECX,0x158
004136c7  MOV EDX,dword ptr [EAX]
004136c9  MOV dword ptr [ECX],EDX
004136cb  MOV EDX,dword ptr [EAX + 0x4]
004136ce  MOV dword ptr [ECX + 0x4],EDX
004136d1  MOV EAX,dword ptr [EAX + 0x8]
004136d4  MOV dword ptr [ECX + 0x8],EAX
004136d7  MOV ECX,dword ptr [EBP + -0x10]
004136da  MOV EDX,dword ptr [EBP + 0xfffff994]
004136e0  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004136e7  CALL 0x00401212
004136ec  JMP 0x00413bc6
004136f1  MOV EAX,dword ptr [EBP + -0x10]
004136f4  MOV ECX,dword ptr [EBP + 0xfffff994]
004136fa  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413701  MOV EAX,dword ptr [EBP + -0x4]
00413704  MOV ECX,dword ptr [EBP + 0xfffff994]
0041370a  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413711  FLD float ptr [EDX + 0x158]
00413717  FSUB float ptr [EAX + 0x158]
0041371d  FCOMP float ptr [0x0044e134] {-12}
00413723  FNSTSW AX
00413725  TEST AH,0x1
00413728  JZ 0x004137c6
0041372e  PUSH 0x40a00000
00413733  MOV ECX,dword ptr [EBP + -0x10]
00413736  MOV EDX,dword ptr [EBP + 0xfffff994]
0041373c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413743  MOV ECX,dword ptr [EAX + 0x164]
00413749  PUSH ECX
0041374a  PUSH 0xbfc8f5c3
0041374f  MOV ECX,dword ptr [EBP + 0xfffff994]
00413755  CALL 0x00401140
0041375a  MOV EDX,dword ptr [EBP + -0x10]
0041375d  MOV EAX,dword ptr [EBP + 0xfffff994]
00413763  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041376a  FSTP float ptr [ECX + 0x164]
00413770  MOV EDX,dword ptr [EBP + -0x10]
00413773  PUSH EDX
00413774  LEA EAX,[EBP + 0xfffffbf0]
0041377a  PUSH EAX
0041377b  MOV ECX,dword ptr [EBP + 0xfffff994]
00413781  CALL 0x00401136
00413786  MOV ECX,dword ptr [EBP + -0x10]
00413789  MOV EDX,dword ptr [EBP + 0xfffff994]
0041378f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413796  ADD ECX,0x158
0041379c  MOV EDX,dword ptr [EAX]
0041379e  MOV dword ptr [ECX],EDX
004137a0  MOV EDX,dword ptr [EAX + 0x4]
004137a3  MOV dword ptr [ECX + 0x4],EDX
004137a6  MOV EAX,dword ptr [EAX + 0x8]
004137a9  MOV dword ptr [ECX + 0x8],EAX
004137ac  MOV ECX,dword ptr [EBP + -0x10]
004137af  MOV EDX,dword ptr [EBP + 0xfffff994]
004137b5  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004137bc  CALL 0x00401212
004137c1  JMP 0x00413bc6
004137c6  MOV EAX,dword ptr [EBP + -0x10]
004137c9  MOV ECX,dword ptr [EBP + 0xfffff994]
004137cf  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004137d6  MOV EAX,dword ptr [EBP + -0x4]
004137d9  MOV ECX,dword ptr [EBP + 0xfffff994]
004137df  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
004137e6  FLD float ptr [EDX + 0x158]
004137ec  FSUB float ptr [EAX + 0x158]
004137f2  FCOMP float ptr [0x0044e0ec] {3}
004137f8  FNSTSW AX
004137fa  TEST AH,0x41
004137fd  JNZ 0x0041389b
00413803  PUSH 0x40a00000
00413808  MOV ECX,dword ptr [EBP + -0x10]
0041380b  MOV EDX,dword ptr [EBP + 0xfffff994]
00413811  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413818  MOV ECX,dword ptr [EAX + 0x164]
0041381e  PUSH ECX
0041381f  PUSH 0x3fc8f5c3
00413824  MOV ECX,dword ptr [EBP + 0xfffff994]
0041382a  CALL 0x00401140
0041382f  MOV EDX,dword ptr [EBP + -0x10]
00413832  MOV EAX,dword ptr [EBP + 0xfffff994]
00413838  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041383f  FSTP float ptr [ECX + 0x164]
00413845  MOV EDX,dword ptr [EBP + -0x10]
00413848  PUSH EDX
00413849  LEA EAX,[EBP + 0xfffffbe4]
0041384f  PUSH EAX
00413850  MOV ECX,dword ptr [EBP + 0xfffff994]
00413856  CALL 0x00401136
0041385b  MOV ECX,dword ptr [EBP + -0x10]
0041385e  MOV EDX,dword ptr [EBP + 0xfffff994]
00413864  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041386b  ADD ECX,0x158
00413871  MOV EDX,dword ptr [EAX]
00413873  MOV dword ptr [ECX],EDX
00413875  MOV EDX,dword ptr [EAX + 0x4]
00413878  MOV dword ptr [ECX + 0x4],EDX
0041387b  MOV EAX,dword ptr [EAX + 0x8]
0041387e  MOV dword ptr [ECX + 0x8],EAX
00413881  MOV ECX,dword ptr [EBP + -0x10]
00413884  MOV EDX,dword ptr [EBP + 0xfffff994]
0041388a  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413891  CALL 0x00401212
00413896  JMP 0x00413bc6
0041389b  MOV EAX,dword ptr [EBP + -0x10]
0041389e  MOV ECX,dword ptr [EBP + 0xfffff994]
004138a4  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004138ab  MOV EAX,dword ptr [EBP + -0x4]
004138ae  MOV ECX,dword ptr [EBP + 0xfffff994]
004138b4  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
004138bb  FLD float ptr [EDX + 0x160]
004138c1  FSUB float ptr [EAX + 0x160]
004138c7  FCOMP float ptr [0x0044e138] {6}
004138cd  FNSTSW AX
004138cf  TEST AH,0x41
004138d2  JNZ 0x0041396d
004138d8  PUSH 0x40a00000
004138dd  MOV ECX,dword ptr [EBP + -0x10]
004138e0  MOV EDX,dword ptr [EBP + 0xfffff994]
004138e6  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004138ed  MOV ECX,dword ptr [EAX + 0x164]
004138f3  PUSH ECX
004138f4  PUSH 0x0
004138f6  MOV ECX,dword ptr [EBP + 0xfffff994]
004138fc  CALL 0x00401140
00413901  MOV EDX,dword ptr [EBP + -0x10]
00413904  MOV EAX,dword ptr [EBP + 0xfffff994]
0041390a  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00413911  FSTP float ptr [ECX + 0x164]
00413917  MOV EDX,dword ptr [EBP + -0x10]
0041391a  PUSH EDX
0041391b  LEA EAX,[EBP + 0xfffffbd8]
00413921  PUSH EAX
00413922  MOV ECX,dword ptr [EBP + 0xfffff994]
00413928  CALL 0x00401136
0041392d  MOV ECX,dword ptr [EBP + -0x10]
00413930  MOV EDX,dword ptr [EBP + 0xfffff994]
00413936  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041393d  ADD ECX,0x158
00413943  MOV EDX,dword ptr [EAX]
00413945  MOV dword ptr [ECX],EDX
00413947  MOV EDX,dword ptr [EAX + 0x4]
0041394a  MOV dword ptr [ECX + 0x4],EDX
0041394d  MOV EAX,dword ptr [EAX + 0x8]
00413950  MOV dword ptr [ECX + 0x8],EAX
00413953  MOV ECX,dword ptr [EBP + -0x10]
00413956  MOV EDX,dword ptr [EBP + 0xfffff994]
0041395c  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413963  CALL 0x00401212
00413968  JMP 0x00413bc6
0041396d  MOV EAX,dword ptr [EBP + -0x10]
00413970  MOV ECX,dword ptr [EBP + 0xfffff994]
00413976  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041397d  MOV EAX,dword ptr [EBP + -0x4]
00413980  MOV ECX,dword ptr [EBP + 0xfffff994]
00413986  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041398d  FLD float ptr [EDX + 0x160]
00413993  FSUB float ptr [EAX + 0x160]
00413999  FCOMP float ptr [0x0044e13c] {-6}
0041399f  FNSTSW AX
004139a1  TEST AH,0x1
004139a4  JZ 0x00413a42
004139aa  PUSH 0x40a00000
004139af  MOV ECX,dword ptr [EBP + -0x10]
004139b2  MOV EDX,dword ptr [EBP + 0xfffff994]
004139b8  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004139bf  MOV ECX,dword ptr [EAX + 0x164]
004139c5  PUSH ECX
004139c6  PUSH 0x4048f5c3
004139cb  MOV ECX,dword ptr [EBP + 0xfffff994]
004139d1  CALL 0x00401140
004139d6  MOV EDX,dword ptr [EBP + -0x10]
004139d9  MOV EAX,dword ptr [EBP + 0xfffff994]
004139df  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004139e6  FSTP float ptr [ECX + 0x164]
004139ec  MOV EDX,dword ptr [EBP + -0x10]
004139ef  PUSH EDX
004139f0  LEA EAX,[EBP + 0xfffffbcc]
004139f6  PUSH EAX
004139f7  MOV ECX,dword ptr [EBP + 0xfffff994]
004139fd  CALL 0x00401136
00413a02  MOV ECX,dword ptr [EBP + -0x10]
00413a05  MOV EDX,dword ptr [EBP + 0xfffff994]
00413a0b  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413a12  ADD ECX,0x158
00413a18  MOV EDX,dword ptr [EAX]
00413a1a  MOV dword ptr [ECX],EDX
00413a1c  MOV EDX,dword ptr [EAX + 0x4]
00413a1f  MOV dword ptr [ECX + 0x4],EDX
00413a22  MOV EAX,dword ptr [EAX + 0x8]
00413a25  MOV dword ptr [ECX + 0x8],EAX
00413a28  MOV ECX,dword ptr [EBP + -0x10]
00413a2b  MOV EDX,dword ptr [EBP + 0xfffff994]
00413a31  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413a38  CALL 0x00401212
00413a3d  JMP 0x00413bc6
00413a42  MOV EAX,dword ptr [EBP + 0xfffff994]
00413a48  MOV ECX,dword ptr [EAX + 0x6c]
00413a4b  CMP ECX,dword ptr [0x00453618] {3}
00413a51  JNZ 0x00413ae8
00413a57  MOV EDX,dword ptr [EBP + -0x10]
00413a5a  MOV EAX,dword ptr [EBP + 0xfffff994]
00413a60  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00413a67  MOV EDX,dword ptr [EBP + 0xfffff994]
00413a6d  FLD float ptr [0x0044e0d4] {5}
00413a73  FMUL float ptr [EDX + 0x54]
00413a76  FADD float ptr [ECX + 0x164]
00413a7c  MOV EAX,dword ptr [EBP + -0x10]
00413a7f  MOV ECX,dword ptr [EBP + 0xfffff994]
00413a85  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413a8c  FSTP float ptr [EDX + 0x164]
00413a92  MOV EAX,dword ptr [EBP + -0x10]
00413a95  PUSH EAX
00413a96  LEA ECX,[EBP + 0xfffffbc0]
00413a9c  PUSH ECX
00413a9d  MOV ECX,dword ptr [EBP + 0xfffff994]
00413aa3  CALL 0x00401136
00413aa8  MOV EDX,dword ptr [EBP + -0x10]
00413aab  MOV ECX,dword ptr [EBP + 0xfffff994]
00413ab1  MOV EDX,dword ptr [ECX + EDX*0x4 + 0xd8]
00413ab8  ADD EDX,0x158
00413abe  MOV ECX,dword ptr [EAX]
00413ac0  MOV dword ptr [EDX],ECX
00413ac2  MOV ECX,dword ptr [EAX + 0x4]
00413ac5  MOV dword ptr [EDX + 0x4],ECX
00413ac8  MOV EAX,dword ptr [EAX + 0x8]
00413acb  MOV dword ptr [EDX + 0x8],EAX
00413ace  MOV ECX,dword ptr [EBP + -0x10]
00413ad1  MOV EDX,dword ptr [EBP + 0xfffff994]
00413ad7  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413ade  CALL 0x00401212
00413ae3  JMP 0x00413bc6
00413ae8  MOV EAX,dword ptr [EBP + 0xfffff994]
00413aee  MOV ECX,dword ptr [EAX + 0x58]
00413af1  XOR EDX,EDX
00413af3  CMP ECX,dword ptr [0x004581e8] {None}
00413af9  SETZ DL
00413afc  MOV EAX,dword ptr [EBP + 0xfffff994]
00413b02  MOV ECX,dword ptr [EAX + 0x84]
00413b08  XOR EAX,EAX
00413b0a  CMP ECX,dword ptr [0x004581e8] {None}
00413b10  SETZ AL
00413b13  AND EDX,EAX
00413b15  TEST EDX,EDX
00413b17  JZ 0x00413bc6
00413b1d  PUSH 0x40a00000
00413b22  MOV ECX,dword ptr [EBP + -0x10]
00413b25  MOV EDX,dword ptr [EBP + 0xfffff994]
00413b2b  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413b32  MOV ECX,dword ptr [EAX + 0x164]
00413b38  PUSH ECX
00413b39  MOV EDX,dword ptr [EBP + -0x10]
00413b3c  MOV EAX,dword ptr [EBP + 0xfffff994]
00413b42  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00413b49  MOV EDX,dword ptr [EBP + 0xfffff994]
00413b4f  FLD float ptr [ECX + 0x160]
00413b55  FSUB float ptr [EDX + 0x254]
00413b5b  PUSH ECX
00413b5c  FSTP float ptr [ESP]
00413b5f  MOV EAX,dword ptr [EBP + -0x10]
00413b62  MOV ECX,dword ptr [EBP + 0xfffff994]
00413b68  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413b6f  MOV EAX,dword ptr [EBP + 0xfffff994]
00413b75  FLD float ptr [EDX + 0x158]
00413b7b  FSUB float ptr [EAX + 0x24c]
00413b81  PUSH ECX
00413b82  FSTP float ptr [ESP]
00413b85  CALL 0x00401127
00413b8a  ADD ESP,0x4
00413b8d  FSTP float ptr [ESP]
00413b90  MOV ECX,dword ptr [EBP + 0xfffff994]
00413b96  CALL 0x00401140
00413b9b  MOV ECX,dword ptr [EBP + -0x10]
00413b9e  MOV EDX,dword ptr [EBP + 0xfffff994]
00413ba4  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413bab  FSTP float ptr [EAX + 0x164]
00413bb1  MOV ECX,dword ptr [EBP + -0x10]
00413bb4  MOV EDX,dword ptr [EBP + 0xfffff994]
00413bba  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413bc1  CALL 0x00401384
00413bc6  JMP 0x004149d9
00413bcb  MOV EAX,dword ptr [EBP + -0x14]
00413bce  MOV ECX,dword ptr [EBP + 0xfffff994]
00413bd4  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413bdb  XOR EAX,EAX
00413bdd  CMP dword ptr [EDX + 0x190],0x6
00413be4  SETG AL
00413be7  MOV ECX,dword ptr [EBP + -0x14]
00413bea  MOV EDX,dword ptr [EBP + 0xfffff994]
00413bf0  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413bf7  XOR EDX,EDX
00413bf9  CMP dword ptr [ECX + 0x190],0xa
00413c00  SETL DL
00413c03  AND EAX,EDX
00413c05  TEST EAX,EAX
00413c07  JZ 0x004141c9
00413c0d  MOV EAX,dword ptr [EBP + -0x14]
00413c10  MOV ECX,dword ptr [EBP + 0xfffff994]
00413c16  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413c1d  FLD float ptr [EDX + 0x160]
00413c23  FCOMP float ptr [0x0044e118] {18}
00413c29  FNSTSW AX
00413c2b  TEST AH,0x41
00413c2e  JNZ 0x00413cc9
00413c34  PUSH 0x40a00000
00413c39  MOV EAX,dword ptr [EBP + -0x14]
00413c3c  MOV ECX,dword ptr [EBP + 0xfffff994]
00413c42  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413c49  MOV EAX,dword ptr [EDX + 0x164]
00413c4f  PUSH EAX
00413c50  PUSH 0x0
00413c52  MOV ECX,dword ptr [EBP + 0xfffff994]
00413c58  CALL 0x00401140
00413c5d  MOV ECX,dword ptr [EBP + -0x14]
00413c60  MOV EDX,dword ptr [EBP + 0xfffff994]
00413c66  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413c6d  FSTP float ptr [EAX + 0x164]
00413c73  MOV ECX,dword ptr [EBP + -0x14]
00413c76  PUSH ECX
00413c77  LEA EDX,[EBP + 0xfffffbb4]
00413c7d  PUSH EDX
00413c7e  MOV ECX,dword ptr [EBP + 0xfffff994]
00413c84  CALL 0x00401136
00413c89  MOV ECX,dword ptr [EBP + -0x14]
00413c8c  MOV EDX,dword ptr [EBP + 0xfffff994]
00413c92  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413c99  ADD ECX,0x158
00413c9f  MOV EDX,dword ptr [EAX]
00413ca1  MOV dword ptr [ECX],EDX
00413ca3  MOV EDX,dword ptr [EAX + 0x4]
00413ca6  MOV dword ptr [ECX + 0x4],EDX
00413ca9  MOV EAX,dword ptr [EAX + 0x8]
00413cac  MOV dword ptr [ECX + 0x8],EAX
00413caf  MOV ECX,dword ptr [EBP + -0x14]
00413cb2  MOV EDX,dword ptr [EBP + 0xfffff994]
00413cb8  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413cbf  CALL 0x00401212
00413cc4  JMP 0x004141c9
00413cc9  MOV EAX,dword ptr [EBP + -0x14]
00413ccc  MOV ECX,dword ptr [EBP + 0xfffff994]
00413cd2  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413cd9  FLD float ptr [EDX + 0x160]
00413cdf  FCOMP float ptr [0x0044e11c] {-18}
00413ce5  FNSTSW AX
00413ce7  TEST AH,0x1
00413cea  JZ 0x00413d88
00413cf0  PUSH 0x40a00000
00413cf5  MOV EAX,dword ptr [EBP + -0x14]
00413cf8  MOV ECX,dword ptr [EBP + 0xfffff994]
00413cfe  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413d05  MOV EAX,dword ptr [EDX + 0x164]
00413d0b  PUSH EAX
00413d0c  PUSH 0x4048f5c3
00413d11  MOV ECX,dword ptr [EBP + 0xfffff994]
00413d17  CALL 0x00401140
00413d1c  MOV ECX,dword ptr [EBP + -0x14]
00413d1f  MOV EDX,dword ptr [EBP + 0xfffff994]
00413d25  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413d2c  FSTP float ptr [EAX + 0x164]
00413d32  MOV ECX,dword ptr [EBP + -0x14]
00413d35  PUSH ECX
00413d36  LEA EDX,[EBP + 0xfffffba8]
00413d3c  PUSH EDX
00413d3d  MOV ECX,dword ptr [EBP + 0xfffff994]
00413d43  CALL 0x00401136
00413d48  MOV ECX,dword ptr [EBP + -0x14]
00413d4b  MOV EDX,dword ptr [EBP + 0xfffff994]
00413d51  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413d58  ADD ECX,0x158
00413d5e  MOV EDX,dword ptr [EAX]
00413d60  MOV dword ptr [ECX],EDX
00413d62  MOV EDX,dword ptr [EAX + 0x4]
00413d65  MOV dword ptr [ECX + 0x4],EDX
00413d68  MOV EAX,dword ptr [EAX + 0x8]
00413d6b  MOV dword ptr [ECX + 0x8],EAX
00413d6e  MOV ECX,dword ptr [EBP + -0x14]
00413d71  MOV EDX,dword ptr [EBP + 0xfffff994]
00413d77  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413d7e  CALL 0x00401212
00413d83  JMP 0x004141c9
00413d88  MOV EAX,dword ptr [EBP + -0x4]
00413d8b  MOV ECX,dword ptr [EBP + 0xfffff994]
00413d91  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413d98  FLD float ptr [EDX + 0x158]
00413d9e  FCOMP float ptr [0x0044e140] {-25}
00413da4  FNSTSW AX
00413da6  TEST AH,0x41
00413da9  JNZ 0x0041403c
00413daf  MOV EAX,dword ptr [EBP + -0x14]
00413db2  MOV ECX,dword ptr [EBP + 0xfffff994]
00413db8  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413dbf  MOV EAX,dword ptr [EBP + -0x4]
00413dc2  MOV ECX,dword ptr [EBP + 0xfffff994]
00413dc8  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413dcf  FLD float ptr [EDX + 0x158]
00413dd5  FSUB float ptr [EAX + 0x158]
00413ddb  FCOMP float ptr [0x0044e144] {-10}
00413de1  FNSTSW AX
00413de3  TEST AH,0x41
00413de6  JNZ 0x00413e84
00413dec  PUSH 0x40a00000
00413df1  MOV ECX,dword ptr [EBP + -0x14]
00413df4  MOV EDX,dword ptr [EBP + 0xfffff994]
00413dfa  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413e01  MOV ECX,dword ptr [EAX + 0x164]
00413e07  PUSH ECX
00413e08  PUSH 0x3fc8f5c3
00413e0d  MOV ECX,dword ptr [EBP + 0xfffff994]
00413e13  CALL 0x00401140
00413e18  MOV EDX,dword ptr [EBP + -0x14]
00413e1b  MOV EAX,dword ptr [EBP + 0xfffff994]
00413e21  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00413e28  FSTP float ptr [ECX + 0x164]
00413e2e  MOV EDX,dword ptr [EBP + -0x14]
00413e31  PUSH EDX
00413e32  LEA EAX,[EBP + 0xfffffb9c]
00413e38  PUSH EAX
00413e39  MOV ECX,dword ptr [EBP + 0xfffff994]
00413e3f  CALL 0x00401136
00413e44  MOV ECX,dword ptr [EBP + -0x14]
00413e47  MOV EDX,dword ptr [EBP + 0xfffff994]
00413e4d  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413e54  ADD ECX,0x158
00413e5a  MOV EDX,dword ptr [EAX]
00413e5c  MOV dword ptr [ECX],EDX
00413e5e  MOV EDX,dword ptr [EAX + 0x4]
00413e61  MOV dword ptr [ECX + 0x4],EDX
00413e64  MOV EAX,dword ptr [EAX + 0x8]
00413e67  MOV dword ptr [ECX + 0x8],EAX
00413e6a  MOV ECX,dword ptr [EBP + -0x14]
00413e6d  MOV EDX,dword ptr [EBP + 0xfffff994]
00413e73  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413e7a  CALL 0x00401212
00413e7f  JMP 0x00414037
00413e84  MOV EAX,dword ptr [EBP + -0x14]
00413e87  MOV ECX,dword ptr [EBP + 0xfffff994]
00413e8d  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413e94  MOV EAX,dword ptr [EBP + -0x4]
00413e97  MOV ECX,dword ptr [EBP + 0xfffff994]
00413e9d  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413ea4  FLD float ptr [EDX + 0x158]
00413eaa  FSUB float ptr [EAX + 0x158]
00413eb0  FCOMP float ptr [0x0044e148] {-15}
00413eb6  FNSTSW AX
00413eb8  TEST AH,0x1
00413ebb  JZ 0x00413f59
00413ec1  PUSH 0x40a00000
00413ec6  MOV ECX,dword ptr [EBP + -0x14]
00413ec9  MOV EDX,dword ptr [EBP + 0xfffff994]
00413ecf  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413ed6  MOV ECX,dword ptr [EAX + 0x164]
00413edc  PUSH ECX
00413edd  PUSH 0xbfc8f5c3
00413ee2  MOV ECX,dword ptr [EBP + 0xfffff994]
00413ee8  CALL 0x00401140
00413eed  MOV EDX,dword ptr [EBP + -0x14]
00413ef0  MOV EAX,dword ptr [EBP + 0xfffff994]
00413ef6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00413efd  FSTP float ptr [ECX + 0x164]
00413f03  MOV EDX,dword ptr [EBP + -0x14]
00413f06  PUSH EDX
00413f07  LEA EAX,[EBP + 0xfffffb90]
00413f0d  PUSH EAX
00413f0e  MOV ECX,dword ptr [EBP + 0xfffff994]
00413f14  CALL 0x00401136
00413f19  MOV ECX,dword ptr [EBP + -0x14]
00413f1c  MOV EDX,dword ptr [EBP + 0xfffff994]
00413f22  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413f29  ADD ECX,0x158
00413f2f  MOV EDX,dword ptr [EAX]
00413f31  MOV dword ptr [ECX],EDX
00413f33  MOV EDX,dword ptr [EAX + 0x4]
00413f36  MOV dword ptr [ECX + 0x4],EDX
00413f39  MOV EAX,dword ptr [EAX + 0x8]
00413f3c  MOV dword ptr [ECX + 0x8],EAX
00413f3f  MOV ECX,dword ptr [EBP + -0x14]
00413f42  MOV EDX,dword ptr [EBP + 0xfffff994]
00413f48  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413f4f  CALL 0x00401212
00413f54  JMP 0x00414037
00413f59  MOV EAX,dword ptr [EBP + 0xfffff994]
00413f5f  MOV ECX,dword ptr [EAX + 0x58]
00413f62  XOR EDX,EDX
00413f64  CMP ECX,dword ptr [0x004581e8] {None}
00413f6a  SETZ DL
00413f6d  MOV EAX,dword ptr [EBP + 0xfffff994]
00413f73  MOV ECX,dword ptr [EAX + 0x84]
00413f79  XOR EAX,EAX
00413f7b  CMP ECX,dword ptr [0x004581e8] {None}
00413f81  SETZ AL
00413f84  AND EDX,EAX
00413f86  TEST EDX,EDX
00413f88  JZ 0x00414037
00413f8e  PUSH 0x40a00000
00413f93  MOV ECX,dword ptr [EBP + -0x14]
00413f96  MOV EDX,dword ptr [EBP + 0xfffff994]
00413f9c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00413fa3  MOV ECX,dword ptr [EAX + 0x164]
00413fa9  PUSH ECX
00413faa  MOV EDX,dword ptr [EBP + -0x14]
00413fad  MOV EAX,dword ptr [EBP + 0xfffff994]
00413fb3  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00413fba  MOV EDX,dword ptr [EBP + 0xfffff994]
00413fc0  FLD float ptr [ECX + 0x160]
00413fc6  FSUB float ptr [EDX + 0x254]
00413fcc  PUSH ECX
00413fcd  FSTP float ptr [ESP]
00413fd0  MOV EAX,dword ptr [EBP + -0x14]
00413fd3  MOV ECX,dword ptr [EBP + 0xfffff994]
00413fd9  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00413fe0  MOV EAX,dword ptr [EBP + 0xfffff994]
00413fe6  FLD float ptr [EDX + 0x158]
00413fec  FSUB float ptr [EAX + 0x24c]
00413ff2  PUSH ECX
00413ff3  FSTP float ptr [ESP]
00413ff6  CALL 0x00401127
00413ffb  ADD ESP,0x4
00413ffe  FSTP float ptr [ESP]
00414001  MOV ECX,dword ptr [EBP + 0xfffff994]
00414007  CALL 0x00401140
0041400c  MOV ECX,dword ptr [EBP + -0x14]
0041400f  MOV EDX,dword ptr [EBP + 0xfffff994]
00414015  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041401c  FSTP float ptr [EAX + 0x164]
00414022  MOV ECX,dword ptr [EBP + -0x14]
00414025  MOV EDX,dword ptr [EBP + 0xfffff994]
0041402b  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00414032  CALL 0x00401384
00414037  JMP 0x004141c9
0041403c  MOV EAX,dword ptr [EBP + -0x4]
0041403f  MOV ECX,dword ptr [EBP + 0xfffff994]
00414045  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041404c  FLD float ptr [EDX + 0x160]
00414052  FCOMP float ptr [0x0044e0d0] {0}
00414058  FNSTSW AX
0041405a  TEST AH,0x41
0041405d  JNZ 0x004140f0
00414063  PUSH 0x40a00000
00414068  MOV EAX,dword ptr [EBP + -0x14]
0041406b  MOV ECX,dword ptr [EBP + 0xfffff994]
00414071  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00414078  MOV EAX,dword ptr [EDX + 0x164]
0041407e  PUSH EAX
0041407f  MOV ECX,dword ptr [EBP + -0x14]
00414082  MOV EDX,dword ptr [EBP + 0xfffff994]
00414088  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041408f  FLD float ptr [EAX + 0x160]
00414095  FADD float ptr [0x0044e128] {15}
0041409b  PUSH ECX
0041409c  FSTP float ptr [ESP]
0041409f  MOV ECX,dword ptr [EBP + -0x14]
004140a2  MOV EDX,dword ptr [EBP + 0xfffff994]
004140a8  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004140af  FLD float ptr [EAX + 0x158]
004140b5  FADD float ptr [0x0044e12c] {30}
004140bb  PUSH ECX
004140bc  FSTP float ptr [ESP]
004140bf  CALL 0x00401127
004140c4  ADD ESP,0x4
004140c7  FSTP float ptr [ESP]
004140ca  MOV ECX,dword ptr [EBP + 0xfffff994]
004140d0  CALL 0x00401140
004140d5  MOV ECX,dword ptr [EBP + -0x14]
004140d8  MOV EDX,dword ptr [EBP + 0xfffff994]
004140de  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004140e5  FSTP float ptr [EAX + 0x164]
004140eb  JMP 0x00414178
004140f0  PUSH 0x40a00000
004140f5  MOV ECX,dword ptr [EBP + -0x14]
004140f8  MOV EDX,dword ptr [EBP + 0xfffff994]
004140fe  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00414105  MOV ECX,dword ptr [EAX + 0x164]
0041410b  PUSH ECX
0041410c  MOV EDX,dword ptr [EBP + -0x14]
0041410f  MOV EAX,dword ptr [EBP + 0xfffff994]
00414115  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041411c  FLD float ptr [ECX + 0x160]
00414122  FSUB float ptr [0x0044e128] {15}
00414128  PUSH ECX
00414129  FSTP float ptr [ESP]
0041412c  MOV EDX,dword ptr [EBP + -0x14]
0041412f  MOV EAX,dword ptr [EBP + 0xfffff994]
00414135  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041413c  FLD float ptr [ECX + 0x158]
00414142  FADD float ptr [0x0044e12c] {30}
00414148  PUSH ECX
00414149  FSTP float ptr [ESP]
0041414c  CALL 0x00401127
00414151  ADD ESP,0x4
00414154  FSTP float ptr [ESP]
00414157  MOV ECX,dword ptr [EBP + 0xfffff994]
0041415d  CALL 0x00401140
00414162  MOV EDX,dword ptr [EBP + -0x14]
00414165  MOV EAX,dword ptr [EBP + 0xfffff994]
0041416b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00414172  FSTP float ptr [ECX + 0x164]
00414178  MOV EDX,dword ptr [EBP + -0x14]
0041417b  PUSH EDX
0041417c  LEA EAX,[EBP + 0xfffffb84]
00414182  PUSH EAX
00414183  MOV ECX,dword ptr [EBP + 0xfffff994]
00414189  CALL 0x00401136
0041418e  MOV ECX,dword ptr [EBP + -0x14]
00414191  MOV EDX,dword ptr [EBP + 0xfffff994]
00414197  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041419e  ADD ECX,0x158
004141a4  MOV EDX,dword ptr [EAX]
004141a6  MOV dword ptr [ECX],EDX
004141a8  MOV EDX,dword ptr [EAX + 0x4]
004141ab  MOV dword ptr [ECX + 0x4],EDX
004141ae  MOV EAX,dword ptr [EAX + 0x8]
004141b1  MOV dword ptr [ECX + 0x8],EAX
004141b4  MOV ECX,dword ptr [EBP + -0x14]
004141b7  MOV EDX,dword ptr [EBP + 0xfffff994]
004141bd  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004141c4  CALL 0x00401212
004141c9  MOV EAX,dword ptr [EBP + -0x10]
004141cc  MOV ECX,dword ptr [EBP + 0xfffff994]
004141d2  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004141d9  XOR EAX,EAX
004141db  CMP dword ptr [EDX + 0x190],0x6
004141e2  SETG AL
004141e5  MOV ECX,dword ptr [EBP + -0x10]
004141e8  MOV EDX,dword ptr [EBP + 0xfffff994]
004141ee  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004141f5  XOR EDX,EDX
004141f7  CMP dword ptr [ECX + 0x190],0xa
004141fe  SETL DL
00414201  AND EAX,EDX
00414203  TEST EAX,EAX
00414205  JZ 0x004149d9
0041420b  MOV EAX,dword ptr [EBP + -0x10]
0041420e  MOV ECX,dword ptr [EBP + 0xfffff994]
00414214  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041421b  FLD float ptr [EDX + 0x160]
00414221  FCOMP float ptr [0x0044e118] {18}
00414227  FNSTSW AX
00414229  TEST AH,0x41
0041422c  JNZ 0x004142c7
00414232  PUSH 0x40a00000
00414237  MOV EAX,dword ptr [EBP + -0x10]
0041423a  MOV ECX,dword ptr [EBP + 0xfffff994]
00414240  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00414247  MOV EAX,dword ptr [EDX + 0x164]
0041424d  PUSH EAX
0041424e  PUSH 0x0
00414250  MOV ECX,dword ptr [EBP + 0xfffff994]
00414256  CALL 0x00401140
0041425b  MOV ECX,dword ptr [EBP + -0x10]
0041425e  MOV EDX,dword ptr [EBP + 0xfffff994]
00414264  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041426b  FSTP float ptr [EAX + 0x164]
00414271  MOV ECX,dword ptr [EBP + -0x10]
00414274  PUSH ECX
00414275  LEA EDX,[EBP + 0xfffffb78]
0041427b  PUSH EDX
0041427c  MOV ECX,dword ptr [EBP + 0xfffff994]
00414282  CALL 0x00401136
00414287  MOV ECX,dword ptr [EBP + -0x10]
0041428a  MOV EDX,dword ptr [EBP + 0xfffff994]
00414290  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00414297  ADD ECX,0x158
0041429d  MOV EDX,dword ptr [EAX]
0041429f  MOV dword ptr [ECX],EDX
004142a1  MOV EDX,dword ptr [EAX + 0x4]
004142a4  MOV dword ptr [ECX + 0x4],EDX
004142a7  MOV EAX,dword ptr [EAX + 0x8]
004142aa  MOV dword ptr [ECX + 0x8],EAX
004142ad  MOV ECX,dword ptr [EBP + -0x10]
004142b0  MOV EDX,dword ptr [EBP + 0xfffff994]
004142b6  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004142bd  CALL 0x00401212
004142c2  JMP 0x004149d9
004142c7  MOV EAX,dword ptr [EBP + -0x10]
004142ca  MOV ECX,dword ptr [EBP + 0xfffff994]
004142d0  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004142d7  FLD float ptr [EDX + 0x160]
004142dd  FCOMP float ptr [0x0044e11c] {-18}
004142e3  FNSTSW AX
004142e5  TEST AH,0x1
004142e8  JZ 0x00414386
004142ee  PUSH 0x40a00000
004142f3  MOV EAX,dword ptr [EBP + -0x10]
004142f6  MOV ECX,dword ptr [EBP + 0xfffff994]
004142fc  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00414303  MOV EAX,dword ptr [EDX + 0x164]
00414309  PUSH EAX
0041430a  PUSH 0x4048f5c3
0041430f  MOV ECX,dword ptr [EBP + 0xfffff994]
00414315  CALL 0x00401140
0041431a  MOV ECX,dword ptr [EBP + -0x10]
0041431d  MOV EDX,dword ptr [EBP + 0xfffff994]
00414323  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041432a  FSTP float ptr [EAX + 0x164]
00414330  MOV ECX,dword ptr [EBP + -0x10]
00414333  PUSH ECX
00414334  LEA EDX,[EBP + 0xfffffb6c]
0041433a  PUSH EDX
0041433b  MOV ECX,dword ptr [EBP + 0xfffff994]
00414341  CALL 0x00401136
00414346  MOV ECX,dword ptr [EBP + -0x10]
00414349  MOV EDX,dword ptr [EBP + 0xfffff994]
0041434f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00414356  ADD ECX,0x158
0041435c  MOV EDX,dword ptr [EAX]
0041435e  MOV dword ptr [ECX],EDX
00414360  MOV EDX,dword ptr [EAX + 0x4]
00414363  MOV dword ptr [ECX + 0x4],EDX
00414366  MOV EAX,dword ptr [EAX + 0x8]
00414369  MOV dword ptr [ECX + 0x8],EAX
0041436c  MOV ECX,dword ptr [EBP + -0x10]
0041436f  MOV EDX,dword ptr [EBP + 0xfffff994]
00414375  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041437c  CALL 0x00401212
00414381  JMP 0x004149d9
00414386  MOV EAX,dword ptr [EBP + -0x10]
00414389  MOV ECX,dword ptr [EBP + 0xfffff994]
0041438f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00414396  FLD float ptr [EDX + 0x158]
0041439c  FCOMP float ptr [0x0044e130] {-35}
004143a2  FNSTSW AX
004143a4  TEST AH,0x1
004143a7  JZ 0x00414445
004143ad  PUSH 0x40a00000
004143b2  MOV EAX,dword ptr [EBP + -0x10]
004143b5  MOV ECX,dword ptr [EBP + 0xfffff994]
004143bb  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004143c2  MOV EAX,dword ptr [EDX + 0x164]
004143c8  PUSH EAX
004143c9  PUSH 0xbfc8f5c3
004143ce  MOV ECX,dword ptr [EBP + 0xfffff994]
004143d4  CALL 0x00401140
004143d9  MOV ECX,dword ptr [EBP + -0x10]
004143dc  MOV EDX,dword ptr [EBP + 0xfffff994]
004143e2  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004143e9  FSTP float ptr [EAX + 0x164]
004143ef  MOV ECX,dword ptr [EBP + -0x10]
004143f2  PUSH ECX
004143f3  LEA EDX,[EBP + 0xfffffb60]
004143f9  PUSH EDX
004143fa  MOV ECX,dword ptr [EBP + 0xfffff994]
00414400  CALL 0x00401136
00414405  MOV ECX,dword ptr [EBP + -0x10]
00414408  MOV EDX,dword ptr [EBP + 0xfffff994]
0041440e  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00414415  ADD ECX,0x158
0041441b  MOV EDX,dword ptr [EAX]
0041441d  MOV dword ptr [ECX],EDX
0041441f  MOV EDX,dword ptr [EAX + 0x4]
00414422  MOV dword ptr [ECX + 0x4],EDX
00414425  MOV EAX,dword ptr [EAX + 0x8]
00414428  MOV dword ptr [ECX + 0x8],EAX
0041442b  MOV ECX,dword ptr [EBP + -0x10]
0041442e  MOV EDX,dword ptr [EBP + 0xfffff994]
00414434  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041443b  CALL 0x00401212
00414440  JMP 0x004149d9
00414445  MOV EAX,dword ptr [EBP + -0x10]
00414448  MOV ECX,dword ptr [EBP + 0xfffff994]
0041444e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00414455  FLD float ptr [EDX + 0x158]
0041445b  FCOMP float ptr [0x0044e10c] {35}
00414461  FNSTSW AX
00414463  TEST AH,0x41
00414466  JNZ 0x00414504
0041446c  PUSH 0x40a00000
00414471  MOV EAX,dword ptr [EBP + -0x10]
00414474  MOV ECX,dword ptr [EBP + 0xfffff994]
0041447a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00414481  MOV EAX,dword ptr [EDX + 0x164]
00414487  PUSH EAX
00414488  PUSH 0x3fc8f5c3
0041448d  MOV ECX,dword ptr [EBP + 0xfffff994]
00414493  CALL 0x00401140
00414498  MOV ECX,dword ptr [EBP + -0x10]
0041449b  MOV EDX,dword ptr [EBP + 0xfffff994]
004144a1  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004144a8  FSTP float ptr [EAX + 0x164]
004144ae  MOV ECX,dword ptr [EBP + -0x10]
004144b1  PUSH ECX
004144b2  LEA EDX,[EBP + 0xfffffb54]
004144b8  PUSH EDX
004144b9  MOV ECX,dword ptr [EBP + 0xfffff994]
004144bf  CALL 0x00401136
004144c4  MOV ECX,dword ptr [EBP + -0x10]
004144c7  MOV EDX,dword ptr [EBP + 0xfffff994]
004144cd  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004144d4  ADD ECX,0x158
004144da  MOV EDX,dword ptr [EAX]
004144dc  MOV dword ptr [ECX],EDX
004144de  MOV EDX,dword ptr [EAX + 0x4]
004144e1  MOV dword ptr [ECX + 0x4],EDX
004144e4  MOV EAX,dword ptr [EAX + 0x8]
004144e7  MOV dword ptr [ECX + 0x8],EAX
004144ea  MOV ECX,dword ptr [EBP + -0x10]
004144ed  MOV EDX,dword ptr [EBP + 0xfffff994]
004144f3  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004144fa  CALL 0x00401212
004144ff  JMP 0x004149d9
00414504  MOV EAX,dword ptr [EBP + -0x10]
00414507  MOV ECX,dword ptr [EBP + 0xfffff994]
0041450d  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00414514  MOV EAX,dword ptr [EBP + -0x4]
00414517  MOV ECX,dword ptr [EBP + 0xfffff994]
0041451d  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
00414524  FLD float ptr [EDX + 0x158]
0041452a  FSUB float ptr [EAX + 0x158]
00414530  FCOMP float ptr [0x0044e14c] {12}
00414536  FNSTSW AX
00414538  TEST AH,0x41
0041453b  JNZ 0x004145d9
00414541  PUSH 0x40a00000
00414546  MOV ECX,dword ptr [EBP + -0x10]
00414549  MOV EDX,dword ptr [EBP + 0xfffff994]
0041454f  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00414556  MOV ECX,dword ptr [EAX + 0x164]
0041455c  PUSH ECX
0041455d  PUSH 0x3fc8f5c3
00414562  MOV ECX,dword ptr [EBP + 0xfffff994]
00414568  CALL 0x00401140
0041456d  MOV EDX,dword ptr [EBP + -0x10]
00414570  MOV EAX,dword ptr [EBP + 0xfffff994]
00414576  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041457d  FSTP float ptr [ECX + 0x164]
00414583  MOV EDX,dword ptr [EBP + -0x10]
00414586  PUSH EDX
00414587  LEA EAX,[EBP + 0xfffffb48]
0041458d  PUSH EAX
0041458e  MOV ECX,dword ptr [EBP + 0xfffff994]
00414594  CALL 0x00401136
00414599  MOV ECX,dword ptr [EBP + -0x10]
0041459c  MOV EDX,dword ptr [EBP + 0xfffff994]
004145a2  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004145a9  ADD ECX,0x158
004145af  MOV EDX,dword ptr [EAX]
004145b1  MOV dword ptr [ECX],EDX
004145b3  MOV EDX,dword ptr [EAX + 0x4]
004145b6  MOV dword ptr [ECX + 0x4],EDX
004145b9  MOV EAX,dword ptr [EAX + 0x8]
004145bc  MOV dword ptr [ECX + 0x8],EAX
004145bf  MOV ECX,dword ptr [EBP + -0x10]
004145c2  MOV EDX,dword ptr [EBP + 0xfffff994]
004145c8  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004145cf  CALL 0x00401212
004145d4  JMP 0x004149d9
004145d9  MOV EAX,dword ptr [EBP + -0x10]
004145dc  MOV ECX,dword ptr [EBP + 0xfffff994]
004145e2  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004145e9  MOV EAX,dword ptr [EBP + -0x4]
004145ec  MOV ECX,dword ptr [EBP + 0xfffff994]
004145f2  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
004145f9  FLD float ptr [EDX + 0x158]
004145ff  FSUB float ptr [EAX + 0x158]
00414605  FCOMP float ptr [0x0044e150] {-3}
0041460b  FNSTSW AX
0041460d  TEST AH,0x1
00414610  JZ 0x004146ae
00414616  PUSH 0x40a00000
0041461b  MOV ECX,dword ptr [EBP + -0x10]
0041461e  MOV EDX,dword ptr [EBP + 0xfffff994]
00414624  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041462b  MOV ECX,dword ptr [EAX + 0x164]
00414631  PUSH ECX
00414632  PUSH 0xbfc8f5c3
00414637  MOV ECX,dword ptr [EBP + 0xfffff994]
0041463d  CALL 0x00401140
00414642  MOV EDX,dword ptr [EBP + -0x10]
00414645  MOV EAX,dword ptr [EBP + 0xfffff994]
0041464b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00414652  FSTP float ptr [ECX + 0x164]
00414658  MOV EDX,dword ptr [EBP + -0x10]
0041465b  PUSH EDX
0041465c  LEA EAX,[EBP + 0xfffffb3c]
00414662  PUSH EAX
00414663  MOV ECX,dword ptr [EBP + 0xfffff994]
00414669  CALL 0x00401136
0041466e  MOV ECX,dword ptr [EBP + -0x10]
00414671  MOV EDX,dword ptr [EBP + 0xfffff994]
00414677  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041467e  ADD ECX,0x158
00414684  MOV EDX,dword ptr [EAX]
00414686  MOV dword ptr [ECX],EDX
00414688  MOV EDX,dword ptr [EAX + 0x4]
0041468b  MOV dword ptr [ECX + 0x4],EDX
0041468e  MOV EAX,dword ptr [EAX + 0x8]
00414691  MOV dword ptr [ECX + 0x8],EAX
00414694  MOV ECX,dword ptr [EBP + -0x10]
00414697  MOV EDX,dword ptr [EBP + 0xfffff994]
0041469d  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004146a4  CALL 0x00401212
004146a9  JMP 0x004149d9
004146ae  MOV EAX,dword ptr [EBP + -0x10]
004146b1  MOV ECX,dword ptr [EBP + 0xfffff994]
004146b7  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004146be  MOV EAX,dword ptr [EBP + -0x4]
004146c1  MOV ECX,dword ptr [EBP + 0xfffff994]
004146c7  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
004146ce  FLD float ptr [EDX + 0x160]
004146d4  FSUB float ptr [EAX + 0x160]
004146da  FCOMP float ptr [0x0044e138] {6}
004146e0  FNSTSW AX
004146e2  TEST AH,0x41
004146e5  JNZ 0x00414780
004146eb  PUSH 0x40a00000
004146f0  MOV ECX,dword ptr [EBP + -0x10]
004146f3  MOV EDX,dword ptr [EBP + 0xfffff994]
004146f9  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00414700  MOV ECX,dword ptr [EAX + 0x164]
00414706  PUSH ECX
00414707  PUSH 0x0
00414709  MOV ECX,dword ptr [EBP + 0xfffff994]
0041470f  CALL 0x00401140
00414714  MOV EDX,dword ptr [EBP + -0x10]
00414717  MOV EAX,dword ptr [EBP + 0xfffff994]
0041471d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00414724  FSTP float ptr [ECX + 0x164]
0041472a  MOV EDX,dword ptr [EBP + -0x10]
0041472d  PUSH EDX
0041472e  LEA EAX,[EBP + 0xfffffb30]
00414734  PUSH EAX
00414735  MOV ECX,dword ptr [EBP + 0xfffff994]
0041473b  CALL 0x00401136
00414740  MOV ECX,dword ptr [EBP + -0x10]
00414743  MOV EDX,dword ptr [EBP + 0xfffff994]
00414749  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00414750  ADD ECX,0x158
00414756  MOV EDX,dword ptr [EAX]
00414758  MOV dword ptr [ECX],EDX
0041475a  MOV EDX,dword ptr [EAX + 0x4]
0041475d  MOV dword ptr [ECX + 0x4],EDX
00414760  MOV EAX,dword ptr [EAX + 0x8]
00414763  MOV dword ptr [ECX + 0x8],EAX
00414766  MOV ECX,dword ptr [EBP + -0x10]
00414769  MOV EDX,dword ptr [EBP + 0xfffff994]
0041476f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00414776  CALL 0x00401212
0041477b  JMP 0x004149d9
00414780  MOV EAX,dword ptr [EBP + -0x10]
00414783  MOV ECX,dword ptr [EBP + 0xfffff994]
00414789  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00414790  MOV EAX,dword ptr [EBP + -0x4]
00414793  MOV ECX,dword ptr [EBP + 0xfffff994]
00414799  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
004147a0  FLD float ptr [EDX + 0x160]
004147a6  FSUB float ptr [EAX + 0x160]
004147ac  FCOMP float ptr [0x0044e13c] {-6}
004147b2  FNSTSW AX
004147b4  TEST AH,0x1
004147b7  JZ 0x00414855
004147bd  PUSH 0x40a00000
004147c2  MOV ECX,dword ptr [EBP + -0x10]
004147c5  MOV EDX,dword ptr [EBP + 0xfffff994]
004147cb  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004147d2  MOV ECX,dword ptr [EAX + 0x164]
004147d8  PUSH ECX
004147d9  PUSH 0x4048f5c3
004147de  MOV ECX,dword ptr [EBP + 0xfffff994]
004147e4  CALL 0x00401140
004147e9  MOV EDX,dword ptr [EBP + -0x10]
004147ec  MOV EAX,dword ptr [EBP + 0xfffff994]
004147f2  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004147f9  FSTP float ptr [ECX + 0x164]
004147ff  MOV EDX,dword ptr [EBP + -0x10]
00414802  PUSH EDX
00414803  LEA EAX,[EBP + 0xfffffb24]
00414809  PUSH EAX
0041480a  MOV ECX,dword ptr [EBP + 0xfffff994]
00414810  CALL 0x00401136
00414815  MOV ECX,dword ptr [EBP + -0x10]
00414818  MOV EDX,dword ptr [EBP + 0xfffff994]
0041481e  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00414825  ADD ECX,0x158
0041482b  MOV EDX,dword ptr [EAX]
0041482d  MOV dword ptr [ECX],EDX
0041482f  MOV EDX,dword ptr [EAX + 0x4]
00414832  MOV dword ptr [ECX + 0x4],EDX
00414835  MOV EAX,dword ptr [EAX + 0x8]
00414838  MOV dword ptr [ECX + 0x8],EAX
0041483b  MOV ECX,dword ptr [EBP + -0x10]
0041483e  MOV EDX,dword ptr [EBP + 0xfffff994]
00414844  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041484b  CALL 0x00401212
00414850  JMP 0x004149d9
00414855  MOV EAX,dword ptr [EBP + 0xfffff994]
0041485b  MOV ECX,dword ptr [EAX + 0x6c]
0041485e  CMP ECX,dword ptr [0x00453618] {3}
00414864  JNZ 0x004148fb
0041486a  MOV EDX,dword ptr [EBP + -0x10]
0041486d  MOV EAX,dword ptr [EBP + 0xfffff994]
00414873  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041487a  MOV EDX,dword ptr [EBP + 0xfffff994]
00414880  FLD float ptr [0x0044e0d4] {5}
00414886  FMUL float ptr [EDX + 0x54]
00414889  FADD float ptr [ECX + 0x164]
0041488f  MOV EAX,dword ptr [EBP + -0x10]
00414892  MOV ECX,dword ptr [EBP + 0xfffff994]
00414898  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041489f  FSTP float ptr [EDX + 0x164]
004148a5  MOV EAX,dword ptr [EBP + -0x10]
004148a8  PUSH EAX
004148a9  LEA ECX,[EBP + 0xfffffb18]
004148af  PUSH ECX
004148b0  MOV ECX,dword ptr [EBP + 0xfffff994]
004148b6  CALL 0x00401136
004148bb  MOV EDX,dword ptr [EBP + -0x10]
004148be  MOV ECX,dword ptr [EBP + 0xfffff994]
004148c4  MOV EDX,dword ptr [ECX + EDX*0x4 + 0xd8]
004148cb  ADD EDX,0x158
004148d1  MOV ECX,dword ptr [EAX]
004148d3  MOV dword ptr [EDX],ECX
004148d5  MOV ECX,dword ptr [EAX + 0x4]
004148d8  MOV dword ptr [EDX + 0x4],ECX
004148db  MOV EAX,dword ptr [EAX + 0x8]
004148de  MOV dword ptr [EDX + 0x8],EAX
004148e1  MOV ECX,dword ptr [EBP + -0x10]
004148e4  MOV EDX,dword ptr [EBP + 0xfffff994]
004148ea  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004148f1  CALL 0x00401212
004148f6  JMP 0x004149d9
004148fb  MOV EAX,dword ptr [EBP + 0xfffff994]
00414901  MOV ECX,dword ptr [EAX + 0x58]
00414904  XOR EDX,EDX
00414906  CMP ECX,dword ptr [0x004581e8] {None}
0041490c  SETZ DL
0041490f  MOV EAX,dword ptr [EBP + 0xfffff994]
00414915  MOV ECX,dword ptr [EAX + 0x84]
0041491b  XOR EAX,EAX
0041491d  CMP ECX,dword ptr [0x004581e8] {None}
00414923  SETZ AL
00414926  AND EDX,EAX
00414928  TEST EDX,EDX
0041492a  JZ 0x004149d9
00414930  PUSH 0x40a00000
00414935  MOV ECX,dword ptr [EBP + -0x10]
00414938  MOV EDX,dword ptr [EBP + 0xfffff994]
0041493e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00414945  MOV ECX,dword ptr [EAX + 0x164]
0041494b  PUSH ECX
0041494c  MOV EDX,dword ptr [EBP + -0x10]
0041494f  MOV EAX,dword ptr [EBP + 0xfffff994]
00414955  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041495c  MOV EDX,dword ptr [EBP + 0xfffff994]
00414962  FLD float ptr [ECX + 0x160]
00414968  FSUB float ptr [EDX + 0x254]
0041496e  PUSH ECX
0041496f  FSTP float ptr [ESP]
00414972  MOV EAX,dword ptr [EBP + -0x10]
00414975  MOV ECX,dword ptr [EBP + 0xfffff994]
0041497b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00414982  MOV EAX,dword ptr [EBP + 0xfffff994]
00414988  FLD float ptr [EDX + 0x158]
0041498e  FSUB float ptr [EAX + 0x24c]
00414994  PUSH ECX
00414995  FSTP float ptr [ESP]
00414998  CALL 0x00401127
0041499d  ADD ESP,0x4
004149a0  FSTP float ptr [ESP]
004149a3  MOV ECX,dword ptr [EBP + 0xfffff994]
004149a9  CALL 0x00401140
004149ae  MOV ECX,dword ptr [EBP + -0x10]
004149b1  MOV EDX,dword ptr [EBP + 0xfffff994]
004149b7  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004149be  FSTP float ptr [EAX + 0x164]
004149c4  MOV ECX,dword ptr [EBP + -0x10]
004149c7  MOV EDX,dword ptr [EBP + 0xfffff994]
004149cd  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004149d4  CALL 0x00401384
004149d9  MOV EAX,dword ptr [EBP + 0xfffff994]
004149df  CMP dword ptr [EAX + 0x3b0],0x2
004149e6  JNZ 0x00414f6d
004149ec  MOV ECX,dword ptr [EBP + 0xfffff994]
004149f2  MOV EDX,dword ptr [ECX + 0x3f8]
004149f8  MOV EAX,dword ptr [EBP + 0xfffff994]
004149fe  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00414a05  XOR EDX,EDX
00414a07  CMP dword ptr [ECX + 0x190],0xa
00414a0e  SETNZ DL
00414a11  MOV EAX,dword ptr [EBP + 0xfffff994]
00414a17  MOV ECX,dword ptr [EAX + 0x3f8]
00414a1d  MOV EAX,dword ptr [EBP + 0xfffff994]
00414a23  MOV ECX,dword ptr [EAX + ECX*0x4 + 0xd8]
00414a2a  XOR EAX,EAX
00414a2c  CMP dword ptr [ECX + 0x190],0xc
00414a33  SETNZ AL
00414a36  AND EDX,EAX
00414a38  TEST EDX,EDX
00414a3a  JZ 0x00414df8
00414a40  FLD float ptr [EBP + -0x30]
00414a43  FCOMP float ptr [0x0044e124] {10}
00414a49  FNSTSW AX
00414a4b  TEST AH,0x1
00414a4e  JZ 0x00414a5c
00414a50  MOV dword ptr [EBP + 0xfffff968],0x1
00414a5a  JMP 0x00414a66
00414a5c  MOV dword ptr [EBP + 0xfffff968],0x0
00414a66  MOV ECX,dword ptr [EBP + -0x4]
00414a69  MOV EDX,dword ptr [EBP + 0xfffff994]
00414a6f  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00414a76  XOR ECX,ECX
00414a78  CMP dword ptr [EAX + 0x190],0x3
00414a7f  SETZ CL
00414a82  MOV EDX,dword ptr [EBP + -0x4]
00414a85  MOV EAX,dword ptr [EBP + 0xfffff994]
00414a8b  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00414a92  XOR EAX,EAX
00414a94  CMP dword ptr [EDX + 0x190],0x4
00414a9b  SETZ AL
00414a9e  OR ECX,EAX
00414aa0  AND ECX,dword ptr [EBP + 0xfffff968]
00414aa6  TEST ECX,ECX
00414aa8  JZ 0x00414b7e
00414aae  MOV ECX,dword ptr [EBP + 0xfffff994]
00414ab4  MOV EDX,dword ptr [ECX + 0x3f8]
00414aba  MOV EAX,dword ptr [EBP + 0xfffff994]
00414ac0  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00414ac7  MOV EDX,dword ptr [EBP + 0xfffff994]
00414acd  FLD float ptr [EDX + 0x54]
00414ad0  FMUL float ptr [0x0044e114] {2}
00414ad6  FADD float ptr [ECX + 0x164]
00414adc  MOV EAX,dword ptr [EBP + 0xfffff994]
00414ae2  MOV ECX,dword ptr [EAX + 0x3f8]
00414ae8  MOV EDX,dword ptr [EBP + 0xfffff994]
00414aee  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00414af5  FSTP float ptr [EAX + 0x164]
00414afb  MOV ECX,dword ptr [EBP + 0xfffff994]
00414b01  XOR EDX,EDX
00414b03  MOV DL,byte ptr [ECX + 0x3a6]
00414b09  TEST EDX,EDX
00414b0b  JZ 0x00414b79
00414b0d  MOV EAX,dword ptr [EBP + 0xfffff994]
00414b13  MOV ECX,dword ptr [EAX + 0x3f8]
00414b19  PUSH ECX
00414b1a  LEA EDX,[EBP + 0xfffffb0c]
00414b20  PUSH EDX
00414b21  MOV ECX,dword ptr [EBP + 0xfffff994]
00414b27  CALL 0x00401136
00414b2c  MOV ECX,dword ptr [EBP + 0xfffff994]
00414b32  MOV EDX,dword ptr [ECX + 0x3f8]
00414b38  MOV ECX,dword ptr [EBP + 0xfffff994]
00414b3e  MOV EDX,dword ptr [ECX + EDX*0x4 + 0xd8]
00414b45  ADD EDX,0x158
00414b4b  MOV ECX,dword ptr [EAX]
00414b4d  MOV dword ptr [EDX],ECX
00414b4f  MOV ECX,dword ptr [EAX + 0x4]
00414b52  MOV dword ptr [EDX + 0x4],ECX
00414b55  MOV EAX,dword ptr [EAX + 0x8]
00414b58  MOV dword ptr [EDX + 0x8],EAX
00414b5b  MOV ECX,dword ptr [EBP + 0xfffff994]
00414b61  MOV EDX,dword ptr [ECX + 0x3f8]
00414b67  MOV EAX,dword ptr [EBP + 0xfffff994]
00414b6d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00414b74  CALL 0x00401212
00414b79  JMP 0x00414df8
00414b7e  MOV ECX,dword ptr [EBP + 0xfffff994]
00414b84  MOV EDX,dword ptr [EBP + 0xfffff994]
00414b8a  MOV EAX,dword ptr [ECX + 0x268]
00414b90  CMP EAX,dword ptr [EDX + 0x3f8]
00414b96  JZ 0x00414cd7
00414b9c  PUSH 0x40a00000
00414ba1  MOV ECX,dword ptr [EBP + 0xfffff994]
00414ba7  MOV EDX,dword ptr [ECX + 0x3f8]
00414bad  MOV EAX,dword ptr [EBP + 0xfffff994]
00414bb3  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00414bba  MOV EDX,dword ptr [ECX + 0x164]
00414bc0  PUSH EDX
00414bc1  MOV EAX,dword ptr [EBP + 0xfffff994]
00414bc7  MOV ECX,dword ptr [EAX + 0x3f8]
00414bcd  MOV EDX,dword ptr [EBP + 0xfffff994]
00414bd3  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00414bda  MOV ECX,dword ptr [EBP + 0xfffff994]
00414be0  FLD float ptr [EAX + 0x160]
00414be6  FSUB float ptr [ECX + 0x254]
00414bec  PUSH ECX
00414bed  FSTP float ptr [ESP]
00414bf0  MOV EDX,dword ptr [EBP + 0xfffff994]
00414bf6  MOV EAX,dword ptr [EDX + 0x3f8]
00414bfc  MOV ECX,dword ptr [EBP + 0xfffff994]
00414c02  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00414c09  MOV EAX,dword ptr [EBP + 0xfffff994]
00414c0f  FLD float ptr [EDX + 0x158]
00414c15  FSUB float ptr [EAX + 0x24c]
00414c1b  PUSH ECX
00414c1c  FSTP float ptr [ESP]
00414c1f  CALL 0x00401127
00414c24  ADD ESP,0x4
00414c27  FSTP float ptr [ESP]
00414c2a  MOV ECX,dword ptr [EBP + 0xfffff994]
00414c30  CALL 0x00401140
00414c35  MOV ECX,dword ptr [EBP + 0xfffff994]
00414c3b  MOV EDX,dword ptr [ECX + 0x3f8]
00414c41  MOV EAX,dword ptr [EBP + 0xfffff994]
00414c47  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00414c4e  FSTP float ptr [ECX + 0x164]
00414c54  MOV EDX,dword ptr [EBP + 0xfffff994]
00414c5a  XOR EAX,EAX
00414c5c  MOV AL,byte ptr [EDX + 0x3a6]
00414c62  TEST EAX,EAX
00414c64  JZ 0x00414cd2
00414c66  MOV ECX,dword ptr [EBP + 0xfffff994]
00414c6c  MOV EDX,dword ptr [ECX + 0x3f8]
00414c72  PUSH EDX
00414c73  LEA EAX,[EBP + 0xfffffb00]
00414c79  PUSH EAX
00414c7a  MOV ECX,dword ptr [EBP + 0xfffff994]
00414c80  CALL 0x00401136
00414c85  MOV ECX,dword ptr [EBP + 0xfffff994]
00414c8b  MOV EDX,dword ptr [ECX + 0x3f8]
00414c91  MOV ECX,dword ptr [EBP + 0xfffff994]
00414c97  MOV EDX,dword ptr [ECX + EDX*0x4 + 0xd8]
00414c9e  ADD EDX,0x158
00414ca4  MOV ECX,dword ptr [EAX]
00414ca6  MOV dword ptr [EDX],ECX
00414ca8  MOV ECX,dword ptr [EAX + 0x4]
00414cab  MOV dword ptr [EDX + 0x4],ECX
00414cae  MOV EAX,dword ptr [EAX + 0x8]
00414cb1  MOV dword ptr [EDX + 0x8],EAX
00414cb4  MOV ECX,dword ptr [EBP + 0xfffff994]
00414cba  MOV EDX,dword ptr [ECX + 0x3f8]
00414cc0  MOV EAX,dword ptr [EBP + 0xfffff994]
00414cc6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00414ccd  CALL 0x00401212
00414cd2  JMP 0x00414df8
00414cd7  PUSH 0x40a00000
00414cdc  MOV ECX,dword ptr [EBP + 0xfffff994]
00414ce2  MOV EDX,dword ptr [ECX + 0x3f8]
00414ce8  MOV EAX,dword ptr [EBP + 0xfffff994]
00414cee  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00414cf5  MOV EDX,dword ptr [ECX + 0x164]
00414cfb  PUSH EDX
00414cfc  MOV EAX,dword ptr [EBP + 0xfffff994]
00414d02  MOV ECX,dword ptr [EAX + 0x3f8]
00414d08  MOV EDX,dword ptr [EBP + 0xfffff994]
00414d0e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00414d15  MOV ECX,dword ptr [EAX + 0x160]
00414d1b  PUSH ECX
00414d1c  MOV EDX,dword ptr [EBP + 0xfffff994]
00414d22  MOV EAX,dword ptr [EDX + 0x3f8]
00414d28  MOV ECX,dword ptr [EBP + 0xfffff994]
00414d2e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00414d35  FLD float ptr [EDX + 0x158]
00414d3b  FADD float ptr [0x0044e12c] {30}
00414d41  PUSH ECX
00414d42  FSTP float ptr [ESP]
00414d45  CALL 0x00401127
00414d4a  ADD ESP,0x4
00414d4d  FSTP float ptr [ESP]
00414d50  MOV ECX,dword ptr [EBP + 0xfffff994]
00414d56  CALL 0x00401140
00414d5b  MOV EAX,dword ptr [EBP + 0xfffff994]
00414d61  MOV ECX,dword ptr [EAX + 0x3f8]
00414d67  MOV EDX,dword ptr [EBP + 0xfffff994]
00414d6d  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00414d74  FSTP float ptr [EAX + 0x164]
00414d7a  MOV ECX,dword ptr [EBP + 0xfffff994]
00414d80  XOR EDX,EDX
00414d82  MOV DL,byte ptr [ECX + 0x3a6]
00414d88  TEST EDX,EDX
00414d8a  JZ 0x00414df8
00414d8c  MOV EAX,dword ptr [EBP + 0xfffff994]
00414d92  MOV ECX,dword ptr [EAX + 0x3f8]
00414d98  PUSH ECX
00414d99  LEA EDX,[EBP + 0xfffffaf4]
00414d9f  PUSH EDX
00414da0  MOV ECX,dword ptr [EBP + 0xfffff994]
00414da6  CALL 0x00401136
00414dab  MOV ECX,dword ptr [EBP + 0xfffff994]
00414db1  MOV EDX,dword ptr [ECX + 0x3f8]
00414db7  MOV ECX,dword ptr [EBP + 0xfffff994]
00414dbd  MOV EDX,dword ptr [ECX + EDX*0x4 + 0xd8]
00414dc4  ADD EDX,0x158
00414dca  MOV ECX,dword ptr [EAX]
00414dcc  MOV dword ptr [EDX],ECX
00414dce  MOV ECX,dword ptr [EAX + 0x4]
00414dd1  MOV dword ptr [EDX + 0x4],ECX
00414dd4  MOV EAX,dword ptr [EAX + 0x8]
00414dd7  MOV dword ptr [EDX + 0x8],EAX
00414dda  MOV ECX,dword ptr [EBP + 0xfffff994]
00414de0  MOV EDX,dword ptr [ECX + 0x3f8]
00414de6  MOV EAX,dword ptr [EBP + 0xfffff994]
00414dec  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00414df3  CALL 0x0040102d
00414df8  PUSH 0x40000000
00414dfd  MOV ECX,dword ptr [EBP + 0xfffff994]
00414e03  MOV EDX,dword ptr [ECX + 0x3f4]
00414e09  MOV EAX,dword ptr [EBP + 0xfffff994]
00414e0f  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00414e16  MOV EDX,dword ptr [ECX + 0x164]
00414e1c  PUSH EDX
00414e1d  MOV EAX,dword ptr [EBP + 0xfffff994]
00414e23  MOV ECX,dword ptr [EAX + 0x3f4]
00414e29  MOV EDX,dword ptr [EBP + 0xfffff994]
00414e2f  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00414e36  MOV ECX,dword ptr [EBP + 0xfffff994]
00414e3c  FLD float ptr [EAX + 0x160]
00414e42  FSUB float ptr [ECX + 0x254]
00414e48  PUSH ECX
00414e49  FSTP float ptr [ESP]
00414e4c  MOV EDX,dword ptr [EBP + 0xfffff994]
00414e52  MOV EAX,dword ptr [EDX + 0x3f4]
00414e58  MOV ECX,dword ptr [EBP + 0xfffff994]
00414e5e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00414e65  MOV EAX,dword ptr [EBP + 0xfffff994]
00414e6b  FLD float ptr [EDX + 0x158]
00414e71  FSUB float ptr [EAX + 0x24c]
00414e77  PUSH ECX
00414e78  FSTP float ptr [ESP]
00414e7b  CALL 0x00401127
00414e80  ADD ESP,0x4
00414e83  FSTP float ptr [ESP]
00414e86  MOV ECX,dword ptr [EBP + 0xfffff994]
00414e8c  CALL 0x00401140
00414e91  MOV ECX,dword ptr [EBP + 0xfffff994]
00414e97  MOV EDX,dword ptr [ECX + 0x3f4]
00414e9d  MOV EAX,dword ptr [EBP + 0xfffff994]
00414ea3  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00414eaa  FSTP float ptr [ECX + 0x164]
00414eb0  PUSH 0x40000000
00414eb5  MOV EDX,dword ptr [EBP + 0xfffff994]
00414ebb  MOV EAX,dword ptr [EDX + 0x3f0]
00414ec1  MOV ECX,dword ptr [EBP + 0xfffff994]
00414ec7  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00414ece  MOV EAX,dword ptr [EDX + 0x164]
00414ed4  PUSH EAX
00414ed5  MOV ECX,dword ptr [EBP + 0xfffff994]
00414edb  MOV EDX,dword ptr [ECX + 0x3f0]
00414ee1  MOV EAX,dword ptr [EBP + 0xfffff994]
00414ee7  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00414eee  MOV EDX,dword ptr [EBP + 0xfffff994]
00414ef4  FLD float ptr [ECX + 0x160]
00414efa  FSUB float ptr [EDX + 0x254]
00414f00  PUSH ECX
00414f01  FSTP float ptr [ESP]
00414f04  MOV EAX,dword ptr [EBP + 0xfffff994]
00414f0a  MOV ECX,dword ptr [EAX + 0x3f0]
00414f10  MOV EDX,dword ptr [EBP + 0xfffff994]
00414f16  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00414f1d  MOV ECX,dword ptr [EBP + 0xfffff994]
00414f23  FLD float ptr [EAX + 0x158]
00414f29  FSUB float ptr [ECX + 0x24c]
00414f2f  PUSH ECX
00414f30  FSTP float ptr [ESP]
00414f33  CALL 0x00401127
00414f38  ADD ESP,0x4
00414f3b  FSTP float ptr [ESP]
00414f3e  MOV ECX,dword ptr [EBP + 0xfffff994]
00414f44  CALL 0x00401140
00414f49  MOV EDX,dword ptr [EBP + 0xfffff994]
00414f4f  MOV EAX,dword ptr [EDX + 0x3f0]
00414f55  MOV ECX,dword ptr [EBP + 0xfffff994]
00414f5b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00414f62  FSTP float ptr [EDX + 0x164]
00414f68  JMP 0x00418304
00414f6d  MOV EAX,dword ptr [EBP + 0xfffff994]
00414f73  CMP dword ptr [EAX + 0x418],0x5
00414f7a  JNZ 0x00415140
00414f80  MOV ECX,dword ptr [EBP + 0xfffff994]
00414f86  XOR EDX,EDX
00414f88  MOV DL,byte ptr [ECX + 0x3a6]
00414f8e  TEST EDX,EDX
00414f90  JZ 0x0041506b
00414f96  PUSH 0x40000000
00414f9b  MOV EAX,dword ptr [EBP + -0x34]
00414f9e  MOV ECX,dword ptr [EBP + 0xfffff994]
00414fa4  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00414fab  MOV EAX,dword ptr [EDX + 0x164]
00414fb1  PUSH EAX
00414fb2  MOV ECX,dword ptr [EBP + -0x34]
00414fb5  MOV EDX,dword ptr [EBP + 0xfffff994]
00414fbb  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00414fc2  MOV ECX,dword ptr [EAX + 0x160]
00414fc8  PUSH ECX
00414fc9  MOV EDX,dword ptr [EBP + -0x34]
00414fcc  MOV EAX,dword ptr [EBP + 0xfffff994]
00414fd2  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00414fd9  FLD float ptr [ECX + 0x158]
00414fdf  FSUB float ptr [0x0044e10c] {35}
00414fe5  PUSH ECX
00414fe6  FSTP float ptr [ESP]
00414fe9  CALL 0x00401127
00414fee  ADD ESP,0x4
00414ff1  FSTP float ptr [ESP]
00414ff4  MOV ECX,dword ptr [EBP + 0xfffff994]
00414ffa  CALL 0x00401140
00414fff  MOV EDX,dword ptr [EBP + -0x34]
00415002  MOV EAX,dword ptr [EBP + 0xfffff994]
00415008  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041500f  FSTP float ptr [ECX + 0x164]
00415015  MOV EDX,dword ptr [EBP + -0x34]
00415018  PUSH EDX
00415019  LEA EAX,[EBP + 0xfffffae8]
0041501f  PUSH EAX
00415020  MOV ECX,dword ptr [EBP + 0xfffff994]
00415026  CALL 0x00401136
0041502b  MOV ECX,dword ptr [EBP + -0x34]
0041502e  MOV EDX,dword ptr [EBP + 0xfffff994]
00415034  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041503b  ADD ECX,0x158
00415041  MOV EDX,dword ptr [EAX]
00415043  MOV dword ptr [ECX],EDX
00415045  MOV EDX,dword ptr [EAX + 0x4]
00415048  MOV dword ptr [ECX + 0x4],EDX
0041504b  MOV EAX,dword ptr [EAX + 0x8]
0041504e  MOV dword ptr [ECX + 0x8],EAX
00415051  MOV ECX,dword ptr [EBP + -0x34]
00415054  MOV EDX,dword ptr [EBP + 0xfffff994]
0041505a  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415061  CALL 0x00401212
00415066  JMP 0x0041513b
0041506b  PUSH 0x40000000
00415070  MOV EAX,dword ptr [EBP + -0x34]
00415073  MOV ECX,dword ptr [EBP + 0xfffff994]
00415079  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415080  MOV EAX,dword ptr [EDX + 0x164]
00415086  PUSH EAX
00415087  MOV ECX,dword ptr [EBP + -0x34]
0041508a  MOV EDX,dword ptr [EBP + 0xfffff994]
00415090  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415097  MOV ECX,dword ptr [EAX + 0x160]
0041509d  PUSH ECX
0041509e  MOV EDX,dword ptr [EBP + -0x34]
004150a1  MOV EAX,dword ptr [EBP + 0xfffff994]
004150a7  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004150ae  FLD float ptr [ECX + 0x158]
004150b4  FADD float ptr [0x0044e10c] {35}
004150ba  PUSH ECX
004150bb  FSTP float ptr [ESP]
004150be  CALL 0x00401127
004150c3  ADD ESP,0x4
004150c6  FSTP float ptr [ESP]
004150c9  MOV ECX,dword ptr [EBP + 0xfffff994]
004150cf  CALL 0x00401140
004150d4  MOV EDX,dword ptr [EBP + -0x34]
004150d7  MOV EAX,dword ptr [EBP + 0xfffff994]
004150dd  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004150e4  FSTP float ptr [ECX + 0x164]
004150ea  MOV EDX,dword ptr [EBP + -0x34]
004150ed  PUSH EDX
004150ee  LEA EAX,[EBP + 0xfffffadc]
004150f4  PUSH EAX
004150f5  MOV ECX,dword ptr [EBP + 0xfffff994]
004150fb  CALL 0x00401136
00415100  MOV ECX,dword ptr [EBP + -0x34]
00415103  MOV EDX,dword ptr [EBP + 0xfffff994]
00415109  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415110  ADD ECX,0x158
00415116  MOV EDX,dword ptr [EAX]
00415118  MOV dword ptr [ECX],EDX
0041511a  MOV EDX,dword ptr [EAX + 0x4]
0041511d  MOV dword ptr [ECX + 0x4],EDX
00415120  MOV EAX,dword ptr [EAX + 0x8]
00415123  MOV dword ptr [ECX + 0x8],EAX
00415126  MOV ECX,dword ptr [EBP + -0x34]
00415129  MOV EDX,dword ptr [EBP + 0xfffff994]
0041512f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415136  CALL 0x00401212
0041513b  JMP 0x00416ef5
00415140  MOV EAX,dword ptr [EBP + 0xfffff994]
00415146  MOV ECX,dword ptr [EBP + -0x34]
00415149  CMP ECX,dword ptr [EAX + 0x268]
0041514f  JZ 0x004156c9
00415155  MOV EDX,dword ptr [EBP + -0x34]
00415158  MOV EAX,dword ptr [EBP + 0xfffff994]
0041515e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00415165  FLD float ptr [ECX + 0x160]
0041516b  FCOMP float ptr [0x0044e0e0] {19}
00415171  FNSTSW AX
00415173  TEST AH,0x41
00415176  JNZ 0x00415211
0041517c  PUSH 0x40a00000
00415181  MOV EDX,dword ptr [EBP + -0x34]
00415184  MOV EAX,dword ptr [EBP + 0xfffff994]
0041518a  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00415191  MOV EDX,dword ptr [ECX + 0x164]
00415197  PUSH EDX
00415198  PUSH 0x0
0041519a  MOV ECX,dword ptr [EBP + 0xfffff994]
004151a0  CALL 0x00401140
004151a5  MOV EAX,dword ptr [EBP + -0x34]
004151a8  MOV ECX,dword ptr [EBP + 0xfffff994]
004151ae  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004151b5  FSTP float ptr [EDX + 0x164]
004151bb  MOV EAX,dword ptr [EBP + -0x34]
004151be  PUSH EAX
004151bf  LEA ECX,[EBP + 0xfffffad0]
004151c5  PUSH ECX
004151c6  MOV ECX,dword ptr [EBP + 0xfffff994]
004151cc  CALL 0x00401136
004151d1  MOV EDX,dword ptr [EBP + -0x34]
004151d4  MOV ECX,dword ptr [EBP + 0xfffff994]
004151da  MOV EDX,dword ptr [ECX + EDX*0x4 + 0xd8]
004151e1  ADD EDX,0x158
004151e7  MOV ECX,dword ptr [EAX]
004151e9  MOV dword ptr [EDX],ECX
004151eb  MOV ECX,dword ptr [EAX + 0x4]
004151ee  MOV dword ptr [EDX + 0x4],ECX
004151f1  MOV EAX,dword ptr [EAX + 0x8]
004151f4  MOV dword ptr [EDX + 0x8],EAX
004151f7  MOV ECX,dword ptr [EBP + -0x34]
004151fa  MOV EDX,dword ptr [EBP + 0xfffff994]
00415200  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415207  CALL 0x00401212
0041520c  JMP 0x00415673
00415211  MOV EAX,dword ptr [EBP + -0x34]
00415214  MOV ECX,dword ptr [EBP + 0xfffff994]
0041521a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415221  FLD float ptr [EDX + 0x160]
00415227  FCOMP float ptr [0x0044e0e4] {-19}
0041522d  FNSTSW AX
0041522f  TEST AH,0x1
00415232  JZ 0x004152d0
00415238  PUSH 0x40a00000
0041523d  MOV EAX,dword ptr [EBP + -0x34]
00415240  MOV ECX,dword ptr [EBP + 0xfffff994]
00415246  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041524d  MOV EAX,dword ptr [EDX + 0x164]
00415253  PUSH EAX
00415254  PUSH 0x4048f5c3
00415259  MOV ECX,dword ptr [EBP + 0xfffff994]
0041525f  CALL 0x00401140
00415264  MOV ECX,dword ptr [EBP + -0x34]
00415267  MOV EDX,dword ptr [EBP + 0xfffff994]
0041526d  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415274  FSTP float ptr [EAX + 0x164]
0041527a  MOV ECX,dword ptr [EBP + -0x34]
0041527d  PUSH ECX
0041527e  LEA EDX,[EBP + 0xfffffac4]
00415284  PUSH EDX
00415285  MOV ECX,dword ptr [EBP + 0xfffff994]
0041528b  CALL 0x00401136
00415290  MOV ECX,dword ptr [EBP + -0x34]
00415293  MOV EDX,dword ptr [EBP + 0xfffff994]
00415299  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004152a0  ADD ECX,0x158
004152a6  MOV EDX,dword ptr [EAX]
004152a8  MOV dword ptr [ECX],EDX
004152aa  MOV EDX,dword ptr [EAX + 0x4]
004152ad  MOV dword ptr [ECX + 0x4],EDX
004152b0  MOV EAX,dword ptr [EAX + 0x8]
004152b3  MOV dword ptr [ECX + 0x8],EAX
004152b6  MOV ECX,dword ptr [EBP + -0x34]
004152b9  MOV EDX,dword ptr [EBP + 0xfffff994]
004152bf  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004152c6  CALL 0x00401212
004152cb  JMP 0x00415673
004152d0  MOV EAX,dword ptr [EBP + -0x34]
004152d3  MOV ECX,dword ptr [EBP + 0xfffff994]
004152d9  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004152e0  FLD float ptr [EDX + 0x158]
004152e6  FCOMP float ptr [0x0044e130] {-35}
004152ec  FNSTSW AX
004152ee  TEST AH,0x1
004152f1  JZ 0x0041538f
004152f7  PUSH 0x40a00000
004152fc  MOV EAX,dword ptr [EBP + -0x34]
004152ff  MOV ECX,dword ptr [EBP + 0xfffff994]
00415305  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041530c  MOV EAX,dword ptr [EDX + 0x164]
00415312  PUSH EAX
00415313  PUSH 0xbfc8f5c3
00415318  MOV ECX,dword ptr [EBP + 0xfffff994]
0041531e  CALL 0x00401140
00415323  MOV ECX,dword ptr [EBP + -0x34]
00415326  MOV EDX,dword ptr [EBP + 0xfffff994]
0041532c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415333  FSTP float ptr [EAX + 0x164]
00415339  MOV ECX,dword ptr [EBP + -0x34]
0041533c  PUSH ECX
0041533d  LEA EDX,[EBP + 0xfffffab8]
00415343  PUSH EDX
00415344  MOV ECX,dword ptr [EBP + 0xfffff994]
0041534a  CALL 0x00401136
0041534f  MOV ECX,dword ptr [EBP + -0x34]
00415352  MOV EDX,dword ptr [EBP + 0xfffff994]
00415358  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041535f  ADD ECX,0x158
00415365  MOV EDX,dword ptr [EAX]
00415367  MOV dword ptr [ECX],EDX
00415369  MOV EDX,dword ptr [EAX + 0x4]
0041536c  MOV dword ptr [ECX + 0x4],EDX
0041536f  MOV EAX,dword ptr [EAX + 0x8]
00415372  MOV dword ptr [ECX + 0x8],EAX
00415375  MOV ECX,dword ptr [EBP + -0x34]
00415378  MOV EDX,dword ptr [EBP + 0xfffff994]
0041537e  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415385  CALL 0x00401212
0041538a  JMP 0x00415673
0041538f  MOV EAX,dword ptr [EBP + -0x34]
00415392  MOV ECX,dword ptr [EBP + 0xfffff994]
00415398  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041539f  FLD float ptr [EDX + 0x158]
004153a5  FCOMP float ptr [0x0044e10c] {35}
004153ab  FNSTSW AX
004153ad  TEST AH,0x41
004153b0  JNZ 0x0041544e
004153b6  PUSH 0x40a00000
004153bb  MOV EAX,dword ptr [EBP + -0x34]
004153be  MOV ECX,dword ptr [EBP + 0xfffff994]
004153c4  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004153cb  MOV EAX,dword ptr [EDX + 0x164]
004153d1  PUSH EAX
004153d2  PUSH 0x3fc8f5c3
004153d7  MOV ECX,dword ptr [EBP + 0xfffff994]
004153dd  CALL 0x00401140
004153e2  MOV ECX,dword ptr [EBP + -0x34]
004153e5  MOV EDX,dword ptr [EBP + 0xfffff994]
004153eb  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004153f2  FSTP float ptr [EAX + 0x164]
004153f8  MOV ECX,dword ptr [EBP + -0x34]
004153fb  PUSH ECX
004153fc  LEA EDX,[EBP + 0xfffffaac]
00415402  PUSH EDX
00415403  MOV ECX,dword ptr [EBP + 0xfffff994]
00415409  CALL 0x00401136
0041540e  MOV ECX,dword ptr [EBP + -0x34]
00415411  MOV EDX,dword ptr [EBP + 0xfffff994]
00415417  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041541e  ADD ECX,0x158
00415424  MOV EDX,dword ptr [EAX]
00415426  MOV dword ptr [ECX],EDX
00415428  MOV EDX,dword ptr [EAX + 0x4]
0041542b  MOV dword ptr [ECX + 0x4],EDX
0041542e  MOV EAX,dword ptr [EAX + 0x8]
00415431  MOV dword ptr [ECX + 0x8],EAX
00415434  MOV ECX,dword ptr [EBP + -0x34]
00415437  MOV EDX,dword ptr [EBP + 0xfffff994]
0041543d  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415444  CALL 0x00401212
00415449  JMP 0x00415673
0041544e  FLD float ptr [EBP + -0x30]
00415451  FCOMP float ptr [0x0044e124] {10}
00415457  FNSTSW AX
00415459  TEST AH,0x1
0041545c  JZ 0x0041546a
0041545e  MOV dword ptr [EBP + 0xfffff964],0x1
00415468  JMP 0x00415474
0041546a  MOV dword ptr [EBP + 0xfffff964],0x0
00415474  MOV EAX,dword ptr [EBP + 0xfffff994]
0041547a  XOR ECX,ECX
0041547c  CMP dword ptr [EAX + 0x3b0],0x0
00415483  SETZ CL
00415486  MOV EDX,dword ptr [EBP + -0x4]
00415489  MOV EAX,dword ptr [EBP + 0xfffff994]
0041548f  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00415496  XOR EAX,EAX
00415498  CMP dword ptr [EDX + 0x190],0x3
0041549f  SETZ AL
004154a2  AND ECX,EAX
004154a4  MOV EDX,dword ptr [EBP + -0x4]
004154a7  MOV EAX,dword ptr [EBP + 0xfffff994]
004154ad  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
004154b4  XOR EAX,EAX
004154b6  CMP dword ptr [EDX + 0x190],0x4
004154bd  SETZ AL
004154c0  OR ECX,EAX
004154c2  AND ECX,dword ptr [EBP + 0xfffff964]
004154c8  TEST ECX,ECX
004154ca  JZ 0x0041550c
004154cc  MOV ECX,dword ptr [EBP + -0x34]
004154cf  MOV EDX,dword ptr [EBP + 0xfffff994]
004154d5  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004154dc  MOV ECX,dword ptr [EBP + 0xfffff994]
004154e2  FLD float ptr [ECX + 0x54]
004154e5  FMUL float ptr [0x0044e114] {2}
004154eb  FADD float ptr [EAX + 0x164]
004154f1  MOV EDX,dword ptr [EBP + -0x34]
004154f4  MOV EAX,dword ptr [EBP + 0xfffff994]
004154fa  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00415501  FSTP float ptr [ECX + 0x164]
00415507  JMP 0x00415673
0041550c  MOV EDX,dword ptr [EBP + 0xfffff994]
00415512  MOV EAX,dword ptr [EDX + 0x404]
00415518  MOV ECX,dword ptr [EBP + 0xfffff994]
0041551e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415525  XOR EAX,EAX
00415527  MOV AL,byte ptr [EDX + 0x154]
0041552d  TEST EAX,EAX
0041552f  JZ 0x004155df
00415535  MOV ECX,dword ptr [EBP + 0xfffff994]
0041553b  FLD float ptr [0x0044e0d4] {5}
00415541  FDIV float ptr [ECX + 0x400]
00415547  PUSH ECX
00415548  FSTP float ptr [ESP]
0041554b  MOV EDX,dword ptr [EBP + -0x34]
0041554e  MOV EAX,dword ptr [EBP + 0xfffff994]
00415554  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041555b  MOV EDX,dword ptr [ECX + 0x164]
00415561  PUSH EDX
00415562  MOV EAX,dword ptr [EBP + -0x34]
00415565  MOV ECX,dword ptr [EBP + 0xfffff994]
0041556b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415572  MOV EAX,dword ptr [EBP + 0xfffff994]
00415578  FLD float ptr [EDX + 0x160]
0041557e  FSUB float ptr [EAX + 0x254]
00415584  PUSH ECX
00415585  FSTP float ptr [ESP]
00415588  MOV ECX,dword ptr [EBP + -0x34]
0041558b  MOV EDX,dword ptr [EBP + 0xfffff994]
00415591  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415598  MOV ECX,dword ptr [EBP + 0xfffff994]
0041559e  FLD float ptr [EAX + 0x158]
004155a4  FSUB float ptr [ECX + 0x24c]
004155aa  PUSH ECX
004155ab  FSTP float ptr [ESP]
004155ae  CALL 0x00401127
004155b3  ADD ESP,0x4
004155b6  FSTP float ptr [ESP]
004155b9  MOV ECX,dword ptr [EBP + 0xfffff994]
004155bf  CALL 0x00401140
004155c4  MOV EDX,dword ptr [EBP + -0x34]
004155c7  MOV EAX,dword ptr [EBP + 0xfffff994]
004155cd  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004155d4  FSTP float ptr [ECX + 0x164]
004155da  JMP 0x00415673
004155df  PUSH 0x41200000
004155e4  MOV EDX,dword ptr [EBP + -0x34]
004155e7  MOV EAX,dword ptr [EBP + 0xfffff994]
004155ed  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004155f4  MOV EDX,dword ptr [ECX + 0x164]
004155fa  PUSH EDX
004155fb  MOV EAX,dword ptr [EBP + -0x34]
004155fe  MOV ECX,dword ptr [EBP + 0xfffff994]
00415604  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041560b  MOV EAX,dword ptr [EBP + 0xfffff994]
00415611  FLD float ptr [EDX + 0x160]
00415617  FSUB float ptr [EAX + 0x254]
0041561d  PUSH ECX
0041561e  FSTP float ptr [ESP]
00415621  MOV ECX,dword ptr [EBP + -0x34]
00415624  MOV EDX,dword ptr [EBP + 0xfffff994]
0041562a  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415631  MOV ECX,dword ptr [EBP + 0xfffff994]
00415637  FLD float ptr [EAX + 0x158]
0041563d  FSUB float ptr [ECX + 0x24c]
00415643  PUSH ECX
00415644  FSTP float ptr [ESP]
00415647  CALL 0x00401127
0041564c  ADD ESP,0x4
0041564f  FSTP float ptr [ESP]
00415652  MOV ECX,dword ptr [EBP + 0xfffff994]
00415658  CALL 0x00401140
0041565d  MOV EDX,dword ptr [EBP + -0x34]
00415660  MOV EAX,dword ptr [EBP + 0xfffff994]
00415666  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041566d  FSTP float ptr [ECX + 0x164]
00415673  MOV EDX,dword ptr [EBP + -0x34]
00415676  PUSH EDX
00415677  LEA EAX,[EBP + 0xfffffaa0]
0041567d  PUSH EAX
0041567e  MOV ECX,dword ptr [EBP + 0xfffff994]
00415684  CALL 0x00401136
00415689  MOV ECX,dword ptr [EBP + -0x34]
0041568c  MOV EDX,dword ptr [EBP + 0xfffff994]
00415692  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415699  ADD ECX,0x158
0041569f  MOV EDX,dword ptr [EAX]
004156a1  MOV dword ptr [ECX],EDX
004156a3  MOV EDX,dword ptr [EAX + 0x4]
004156a6  MOV dword ptr [ECX + 0x4],EDX
004156a9  MOV EAX,dword ptr [EAX + 0x8]
004156ac  MOV dword ptr [ECX + 0x8],EAX
004156af  MOV ECX,dword ptr [EBP + -0x34]
004156b2  MOV EDX,dword ptr [EBP + 0xfffff994]
004156b8  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004156bf  CALL 0x00401212
004156c4  JMP 0x00416ef5
004156c9  MOV EAX,dword ptr [EBP + -0x34]
004156cc  MOV ECX,dword ptr [EBP + 0xfffff994]
004156d2  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004156d9  CMP dword ptr [EDX + 0x190],0x4
004156e0  JGE 0x00416ef5
004156e6  MOV EAX,dword ptr [EBP + -0x34]
004156e9  MOV ECX,dword ptr [EBP + 0xfffff994]
004156ef  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004156f6  FLD float ptr [EDX + 0x158]
004156fc  FADD float ptr [0x0044e154] {36}
00415702  MOV EAX,dword ptr [EBP + -0x34]
00415705  MOV ECX,dword ptr [EBP + 0xfffff994]
0041570b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415712  FLD float ptr [EDX + 0x158]
00415718  FADD float ptr [0x0044e154] {36}
0041571e  FMULP
00415720  MOV EAX,dword ptr [EBP + -0x34]
00415723  MOV ECX,dword ptr [EBP + 0xfffff994]
00415729  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415730  MOV EAX,dword ptr [EBP + -0x34]
00415733  MOV ECX,dword ptr [EBP + 0xfffff994]
00415739  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415740  FLD float ptr [EDX + 0x160]
00415746  FMUL float ptr [EAX + 0x160]
0041574c  FADDP
0041574e  FCOMP float ptr [0x0044e10c] {35}
00415754  FNSTSW AX
00415756  TEST AH,0x1
00415759  JZ 0x00415767
0041575b  MOV dword ptr [EBP + 0xfffff960],0x1
00415765  JMP 0x00415771
00415767  MOV dword ptr [EBP + 0xfffff960],0x0
00415771  MOV ECX,dword ptr [EBP + 0xfffff994]
00415777  XOR EDX,EDX
00415779  MOV DL,byte ptr [ECX + 0x3a6]
0041577f  AND EDX,dword ptr [EBP + 0xfffff960]
00415785  TEST EDX,EDX
00415787  JZ 0x00415873
0041578d  MOV EAX,dword ptr [EBP + 0xfffff994]
00415793  FLD float ptr [0x0044e0d4] {5}
00415799  FDIV float ptr [EAX + 0x400]
0041579f  PUSH ECX
004157a0  FSTP float ptr [ESP]
004157a3  MOV ECX,dword ptr [EBP + -0x34]
004157a6  MOV EDX,dword ptr [EBP + 0xfffff994]
004157ac  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004157b3  MOV ECX,dword ptr [EAX + 0x164]
004157b9  PUSH ECX
004157ba  MOV EDX,dword ptr [EBP + -0x34]
004157bd  MOV EAX,dword ptr [EBP + 0xfffff994]
004157c3  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004157ca  MOV EDX,dword ptr [ECX + 0x160]
004157d0  PUSH EDX
004157d1  MOV EAX,dword ptr [EBP + -0x34]
004157d4  MOV ECX,dword ptr [EBP + 0xfffff994]
004157da  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004157e1  FLD float ptr [EDX + 0x158]
004157e7  FSUB float ptr [0x0044e12c] {30}
004157ed  PUSH ECX
004157ee  FSTP float ptr [ESP]
004157f1  CALL 0x00401127
004157f6  ADD ESP,0x4
004157f9  FSTP float ptr [ESP]
004157fc  MOV ECX,dword ptr [EBP + 0xfffff994]
00415802  CALL 0x00401140
00415807  MOV EAX,dword ptr [EBP + -0x34]
0041580a  MOV ECX,dword ptr [EBP + 0xfffff994]
00415810  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415817  FSTP float ptr [EDX + 0x164]
0041581d  MOV EAX,dword ptr [EBP + -0x34]
00415820  PUSH EAX
00415821  LEA ECX,[EBP + 0xfffffa94]
00415827  PUSH ECX
00415828  MOV ECX,dword ptr [EBP + 0xfffff994]
0041582e  CALL 0x00401136
00415833  MOV EDX,dword ptr [EBP + -0x34]
00415836  MOV ECX,dword ptr [EBP + 0xfffff994]
0041583c  MOV EDX,dword ptr [ECX + EDX*0x4 + 0xd8]
00415843  ADD EDX,0x158
00415849  MOV ECX,dword ptr [EAX]
0041584b  MOV dword ptr [EDX],ECX
0041584d  MOV ECX,dword ptr [EAX + 0x4]
00415850  MOV dword ptr [EDX + 0x4],ECX
00415853  MOV EAX,dword ptr [EAX + 0x8]
00415856  MOV dword ptr [EDX + 0x8],EAX
00415859  MOV ECX,dword ptr [EBP + -0x34]
0041585c  MOV EDX,dword ptr [EBP + 0xfffff994]
00415862  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415869  CALL 0x0040102d
0041586e  JMP 0x00416ef5
00415873  MOV EAX,dword ptr [EBP + -0x34]
00415876  MOV ECX,dword ptr [EBP + 0xfffff994]
0041587c  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415883  FLD float ptr [EDX + 0x158]
00415889  FSUB float ptr [0x0044e154] {36}
0041588f  MOV EAX,dword ptr [EBP + -0x34]
00415892  MOV ECX,dword ptr [EBP + 0xfffff994]
00415898  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041589f  FLD float ptr [EDX + 0x158]
004158a5  FSUB float ptr [0x0044e154] {36}
004158ab  FMULP
004158ad  MOV EAX,dword ptr [EBP + -0x34]
004158b0  MOV ECX,dword ptr [EBP + 0xfffff994]
004158b6  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004158bd  MOV EAX,dword ptr [EBP + -0x34]
004158c0  MOV ECX,dword ptr [EBP + 0xfffff994]
004158c6  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
004158cd  FLD float ptr [EDX + 0x160]
004158d3  FMUL float ptr [EAX + 0x160]
004158d9  FADDP
004158db  FCOMP float ptr [0x0044e10c] {35}
004158e1  FNSTSW AX
004158e3  TEST AH,0x1
004158e6  JZ 0x004158f4
004158e8  MOV dword ptr [EBP + 0xfffff95c],0x1
004158f2  JMP 0x004158fe
004158f4  MOV dword ptr [EBP + 0xfffff95c],0x0
004158fe  MOV ECX,dword ptr [EBP + 0xfffff994]
00415904  XOR EDX,EDX
00415906  MOV DL,byte ptr [ECX + 0x3a6]
0041590c  NEG EDX
0041590e  SBB EDX,EDX
00415910  INC EDX
00415911  AND EDX,dword ptr [EBP + 0xfffff95c]
00415917  TEST EDX,EDX
00415919  JZ 0x00415a05
0041591f  MOV EAX,dword ptr [EBP + 0xfffff994]
00415925  FLD float ptr [0x0044e0d4] {5}
0041592b  FDIV float ptr [EAX + 0x400]
00415931  PUSH ECX
00415932  FSTP float ptr [ESP]
00415935  MOV ECX,dword ptr [EBP + -0x34]
00415938  MOV EDX,dword ptr [EBP + 0xfffff994]
0041593e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415945  MOV ECX,dword ptr [EAX + 0x164]
0041594b  PUSH ECX
0041594c  MOV EDX,dword ptr [EBP + -0x34]
0041594f  MOV EAX,dword ptr [EBP + 0xfffff994]
00415955  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041595c  MOV EDX,dword ptr [ECX + 0x160]
00415962  PUSH EDX
00415963  MOV EAX,dword ptr [EBP + -0x34]
00415966  MOV ECX,dword ptr [EBP + 0xfffff994]
0041596c  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415973  FLD float ptr [EDX + 0x158]
00415979  FADD float ptr [0x0044e12c] {30}
0041597f  PUSH ECX
00415980  FSTP float ptr [ESP]
00415983  CALL 0x00401127
00415988  ADD ESP,0x4
0041598b  FSTP float ptr [ESP]
0041598e  MOV ECX,dword ptr [EBP + 0xfffff994]
00415994  CALL 0x00401140
00415999  MOV EAX,dword ptr [EBP + -0x34]
0041599c  MOV ECX,dword ptr [EBP + 0xfffff994]
004159a2  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004159a9  FSTP float ptr [EDX + 0x164]
004159af  MOV EAX,dword ptr [EBP + -0x34]
004159b2  PUSH EAX
004159b3  LEA ECX,[EBP + 0xfffffa88]
004159b9  PUSH ECX
004159ba  MOV ECX,dword ptr [EBP + 0xfffff994]
004159c0  CALL 0x00401136
004159c5  MOV EDX,dword ptr [EBP + -0x34]
004159c8  MOV ECX,dword ptr [EBP + 0xfffff994]
004159ce  MOV EDX,dword ptr [ECX + EDX*0x4 + 0xd8]
004159d5  ADD EDX,0x158
004159db  MOV ECX,dword ptr [EAX]
004159dd  MOV dword ptr [EDX],ECX
004159df  MOV ECX,dword ptr [EAX + 0x4]
004159e2  MOV dword ptr [EDX + 0x4],ECX
004159e5  MOV EAX,dword ptr [EAX + 0x8]
004159e8  MOV dword ptr [EDX + 0x8],EAX
004159eb  MOV ECX,dword ptr [EBP + -0x34]
004159ee  MOV EDX,dword ptr [EBP + 0xfffff994]
004159f4  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004159fb  CALL 0x0040102d
00415a00  JMP 0x00416ef5
00415a05  MOV EAX,dword ptr [EBP + -0x34]
00415a08  MOV ECX,dword ptr [EBP + 0xfffff994]
00415a0e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415a15  FLD float ptr [EDX + 0x158]
00415a1b  FADD float ptr [0x0044e158] {34}
00415a21  MOV EAX,dword ptr [EBP + -0x34]
00415a24  MOV ECX,dword ptr [EBP + 0xfffff994]
00415a2a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415a31  FLD float ptr [EDX + 0x158]
00415a37  FADD float ptr [0x0044e158] {34}
00415a3d  FMULP
00415a3f  MOV EAX,dword ptr [EBP + -0x34]
00415a42  MOV ECX,dword ptr [EBP + 0xfffff994]
00415a48  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415a4f  MOV EAX,dword ptr [EBP + -0x34]
00415a52  MOV ECX,dword ptr [EBP + 0xfffff994]
00415a58  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415a5f  FLD float ptr [EDX + 0x160]
00415a65  FMUL float ptr [EAX + 0x160]
00415a6b  FADDP
00415a6d  FCOMP float ptr [0x0044e12c] {30}
00415a73  FNSTSW AX
00415a75  TEST AH,0x1
00415a78  JZ 0x00415a86
00415a7a  MOV dword ptr [EBP + 0xfffff958],0x1
00415a84  JMP 0x00415a90
00415a86  MOV dword ptr [EBP + 0xfffff958],0x0
00415a90  MOV ECX,dword ptr [EBP + 0xfffff994]
00415a96  XOR EDX,EDX
00415a98  MOV DL,byte ptr [ECX + 0x3a6]
00415a9e  AND EDX,dword ptr [EBP + 0xfffff958]
00415aa4  TEST EDX,EDX
00415aa6  JZ 0x00415b7c
00415aac  MOV EAX,dword ptr [EBP + -0x34]
00415aaf  MOV ECX,dword ptr [EBP + 0xfffff994]
00415ab5  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415abc  MOV EAX,dword ptr [EDX + 0x160]
00415ac2  PUSH EAX
00415ac3  MOV ECX,dword ptr [EBP + -0x34]
00415ac6  MOV EDX,dword ptr [EBP + 0xfffff994]
00415acc  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415ad3  FLD float ptr [EAX + 0x158]
00415ad9  FADD float ptr [0x0044e15c] {37}
00415adf  PUSH ECX
00415ae0  FSTP float ptr [ESP]
00415ae3  CALL 0x00401127
00415ae8  ADD ESP,0x8
00415aeb  MOV ECX,dword ptr [EBP + -0x34]
00415aee  MOV EDX,dword ptr [EBP + 0xfffff994]
00415af4  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415afb  FSTP float ptr [EAX + 0x164]
00415b01  PUSH 0x1
00415b03  MOV ECX,dword ptr [EBP + 0xfffff994]
00415b09  MOV ECX,dword ptr [ECX + 0xc0]
00415b0f  CALL 0x00401258
00415b14  MOV EDX,dword ptr [EBP + -0x34]
00415b17  MOV EAX,dword ptr [EBP + 0xfffff994]
00415b1d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00415b24  MOV dword ptr [ECX + 0x190],0x6
00415b2e  MOV EDX,dword ptr [EBP + -0x34]
00415b31  MOV EAX,dword ptr [EBP + 0xfffff994]
00415b37  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00415b3e  CALL 0x00401091
00415b43  MOV ECX,dword ptr [EBP + -0x34]
00415b46  MOV EDX,dword ptr [EBP + 0xfffff994]
00415b4c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415b53  MOV dword ptr [EAX + 0x198],0x0
00415b5d  MOV ECX,dword ptr [EBP + -0x34]
00415b60  MOV EDX,dword ptr [EBP + 0xfffff994]
00415b66  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415b6d  MOV dword ptr [EAX + 0x18c],0x41400000
00415b77  JMP 0x00416ef5
00415b7c  MOV ECX,dword ptr [EBP + -0x34]
00415b7f  MOV EDX,dword ptr [EBP + 0xfffff994]
00415b85  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415b8c  FLD float ptr [EAX + 0x158]
00415b92  FSUB float ptr [0x0044e158] {34}
00415b98  MOV ECX,dword ptr [EBP + -0x34]
00415b9b  MOV EDX,dword ptr [EBP + 0xfffff994]
00415ba1  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415ba8  FLD float ptr [EAX + 0x158]
00415bae  FSUB float ptr [0x0044e158] {34}
00415bb4  FMULP
00415bb6  MOV ECX,dword ptr [EBP + -0x34]
00415bb9  MOV EDX,dword ptr [EBP + 0xfffff994]
00415bbf  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415bc6  MOV ECX,dword ptr [EBP + -0x34]
00415bc9  MOV EDX,dword ptr [EBP + 0xfffff994]
00415bcf  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415bd6  FLD float ptr [EAX + 0x160]
00415bdc  FMUL float ptr [ECX + 0x160]
00415be2  FADDP
00415be4  FCOMP float ptr [0x0044e12c] {30}
00415bea  FNSTSW AX
00415bec  TEST AH,0x1
00415bef  JZ 0x00415bfd
00415bf1  MOV dword ptr [EBP + 0xfffff954],0x1
00415bfb  JMP 0x00415c07
00415bfd  MOV dword ptr [EBP + 0xfffff954],0x0
00415c07  MOV EDX,dword ptr [EBP + 0xfffff994]
00415c0d  XOR EAX,EAX
00415c0f  MOV AL,byte ptr [EDX + 0x3a6]
00415c15  NEG EAX
00415c17  SBB EAX,EAX
00415c19  INC EAX
00415c1a  AND EAX,dword ptr [EBP + 0xfffff954]
00415c20  TEST EAX,EAX
00415c22  JZ 0x00415cf8
00415c28  MOV ECX,dword ptr [EBP + -0x34]
00415c2b  MOV EDX,dword ptr [EBP + 0xfffff994]
00415c31  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415c38  MOV ECX,dword ptr [EAX + 0x160]
00415c3e  PUSH ECX
00415c3f  MOV EDX,dword ptr [EBP + -0x34]
00415c42  MOV EAX,dword ptr [EBP + 0xfffff994]
00415c48  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00415c4f  FLD float ptr [ECX + 0x158]
00415c55  FSUB float ptr [0x0044e15c] {37}
00415c5b  PUSH ECX
00415c5c  FSTP float ptr [ESP]
00415c5f  CALL 0x00401127
00415c64  ADD ESP,0x8
00415c67  MOV EDX,dword ptr [EBP + -0x34]
00415c6a  MOV EAX,dword ptr [EBP + 0xfffff994]
00415c70  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00415c77  FSTP float ptr [ECX + 0x164]
00415c7d  PUSH 0x1
00415c7f  MOV EDX,dword ptr [EBP + 0xfffff994]
00415c85  MOV ECX,dword ptr [EDX + 0xc0]
00415c8b  CALL 0x00401258
00415c90  MOV EAX,dword ptr [EBP + -0x34]
00415c93  MOV ECX,dword ptr [EBP + 0xfffff994]
00415c99  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415ca0  MOV dword ptr [EDX + 0x190],0x6
00415caa  MOV EAX,dword ptr [EBP + -0x34]
00415cad  MOV ECX,dword ptr [EBP + 0xfffff994]
00415cb3  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415cba  CALL 0x00401091
00415cbf  MOV EDX,dword ptr [EBP + -0x34]
00415cc2  MOV EAX,dword ptr [EBP + 0xfffff994]
00415cc8  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00415ccf  MOV dword ptr [ECX + 0x198],0x0
00415cd9  MOV EDX,dword ptr [EBP + -0x34]
00415cdc  MOV EAX,dword ptr [EBP + 0xfffff994]
00415ce2  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00415ce9  MOV dword ptr [ECX + 0x18c],0x41400000
00415cf3  JMP 0x00416ef5
00415cf8  MOV EDX,dword ptr [EBP + 0xfffff994]
00415cfe  XOR EAX,EAX
00415d00  MOV AL,byte ptr [EDX + 0x3a6]
00415d06  TEST EAX,EAX
00415d08  JZ 0x00416604
00415d0e  MOV ECX,dword ptr [EBP + -0x2c]
00415d11  MOV EDX,dword ptr [EBP + 0xfffff994]
00415d17  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415d1e  MOV ECX,dword ptr [EBP + -0x34]
00415d21  MOV EDX,dword ptr [EBP + 0xfffff994]
00415d27  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415d2e  FLD float ptr [EAX + 0x158]
00415d34  FSUB float ptr [ECX + 0x158]
00415d3a  FCOMP float ptr [0x0044e148] {-15}
00415d40  FNSTSW AX
00415d42  TEST AH,0x1
00415d45  JZ 0x00415d53
00415d47  MOV dword ptr [EBP + 0xfffff950],0x1
00415d51  JMP 0x00415d5d
00415d53  MOV dword ptr [EBP + 0xfffff950],0x0
00415d5d  MOV EDX,dword ptr [EBP + -0x4]
00415d60  MOV EAX,dword ptr [EBP + 0xfffff994]
00415d66  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00415d6d  MOV EDX,dword ptr [EBP + -0x34]
00415d70  MOV EAX,dword ptr [EBP + 0xfffff994]
00415d76  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00415d7d  FLD float ptr [ECX + 0x158]
00415d83  FCOMP float ptr [EDX + 0x158]
00415d89  FNSTSW AX
00415d8b  TEST AH,0x1
00415d8e  JZ 0x00415d9c
00415d90  MOV dword ptr [EBP + 0xfffff94c],0x1
00415d9a  JMP 0x00415da6
00415d9c  MOV dword ptr [EBP + 0xfffff94c],0x0
00415da6  MOV EAX,dword ptr [EBP + -0x2c]
00415da9  MOV ECX,dword ptr [EBP + 0xfffff994]
00415daf  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415db6  MOV EAX,dword ptr [EBP + -0x4]
00415db9  MOV ECX,dword ptr [EBP + 0xfffff994]
00415dbf  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415dc6  FLD float ptr [EDX + 0x158]
00415dcc  FCOMP float ptr [EAX + 0x158]
00415dd2  FNSTSW AX
00415dd4  TEST AH,0x1
00415dd7  JZ 0x00415de5
00415dd9  MOV dword ptr [EBP + 0xfffff948],0x1
00415de3  JMP 0x00415def
00415de5  MOV dword ptr [EBP + 0xfffff948],0x0
00415def  MOV ECX,dword ptr [EBP + -0x14]
00415df2  MOV EDX,dword ptr [EBP + 0xfffff994]
00415df8  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415dff  MOV ECX,dword ptr [EBP + -0x34]
00415e02  MOV EDX,dword ptr [EBP + 0xfffff994]
00415e08  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415e0f  FLD float ptr [EAX + 0x158]
00415e15  FCOMP float ptr [ECX + 0x158]
00415e1b  FNSTSW AX
00415e1d  TEST AH,0x1
00415e20  JZ 0x00415e2e
00415e22  MOV dword ptr [EBP + 0xfffff944],0x1
00415e2c  JMP 0x00415e38
00415e2e  MOV dword ptr [EBP + 0xfffff944],0x0
00415e38  MOV EDX,dword ptr [EBP + -0x2c]
00415e3b  MOV EAX,dword ptr [EBP + 0xfffff994]
00415e41  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00415e48  MOV EDX,dword ptr [EBP + -0x14]
00415e4b  MOV EAX,dword ptr [EBP + 0xfffff994]
00415e51  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00415e58  FLD float ptr [ECX + 0x158]
00415e5e  FCOMP float ptr [EDX + 0x158]
00415e64  FNSTSW AX
00415e66  TEST AH,0x1
00415e69  JZ 0x00415e77
00415e6b  MOV dword ptr [EBP + 0xfffff940],0x1
00415e75  JMP 0x00415e81
00415e77  MOV dword ptr [EBP + 0xfffff940],0x0
00415e81  MOV EAX,dword ptr [EBP + -0x10]
00415e84  MOV ECX,dword ptr [EBP + 0xfffff994]
00415e8a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415e91  MOV EAX,dword ptr [EBP + -0x34]
00415e94  MOV ECX,dword ptr [EBP + 0xfffff994]
00415e9a  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415ea1  FLD float ptr [EDX + 0x158]
00415ea7  FCOMP float ptr [EAX + 0x158]
00415ead  FNSTSW AX
00415eaf  TEST AH,0x1
00415eb2  JZ 0x00415ec0
00415eb4  MOV dword ptr [EBP + 0xfffff93c],0x1
00415ebe  JMP 0x00415eca
00415ec0  MOV dword ptr [EBP + 0xfffff93c],0x0
00415eca  MOV ECX,dword ptr [EBP + -0x2c]
00415ecd  MOV EDX,dword ptr [EBP + 0xfffff994]
00415ed3  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415eda  MOV ECX,dword ptr [EBP + -0x10]
00415edd  MOV EDX,dword ptr [EBP + 0xfffff994]
00415ee3  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415eea  FLD float ptr [EAX + 0x158]
00415ef0  FCOMP float ptr [ECX + 0x158]
00415ef6  FNSTSW AX
00415ef8  TEST AH,0x1
00415efb  JZ 0x00415f09
00415efd  MOV dword ptr [EBP + 0xfffff938],0x1
00415f07  JMP 0x00415f13
00415f09  MOV dword ptr [EBP + 0xfffff938],0x0
00415f13  MOV EDX,dword ptr [EBP + 0xfffff94c]
00415f19  AND EDX,dword ptr [EBP + 0xfffff948]
00415f1f  MOV EAX,dword ptr [EBP + 0xfffff944]
00415f25  AND EAX,dword ptr [EBP + 0xfffff940]
00415f2b  OR EDX,EAX
00415f2d  MOV ECX,dword ptr [EBP + 0xfffff93c]
00415f33  AND ECX,dword ptr [EBP + 0xfffff938]
00415f39  OR EDX,ECX
00415f3b  NEG EDX
00415f3d  SBB EDX,EDX
00415f3f  INC EDX
00415f40  MOV EAX,dword ptr [EBP + 0xfffff950]
00415f46  AND EAX,EDX
00415f48  TEST EAX,EAX
00415f4a  JZ 0x0041617c
00415f50  PUSH 0x1
00415f52  MOV ECX,dword ptr [EBP + 0xfffff994]
00415f58  MOV ECX,dword ptr [ECX + 0xc0]
00415f5e  CALL 0x00401258
00415f63  MOV EDX,dword ptr [EBP + -0x34]
00415f66  MOV EAX,dword ptr [EBP + 0xfffff994]
00415f6c  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00415f73  MOV dword ptr [ECX + 0x198],0x0
00415f7d  MOV EDX,dword ptr [EBP + -0x34]
00415f80  MOV EAX,dword ptr [EBP + 0xfffff994]
00415f86  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00415f8d  MOV EDX,dword ptr [EBP + -0x2c]
00415f90  MOV EAX,dword ptr [EBP + 0xfffff994]
00415f96  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00415f9d  FLD float ptr [ECX + 0x160]
00415fa3  FSUB float ptr [EDX + 0x160]
00415fa9  PUSH ECX
00415faa  FSTP float ptr [ESP]
00415fad  MOV EAX,dword ptr [EBP + -0x34]
00415fb0  MOV ECX,dword ptr [EBP + 0xfffff994]
00415fb6  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415fbd  MOV EAX,dword ptr [EBP + -0x2c]
00415fc0  MOV ECX,dword ptr [EBP + 0xfffff994]
00415fc6  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
00415fcd  FLD float ptr [EDX + 0x158]
00415fd3  FSUB float ptr [EAX + 0x158]
00415fd9  PUSH ECX
00415fda  FSTP float ptr [ESP]
00415fdd  CALL 0x00401127
00415fe2  ADD ESP,0x8
00415fe5  MOV ECX,dword ptr [EBP + -0x34]
00415fe8  MOV EDX,dword ptr [EBP + 0xfffff994]
00415fee  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00415ff5  FSTP float ptr [EAX + 0x164]
00415ffb  MOV ECX,dword ptr [EBP + -0x34]
00415ffe  MOV EDX,dword ptr [EBP + 0xfffff994]
00416004  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041600b  MOV dword ptr [EAX + 0x190],0xa
00416015  MOV ECX,dword ptr [EBP + -0x34]
00416018  MOV EDX,dword ptr [EBP + 0xfffff994]
0041601e  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416025  CALL 0x00401163
0041602a  MOV EAX,dword ptr [EBP + -0x34]
0041602d  MOV ECX,dword ptr [EBP + 0xfffff994]
00416033  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041603a  FLD float ptr [EDX + 0x164]
00416040  FSUB float ptr [0x0044e0f0] {3.14}
00416046  MOV EAX,dword ptr [EBP + 0xfffff994]
0041604c  FSTP float ptr [EAX + 0x260]
00416052  MOV ECX,dword ptr [EBP + -0x34]
00416055  MOV EDX,dword ptr [EBP + 0xfffff994]
0041605b  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416062  MOV ECX,dword ptr [EBP + 0xfffff994]
00416068  MOV EDX,dword ptr [EAX + 0x174]
0041606e  MOV dword ptr [ECX + 0x25c],EDX
00416074  MOV EAX,dword ptr [EBP + -0x34]
00416077  MOV ECX,dword ptr [EBP + 0xfffff994]
0041607d  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416084  MOV EAX,dword ptr [EBP + 0xfffff994]
0041608a  MOV ECX,dword ptr [EDX + 0x178]
00416090  MOV dword ptr [EAX + 0x258],ECX
00416096  MOV EDX,dword ptr [EBP + -0x34]
00416099  MOV EAX,dword ptr [EBP + 0xfffff994]
0041609f  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004160a6  FLD float ptr [ECX + 0x164]
004160ac  FCHS
004160ae  PUSH ECX
004160af  FSTP float ptr [ESP]
004160b2  CALL 0x00401262
004160b7  ADD ESP,0x4
004160ba  FCHS
004160bc  FMUL float ptr [0x0044e0f4] {-2}
004160c2  MOV EDX,dword ptr [EBP + -0x34]
004160c5  MOV EAX,dword ptr [EBP + 0xfffff994]
004160cb  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004160d2  FADD float ptr [ECX + 0x158]
004160d8  MOV EDX,dword ptr [EBP + 0xfffff994]
004160de  FSTP float ptr [EDX + 0x24c]
004160e4  MOV EAX,dword ptr [EBP + -0x34]
004160e7  MOV ECX,dword ptr [EBP + 0xfffff994]
004160ed  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004160f4  FLD float ptr [EDX + 0x170]
004160fa  FMUL float ptr [0x0044e0f8] {0.9}
00416100  MOV EAX,dword ptr [EBP + 0xfffff994]
00416106  FSTP float ptr [EAX + 0x250]
0041610c  MOV ECX,dword ptr [EBP + -0x34]
0041610f  MOV EDX,dword ptr [EBP + 0xfffff994]
00416115  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041611c  FLD float ptr [EAX + 0x164]
00416122  FCHS
00416124  PUSH ECX
00416125  FSTP float ptr [ESP]
00416128  CALL 0x0040136b
0041612d  ADD ESP,0x4
00416130  FMUL float ptr [0x0044e0f4] {-2}
00416136  MOV ECX,dword ptr [EBP + -0x34]
00416139  MOV EDX,dword ptr [EBP + 0xfffff994]
0041613f  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416146  FADD float ptr [EAX + 0x160]
0041614c  MOV ECX,dword ptr [EBP + 0xfffff994]
00416152  FSTP float ptr [ECX + 0x254]
00416158  MOV EDX,dword ptr [EBP + 0xfffff994]
0041615e  MOV EAX,dword ptr [EBP + -0x34]
00416161  MOV dword ptr [EDX + 0x404],EAX
00416167  MOV ECX,dword ptr [EBP + 0xfffff994]
0041616d  MOV dword ptr [ECX + 0x268],0xffffffff
00416177  JMP 0x004165ff
0041617c  MOV EDX,dword ptr [EBP + -0x34]
0041617f  MOV EAX,dword ptr [EBP + 0xfffff994]
00416185  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041618c  FLD float ptr [ECX + 0x158]
00416192  FADD float ptr [0x0044e10c] {35}
00416198  MOV EDX,dword ptr [EBP + -0x34]
0041619b  MOV EAX,dword ptr [EBP + 0xfffff994]
004161a1  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004161a8  FLD float ptr [ECX + 0x158]
004161ae  FADD float ptr [0x0044e10c] {35}
004161b4  FMULP
004161b6  MOV EDX,dword ptr [EBP + -0x34]
004161b9  MOV EAX,dword ptr [EBP + 0xfffff994]
004161bf  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004161c6  MOV EDX,dword ptr [EBP + -0x34]
004161c9  MOV EAX,dword ptr [EBP + 0xfffff994]
004161cf  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
004161d6  FLD float ptr [ECX + 0x160]
004161dc  FMUL float ptr [EDX + 0x160]
004161e2  FADDP
004161e4  PUSH ECX
004161e5  FSTP float ptr [ESP]
004161e8  CALL 0x0040104b
004161ed  ADD ESP,0x4
004161f0  FST float ptr [EBP + -0x48]
004161f3  FSUB float ptr [0x0044e114] {2}
004161f9  FMUL float ptr [0x0044e160] {0.53}
004161ff  FSUB float ptr [0x0044e0e8] {1}
00416205  MOV EAX,dword ptr [EBP + -0x34]
00416208  MOV ECX,dword ptr [EBP + 0xfffff994]
0041620e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416215  FDIV float ptr [EDX + 0x17c]
0041621b  FSTP float ptr [EBP + -0x44]
0041621e  FLD float ptr [EBP + -0x44]
00416221  FCOMP float ptr [0x0044e0e8] {1}
00416227  FNSTSW AX
00416229  TEST AH,0x1
0041622c  JZ 0x0041623a
0041622e  MOV dword ptr [EBP + 0xfffff934],0x1
00416238  JMP 0x00416244
0041623a  MOV dword ptr [EBP + 0xfffff934],0x0
00416244  MOV EAX,dword ptr [EBP + -0x34]
00416247  MOV ECX,dword ptr [EBP + 0xfffff994]
0041624d  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416254  MOV EAX,dword ptr [EBP + -0x4]
00416257  MOV ECX,dword ptr [EBP + 0xfffff994]
0041625d  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416264  FLD float ptr [EDX + 0x158]
0041626a  FSUB float ptr [EAX + 0x158]
00416270  MOV ECX,dword ptr [EBP + -0x34]
00416273  MOV EDX,dword ptr [EBP + 0xfffff994]
00416279  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416280  MOV ECX,dword ptr [EBP + -0x4]
00416283  MOV EDX,dword ptr [EBP + 0xfffff994]
00416289  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416290  FLD float ptr [EAX + 0x158]
00416296  FSUB float ptr [ECX + 0x158]
0041629c  FMULP
0041629e  MOV EDX,dword ptr [EBP + -0x34]
004162a1  MOV EAX,dword ptr [EBP + 0xfffff994]
004162a7  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004162ae  MOV EDX,dword ptr [EBP + -0x4]
004162b1  MOV EAX,dword ptr [EBP + 0xfffff994]
004162b7  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
004162be  FLD float ptr [ECX + 0x160]
004162c4  FSUB float ptr [EDX + 0x160]
004162ca  MOV EAX,dword ptr [EBP + -0x34]
004162cd  MOV ECX,dword ptr [EBP + 0xfffff994]
004162d3  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004162da  MOV EAX,dword ptr [EBP + -0x4]
004162dd  MOV ECX,dword ptr [EBP + 0xfffff994]
004162e3  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
004162ea  FLD float ptr [EDX + 0x160]
004162f0  FSUB float ptr [EAX + 0x160]
004162f6  FMULP
004162f8  FADDP
004162fa  FCOMP float ptr [0x0044e120] {25}
00416300  FNSTSW AX
00416302  TEST AH,0x1
00416305  JZ 0x00416313
00416307  MOV dword ptr [EBP + 0xfffff930],0x1
00416311  JMP 0x0041631d
00416313  MOV dword ptr [EBP + 0xfffff930],0x0
0041631d  MOV ECX,dword ptr [EBP + 0xfffff934]
00416323  AND ECX,dword ptr [EBP + 0xfffff930]
00416329  TEST ECX,ECX
0041632b  JZ 0x0041652f
00416331  PUSH 0x1
00416333  MOV EDX,dword ptr [EBP + 0xfffff994]
00416339  MOV ECX,dword ptr [EDX + 0xc0]
0041633f  CALL 0x00401258
00416344  MOV EAX,dword ptr [EBP + -0x34]
00416347  MOV ECX,dword ptr [EBP + 0xfffff994]
0041634d  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416354  MOV dword ptr [EDX + 0x198],0x0
0041635e  MOV EAX,dword ptr [EBP + -0x34]
00416361  MOV ECX,dword ptr [EBP + 0xfffff994]
00416367  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041636e  MOV dword ptr [EDX + 0x190],0xb
00416378  MOV EAX,dword ptr [EBP + -0x34]
0041637b  MOV ECX,dword ptr [EBP + 0xfffff994]
00416381  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416388  CALL 0x00401145
0041638d  MOV EDX,dword ptr [EBP + -0x34]
00416390  MOV EAX,dword ptr [EBP + 0xfffff994]
00416396  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041639d  MOV EDX,dword ptr [ECX + 0x160]
004163a3  PUSH EDX
004163a4  MOV EAX,dword ptr [EBP + -0x34]
004163a7  MOV ECX,dword ptr [EBP + 0xfffff994]
004163ad  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004163b4  FLD float ptr [EDX + 0x158]
004163ba  FADD float ptr [0x0044e10c] {35}
004163c0  PUSH ECX
004163c1  FSTP float ptr [ESP]
004163c4  CALL 0x00401127
004163c9  ADD ESP,0x8
004163cc  MOV EAX,dword ptr [EBP + -0x34]
004163cf  MOV ECX,dword ptr [EBP + 0xfffff994]
004163d5  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004163dc  FSTP float ptr [EDX + 0x164]
004163e2  MOV EAX,dword ptr [EBP + -0x34]
004163e5  MOV ECX,dword ptr [EBP + 0xfffff994]
004163eb  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004163f2  FLD float ptr [EDX + 0x164]
004163f8  FSUB float ptr [0x0044e0f0] {3.14}
004163fe  MOV EAX,dword ptr [EBP + 0xfffff994]
00416404  FSTP float ptr [EAX + 0x260]
0041640a  MOV ECX,dword ptr [EBP + 0xfffff994]
00416410  MOV dword ptr [ECX + 0x25c],0x41b80000
0041641a  MOV EDX,dword ptr [EBP + -0x34]
0041641d  MOV EAX,dword ptr [EBP + 0xfffff994]
00416423  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041642a  FLD float ptr [EBP + -0x44]
0041642d  FMUL float ptr [ECX + 0x17c]
00416433  FADD float ptr [0x0044e0e8] {1}
00416439  MOV EDX,dword ptr [EBP + 0xfffff994]
0041643f  FSTP float ptr [EDX + 0x258]
00416445  MOV EAX,dword ptr [EBP + -0x34]
00416448  MOV ECX,dword ptr [EBP + 0xfffff994]
0041644e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416455  FLD float ptr [EDX + 0x164]
0041645b  FCHS
0041645d  PUSH ECX
0041645e  FSTP float ptr [ESP]
00416461  CALL 0x00401262
00416466  ADD ESP,0x4
00416469  FCHS
0041646b  FMUL float ptr [0x0044e0f4] {-2}
00416471  MOV EAX,dword ptr [EBP + -0x34]
00416474  MOV ECX,dword ptr [EBP + 0xfffff994]
0041647a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416481  FADD float ptr [EDX + 0x158]
00416487  MOV EAX,dword ptr [EBP + 0xfffff994]
0041648d  FSTP float ptr [EAX + 0x24c]
00416493  MOV ECX,dword ptr [EBP + -0x34]
00416496  MOV EDX,dword ptr [EBP + 0xfffff994]
0041649c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004164a3  FLD float ptr [EAX + 0x164]
004164a9  FCHS
004164ab  PUSH ECX
004164ac  FSTP float ptr [ESP]
004164af  CALL 0x0040136b
004164b4  ADD ESP,0x4
004164b7  FMUL float ptr [0x0044e0f4] {-2}
004164bd  MOV ECX,dword ptr [EBP + -0x34]
004164c0  MOV EDX,dword ptr [EBP + 0xfffff994]
004164c6  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004164cd  FADD float ptr [EAX + 0x160]
004164d3  MOV ECX,dword ptr [EBP + 0xfffff994]
004164d9  FSTP float ptr [ECX + 0x254]
004164df  MOV EDX,dword ptr [EBP + 0xfffff994]
004164e5  MOV EAX,dword ptr [EBP + -0x34]
004164e8  MOV dword ptr [EDX + 0x404],EAX
004164ee  MOV ECX,dword ptr [EBP + 0xfffff994]
004164f4  MOV dword ptr [ECX + 0x268],0xffffffff
004164fe  FLD float ptr [EBP + -0x48]
00416501  FCOMP float ptr [0x0044e128] {15}
00416507  FNSTSW AX
00416509  TEST AH,0x1
0041650c  JZ 0x0041651d
0041650e  MOV EDX,dword ptr [EBP + 0xfffff994]
00416514  MOV byte ptr [EDX + 0x3a8],0x0
0041651b  JMP 0x0041652a
0041651d  MOV EAX,dword ptr [EBP + 0xfffff994]
00416523  MOV byte ptr [EAX + 0x3a8],0x1
0041652a  JMP 0x004165ff
0041652f  PUSH 0x41200000
00416534  MOV ECX,dword ptr [EBP + -0x34]
00416537  MOV EDX,dword ptr [EBP + 0xfffff994]
0041653d  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416544  MOV ECX,dword ptr [EAX + 0x164]
0041654a  PUSH ECX
0041654b  MOV EDX,dword ptr [EBP + -0x34]
0041654e  MOV EAX,dword ptr [EBP + 0xfffff994]
00416554  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041655b  MOV EDX,dword ptr [ECX + 0x160]
00416561  PUSH EDX
00416562  MOV EAX,dword ptr [EBP + -0x34]
00416565  MOV ECX,dword ptr [EBP + 0xfffff994]
0041656b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416572  FLD float ptr [EDX + 0x158]
00416578  FADD float ptr [0x0044e12c] {30}
0041657e  PUSH ECX
0041657f  FSTP float ptr [ESP]
00416582  CALL 0x00401127
00416587  ADD ESP,0x4
0041658a  FSTP float ptr [ESP]
0041658d  MOV ECX,dword ptr [EBP + 0xfffff994]
00416593  CALL 0x00401140
00416598  MOV EAX,dword ptr [EBP + -0x34]
0041659b  MOV ECX,dword ptr [EBP + 0xfffff994]
004165a1  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004165a8  FSTP float ptr [EDX + 0x164]
004165ae  MOV EAX,dword ptr [EBP + -0x34]
004165b1  PUSH EAX
004165b2  LEA ECX,[EBP + 0xfffffa7c]
004165b8  PUSH ECX
004165b9  MOV ECX,dword ptr [EBP + 0xfffff994]
004165bf  CALL 0x00401136
004165c4  MOV EDX,dword ptr [EBP + -0x34]
004165c7  MOV ECX,dword ptr [EBP + 0xfffff994]
004165cd  MOV EDX,dword ptr [ECX + EDX*0x4 + 0xd8]
004165d4  ADD EDX,0x158
004165da  MOV ECX,dword ptr [EAX]
004165dc  MOV dword ptr [EDX],ECX
004165de  MOV ECX,dword ptr [EAX + 0x4]
004165e1  MOV dword ptr [EDX + 0x4],ECX
004165e4  MOV EAX,dword ptr [EAX + 0x8]
004165e7  MOV dword ptr [EDX + 0x8],EAX
004165ea  MOV ECX,dword ptr [EBP + -0x34]
004165ed  MOV EDX,dword ptr [EBP + 0xfffff994]
004165f3  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004165fa  CALL 0x0040102d
004165ff  JMP 0x00416ef5
00416604  MOV EAX,dword ptr [EBP + -0x2c]
00416607  MOV ECX,dword ptr [EBP + 0xfffff994]
0041660d  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416614  MOV EAX,dword ptr [EBP + -0x34]
00416617  MOV ECX,dword ptr [EBP + 0xfffff994]
0041661d  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416624  FLD float ptr [EDX + 0x158]
0041662a  FSUB float ptr [EAX + 0x158]
00416630  FCOMP float ptr [0x0044e128] {15}
00416636  FNSTSW AX
00416638  TEST AH,0x41
0041663b  JNZ 0x00416649
0041663d  MOV dword ptr [EBP + 0xfffff92c],0x1
00416647  JMP 0x00416653
00416649  MOV dword ptr [EBP + 0xfffff92c],0x0
00416653  MOV ECX,dword ptr [EBP + -0x4]
00416656  MOV EDX,dword ptr [EBP + 0xfffff994]
0041665c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416663  MOV ECX,dword ptr [EBP + -0x34]
00416666  MOV EDX,dword ptr [EBP + 0xfffff994]
0041666c  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416673  FLD float ptr [EAX + 0x158]
00416679  FCOMP float ptr [ECX + 0x158]
0041667f  FNSTSW AX
00416681  TEST AH,0x41
00416684  JNZ 0x00416692
00416686  MOV dword ptr [EBP + 0xfffff928],0x1
00416690  JMP 0x0041669c
00416692  MOV dword ptr [EBP + 0xfffff928],0x0
0041669c  MOV EDX,dword ptr [EBP + -0x2c]
0041669f  MOV EAX,dword ptr [EBP + 0xfffff994]
004166a5  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004166ac  MOV EDX,dword ptr [EBP + -0x4]
004166af  MOV EAX,dword ptr [EBP + 0xfffff994]
004166b5  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
004166bc  FLD float ptr [ECX + 0x158]
004166c2  FCOMP float ptr [EDX + 0x158]
004166c8  FNSTSW AX
004166ca  TEST AH,0x41
004166cd  JNZ 0x004166db
004166cf  MOV dword ptr [EBP + 0xfffff924],0x1
004166d9  JMP 0x004166e5
004166db  MOV dword ptr [EBP + 0xfffff924],0x0
004166e5  MOV EAX,dword ptr [EBP + -0x14]
004166e8  MOV ECX,dword ptr [EBP + 0xfffff994]
004166ee  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004166f5  MOV EAX,dword ptr [EBP + -0x34]
004166f8  MOV ECX,dword ptr [EBP + 0xfffff994]
004166fe  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416705  FLD float ptr [EDX + 0x158]
0041670b  FCOMP float ptr [EAX + 0x158]
00416711  FNSTSW AX
00416713  TEST AH,0x41
00416716  JNZ 0x00416724
00416718  MOV dword ptr [EBP + 0xfffff920],0x1
00416722  JMP 0x0041672e
00416724  MOV dword ptr [EBP + 0xfffff920],0x0
0041672e  MOV ECX,dword ptr [EBP + -0x2c]
00416731  MOV EDX,dword ptr [EBP + 0xfffff994]
00416737  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041673e  MOV ECX,dword ptr [EBP + -0x14]
00416741  MOV EDX,dword ptr [EBP + 0xfffff994]
00416747  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041674e  FLD float ptr [EAX + 0x158]
00416754  FCOMP float ptr [ECX + 0x158]
0041675a  FNSTSW AX
0041675c  TEST AH,0x41
0041675f  JNZ 0x0041676d
00416761  MOV dword ptr [EBP + 0xfffff91c],0x1
0041676b  JMP 0x00416777
0041676d  MOV dword ptr [EBP + 0xfffff91c],0x0
00416777  MOV EDX,dword ptr [EBP + -0x10]
0041677a  MOV EAX,dword ptr [EBP + 0xfffff994]
00416780  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00416787  MOV EDX,dword ptr [EBP + -0x34]
0041678a  MOV EAX,dword ptr [EBP + 0xfffff994]
00416790  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00416797  FLD float ptr [ECX + 0x158]
0041679d  FCOMP float ptr [EDX + 0x158]
004167a3  FNSTSW AX
004167a5  TEST AH,0x41
004167a8  JNZ 0x004167b6
004167aa  MOV dword ptr [EBP + 0xfffff918],0x1
004167b4  JMP 0x004167c0
004167b6  MOV dword ptr [EBP + 0xfffff918],0x0
004167c0  MOV EAX,dword ptr [EBP + -0x2c]
004167c3  MOV ECX,dword ptr [EBP + 0xfffff994]
004167c9  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004167d0  MOV EAX,dword ptr [EBP + -0x10]
004167d3  MOV ECX,dword ptr [EBP + 0xfffff994]
004167d9  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
004167e0  FLD float ptr [EDX + 0x158]
004167e6  FCOMP float ptr [EAX + 0x158]
004167ec  FNSTSW AX
004167ee  TEST AH,0x41
004167f1  JNZ 0x004167ff
004167f3  MOV dword ptr [EBP + 0xfffff914],0x1
004167fd  JMP 0x00416809
004167ff  MOV dword ptr [EBP + 0xfffff914],0x0
00416809  MOV ECX,dword ptr [EBP + 0xfffff928]
0041680f  AND ECX,dword ptr [EBP + 0xfffff924]
00416815  MOV EDX,dword ptr [EBP + 0xfffff920]
0041681b  AND EDX,dword ptr [EBP + 0xfffff91c]
00416821  OR ECX,EDX
00416823  MOV EAX,dword ptr [EBP + 0xfffff918]
00416829  AND EAX,dword ptr [EBP + 0xfffff914]
0041682f  OR ECX,EAX
00416831  NEG ECX
00416833  SBB ECX,ECX
00416835  INC ECX
00416836  MOV EDX,dword ptr [EBP + 0xfffff92c]
0041683c  AND EDX,ECX
0041683e  TEST EDX,EDX
00416840  JZ 0x00416a72
00416846  PUSH 0x1
00416848  MOV EAX,dword ptr [EBP + 0xfffff994]
0041684e  MOV ECX,dword ptr [EAX + 0xc0]
00416854  CALL 0x00401258
00416859  MOV ECX,dword ptr [EBP + -0x34]
0041685c  MOV EDX,dword ptr [EBP + 0xfffff994]
00416862  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416869  MOV dword ptr [EAX + 0x198],0x0
00416873  MOV ECX,dword ptr [EBP + -0x34]
00416876  MOV EDX,dword ptr [EBP + 0xfffff994]
0041687c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416883  MOV ECX,dword ptr [EBP + -0x2c]
00416886  MOV EDX,dword ptr [EBP + 0xfffff994]
0041688c  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416893  FLD float ptr [EAX + 0x160]
00416899  FSUB float ptr [ECX + 0x160]
0041689f  PUSH ECX
004168a0  FSTP float ptr [ESP]
004168a3  MOV EDX,dword ptr [EBP + -0x34]
004168a6  MOV EAX,dword ptr [EBP + 0xfffff994]
004168ac  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004168b3  MOV EDX,dword ptr [EBP + -0x2c]
004168b6  MOV EAX,dword ptr [EBP + 0xfffff994]
004168bc  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
004168c3  FLD float ptr [ECX + 0x158]
004168c9  FSUB float ptr [EDX + 0x158]
004168cf  PUSH ECX
004168d0  FSTP float ptr [ESP]
004168d3  CALL 0x00401127
004168d8  ADD ESP,0x8
004168db  MOV EAX,dword ptr [EBP + -0x34]
004168de  MOV ECX,dword ptr [EBP + 0xfffff994]
004168e4  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004168eb  FSTP float ptr [EDX + 0x164]
004168f1  MOV EAX,dword ptr [EBP + -0x34]
004168f4  MOV ECX,dword ptr [EBP + 0xfffff994]
004168fa  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416901  MOV dword ptr [EDX + 0x190],0xa
0041690b  MOV EAX,dword ptr [EBP + -0x34]
0041690e  MOV ECX,dword ptr [EBP + 0xfffff994]
00416914  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041691b  CALL 0x00401163
00416920  MOV EDX,dword ptr [EBP + -0x34]
00416923  MOV EAX,dword ptr [EBP + 0xfffff994]
00416929  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00416930  FLD float ptr [ECX + 0x164]
00416936  FSUB float ptr [0x0044e0f0] {3.14}
0041693c  MOV EDX,dword ptr [EBP + 0xfffff994]
00416942  FSTP float ptr [EDX + 0x260]
00416948  MOV EAX,dword ptr [EBP + -0x34]
0041694b  MOV ECX,dword ptr [EBP + 0xfffff994]
00416951  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416958  MOV EAX,dword ptr [EBP + 0xfffff994]
0041695e  MOV ECX,dword ptr [EDX + 0x174]
00416964  MOV dword ptr [EAX + 0x25c],ECX
0041696a  MOV EDX,dword ptr [EBP + -0x34]
0041696d  MOV EAX,dword ptr [EBP + 0xfffff994]
00416973  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041697a  MOV EDX,dword ptr [EBP + 0xfffff994]
00416980  MOV EAX,dword ptr [ECX + 0x178]
00416986  MOV dword ptr [EDX + 0x258],EAX
0041698c  MOV ECX,dword ptr [EBP + -0x34]
0041698f  MOV EDX,dword ptr [EBP + 0xfffff994]
00416995  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041699c  FLD float ptr [EAX + 0x164]
004169a2  FCHS
004169a4  PUSH ECX
004169a5  FSTP float ptr [ESP]
004169a8  CALL 0x00401262
004169ad  ADD ESP,0x4
004169b0  FCHS
004169b2  FMUL float ptr [0x0044e0f4] {-2}
004169b8  MOV ECX,dword ptr [EBP + -0x34]
004169bb  MOV EDX,dword ptr [EBP + 0xfffff994]
004169c1  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004169c8  FADD float ptr [EAX + 0x158]
004169ce  MOV ECX,dword ptr [EBP + 0xfffff994]
004169d4  FSTP float ptr [ECX + 0x24c]
004169da  MOV EDX,dword ptr [EBP + -0x34]
004169dd  MOV EAX,dword ptr [EBP + 0xfffff994]
004169e3  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004169ea  FLD float ptr [ECX + 0x170]
004169f0  FMUL float ptr [0x0044e0f8] {0.9}
004169f6  MOV EDX,dword ptr [EBP + 0xfffff994]
004169fc  FSTP float ptr [EDX + 0x250]
00416a02  MOV EAX,dword ptr [EBP + -0x34]
00416a05  MOV ECX,dword ptr [EBP + 0xfffff994]
00416a0b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416a12  FLD float ptr [EDX + 0x164]
00416a18  FCHS
00416a1a  PUSH ECX
00416a1b  FSTP float ptr [ESP]
00416a1e  CALL 0x0040136b
00416a23  ADD ESP,0x4
00416a26  FMUL float ptr [0x0044e0f4] {-2}
00416a2c  MOV EAX,dword ptr [EBP + -0x34]
00416a2f  MOV ECX,dword ptr [EBP + 0xfffff994]
00416a35  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416a3c  FADD float ptr [EDX + 0x160]
00416a42  MOV EAX,dword ptr [EBP + 0xfffff994]
00416a48  FSTP float ptr [EAX + 0x254]
00416a4e  MOV ECX,dword ptr [EBP + 0xfffff994]
00416a54  MOV EDX,dword ptr [EBP + -0x34]
00416a57  MOV dword ptr [ECX + 0x404],EDX
00416a5d  MOV EAX,dword ptr [EBP + 0xfffff994]
00416a63  MOV dword ptr [EAX + 0x268],0xffffffff
00416a6d  JMP 0x00416ef5
00416a72  MOV ECX,dword ptr [EBP + -0x34]
00416a75  MOV EDX,dword ptr [EBP + 0xfffff994]
00416a7b  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416a82  FLD float ptr [EAX + 0x158]
00416a88  FSUB float ptr [0x0044e10c] {35}
00416a8e  MOV ECX,dword ptr [EBP + -0x34]
00416a91  MOV EDX,dword ptr [EBP + 0xfffff994]
00416a97  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416a9e  FLD float ptr [EAX + 0x158]
00416aa4  FSUB float ptr [0x0044e10c] {35}
00416aaa  FMULP
00416aac  MOV ECX,dword ptr [EBP + -0x34]
00416aaf  MOV EDX,dword ptr [EBP + 0xfffff994]
00416ab5  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416abc  MOV ECX,dword ptr [EBP + -0x34]
00416abf  MOV EDX,dword ptr [EBP + 0xfffff994]
00416ac5  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416acc  FLD float ptr [EAX + 0x160]
00416ad2  FMUL float ptr [ECX + 0x160]
00416ad8  FADDP
00416ada  PUSH ECX
00416adb  FSTP float ptr [ESP]
00416ade  CALL 0x0040104b
00416ae3  ADD ESP,0x4
00416ae6  FST float ptr [EBP + -0x50]
00416ae9  FSUB float ptr [0x0044e114] {2}
00416aef  FMUL float ptr [0x0044e160] {0.53}
00416af5  FSUB float ptr [0x0044e0e8] {1}
00416afb  MOV EDX,dword ptr [EBP + -0x34]
00416afe  MOV EAX,dword ptr [EBP + 0xfffff994]
00416b04  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00416b0b  FDIV float ptr [ECX + 0x17c]
00416b11  FSTP float ptr [EBP + -0x4c]
00416b14  FLD float ptr [EBP + -0x4c]
00416b17  FCOMP float ptr [0x0044e0e8] {1}
00416b1d  FNSTSW AX
00416b1f  TEST AH,0x1
00416b22  JZ 0x00416b30
00416b24  MOV dword ptr [EBP + 0xfffff910],0x1
00416b2e  JMP 0x00416b3a
00416b30  MOV dword ptr [EBP + 0xfffff910],0x0
00416b3a  MOV EDX,dword ptr [EBP + -0x34]
00416b3d  MOV EAX,dword ptr [EBP + 0xfffff994]
00416b43  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00416b4a  MOV EDX,dword ptr [EBP + -0x4]
00416b4d  MOV EAX,dword ptr [EBP + 0xfffff994]
00416b53  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00416b5a  FLD float ptr [ECX + 0x158]
00416b60  FSUB float ptr [EDX + 0x158]
00416b66  MOV EAX,dword ptr [EBP + -0x34]
00416b69  MOV ECX,dword ptr [EBP + 0xfffff994]
00416b6f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416b76  MOV EAX,dword ptr [EBP + -0x4]
00416b79  MOV ECX,dword ptr [EBP + 0xfffff994]
00416b7f  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416b86  FLD float ptr [EDX + 0x158]
00416b8c  FSUB float ptr [EAX + 0x158]
00416b92  FMULP
00416b94  MOV ECX,dword ptr [EBP + -0x34]
00416b97  MOV EDX,dword ptr [EBP + 0xfffff994]
00416b9d  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416ba4  MOV ECX,dword ptr [EBP + -0x4]
00416ba7  MOV EDX,dword ptr [EBP + 0xfffff994]
00416bad  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416bb4  FLD float ptr [EAX + 0x160]
00416bba  FSUB float ptr [ECX + 0x160]
00416bc0  MOV EDX,dword ptr [EBP + -0x34]
00416bc3  MOV EAX,dword ptr [EBP + 0xfffff994]
00416bc9  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00416bd0  MOV EDX,dword ptr [EBP + -0x4]
00416bd3  MOV EAX,dword ptr [EBP + 0xfffff994]
00416bd9  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00416be0  FLD float ptr [ECX + 0x160]
00416be6  FSUB float ptr [EDX + 0x160]
00416bec  FMULP
00416bee  FADDP
00416bf0  FCOMP float ptr [0x0044e120] {25}
00416bf6  FNSTSW AX
00416bf8  TEST AH,0x1
00416bfb  JZ 0x00416c09
00416bfd  MOV dword ptr [EBP + 0xfffff90c],0x1
00416c07  JMP 0x00416c13
00416c09  MOV dword ptr [EBP + 0xfffff90c],0x0
00416c13  MOV EAX,dword ptr [EBP + 0xfffff910]
00416c19  AND EAX,dword ptr [EBP + 0xfffff90c]
00416c1f  TEST EAX,EAX
00416c21  JZ 0x00416e25
00416c27  PUSH 0x1
00416c29  MOV ECX,dword ptr [EBP + 0xfffff994]
00416c2f  MOV ECX,dword ptr [ECX + 0xc0]
00416c35  CALL 0x00401258
00416c3a  MOV EDX,dword ptr [EBP + -0x34]
00416c3d  MOV EAX,dword ptr [EBP + 0xfffff994]
00416c43  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00416c4a  MOV dword ptr [ECX + 0x198],0x0
00416c54  MOV EDX,dword ptr [EBP + -0x34]
00416c57  MOV EAX,dword ptr [EBP + 0xfffff994]
00416c5d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00416c64  MOV dword ptr [ECX + 0x190],0xb
00416c6e  MOV EDX,dword ptr [EBP + -0x34]
00416c71  MOV EAX,dword ptr [EBP + 0xfffff994]
00416c77  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00416c7e  CALL 0x00401145
00416c83  MOV ECX,dword ptr [EBP + -0x34]
00416c86  MOV EDX,dword ptr [EBP + 0xfffff994]
00416c8c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416c93  MOV ECX,dword ptr [EAX + 0x160]
00416c99  PUSH ECX
00416c9a  MOV EDX,dword ptr [EBP + -0x34]
00416c9d  MOV EAX,dword ptr [EBP + 0xfffff994]
00416ca3  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00416caa  FLD float ptr [ECX + 0x158]
00416cb0  FSUB float ptr [0x0044e10c] {35}
00416cb6  PUSH ECX
00416cb7  FSTP float ptr [ESP]
00416cba  CALL 0x00401127
00416cbf  ADD ESP,0x8
00416cc2  MOV EDX,dword ptr [EBP + -0x34]
00416cc5  MOV EAX,dword ptr [EBP + 0xfffff994]
00416ccb  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00416cd2  FSTP float ptr [ECX + 0x164]
00416cd8  MOV EDX,dword ptr [EBP + -0x34]
00416cdb  MOV EAX,dword ptr [EBP + 0xfffff994]
00416ce1  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00416ce8  FLD float ptr [ECX + 0x164]
00416cee  FSUB float ptr [0x0044e0f0] {3.14}
00416cf4  MOV EDX,dword ptr [EBP + 0xfffff994]
00416cfa  FSTP float ptr [EDX + 0x260]
00416d00  MOV EAX,dword ptr [EBP + 0xfffff994]
00416d06  MOV dword ptr [EAX + 0x25c],0x41b80000
00416d10  MOV ECX,dword ptr [EBP + -0x34]
00416d13  MOV EDX,dword ptr [EBP + 0xfffff994]
00416d19  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416d20  FLD float ptr [EBP + -0x4c]
00416d23  FMUL float ptr [EAX + 0x17c]
00416d29  FADD float ptr [0x0044e0e8] {1}
00416d2f  MOV ECX,dword ptr [EBP + 0xfffff994]
00416d35  FSTP float ptr [ECX + 0x258]
00416d3b  MOV EDX,dword ptr [EBP + -0x34]
00416d3e  MOV EAX,dword ptr [EBP + 0xfffff994]
00416d44  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00416d4b  FLD float ptr [ECX + 0x164]
00416d51  FCHS
00416d53  PUSH ECX
00416d54  FSTP float ptr [ESP]
00416d57  CALL 0x00401262
00416d5c  ADD ESP,0x4
00416d5f  FCHS
00416d61  FMUL float ptr [0x0044e0f4] {-2}
00416d67  MOV EDX,dword ptr [EBP + -0x34]
00416d6a  MOV EAX,dword ptr [EBP + 0xfffff994]
00416d70  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00416d77  FADD float ptr [ECX + 0x158]
00416d7d  MOV EDX,dword ptr [EBP + 0xfffff994]
00416d83  FSTP float ptr [EDX + 0x24c]
00416d89  MOV EAX,dword ptr [EBP + -0x34]
00416d8c  MOV ECX,dword ptr [EBP + 0xfffff994]
00416d92  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416d99  FLD float ptr [EDX + 0x164]
00416d9f  FCHS
00416da1  PUSH ECX
00416da2  FSTP float ptr [ESP]
00416da5  CALL 0x0040136b
00416daa  ADD ESP,0x4
00416dad  FMUL float ptr [0x0044e0f4] {-2}
00416db3  MOV EAX,dword ptr [EBP + -0x34]
00416db6  MOV ECX,dword ptr [EBP + 0xfffff994]
00416dbc  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416dc3  FADD float ptr [EDX + 0x160]
00416dc9  MOV EAX,dword ptr [EBP + 0xfffff994]
00416dcf  FSTP float ptr [EAX + 0x254]
00416dd5  MOV ECX,dword ptr [EBP + 0xfffff994]
00416ddb  MOV EDX,dword ptr [EBP + -0x34]
00416dde  MOV dword ptr [ECX + 0x404],EDX
00416de4  MOV EAX,dword ptr [EBP + 0xfffff994]
00416dea  MOV dword ptr [EAX + 0x268],0xffffffff
00416df4  FLD float ptr [EBP + -0x50]
00416df7  FCOMP float ptr [0x0044e128] {15}
00416dfd  FNSTSW AX
00416dff  TEST AH,0x1
00416e02  JZ 0x00416e13
00416e04  MOV ECX,dword ptr [EBP + 0xfffff994]
00416e0a  MOV byte ptr [ECX + 0x3a8],0x0
00416e11  JMP 0x00416e20
00416e13  MOV EDX,dword ptr [EBP + 0xfffff994]
00416e19  MOV byte ptr [EDX + 0x3a8],0x1
00416e20  JMP 0x00416ef5
00416e25  PUSH 0x41200000
00416e2a  MOV EAX,dword ptr [EBP + -0x34]
00416e2d  MOV ECX,dword ptr [EBP + 0xfffff994]
00416e33  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416e3a  MOV EAX,dword ptr [EDX + 0x164]
00416e40  PUSH EAX
00416e41  MOV ECX,dword ptr [EBP + -0x34]
00416e44  MOV EDX,dword ptr [EBP + 0xfffff994]
00416e4a  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416e51  MOV ECX,dword ptr [EAX + 0x160]
00416e57  PUSH ECX
00416e58  MOV EDX,dword ptr [EBP + -0x34]
00416e5b  MOV EAX,dword ptr [EBP + 0xfffff994]
00416e61  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00416e68  FLD float ptr [ECX + 0x158]
00416e6e  FSUB float ptr [0x0044e12c] {30}
00416e74  PUSH ECX
00416e75  FSTP float ptr [ESP]
00416e78  CALL 0x00401127
00416e7d  ADD ESP,0x4
00416e80  FSTP float ptr [ESP]
00416e83  MOV ECX,dword ptr [EBP + 0xfffff994]
00416e89  CALL 0x00401140
00416e8e  MOV EDX,dword ptr [EBP + -0x34]
00416e91  MOV EAX,dword ptr [EBP + 0xfffff994]
00416e97  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00416e9e  FSTP float ptr [ECX + 0x164]
00416ea4  MOV EDX,dword ptr [EBP + -0x34]
00416ea7  PUSH EDX
00416ea8  LEA EAX,[EBP + 0xfffffa70]
00416eae  PUSH EAX
00416eaf  MOV ECX,dword ptr [EBP + 0xfffff994]
00416eb5  CALL 0x00401136
00416eba  MOV ECX,dword ptr [EBP + -0x34]
00416ebd  MOV EDX,dword ptr [EBP + 0xfffff994]
00416ec3  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416eca  ADD ECX,0x158
00416ed0  MOV EDX,dword ptr [EAX]
00416ed2  MOV dword ptr [ECX],EDX
00416ed4  MOV EDX,dword ptr [EAX + 0x4]
00416ed7  MOV dword ptr [ECX + 0x4],EDX
00416eda  MOV EAX,dword ptr [EAX + 0x8]
00416edd  MOV dword ptr [ECX + 0x8],EAX
00416ee0  MOV ECX,dword ptr [EBP + -0x34]
00416ee3  MOV EDX,dword ptr [EBP + 0xfffff994]
00416ee9  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416ef0  CALL 0x0040102d
00416ef5  MOV EAX,dword ptr [EBP + -0x2c]
00416ef8  MOV ECX,dword ptr [EBP + 0xfffff994]
00416efe  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416f05  XOR EAX,EAX
00416f07  CMP dword ptr [EDX + 0x190],0x6
00416f0e  SETG AL
00416f11  MOV ECX,dword ptr [EBP + -0x2c]
00416f14  MOV EDX,dword ptr [EBP + 0xfffff994]
00416f1a  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416f21  XOR EDX,EDX
00416f23  CMP dword ptr [ECX + 0x190],0xa
00416f2a  SETL DL
00416f2d  AND EAX,EDX
00416f2f  TEST EAX,EAX
00416f31  JZ 0x00417ac4
00416f37  MOV EAX,dword ptr [EBP + -0x2c]
00416f3a  MOV ECX,dword ptr [EBP + 0xfffff994]
00416f40  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416f47  FLD float ptr [EDX + 0x160]
00416f4d  FCOMP float ptr [0x0044e118] {18}
00416f53  FNSTSW AX
00416f55  TEST AH,0x41
00416f58  JNZ 0x00416ff3
00416f5e  PUSH 0x40a00000
00416f63  MOV EAX,dword ptr [EBP + -0x2c]
00416f66  MOV ECX,dword ptr [EBP + 0xfffff994]
00416f6c  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00416f73  MOV EAX,dword ptr [EDX + 0x164]
00416f79  PUSH EAX
00416f7a  PUSH 0x0
00416f7c  MOV ECX,dword ptr [EBP + 0xfffff994]
00416f82  CALL 0x00401140
00416f87  MOV ECX,dword ptr [EBP + -0x2c]
00416f8a  MOV EDX,dword ptr [EBP + 0xfffff994]
00416f90  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416f97  FSTP float ptr [EAX + 0x164]
00416f9d  MOV ECX,dword ptr [EBP + -0x2c]
00416fa0  PUSH ECX
00416fa1  LEA EDX,[EBP + 0xfffffa64]
00416fa7  PUSH EDX
00416fa8  MOV ECX,dword ptr [EBP + 0xfffff994]
00416fae  CALL 0x00401136
00416fb3  MOV ECX,dword ptr [EBP + -0x2c]
00416fb6  MOV EDX,dword ptr [EBP + 0xfffff994]
00416fbc  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416fc3  ADD ECX,0x158
00416fc9  MOV EDX,dword ptr [EAX]
00416fcb  MOV dword ptr [ECX],EDX
00416fcd  MOV EDX,dword ptr [EAX + 0x4]
00416fd0  MOV dword ptr [ECX + 0x4],EDX
00416fd3  MOV EAX,dword ptr [EAX + 0x8]
00416fd6  MOV dword ptr [ECX + 0x8],EAX
00416fd9  MOV ECX,dword ptr [EBP + -0x2c]
00416fdc  MOV EDX,dword ptr [EBP + 0xfffff994]
00416fe2  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00416fe9  CALL 0x00401212
00416fee  JMP 0x00417ac4
00416ff3  MOV EAX,dword ptr [EBP + -0x2c]
00416ff6  MOV ECX,dword ptr [EBP + 0xfffff994]
00416ffc  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417003  FLD float ptr [EDX + 0x160]
00417009  FCOMP float ptr [0x0044e11c] {-18}
0041700f  FNSTSW AX
00417011  TEST AH,0x1
00417014  JZ 0x004170b2
0041701a  PUSH 0x40a00000
0041701f  MOV EAX,dword ptr [EBP + -0x2c]
00417022  MOV ECX,dword ptr [EBP + 0xfffff994]
00417028  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041702f  MOV EAX,dword ptr [EDX + 0x164]
00417035  PUSH EAX
00417036  PUSH 0x4048f5c3
0041703b  MOV ECX,dword ptr [EBP + 0xfffff994]
00417041  CALL 0x00401140
00417046  MOV ECX,dword ptr [EBP + -0x2c]
00417049  MOV EDX,dword ptr [EBP + 0xfffff994]
0041704f  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417056  FSTP float ptr [EAX + 0x164]
0041705c  MOV ECX,dword ptr [EBP + -0x2c]
0041705f  PUSH ECX
00417060  LEA EDX,[EBP + 0xfffffa58]
00417066  PUSH EDX
00417067  MOV ECX,dword ptr [EBP + 0xfffff994]
0041706d  CALL 0x00401136
00417072  MOV ECX,dword ptr [EBP + -0x2c]
00417075  MOV EDX,dword ptr [EBP + 0xfffff994]
0041707b  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417082  ADD ECX,0x158
00417088  MOV EDX,dword ptr [EAX]
0041708a  MOV dword ptr [ECX],EDX
0041708c  MOV EDX,dword ptr [EAX + 0x4]
0041708f  MOV dword ptr [ECX + 0x4],EDX
00417092  MOV EAX,dword ptr [EAX + 0x8]
00417095  MOV dword ptr [ECX + 0x8],EAX
00417098  MOV ECX,dword ptr [EBP + -0x2c]
0041709b  MOV EDX,dword ptr [EBP + 0xfffff994]
004170a1  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004170a8  CALL 0x00401212
004170ad  JMP 0x00417ac4
004170b2  MOV EAX,dword ptr [EBP + -0x2c]
004170b5  MOV ECX,dword ptr [EBP + 0xfffff994]
004170bb  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004170c2  FLD float ptr [EDX + 0x158]
004170c8  FCOMP float ptr [0x0044e130] {-35}
004170ce  FNSTSW AX
004170d0  TEST AH,0x1
004170d3  JZ 0x00417171
004170d9  PUSH 0x40a00000
004170de  MOV EAX,dword ptr [EBP + -0x2c]
004170e1  MOV ECX,dword ptr [EBP + 0xfffff994]
004170e7  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004170ee  MOV EAX,dword ptr [EDX + 0x164]
004170f4  PUSH EAX
004170f5  PUSH 0xbfc8f5c3
004170fa  MOV ECX,dword ptr [EBP + 0xfffff994]
00417100  CALL 0x00401140
00417105  MOV ECX,dword ptr [EBP + -0x2c]
00417108  MOV EDX,dword ptr [EBP + 0xfffff994]
0041710e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417115  FSTP float ptr [EAX + 0x164]
0041711b  MOV ECX,dword ptr [EBP + -0x2c]
0041711e  PUSH ECX
0041711f  LEA EDX,[EBP + 0xfffffa4c]
00417125  PUSH EDX
00417126  MOV ECX,dword ptr [EBP + 0xfffff994]
0041712c  CALL 0x00401136
00417131  MOV ECX,dword ptr [EBP + -0x2c]
00417134  MOV EDX,dword ptr [EBP + 0xfffff994]
0041713a  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417141  ADD ECX,0x158
00417147  MOV EDX,dword ptr [EAX]
00417149  MOV dword ptr [ECX],EDX
0041714b  MOV EDX,dword ptr [EAX + 0x4]
0041714e  MOV dword ptr [ECX + 0x4],EDX
00417151  MOV EAX,dword ptr [EAX + 0x8]
00417154  MOV dword ptr [ECX + 0x8],EAX
00417157  MOV ECX,dword ptr [EBP + -0x2c]
0041715a  MOV EDX,dword ptr [EBP + 0xfffff994]
00417160  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417167  CALL 0x00401212
0041716c  JMP 0x00417ac4
00417171  MOV EAX,dword ptr [EBP + -0x2c]
00417174  MOV ECX,dword ptr [EBP + 0xfffff994]
0041717a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417181  FLD float ptr [EDX + 0x158]
00417187  FCOMP float ptr [0x0044e10c] {35}
0041718d  FNSTSW AX
0041718f  TEST AH,0x41
00417192  JNZ 0x00417230
00417198  PUSH 0x40a00000
0041719d  MOV EAX,dword ptr [EBP + -0x2c]
004171a0  MOV ECX,dword ptr [EBP + 0xfffff994]
004171a6  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004171ad  MOV EAX,dword ptr [EDX + 0x164]
004171b3  PUSH EAX
004171b4  PUSH 0x3fc8f5c3
004171b9  MOV ECX,dword ptr [EBP + 0xfffff994]
004171bf  CALL 0x00401140
004171c4  MOV ECX,dword ptr [EBP + -0x2c]
004171c7  MOV EDX,dword ptr [EBP + 0xfffff994]
004171cd  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004171d4  FSTP float ptr [EAX + 0x164]
004171da  MOV ECX,dword ptr [EBP + -0x2c]
004171dd  PUSH ECX
004171de  LEA EDX,[EBP + 0xfffffa40]
004171e4  PUSH EDX
004171e5  MOV ECX,dword ptr [EBP + 0xfffff994]
004171eb  CALL 0x00401136
004171f0  MOV ECX,dword ptr [EBP + -0x2c]
004171f3  MOV EDX,dword ptr [EBP + 0xfffff994]
004171f9  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417200  ADD ECX,0x158
00417206  MOV EDX,dword ptr [EAX]
00417208  MOV dword ptr [ECX],EDX
0041720a  MOV EDX,dword ptr [EAX + 0x4]
0041720d  MOV dword ptr [ECX + 0x4],EDX
00417210  MOV EAX,dword ptr [EAX + 0x8]
00417213  MOV dword ptr [ECX + 0x8],EAX
00417216  MOV ECX,dword ptr [EBP + -0x2c]
00417219  MOV EDX,dword ptr [EBP + 0xfffff994]
0041721f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417226  CALL 0x00401212
0041722b  JMP 0x00417ac4
00417230  MOV EAX,dword ptr [EBP + 0xfffff994]
00417236  MOV ECX,dword ptr [EAX + 0x268]
0041723c  CMP ECX,dword ptr [EBP + -0x34]
0041723f  JNZ 0x00417996
00417245  MOV EDX,dword ptr [EBP + 0xfffff994]
0041724b  XOR EAX,EAX
0041724d  MOV AL,byte ptr [EDX + 0x3a6]
00417253  TEST EAX,EAX
00417255  JZ 0x004175df
0041725b  MOV ECX,dword ptr [EBP + -0x2c]
0041725e  MOV EDX,dword ptr [EBP + 0xfffff994]
00417264  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041726b  FLD float ptr [EAX + 0x158]
00417271  FCOMP float ptr [0x0044e140] {-25}
00417277  FNSTSW AX
00417279  TEST AH,0x1
0041727c  JZ 0x00417435
00417282  MOV ECX,dword ptr [EBP + -0x34]
00417285  MOV EDX,dword ptr [EBP + 0xfffff994]
0041728b  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417292  FLD float ptr [EAX + 0x158]
00417298  FCOMP float ptr [0x0044e11c] {-18}
0041729e  FNSTSW AX
004172a0  TEST AH,0x1
004172a3  JZ 0x00417387
004172a9  PUSH 0x40a00000
004172ae  MOV ECX,dword ptr [EBP + -0x2c]
004172b1  MOV EDX,dword ptr [EBP + 0xfffff994]
004172b7  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004172be  MOV ECX,dword ptr [EAX + 0x164]
004172c4  PUSH ECX
004172c5  MOV EDX,dword ptr [EBP + -0x2c]
004172c8  MOV EAX,dword ptr [EBP + 0xfffff994]
004172ce  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004172d5  FLD float ptr [ECX + 0x160]
004172db  FSUB float ptr [0x0044e128] {15}
004172e1  PUSH ECX
004172e2  FSTP float ptr [ESP]
004172e5  MOV EDX,dword ptr [EBP + -0x2c]
004172e8  MOV EAX,dword ptr [EBP + 0xfffff994]
004172ee  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004172f5  FLD float ptr [ECX + 0x158]
004172fb  FADD float ptr [0x0044e12c] {30}
00417301  PUSH ECX
00417302  FSTP float ptr [ESP]
00417305  CALL 0x00401127
0041730a  ADD ESP,0x4
0041730d  FSTP float ptr [ESP]
00417310  MOV ECX,dword ptr [EBP + 0xfffff994]
00417316  CALL 0x00401140
0041731b  MOV EDX,dword ptr [EBP + -0x2c]
0041731e  MOV EAX,dword ptr [EBP + 0xfffff994]
00417324  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041732b  FSTP float ptr [ECX + 0x164]
00417331  MOV EDX,dword ptr [EBP + -0x2c]
00417334  PUSH EDX
00417335  LEA EAX,[EBP + 0xfffffa34]
0041733b  PUSH EAX
0041733c  MOV ECX,dword ptr [EBP + 0xfffff994]
00417342  CALL 0x00401136
00417347  MOV ECX,dword ptr [EBP + -0x2c]
0041734a  MOV EDX,dword ptr [EBP + 0xfffff994]
00417350  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417357  ADD ECX,0x158
0041735d  MOV EDX,dword ptr [EAX]
0041735f  MOV dword ptr [ECX],EDX
00417361  MOV EDX,dword ptr [EAX + 0x4]
00417364  MOV dword ptr [ECX + 0x4],EDX
00417367  MOV EAX,dword ptr [EAX + 0x8]
0041736a  MOV dword ptr [ECX + 0x8],EAX
0041736d  MOV ECX,dword ptr [EBP + -0x2c]
00417370  MOV EDX,dword ptr [EBP + 0xfffff994]
00417376  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041737d  CALL 0x00401212
00417382  JMP 0x00417430
00417387  PUSH 0x40a00000
0041738c  MOV EAX,dword ptr [EBP + -0x2c]
0041738f  MOV ECX,dword ptr [EBP + 0xfffff994]
00417395  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041739c  MOV EAX,dword ptr [EDX + 0x164]
004173a2  PUSH EAX
004173a3  MOV ECX,dword ptr [EBP + -0x2c]
004173a6  MOV EDX,dword ptr [EBP + 0xfffff994]
004173ac  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004173b3  MOV ECX,dword ptr [EBP + 0xfffff994]
004173b9  FLD float ptr [EAX + 0x160]
004173bf  FSUB float ptr [ECX + 0x254]
004173c5  PUSH ECX
004173c6  FSTP float ptr [ESP]
004173c9  MOV EDX,dword ptr [EBP + -0x2c]
004173cc  MOV EAX,dword ptr [EBP + 0xfffff994]
004173d2  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004173d9  MOV EDX,dword ptr [EBP + 0xfffff994]
004173df  FLD float ptr [ECX + 0x158]
004173e5  FSUB float ptr [EDX + 0x24c]
004173eb  PUSH ECX
004173ec  FSTP float ptr [ESP]
004173ef  CALL 0x00401127
004173f4  ADD ESP,0x4
004173f7  FSTP float ptr [ESP]
004173fa  MOV ECX,dword ptr [EBP + 0xfffff994]
00417400  CALL 0x00401140
00417405  MOV EAX,dword ptr [EBP + -0x2c]
00417408  MOV ECX,dword ptr [EBP + 0xfffff994]
0041740e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417415  FSTP float ptr [EDX + 0x164]
0041741b  MOV EAX,dword ptr [EBP + -0x2c]
0041741e  MOV ECX,dword ptr [EBP + 0xfffff994]
00417424  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041742b  CALL 0x00401384
00417430  JMP 0x004175da
00417435  MOV EDX,dword ptr [EBP + -0x2c]
00417438  MOV EAX,dword ptr [EBP + 0xfffff994]
0041743e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00417445  MOV EDX,dword ptr [EBP + -0x34]
00417448  MOV EAX,dword ptr [EBP + 0xfffff994]
0041744e  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00417455  FLD float ptr [ECX + 0x158]
0041745b  FSUB float ptr [EDX + 0x158]
00417461  FCOMP float ptr [0x0044e164] {-8}
00417467  FNSTSW AX
00417469  TEST AH,0x41
0041746c  JNZ 0x0041750a
00417472  PUSH 0x40a00000
00417477  MOV EAX,dword ptr [EBP + -0x2c]
0041747a  MOV ECX,dword ptr [EBP + 0xfffff994]
00417480  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417487  MOV EAX,dword ptr [EDX + 0x164]
0041748d  PUSH EAX
0041748e  PUSH 0x3fc8f5c3
00417493  MOV ECX,dword ptr [EBP + 0xfffff994]
00417499  CALL 0x00401140
0041749e  MOV ECX,dword ptr [EBP + -0x2c]
004174a1  MOV EDX,dword ptr [EBP + 0xfffff994]
004174a7  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004174ae  FSTP float ptr [EAX + 0x164]
004174b4  MOV ECX,dword ptr [EBP + -0x2c]
004174b7  PUSH ECX
004174b8  LEA EDX,[EBP + 0xfffffa28]
004174be  PUSH EDX
004174bf  MOV ECX,dword ptr [EBP + 0xfffff994]
004174c5  CALL 0x00401136
004174ca  MOV ECX,dword ptr [EBP + -0x2c]
004174cd  MOV EDX,dword ptr [EBP + 0xfffff994]
004174d3  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004174da  ADD ECX,0x158
004174e0  MOV EDX,dword ptr [EAX]
004174e2  MOV dword ptr [ECX],EDX
004174e4  MOV EDX,dword ptr [EAX + 0x4]
004174e7  MOV dword ptr [ECX + 0x4],EDX
004174ea  MOV EAX,dword ptr [EAX + 0x8]
004174ed  MOV dword ptr [ECX + 0x8],EAX
004174f0  MOV ECX,dword ptr [EBP + -0x2c]
004174f3  MOV EDX,dword ptr [EBP + 0xfffff994]
004174f9  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417500  CALL 0x00401212
00417505  JMP 0x004175da
0041750a  PUSH 0x40a00000
0041750f  MOV EAX,dword ptr [EBP + -0x2c]
00417512  MOV ECX,dword ptr [EBP + 0xfffff994]
00417518  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041751f  MOV EAX,dword ptr [EDX + 0x164]
00417525  PUSH EAX
00417526  MOV ECX,dword ptr [EBP + -0x2c]
00417529  MOV EDX,dword ptr [EBP + 0xfffff994]
0041752f  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417536  MOV ECX,dword ptr [EAX + 0x160]
0041753c  PUSH ECX
0041753d  MOV EDX,dword ptr [EBP + -0x2c]
00417540  MOV EAX,dword ptr [EBP + 0xfffff994]
00417546  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041754d  FLD float ptr [ECX + 0x158]
00417553  FADD float ptr [0x0044e168] {28}
00417559  PUSH ECX
0041755a  FSTP float ptr [ESP]
0041755d  CALL 0x00401127
00417562  ADD ESP,0x4
00417565  FSTP float ptr [ESP]
00417568  MOV ECX,dword ptr [EBP + 0xfffff994]
0041756e  CALL 0x00401140
00417573  MOV EDX,dword ptr [EBP + -0x2c]
00417576  MOV EAX,dword ptr [EBP + 0xfffff994]
0041757c  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00417583  FSTP float ptr [ECX + 0x164]
00417589  MOV EDX,dword ptr [EBP + -0x2c]
0041758c  PUSH EDX
0041758d  LEA EAX,[EBP + 0xfffffa1c]
00417593  PUSH EAX
00417594  MOV ECX,dword ptr [EBP + 0xfffff994]
0041759a  CALL 0x00401136
0041759f  MOV ECX,dword ptr [EBP + -0x2c]
004175a2  MOV EDX,dword ptr [EBP + 0xfffff994]
004175a8  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004175af  ADD ECX,0x158
004175b5  MOV EDX,dword ptr [EAX]
004175b7  MOV dword ptr [ECX],EDX
004175b9  MOV EDX,dword ptr [EAX + 0x4]
004175bc  MOV dword ptr [ECX + 0x4],EDX
004175bf  MOV EAX,dword ptr [EAX + 0x8]
004175c2  MOV dword ptr [ECX + 0x8],EAX
004175c5  MOV ECX,dword ptr [EBP + -0x2c]
004175c8  MOV EDX,dword ptr [EBP + 0xfffff994]
004175ce  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004175d5  CALL 0x00401212
004175da  JMP 0x00417991
004175df  MOV EAX,dword ptr [EBP + -0x2c]
004175e2  MOV ECX,dword ptr [EBP + 0xfffff994]
004175e8  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004175ef  FLD float ptr [EDX + 0x158]
004175f5  FCOMP float ptr [0x0044e120] {25}
004175fb  FNSTSW AX
004175fd  TEST AH,0x41
00417600  JNZ 0x004177b9
00417606  MOV EAX,dword ptr [EBP + -0x34]
00417609  MOV ECX,dword ptr [EBP + 0xfffff994]
0041760f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417616  FLD float ptr [EDX + 0x158]
0041761c  FCOMP float ptr [0x0044e118] {18}
00417622  FNSTSW AX
00417624  TEST AH,0x41
00417627  JNZ 0x0041770b
0041762d  PUSH 0x40a00000
00417632  MOV EAX,dword ptr [EBP + -0x2c]
00417635  MOV ECX,dword ptr [EBP + 0xfffff994]
0041763b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417642  MOV EAX,dword ptr [EDX + 0x164]
00417648  PUSH EAX
00417649  MOV ECX,dword ptr [EBP + -0x2c]
0041764c  MOV EDX,dword ptr [EBP + 0xfffff994]
00417652  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417659  FLD float ptr [EAX + 0x160]
0041765f  FSUB float ptr [0x0044e128] {15}
00417665  PUSH ECX
00417666  FSTP float ptr [ESP]
00417669  MOV ECX,dword ptr [EBP + -0x2c]
0041766c  MOV EDX,dword ptr [EBP + 0xfffff994]
00417672  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417679  FLD float ptr [EAX + 0x158]
0041767f  FSUB float ptr [0x0044e12c] {30}
00417685  PUSH ECX
00417686  FSTP float ptr [ESP]
00417689  CALL 0x00401127
0041768e  ADD ESP,0x4
00417691  FSTP float ptr [ESP]
00417694  MOV ECX,dword ptr [EBP + 0xfffff994]
0041769a  CALL 0x00401140
0041769f  MOV ECX,dword ptr [EBP + -0x2c]
004176a2  MOV EDX,dword ptr [EBP + 0xfffff994]
004176a8  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004176af  FSTP float ptr [EAX + 0x164]
004176b5  MOV ECX,dword ptr [EBP + -0x2c]
004176b8  PUSH ECX
004176b9  LEA EDX,[EBP + 0xfffffa10]
004176bf  PUSH EDX
004176c0  MOV ECX,dword ptr [EBP + 0xfffff994]
004176c6  CALL 0x00401136
004176cb  MOV ECX,dword ptr [EBP + -0x2c]
004176ce  MOV EDX,dword ptr [EBP + 0xfffff994]
004176d4  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004176db  ADD ECX,0x158
004176e1  MOV EDX,dword ptr [EAX]
004176e3  MOV dword ptr [ECX],EDX
004176e5  MOV EDX,dword ptr [EAX + 0x4]
004176e8  MOV dword ptr [ECX + 0x4],EDX
004176eb  MOV EAX,dword ptr [EAX + 0x8]
004176ee  MOV dword ptr [ECX + 0x8],EAX
004176f1  MOV ECX,dword ptr [EBP + -0x2c]
004176f4  MOV EDX,dword ptr [EBP + 0xfffff994]
004176fa  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417701  CALL 0x00401212
00417706  JMP 0x004177b4
0041770b  PUSH 0x40a00000
00417710  MOV EAX,dword ptr [EBP + -0x2c]
00417713  MOV ECX,dword ptr [EBP + 0xfffff994]
00417719  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417720  MOV EAX,dword ptr [EDX + 0x164]
00417726  PUSH EAX
00417727  MOV ECX,dword ptr [EBP + -0x2c]
0041772a  MOV EDX,dword ptr [EBP + 0xfffff994]
00417730  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417737  MOV ECX,dword ptr [EBP + 0xfffff994]
0041773d  FLD float ptr [EAX + 0x160]
00417743  FSUB float ptr [ECX + 0x254]
00417749  PUSH ECX
0041774a  FSTP float ptr [ESP]
0041774d  MOV EDX,dword ptr [EBP + -0x2c]
00417750  MOV EAX,dword ptr [EBP + 0xfffff994]
00417756  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041775d  MOV EDX,dword ptr [EBP + 0xfffff994]
00417763  FLD float ptr [ECX + 0x158]
00417769  FSUB float ptr [EDX + 0x24c]
0041776f  PUSH ECX
00417770  FSTP float ptr [ESP]
00417773  CALL 0x00401127
00417778  ADD ESP,0x4
0041777b  FSTP float ptr [ESP]
0041777e  MOV ECX,dword ptr [EBP + 0xfffff994]
00417784  CALL 0x00401140
00417789  MOV EAX,dword ptr [EBP + -0x2c]
0041778c  MOV ECX,dword ptr [EBP + 0xfffff994]
00417792  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417799  FSTP float ptr [EDX + 0x164]
0041779f  MOV EAX,dword ptr [EBP + -0x2c]
004177a2  MOV ECX,dword ptr [EBP + 0xfffff994]
004177a8  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
004177af  CALL 0x00401384
004177b4  JMP 0x00417991
004177b9  MOV EDX,dword ptr [EBP + -0x2c]
004177bc  MOV EAX,dword ptr [EBP + 0xfffff994]
004177c2  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004177c9  MOV EDX,dword ptr [EBP + -0x34]
004177cc  MOV EAX,dword ptr [EBP + 0xfffff994]
004177d2  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
004177d9  FLD float ptr [ECX + 0x158]
004177df  FSUB float ptr [EDX + 0x158]
004177e5  FCOMP float ptr [0x0044e0fc] {8}
004177eb  FNSTSW AX
004177ed  TEST AH,0x1
004177f0  JZ 0x004177fe
004177f2  MOV dword ptr [EBP + 0xfffff908],0x1
004177fc  JMP 0x00417808
004177fe  MOV dword ptr [EBP + 0xfffff908],0x0
00417808  MOV EAX,dword ptr [EBP + 0xfffff994]
0041780e  XOR ECX,ECX
00417810  MOV CL,byte ptr [EAX + 0x3a6]
00417816  NEG ECX
00417818  SBB ECX,ECX
0041781a  INC ECX
0041781b  AND ECX,dword ptr [EBP + 0xfffff908]
00417821  TEST ECX,ECX
00417823  JZ 0x004178c1
00417829  PUSH 0x40a00000
0041782e  MOV EDX,dword ptr [EBP + -0x2c]
00417831  MOV EAX,dword ptr [EBP + 0xfffff994]
00417837  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041783e  MOV EDX,dword ptr [ECX + 0x164]
00417844  PUSH EDX
00417845  PUSH 0xbfc8f5c3
0041784a  MOV ECX,dword ptr [EBP + 0xfffff994]
00417850  CALL 0x00401140
00417855  MOV EAX,dword ptr [EBP + -0x2c]
00417858  MOV ECX,dword ptr [EBP + 0xfffff994]
0041785e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417865  FSTP float ptr [EDX + 0x164]
0041786b  MOV EAX,dword ptr [EBP + -0x2c]
0041786e  PUSH EAX
0041786f  LEA ECX,[EBP + 0xfffffa04]
00417875  PUSH ECX
00417876  MOV ECX,dword ptr [EBP + 0xfffff994]
0041787c  CALL 0x00401136
00417881  MOV EDX,dword ptr [EBP + -0x2c]
00417884  MOV ECX,dword ptr [EBP + 0xfffff994]
0041788a  MOV EDX,dword ptr [ECX + EDX*0x4 + 0xd8]
00417891  ADD EDX,0x158
00417897  MOV ECX,dword ptr [EAX]
00417899  MOV dword ptr [EDX],ECX
0041789b  MOV ECX,dword ptr [EAX + 0x4]
0041789e  MOV dword ptr [EDX + 0x4],ECX
004178a1  MOV EAX,dword ptr [EAX + 0x8]
004178a4  MOV dword ptr [EDX + 0x8],EAX
004178a7  MOV ECX,dword ptr [EBP + -0x2c]
004178aa  MOV EDX,dword ptr [EBP + 0xfffff994]
004178b0  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004178b7  CALL 0x00401212
004178bc  JMP 0x00417991
004178c1  PUSH 0x40a00000
004178c6  MOV EAX,dword ptr [EBP + -0x2c]
004178c9  MOV ECX,dword ptr [EBP + 0xfffff994]
004178cf  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004178d6  MOV EAX,dword ptr [EDX + 0x164]
004178dc  PUSH EAX
004178dd  MOV ECX,dword ptr [EBP + -0x2c]
004178e0  MOV EDX,dword ptr [EBP + 0xfffff994]
004178e6  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004178ed  MOV ECX,dword ptr [EAX + 0x160]
004178f3  PUSH ECX
004178f4  MOV EDX,dword ptr [EBP + -0x2c]
004178f7  MOV EAX,dword ptr [EBP + 0xfffff994]
004178fd  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00417904  FLD float ptr [ECX + 0x158]
0041790a  FSUB float ptr [0x0044e168] {28}
00417910  PUSH ECX
00417911  FSTP float ptr [ESP]
00417914  CALL 0x00401127
00417919  ADD ESP,0x4
0041791c  FSTP float ptr [ESP]
0041791f  MOV ECX,dword ptr [EBP + 0xfffff994]
00417925  CALL 0x00401140
0041792a  MOV EDX,dword ptr [EBP + -0x2c]
0041792d  MOV EAX,dword ptr [EBP + 0xfffff994]
00417933  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041793a  FSTP float ptr [ECX + 0x164]
00417940  MOV EDX,dword ptr [EBP + -0x2c]
00417943  PUSH EDX
00417944  LEA EAX,[EBP + 0xfffff9f8]
0041794a  PUSH EAX
0041794b  MOV ECX,dword ptr [EBP + 0xfffff994]
00417951  CALL 0x00401136
00417956  MOV ECX,dword ptr [EBP + -0x2c]
00417959  MOV EDX,dword ptr [EBP + 0xfffff994]
0041795f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417966  ADD ECX,0x158
0041796c  MOV EDX,dword ptr [EAX]
0041796e  MOV dword ptr [ECX],EDX
00417970  MOV EDX,dword ptr [EAX + 0x4]
00417973  MOV dword ptr [ECX + 0x4],EDX
00417976  MOV EAX,dword ptr [EAX + 0x8]
00417979  MOV dword ptr [ECX + 0x8],EAX
0041797c  MOV ECX,dword ptr [EBP + -0x2c]
0041797f  MOV EDX,dword ptr [EBP + 0xfffff994]
00417985  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041798c  CALL 0x00401212
00417991  JMP 0x00417ac4
00417996  MOV EAX,dword ptr [EBP + 0xfffff994]
0041799c  FLD float ptr [0x0044e0d4] {5}
004179a2  FDIV float ptr [EAX + 0x400]
004179a8  PUSH ECX
004179a9  FSTP float ptr [ESP]
004179ac  MOV ECX,dword ptr [EBP + -0x2c]
004179af  MOV EDX,dword ptr [EBP + 0xfffff994]
004179b5  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004179bc  MOV ECX,dword ptr [EAX + 0x164]
004179c2  PUSH ECX
004179c3  MOV EDX,dword ptr [EBP + -0x2c]
004179c6  MOV EAX,dword ptr [EBP + 0xfffff994]
004179cc  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004179d3  MOV EDX,dword ptr [EBP + -0x10]
004179d6  MOV EAX,dword ptr [EBP + 0xfffff994]
004179dc  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
004179e3  MOV EAX,dword ptr [EBP + 0xfffff994]
004179e9  FLD float ptr [EDX + 0x160]
004179ef  FADD float ptr [EAX + 0x254]
004179f5  FDIV float ptr [0x0044e114] {2}
004179fb  FSUBR float ptr [ECX + 0x160]
00417a01  PUSH ECX
00417a02  FSTP float ptr [ESP]
00417a05  MOV ECX,dword ptr [EBP + -0x2c]
00417a08  MOV EDX,dword ptr [EBP + 0xfffff994]
00417a0e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417a15  MOV ECX,dword ptr [EBP + -0x10]
00417a18  MOV EDX,dword ptr [EBP + 0xfffff994]
00417a1e  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417a25  MOV EDX,dword ptr [EBP + 0xfffff994]
00417a2b  FLD float ptr [ECX + 0x158]
00417a31  FADD float ptr [EDX + 0x24c]
00417a37  FDIV float ptr [0x0044e114] {2}
00417a3d  FSUBR float ptr [EAX + 0x158]
00417a43  PUSH ECX
00417a44  FSTP float ptr [ESP]
00417a47  CALL 0x00401127
00417a4c  ADD ESP,0x4
00417a4f  FSTP float ptr [ESP]
00417a52  MOV ECX,dword ptr [EBP + 0xfffff994]
00417a58  CALL 0x00401140
00417a5d  MOV EAX,dword ptr [EBP + -0x2c]
00417a60  MOV ECX,dword ptr [EBP + 0xfffff994]
00417a66  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417a6d  FSTP float ptr [EDX + 0x164]
00417a73  MOV EAX,dword ptr [EBP + -0x2c]
00417a76  PUSH EAX
00417a77  LEA ECX,[EBP + 0xfffff9ec]
00417a7d  PUSH ECX
00417a7e  MOV ECX,dword ptr [EBP + 0xfffff994]
00417a84  CALL 0x00401136
00417a89  MOV EDX,dword ptr [EBP + -0x2c]
00417a8c  MOV ECX,dword ptr [EBP + 0xfffff994]
00417a92  MOV EDX,dword ptr [ECX + EDX*0x4 + 0xd8]
00417a99  ADD EDX,0x158
00417a9f  MOV ECX,dword ptr [EAX]
00417aa1  MOV dword ptr [EDX],ECX
00417aa3  MOV ECX,dword ptr [EAX + 0x4]
00417aa6  MOV dword ptr [EDX + 0x4],ECX
00417aa9  MOV EAX,dword ptr [EAX + 0x8]
00417aac  MOV dword ptr [EDX + 0x8],EAX
00417aaf  MOV ECX,dword ptr [EBP + -0x2c]
00417ab2  MOV EDX,dword ptr [EBP + 0xfffff994]
00417ab8  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417abf  CALL 0x00401212
00417ac4  MOV EAX,dword ptr [EBP + -0x28]
00417ac7  MOV ECX,dword ptr [EBP + 0xfffff994]
00417acd  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417ad4  XOR EAX,EAX
00417ad6  CMP dword ptr [EDX + 0x190],0x6
00417add  SETG AL
00417ae0  MOV ECX,dword ptr [EBP + -0x28]
00417ae3  MOV EDX,dword ptr [EBP + 0xfffff994]
00417ae9  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417af0  XOR EDX,EDX
00417af2  CMP dword ptr [ECX + 0x190],0xa
00417af9  SETL DL
00417afc  AND EAX,EDX
00417afe  TEST EAX,EAX
00417b00  JZ 0x00418304
00417b06  MOV EAX,dword ptr [EBP + -0x28]
00417b09  MOV ECX,dword ptr [EBP + 0xfffff994]
00417b0f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417b16  FLD float ptr [EDX + 0x160]
00417b1c  FCOMP float ptr [0x0044e118] {18}
00417b22  FNSTSW AX
00417b24  TEST AH,0x41
00417b27  JNZ 0x00417bc2
00417b2d  PUSH 0x40a00000
00417b32  MOV EAX,dword ptr [EBP + -0x28]
00417b35  MOV ECX,dword ptr [EBP + 0xfffff994]
00417b3b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417b42  MOV EAX,dword ptr [EDX + 0x164]
00417b48  PUSH EAX
00417b49  PUSH 0x0
00417b4b  MOV ECX,dword ptr [EBP + 0xfffff994]
00417b51  CALL 0x00401140
00417b56  MOV ECX,dword ptr [EBP + -0x28]
00417b59  MOV EDX,dword ptr [EBP + 0xfffff994]
00417b5f  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417b66  FSTP float ptr [EAX + 0x164]
00417b6c  MOV ECX,dword ptr [EBP + -0x28]
00417b6f  PUSH ECX
00417b70  LEA EDX,[EBP + 0xfffff9e0]
00417b76  PUSH EDX
00417b77  MOV ECX,dword ptr [EBP + 0xfffff994]
00417b7d  CALL 0x00401136
00417b82  MOV ECX,dword ptr [EBP + -0x28]
00417b85  MOV EDX,dword ptr [EBP + 0xfffff994]
00417b8b  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417b92  ADD ECX,0x158
00417b98  MOV EDX,dword ptr [EAX]
00417b9a  MOV dword ptr [ECX],EDX
00417b9c  MOV EDX,dword ptr [EAX + 0x4]
00417b9f  MOV dword ptr [ECX + 0x4],EDX
00417ba2  MOV EAX,dword ptr [EAX + 0x8]
00417ba5  MOV dword ptr [ECX + 0x8],EAX
00417ba8  MOV ECX,dword ptr [EBP + -0x28]
00417bab  MOV EDX,dword ptr [EBP + 0xfffff994]
00417bb1  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417bb8  CALL 0x00401212
00417bbd  JMP 0x00418304
00417bc2  MOV EAX,dword ptr [EBP + -0x28]
00417bc5  MOV ECX,dword ptr [EBP + 0xfffff994]
00417bcb  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417bd2  FLD float ptr [EDX + 0x160]
00417bd8  FCOMP float ptr [0x0044e11c] {-18}
00417bde  FNSTSW AX
00417be0  TEST AH,0x1
00417be3  JZ 0x00417c81
00417be9  PUSH 0x40a00000
00417bee  MOV EAX,dword ptr [EBP + -0x28]
00417bf1  MOV ECX,dword ptr [EBP + 0xfffff994]
00417bf7  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417bfe  MOV EAX,dword ptr [EDX + 0x164]
00417c04  PUSH EAX
00417c05  PUSH 0x4048f5c3
00417c0a  MOV ECX,dword ptr [EBP + 0xfffff994]
00417c10  CALL 0x00401140
00417c15  MOV ECX,dword ptr [EBP + -0x28]
00417c18  MOV EDX,dword ptr [EBP + 0xfffff994]
00417c1e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417c25  FSTP float ptr [EAX + 0x164]
00417c2b  MOV ECX,dword ptr [EBP + -0x28]
00417c2e  PUSH ECX
00417c2f  LEA EDX,[EBP + 0xfffff9d4]
00417c35  PUSH EDX
00417c36  MOV ECX,dword ptr [EBP + 0xfffff994]
00417c3c  CALL 0x00401136
00417c41  MOV ECX,dword ptr [EBP + -0x28]
00417c44  MOV EDX,dword ptr [EBP + 0xfffff994]
00417c4a  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417c51  ADD ECX,0x158
00417c57  MOV EDX,dword ptr [EAX]
00417c59  MOV dword ptr [ECX],EDX
00417c5b  MOV EDX,dword ptr [EAX + 0x4]
00417c5e  MOV dword ptr [ECX + 0x4],EDX
00417c61  MOV EAX,dword ptr [EAX + 0x8]
00417c64  MOV dword ptr [ECX + 0x8],EAX
00417c67  MOV ECX,dword ptr [EBP + -0x28]
00417c6a  MOV EDX,dword ptr [EBP + 0xfffff994]
00417c70  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417c77  CALL 0x00401212
00417c7c  JMP 0x00418304
00417c81  MOV EAX,dword ptr [EBP + -0x28]
00417c84  MOV ECX,dword ptr [EBP + 0xfffff994]
00417c8a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417c91  FLD float ptr [EDX + 0x158]
00417c97  FCOMP float ptr [0x0044e130] {-35}
00417c9d  FNSTSW AX
00417c9f  TEST AH,0x1
00417ca2  JZ 0x00417d40
00417ca8  PUSH 0x40a00000
00417cad  MOV EAX,dword ptr [EBP + -0x28]
00417cb0  MOV ECX,dword ptr [EBP + 0xfffff994]
00417cb6  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417cbd  MOV EAX,dword ptr [EDX + 0x164]
00417cc3  PUSH EAX
00417cc4  PUSH 0xbfc8f5c3
00417cc9  MOV ECX,dword ptr [EBP + 0xfffff994]
00417ccf  CALL 0x00401140
00417cd4  MOV ECX,dword ptr [EBP + -0x28]
00417cd7  MOV EDX,dword ptr [EBP + 0xfffff994]
00417cdd  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417ce4  FSTP float ptr [EAX + 0x164]
00417cea  MOV ECX,dword ptr [EBP + -0x28]
00417ced  PUSH ECX
00417cee  LEA EDX,[EBP + 0xfffff9c8]
00417cf4  PUSH EDX
00417cf5  MOV ECX,dword ptr [EBP + 0xfffff994]
00417cfb  CALL 0x00401136
00417d00  MOV ECX,dword ptr [EBP + -0x28]
00417d03  MOV EDX,dword ptr [EBP + 0xfffff994]
00417d09  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417d10  ADD ECX,0x158
00417d16  MOV EDX,dword ptr [EAX]
00417d18  MOV dword ptr [ECX],EDX
00417d1a  MOV EDX,dword ptr [EAX + 0x4]
00417d1d  MOV dword ptr [ECX + 0x4],EDX
00417d20  MOV EAX,dword ptr [EAX + 0x8]
00417d23  MOV dword ptr [ECX + 0x8],EAX
00417d26  MOV ECX,dword ptr [EBP + -0x28]
00417d29  MOV EDX,dword ptr [EBP + 0xfffff994]
00417d2f  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417d36  CALL 0x00401212
00417d3b  JMP 0x00418304
00417d40  MOV EAX,dword ptr [EBP + -0x28]
00417d43  MOV ECX,dword ptr [EBP + 0xfffff994]
00417d49  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417d50  FLD float ptr [EDX + 0x158]
00417d56  FCOMP float ptr [0x0044e10c] {35}
00417d5c  FNSTSW AX
00417d5e  TEST AH,0x41
00417d61  JNZ 0x00417dff
00417d67  PUSH 0x40a00000
00417d6c  MOV EAX,dword ptr [EBP + -0x28]
00417d6f  MOV ECX,dword ptr [EBP + 0xfffff994]
00417d75  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417d7c  MOV EAX,dword ptr [EDX + 0x164]
00417d82  PUSH EAX
00417d83  PUSH 0x3fc8f5c3
00417d88  MOV ECX,dword ptr [EBP + 0xfffff994]
00417d8e  CALL 0x00401140
00417d93  MOV ECX,dword ptr [EBP + -0x28]
00417d96  MOV EDX,dword ptr [EBP + 0xfffff994]
00417d9c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417da3  FSTP float ptr [EAX + 0x164]
00417da9  MOV ECX,dword ptr [EBP + -0x28]
00417dac  PUSH ECX
00417dad  LEA EDX,[EBP + 0xfffff9bc]
00417db3  PUSH EDX
00417db4  MOV ECX,dword ptr [EBP + 0xfffff994]
00417dba  CALL 0x00401136
00417dbf  MOV ECX,dword ptr [EBP + -0x28]
00417dc2  MOV EDX,dword ptr [EBP + 0xfffff994]
00417dc8  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417dcf  ADD ECX,0x158
00417dd5  MOV EDX,dword ptr [EAX]
00417dd7  MOV dword ptr [ECX],EDX
00417dd9  MOV EDX,dword ptr [EAX + 0x4]
00417ddc  MOV dword ptr [ECX + 0x4],EDX
00417ddf  MOV EAX,dword ptr [EAX + 0x8]
00417de2  MOV dword ptr [ECX + 0x8],EAX
00417de5  MOV ECX,dword ptr [EBP + -0x28]
00417de8  MOV EDX,dword ptr [EBP + 0xfffff994]
00417dee  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417df5  CALL 0x00401212
00417dfa  JMP 0x00418304
00417dff  MOV EAX,dword ptr [EBP + 0xfffff994]
00417e05  MOV ECX,dword ptr [EAX + 0x268]
00417e0b  CMP ECX,dword ptr [EBP + -0x4]
00417e0e  JNZ 0x004181d6
00417e14  MOV EDX,dword ptr [EBP + 0xfffff994]
00417e1a  XOR EAX,EAX
00417e1c  MOV AL,byte ptr [EDX + 0x3a6]
00417e22  TEST EAX,EAX
00417e24  JZ 0x00418000
00417e2a  MOV ECX,dword ptr [EBP + -0x14]
00417e2d  MOV EDX,dword ptr [EBP + 0xfffff994]
00417e33  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417e3a  MOV ECX,dword ptr [EBP + -0x28]
00417e3d  MOV EDX,dword ptr [EBP + 0xfffff994]
00417e43  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417e4a  FLD float ptr [EAX + 0x158]
00417e50  FSUB float ptr [ECX + 0x158]
00417e56  FCOMP float ptr [0x0044e0f4] {-2}
00417e5c  FNSTSW AX
00417e5e  TEST AH,0x41
00417e61  JNZ 0x00417f52
00417e67  PUSH 0x40a00000
00417e6c  MOV EDX,dword ptr [EBP + -0x28]
00417e6f  MOV EAX,dword ptr [EBP + 0xfffff994]
00417e75  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00417e7c  MOV EDX,dword ptr [ECX + 0x164]
00417e82  PUSH EDX
00417e83  MOV EAX,dword ptr [EBP + -0x28]
00417e86  MOV ECX,dword ptr [EBP + 0xfffff994]
00417e8c  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417e93  MOV EAX,dword ptr [EDX + 0x160]
00417e99  PUSH EAX
00417e9a  MOV ECX,dword ptr [EBP + -0x28]
00417e9d  MOV EDX,dword ptr [EBP + 0xfffff994]
00417ea3  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417eaa  MOV ECX,dword ptr [EBP + -0x14]
00417ead  MOV EDX,dword ptr [EBP + 0xfffff994]
00417eb3  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417eba  FLD float ptr [ECX + 0x158]
00417ec0  FADD float ptr [0x0044e114] {2}
00417ec6  FSUBR float ptr [EAX + 0x158]
00417ecc  PUSH ECX
00417ecd  FSTP float ptr [ESP]
00417ed0  CALL 0x00401127
00417ed5  ADD ESP,0x4
00417ed8  FSTP float ptr [ESP]
00417edb  MOV ECX,dword ptr [EBP + 0xfffff994]
00417ee1  CALL 0x00401140
00417ee6  MOV EDX,dword ptr [EBP + -0x28]
00417ee9  MOV EAX,dword ptr [EBP + 0xfffff994]
00417eef  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00417ef6  FSTP float ptr [ECX + 0x164]
00417efc  MOV EDX,dword ptr [EBP + -0x28]
00417eff  PUSH EDX
00417f00  LEA EAX,[EBP + 0xfffff9b0]
00417f06  PUSH EAX
00417f07  MOV ECX,dword ptr [EBP + 0xfffff994]
00417f0d  CALL 0x00401136
00417f12  MOV ECX,dword ptr [EBP + -0x28]
00417f15  MOV EDX,dword ptr [EBP + 0xfffff994]
00417f1b  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417f22  ADD ECX,0x158
00417f28  MOV EDX,dword ptr [EAX]
00417f2a  MOV dword ptr [ECX],EDX
00417f2c  MOV EDX,dword ptr [EAX + 0x4]
00417f2f  MOV dword ptr [ECX + 0x4],EDX
00417f32  MOV EAX,dword ptr [EAX + 0x8]
00417f35  MOV dword ptr [ECX + 0x8],EAX
00417f38  MOV ECX,dword ptr [EBP + -0x28]
00417f3b  MOV EDX,dword ptr [EBP + 0xfffff994]
00417f41  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417f48  CALL 0x00401212
00417f4d  JMP 0x00417ffb
00417f52  PUSH 0x40a00000
00417f57  MOV EAX,dword ptr [EBP + -0x28]
00417f5a  MOV ECX,dword ptr [EBP + 0xfffff994]
00417f60  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417f67  MOV EAX,dword ptr [EDX + 0x164]
00417f6d  PUSH EAX
00417f6e  MOV ECX,dword ptr [EBP + -0x28]
00417f71  MOV EDX,dword ptr [EBP + 0xfffff994]
00417f77  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00417f7e  MOV ECX,dword ptr [EBP + 0xfffff994]
00417f84  FLD float ptr [EAX + 0x160]
00417f8a  FSUB float ptr [ECX + 0x254]
00417f90  PUSH ECX
00417f91  FSTP float ptr [ESP]
00417f94  MOV EDX,dword ptr [EBP + -0x28]
00417f97  MOV EAX,dword ptr [EBP + 0xfffff994]
00417f9d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00417fa4  MOV EDX,dword ptr [EBP + 0xfffff994]
00417faa  FLD float ptr [ECX + 0x158]
00417fb0  FSUB float ptr [EDX + 0x24c]
00417fb6  PUSH ECX
00417fb7  FSTP float ptr [ESP]
00417fba  CALL 0x00401127
00417fbf  ADD ESP,0x4
00417fc2  FSTP float ptr [ESP]
00417fc5  MOV ECX,dword ptr [EBP + 0xfffff994]
00417fcb  CALL 0x00401140
00417fd0  MOV EAX,dword ptr [EBP + -0x28]
00417fd3  MOV ECX,dword ptr [EBP + 0xfffff994]
00417fd9  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417fe0  FSTP float ptr [EDX + 0x164]
00417fe6  MOV EAX,dword ptr [EBP + -0x28]
00417fe9  MOV ECX,dword ptr [EBP + 0xfffff994]
00417fef  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
00417ff6  CALL 0x00401384
00417ffb  JMP 0x004181d1
00418000  MOV EDX,dword ptr [EBP + -0x14]
00418003  MOV EAX,dword ptr [EBP + 0xfffff994]
00418009  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418010  MOV EDX,dword ptr [EBP + -0x28]
00418013  MOV EAX,dword ptr [EBP + 0xfffff994]
00418019  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418020  FLD float ptr [ECX + 0x158]
00418026  FSUB float ptr [EDX + 0x158]
0041802c  FCOMP float ptr [0x0044e114] {2}
00418032  FNSTSW AX
00418034  TEST AH,0x1
00418037  JZ 0x00418128
0041803d  PUSH 0x40a00000
00418042  MOV EAX,dword ptr [EBP + -0x28]
00418045  MOV ECX,dword ptr [EBP + 0xfffff994]
0041804b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00418052  MOV EAX,dword ptr [EDX + 0x164]
00418058  PUSH EAX
00418059  MOV ECX,dword ptr [EBP + -0x28]
0041805c  MOV EDX,dword ptr [EBP + 0xfffff994]
00418062  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00418069  MOV ECX,dword ptr [EAX + 0x160]
0041806f  PUSH ECX
00418070  MOV EDX,dword ptr [EBP + -0x28]
00418073  MOV EAX,dword ptr [EBP + 0xfffff994]
00418079  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418080  MOV EDX,dword ptr [EBP + -0x14]
00418083  MOV EAX,dword ptr [EBP + 0xfffff994]
00418089  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418090  FLD float ptr [EDX + 0x158]
00418096  FSUB float ptr [0x0044e114] {2}
0041809c  FSUBR float ptr [ECX + 0x158]
004180a2  PUSH ECX
004180a3  FSTP float ptr [ESP]
004180a6  CALL 0x00401127
004180ab  ADD ESP,0x4
004180ae  FSTP float ptr [ESP]
004180b1  MOV ECX,dword ptr [EBP + 0xfffff994]
004180b7  CALL 0x00401140
004180bc  MOV EAX,dword ptr [EBP + -0x28]
004180bf  MOV ECX,dword ptr [EBP + 0xfffff994]
004180c5  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004180cc  FSTP float ptr [EDX + 0x164]
004180d2  MOV EAX,dword ptr [EBP + -0x28]
004180d5  PUSH EAX
004180d6  LEA ECX,[EBP + 0xfffff9a4]
004180dc  PUSH ECX
004180dd  MOV ECX,dword ptr [EBP + 0xfffff994]
004180e3  CALL 0x00401136
004180e8  MOV EDX,dword ptr [EBP + -0x28]
004180eb  MOV ECX,dword ptr [EBP + 0xfffff994]
004180f1  MOV EDX,dword ptr [ECX + EDX*0x4 + 0xd8]
004180f8  ADD EDX,0x158
004180fe  MOV ECX,dword ptr [EAX]
00418100  MOV dword ptr [EDX],ECX
00418102  MOV ECX,dword ptr [EAX + 0x4]
00418105  MOV dword ptr [EDX + 0x4],ECX
00418108  MOV EAX,dword ptr [EAX + 0x8]
0041810b  MOV dword ptr [EDX + 0x8],EAX
0041810e  MOV ECX,dword ptr [EBP + -0x28]
00418111  MOV EDX,dword ptr [EBP + 0xfffff994]
00418117  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041811e  CALL 0x00401212
00418123  JMP 0x004181d1
00418128  PUSH 0x40a00000
0041812d  MOV EAX,dword ptr [EBP + -0x28]
00418130  MOV ECX,dword ptr [EBP + 0xfffff994]
00418136  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041813d  MOV EAX,dword ptr [EDX + 0x164]
00418143  PUSH EAX
00418144  MOV ECX,dword ptr [EBP + -0x28]
00418147  MOV EDX,dword ptr [EBP + 0xfffff994]
0041814d  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00418154  MOV ECX,dword ptr [EBP + 0xfffff994]
0041815a  FLD float ptr [EAX + 0x160]
00418160  FSUB float ptr [ECX + 0x254]
00418166  PUSH ECX
00418167  FSTP float ptr [ESP]
0041816a  MOV EDX,dword ptr [EBP + -0x28]
0041816d  MOV EAX,dword ptr [EBP + 0xfffff994]
00418173  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041817a  MOV EDX,dword ptr [EBP + 0xfffff994]
00418180  FLD float ptr [ECX + 0x158]
00418186  FSUB float ptr [EDX + 0x24c]
0041818c  PUSH ECX
0041818d  FSTP float ptr [ESP]
00418190  CALL 0x00401127
00418195  ADD ESP,0x4
00418198  FSTP float ptr [ESP]
0041819b  MOV ECX,dword ptr [EBP + 0xfffff994]
004181a1  CALL 0x00401140
004181a6  MOV EAX,dword ptr [EBP + -0x28]
004181a9  MOV ECX,dword ptr [EBP + 0xfffff994]
004181af  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004181b6  FSTP float ptr [EDX + 0x164]
004181bc  MOV EAX,dword ptr [EBP + -0x28]
004181bf  MOV ECX,dword ptr [EBP + 0xfffff994]
004181c5  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
004181cc  CALL 0x00401384
004181d1  JMP 0x00418304
004181d6  MOV EDX,dword ptr [EBP + 0xfffff994]
004181dc  FLD float ptr [0x0044e0d4] {5}
004181e2  FDIV float ptr [EDX + 0x400]
004181e8  PUSH ECX
004181e9  FSTP float ptr [ESP]
004181ec  MOV EAX,dword ptr [EBP + -0x28]
004181ef  MOV ECX,dword ptr [EBP + 0xfffff994]
004181f5  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004181fc  MOV EAX,dword ptr [EDX + 0x164]
00418202  PUSH EAX
00418203  MOV ECX,dword ptr [EBP + -0x28]
00418206  MOV EDX,dword ptr [EBP + 0xfffff994]
0041820c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00418213  MOV ECX,dword ptr [EBP + -0x14]
00418216  MOV EDX,dword ptr [EBP + 0xfffff994]
0041821c  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00418223  MOV EDX,dword ptr [EBP + 0xfffff994]
00418229  FLD float ptr [ECX + 0x160]
0041822f  FADD float ptr [EDX + 0x254]
00418235  FDIV float ptr [0x0044e114] {2}
0041823b  FSUBR float ptr [EAX + 0x160]
00418241  PUSH ECX
00418242  FSTP float ptr [ESP]
00418245  MOV EAX,dword ptr [EBP + -0x28]
00418248  MOV ECX,dword ptr [EBP + 0xfffff994]
0041824e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00418255  MOV EAX,dword ptr [EBP + -0x14]
00418258  MOV ECX,dword ptr [EBP + 0xfffff994]
0041825e  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
00418265  MOV ECX,dword ptr [EBP + 0xfffff994]
0041826b  FLD float ptr [EAX + 0x158]
00418271  FADD float ptr [ECX + 0x24c]
00418277  FDIV float ptr [0x0044e114] {2}
0041827d  FSUBR float ptr [EDX + 0x158]
00418283  PUSH ECX
00418284  FSTP float ptr [ESP]
00418287  CALL 0x00401127
0041828c  ADD ESP,0x4
0041828f  FSTP float ptr [ESP]
00418292  MOV ECX,dword ptr [EBP + 0xfffff994]
00418298  CALL 0x00401140
0041829d  MOV EDX,dword ptr [EBP + -0x28]
004182a0  MOV EAX,dword ptr [EBP + 0xfffff994]
004182a6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004182ad  FSTP float ptr [ECX + 0x164]
004182b3  MOV EDX,dword ptr [EBP + -0x28]
004182b6  PUSH EDX
004182b7  LEA EAX,[EBP + 0xfffff998]
004182bd  PUSH EAX
004182be  MOV ECX,dword ptr [EBP + 0xfffff994]
004182c4  CALL 0x00401136
004182c9  MOV ECX,dword ptr [EBP + -0x28]
004182cc  MOV EDX,dword ptr [EBP + 0xfffff994]
004182d2  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004182d9  ADD ECX,0x158
004182df  MOV EDX,dword ptr [EAX]
004182e1  MOV dword ptr [ECX],EDX
004182e3  MOV EDX,dword ptr [EAX + 0x4]
004182e6  MOV dword ptr [ECX + 0x4],EDX
004182e9  MOV EAX,dword ptr [EAX + 0x8]
004182ec  MOV dword ptr [ECX + 0x8],EAX
004182ef  MOV ECX,dword ptr [EBP + -0x28]
004182f2  MOV EDX,dword ptr [EBP + 0xfffff994]
004182f8  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004182ff  CALL 0x00401212
00418304  MOV dword ptr [EBP + -0x1c],0x0
0041830b  JMP 0x00418316
0041830d  MOV EAX,dword ptr [EBP + -0x1c]
00418310  ADD EAX,0x1
00418313  MOV dword ptr [EBP + -0x1c],EAX
00418316  CMP dword ptr [EBP + -0x1c],0x6
0041831a  JGE 0x00418903
00418320  MOV ECX,dword ptr [EBP + 0xfffff994]
00418326  MOV EDX,dword ptr [EBP + -0x1c]
00418329  CMP EDX,dword ptr [ECX + 0x268]
0041832f  JNZ 0x00418675
00418335  MOV dword ptr [EBP + -0x54],0x0
0041833c  JMP 0x00418347
0041833e  MOV EAX,dword ptr [EBP + -0x54]
00418341  ADD EAX,0x1
00418344  MOV dword ptr [EBP + -0x54],EAX
00418347  CMP dword ptr [EBP + -0x54],0x6
0041834b  JGE 0x00418382
0041834d  MOV ECX,dword ptr [EBP + -0x54]
00418350  MOV EDX,dword ptr [EBP + 0xfffff994]
00418356  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041835d  CMP dword ptr [EAX + 0x190],0xf
00418364  JNZ 0x00418380
00418366  MOV ECX,dword ptr [EBP + -0x54]
00418369  MOV EDX,dword ptr [EBP + 0xfffff994]
0041836f  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00418376  MOV dword ptr [EAX + 0x190],0x7
00418380  JMP 0x0041833e
00418382  MOV ECX,dword ptr [EBP + -0x1c]
00418385  MOV EDX,dword ptr [EBP + 0xfffff994]
0041838b  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00418392  CMP dword ptr [EAX + 0x190],0x6
00418399  JNZ 0x00418670
0041839f  MOV ECX,dword ptr [EBP + 0xfffff994]
004183a5  MOV dword ptr [ECX + 0x3b8],0x1
004183af  MOV EDX,dword ptr [EBP + -0x1c]
004183b2  MOV EAX,dword ptr [EBP + 0xfffff994]
004183b8  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004183bf  MOV EDX,dword ptr [EBP + 0xfffff994]
004183c5  FLD float ptr [ECX + 0x198]
004183cb  FADD float ptr [EDX + 0x54]
004183ce  MOV EAX,dword ptr [EBP + -0x1c]
004183d1  MOV ECX,dword ptr [EBP + 0xfffff994]
004183d7  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004183de  FSTP float ptr [EDX + 0x198]
004183e4  MOV EAX,dword ptr [EBP + -0x1c]
004183e7  MOV ECX,dword ptr [EBP + 0xfffff994]
004183ed  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004183f4  MOV EAX,dword ptr [EBP + 0xfffff994]
004183fa  FLD float ptr [0x0044e16c] {20}
00418400  FMUL float ptr [EAX + 0x54]
00418403  FSUBR float ptr [EDX + 0x18c]
00418409  MOV ECX,dword ptr [EBP + -0x1c]
0041840c  MOV EDX,dword ptr [EBP + 0xfffff994]
00418412  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00418419  FSTP float ptr [EAX + 0x18c]
0041841f  MOV ECX,dword ptr [EBP + -0x1c]
00418422  MOV EDX,dword ptr [EBP + 0xfffff994]
00418428  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041842f  FLD float ptr [EAX + 0x198]
00418435  FCOMP float ptr [0x0044e170] {0.8}
0041843b  FNSTSW AX
0041843d  TEST AH,0x1
00418440  JZ 0x00418576
00418446  MOV ECX,dword ptr [EBP + -0x1c]
00418449  MOV EDX,dword ptr [EBP + 0xfffff994]
0041844f  MOV ESI,dword ptr [EDX + ECX*0x4 + 0xd8]
00418456  MOV EAX,dword ptr [EBP + -0x1c]
00418459  MOV ECX,dword ptr [EBP + 0xfffff994]
0041845f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00418466  MOV EAX,dword ptr [EDX + 0x164]
0041846c  PUSH EAX
0041846d  CALL 0x00401262
00418472  ADD ESP,0x4
00418475  MOV ECX,dword ptr [EBP + -0x1c]
00418478  MOV EDX,dword ptr [EBP + 0xfffff994]
0041847e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00418485  FMUL float ptr [EAX + 0x168]
0041848b  FMUL float ptr [0x0044e100] {0.6}
00418491  MOV ECX,dword ptr [EBP + 0xfffff994]
00418497  FMUL float ptr [ECX + 0x54]
0041849a  FSUBR float ptr [ESI + 0x158]
004184a0  MOV EDX,dword ptr [EBP + -0x1c]
004184a3  MOV EAX,dword ptr [EBP + 0xfffff994]
004184a9  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004184b0  FSTP float ptr [ECX + 0x158]
004184b6  MOV EDX,dword ptr [EBP + -0x1c]
004184b9  MOV EAX,dword ptr [EBP + 0xfffff994]
004184bf  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004184c6  MOV EDX,dword ptr [EBP + -0x1c]
004184c9  MOV EAX,dword ptr [EBP + 0xfffff994]
004184cf  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
004184d6  MOV EAX,dword ptr [EBP + 0xfffff994]
004184dc  FLD float ptr [EDX + 0x18c]
004184e2  FMUL float ptr [EAX + 0x54]
004184e5  FADD float ptr [ECX + 0x15c]
004184eb  MOV ECX,dword ptr [EBP + -0x1c]
004184ee  MOV EDX,dword ptr [EBP + 0xfffff994]
004184f4  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004184fb  FSTP float ptr [EAX + 0x15c]
00418501  MOV ECX,dword ptr [EBP + -0x1c]
00418504  MOV EDX,dword ptr [EBP + 0xfffff994]
0041850a  MOV ESI,dword ptr [EDX + ECX*0x4 + 0xd8]
00418511  MOV EAX,dword ptr [EBP + -0x1c]
00418514  MOV ECX,dword ptr [EBP + 0xfffff994]
0041851a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00418521  MOV EAX,dword ptr [EDX + 0x164]
00418527  PUSH EAX
00418528  CALL 0x0040136b
0041852d  ADD ESP,0x4
00418530  MOV ECX,dword ptr [EBP + -0x1c]
00418533  MOV EDX,dword ptr [EBP + 0xfffff994]
00418539  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00418540  FMUL float ptr [EAX + 0x168]
00418546  FMUL float ptr [0x0044e100] {0.6}
0041854c  MOV ECX,dword ptr [EBP + 0xfffff994]
00418552  FMUL float ptr [ECX + 0x54]
00418555  FSUBR float ptr [ESI + 0x160]
0041855b  MOV EDX,dword ptr [EBP + -0x1c]
0041855e  MOV EAX,dword ptr [EBP + 0xfffff994]
00418564  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041856b  FSTP float ptr [ECX + 0x160]
00418571  JMP 0x00418670
00418576  MOV EDX,dword ptr [EBP + -0x1c]
00418579  MOV EAX,dword ptr [EBP + 0xfffff994]
0041857f  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418586  MOV dword ptr [ECX + 0x190],0xf
00418590  MOV EDX,dword ptr [EBP + -0x1c]
00418593  MOV EAX,dword ptr [EBP + 0xfffff994]
00418599  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004185a0  MOV dword ptr [ECX + 0x198],0x0
004185aa  MOV EDX,dword ptr [EBP + -0x1c]
004185ad  MOV EAX,dword ptr [EBP + 0xfffff994]
004185b3  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004185ba  MOV dword ptr [ECX + 0x15c],0x0
004185c4  MOV EDX,dword ptr [EBP + -0x1c]
004185c7  MOV EAX,dword ptr [EBP + 0xfffff994]
004185cd  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004185d4  CALL 0x00401384
004185d9  PUSH 0x2
004185db  MOV ECX,dword ptr [EBP + 0xfffff994]
004185e1  MOV ECX,dword ptr [ECX + 0xc0]
004185e7  CALL 0x00401258
004185ec  MOV EDX,dword ptr [EBP + -0x1c]
004185ef  MOV EAX,dword ptr [EBP + 0xfffff994]
004185f5  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004185fc  FLD float ptr [ECX + 0x164]
00418602  FSUB float ptr [0x0044e0f0] {3.14}
00418608  MOV EDX,dword ptr [EBP + 0xfffff994]
0041860e  FSTP float ptr [EDX + 0x260]
00418614  MOV EAX,dword ptr [EBP + 0xfffff994]
0041861a  MOV dword ptr [EAX + 0x25c],0x41600000
00418624  MOV ECX,dword ptr [EBP + 0xfffff994]
0041862a  MOV dword ptr [ECX + 0x258],0x40000000
00418634  MOV EDX,dword ptr [EBP + 0xfffff994]
0041863a  MOV dword ptr [EDX + 0x250],0x4106e148
00418644  MOV EAX,dword ptr [EBP + 0xfffff994]
0041864a  MOV byte ptr [EAX + 0x3a8],0x0
00418651  MOV ECX,dword ptr [EBP + 0xfffff994]
00418657  MOV EDX,dword ptr [EBP + -0x1c]
0041865a  MOV dword ptr [ECX + 0x404],EDX
00418660  MOV EAX,dword ptr [EBP + 0xfffff994]
00418666  MOV dword ptr [EAX + 0x268],0xffffffff
00418670  JMP 0x004188fe
00418675  MOV ECX,dword ptr [EBP + -0x1c]
00418678  MOV EDX,dword ptr [EBP + 0xfffff994]
0041867e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00418685  CMP dword ptr [EAX + 0x190],0xc
0041868c  JNZ 0x00418738
00418692  MOV ECX,dword ptr [EBP + -0x1c]
00418695  MOV EDX,dword ptr [EBP + 0xfffff994]
0041869b  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004186a2  MOV ECX,dword ptr [EBP + 0xfffff994]
004186a8  FLD float ptr [EAX + 0x198]
004186ae  FADD float ptr [ECX + 0x54]
004186b1  MOV EDX,dword ptr [EBP + -0x1c]
004186b4  MOV EAX,dword ptr [EBP + 0xfffff994]
004186ba  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004186c1  FSTP float ptr [ECX + 0x198]
004186c7  MOV EDX,dword ptr [EBP + -0x1c]
004186ca  MOV EAX,dword ptr [EBP + 0xfffff994]
004186d0  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004186d7  FLD float ptr [ECX + 0x198]
004186dd  FCOMP float ptr [0x0044e170] {0.8}
004186e3  FNSTSW AX
004186e5  TEST AH,0x41
004186e8  JNZ 0x00418733
004186ea  MOV EDX,dword ptr [EBP + -0x1c]
004186ed  MOV EAX,dword ptr [EBP + 0xfffff994]
004186f3  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004186fa  MOV dword ptr [ECX + 0x190],0x7
00418704  MOV EDX,dword ptr [EBP + -0x1c]
00418707  MOV EAX,dword ptr [EBP + 0xfffff994]
0041870d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418714  MOV dword ptr [ECX + 0x198],0x0
0041871e  MOV EDX,dword ptr [EBP + -0x1c]
00418721  MOV EAX,dword ptr [EBP + 0xfffff994]
00418727  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041872e  CALL 0x00401384
00418733  JMP 0x004188fe
00418738  MOV ECX,dword ptr [EBP + -0x1c]
0041873b  MOV EDX,dword ptr [EBP + 0xfffff994]
00418741  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00418748  CMP dword ptr [EAX + 0x190],0xa
0041874f  JNZ 0x004187fb
00418755  MOV ECX,dword ptr [EBP + -0x1c]
00418758  MOV EDX,dword ptr [EBP + 0xfffff994]
0041875e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00418765  MOV ECX,dword ptr [EBP + 0xfffff994]
0041876b  FLD float ptr [EAX + 0x198]
00418771  FADD float ptr [ECX + 0x54]
00418774  MOV EDX,dword ptr [EBP + -0x1c]
00418777  MOV EAX,dword ptr [EBP + 0xfffff994]
0041877d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418784  FSTP float ptr [ECX + 0x198]
0041878a  MOV EDX,dword ptr [EBP + -0x1c]
0041878d  MOV EAX,dword ptr [EBP + 0xfffff994]
00418793  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041879a  FLD float ptr [ECX + 0x198]
004187a0  FCOMP float ptr [0x0044e170] {0.8}
004187a6  FNSTSW AX
004187a8  TEST AH,0x41
004187ab  JNZ 0x004187f6
004187ad  MOV EDX,dword ptr [EBP + -0x1c]
004187b0  MOV EAX,dword ptr [EBP + 0xfffff994]
004187b6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004187bd  MOV dword ptr [ECX + 0x190],0xf
004187c7  MOV EDX,dword ptr [EBP + -0x1c]
004187ca  MOV EAX,dword ptr [EBP + 0xfffff994]
004187d0  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004187d7  MOV dword ptr [ECX + 0x198],0x0
004187e1  MOV EDX,dword ptr [EBP + -0x1c]
004187e4  MOV EAX,dword ptr [EBP + 0xfffff994]
004187ea  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004187f1  CALL 0x00401384
004187f6  JMP 0x004188fe
004187fb  MOV ECX,dword ptr [EBP + -0x1c]
004187fe  MOV EDX,dword ptr [EBP + 0xfffff994]
00418804  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041880b  CMP dword ptr [EAX + 0x190],0xb
00418812  JNZ 0x004188cb
00418818  MOV ECX,dword ptr [EBP + -0x1c]
0041881b  MOV EDX,dword ptr [EBP + 0xfffff994]
00418821  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00418828  MOV ECX,dword ptr [EBP + 0xfffff994]
0041882e  FLD float ptr [EAX + 0x198]
00418834  FADD float ptr [ECX + 0x54]
00418837  MOV EDX,dword ptr [EBP + -0x1c]
0041883a  MOV EAX,dword ptr [EBP + 0xfffff994]
00418840  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418847  FSTP float ptr [ECX + 0x198]
0041884d  MOV EDX,dword ptr [EBP + -0x1c]
00418850  MOV EAX,dword ptr [EBP + 0xfffff994]
00418856  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041885d  FLD float ptr [ECX + 0x198]
00418863  FCOMP float ptr [0x0044e170] {0.8}
00418869  FNSTSW AX
0041886b  TEST AH,0x41
0041886e  JNZ 0x004188c9
00418870  MOV EDX,dword ptr [EBP + -0x1c]
00418873  MOV EAX,dword ptr [EBP + 0xfffff994]
00418879  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418880  MOV dword ptr [ECX + 0x190],0xf
0041888a  MOV EDX,dword ptr [EBP + -0x1c]
0041888d  MOV EAX,dword ptr [EBP + 0xfffff994]
00418893  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041889a  MOV dword ptr [ECX + 0x198],0x0
004188a4  MOV EDX,dword ptr [EBP + -0x1c]
004188a7  MOV EAX,dword ptr [EBP + 0xfffff994]
004188ad  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004188b4  CALL 0x00401384
004188b9  MOV ECX,dword ptr [EBP + 0xfffff994]
004188bf  MOV dword ptr [ECX + 0x3b8],0x1
004188c9  JMP 0x004188fe
004188cb  MOV EDX,dword ptr [EBP + -0x1c]
004188ce  MOV EAX,dword ptr [EBP + 0xfffff994]
004188d4  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004188db  CMP dword ptr [ECX + 0x190],0x6
004188e2  JNZ 0x004188fe
004188e4  MOV EDX,dword ptr [EBP + -0x1c]
004188e7  MOV EAX,dword ptr [EBP + 0xfffff994]
004188ed  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004188f4  MOV dword ptr [ECX + 0x190],0xf
004188fe  JMP 0x0041830d
00418903  FLD float ptr [EBP + -0x18]
00418906  FCOMP float ptr [0x0044e0fc] {8}
0041890c  FNSTSW AX
0041890e  TEST AH,0x1
00418911  JZ 0x0041891f
00418913  MOV dword ptr [EBP + 0xfffff904],0x1
0041891d  JMP 0x00418929
0041891f  MOV dword ptr [EBP + 0xfffff904],0x0
00418929  MOV EDX,dword ptr [EBP + 0xfffff994]
0041892f  FLD float ptr [EDX + 0x250]
00418935  FCOMP float ptr [0x0044e0d4] {5}
0041893b  FNSTSW AX
0041893d  TEST AH,0x1
00418940  JZ 0x0041894e
00418942  MOV dword ptr [EBP + 0xfffff900],0x1
0041894c  JMP 0x00418958
0041894e  MOV dword ptr [EBP + 0xfffff900],0x0
00418958  MOV EAX,dword ptr [EBP + 0xfffff994]
0041895e  XOR ECX,ECX
00418960  MOV CL,byte ptr [EAX + 0x414]
00418966  NEG ECX
00418968  SBB ECX,ECX
0041896a  INC ECX
0041896b  AND ECX,dword ptr [EBP + 0xfffff904]
00418971  MOV EDX,dword ptr [EBP + -0x4]
00418974  MOV EAX,dword ptr [EBP + 0xfffff994]
0041897a  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418981  XOR EAX,EAX
00418983  CMP dword ptr [EDX + 0x190],0x6
0041898a  SETG AL
0041898d  AND ECX,EAX
0041898f  MOV EDX,dword ptr [EBP + -0x4]
00418992  MOV EAX,dword ptr [EBP + 0xfffff994]
00418998  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041899f  XOR EAX,EAX
004189a1  CMP dword ptr [EDX + 0x190],0xa
004189a8  SETL AL
004189ab  AND ECX,EAX
004189ad  AND ECX,dword ptr [EBP + 0xfffff900]
004189b3  MOV EDX,dword ptr [EBP + -0x34]
004189b6  MOV EAX,dword ptr [EBP + 0xfffff994]
004189bc  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
004189c3  XOR EAX,EAX
004189c5  CMP dword ptr [EDX + 0x190],0x3
004189cc  SETNZ AL
004189cf  AND ECX,EAX
004189d1  MOV EDX,dword ptr [EBP + -0x34]
004189d4  MOV EAX,dword ptr [EBP + 0xfffff994]
004189da  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
004189e1  XOR EAX,EAX
004189e3  CMP dword ptr [EDX + 0x190],0x4
004189ea  SETNZ AL
004189ed  AND ECX,EAX
004189ef  MOV EDX,dword ptr [EBP + -0x34]
004189f2  MOV EAX,dword ptr [EBP + 0xfffff994]
004189f8  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
004189ff  XOR EAX,EAX
00418a01  CMP dword ptr [EDX + 0x190],0x6
00418a08  SETNZ AL
00418a0b  AND ECX,EAX
00418a0d  TEST ECX,ECX
00418a0f  JZ 0x00418ac0
00418a15  MOV ECX,dword ptr [EBP + 0xfffff994]
00418a1b  CMP dword ptr [ECX + 0x268],-0x1
00418a22  JLE 0x00418a88
00418a24  MOV EDX,dword ptr [EBP + 0xfffff994]
00418a2a  MOV EAX,dword ptr [EDX + 0x268]
00418a30  MOV ECX,dword ptr [EBP + 0xfffff994]
00418a36  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00418a3d  MOV dword ptr [EDX + 0x198],0x0
00418a47  MOV EAX,dword ptr [EBP + 0xfffff994]
00418a4d  MOV ECX,dword ptr [EAX + 0x268]
00418a53  MOV EDX,dword ptr [EBP + 0xfffff994]
00418a59  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00418a60  MOV dword ptr [EAX + 0x190],0xc
00418a6a  MOV ECX,dword ptr [EBP + 0xfffff994]
00418a70  MOV EDX,dword ptr [ECX + 0x268]
00418a76  MOV EAX,dword ptr [EBP + 0xfffff994]
00418a7c  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418a83  CALL 0x004011ae
00418a88  MOV ECX,dword ptr [EBP + 0xfffff994]
00418a8e  MOV EDX,dword ptr [EBP + -0x4]
00418a91  MOV dword ptr [ECX + 0x268],EDX
00418a97  MOV EAX,dword ptr [EBP + 0xfffff994]
00418a9d  MOV ECX,dword ptr [EBP + -0x4]
00418aa0  MOV dword ptr [EAX + 0x404],ECX
00418aa6  MOV EDX,dword ptr [EBP + -0x4]
00418aa9  MOV EAX,dword ptr [EBP + 0xfffff994]
00418aaf  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418ab6  MOV dword ptr [ECX + 0x190],0x0
00418ac0  FLD float ptr [EBP + -0x30]
00418ac3  FCOMP float ptr [0x0044e0fc] {8}
00418ac9  FNSTSW AX
00418acb  TEST AH,0x1
00418ace  JZ 0x00418adc
00418ad0  MOV dword ptr [EBP + 0xfffff8fc],0x1
00418ada  JMP 0x00418ae6
00418adc  MOV dword ptr [EBP + 0xfffff8fc],0x0
00418ae6  MOV EDX,dword ptr [EBP + 0xfffff994]
00418aec  FLD float ptr [EDX + 0x250]
00418af2  FCOMP float ptr [0x0044e0d4] {5}
00418af8  FNSTSW AX
00418afa  TEST AH,0x1
00418afd  JZ 0x00418b0b
00418aff  MOV dword ptr [EBP + 0xfffff8f8],0x1
00418b09  JMP 0x00418b15
00418b0b  MOV dword ptr [EBP + 0xfffff8f8],0x0
00418b15  MOV EAX,dword ptr [EBP + 0xfffff994]
00418b1b  XOR ECX,ECX
00418b1d  MOV CL,byte ptr [EAX + 0x414]
00418b23  NEG ECX
00418b25  SBB ECX,ECX
00418b27  INC ECX
00418b28  AND ECX,dword ptr [EBP + 0xfffff8fc]
00418b2e  MOV EDX,dword ptr [EBP + -0x34]
00418b31  MOV EAX,dword ptr [EBP + 0xfffff994]
00418b37  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418b3e  XOR EAX,EAX
00418b40  CMP dword ptr [EDX + 0x190],0x6
00418b47  SETG AL
00418b4a  AND ECX,EAX
00418b4c  MOV EDX,dword ptr [EBP + -0x34]
00418b4f  MOV EAX,dword ptr [EBP + 0xfffff994]
00418b55  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418b5c  XOR EAX,EAX
00418b5e  CMP dword ptr [EDX + 0x190],0xa
00418b65  SETL AL
00418b68  AND ECX,EAX
00418b6a  AND ECX,dword ptr [EBP + 0xfffff8f8]
00418b70  MOV EDX,dword ptr [EBP + -0x4]
00418b73  MOV EAX,dword ptr [EBP + 0xfffff994]
00418b79  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418b80  XOR EAX,EAX
00418b82  CMP dword ptr [EDX + 0x190],0x3
00418b89  SETNZ AL
00418b8c  AND ECX,EAX
00418b8e  MOV EDX,dword ptr [EBP + -0x4]
00418b91  MOV EAX,dword ptr [EBP + 0xfffff994]
00418b97  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418b9e  XOR EAX,EAX
00418ba0  CMP dword ptr [EDX + 0x190],0x4
00418ba7  SETNZ AL
00418baa  AND ECX,EAX
00418bac  MOV EDX,dword ptr [EBP + -0x4]
00418baf  MOV EAX,dword ptr [EBP + 0xfffff994]
00418bb5  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418bbc  XOR EAX,EAX
00418bbe  CMP dword ptr [EDX + 0x190],0x6
00418bc5  SETNZ AL
00418bc8  AND ECX,EAX
00418bca  TEST ECX,ECX
00418bcc  JZ 0x00418c92
00418bd2  MOV ECX,dword ptr [EBP + 0xfffff994]
00418bd8  CMP dword ptr [ECX + 0x268],-0x1
00418bdf  JLE 0x00418c45
00418be1  MOV EDX,dword ptr [EBP + 0xfffff994]
00418be7  MOV EAX,dword ptr [EDX + 0x268]
00418bed  MOV ECX,dword ptr [EBP + 0xfffff994]
00418bf3  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00418bfa  MOV dword ptr [EDX + 0x198],0x0
00418c04  MOV EAX,dword ptr [EBP + 0xfffff994]
00418c0a  MOV ECX,dword ptr [EAX + 0x268]
00418c10  MOV EDX,dword ptr [EBP + 0xfffff994]
00418c16  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00418c1d  MOV dword ptr [EAX + 0x190],0xc
00418c27  MOV ECX,dword ptr [EBP + 0xfffff994]
00418c2d  MOV EDX,dword ptr [ECX + 0x268]
00418c33  MOV EAX,dword ptr [EBP + 0xfffff994]
00418c39  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418c40  CALL 0x004011ae
00418c45  MOV ECX,dword ptr [EBP + 0xfffff994]
00418c4b  MOV EDX,dword ptr [EBP + -0x34]
00418c4e  MOV dword ptr [ECX + 0x268],EDX
00418c54  MOV EAX,dword ptr [EBP + 0xfffff994]
00418c5a  MOV ECX,dword ptr [EBP + -0x34]
00418c5d  MOV dword ptr [EAX + 0x404],ECX
00418c63  MOV EDX,dword ptr [EBP + -0x34]
00418c66  MOV EAX,dword ptr [EBP + 0xfffff994]
00418c6c  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418c73  MOV dword ptr [ECX + 0x190],0x0
00418c7d  MOV EDX,dword ptr [EBP + -0x34]
00418c80  MOV EAX,dword ptr [EBP + 0xfffff994]
00418c86  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418c8d  CALL 0x00401226
00418c92  MOV ECX,dword ptr [EBP + 0xfffff994]
00418c98  CMP dword ptr [ECX + 0x268],-0x1
00418c9f  JLE 0x0041920a
00418ca5  MOV dword ptr [EBP + -0x58],0xbfc00000
00418cac  MOV dword ptr [EBP + -0x5c],0xbf800000
00418cb3  MOV EDX,dword ptr [EBP + 0xfffff994]
00418cb9  MOV EAX,dword ptr [EDX + 0x268]
00418cbf  MOV ECX,dword ptr [EBP + 0xfffff994]
00418cc5  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00418ccc  XOR EAX,EAX
00418cce  CMP dword ptr [EDX + 0x190],0x3
00418cd5  SETZ AL
00418cd8  MOV ECX,dword ptr [EBP + 0xfffff994]
00418cde  MOV EDX,dword ptr [ECX + 0x268]
00418ce4  MOV ECX,dword ptr [EBP + 0xfffff994]
00418cea  MOV EDX,dword ptr [ECX + EDX*0x4 + 0xd8]
00418cf1  XOR ECX,ECX
00418cf3  CMP dword ptr [EDX + 0x190],0x4
00418cfa  SETZ CL
00418cfd  OR EAX,ECX
00418cff  TEST EAX,EAX
00418d01  JZ 0x00418d16
00418d03  MOV dword ptr [EBP + -0x58],0x0
00418d0a  MOV dword ptr [EBP + -0x5c],0xbf4ccccd
00418d11  JMP 0x00418d9f
00418d16  MOV EDX,dword ptr [EBP + 0xfffff994]
00418d1c  MOV EAX,dword ptr [EDX + 0x268]
00418d22  MOV ECX,dword ptr [EBP + 0xfffff994]
00418d28  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00418d2f  CMP dword ptr [EDX + 0x190],0x6
00418d36  JNZ 0x00418d48
00418d38  MOV dword ptr [EBP + -0x58],0xbf666666
00418d3f  MOV dword ptr [EBP + -0x5c],0x3ecccccd
00418d46  JMP 0x00418d9f
00418d48  MOV EAX,dword ptr [EBP + 0xfffff994]
00418d4e  CMP dword ptr [EAX + 0x268],0x0
00418d55  JNZ 0x00418d67
00418d57  MOV dword ptr [EBP + -0x58],0xbfd9999a
00418d5e  MOV dword ptr [EBP + -0x5c],0xbf99999a
00418d65  JMP 0x00418d9f
00418d67  MOV ECX,dword ptr [EBP + 0xfffff994]
00418d6d  XOR EDX,EDX
00418d6f  CMP dword ptr [ECX + 0x268],0x3
00418d76  SETZ DL
00418d79  MOV EAX,dword ptr [EBP + 0xfffff994]
00418d7f  XOR ECX,ECX
00418d81  CMP dword ptr [EAX + 0x268],0x4
00418d88  SETZ CL
00418d8b  OR EDX,ECX
00418d8d  TEST EDX,EDX
00418d8f  JZ 0x00418d9f
00418d91  MOV dword ptr [EBP + -0x58],0xbfa66666
00418d98  MOV dword ptr [EBP + -0x5c],0xbf4ccccd
00418d9f  MOV EDX,dword ptr [EBP + 0xfffff994]
00418da5  MOV EAX,dword ptr [EDX + 0x268]
00418dab  MOV ECX,dword ptr [EBP + 0xfffff994]
00418db1  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00418db8  FLD float ptr [EDX + 0x164]
00418dbe  FCHS
00418dc0  PUSH ECX
00418dc1  FSTP float ptr [ESP]
00418dc4  CALL 0x0040136b
00418dc9  ADD ESP,0x4
00418dcc  FMUL float ptr [EBP + -0x58]
00418dcf  FSTP float ptr [EBP + 0xfffff8f4]
00418dd5  MOV EAX,dword ptr [EBP + 0xfffff994]
00418ddb  MOV ECX,dword ptr [EAX + 0x268]
00418de1  MOV EDX,dword ptr [EBP + 0xfffff994]
00418de7  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00418dee  FLD float ptr [EAX + 0x164]
00418df4  FCHS
00418df6  PUSH ECX
00418df7  FSTP float ptr [ESP]
00418dfa  CALL 0x00401262
00418dff  ADD ESP,0x4
00418e02  FMUL float ptr [EBP + -0x5c]
00418e05  FSUBR float ptr [EBP + 0xfffff8f4]
00418e0b  MOV ECX,dword ptr [EBP + 0xfffff994]
00418e11  MOV EDX,dword ptr [ECX + 0x268]
00418e17  MOV EAX,dword ptr [EBP + 0xfffff994]
00418e1d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418e24  FADD float ptr [ECX + 0x158]
00418e2a  MOV EDX,dword ptr [EBP + 0xfffff994]
00418e30  FSTP float ptr [EDX + 0x24c]
00418e36  MOV EAX,dword ptr [EBP + 0xfffff994]
00418e3c  MOV ECX,dword ptr [EAX + 0x268]
00418e42  MOV EDX,dword ptr [EBP + 0xfffff994]
00418e48  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00418e4f  FLD float ptr [EAX + 0x164]
00418e55  FCHS
00418e57  PUSH ECX
00418e58  FSTP float ptr [ESP]
00418e5b  CALL 0x00401262
00418e60  ADD ESP,0x4
00418e63  FMUL float ptr [EBP + -0x58]
00418e66  FSTP float ptr [EBP + 0xfffff8f0]
00418e6c  MOV ECX,dword ptr [EBP + 0xfffff994]
00418e72  MOV EDX,dword ptr [ECX + 0x268]
00418e78  MOV EAX,dword ptr [EBP + 0xfffff994]
00418e7e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418e85  FLD float ptr [ECX + 0x164]
00418e8b  FCHS
00418e8d  PUSH ECX
00418e8e  FSTP float ptr [ESP]
00418e91  CALL 0x0040136b
00418e96  ADD ESP,0x4
00418e99  FMUL float ptr [EBP + -0x5c]
00418e9c  FADD float ptr [EBP + 0xfffff8f0]
00418ea2  MOV EDX,dword ptr [EBP + 0xfffff994]
00418ea8  MOV EAX,dword ptr [EDX + 0x268]
00418eae  MOV ECX,dword ptr [EBP + 0xfffff994]
00418eb4  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00418ebb  FADD float ptr [EDX + 0x160]
00418ec1  MOV EAX,dword ptr [EBP + 0xfffff994]
00418ec7  FSTP float ptr [EAX + 0x254]
00418ecd  MOV ECX,dword ptr [EBP + 0xfffff994]
00418ed3  MOV EDX,dword ptr [ECX + 0x268]
00418ed9  MOV EAX,dword ptr [EBP + 0xfffff994]
00418edf  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418ee6  CMP dword ptr [ECX + 0x190],0x3
00418eed  JNZ 0x00418f04
00418eef  MOV EDX,dword ptr [EBP + 0xfffff994]
00418ef5  MOV dword ptr [EDX + 0x250],0x40600000
00418eff  JMP 0x0041920a
00418f04  MOV EAX,dword ptr [EBP + 0xfffff994]
00418f0a  MOV ECX,dword ptr [EAX + 0x268]
00418f10  MOV EDX,dword ptr [EBP + 0xfffff994]
00418f16  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00418f1d  CMP dword ptr [EAX + 0x190],0x4
00418f24  JNZ 0x00418f5c
00418f26  MOV ECX,dword ptr [EBP + 0xfffff994]
00418f2c  MOV EDX,dword ptr [ECX + 0x268]
00418f32  MOV EAX,dword ptr [EBP + 0xfffff994]
00418f38  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418f3f  FLD float ptr [ECX + 0x170]
00418f45  FMUL float ptr [0x0044e0f8] {0.9}
00418f4b  MOV EDX,dword ptr [EBP + 0xfffff994]
00418f51  FSTP float ptr [EDX + 0x250]
00418f57  JMP 0x0041920a
00418f5c  MOV EAX,dword ptr [EBP + 0xfffff994]
00418f62  MOV ECX,dword ptr [EAX + 0x268]
00418f68  MOV EDX,dword ptr [EBP + 0xfffff994]
00418f6e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00418f75  CMP dword ptr [EAX + 0x190],0x6
00418f7c  JNZ 0x00418fcd
00418f7e  MOV ECX,dword ptr [EBP + 0xfffff994]
00418f84  MOV EDX,dword ptr [ECX + 0x268]
00418f8a  MOV EAX,dword ptr [EBP + 0xfffff994]
00418f90  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00418f97  MOV EDX,dword ptr [EBP + 0xfffff994]
00418f9d  MOV EAX,dword ptr [EDX + 0x268]
00418fa3  MOV EDX,dword ptr [EBP + 0xfffff994]
00418fa9  MOV EAX,dword ptr [EDX + EAX*0x4 + 0xd8]
00418fb0  FLD float ptr [ECX + 0x15c]
00418fb6  FADD float ptr [EAX + 0x180]
00418fbc  MOV ECX,dword ptr [EBP + 0xfffff994]
00418fc2  FSTP float ptr [ECX + 0x250]
00418fc8  JMP 0x0041920a
00418fcd  MOV EDX,dword ptr [EBP + 0xfffff994]
00418fd3  MOV EAX,dword ptr [EDX + 0x268]
00418fd9  MOV ECX,dword ptr [EBP + 0xfffff994]
00418fdf  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00418fe6  XOR EAX,EAX
00418fe8  MOV AL,byte ptr [EDX + 0x184]
00418fee  MOV ECX,dword ptr [EBP + 0xfffff994]
00418ff4  MOV EDX,dword ptr [ECX + 0x268]
00418ffa  MOV ECX,dword ptr [EBP + 0xfffff994]
00419000  MOV EDX,dword ptr [ECX + EDX*0x4 + 0xd8]
00419007  XOR ECX,ECX
00419009  CMP dword ptr [EDX + 0x188],0x0
00419010  SETZ CL
00419013  MOV EDX,dword ptr [EBP + 0xfffff994]
00419019  MOV EDX,dword ptr [EDX + 0x268]
0041901f  MOV ESI,dword ptr [EBP + 0xfffff994]
00419025  MOV EDX,dword ptr [ESI + EDX*0x4 + 0xd8]
0041902c  XOR EBX,EBX
0041902e  CMP dword ptr [EDX + 0x188],0x2
00419035  SETZ BL
00419038  OR ECX,EBX
0041903a  AND EAX,ECX
0041903c  TEST EAX,EAX
0041903e  JZ 0x00419053
00419040  PUSH 0x3
00419042  MOV EAX,dword ptr [EBP + 0xfffff994]
00419048  MOV ECX,dword ptr [EAX + 0xc0]
0041904e  CALL 0x00401258
00419053  MOV ECX,dword ptr [EBP + 0xfffff994]
00419059  MOV EDX,dword ptr [ECX + 0x268]
0041905f  MOV EAX,dword ptr [EBP + 0xfffff994]
00419065  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041906c  XOR EDX,EDX
0041906e  CMP dword ptr [ECX + 0x188],0x0
00419075  SETZ DL
00419078  MOV EAX,dword ptr [EBP + 0xfffff994]
0041907e  MOV ECX,dword ptr [EAX + 0x268]
00419084  MOV EAX,dword ptr [EBP + 0xfffff994]
0041908a  MOV ECX,dword ptr [EAX + ECX*0x4 + 0xd8]
00419091  XOR EAX,EAX
00419093  CMP dword ptr [ECX + 0x188],0x2
0041909a  SETZ AL
0041909d  OR EDX,EAX
0041909f  TEST EDX,EDX
004190a1  JZ 0x004191ba
004190a7  MOV ECX,dword ptr [EBP + 0xfffff994]
004190ad  FLD float ptr [0x0044e174] {40}
004190b3  FMUL float ptr [ECX + 0x54]
004190b6  MOV EDX,dword ptr [EBP + 0xfffff994]
004190bc  FADD float ptr [EDX + 0x250]
004190c2  MOV EAX,dword ptr [EBP + 0xfffff994]
004190c8  FSTP float ptr [EAX + 0x250]
004190ce  MOV ECX,dword ptr [EBP + 0xfffff994]
004190d4  MOV EDX,dword ptr [ECX + 0x268]
004190da  MOV EAX,dword ptr [EBP + 0xfffff994]
004190e0  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004190e7  CMP dword ptr [ECX + 0x190],0x1
004190ee  JNZ 0x0041915b
004190f0  MOV EDX,dword ptr [EBP + 0xfffff994]
004190f6  MOV EAX,dword ptr [EDX + 0x268]
004190fc  MOV ECX,dword ptr [EBP + 0xfffff994]
00419102  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00419109  FLD float ptr [EDX + 0x170]
0041910f  FMUL float ptr [0x0044e178] {0.85}
00419115  MOV EAX,dword ptr [EBP + 0xfffff994]
0041911b  FCOMP float ptr [EAX + 0x250]
00419121  FNSTSW AX
00419123  TEST AH,0x1
00419126  JZ 0x00419159
00419128  MOV ECX,dword ptr [EBP + 0xfffff994]
0041912e  MOV EDX,dword ptr [ECX + 0x268]
00419134  MOV EAX,dword ptr [EBP + 0xfffff994]
0041913a  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00419141  FLD float ptr [ECX + 0x170]
00419147  FMUL float ptr [0x0044e178] {0.85}
0041914d  MOV EDX,dword ptr [EBP + 0xfffff994]
00419153  FSTP float ptr [EDX + 0x250]
00419159  JMP 0x004191b8
0041915b  MOV EAX,dword ptr [EBP + 0xfffff994]
00419161  MOV ECX,dword ptr [EAX + 0x268]
00419167  MOV EDX,dword ptr [EBP + 0xfffff994]
0041916d  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00419174  MOV ECX,dword ptr [EBP + 0xfffff994]
0041917a  FLD float ptr [ECX + 0x250]
00419180  FCOMP float ptr [EAX + 0x170]
00419186  FNSTSW AX
00419188  TEST AH,0x41
0041918b  JNZ 0x004191b8
0041918d  MOV EDX,dword ptr [EBP + 0xfffff994]
00419193  MOV EAX,dword ptr [EDX + 0x268]
00419199  MOV ECX,dword ptr [EBP + 0xfffff994]
0041919f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004191a6  MOV EAX,dword ptr [EBP + 0xfffff994]
004191ac  MOV ECX,dword ptr [EDX + 0x170]
004191b2  MOV dword ptr [EAX + 0x250],ECX
004191b8  JMP 0x0041920a
004191ba  MOV EDX,dword ptr [EBP + 0xfffff994]
004191c0  FLD float ptr [0x0044e16c] {20}
004191c6  FMUL float ptr [EDX + 0x54]
004191c9  MOV EAX,dword ptr [EBP + 0xfffff994]
004191cf  FSUBR float ptr [EAX + 0x250]
004191d5  MOV ECX,dword ptr [EBP + 0xfffff994]
004191db  FSTP float ptr [ECX + 0x250]
004191e1  MOV EDX,dword ptr [EBP + 0xfffff994]
004191e7  FLD float ptr [EDX + 0x250]
004191ed  FCOMP float ptr [0x0044e17c] {0.7}
004191f3  FNSTSW AX
004191f5  TEST AH,0x1
004191f8  JZ 0x0041920a
004191fa  MOV EAX,dword ptr [EBP + 0xfffff994]
00419200  MOV dword ptr [EAX + 0x250],0x3f333333
0041920a  MOV ECX,dword ptr [EBP + 0xfffff994]
00419210  FLD float ptr [ECX + 0x250]
00419216  FCOMP float ptr [0x0044e0fc] {8}
0041921c  FNSTSW AX
0041921e  TEST AH,0x1
00419221  JZ 0x0041922f
00419223  MOV dword ptr [EBP + 0xfffff8ec],0x1
0041922d  JMP 0x00419239
0041922f  MOV dword ptr [EBP + 0xfffff8ec],0x0
00419239  MOV EDX,dword ptr [EBP + 0xfffff994]
0041923f  FLD float ptr [EDX + 0x25c]
00419245  FCOMP float ptr [0x0044e0d0] {0}
0041924b  FNSTSW AX
0041924d  TEST AH,0x1
00419250  JZ 0x0041925e
00419252  MOV dword ptr [EBP + 0xfffff8e8],0x1
0041925c  JMP 0x00419268
0041925e  MOV dword ptr [EBP + 0xfffff8e8],0x0
00419268  MOV EAX,dword ptr [EBP + 0xfffff994]
0041926e  XOR ECX,ECX
00419270  CMP dword ptr [EAX + 0x3b8],0x1
00419277  SETZ CL
0041927a  AND ECX,dword ptr [EBP + 0xfffff8ec]
00419280  AND ECX,dword ptr [EBP + 0xfffff8e8]
00419286  TEST ECX,ECX
00419288  JZ 0x0041929a
0041928a  MOV EDX,dword ptr [EBP + 0xfffff994]
00419290  MOV dword ptr [EDX + 0x3b8],0x0
0041929a  MOV EAX,dword ptr [EBP + 0xfffff994]
004192a0  CMP dword ptr [EAX + 0x3b8],0x2
004192a7  JNZ 0x0041941d
004192ad  MOV ECX,dword ptr [EBP + 0xfffff994]
004192b3  MOV EDX,dword ptr [ECX + 0x3fc]
004192b9  MOV EAX,dword ptr [EBP + 0xfffff994]
004192bf  MOV ESI,dword ptr [EAX + EDX*0x4 + 0xd8]
004192c6  MOV ECX,dword ptr [EBP + 0xfffff994]
004192cc  MOV EDX,dword ptr [ECX + 0x3fc]
004192d2  MOV EAX,dword ptr [EBP + 0xfffff994]
004192d8  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004192df  FLD float ptr [ECX + 0x164]
004192e5  FCHS
004192e7  PUSH ECX
004192e8  FSTP float ptr [ESP]
004192eb  CALL 0x00401262
004192f0  ADD ESP,0x4
004192f3  FMUL float ptr [0x0044e0fc] {8}
004192f9  FSUBR float ptr [ESI + 0x158]
004192ff  MOV EDX,dword ptr [EBP + 0xfffff994]
00419305  FSTP float ptr [EDX + 0x21c]
0041930b  MOV EAX,dword ptr [EBP + 0xfffff994]
00419311  MOV ECX,dword ptr [EAX + 0x3fc]
00419317  MOV EDX,dword ptr [EBP + 0xfffff994]
0041931d  MOV ESI,dword ptr [EDX + ECX*0x4 + 0xd8]
00419324  MOV EAX,dword ptr [EBP + 0xfffff994]
0041932a  MOV ECX,dword ptr [EAX + 0x3fc]
00419330  MOV EDX,dword ptr [EBP + 0xfffff994]
00419336  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041933d  FLD float ptr [EAX + 0x164]
00419343  FCHS
00419345  PUSH ECX
00419346  FSTP float ptr [ESP]
00419349  CALL 0x0040136b
0041934e  ADD ESP,0x4
00419351  FMUL float ptr [0x0044e0fc] {8}
00419357  FADD float ptr [ESI + 0x160]
0041935d  MOV ECX,dword ptr [EBP + 0xfffff994]
00419363  FSTP float ptr [ECX + 0x224]
00419369  MOV EDX,dword ptr [EBP + 0xfffff994]
0041936f  MOV EAX,dword ptr [EDX + 0x3fc]
00419375  MOV ECX,dword ptr [EBP + 0xfffff994]
0041937b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00419382  FLD float ptr [EDX + 0x170]
00419388  FMUL float ptr [0x0044e180] {1.8}
0041938e  MOV EAX,dword ptr [EBP + 0xfffff994]
00419394  FSTP float ptr [EAX + 0x220]
0041939a  MOV ECX,dword ptr [EBP + 0xfffff994]
004193a0  MOV EDX,dword ptr [ECX + 0x3fc]
004193a6  MOV EAX,dword ptr [EBP + 0xfffff994]
004193ac  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004193b3  MOV EDX,dword ptr [EBP + 0xfffff994]
004193b9  FLD float ptr [ECX + 0x158]
004193bf  FSUB float ptr [EDX + 0x21c]
004193c5  MOV EAX,dword ptr [EBP + 0xfffff994]
004193cb  FSTP float ptr [EAX + 0x228]
004193d1  MOV ECX,dword ptr [EBP + 0xfffff994]
004193d7  MOV dword ptr [ECX + 0x22c],0x0
004193e1  MOV EDX,dword ptr [EBP + 0xfffff994]
004193e7  MOV EAX,dword ptr [EDX + 0x3fc]
004193ed  MOV ECX,dword ptr [EBP + 0xfffff994]
004193f3  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004193fa  MOV EAX,dword ptr [EBP + 0xfffff994]
00419400  FLD float ptr [EDX + 0x160]
00419406  FSUB float ptr [EAX + 0x224]
0041940c  MOV ECX,dword ptr [EBP + 0xfffff994]
00419412  FSTP float ptr [ECX + 0x230]
00419418  JMP 0x004195cf
0041941d  MOV EDX,dword ptr [EBP + 0xfffff994]
00419423  CMP dword ptr [EDX + 0x268],-0x1
0041942a  JLE 0x0041950a
00419430  MOV EAX,dword ptr [EBP + -0x4]
00419433  MOV ECX,dword ptr [EBP + 0xfffff994]
00419439  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00419440  MOV EAX,dword ptr [EBP + 0xfffff994]
00419446  MOV ECX,dword ptr [EDX + 0x158]
0041944c  MOV dword ptr [EAX + 0x21c],ECX
00419452  MOV EDX,dword ptr [EBP + -0x4]
00419455  MOV EAX,dword ptr [EBP + 0xfffff994]
0041945b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00419462  CMP dword ptr [ECX + 0x190],0x6
00419469  JNZ 0x0041947d
0041946b  MOV EDX,dword ptr [EBP + 0xfffff994]
00419471  MOV dword ptr [EDX + 0x220],0x41700000
0041947b  JMP 0x0041948d
0041947d  MOV EAX,dword ptr [EBP + 0xfffff994]
00419483  MOV dword ptr [EAX + 0x220],0x41400000
0041948d  MOV ECX,dword ptr [EBP + -0x4]
00419490  MOV EDX,dword ptr [EBP + 0xfffff994]
00419496  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041949d  FLD float ptr [EAX + 0x160]
004194a3  FSUB float ptr [0x0044e16c] {20}
004194a9  MOV ECX,dword ptr [EBP + 0xfffff994]
004194af  FSTP float ptr [ECX + 0x224]
004194b5  MOV EDX,dword ptr [EBP + 0xfffff994]
004194bb  MOV dword ptr [EDX + 0x228],0x0
004194c5  MOV EAX,dword ptr [EBP + 0xfffff994]
004194cb  MOV dword ptr [EAX + 0x22c],0xbf000000
004194d5  MOV ECX,dword ptr [EBP + 0xfffff994]
004194db  MOV dword ptr [ECX + 0x230],0x3f800000
004194e5  MOV EDX,dword ptr [EBP + 0xfffff994]
004194eb  MOV dword ptr [EDX + 0x3a0],0x0
004194f5  MOV EAX,dword ptr [EBP + 0xfffff994]
004194fb  MOV dword ptr [EAX + 0x39c],0x0
00419505  JMP 0x004195cf
0041950a  MOV ECX,dword ptr [EBP + 0xfffff994]
00419510  CMP dword ptr [ECX + 0x3b8],0x1
00419517  JNZ 0x00419539
00419519  MOV EDX,dword ptr [EBP + 0xfffff994]
0041951f  FLD float ptr [0x0044e184] {7}
00419525  FADD float ptr [EDX + 0x250]
0041952b  MOV EAX,dword ptr [EBP + 0xfffff994]
00419531  FSTP float ptr [EAX + 0x220]
00419537  JMP 0x00419549
00419539  MOV ECX,dword ptr [EBP + 0xfffff994]
0041953f  MOV dword ptr [ECX + 0x220],0x41400000
00419549  MOV EDX,dword ptr [EBP + 0xfffff994]
0041954f  MOV EAX,dword ptr [EBP + 0xfffff994]
00419555  MOV ECX,dword ptr [EAX + 0x24c]
0041955b  MOV dword ptr [EDX + 0x21c],ECX
00419561  MOV EDX,dword ptr [EBP + 0xfffff994]
00419567  FLD float ptr [EDX + 0x254]
0041956d  FSUB float ptr [0x0044e16c] {20}
00419573  MOV EAX,dword ptr [EBP + 0xfffff994]
00419579  FSTP float ptr [EAX + 0x224]
0041957f  MOV ECX,dword ptr [EBP + 0xfffff994]
00419585  MOV dword ptr [ECX + 0x228],0x0
0041958f  MOV EDX,dword ptr [EBP + 0xfffff994]
00419595  MOV dword ptr [EDX + 0x22c],0xbf000000
0041959f  MOV EAX,dword ptr [EBP + 0xfffff994]
004195a5  MOV dword ptr [EAX + 0x230],0x3f800000
004195af  MOV ECX,dword ptr [EBP + 0xfffff994]
004195b5  MOV dword ptr [ECX + 0x3a0],0x0
004195bf  MOV EDX,dword ptr [EBP + 0xfffff994]
004195c5  MOV dword ptr [EDX + 0x39c],0x0
004195cf  MOV EAX,dword ptr [EBP + 0xfffff994]
004195d5  XOR ECX,ECX
004195d7  MOV CL,byte ptr [EAX + 0x3a6]
004195dd  TEST ECX,ECX
004195df  JZ 0x004196b9
004195e5  MOV EDX,dword ptr [EBP + -0x4]
004195e8  MOV EAX,dword ptr [EBP + 0xfffff994]
004195ee  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004195f5  FLD float ptr [ECX + 0x158]
004195fb  FSUB float ptr [0x0044e10c] {35}
00419601  MOV EDX,dword ptr [EBP + -0x4]
00419604  MOV EAX,dword ptr [EBP + 0xfffff994]
0041960a  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00419611  FLD float ptr [ECX + 0x158]
00419617  FSUB float ptr [0x0044e10c] {35}
0041961d  FMULP
0041961f  MOV EDX,dword ptr [EBP + -0x4]
00419622  MOV EAX,dword ptr [EBP + 0xfffff994]
00419628  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041962f  MOV EDX,dword ptr [EBP + -0x4]
00419632  MOV EAX,dword ptr [EBP + 0xfffff994]
00419638  MOV EDX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041963f  FLD float ptr [ECX + 0x160]
00419645  FMUL float ptr [EDX + 0x160]
0041964b  FADDP
0041964d  PUSH ECX
0041964e  FSTP float ptr [ESP]
00419651  CALL 0x0040104b
00419656  ADD ESP,0x4
00419659  FSTP float ptr [EBP + -0x20]
0041965c  MOV EAX,dword ptr [EBP + -0x4]
0041965f  MOV ECX,dword ptr [EBP + 0xfffff994]
00419665  MOV ESI,dword ptr [ECX + EAX*0x4 + 0xd8]
0041966c  MOV EDX,dword ptr [EBP + -0x4]
0041966f  MOV EAX,dword ptr [EBP + 0xfffff994]
00419675  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041967c  MOV EDX,dword ptr [ECX + 0x160]
00419682  PUSH EDX
00419683  MOV EAX,dword ptr [EBP + -0x4]
00419686  MOV ECX,dword ptr [EBP + 0xfffff994]
0041968c  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00419693  FLD float ptr [EDX + 0x158]
00419699  FSUB float ptr [0x0044e10c] {35}
0041969f  PUSH ECX
004196a0  FSTP float ptr [ESP]
004196a3  CALL 0x00401127
004196a8  ADD ESP,0x8
004196ab  FSUBR float ptr [ESI + 0x164]
004196b1  FSTP float ptr [EBP + -0xc]
004196b4  JMP 0x00419788
004196b9  MOV EAX,dword ptr [EBP + -0x4]
004196bc  MOV ECX,dword ptr [EBP + 0xfffff994]
004196c2  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004196c9  FLD float ptr [EDX + 0x158]
004196cf  FADD float ptr [0x0044e10c] {35}
004196d5  MOV EAX,dword ptr [EBP + -0x4]
004196d8  MOV ECX,dword ptr [EBP + 0xfffff994]
004196de  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004196e5  FLD float ptr [EDX + 0x158]
004196eb  FADD float ptr [0x0044e10c] {35}
004196f1  FMULP
004196f3  MOV EAX,dword ptr [EBP + -0x4]
004196f6  MOV ECX,dword ptr [EBP + 0xfffff994]
004196fc  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00419703  MOV EAX,dword ptr [EBP + -0x4]
00419706  MOV ECX,dword ptr [EBP + 0xfffff994]
0041970c  MOV EAX,dword ptr [ECX + EAX*0x4 + 0xd8]
00419713  FLD float ptr [EDX + 0x160]
00419719  FMUL float ptr [EAX + 0x160]
0041971f  FADDP
00419721  PUSH ECX
00419722  FSTP float ptr [ESP]
00419725  CALL 0x0040104b
0041972a  ADD ESP,0x4
0041972d  FSTP float ptr [EBP + -0x20]
00419730  MOV ECX,dword ptr [EBP + -0x4]
00419733  MOV EDX,dword ptr [EBP + 0xfffff994]
00419739  MOV ESI,dword ptr [EDX + ECX*0x4 + 0xd8]
00419740  MOV EAX,dword ptr [EBP + -0x4]
00419743  MOV ECX,dword ptr [EBP + 0xfffff994]
00419749  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00419750  MOV EAX,dword ptr [EDX + 0x160]
00419756  PUSH EAX
00419757  MOV ECX,dword ptr [EBP + -0x4]
0041975a  MOV EDX,dword ptr [EBP + 0xfffff994]
00419760  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00419767  FLD float ptr [EAX + 0x158]
0041976d  FADD float ptr [0x0044e10c] {35}
00419773  PUSH ECX
00419774  FSTP float ptr [ESP]
00419777  CALL 0x00401127
0041977c  ADD ESP,0x8
0041977f  FSUBR float ptr [ESI + 0x164]
00419785  FSTP float ptr [EBP + -0xc]
00419788  FLD float ptr [EBP + -0x20]
0041978b  FSUB float ptr [0x0044e114] {2}
00419791  FMUL float ptr [0x0044e160] {0.53}
00419797  FSUB float ptr [0x0044e0e8] {1}
0041979d  MOV ECX,dword ptr [EBP + -0x4]
004197a0  MOV EDX,dword ptr [EBP + 0xfffff994]
004197a6  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004197ad  FDIV float ptr [EAX + 0x17c]
004197b3  FSTP float ptr [EBP + -0x8]
004197b6  FLD float ptr [EBP + -0x20]
004197b9  FCOMP float ptr [0x0044e188] {4}
004197bf  FNSTSW AX
004197c1  TEST AH,0x41
004197c4  JNZ 0x004197d2
004197c6  MOV dword ptr [EBP + 0xfffff8e4],0x1
004197d0  JMP 0x004197dc
004197d2  MOV dword ptr [EBP + 0xfffff8e4],0x0
004197dc  FLD float ptr [EBP + -0x20]
004197df  FCOMP float ptr [0x0044e18c] {9}
004197e5  FNSTSW AX
004197e7  TEST AH,0x1
004197ea  JZ 0x004197f8
004197ec  MOV dword ptr [EBP + 0xfffff8e0],0x1
004197f6  JMP 0x00419802
004197f8  MOV dword ptr [EBP + 0xfffff8e0],0x0
00419802  FLD float ptr [EBP + -0xc]
00419805  FCOMP float ptr [0x0044e190] {-0.785}
0041980b  FNSTSW AX
0041980d  TEST AH,0x41
00419810  JNZ 0x0041981e
00419812  MOV dword ptr [EBP + 0xfffff8dc],0x1
0041981c  JMP 0x00419828
0041981e  MOV dword ptr [EBP + 0xfffff8dc],0x0
00419828  FLD float ptr [EBP + -0xc]
0041982b  FCOMP float ptr [0x0044e194] {0.785}
00419831  FNSTSW AX
00419833  TEST AH,0x1
00419836  JZ 0x00419844
00419838  MOV dword ptr [EBP + 0xfffff8d8],0x1
00419842  JMP 0x0041984e
00419844  MOV dword ptr [EBP + 0xfffff8d8],0x0
0041984e  MOV ECX,dword ptr [EBP + 0xfffff8e4]
00419854  AND ECX,dword ptr [EBP + 0xfffff8e0]
0041985a  MOV EDX,dword ptr [EBP + 0xfffff994]
00419860  MOV EAX,dword ptr [EDX + 0x58]
00419863  XOR EDX,EDX
00419865  CMP EAX,dword ptr [0x00453618] {3}
0041986b  SETZ DL
0041986e  MOV EAX,dword ptr [EBP + 0xfffff994]
00419874  MOV EAX,dword ptr [EAX + 0x84]
0041987a  XOR EBX,EBX
0041987c  CMP EAX,dword ptr [0x00453618] {3}
00419882  SETZ BL
00419885  OR EDX,EBX
00419887  AND ECX,EDX
00419889  MOV EDX,dword ptr [EBP + 0xfffff8dc]
0041988f  AND EDX,dword ptr [EBP + 0xfffff8d8]
00419895  AND ECX,EDX
00419897  TEST ECX,ECX
00419899  JZ 0x004198b0
0041989b  MOV EAX,dword ptr [EBP + 0xfffff994]
004198a1  MOV dword ptr [EAX + 0x3ac],0x3
004198ab  JMP 0x00419961
004198b0  FLD float ptr [EBP + -0x8]
004198b3  FCOMP float ptr [0x0044e0d0] {0}
004198b9  FNSTSW AX
004198bb  TEST AH,0x41
004198be  JNZ 0x004198cc
004198c0  MOV dword ptr [EBP + 0xfffff8d4],0x1
004198ca  JMP 0x004198d6
004198cc  MOV dword ptr [EBP + 0xfffff8d4],0x0
004198d6  FLD float ptr [EBP + -0x8]
004198d9  FCOMP float ptr [0x0044e0e8] {1}
004198df  FNSTSW AX
004198e1  TEST AH,0x41
004198e4  JZ 0x004198f2
004198e6  MOV dword ptr [EBP + 0xfffff8d0],0x1
004198f0  JMP 0x004198fc
004198f2  MOV dword ptr [EBP + 0xfffff8d0],0x0
004198fc  MOV ECX,dword ptr [EBP + 0xfffff8d4]
00419902  AND ECX,dword ptr [EBP + 0xfffff8d0]
00419908  TEST ECX,ECX
0041990a  JZ 0x00419951
0041990c  MOV EDX,dword ptr [EBP + 0xfffff994]
00419912  MOV dword ptr [EDX + 0x3ac],0x2
0041991c  MOV EAX,dword ptr [EBP + 0xfffff994]
00419922  FLD float ptr [EAX + 0x3a0]
00419928  FCOMP float ptr [0x0044e198] {0.0001}
0041992e  FNSTSW AX
00419930  TEST AH,0x41
00419933  JNZ 0x0041994f
00419935  FLD float ptr [EBP + -0x8]
00419938  FMUL float ptr [0x0044e19c] {100}
0041993e  CALL 0x0043510c
00419943  MOV ECX,dword ptr [EBP + 0xfffff994]
00419949  MOV dword ptr [ECX + 0x39c],EAX
0041994f  JMP 0x00419961
00419951  MOV EDX,dword ptr [EBP + 0xfffff994]
00419957  MOV dword ptr [EDX + 0x3ac],0x1
00419961  MOV EAX,dword ptr [EBP + -0x4]
00419964  MOV ECX,dword ptr [EBP + 0xfffff994]
0041996a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00419971  CMP dword ptr [EDX + 0x190],0x3
00419978  JNZ 0x0041998a
0041997a  MOV EAX,dword ptr [EBP + 0xfffff994]
00419980  MOV dword ptr [EAX + 0x3ac],0x0
0041998a  MOV ECX,dword ptr [EBP + -0x4]
0041998d  MOV EDX,dword ptr [EBP + 0xfffff994]
00419993  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041999a  MOV ECX,dword ptr [EBP + 0xfffff994]
004199a0  MOV EDX,dword ptr [EAX + 0x158]
004199a6  MOV dword ptr [ECX + 0x240],EDX
004199ac  MOV EAX,dword ptr [EBP + -0x4]
004199af  MOV ECX,dword ptr [EBP + 0xfffff994]
004199b5  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004199bc  MOV EAX,dword ptr [EBP + 0xfffff994]
004199c2  MOV ECX,dword ptr [EDX + 0x160]
004199c8  MOV dword ptr [EAX + 0x248],ECX
004199ce  POP ESI
004199cf  POP EBX
004199d0  MOV ESP,EBP
004199d2  POP EBP
004199d3  RET
