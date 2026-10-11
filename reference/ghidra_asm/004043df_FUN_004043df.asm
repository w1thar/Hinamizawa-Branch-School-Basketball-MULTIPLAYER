004043df  PUSH EBP
004043e0  MOV EBP,ESP
004043e2  SUB ESP,0x10
004043e5  FLD float ptr [EBP + 0x18]
004043e8  FMUL float ptr [EBP + 0x34]
004043eb  FLD float ptr [EBP + 0x1c]
004043ee  FMUL float ptr [EBP + 0x30]
004043f1  FADDP
004043f3  FLD float ptr [EBP + 0x20]
004043f6  FMUL float ptr [EBP + 0x2c]
004043f9  FSUBP
004043fb  FLD float ptr [EBP + 0x24]
004043fe  FMUL float ptr [EBP + 0x28]
00404401  FADDP
00404403  FSTP float ptr [EBP + -0x8]
00404406  FLD float ptr [EBP + 0x18]
00404409  FCHS
0040440b  FMUL float ptr [EBP + 0x30]
0040440e  FLD float ptr [EBP + 0x1c]
00404411  FMUL float ptr [EBP + 0x34]
00404414  FADDP
00404416  FLD float ptr [EBP + 0x20]
00404419  FMUL float ptr [EBP + 0x28]
0040441c  FADDP
0040441e  FLD float ptr [EBP + 0x24]
00404421  FMUL float ptr [EBP + 0x2c]
00404424  FADDP
00404426  FSTP float ptr [EBP + -0xc]
00404429  FLD float ptr [EBP + 0x18]
0040442c  FMUL float ptr [EBP + 0x2c]
0040442f  FLD float ptr [EBP + 0x1c]
00404432  FMUL float ptr [EBP + 0x28]
00404435  FSUBP
00404437  FLD float ptr [EBP + 0x20]
0040443a  FMUL float ptr [EBP + 0x34]
0040443d  FADDP
0040443f  FLD float ptr [EBP + 0x24]
00404442  FMUL float ptr [EBP + 0x30]
00404445  FADDP
00404447  FSTP float ptr [EBP + -0x10]
0040444a  FLD float ptr [EBP + 0x18]
0040444d  FCHS
0040444f  FMUL float ptr [EBP + 0x28]
00404452  FLD float ptr [EBP + 0x1c]
00404455  FMUL float ptr [EBP + 0x2c]
00404458  FSUBP
0040445a  FLD float ptr [EBP + 0x20]
0040445d  FMUL float ptr [EBP + 0x30]
00404460  FSUBP
00404462  FLD float ptr [EBP + 0x24]
00404465  FMUL float ptr [EBP + 0x34]
00404468  FADDP
0040446a  FSTP float ptr [EBP + -0x4]
0040446d  MOV EAX,dword ptr [EBP + 0x8]
00404470  MOV ECX,dword ptr [EBP + -0x8]
00404473  MOV dword ptr [EAX],ECX
00404475  MOV EDX,dword ptr [EBP + 0xc]
00404478  MOV EAX,dword ptr [EBP + -0xc]
0040447b  MOV dword ptr [EDX],EAX
0040447d  MOV ECX,dword ptr [EBP + 0x10]
00404480  MOV EDX,dword ptr [EBP + -0x10]
00404483  MOV dword ptr [ECX],EDX
00404485  MOV EAX,dword ptr [EBP + 0x14]
00404488  MOV ECX,dword ptr [EBP + -0x4]
0040448b  MOV dword ptr [EAX],ECX
0040448d  MOV ESP,EBP
0040448f  POP EBP
00404490  RET
