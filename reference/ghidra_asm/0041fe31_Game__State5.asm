0041fe31  PUSH EBP
0041fe32  MOV EBP,ESP
0041fe34  SUB ESP,0xe0
0041fe3a  PUSH EBX
0041fe3b  PUSH ESI
0041fe3c  MOV dword ptr [EBP + 0xffffff50],ECX
0041fe42  MOV EAX,dword ptr [EBP + 0xffffff50]
0041fe48  MOV ECX,dword ptr [EBP + 0xffffff50]
0041fe4e  FLD float ptr [EAX + 0x390]
0041fe54  FADD float ptr [ECX + 0x54]
0041fe57  MOV EDX,dword ptr [EBP + 0xffffff50]
0041fe5d  FSTP float ptr [EDX + 0x390]
0041fe63  MOV EAX,dword ptr [EBP + 0xffffff50]
0041fe69  CMP dword ptr [EAX + 0x3b8],0x5
0041fe70  JNZ 0x0042049a
0041fe76  MOV ECX,dword ptr [EBP + 0xffffff50]
0041fe7c  MOV ECX,dword ptr [ECX + 0xc0]
0041fe82  CALL 0x0040100a
0041fe87  PUSH 0x1
0041fe89  MOV ECX,dword ptr [EBP + 0xffffff50]
0041fe8f  CALL 0x0040117c
0041fe94  MOV EDX,dword ptr [EBP + 0xffffff50]
0041fe9a  MOV byte ptr [EDX + 0x398],0x0
0041fea1  MOV EAX,dword ptr [EBP + 0xffffff50]
0041fea7  MOV byte ptr [EAX + 0x3a5],0x1
0041feae  MOV ECX,dword ptr [EBP + 0xffffff50]
0041feb4  MOV byte ptr [ECX + 0x3a4],0x1
0041febb  MOV EDX,dword ptr [EBP + 0xffffff50]
0041fec1  MOV dword ptr [EDX + 0x39c],0x0
0041fecb  MOV EAX,dword ptr [EBP + 0xffffff50]
0041fed1  CMP dword ptr [EAX + 0x3b0],0x2
0041fed8  JNZ 0x0041feec
0041feda  MOV ECX,dword ptr [EBP + 0xffffff50]
0041fee0  MOV dword ptr [ECX + 0x3e0],0x43340000
0041feea  JMP 0x0041fefc
0041feec  MOV EDX,dword ptr [EBP + 0xffffff50]
0041fef2  MOV dword ptr [EDX + 0x3e0],0x43960000
0041fefc  MOV EAX,dword ptr [EBP + 0xffffff50]
0041ff02  MOV byte ptr [EAX + 0x414],0x0
0041ff09  MOV ECX,dword ptr [EBP + 0xffffff50]
0041ff0f  MOV dword ptr [ECX + 0x394],0x0
0041ff19  MOV EDX,dword ptr [EBP + 0xffffff50]
0041ff1f  MOV dword ptr [EDX + 0x220],0x431b0000
0041ff29  MOV EAX,dword ptr [EBP + 0xffffff50]
0041ff2f  MOV dword ptr [EAX + 0x260],0x0
0041ff39  MOV ECX,dword ptr [EBP + 0xffffff50]
0041ff3f  MOV dword ptr [ECX + 0x250],0x3f333333
0041ff49  MOV EDX,dword ptr [EBP + 0xffffff50]
0041ff4f  MOV dword ptr [EDX + 0x268],0xffffffff
0041ff59  MOV EAX,dword ptr [EBP + 0xffffff50]
0041ff5f  MOV dword ptr [EAX + 0x41c],0x0
0041ff69  MOV dword ptr [EBP + -0x4],0x0
0041ff70  JMP 0x0041ff7b
0041ff72  MOV ECX,dword ptr [EBP + -0x4]
0041ff75  ADD ECX,0x1
0041ff78  MOV dword ptr [EBP + -0x4],ECX
0041ff7b  CMP dword ptr [EBP + -0x4],0x6
0041ff7f  JGE 0x00420015
0041ff85  MOV EDX,dword ptr [EBP + -0x4]
0041ff88  MOV EAX,dword ptr [EBP + 0xffffff50]
0041ff8e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041ff95  MOV dword ptr [ECX + 0x190],0x0
0041ff9f  MOV EDX,dword ptr [EBP + -0x4]
0041ffa2  MOV EAX,dword ptr [EBP + 0xffffff50]
0041ffa8  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041ffaf  CALL 0x00401384
0041ffb4  PUSH 0x0
0041ffb6  MOV ECX,dword ptr [EBP + -0x4]
0041ffb9  MOV EDX,dword ptr [EBP + 0xffffff50]
0041ffbf  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0041ffc6  CALL 0x00401096
0041ffcb  PUSH 0x0
0041ffcd  MOV EAX,dword ptr [EBP + -0x4]
0041ffd0  MOV ECX,dword ptr [EBP + 0xffffff50]
0041ffd6  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
0041ffdd  CALL 0x0040113b
0041ffe2  PUSH 0x0
0041ffe4  MOV EDX,dword ptr [EBP + -0x4]
0041ffe7  MOV EAX,dword ptr [EBP + 0xffffff50]
0041ffed  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0041fff4  CALL 0x004012df
0041fff9  PUSH 0x0
0041fffb  MOV ECX,dword ptr [EBP + -0x4]
0041fffe  MOV EDX,dword ptr [EBP + 0xffffff50]
00420004  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
0042000b  CALL 0x00401082
00420010  JMP 0x0041ff72
00420015  MOV EAX,dword ptr [EBP + 0xffffff50]
0042001b  XOR ECX,ECX
0042001d  MOV CL,byte ptr [EAX + 0x3a6]
00420023  TEST ECX,ECX
00420025  JZ 0x0042029c
0042002b  PUSH 0xc016b852
00420030  PUSH 0xc0e00000
00420035  PUSH 0x0
00420037  PUSH 0xc0e00000
0042003c  LEA ECX,[EBP + -0x10]
0042003f  CALL 0x00401348
00420044  SUB ESP,0xc
00420047  MOV EDX,ESP
00420049  MOV ECX,dword ptr [EAX]
0042004b  MOV dword ptr [EDX],ECX
0042004d  MOV ECX,dword ptr [EAX + 0x4]
00420050  MOV dword ptr [EDX + 0x4],ECX
00420053  MOV EAX,dword ptr [EAX + 0x8]
00420056  MOV dword ptr [EDX + 0x8],EAX
00420059  MOV ECX,dword ptr [EBP + 0xffffff50]
0042005f  MOV EDX,dword ptr [ECX + 0x3e4]
00420065  MOV EAX,dword ptr [EBP + 0xffffff50]
0042006b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00420072  CALL 0x004012c6
00420077  PUSH 0xbf48f5c3
0042007c  PUSH 0x40e00000
00420081  PUSH 0x0
00420083  PUSH 0xc0e00000
00420088  LEA ECX,[EBP + -0x1c]
0042008b  CALL 0x00401348
00420090  SUB ESP,0xc
00420093  MOV ECX,ESP
00420095  MOV EDX,dword ptr [EAX]
00420097  MOV dword ptr [ECX],EDX
00420099  MOV EDX,dword ptr [EAX + 0x4]
0042009c  MOV dword ptr [ECX + 0x4],EDX
0042009f  MOV EAX,dword ptr [EAX + 0x8]
004200a2  MOV dword ptr [ECX + 0x8],EAX
004200a5  MOV ECX,dword ptr [EBP + 0xffffff50]
004200ab  MOV EDX,dword ptr [ECX + 0x3e8]
004200b1  MOV EAX,dword ptr [EBP + 0xffffff50]
004200b7  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004200be  CALL 0x004012c6
004200c3  PUSH 0x3fc91687
004200c8  PUSH 0x0
004200ca  PUSH 0x0
004200cc  PUSH 0x40000000
004200d1  LEA ECX,[EBP + -0x28]
004200d4  CALL 0x00401348
004200d9  SUB ESP,0xc
004200dc  MOV ECX,ESP
004200de  MOV EDX,dword ptr [EAX]
004200e0  MOV dword ptr [ECX],EDX
004200e2  MOV EDX,dword ptr [EAX + 0x4]
004200e5  MOV dword ptr [ECX + 0x4],EDX
004200e8  MOV EAX,dword ptr [EAX + 0x8]
004200eb  MOV dword ptr [ECX + 0x8],EAX
004200ee  MOV ECX,dword ptr [EBP + 0xffffff50]
004200f4  MOV EDX,dword ptr [ECX + 0x3ec]
004200fa  MOV EAX,dword ptr [EBP + 0xffffff50]
00420100  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00420107  CALL 0x004012c6
0042010c  MOV ECX,dword ptr [EBP + 0xffffff50]
00420112  CMP dword ptr [ECX + 0x3b0],0x2
00420119  JNZ 0x004201b6
0042011f  PUSH 0x0
00420121  PUSH 0x41b80000
00420126  PUSH 0x0
00420128  PUSH 0xc0000000
0042012d  LEA ECX,[EBP + -0x34]
00420130  CALL 0x00401348
00420135  SUB ESP,0xc
00420138  MOV EDX,ESP
0042013a  MOV ECX,dword ptr [EAX]
0042013c  MOV dword ptr [EDX],ECX
0042013e  MOV ECX,dword ptr [EAX + 0x4]
00420141  MOV dword ptr [EDX + 0x4],ECX
00420144  MOV EAX,dword ptr [EAX + 0x8]
00420147  MOV dword ptr [EDX + 0x8],EAX
0042014a  MOV ECX,dword ptr [EBP + 0xffffff50]
00420150  MOV EDX,dword ptr [ECX + 0x3f0]
00420156  MOV EAX,dword ptr [EBP + 0xffffff50]
0042015c  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00420163  CALL 0x004012c6
00420168  PUSH 0x0
0042016a  PUSH 0x41b80000
0042016f  PUSH 0x0
00420171  PUSH 0x40000000
00420176  LEA ECX,[EBP + -0x40]
00420179  CALL 0x00401348
0042017e  SUB ESP,0xc
00420181  MOV ECX,ESP
00420183  MOV EDX,dword ptr [EAX]
00420185  MOV dword ptr [ECX],EDX
00420187  MOV EDX,dword ptr [EAX + 0x4]
0042018a  MOV dword ptr [ECX + 0x4],EDX
0042018d  MOV EAX,dword ptr [EAX + 0x8]
00420190  MOV dword ptr [ECX + 0x8],EAX
00420193  MOV ECX,dword ptr [EBP + 0xffffff50]
00420199  MOV EDX,dword ptr [ECX + 0x3f4]
0042019f  MOV EAX,dword ptr [EBP + 0xffffff50]
004201a5  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004201ac  CALL 0x004012c6
004201b1  JMP 0x0042024e
004201b6  PUSH 0x4016b852
004201bb  PUSH 0xc0e00000
004201c0  PUSH 0x0
004201c2  PUSH 0x40e00000
004201c7  LEA ECX,[EBP + -0x4c]
004201ca  CALL 0x00401348
004201cf  SUB ESP,0xc
004201d2  MOV ECX,ESP
004201d4  MOV EDX,dword ptr [EAX]
004201d6  MOV dword ptr [ECX],EDX
004201d8  MOV EDX,dword ptr [EAX + 0x4]
004201db  MOV dword ptr [ECX + 0x4],EDX
004201de  MOV EAX,dword ptr [EAX + 0x8]
004201e1  MOV dword ptr [ECX + 0x8],EAX
004201e4  MOV ECX,dword ptr [EBP + 0xffffff50]
004201ea  MOV EDX,dword ptr [ECX + 0x3f0]
004201f0  MOV EAX,dword ptr [EBP + 0xffffff50]
004201f6  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004201fd  CALL 0x004012c6
00420202  PUSH 0x3f48f5c3
00420207  PUSH 0x40e00000
0042020c  PUSH 0x0
0042020e  PUSH 0x40e00000
00420213  LEA ECX,[EBP + -0x58]
00420216  CALL 0x00401348
0042021b  SUB ESP,0xc
0042021e  MOV ECX,ESP
00420220  MOV EDX,dword ptr [EAX]
00420222  MOV dword ptr [ECX],EDX
00420224  MOV EDX,dword ptr [EAX + 0x4]
00420227  MOV dword ptr [ECX + 0x4],EDX
0042022a  MOV EAX,dword ptr [EAX + 0x8]
0042022d  MOV dword ptr [ECX + 0x8],EAX
00420230  MOV ECX,dword ptr [EBP + 0xffffff50]
00420236  MOV EDX,dword ptr [ECX + 0x3f4]
0042023c  MOV EAX,dword ptr [EBP + 0xffffff50]
00420242  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00420249  CALL 0x004012c6
0042024e  PUSH 0xbfc91687
00420253  PUSH 0x0
00420255  PUSH 0x0
00420257  PUSH 0xc0000000
0042025c  LEA ECX,[EBP + -0x64]
0042025f  CALL 0x00401348
00420264  SUB ESP,0xc
00420267  MOV ECX,ESP
00420269  MOV EDX,dword ptr [EAX]
0042026b  MOV dword ptr [ECX],EDX
0042026d  MOV EDX,dword ptr [EAX + 0x4]
00420270  MOV dword ptr [ECX + 0x4],EDX
00420273  MOV EAX,dword ptr [EAX + 0x8]
00420276  MOV dword ptr [ECX + 0x8],EAX
00420279  MOV ECX,dword ptr [EBP + 0xffffff50]
0042027f  MOV EDX,dword ptr [ECX + 0x3f8]
00420285  MOV EAX,dword ptr [EBP + 0xffffff50]
0042028b  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00420292  CALL 0x004012c6
00420297  JMP 0x0042048a
0042029c  MOV ECX,dword ptr [EBP + 0xffffff50]
004202a2  MOV dword ptr [ECX + 0x3d8],0x0
004202ac  MOV EDX,dword ptr [EBP + 0xffffff50]
004202b2  MOV dword ptr [EDX + 0x3dc],0x0
004202bc  PUSH 0x4016b852
004202c1  PUSH 0xc0e00000
004202c6  PUSH 0x0
004202c8  PUSH 0x40e00000
004202cd  LEA ECX,[EBP + -0x70]
004202d0  CALL 0x00401348
004202d5  SUB ESP,0xc
004202d8  MOV ECX,ESP
004202da  MOV EDX,dword ptr [EAX]
004202dc  MOV dword ptr [ECX],EDX
004202de  MOV EDX,dword ptr [EAX + 0x4]
004202e1  MOV dword ptr [ECX + 0x4],EDX
004202e4  MOV EAX,dword ptr [EAX + 0x8]
004202e7  MOV dword ptr [ECX + 0x8],EAX
004202ea  MOV ECX,dword ptr [EBP + 0xffffff50]
004202f0  MOV EDX,dword ptr [ECX + 0x3e4]
004202f6  MOV EAX,dword ptr [EBP + 0xffffff50]
004202fc  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00420303  CALL 0x004012c6
00420308  PUSH 0x3f48f5c3
0042030d  PUSH 0x40e00000
00420312  PUSH 0x0
00420314  PUSH 0x40e00000
00420319  LEA ECX,[EBP + -0x7c]
0042031c  CALL 0x00401348
00420321  SUB ESP,0xc
00420324  MOV ECX,ESP
00420326  MOV EDX,dword ptr [EAX]
00420328  MOV dword ptr [ECX],EDX
0042032a  MOV EDX,dword ptr [EAX + 0x4]
0042032d  MOV dword ptr [ECX + 0x4],EDX
00420330  MOV EAX,dword ptr [EAX + 0x8]
00420333  MOV dword ptr [ECX + 0x8],EAX
00420336  MOV ECX,dword ptr [EBP + 0xffffff50]
0042033c  MOV EDX,dword ptr [ECX + 0x3e8]
00420342  MOV EAX,dword ptr [EBP + 0xffffff50]
00420348  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0042034f  CALL 0x004012c6
00420354  PUSH 0xbfc91687
00420359  PUSH 0x0
0042035b  PUSH 0x0
0042035d  PUSH 0xc0000000
00420362  LEA ECX,[EBP + 0xffffff78]
00420368  CALL 0x00401348
0042036d  SUB ESP,0xc
00420370  MOV ECX,ESP
00420372  MOV EDX,dword ptr [EAX]
00420374  MOV dword ptr [ECX],EDX
00420376  MOV EDX,dword ptr [EAX + 0x4]
00420379  MOV dword ptr [ECX + 0x4],EDX
0042037c  MOV EAX,dword ptr [EAX + 0x8]
0042037f  MOV dword ptr [ECX + 0x8],EAX
00420382  MOV ECX,dword ptr [EBP + 0xffffff50]
00420388  MOV EDX,dword ptr [ECX + 0x3ec]
0042038e  MOV EAX,dword ptr [EBP + 0xffffff50]
00420394  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
0042039b  CALL 0x004012c6
004203a0  PUSH 0xc016b852
004203a5  PUSH 0xc0e00000
004203aa  PUSH 0x0
004203ac  PUSH 0xc0e00000
004203b1  LEA ECX,[EBP + 0xffffff6c]
004203b7  CALL 0x00401348
004203bc  SUB ESP,0xc
004203bf  MOV ECX,ESP
004203c1  MOV EDX,dword ptr [EAX]
004203c3  MOV dword ptr [ECX],EDX
004203c5  MOV EDX,dword ptr [EAX + 0x4]
004203c8  MOV dword ptr [ECX + 0x4],EDX
004203cb  MOV EAX,dword ptr [EAX + 0x8]
004203ce  MOV dword ptr [ECX + 0x8],EAX
004203d1  MOV ECX,dword ptr [EBP + 0xffffff50]
004203d7  MOV EDX,dword ptr [ECX + 0x3f0]
004203dd  MOV EAX,dword ptr [EBP + 0xffffff50]
004203e3  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004203ea  CALL 0x004012c6
004203ef  PUSH 0xbf48f5c3
004203f4  PUSH 0x40e00000
004203f9  PUSH 0x0
004203fb  PUSH 0xc0e00000
00420400  LEA ECX,[EBP + 0xffffff60]
00420406  CALL 0x00401348
0042040b  SUB ESP,0xc
0042040e  MOV ECX,ESP
00420410  MOV EDX,dword ptr [EAX]
00420412  MOV dword ptr [ECX],EDX
00420414  MOV EDX,dword ptr [EAX + 0x4]
00420417  MOV dword ptr [ECX + 0x4],EDX
0042041a  MOV EAX,dword ptr [EAX + 0x8]
0042041d  MOV dword ptr [ECX + 0x8],EAX
00420420  MOV ECX,dword ptr [EBP + 0xffffff50]
00420426  MOV EDX,dword ptr [ECX + 0x3f4]
0042042c  MOV EAX,dword ptr [EBP + 0xffffff50]
00420432  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00420439  CALL 0x004012c6
0042043e  PUSH 0x3fc91687
00420443  PUSH 0x0
00420445  PUSH 0x0
00420447  PUSH 0x40000000
0042044c  LEA ECX,[EBP + 0xffffff54]
00420452  CALL 0x00401348
00420457  SUB ESP,0xc
0042045a  MOV ECX,ESP
0042045c  MOV EDX,dword ptr [EAX]
0042045e  MOV dword ptr [ECX],EDX
00420460  MOV EDX,dword ptr [EAX + 0x4]
00420463  MOV dword ptr [ECX + 0x4],EDX
00420466  MOV EAX,dword ptr [EAX + 0x8]
00420469  MOV dword ptr [ECX + 0x8],EAX
0042046c  MOV ECX,dword ptr [EBP + 0xffffff50]
00420472  MOV EDX,dword ptr [ECX + 0x3f8]
00420478  MOV EAX,dword ptr [EBP + 0xffffff50]
0042047e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00420485  CALL 0x004012c6
0042048a  MOV ECX,dword ptr [EBP + 0xffffff50]
00420490  MOV dword ptr [ECX + 0x3b8],0x0
0042049a  MOV EDX,dword ptr [EBP + 0xffffff50]
004204a0  FLD float ptr [EDX + 0x220]
004204a6  FCOMP float ptr [0x0044e240] {65}
004204ac  FNSTSW AX
004204ae  TEST AH,0x41
004204b1  JNZ 0x004204bf
004204b3  MOV dword ptr [EBP + 0xffffff4c],0x1
004204bd  JMP 0x004204c9
004204bf  MOV dword ptr [EBP + 0xffffff4c],0x0
004204c9  MOV EAX,dword ptr [EBP + 0xffffff50]
004204cf  XOR ECX,ECX
004204d1  CMP dword ptr [EAX + 0x3b8],0x0
004204d8  SETZ CL
004204db  MOV EDX,dword ptr [EBP + 0xffffff4c]
004204e1  AND EDX,ECX
004204e3  TEST EDX,EDX
004204e5  JZ 0x004205d5
004204eb  MOV EAX,dword ptr [EBP + 0xffffff50]
004204f1  FLD float ptr [0x0044e244] {30}
004204f7  FMUL float ptr [EAX + 0x54]
004204fa  MOV ECX,dword ptr [EBP + 0xffffff50]
00420500  FSUBR float ptr [ECX + 0x220]
00420506  MOV EDX,dword ptr [EBP + 0xffffff50]
0042050c  FSTP float ptr [EDX + 0x220]
00420512  MOV EAX,dword ptr [EBP + 0xffffff50]
00420518  FLD float ptr [EAX + 0x390]
0042051e  FSUB float ptr [0x0044e224] {3}
00420524  FMUL float ptr [0x0044e248] {1.57}
0042052a  PUSH ECX
0042052b  FSTP float ptr [ESP]
0042052e  CALL 0x00401262
00420533  ADD ESP,0x4
00420536  FMUL float ptr [0x0044e24c] {0.001}
0042053c  MOV ECX,dword ptr [EBP + 0xffffff50]
00420542  FSTP float ptr [ECX + 0x21c]
00420548  MOV EDX,dword ptr [EBP + 0xffffff50]
0042054e  FLD float ptr [EDX + 0x390]
00420554  FSUB float ptr [0x0044e224] {3}
0042055a  FMUL float ptr [0x0044e248] {1.57}
00420560  PUSH ECX
00420561  FSTP float ptr [ESP]
00420564  CALL 0x0040136b
00420569  ADD ESP,0x4
0042056c  FMUL float ptr [0x0044e24c] {0.001}
00420572  MOV EAX,dword ptr [EBP + 0xffffff50]
00420578  FSTP float ptr [EAX + 0x224]
0042057e  MOV ECX,dword ptr [EBP + 0xffffff50]
00420584  FLD float ptr [ECX + 0x21c]
0042058a  FCHS
0042058c  MOV EDX,dword ptr [EBP + 0xffffff50]
00420592  FSTP float ptr [EDX + 0x228]
00420598  MOV EAX,dword ptr [EBP + 0xffffff50]
0042059e  FLD float ptr [EAX + 0x224]
004205a4  FCHS
004205a6  MOV ECX,dword ptr [EBP + 0xffffff50]
004205ac  FSTP float ptr [ECX + 0x230]
004205b2  MOV EDX,dword ptr [EBP + 0xffffff50]
004205b8  FLD float ptr [0x0044e250] {5}
004205be  FSUB float ptr [EDX + 0x220]
004205c4  MOV EAX,dword ptr [EBP + 0xffffff50]
004205ca  FSTP float ptr [EAX + 0x22c]
004205d0  JMP 0x00421346
004205d5  MOV ECX,dword ptr [EBP + 0xffffff50]
004205db  FLD float ptr [ECX + 0x220]
004205e1  FCOMP float ptr [0x0044e250] {5}
004205e7  FNSTSW AX
004205e9  TEST AH,0x41
004205ec  JNZ 0x004205fa
004205ee  MOV dword ptr [EBP + 0xffffff48],0x1
004205f8  JMP 0x00420604
004205fa  MOV dword ptr [EBP + 0xffffff48],0x0
00420604  MOV EDX,dword ptr [EBP + 0xffffff50]
0042060a  XOR EAX,EAX
0042060c  CMP dword ptr [EDX + 0x3b8],0x0
00420613  SETZ AL
00420616  MOV ECX,dword ptr [EBP + 0xffffff48]
0042061c  AND ECX,EAX
0042061e  TEST ECX,ECX
00420620  JZ 0x0042074c
00420626  MOV EDX,dword ptr [EBP + 0xffffff50]
0042062c  FLD float ptr [0x0044e244] {30}
00420632  FMUL float ptr [EDX + 0x54]
00420635  MOV EAX,dword ptr [EBP + 0xffffff50]
0042063b  FSUBR float ptr [EAX + 0x220]
00420641  MOV ECX,dword ptr [EBP + 0xffffff50]
00420647  FSTP float ptr [ECX + 0x220]
0042064d  MOV EDX,dword ptr [EBP + 0xffffff50]
00420653  FLD float ptr [EDX + 0x390]
00420659  FSUB float ptr [0x0044e224] {3}
0042065f  FMUL float ptr [0x0044e254] {10}
00420665  FSTP float ptr [EBP + 0xffffff44]
0042066b  MOV EAX,dword ptr [EBP + 0xffffff50]
00420671  FLD float ptr [EAX + 0x390]
00420677  FSUB float ptr [0x0044e224] {3}
0042067d  FMUL float ptr [0x0044e248] {1.57}
00420683  PUSH ECX
00420684  FSTP float ptr [ESP]
00420687  CALL 0x00401262
0042068c  ADD ESP,0x4
0042068f  FMUL float ptr [EBP + 0xffffff44]
00420695  MOV ECX,dword ptr [EBP + 0xffffff50]
0042069b  FSTP float ptr [ECX + 0x21c]
004206a1  MOV EDX,dword ptr [EBP + 0xffffff50]
004206a7  FLD float ptr [EDX + 0x390]
004206ad  FSUB float ptr [0x0044e224] {3}
004206b3  FMUL float ptr [0x0044e254] {10}
004206b9  FSTP float ptr [EBP + 0xffffff40]
004206bf  MOV EAX,dword ptr [EBP + 0xffffff50]
004206c5  FLD float ptr [EAX + 0x390]
004206cb  FSUB float ptr [0x0044e224] {3}
004206d1  FMUL float ptr [0x0044e248] {1.57}
004206d7  PUSH ECX
004206d8  FSTP float ptr [ESP]
004206db  CALL 0x0040136b
004206e0  ADD ESP,0x4
004206e3  FMUL float ptr [EBP + 0xffffff40]
004206e9  MOV ECX,dword ptr [EBP + 0xffffff50]
004206ef  FSTP float ptr [ECX + 0x224]
004206f5  MOV EDX,dword ptr [EBP + 0xffffff50]
004206fb  FLD float ptr [EDX + 0x21c]
00420701  FCHS
00420703  MOV EAX,dword ptr [EBP + 0xffffff50]
00420709  FSTP float ptr [EAX + 0x228]
0042070f  MOV ECX,dword ptr [EBP + 0xffffff50]
00420715  FLD float ptr [ECX + 0x224]
0042071b  FCHS
0042071d  MOV EDX,dword ptr [EBP + 0xffffff50]
00420723  FSTP float ptr [EDX + 0x230]
00420729  MOV EAX,dword ptr [EBP + 0xffffff50]
0042072f  FLD float ptr [0x0044e250] {5}
00420735  FSUB float ptr [EAX + 0x220]
0042073b  MOV ECX,dword ptr [EBP + 0xffffff50]
00420741  FSTP float ptr [ECX + 0x22c]
00420747  JMP 0x00421346
0042074c  MOV EDX,dword ptr [EBP + 0xffffff50]
00420752  CMP dword ptr [EDX + 0x3b8],0x0
00420759  JNZ 0x004207d7
0042075b  MOV EAX,dword ptr [EBP + 0xffffff50]
00420761  MOV dword ptr [EAX + 0x390],0x0
0042076b  PUSH 0x0
0042076d  MOV ECX,dword ptr [EBP + 0xffffff50]
00420773  MOV ECX,dword ptr [ECX + 0xc0]
00420779  CALL 0x00401258
0042077e  MOV EDX,dword ptr [EBP + 0xffffff50]
00420784  MOV dword ptr [EDX + 0x22c],0x0
0042078e  MOV dword ptr [EBP + -0x4],0x0
00420795  JMP 0x004207a0
00420797  MOV EAX,dword ptr [EBP + -0x4]
0042079a  ADD EAX,0x1
0042079d  MOV dword ptr [EBP + -0x4],EAX
004207a0  CMP dword ptr [EBP + -0x4],0x6
004207a4  JGE 0x004207c2
004207a6  MOV ECX,dword ptr [EBP + -0x4]
004207a9  MOV EDX,dword ptr [EBP + 0xffffff50]
004207af  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004207b6  MOV dword ptr [EAX + 0x190],0x7
004207c0  JMP 0x00420797
004207c2  MOV ECX,dword ptr [EBP + 0xffffff50]
004207c8  MOV dword ptr [ECX + 0x3b8],0x1
004207d2  JMP 0x00421346
004207d7  MOV EDX,dword ptr [EBP + 0xffffff50]
004207dd  FLD float ptr [EDX + 0x390]
004207e3  FCOMP float ptr [0x0044e23c] {1}
004207e9  FNSTSW AX
004207eb  TEST AH,0x41
004207ee  JNZ 0x004207fc
004207f0  MOV dword ptr [EBP + 0xffffff3c],0x1
004207fa  JMP 0x00420806
004207fc  MOV dword ptr [EBP + 0xffffff3c],0x0
00420806  MOV EAX,dword ptr [EBP + 0xffffff50]
0042080c  XOR ECX,ECX
0042080e  CMP dword ptr [EAX + 0x3b8],0x1
00420815  SETZ CL
00420818  MOV EDX,dword ptr [EBP + 0xffffff3c]
0042081e  AND EDX,ECX
00420820  TEST EDX,EDX
00420822  JZ 0x00420989
00420828  MOV EAX,dword ptr [EBP + 0xffffff50]
0042082e  MOV dword ptr [EAX + 0x3b8],0x2
00420838  PUSH 0x1
0042083a  MOV ECX,dword ptr [EBP + 0xffffff50]
00420840  MOV ECX,dword ptr [ECX + 0xc0]
00420846  CALL 0x00401258
0042084b  MOV EDX,dword ptr [EBP + 0xffffff50]
00420851  MOV dword ptr [EDX + 0x25c],0x41b80000
0042085b  MOV EAX,dword ptr [EBP + 0xffffff50]
00420861  MOV dword ptr [EAX + 0x250],0x3f333333
0042086b  MOV ECX,dword ptr [EBP + 0xffffff50]
00420871  MOV dword ptr [ECX + 0x3a0],0x0
0042087b  MOV EDX,dword ptr [EBP + 0xffffff50]
00420881  MOV byte ptr [EDX + 0x3a7],0x1
00420888  MOV EAX,dword ptr [EBP + 0xffffff50]
0042088e  CMP dword ptr [EAX + 0x3b0],0x1
00420895  JNZ 0x004208fa
00420897  MOV ECX,dword ptr [EBP + 0xffffff50]
0042089d  MOV EDX,dword ptr [ECX + 0x3f8]
004208a3  MOV EAX,dword ptr [EBP + 0xffffff50]
004208a9  MOV ESI,dword ptr [EAX + EDX*0x4 + 0xd8]
004208b0  CALL 0x00433410
004208b5  MOV dword ptr [EBP + 0xffffff38],EAX
004208bb  FILD dword ptr [EBP + 0xffffff38]
004208c1  FMUL float ptr [0x0044e258] {0.2}
004208c7  FDIV float ptr [0x0044e25c] {32767}
004208cd  FADD float ptr [0x0044e260] {0.85}
004208d3  FMUL float ptr [ESI + 0x16c]
004208d9  MOV ECX,dword ptr [EBP + 0xffffff50]
004208df  MOV EDX,dword ptr [ECX + 0x3f8]
004208e5  MOV EAX,dword ptr [EBP + 0xffffff50]
004208eb  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004208f2  FSTP float ptr [ECX + 0x18c]
004208f8  JMP 0x0042095b
004208fa  MOV EDX,dword ptr [EBP + 0xffffff50]
00420900  MOV EAX,dword ptr [EDX + 0x3f8]
00420906  MOV ECX,dword ptr [EBP + 0xffffff50]
0042090c  MOV ESI,dword ptr [ECX + EAX*0x4 + 0xd8]
00420913  CALL 0x00433410
00420918  MOV dword ptr [EBP + 0xffffff34],EAX
0042091e  FILD dword ptr [EBP + 0xffffff34]
00420924  FMUL float ptr [0x0044e258] {0.2}
0042092a  FDIV float ptr [0x0044e25c] {32767}
00420930  FADD float ptr [0x0044e264] {0.8}
00420936  FMUL float ptr [ESI + 0x16c]
0042093c  MOV EDX,dword ptr [EBP + 0xffffff50]
00420942  MOV EAX,dword ptr [EDX + 0x3f8]
00420948  MOV ECX,dword ptr [EBP + 0xffffff50]
0042094e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00420955  FSTP float ptr [EDX + 0x18c]
0042095b  CALL 0x00433410
00420960  MOV dword ptr [EBP + 0xffffff30],EAX
00420966  FILD dword ptr [EBP + 0xffffff30]
0042096c  FMUL float ptr [0x0044e258] {0.2}
00420972  FDIV float ptr [0x0044e25c] {32767}
00420978  MOV EAX,dword ptr [EBP + 0xffffff50]
0042097e  FSTP float ptr [EAX + 0x3bc]
00420984  JMP 0x00421346
00420989  MOV ECX,dword ptr [EBP + 0xffffff50]
0042098f  MOV EDX,dword ptr [EBP + 0xffffff50]
00420995  FLD float ptr [ECX + 0x3e0]
0042099b  FSUB float ptr [EDX + 0x54]
0042099e  MOV EAX,dword ptr [EBP + 0xffffff50]
004209a4  FSTP float ptr [EAX + 0x3e0]
004209aa  MOV ECX,dword ptr [EBP + 0xffffff50]
004209b0  XOR EDX,EDX
004209b2  CMP dword ptr [ECX + 0x3b8],0x2
004209b9  SETZ DL
004209bc  MOV EAX,dword ptr [EBP + 0xffffff50]
004209c2  MOV ECX,dword ptr [EAX + 0x6c]
004209c5  XOR EAX,EAX
004209c7  CMP ECX,dword ptr [0x00452ed8] {3}
004209cd  SETZ AL
004209d0  MOV ECX,dword ptr [EBP + 0xffffff50]
004209d6  MOV ECX,dword ptr [ECX + 0x70]
004209d9  XOR EBX,EBX
004209db  CMP ECX,dword ptr [0x00452ed8] {3}
004209e1  SETZ BL
004209e4  OR EAX,EBX
004209e6  MOV ECX,dword ptr [EBP + 0xffffff50]
004209ec  MOV ECX,dword ptr [ECX + 0x74]
004209ef  XOR EBX,EBX
004209f1  CMP ECX,dword ptr [0x00452ed8] {3}
004209f7  SETZ BL
004209fa  OR EAX,EBX
004209fc  AND EDX,EAX
004209fe  TEST EDX,EDX
00420a00  JZ 0x00420a6a
00420a02  MOV EDX,dword ptr [EBP + 0xffffff50]
00420a08  MOV EAX,dword ptr [EDX + 0x3ec]
00420a0e  MOV ECX,dword ptr [EBP + 0xffffff50]
00420a14  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
00420a1b  CALL 0x0040132f
00420a20  MOV EDX,dword ptr [EBP + 0xffffff50]
00420a26  MOV EAX,dword ptr [EBP + 0xffffff50]
00420a2c  FLD float ptr [EDX + 0x3a0]
00420a32  FADD float ptr [EAX + 0x54]
00420a35  MOV ECX,dword ptr [EBP + 0xffffff50]
00420a3b  FSTP float ptr [ECX + 0x3a0]
00420a41  MOV EDX,dword ptr [EBP + 0xffffff50]
00420a47  FLD float ptr [EDX + 0x3a0]
00420a4d  FCOMP float ptr [0x0044e23c] {1}
00420a53  FNSTSW AX
00420a55  TEST AH,0x41
00420a58  JNZ 0x00420a6a
00420a5a  MOV EAX,dword ptr [EBP + 0xffffff50]
00420a60  MOV dword ptr [EAX + 0x3a0],0x3a83126f
00420a6a  MOV ECX,dword ptr [EBP + 0xffffff50]
00420a70  XOR EDX,EDX
00420a72  CMP dword ptr [ECX + 0x3b8],0x2
00420a79  SETZ DL
00420a7c  MOV EAX,dword ptr [EBP + 0xffffff50]
00420a82  MOV ECX,dword ptr [EAX + 0x6c]
00420a85  XOR EAX,EAX
00420a87  CMP ECX,dword ptr [0x00452ed4] {2}
00420a8d  SETZ AL
00420a90  MOV ECX,dword ptr [EBP + 0xffffff50]
00420a96  MOV ECX,dword ptr [ECX + 0x70]
00420a99  XOR EBX,EBX
00420a9b  CMP ECX,dword ptr [0x00452ed4] {2}
00420aa1  SETZ BL
00420aa4  OR EAX,EBX
00420aa6  MOV ECX,dword ptr [EBP + 0xffffff50]
00420aac  MOV ECX,dword ptr [ECX + 0x74]
00420aaf  XOR EBX,EBX
00420ab1  CMP ECX,dword ptr [0x00452ed4] {2}
00420ab7  SETZ BL
00420aba  OR EAX,EBX
00420abc  AND EDX,EAX
00420abe  TEST EDX,EDX
00420ac0  JZ 0x00420b51
00420ac6  MOV EDX,dword ptr [EBP + 0xffffff50]
00420acc  MOV EAX,dword ptr [EDX + 0x3ec]
00420ad2  MOV ECX,dword ptr [EBP + 0xffffff50]
00420ad8  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
00420adf  CALL 0x0040134d
00420ae4  MOV EDX,dword ptr [EBP + 0xffffff50]
00420aea  MOV EAX,dword ptr [EDX + 0x3ec]
00420af0  MOV ECX,dword ptr [EBP + 0xffffff50]
00420af6  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00420afd  MOV EAX,dword ptr [EBP + 0xffffff50]
00420b03  FLD float ptr [EDX + 0x16c]
00420b09  FMUL float ptr [EAX + 0x3a0]
00420b0f  MOV ECX,dword ptr [EBP + 0xffffff50]
00420b15  MOV EDX,dword ptr [ECX + 0x3ec]
00420b1b  MOV EAX,dword ptr [EBP + 0xffffff50]
00420b21  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00420b28  FSTP float ptr [ECX + 0x18c]
00420b2e  PUSH 0x2
00420b30  MOV EDX,dword ptr [EBP + 0xffffff50]
00420b36  MOV ECX,dword ptr [EDX + 0xc0]
00420b3c  CALL 0x00401258
00420b41  MOV EAX,dword ptr [EBP + 0xffffff50]
00420b47  MOV dword ptr [EAX + 0x3b8],0x3
00420b51  MOV ECX,dword ptr [EBP + 0xffffff50]
00420b57  CMP dword ptr [ECX + 0x3b8],0x3
00420b5e  JNZ 0x00420c9a
00420b64  MOV EDX,dword ptr [EBP + 0xffffff50]
00420b6a  MOV EAX,dword ptr [EDX + 0x3ec]
00420b70  MOV ECX,dword ptr [EBP + 0xffffff50]
00420b76  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00420b7d  FLD float ptr [EDX + 0x15c]
00420b83  FCOMP float ptr [0x0044e268] {-0.001}
00420b89  FNSTSW AX
00420b8b  TEST AH,0x41
00420b8e  JNZ 0x00420c49
00420b94  MOV EAX,dword ptr [EBP + 0xffffff50]
00420b9a  MOV ECX,dword ptr [EAX + 0x3ec]
00420ba0  MOV EDX,dword ptr [EBP + 0xffffff50]
00420ba6  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00420bad  MOV ECX,dword ptr [EBP + 0xffffff50]
00420bb3  FLD float ptr [0x0044e26c] {20}
00420bb9  FMUL float ptr [ECX + 0x54]
00420bbc  FSUBR float ptr [EAX + 0x18c]
00420bc2  MOV EDX,dword ptr [EBP + 0xffffff50]
00420bc8  MOV EAX,dword ptr [EDX + 0x3ec]
00420bce  MOV ECX,dword ptr [EBP + 0xffffff50]
00420bd4  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00420bdb  FSTP float ptr [EDX + 0x18c]
00420be1  MOV EAX,dword ptr [EBP + 0xffffff50]
00420be7  MOV ECX,dword ptr [EAX + 0x3ec]
00420bed  MOV EDX,dword ptr [EBP + 0xffffff50]
00420bf3  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00420bfa  MOV ECX,dword ptr [EBP + 0xffffff50]
00420c00  MOV EDX,dword ptr [ECX + 0x3ec]
00420c06  MOV ECX,dword ptr [EBP + 0xffffff50]
00420c0c  MOV EDX,dword ptr [ECX + EDX*0x4 + 0xd8]
00420c13  MOV ECX,dword ptr [EBP + 0xffffff50]
00420c19  FLD float ptr [EDX + 0x18c]
00420c1f  FMUL float ptr [ECX + 0x54]
00420c22  FADD float ptr [EAX + 0x15c]
00420c28  MOV EDX,dword ptr [EBP + 0xffffff50]
00420c2e  MOV EAX,dword ptr [EDX + 0x3ec]
00420c34  MOV ECX,dword ptr [EBP + 0xffffff50]
00420c3a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00420c41  FSTP float ptr [EDX + 0x15c]
00420c47  JMP 0x00420c9a
00420c49  MOV EAX,dword ptr [EBP + 0xffffff50]
00420c4f  MOV ECX,dword ptr [EAX + 0x3ec]
00420c55  MOV EDX,dword ptr [EBP + 0xffffff50]
00420c5b  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00420c62  CALL 0x00401384
00420c67  MOV EAX,dword ptr [EBP + 0xffffff50]
00420c6d  MOV dword ptr [EAX + 0x3b8],0x2
00420c77  MOV ECX,dword ptr [EBP + 0xffffff50]
00420c7d  MOV EDX,dword ptr [ECX + 0x3ec]
00420c83  MOV EAX,dword ptr [EBP + 0xffffff50]
00420c89  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00420c90  MOV dword ptr [ECX + 0x15c],0x0
00420c9a  MOV EDX,dword ptr [EBP + 0xffffff50]
00420ca0  FLD float ptr [0x0044e270] {1.75}
00420ca6  FADD float ptr [EDX + 0x3bc]
00420cac  MOV EAX,dword ptr [EBP + 0xffffff50]
00420cb2  FCOMP float ptr [EAX + 0x390]
00420cb8  FNSTSW AX
00420cba  TEST AH,0x1
00420cbd  JZ 0x0042130f
00420cc3  MOV ECX,dword ptr [EBP + 0xffffff50]
00420cc9  MOV EDX,dword ptr [ECX + 0x3f8]
00420ccf  MOV EAX,dword ptr [EBP + 0xffffff50]
00420cd5  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00420cdc  FLD float ptr [ECX + 0x15c]
00420ce2  FCOMP float ptr [0x0044e274] {0.1}
00420ce8  FNSTSW AX
00420cea  TEST AH,0x1
00420ced  JZ 0x00420d20
00420cef  MOV EDX,dword ptr [EBP + 0xffffff50]
00420cf5  MOV EAX,dword ptr [EDX + 0x3f8]
00420cfb  MOV ECX,dword ptr [EBP + 0xffffff50]
00420d01  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xd8]
00420d08  CALL 0x0040134d
00420d0d  PUSH 0x2
00420d0f  MOV EDX,dword ptr [EBP + 0xffffff50]
00420d15  MOV ECX,dword ptr [EDX + 0xc0]
00420d1b  CALL 0x00401258
00420d20  MOV EAX,dword ptr [EBP + 0xffffff50]
00420d26  MOV ECX,dword ptr [EAX + 0x3f8]
00420d2c  MOV EDX,dword ptr [EBP + 0xffffff50]
00420d32  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00420d39  FLD float ptr [EAX + 0x15c]
00420d3f  FCOMP float ptr [0x0044e268] {-0.001}
00420d45  FNSTSW AX
00420d47  TEST AH,0x41
00420d4a  JNZ 0x00420e03
00420d50  MOV ECX,dword ptr [EBP + 0xffffff50]
00420d56  MOV EDX,dword ptr [ECX + 0x3f8]
00420d5c  MOV EAX,dword ptr [EBP + 0xffffff50]
00420d62  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00420d69  MOV EDX,dword ptr [EBP + 0xffffff50]
00420d6f  FLD float ptr [0x0044e26c] {20}
00420d75  FMUL float ptr [EDX + 0x54]
00420d78  FSUBR float ptr [ECX + 0x18c]
00420d7e  MOV EAX,dword ptr [EBP + 0xffffff50]
00420d84  MOV ECX,dword ptr [EAX + 0x3f8]
00420d8a  MOV EDX,dword ptr [EBP + 0xffffff50]
00420d90  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00420d97  FSTP float ptr [EAX + 0x18c]
00420d9d  MOV ECX,dword ptr [EBP + 0xffffff50]
00420da3  MOV EDX,dword ptr [ECX + 0x3f8]
00420da9  MOV EAX,dword ptr [EBP + 0xffffff50]
00420daf  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00420db6  MOV EDX,dword ptr [EBP + 0xffffff50]
00420dbc  MOV EAX,dword ptr [EDX + 0x3f8]
00420dc2  MOV EDX,dword ptr [EBP + 0xffffff50]
00420dc8  MOV EAX,dword ptr [EDX + EAX*0x4 + 0xd8]
00420dcf  MOV EDX,dword ptr [EBP + 0xffffff50]
00420dd5  FLD float ptr [EAX + 0x18c]
00420ddb  FMUL float ptr [EDX + 0x54]
00420dde  FADD float ptr [ECX + 0x15c]
00420de4  MOV EAX,dword ptr [EBP + 0xffffff50]
00420dea  MOV ECX,dword ptr [EAX + 0x3f8]
00420df0  MOV EDX,dword ptr [EBP + 0xffffff50]
00420df6  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00420dfd  FSTP float ptr [EAX + 0x15c]
00420e03  MOV ECX,dword ptr [EBP + 0xffffff50]
00420e09  MOV EDX,dword ptr [ECX + 0x3f8]
00420e0f  MOV EAX,dword ptr [EBP + 0xffffff50]
00420e15  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00420e1c  MOV EDX,dword ptr [EBP + 0xffffff50]
00420e22  FLD float ptr [EDX + 0x250]
00420e28  FSUB float ptr [ECX + 0x15c]
00420e2e  FCOMP float ptr [0x0044e250] {5}
00420e34  FNSTSW AX
00420e36  TEST AH,0x1
00420e39  JZ 0x004210a2
00420e3f  MOV EAX,dword ptr [EBP + 0xffffff50]
00420e45  XOR ECX,ECX
00420e47  MOV CL,byte ptr [EAX + 0x3a6]
00420e4d  TEST ECX,ECX
00420e4f  JZ 0x00420e82
00420e51  CALL 0x00433410
00420e56  MOV dword ptr [EBP + 0xffffff2c],EAX
00420e5c  FILD dword ptr [EBP + 0xffffff2c]
00420e62  FMUL float ptr [0x0044e228] {2}
00420e68  FDIV float ptr [0x0044e25c] {32767}
00420e6e  FADD float ptr [0x0044e238] {0.5}
00420e74  MOV EDX,dword ptr [EBP + 0xffffff50]
00420e7a  FSTP float ptr [EDX + 0x260]
00420e80  JMP 0x00420eb1
00420e82  CALL 0x00433410
00420e87  MOV dword ptr [EBP + 0xffffff28],EAX
00420e8d  FILD dword ptr [EBP + 0xffffff28]
00420e93  FMUL float ptr [0x0044e228] {2}
00420e99  FDIV float ptr [0x0044e25c] {32767}
00420e9f  FSUBR float ptr [0x0044e278] {-0.5}
00420ea5  MOV EAX,dword ptr [EBP + 0xffffff50]
00420eab  FSTP float ptr [EAX + 0x260]
00420eb1  MOV ECX,dword ptr [EBP + 0xffffff50]
00420eb7  MOV dword ptr [ECX + 0x258],0x41000000
00420ec1  MOV EDX,dword ptr [EBP + 0xffffff50]
00420ec7  MOV dword ptr [EDX + 0x268],0xffffffff
00420ed1  MOV EAX,dword ptr [EBP + 0xffffff50]
00420ed7  MOV dword ptr [EAX + 0x3a0],0x0
00420ee1  MOV ECX,dword ptr [EBP + 0xffffff50]
00420ee7  MOV EDX,dword ptr [ECX + 0x3ec]
00420eed  MOV EAX,dword ptr [EBP + 0xffffff50]
00420ef3  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00420efa  CALL 0x00401384
00420eff  MOV ECX,dword ptr [EBP + 0xffffff50]
00420f05  MOV EDX,dword ptr [ECX + 0x3f8]
00420f0b  MOV EAX,dword ptr [EBP + 0xffffff50]
00420f11  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00420f18  CALL 0x00401384
00420f1d  MOV ECX,dword ptr [EBP + 0xffffff50]
00420f23  MOV EDX,dword ptr [ECX + 0x3ec]
00420f29  MOV EAX,dword ptr [EBP + 0xffffff50]
00420f2f  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00420f36  MOV dword ptr [ECX + 0x15c],0x0
00420f40  MOV EDX,dword ptr [EBP + 0xffffff50]
00420f46  MOV EAX,dword ptr [EDX + 0x3f8]
00420f4c  MOV ECX,dword ptr [EBP + 0xffffff50]
00420f52  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00420f59  MOV dword ptr [EDX + 0x15c],0x0
00420f63  MOV EAX,dword ptr [EBP + 0xffffff50]
00420f69  MOV ECX,dword ptr [EAX + 0x3ec]
00420f6f  MOV EDX,dword ptr [EBP + 0xffffff50]
00420f75  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00420f7c  MOV dword ptr [EAX + 0x190],0xf
00420f86  MOV ECX,dword ptr [EBP + 0xffffff50]
00420f8c  CMP dword ptr [ECX + 0x3b0],0x2
00420f93  JNZ 0x00420fba
00420f95  MOV EDX,dword ptr [EBP + 0xffffff50]
00420f9b  MOV EAX,dword ptr [EDX + 0x3f8]
00420fa1  MOV ECX,dword ptr [EBP + 0xffffff50]
00420fa7  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
00420fae  MOV dword ptr [EDX + 0x190],0x7
00420fb8  JMP 0x00420fdd
00420fba  MOV EAX,dword ptr [EBP + 0xffffff50]
00420fc0  MOV ECX,dword ptr [EAX + 0x3f8]
00420fc6  MOV EDX,dword ptr [EBP + 0xffffff50]
00420fcc  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
00420fd3  MOV dword ptr [EAX + 0x190],0xf
00420fdd  MOV ECX,dword ptr [EBP + 0xffffff50]
00420fe3  MOV dword ptr [ECX + 0x21c],0x0
00420fed  MOV EDX,dword ptr [EBP + 0xffffff50]
00420ff3  MOV dword ptr [EDX + 0x220],0x41400000
00420ffd  MOV EAX,dword ptr [EBP + 0xffffff50]
00421003  MOV dword ptr [EAX + 0x224],0xc1a00000
0042100d  MOV ECX,dword ptr [EBP + 0xffffff50]
00421013  MOV dword ptr [ECX + 0x228],0x0
0042101d  MOV EDX,dword ptr [EBP + 0xffffff50]
00421023  MOV dword ptr [EDX + 0x22c],0xbf000000
0042102d  MOV EAX,dword ptr [EBP + 0xffffff50]
00421033  MOV dword ptr [EAX + 0x230],0x3f800000
0042103d  MOV ECX,dword ptr [EBP + 0xffffff50]
00421043  MOV dword ptr [ECX + 0x3b8],0x0
0042104d  MOV EDX,dword ptr [EBP + 0xffffff50]
00421053  MOV dword ptr [EDX + 0x3ac],0x1
0042105d  MOV EAX,dword ptr [EBP + 0xffffff50]
00421063  MOV ECX,dword ptr [EBP + 0xffffff50]
00421069  MOV EDX,dword ptr [ECX + 0x3f8]
0042106f  MOV dword ptr [EAX + 0x404],EDX
00421075  MOV EAX,dword ptr [EBP + 0xffffff50]
0042107b  MOV dword ptr [EAX + 0x40c],0x0
00421085  MOV ECX,dword ptr [EBP + 0xffffff50]
0042108b  MOV byte ptr [ECX + 0x414],0x0
00421092  MOV EDX,dword ptr [EBP + 0xffffff50]
00421098  MOV dword ptr [EDX + 0x26c],0x6
004210a2  MOV EAX,dword ptr [EBP + 0xffffff50]
004210a8  MOV ECX,dword ptr [EAX + 0x3ec]
004210ae  MOV EDX,dword ptr [EBP + 0xffffff50]
004210b4  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004210bb  MOV ECX,dword ptr [EBP + 0xffffff50]
004210c1  FLD float ptr [ECX + 0x250]
004210c7  FSUB float ptr [EAX + 0x15c]
004210cd  FCOMP float ptr [0x0044e250] {5}
004210d3  FNSTSW AX
004210d5  TEST AH,0x1
004210d8  JZ 0x0042130d
004210de  MOV EDX,dword ptr [EBP + 0xffffff50]
004210e4  XOR EAX,EAX
004210e6  MOV AL,byte ptr [EDX + 0x3a6]
004210ec  TEST EAX,EAX
004210ee  JZ 0x00421121
004210f0  CALL 0x00433410
004210f5  MOV dword ptr [EBP + 0xffffff24],EAX
004210fb  FILD dword ptr [EBP + 0xffffff24]
00421101  FMUL float ptr [0x0044e228] {2}
00421107  FDIV float ptr [0x0044e25c] {32767}
0042110d  FSUBR float ptr [0x0044e278] {-0.5}
00421113  MOV ECX,dword ptr [EBP + 0xffffff50]
00421119  FSTP float ptr [ECX + 0x260]
0042111f  JMP 0x00421150
00421121  CALL 0x00433410
00421126  MOV dword ptr [EBP + 0xffffff20],EAX
0042112c  FILD dword ptr [EBP + 0xffffff20]
00421132  FMUL float ptr [0x0044e228] {2}
00421138  FDIV float ptr [0x0044e25c] {32767}
0042113e  FADD float ptr [0x0044e238] {0.5}
00421144  MOV EDX,dword ptr [EBP + 0xffffff50]
0042114a  FSTP float ptr [EDX + 0x260]
00421150  MOV EAX,dword ptr [EBP + 0xffffff50]
00421156  MOV dword ptr [EAX + 0x258],0x41000000
00421160  MOV ECX,dword ptr [EBP + 0xffffff50]
00421166  MOV dword ptr [ECX + 0x268],0xffffffff
00421170  MOV EDX,dword ptr [EBP + 0xffffff50]
00421176  MOV dword ptr [EDX + 0x3a0],0x0
00421180  MOV EAX,dword ptr [EBP + 0xffffff50]
00421186  MOV ECX,dword ptr [EAX + 0x3ec]
0042118c  MOV EDX,dword ptr [EBP + 0xffffff50]
00421192  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
00421199  CALL 0x00401384
0042119e  MOV EAX,dword ptr [EBP + 0xffffff50]
004211a4  MOV ECX,dword ptr [EAX + 0x3f8]
004211aa  MOV EDX,dword ptr [EBP + 0xffffff50]
004211b0  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xd8]
004211b7  CALL 0x00401384
004211bc  MOV EAX,dword ptr [EBP + 0xffffff50]
004211c2  MOV ECX,dword ptr [EAX + 0x3ec]
004211c8  MOV EDX,dword ptr [EBP + 0xffffff50]
004211ce  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
004211d5  MOV dword ptr [EAX + 0x15c],0x0
004211df  MOV ECX,dword ptr [EBP + 0xffffff50]
004211e5  MOV EDX,dword ptr [ECX + 0x3f8]
004211eb  MOV EAX,dword ptr [EBP + 0xffffff50]
004211f1  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
004211f8  MOV dword ptr [ECX + 0x15c],0x0
00421202  MOV EDX,dword ptr [EBP + 0xffffff50]
00421208  MOV EAX,dword ptr [EDX + 0x3ec]
0042120e  MOV ECX,dword ptr [EBP + 0xffffff50]
00421214  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xd8]
0042121b  MOV dword ptr [EDX + 0x190],0xf
00421225  MOV EAX,dword ptr [EBP + 0xffffff50]
0042122b  MOV ECX,dword ptr [EAX + 0x3f8]
00421231  MOV EDX,dword ptr [EBP + 0xffffff50]
00421237  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xd8]
0042123e  MOV dword ptr [EAX + 0x190],0xf
00421248  MOV ECX,dword ptr [EBP + 0xffffff50]
0042124e  MOV dword ptr [ECX + 0x21c],0x0
00421258  MOV EDX,dword ptr [EBP + 0xffffff50]
0042125e  MOV dword ptr [EDX + 0x220],0x41400000
00421268  MOV EAX,dword ptr [EBP + 0xffffff50]
0042126e  MOV dword ptr [EAX + 0x224],0xc1a00000
00421278  MOV ECX,dword ptr [EBP + 0xffffff50]
0042127e  MOV dword ptr [ECX + 0x228],0x0
00421288  MOV EDX,dword ptr [EBP + 0xffffff50]
0042128e  MOV dword ptr [EDX + 0x22c],0xbf000000
00421298  MOV EAX,dword ptr [EBP + 0xffffff50]
0042129e  MOV dword ptr [EAX + 0x230],0x3f800000
004212a8  MOV ECX,dword ptr [EBP + 0xffffff50]
004212ae  MOV dword ptr [ECX + 0x3b8],0x0
004212b8  MOV EDX,dword ptr [EBP + 0xffffff50]
004212be  MOV dword ptr [EDX + 0x3ac],0x1
004212c8  MOV EAX,dword ptr [EBP + 0xffffff50]
004212ce  MOV ECX,dword ptr [EBP + 0xffffff50]
004212d4  MOV EDX,dword ptr [ECX + 0x3ec]
004212da  MOV dword ptr [EAX + 0x404],EDX
004212e0  MOV EAX,dword ptr [EBP + 0xffffff50]
004212e6  MOV dword ptr [EAX + 0x40c],0x0
004212f0  MOV ECX,dword ptr [EBP + 0xffffff50]
004212f6  MOV byte ptr [ECX + 0x414],0x0
004212fd  MOV EDX,dword ptr [EBP + 0xffffff50]
00421303  MOV dword ptr [EDX + 0x26c],0x6
0042130d  JMP 0x00421346
0042130f  MOV EAX,dword ptr [EBP + 0xffffff50]
00421315  FLD float ptr [EAX + 0x390]
0042131b  FCOMP float ptr [0x0044e27c] {1.2}
00421321  FNSTSW AX
00421323  TEST AH,0x41
00421326  JNZ 0x00421346
00421328  MOV ECX,dword ptr [EBP + 0xffffff50]
0042132e  MOV EDX,dword ptr [ECX + 0x3f8]
00421334  MOV EAX,dword ptr [EBP + 0xffffff50]
0042133a  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xd8]
00421341  CALL 0x0040132f
00421346  POP ESI
00421347  POP EBX
00421348  MOV ESP,EBP
0042134a  POP EBP
0042134b  RET
