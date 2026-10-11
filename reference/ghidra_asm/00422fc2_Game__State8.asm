00422fc2  PUSH EBP
00422fc3  MOV EBP,ESP
00422fc5  SUB ESP,0x1c
00422fc8  PUSH ESI
00422fc9  MOV dword ptr [EBP + -0x10],ECX
00422fcc  MOV EAX,dword ptr [EBP + -0x10]
00422fcf  MOV ECX,dword ptr [EBP + -0x10]
00422fd2  FLD float ptr [EAX + 0x390]
00422fd8  FADD float ptr [ECX + 0x54]
00422fdb  MOV EDX,dword ptr [EBP + -0x10]
00422fde  FSTP float ptr [EDX + 0x390]
00422fe4  MOV EAX,dword ptr [EBP + -0x10]
00422fe7  FLD float ptr [EAX + 0x390]
00422fed  FCOMP float ptr [0x0044e2c4] {1}
00422ff3  FNSTSW AX
00422ff5  TEST AH,0x41
00422ff8  JNZ 0x00423003
00422ffa  MOV dword ptr [EBP + -0x14],0x1
00423001  JMP 0x0042300a
00423003  MOV dword ptr [EBP + -0x14],0x0
0042300a  MOV ECX,dword ptr [EBP + -0x10]
0042300d  XOR EDX,EDX
0042300f  CMP dword ptr [ECX + 0x3b8],0x0
00423016  SETZ DL
00423019  AND EDX,dword ptr [EBP + -0x14]
0042301c  TEST EDX,EDX
0042301e  JZ 0x00423059
00423020  MOV EAX,dword ptr [EBP + -0x10]
00423023  MOV dword ptr [EAX + 0x3a0],0x0
0042302d  MOV ECX,dword ptr [EBP + -0x10]
00423030  MOV dword ptr [ECX + 0x39c],0x0
0042303a  MOV EDX,dword ptr [EBP + -0x10]
0042303d  MOV dword ptr [EDX + 0x390],0x0
00423047  MOV EAX,dword ptr [EBP + -0x10]
0042304a  MOV dword ptr [EAX + 0x3b8],0x1
00423054  JMP 0x00423d4e
00423059  MOV ECX,dword ptr [EBP + -0x10]
0042305c  CMP dword ptr [ECX + 0x3b8],0x1
00423063  JNZ 0x004236c0
00423069  MOV dword ptr [EBP + -0xc],0x0
00423070  MOV dword ptr [EBP + -0x4],0x0
00423077  JMP 0x00423082
00423079  MOV EDX,dword ptr [EBP + -0x4]
0042307c  ADD EDX,0x1
0042307f  MOV dword ptr [EBP + -0x4],EDX
00423082  CMP dword ptr [EBP + -0x4],0x3
00423086  JGE 0x0042334d
0042308c  MOV EAX,dword ptr [EBP + -0x4]
0042308f  MOV ECX,dword ptr [EBP + -0x10]
00423092  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3c0]
00423099  MOV EAX,dword ptr [EBP + -0x10]
0042309c  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004230a3  FILD dword ptr [EBP + -0x4]
004230a6  FMUL float ptr [0x0044e2d0] {3}
004230ac  FSUBR float ptr [ECX + 0x158]
004230b2  MOV EDX,dword ptr [EBP + -0x4]
004230b5  MOV EAX,dword ptr [EBP + -0x10]
004230b8  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c0]
004230bf  MOV EDX,dword ptr [EBP + -0x10]
004230c2  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004230c9  FILD dword ptr [EBP + -0x4]
004230cc  FMUL float ptr [0x0044e2d0] {3}
004230d2  FSUBR float ptr [EAX + 0x158]
004230d8  FMULP
004230da  MOV ECX,dword ptr [EBP + -0x4]
004230dd  MOV EDX,dword ptr [EBP + -0x10]
004230e0  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3c0]
004230e7  MOV ECX,dword ptr [EBP + -0x10]
004230ea  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004230f1  FLD float ptr [EDX + 0x160]
004230f7  FADD float ptr [0x0044e2d0] {3}
004230fd  MOV EAX,dword ptr [EBP + -0x4]
00423100  MOV ECX,dword ptr [EBP + -0x10]
00423103  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3c0]
0042310a  MOV EAX,dword ptr [EBP + -0x10]
0042310d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00423114  FLD float ptr [ECX + 0x160]
0042311a  FADD float ptr [0x0044e2d0] {3}
00423120  FMULP
00423122  FADDP
00423124  PUSH ECX
00423125  FSTP float ptr [ESP]
00423128  CALL 0x0040104b
0042312d  ADD ESP,0x4
00423130  FSTP float ptr [EBP + -0x8]
00423133  FLD float ptr [EBP + -0x8]
00423136  FCOMP float ptr [0x0044e2d4] {0.5}
0042313c  FNSTSW AX
0042313e  TEST AH,0x41
00423141  JNZ 0x00423302
00423147  MOV EDX,dword ptr [EBP + -0x4]
0042314a  MOV EAX,dword ptr [EBP + -0x10]
0042314d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c0]
00423154  MOV EDX,dword ptr [EBP + -0x10]
00423157  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0042315e  FLD float ptr [EAX + 0x160]
00423164  FADD float ptr [0x0044e2d0] {3}
0042316a  PUSH ECX
0042316b  FSTP float ptr [ESP]
0042316e  MOV ECX,dword ptr [EBP + -0x4]
00423171  MOV EDX,dword ptr [EBP + -0x10]
00423174  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3c0]
0042317b  MOV ECX,dword ptr [EBP + -0x10]
0042317e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00423185  FILD dword ptr [EBP + -0x4]
00423188  FMUL float ptr [0x0044e2d0] {3}
0042318e  FSUBR float ptr [EDX + 0x158]
00423194  PUSH ECX
00423195  FSTP float ptr [ESP]
00423198  CALL 0x00401127
0042319d  ADD ESP,0x8
004231a0  MOV EAX,dword ptr [EBP + -0x4]
004231a3  MOV ECX,dword ptr [EBP + -0x10]
004231a6  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3c0]
004231ad  MOV EAX,dword ptr [EBP + -0x10]
004231b0  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004231b7  FSTP float ptr [ECX + 0x164]
004231bd  MOV EDX,dword ptr [EBP + -0x4]
004231c0  MOV EAX,dword ptr [EBP + -0x10]
004231c3  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c0]
004231ca  MOV EDX,dword ptr [EBP + -0x10]
004231cd  MOV ESI,dword ptr [EDX + ECX*0x4 + 0xd8]
004231d4  MOV EAX,dword ptr [EBP + -0x4]
004231d7  MOV ECX,dword ptr [EBP + -0x10]
004231da  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3c0]
004231e1  MOV EAX,dword ptr [EBP + -0x10]
004231e4  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004231eb  MOV EDX,dword ptr [ECX + 0x164]
004231f1  PUSH EDX
004231f2  CALL 0x00401262
004231f7  ADD ESP,0x4
004231fa  MOV EAX,dword ptr [EBP + -0x4]
004231fd  MOV ECX,dword ptr [EBP + -0x10]
00423200  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3c0]
00423207  MOV EAX,dword ptr [EBP + -0x10]
0042320a  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00423211  FMUL float ptr [ECX + 0x168]
00423217  MOV EDX,dword ptr [EBP + -0x10]
0042321a  FMUL float ptr [EDX + 0x54]
0042321d  FSUBR float ptr [ESI + 0x158]
00423223  MOV EAX,dword ptr [EBP + -0x4]
00423226  MOV ECX,dword ptr [EBP + -0x10]
00423229  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3c0]
00423230  MOV EAX,dword ptr [EBP + -0x10]
00423233  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0042323a  FSTP float ptr [ECX + 0x158]
00423240  MOV EDX,dword ptr [EBP + -0x4]
00423243  MOV EAX,dword ptr [EBP + -0x10]
00423246  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c0]
0042324d  MOV EDX,dword ptr [EBP + -0x10]
00423250  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00423257  MOV dword ptr [EAX + 0x15c],0x0
00423261  MOV ECX,dword ptr [EBP + -0x4]
00423264  MOV EDX,dword ptr [EBP + -0x10]
00423267  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3c0]
0042326e  MOV ECX,dword ptr [EBP + -0x10]
00423271  MOV ESI,dword ptr [ECX + EAX*0x4 + 0xd8]
00423278  MOV EDX,dword ptr [EBP + -0x4]
0042327b  MOV EAX,dword ptr [EBP + -0x10]
0042327e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c0]
00423285  MOV EDX,dword ptr [EBP + -0x10]
00423288  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0042328f  MOV ECX,dword ptr [EAX + 0x164]
00423295  PUSH ECX
00423296  CALL 0x0040136b
0042329b  ADD ESP,0x4
0042329e  MOV EDX,dword ptr [EBP + -0x4]
004232a1  MOV EAX,dword ptr [EBP + -0x10]
004232a4  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c0]
004232ab  MOV EDX,dword ptr [EBP + -0x10]
004232ae  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004232b5  FMUL float ptr [EAX + 0x168]
004232bb  MOV ECX,dword ptr [EBP + -0x10]
004232be  FMUL float ptr [ECX + 0x54]
004232c1  FSUBR float ptr [ESI + 0x160]
004232c7  MOV EDX,dword ptr [EBP + -0x4]
004232ca  MOV EAX,dword ptr [EBP + -0x10]
004232cd  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c0]
004232d4  MOV EDX,dword ptr [EBP + -0x10]
004232d7  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004232de  FSTP float ptr [EAX + 0x160]
004232e4  MOV ECX,dword ptr [EBP + -0x4]
004232e7  MOV EDX,dword ptr [EBP + -0x10]
004232ea  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3c0]
004232f1  MOV ECX,dword ptr [EBP + -0x10]
004232f4  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
004232fb  CALL 0x00401212
00423300  JMP 0x00423348
00423302  MOV EDX,dword ptr [EBP + -0x4]
00423305  MOV EAX,dword ptr [EBP + -0x10]
00423308  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c0]
0042330f  MOV EDX,dword ptr [EBP + -0x10]
00423312  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00423319  MOV dword ptr [EAX + 0x164],0x0
00423323  MOV ECX,dword ptr [EBP + -0x4]
00423326  MOV EDX,dword ptr [EBP + -0x10]
00423329  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3c0]
00423330  MOV ECX,dword ptr [EBP + -0x10]
00423333  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
0042333a  CALL 0x00401384
0042333f  MOV EDX,dword ptr [EBP + -0xc]
00423342  ADD EDX,0x1
00423345  MOV dword ptr [EBP + -0xc],EDX
00423348  JMP 0x00423079
0042334d  MOV dword ptr [EBP + -0x4],0x0
00423354  JMP 0x0042335f
00423356  MOV EAX,dword ptr [EBP + -0x4]
00423359  ADD EAX,0x1
0042335c  MOV dword ptr [EBP + -0x4],EAX
0042335f  CMP dword ptr [EBP + -0x4],0x3
00423363  JGE 0x0042369b
00423369  MOV ECX,0x5
0042336e  SUB ECX,dword ptr [EBP + -0x4]
00423371  MOV EDX,dword ptr [EBP + -0x10]
00423374  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3c0]
0042337b  MOV ECX,dword ptr [EBP + -0x10]
0042337e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00423385  FILD dword ptr [EBP + -0x4]
00423388  FMUL float ptr [0x0044e2d0] {3}
0042338e  FADD float ptr [0x0044e2d8] {1.5}
00423394  FADD float ptr [EDX + 0x158]
0042339a  MOV EAX,0x5
0042339f  SUB EAX,dword ptr [EBP + -0x4]
004233a2  MOV ECX,dword ptr [EBP + -0x10]
004233a5  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3c0]
004233ac  MOV EAX,dword ptr [EBP + -0x10]
004233af  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004233b6  FILD dword ptr [EBP + -0x4]
004233b9  FMUL float ptr [0x0044e2d0] {3}
004233bf  FADD float ptr [0x0044e2d8] {1.5}
004233c5  FADD float ptr [ECX + 0x158]
004233cb  FMULP
004233cd  MOV EDX,0x5
004233d2  SUB EDX,dword ptr [EBP + -0x4]
004233d5  MOV EAX,dword ptr [EBP + -0x10]
004233d8  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c0]
004233df  MOV EDX,dword ptr [EBP + -0x10]
004233e2  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004233e9  FLD float ptr [EAX + 0x160]
004233ef  FSUB float ptr [0x0044e2c4] {1}
004233f5  MOV ECX,0x5
004233fa  SUB ECX,dword ptr [EBP + -0x4]
004233fd  MOV EDX,dword ptr [EBP + -0x10]
00423400  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3c0]
00423407  MOV ECX,dword ptr [EBP + -0x10]
0042340a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00423411  FLD float ptr [EDX + 0x160]
00423417  FSUB float ptr [0x0044e2c4] {1}
0042341d  FMULP
0042341f  FADDP
00423421  PUSH ECX
00423422  FSTP float ptr [ESP]
00423425  CALL 0x0040104b
0042342a  ADD ESP,0x4
0042342d  FSTP float ptr [EBP + -0x8]
00423430  FLD float ptr [EBP + -0x8]
00423433  FCOMP float ptr [0x0044e2d4] {0.5}
00423439  FNSTSW AX
0042343b  TEST AH,0x41
0042343e  JNZ 0x00423646
00423444  MOV EAX,0x5
00423449  SUB EAX,dword ptr [EBP + -0x4]
0042344c  MOV ECX,dword ptr [EBP + -0x10]
0042344f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3c0]
00423456  MOV EAX,dword ptr [EBP + -0x10]
00423459  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00423460  FLD float ptr [ECX + 0x160]
00423466  FSUB float ptr [0x0044e2c4] {1}
0042346c  PUSH ECX
0042346d  FSTP float ptr [ESP]
00423470  MOV EDX,0x5
00423475  SUB EDX,dword ptr [EBP + -0x4]
00423478  MOV EAX,dword ptr [EBP + -0x10]
0042347b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c0]
00423482  MOV EDX,dword ptr [EBP + -0x10]
00423485  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0042348c  FILD dword ptr [EBP + -0x4]
0042348f  FMUL float ptr [0x0044e2d0] {3}
00423495  FADD float ptr [0x0044e2d8] {1.5}
0042349b  FADD float ptr [EAX + 0x158]
004234a1  PUSH ECX
004234a2  FSTP float ptr [ESP]
004234a5  CALL 0x00401127
004234aa  ADD ESP,0x8
004234ad  MOV ECX,0x5
004234b2  SUB ECX,dword ptr [EBP + -0x4]
004234b5  MOV EDX,dword ptr [EBP + -0x10]
004234b8  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3c0]
004234bf  MOV ECX,dword ptr [EBP + -0x10]
004234c2  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
004234c9  FSTP float ptr [EDX + 0x164]
004234cf  MOV EAX,0x5
004234d4  SUB EAX,dword ptr [EBP + -0x4]
004234d7  MOV ECX,dword ptr [EBP + -0x10]
004234da  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3c0]
004234e1  MOV EAX,dword ptr [EBP + -0x10]
004234e4  MOV ESI,dword ptr [EAX + EDX*0x4 + 0xd8]
004234eb  MOV ECX,0x5
004234f0  SUB ECX,dword ptr [EBP + -0x4]
004234f3  MOV EDX,dword ptr [EBP + -0x10]
004234f6  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3c0]
004234fd  MOV ECX,dword ptr [EBP + -0x10]
00423500  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00423507  MOV EAX,dword ptr [EDX + 0x164]
0042350d  PUSH EAX
0042350e  CALL 0x00401262
00423513  ADD ESP,0x4
00423516  MOV ECX,0x5
0042351b  SUB ECX,dword ptr [EBP + -0x4]
0042351e  MOV EDX,dword ptr [EBP + -0x10]
00423521  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3c0]
00423528  MOV ECX,dword ptr [EBP + -0x10]
0042352b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00423532  FMUL float ptr [EDX + 0x168]
00423538  MOV EAX,dword ptr [EBP + -0x10]
0042353b  FMUL float ptr [EAX + 0x54]
0042353e  FSUBR float ptr [ESI + 0x158]
00423544  MOV ECX,0x5
00423549  SUB ECX,dword ptr [EBP + -0x4]
0042354c  MOV EDX,dword ptr [EBP + -0x10]
0042354f  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3c0]
00423556  MOV ECX,dword ptr [EBP + -0x10]
00423559  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00423560  FSTP float ptr [EDX + 0x158]
00423566  MOV EAX,0x5
0042356b  SUB EAX,dword ptr [EBP + -0x4]
0042356e  MOV ECX,dword ptr [EBP + -0x10]
00423571  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3c0]
00423578  MOV EAX,dword ptr [EBP + -0x10]
0042357b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00423582  MOV dword ptr [ECX + 0x15c],0x0
0042358c  MOV EDX,0x5
00423591  SUB EDX,dword ptr [EBP + -0x4]
00423594  MOV EAX,dword ptr [EBP + -0x10]
00423597  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c0]
0042359e  MOV EDX,dword ptr [EBP + -0x10]
004235a1  MOV ESI,dword ptr [EDX + ECX*0x4 + 0xd8]
004235a8  MOV EAX,0x5
004235ad  SUB EAX,dword ptr [EBP + -0x4]
004235b0  MOV ECX,dword ptr [EBP + -0x10]
004235b3  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3c0]
004235ba  MOV EAX,dword ptr [EBP + -0x10]
004235bd  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004235c4  MOV EDX,dword ptr [ECX + 0x164]
004235ca  PUSH EDX
004235cb  CALL 0x0040136b
004235d0  ADD ESP,0x4
004235d3  MOV EAX,0x5
004235d8  SUB EAX,dword ptr [EBP + -0x4]
004235db  MOV ECX,dword ptr [EBP + -0x10]
004235de  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3c0]
004235e5  MOV EAX,dword ptr [EBP + -0x10]
004235e8  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004235ef  FMUL float ptr [ECX + 0x168]
004235f5  MOV EDX,dword ptr [EBP + -0x10]
004235f8  FMUL float ptr [EDX + 0x54]
004235fb  FSUBR float ptr [ESI + 0x160]
00423601  MOV EAX,0x5
00423606  SUB EAX,dword ptr [EBP + -0x4]
00423609  MOV ECX,dword ptr [EBP + -0x10]
0042360c  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3c0]
00423613  MOV EAX,dword ptr [EBP + -0x10]
00423616  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0042361d  FSTP float ptr [ECX + 0x160]
00423623  MOV EDX,0x5
00423628  SUB EDX,dword ptr [EBP + -0x4]
0042362b  MOV EAX,dword ptr [EBP + -0x10]
0042362e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c0]
00423635  MOV EDX,dword ptr [EBP + -0x10]
00423638  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0042363f  CALL 0x00401212
00423644  JMP 0x00423696
00423646  MOV EAX,0x5
0042364b  SUB EAX,dword ptr [EBP + -0x4]
0042364e  MOV ECX,dword ptr [EBP + -0x10]
00423651  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3c0]
00423658  MOV EAX,dword ptr [EBP + -0x10]
0042365b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00423662  MOV dword ptr [ECX + 0x164],0x0
0042366c  MOV EDX,0x5
00423671  SUB EDX,dword ptr [EBP + -0x4]
00423674  MOV EAX,dword ptr [EBP + -0x10]
00423677  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c0]
0042367e  MOV EDX,dword ptr [EBP + -0x10]
00423681  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00423688  CALL 0x00401384
0042368d  MOV EAX,dword ptr [EBP + -0xc]
00423690  ADD EAX,0x1
00423693  MOV dword ptr [EBP + -0xc],EAX
00423696  JMP 0x00423356
0042369b  CMP dword ptr [EBP + -0xc],0x6
0042369f  JNZ 0x004236bb
004236a1  MOV ECX,dword ptr [EBP + -0x10]
004236a4  MOV dword ptr [ECX + 0x390],0x0
004236ae  MOV EDX,dword ptr [EBP + -0x10]
004236b1  MOV dword ptr [EDX + 0x3b8],0x2
004236bb  JMP 0x00423d4e
004236c0  MOV EAX,dword ptr [EBP + -0x10]
004236c3  FLD float ptr [EAX + 0x390]
004236c9  FCOMP float ptr [0x0044e2cc] {2}
004236cf  FNSTSW AX
004236d1  TEST AH,0x41
004236d4  JNZ 0x004236df
004236d6  MOV dword ptr [EBP + -0x18],0x1
004236dd  JMP 0x004236e6
004236df  MOV dword ptr [EBP + -0x18],0x0
004236e6  MOV ECX,dword ptr [EBP + -0x10]
004236e9  XOR EDX,EDX
004236eb  CMP dword ptr [ECX + 0x3b8],0x2
004236f2  SETZ DL
004236f5  AND EDX,dword ptr [EBP + -0x18]
004236f8  TEST EDX,EDX
004236fa  JZ 0x004238ec
00423700  PUSH 0x7
00423702  MOV EAX,dword ptr [EBP + -0x10]
00423705  MOV ECX,dword ptr [EAX + 0xc0]
0042370b  CALL 0x00401258
00423710  MOV ECX,dword ptr [EBP + -0x10]
00423713  MOV dword ptr [ECX + 0x390],0x0
0042371d  MOV EDX,dword ptr [EBP + -0x10]
00423720  MOV dword ptr [EDX + 0x3b8],0x3
0042372a  MOV EAX,dword ptr [EBP + -0x10]
0042372d  MOV ECX,dword ptr [EBP + -0x10]
00423730  MOV EDX,dword ptr [EAX + 0x3d8]
00423736  CMP EDX,dword ptr [ECX + 0x3dc]
0042373c  JLE 0x004237ef
00423742  MOV dword ptr [EBP + -0x4],0x0
00423749  JMP 0x00423754
0042374b  MOV EAX,dword ptr [EBP + -0x4]
0042374e  ADD EAX,0x1
00423751  MOV dword ptr [EBP + -0x4],EAX
00423754  CMP dword ptr [EBP + -0x4],0x3
00423758  JGE 0x004237b4
0042375a  MOV ECX,dword ptr [EBP + -0x4]
0042375d  MOV EDX,dword ptr [EBP + -0x10]
00423760  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3c0]
00423767  MOV ECX,dword ptr [EBP + -0x10]
0042376a  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
00423771  CALL 0x0040128f
00423776  PUSH 0x1
00423778  MOV EDX,dword ptr [EBP + -0x4]
0042377b  MOV EAX,dword ptr [EBP + -0x10]
0042377e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c0]
00423785  MOV EDX,dword ptr [EBP + -0x10]
00423788  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0042378f  CALL 0x004012df
00423794  PUSH 0x1
00423796  MOV EAX,dword ptr [EBP + -0x4]
00423799  MOV ECX,dword ptr [EBP + -0x10]
0042379c  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3c0]
004237a3  MOV EAX,dword ptr [EBP + -0x10]
004237a6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004237ad  CALL 0x0040113b
004237b2  JMP 0x0042374b
004237b4  MOV dword ptr [EBP + -0x4],0x3
004237bb  JMP 0x004237c6
004237bd  MOV ECX,dword ptr [EBP + -0x4]
004237c0  ADD ECX,0x1
004237c3  MOV dword ptr [EBP + -0x4],ECX
004237c6  CMP dword ptr [EBP + -0x4],0x6
004237ca  JGE 0x004237ea
004237cc  MOV EDX,dword ptr [EBP + -0x4]
004237cf  MOV EAX,dword ptr [EBP + -0x10]
004237d2  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c0]
004237d9  MOV EDX,dword ptr [EBP + -0x10]
004237dc  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004237e3  CALL 0x00401168
004237e8  JMP 0x004237bd
004237ea  JMP 0x004238e7
004237ef  MOV EAX,dword ptr [EBP + -0x10]
004237f2  MOV ECX,dword ptr [EBP + -0x10]
004237f5  MOV EDX,dword ptr [EAX + 0x3d8]
004237fb  CMP EDX,dword ptr [ECX + 0x3dc]
00423801  JGE 0x004238b1
00423807  MOV dword ptr [EBP + -0x4],0x0
0042380e  JMP 0x00423819
00423810  MOV EAX,dword ptr [EBP + -0x4]
00423813  ADD EAX,0x1
00423816  MOV dword ptr [EBP + -0x4],EAX
00423819  CMP dword ptr [EBP + -0x4],0x3
0042381d  JGE 0x0042383d
0042381f  MOV ECX,dword ptr [EBP + -0x4]
00423822  MOV EDX,dword ptr [EBP + -0x10]
00423825  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3c0]
0042382c  MOV ECX,dword ptr [EBP + -0x10]
0042382f  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
00423836  CALL 0x00401168
0042383b  JMP 0x00423810
0042383d  MOV dword ptr [EBP + -0x4],0x3
00423844  JMP 0x0042384f
00423846  MOV EDX,dword ptr [EBP + -0x4]
00423849  ADD EDX,0x1
0042384c  MOV dword ptr [EBP + -0x4],EDX
0042384f  CMP dword ptr [EBP + -0x4],0x6
00423853  JGE 0x004238af
00423855  MOV EAX,dword ptr [EBP + -0x4]
00423858  MOV ECX,dword ptr [EBP + -0x10]
0042385b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x3c0]
00423862  MOV EAX,dword ptr [EBP + -0x10]
00423865  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0042386c  CALL 0x0040128f
00423871  PUSH 0x1
00423873  MOV ECX,dword ptr [EBP + -0x4]
00423876  MOV EDX,dword ptr [EBP + -0x10]
00423879  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3c0]
00423880  MOV ECX,dword ptr [EBP + -0x10]
00423883  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
0042388a  CALL 0x004012df
0042388f  PUSH 0x1
00423891  MOV EDX,dword ptr [EBP + -0x4]
00423894  MOV EAX,dword ptr [EBP + -0x10]
00423897  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c0]
0042389e  MOV EDX,dword ptr [EBP + -0x10]
004238a1  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004238a8  CALL 0x0040113b
004238ad  JMP 0x00423846
004238af  JMP 0x004238e7
004238b1  MOV dword ptr [EBP + -0x4],0x0
004238b8  JMP 0x004238c3
004238ba  MOV EAX,dword ptr [EBP + -0x4]
004238bd  ADD EAX,0x1
004238c0  MOV dword ptr [EBP + -0x4],EAX
004238c3  CMP dword ptr [EBP + -0x4],0x6
004238c7  JGE 0x004238e7
004238c9  MOV ECX,dword ptr [EBP + -0x4]
004238cc  MOV EDX,dword ptr [EBP + -0x10]
004238cf  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3c0]
004238d6  MOV ECX,dword ptr [EBP + -0x10]
004238d9  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
004238e0  CALL 0x004011ae
004238e5  JMP 0x004238ba
004238e7  JMP 0x00423d4e
004238ec  MOV EDX,dword ptr [EBP + -0x10]
004238ef  CMP dword ptr [EDX + 0x3b8],0x3
004238f6  JNZ 0x00423945
004238f8  MOV EAX,dword ptr [EBP + -0x10]
004238fb  MOV ECX,dword ptr [EAX + 0x6c]
004238fe  XOR EDX,EDX
00423900  CMP ECX,dword ptr [0x004540c0] {1}
00423906  SETZ DL
00423909  MOV EAX,dword ptr [EBP + -0x10]
0042390c  MOV ECX,dword ptr [EAX + 0x70]
0042390f  XOR EAX,EAX
00423911  CMP ECX,dword ptr [0x004540c0] {1}
00423917  SETZ AL
0042391a  OR EDX,EAX
0042391c  MOV ECX,dword ptr [EBP + -0x10]
0042391f  MOV EAX,dword ptr [ECX + 0x74]
00423922  XOR ECX,ECX
00423924  CMP EAX,dword ptr [0x004540c0] {1}
0042392a  SETZ CL
0042392d  OR EDX,ECX
0042392f  TEST EDX,EDX
00423931  JZ 0x00423940
00423933  MOV EDX,dword ptr [EBP + -0x10]
00423936  MOV dword ptr [EDX + 0x3b8],0x4
00423940  JMP 0x00423d4e
00423945  MOV EAX,dword ptr [EBP + -0x10]
00423948  CMP dword ptr [EAX + 0x3b8],0x4
0042394f  JNZ 0x004239a4
00423951  MOV ECX,dword ptr [EBP + -0x10]
00423954  FLD float ptr [0x0044e2dc] {0.3}
0042395a  FMUL float ptr [ECX + 0x54]
0042395d  MOV EDX,dword ptr [EBP + -0x10]
00423960  FADD float ptr [EDX + 0x394]
00423966  MOV EAX,dword ptr [EBP + -0x10]
00423969  FSTP float ptr [EAX + 0x394]
0042396f  MOV ECX,dword ptr [EBP + -0x10]
00423972  FLD float ptr [ECX + 0x394]
00423978  FCOMP float ptr [0x0044e2c4] {1}
0042397e  FNSTSW AX
00423980  TEST AH,0x41
00423983  JNZ 0x0042399f
00423985  MOV EDX,dword ptr [EBP + -0x10]
00423988  MOV dword ptr [EDX + 0x394],0x3f800000
00423992  MOV EAX,dword ptr [EBP + -0x10]
00423995  MOV dword ptr [EAX + 0x3b8],0x5
0042399f  JMP 0x00423d4e
004239a4  MOV ECX,dword ptr [EBP + -0x10]
004239a7  CMP dword ptr [ECX + 0x3b8],0x5
004239ae  JNZ 0x00423a46
004239b4  MOV EDX,dword ptr [EBP + -0x10]
004239b7  MOV ECX,dword ptr [EDX + 0xc0]
004239bd  CALL 0x00401276
004239c2  MOV EAX,dword ptr [EBP + -0x10]
004239c5  MOV ECX,dword ptr [EBP + -0x10]
004239c8  MOV EDX,dword ptr [EAX + 0x3d8]
004239ce  XOR EAX,EAX
004239d0  CMP EDX,dword ptr [ECX + 0x3dc]
004239d6  SETG AL
004239d9  MOV ECX,dword ptr [EBP + -0x10]
004239dc  XOR EDX,EDX
004239de  CMP dword ptr [ECX + 0x3b0],0x2
004239e5  SETNZ DL
004239e8  AND EAX,EDX
004239ea  TEST EAX,EAX
004239ec  JZ 0x00423a17
004239ee  MOV EAX,dword ptr [EBP + -0x10]
004239f1  MOV dword ptr [EAX + 0x3b8],0x0
004239fb  MOV ECX,dword ptr [EBP + -0x10]
004239fe  MOV dword ptr [ECX + 0x390],0x0
00423a08  MOV EDX,dword ptr [EBP + -0x10]
00423a0b  MOV dword ptr [EDX + 0x26c],0x9
00423a15  JMP 0x00423a41
00423a17  MOV EAX,dword ptr [EBP + -0x10]
00423a1a  MOV dword ptr [EAX + 0x3b8],0x6
00423a24  PUSH 0x7
00423a26  MOV ECX,dword ptr [EBP + -0x10]
00423a29  MOV ECX,dword ptr [ECX + 0xc0]
00423a2f  CALL 0x00401258
00423a34  MOV EDX,dword ptr [EBP + -0x10]
00423a37  MOV dword ptr [EDX + 0x390],0x0
00423a41  JMP 0x00423d4e
00423a46  MOV EAX,dword ptr [EBP + -0x10]
00423a49  FLD float ptr [EAX + 0x390]
00423a4f  FCOMP float ptr [0x0044e2e0] {4}
00423a55  FNSTSW AX
00423a57  TEST AH,0x41
00423a5a  JNZ 0x00423a65
00423a5c  MOV dword ptr [EBP + -0x1c],0x1
00423a63  JMP 0x00423a6c
00423a65  MOV dword ptr [EBP + -0x1c],0x0
00423a6c  MOV ECX,dword ptr [EBP + -0x10]
00423a6f  XOR EDX,EDX
00423a71  CMP dword ptr [ECX + 0x3b8],0x6
00423a78  SETZ DL
00423a7b  AND EDX,dword ptr [EBP + -0x1c]
00423a7e  TEST EDX,EDX
00423a80  JZ 0x00423d4e
00423a86  MOV dword ptr [EBP + -0x4],0x0
00423a8d  JMP 0x00423a98
00423a8f  MOV EAX,dword ptr [EBP + -0x4]
00423a92  ADD EAX,0x1
00423a95  MOV dword ptr [EBP + -0x4],EAX
00423a98  CMP dword ptr [EBP + -0x4],0x6
00423a9c  JGE 0x00423adc
00423a9e  PUSH 0x0
00423aa0  MOV ECX,dword ptr [EBP + -0x4]
00423aa3  MOV EDX,dword ptr [EBP + -0x10]
00423aa6  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x3c0]
00423aad  MOV ECX,dword ptr [EBP + -0x10]
00423ab0  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
00423ab7  CALL 0x004012df
00423abc  PUSH 0x0
00423abe  MOV EDX,dword ptr [EBP + -0x4]
00423ac1  MOV EAX,dword ptr [EBP + -0x10]
00423ac4  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3c0]
00423acb  MOV EDX,dword ptr [EBP + -0x10]
00423ace  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00423ad5  CALL 0x0040113b
00423ada  JMP 0x00423a8f
00423adc  MOV EAX,dword ptr [EBP + -0x10]
00423adf  MOV dword ptr [EAX + 0x21c],0x0
00423ae9  MOV ECX,dword ptr [EBP + -0x10]
00423aec  MOV dword ptr [ECX + 0x220],0x0
00423af6  MOV EDX,dword ptr [EBP + -0x10]
00423af9  MOV dword ptr [EDX + 0x224],0x0
00423b03  MOV EAX,dword ptr [EBP + -0x10]
00423b06  MOV dword ptr [EAX + 0x228],0x3f800000
00423b10  MOV ECX,dword ptr [EBP + -0x10]
00423b13  MOV dword ptr [ECX + 0x22c],0x0
00423b1d  MOV EDX,dword ptr [EBP + -0x10]
00423b20  MOV dword ptr [EDX + 0x230],0x3f800000
00423b2a  MOV EAX,dword ptr [EBP + -0x10]
00423b2d  MOV dword ptr [EAX + 0x240],0x0
00423b37  MOV ECX,dword ptr [EBP + -0x10]
00423b3a  MOV dword ptr [ECX + 0x244],0x40c00000
00423b44  MOV EDX,dword ptr [EBP + -0x10]
00423b47  MOV dword ptr [EDX + 0x248],0x0
00423b51  MOV EAX,dword ptr [EBP + -0x10]
00423b54  MOV dword ptr [EAX + 0x24c],0x0
00423b5e  MOV ECX,dword ptr [EBP + -0x10]
00423b61  MOV dword ptr [ECX + 0x250],0x40c00000
00423b6b  MOV EDX,dword ptr [EBP + -0x10]
00423b6e  MOV dword ptr [EDX + 0x254],0x0
00423b78  MOV EAX,dword ptr [EBP + -0x10]
00423b7b  MOV dword ptr [EAX + 0x260],0x0
00423b85  MOV ECX,dword ptr [EBP + -0x10]
00423b88  MOV dword ptr [ECX + 0x264],0x0
00423b92  MOV EDX,dword ptr [EBP + -0x10]
00423b95  MOV dword ptr [EDX + 0x258],0x0
00423b9f  MOV EAX,dword ptr [EBP + -0x10]
00423ba2  MOV dword ptr [EAX + 0x25c],0x0
00423bac  MOV ECX,dword ptr [EBP + -0x10]
00423baf  MOV dword ptr [ECX + 0x268],0xffffffff
00423bb9  MOV EDX,dword ptr [EBP + -0x10]
00423bbc  MOV dword ptr [EDX + 0x370],0x0
00423bc6  MOV EAX,dword ptr [EBP + -0x10]
00423bc9  MOV dword ptr [EAX + 0x374],0x0
00423bd3  MOV ECX,dword ptr [EBP + -0x10]
00423bd6  MOV dword ptr [ECX + 0x378],0x0
00423be0  MOV EDX,dword ptr [EBP + -0x10]
00423be3  MOV dword ptr [EDX + 0x234],0x3f800000
00423bed  MOV EAX,dword ptr [EBP + -0x10]
00423bf0  MOV dword ptr [EAX + 0x238],0xbf800000
00423bfa  MOV ECX,dword ptr [EBP + -0x10]
00423bfd  MOV dword ptr [ECX + 0x23c],0x3f800000
00423c07  MOV EDX,dword ptr [EBP + -0x10]
00423c0a  MOV dword ptr [EDX + 0x37c],0x0
00423c14  MOV EAX,dword ptr [EBP + -0x10]
00423c17  MOV dword ptr [EAX + 0x380],0x0
00423c21  MOV ECX,dword ptr [EBP + -0x10]
00423c24  MOV dword ptr [ECX + 0x384],0x0
00423c2e  MOV EDX,dword ptr [EBP + -0x10]
00423c31  MOV dword ptr [EDX + 0x390],0x0
00423c3b  MOV EAX,dword ptr [EBP + -0x10]
00423c3e  MOV dword ptr [EAX + 0x394],0x3f800000
00423c48  MOV ECX,dword ptr [EBP + -0x10]
00423c4b  MOV byte ptr [ECX + 0x398],0x0
00423c52  MOV EDX,dword ptr [EBP + -0x10]
00423c55  MOV byte ptr [EDX + 0x399],0x0
00423c5c  MOV EAX,dword ptr [EBP + -0x10]
00423c5f  MOV byte ptr [EAX + 0x39a],0x0
00423c66  MOV ECX,dword ptr [EBP + -0x10]
00423c69  MOV byte ptr [ECX + 0x3a4],0x0
00423c70  MOV EDX,dword ptr [EBP + -0x10]
00423c73  MOV byte ptr [EDX + 0x3a5],0x0
00423c7a  MOV EAX,dword ptr [EBP + -0x10]
00423c7d  MOV byte ptr [EAX + 0x3a6],0x0
00423c84  MOV ECX,dword ptr [EBP + -0x10]
00423c87  MOV byte ptr [ECX + 0x3a7],0x0
00423c8e  MOV EDX,dword ptr [EBP + -0x10]
00423c91  MOV dword ptr [EDX + 0x3ac],0x0
00423c9b  MOV EAX,dword ptr [EBP + -0x10]
00423c9e  MOV dword ptr [EAX + 0x3b8],0x0
00423ca8  MOV ECX,dword ptr [EBP + -0x10]
00423cab  MOV dword ptr [ECX + 0x3bc],0x0
00423cb5  MOV EDX,dword ptr [EBP + -0x10]
00423cb8  MOV dword ptr [EDX + 0x39c],0x0
00423cc2  MOV EAX,dword ptr [EBP + -0x10]
00423cc5  MOV dword ptr [EAX + 0x3a0],0xbf800000
00423ccf  MOV ECX,dword ptr [EBP + -0x10]
00423cd2  MOV dword ptr [ECX + 0x3b0],0x0
00423cdc  MOV EDX,dword ptr [EBP + -0x10]
00423cdf  MOV dword ptr [EDX + 0x3b4],0x0
00423ce9  MOV EAX,dword ptr [EBP + -0x10]
00423cec  MOV dword ptr [EAX + 0x3e0],0x43960000
00423cf6  MOV ECX,dword ptr [EBP + -0x10]
00423cf9  MOV dword ptr [ECX + 0x3d8],0x0
00423d03  MOV EDX,dword ptr [EBP + -0x10]
00423d06  MOV dword ptr [EDX + 0x3dc],0x0
00423d10  MOV EAX,dword ptr [EBP + -0x10]
00423d13  MOV dword ptr [EAX + 0x400],0x40800000
00423d1d  MOV ECX,dword ptr [EBP + -0x10]
00423d20  MOV dword ptr [ECX + 0x40c],0x0
00423d2a  MOV EDX,dword ptr [EBP + -0x10]
00423d2d  MOV byte ptr [EDX + 0x414],0x0
00423d34  MOV EAX,dword ptr [EBP + -0x10]
00423d37  MOV dword ptr [EAX + 0x418],0xffffffff
00423d41  MOV ECX,dword ptr [EBP + -0x10]
00423d44  MOV dword ptr [ECX + 0x26c],0x1
00423d4e  POP ESI
00423d4f  MOV ESP,EBP
00423d51  POP EBP
00423d52  RET
