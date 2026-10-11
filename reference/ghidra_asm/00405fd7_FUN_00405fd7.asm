00405fd7  PUSH EBP
00405fd8  MOV EBP,ESP
00405fda  SUB ESP,0xfc
00405fe0  MOV dword ptr [EBP + 0xffffff04],ECX
00405fe6  LEA EAX,[EBP + -0x8]
00405fe9  PUSH EAX
00405fea  MOV ECX,dword ptr [EBP + 0xffffff04]
00405ff0  MOV EDX,dword ptr [ECX + 0x6c]
00405ff3  MOV EAX,dword ptr [EBP + 0xffffff04]
00405ff9  MOV ECX,dword ptr [EAX + 0x6c]
00405ffc  MOV EAX,dword ptr [ECX]
00405ffe  PUSH EDX
00405fff  CALL dword ptr [EAX + 0x90]
00406005  MOV dword ptr [EBP + 0xffffff70],0x7c
0040600f  LEA ECX,[EBP + 0xffffff70]
00406015  PUSH ECX
00406016  MOV EDX,dword ptr [EBP + 0xffffff04]
0040601c  MOV EAX,dword ptr [EDX + 0x6c]
0040601f  MOV ECX,dword ptr [EBP + 0xffffff04]
00406025  MOV EDX,dword ptr [ECX + 0x6c]
00406028  MOV ECX,dword ptr [EDX]
0040602a  PUSH EAX
0040602b  CALL dword ptr [ECX + 0x58]
0040602e  MOV dword ptr [EBP + 0xffffff74],0x101007
00406038  MOV dword ptr [EBP + -0x28],0x1800
0040603f  MOV dword ptr [EBP + -0x24],0x0
00406046  MOV EDX,dword ptr [EBP + 0xffffff04]
0040604c  MOV EAX,dword ptr [EDX + 0x54]
0040604f  MOV dword ptr [EBP + 0xffffff7c],EAX
00406055  MOV ECX,dword ptr [EBP + 0xffffff04]
0040605b  MOV EDX,dword ptr [ECX + 0x58]
0040605e  MOV dword ptr [EBP + 0xffffff78],EDX
00406064  PUSH 0x0
00406066  LEA EAX,[EBP + 0xffffff40]
0040606c  PUSH EAX
0040606d  LEA ECX,[EBP + 0xffffff70]
00406073  PUSH ECX
00406074  MOV EDX,dword ptr [EBP + -0x8]
00406077  MOV EAX,dword ptr [EDX]
00406079  MOV ECX,dword ptr [EBP + -0x8]
0040607c  PUSH ECX
0040607d  CALL dword ptr [EAX + 0x18]
00406080  MOV dword ptr [EBP + 0xffffff5c],EAX
00406086  CMP dword ptr [EBP + 0xffffff5c],0x0
0040608d  JGE 0x004060a2
0040608f  MOV EDX,dword ptr [EBP + -0x8]
00406092  MOV EAX,dword ptr [EDX]
00406094  MOV ECX,dword ptr [EBP + -0x8]
00406097  PUSH ECX
00406098  CALL dword ptr [EAX + 0x8]
0040609b  XOR EAX,EAX
0040609d  JMP 0x00406530
004060a2  PUSH 0x0
004060a4  PUSH 0x0
004060a6  LEA EDX,[EBP + 0xffffff70]
004060ac  PUSH EDX
004060ad  PUSH 0x0
004060af  MOV EAX,dword ptr [EBP + 0xffffff40]
004060b5  MOV ECX,dword ptr [EAX]
004060b7  MOV EDX,dword ptr [EBP + 0xffffff40]
004060bd  PUSH EDX
004060be  CALL dword ptr [ECX + 0x64]
004060c1  CMP EAX,0x8876021c
004060c6  JNZ 0x004060ca
004060c8  JMP 0x004060a2
004060ca  MOV EAX,dword ptr [EBP + -0x80]
004060cd  MOV dword ptr [EBP + 0xffffff48],EAX
004060d3  MOV ECX,dword ptr [EBP + -0x6c]
004060d6  MOV dword ptr [EBP + 0xffffff60],ECX
004060dc  MOV EDX,dword ptr [EBP + -0x38]
004060df  MOV dword ptr [EBP + 0xffffff38],EDX
004060e5  MOV EAX,dword ptr [EBP + -0x34]
004060e8  MOV dword ptr [EBP + -0x4],EAX
004060eb  MOV ECX,dword ptr [EBP + -0x30]
004060ee  MOV dword ptr [EBP + 0xffffff54],ECX
004060f4  MOV EDX,dword ptr [EBP + -0x2c]
004060f7  MOV dword ptr [EBP + -0xc],EDX
004060fa  MOV dword ptr [EBP + 0xffffff3c],0x8
00406104  MOV dword ptr [EBP + 0xffffff6c],0x0
0040610e  MOV dword ptr [EBP + 0xffffff44],0x8
00406118  MOV dword ptr [EBP + -0x14],0x0
0040611f  MOV dword ptr [EBP + 0xffffff4c],0x8
00406129  MOV dword ptr [EBP + -0x10],0x0
00406130  MOV dword ptr [EBP + 0xffffff68],0x8
0040613a  MOV dword ptr [EBP + 0xffffff50],0x0
00406144  MOV EAX,dword ptr [EBP + 0xffffff38]
0040614a  MOV dword ptr [EBP + 0xffffff64],EAX
00406150  JMP 0x00406160
00406152  MOV ECX,dword ptr [EBP + 0xffffff64]
00406158  SHR ECX,0x1
0040615a  MOV dword ptr [EBP + 0xffffff64],ECX
00406160  CMP dword ptr [EBP + 0xffffff64],0x0
00406167  JZ 0x00406187
00406169  MOV EDX,dword ptr [EBP + 0xffffff64]
0040616f  AND EDX,0x1
00406172  TEST EDX,EDX
00406174  JNZ 0x00406187
00406176  MOV EAX,dword ptr [EBP + 0xffffff6c]
0040617c  ADD EAX,0x1
0040617f  MOV dword ptr [EBP + 0xffffff6c],EAX
00406185  JMP 0x00406152
00406187  JMP 0x00406197
00406189  MOV ECX,dword ptr [EBP + 0xffffff64]
0040618f  SHR ECX,0x1
00406191  MOV dword ptr [EBP + 0xffffff64],ECX
00406197  CMP dword ptr [EBP + 0xffffff64],0x0
0040619e  JZ 0x004061b1
004061a0  MOV EDX,dword ptr [EBP + 0xffffff3c]
004061a6  SUB EDX,0x1
004061a9  MOV dword ptr [EBP + 0xffffff3c],EDX
004061af  JMP 0x00406189
004061b1  MOV EAX,dword ptr [EBP + -0x4]
004061b4  MOV dword ptr [EBP + 0xffffff64],EAX
004061ba  JMP 0x004061ca
004061bc  MOV ECX,dword ptr [EBP + 0xffffff64]
004061c2  SHR ECX,0x1
004061c4  MOV dword ptr [EBP + 0xffffff64],ECX
004061ca  CMP dword ptr [EBP + 0xffffff64],0x0
004061d1  JZ 0x004061eb
004061d3  MOV EDX,dword ptr [EBP + 0xffffff64]
004061d9  AND EDX,0x1
004061dc  TEST EDX,EDX
004061de  JNZ 0x004061eb
004061e0  MOV EAX,dword ptr [EBP + -0x14]
004061e3  ADD EAX,0x1
004061e6  MOV dword ptr [EBP + -0x14],EAX
004061e9  JMP 0x004061bc
004061eb  JMP 0x004061fb
004061ed  MOV ECX,dword ptr [EBP + 0xffffff64]
004061f3  SHR ECX,0x1
004061f5  MOV dword ptr [EBP + 0xffffff64],ECX
004061fb  CMP dword ptr [EBP + 0xffffff64],0x0
00406202  JZ 0x00406215
00406204  MOV EDX,dword ptr [EBP + 0xffffff44]
0040620a  SUB EDX,0x1
0040620d  MOV dword ptr [EBP + 0xffffff44],EDX
00406213  JMP 0x004061ed
00406215  MOV EAX,dword ptr [EBP + 0xffffff54]
0040621b  MOV dword ptr [EBP + 0xffffff64],EAX
00406221  JMP 0x00406231
00406223  MOV ECX,dword ptr [EBP + 0xffffff64]
00406229  SHR ECX,0x1
0040622b  MOV dword ptr [EBP + 0xffffff64],ECX
00406231  CMP dword ptr [EBP + 0xffffff64],0x0
00406238  JZ 0x00406252
0040623a  MOV EDX,dword ptr [EBP + 0xffffff64]
00406240  AND EDX,0x1
00406243  TEST EDX,EDX
00406245  JNZ 0x00406252
00406247  MOV EAX,dword ptr [EBP + -0x10]
0040624a  ADD EAX,0x1
0040624d  MOV dword ptr [EBP + -0x10],EAX
00406250  JMP 0x00406223
00406252  JMP 0x00406262
00406254  MOV ECX,dword ptr [EBP + 0xffffff64]
0040625a  SHR ECX,0x1
0040625c  MOV dword ptr [EBP + 0xffffff64],ECX
00406262  CMP dword ptr [EBP + 0xffffff64],0x0
00406269  JZ 0x0040627c
0040626b  MOV EDX,dword ptr [EBP + 0xffffff4c]
00406271  SUB EDX,0x1
00406274  MOV dword ptr [EBP + 0xffffff4c],EDX
0040627a  JMP 0x00406254
0040627c  MOV EAX,dword ptr [EBP + -0xc]
0040627f  MOV dword ptr [EBP + 0xffffff64],EAX
00406285  JMP 0x00406295
00406287  MOV ECX,dword ptr [EBP + 0xffffff64]
0040628d  SHR ECX,0x1
0040628f  MOV dword ptr [EBP + 0xffffff64],ECX
00406295  CMP dword ptr [EBP + 0xffffff64],0x0
0040629c  JZ 0x004062bc
0040629e  MOV EDX,dword ptr [EBP + 0xffffff64]
004062a4  AND EDX,0x1
004062a7  TEST EDX,EDX
004062a9  JNZ 0x004062bc
004062ab  MOV EAX,dword ptr [EBP + 0xffffff50]
004062b1  ADD EAX,0x1
004062b4  MOV dword ptr [EBP + 0xffffff50],EAX
004062ba  JMP 0x00406287
004062bc  JMP 0x004062cc
004062be  MOV ECX,dword ptr [EBP + 0xffffff64]
004062c4  SHR ECX,0x1
004062c6  MOV dword ptr [EBP + 0xffffff64],ECX
004062cc  CMP dword ptr [EBP + 0xffffff64],0x0
004062d3  JZ 0x004062e6
004062d5  MOV EDX,dword ptr [EBP + 0xffffff68]
004062db  SUB EDX,0x1
004062de  MOV dword ptr [EBP + 0xffffff68],EDX
004062e4  JMP 0x004062be
004062e6  MOV dword ptr [EBP + 0xffffff58],0x0
004062f0  JMP 0x00406301
004062f2  MOV EAX,dword ptr [EBP + 0xffffff58]
004062f8  ADD EAX,0x1
004062fb  MOV dword ptr [EBP + 0xffffff58],EAX
00406301  MOV ECX,dword ptr [EBP + 0xffffff58]
00406307  CMP ECX,dword ptr [EBP + 0xffffff78]
0040630d  JNC 0x004064cf
00406313  MOV EDX,dword ptr [EBP + 0xffffff60]
00406319  MOV dword ptr [EBP + 0xffffff30],EDX
0040631f  MOV EAX,dword ptr [EBP + 0xffffff60]
00406325  MOV dword ptr [EBP + 0xffffff34],EAX
0040632b  MOV dword ptr [EBP + 0xffffff2c],0x0
00406335  JMP 0x00406346
00406337  MOV ECX,dword ptr [EBP + 0xffffff2c]
0040633d  ADD ECX,0x1
00406340  MOV dword ptr [EBP + 0xffffff2c],ECX
00406346  MOV EDX,dword ptr [EBP + 0xffffff2c]
0040634c  CMP EDX,dword ptr [EBP + 0xffffff7c]
00406352  JNC 0x004064bb
00406358  MOV EAX,dword ptr [EBP + 0xffffff58]
0040635e  IMUL EAX,dword ptr [EBP + 0xffffff7c]
00406365  ADD EAX,dword ptr [EBP + 0xffffff2c]
0040636b  MOV ECX,dword ptr [EBP + 0xffffff04]
00406371  MOV EDX,dword ptr [ECX + 0x74]
00406374  MOV EAX,dword ptr [EDX + EAX*0x4]
00406377  MOV dword ptr [EBP + 0xffffff0c],EAX
0040637d  MOV ECX,dword ptr [EBP + 0xffffff0c]
00406383  SHR ECX,0x18
00406386  AND ECX,0xff
0040638c  MOV byte ptr [EBP + 0xffffff20],CL
00406392  MOV EDX,dword ptr [EBP + 0xffffff0c]
00406398  SHR EDX,0x10
0040639b  AND EDX,0xff
004063a1  MOV byte ptr [EBP + 0xffffff18],DL
004063a7  MOV EAX,dword ptr [EBP + 0xffffff0c]
004063ad  SHR EAX,0x8
004063b0  AND EAX,0xff
004063b5  MOV byte ptr [EBP + 0xffffff24],AL
004063bb  MOV ECX,dword ptr [EBP + 0xffffff0c]
004063c1  AND ECX,0xff
004063c7  MOV byte ptr [EBP + 0xffffff28],CL
004063cd  MOV EDX,dword ptr [EBP + 0xffffff20]
004063d3  AND EDX,0xff
004063d9  MOV ECX,dword ptr [EBP + 0xffffff3c]
004063df  SAR EDX,CL
004063e1  MOV ECX,dword ptr [EBP + 0xffffff6c]
004063e7  SHL EDX,CL
004063e9  AND EDX,dword ptr [EBP + 0xffffff38]
004063ef  MOV dword ptr [EBP + 0xffffff10],EDX
004063f5  MOV EAX,dword ptr [EBP + 0xffffff18]
004063fb  AND EAX,0xff
00406400  MOV ECX,dword ptr [EBP + 0xffffff44]
00406406  SAR EAX,CL
00406408  MOV ECX,dword ptr [EBP + -0x14]
0040640b  SHL EAX,CL
0040640d  AND EAX,dword ptr [EBP + -0x4]
00406410  MOV dword ptr [EBP + 0xffffff08],EAX
00406416  MOV EDX,dword ptr [EBP + 0xffffff24]
0040641c  AND EDX,0xff
00406422  MOV ECX,dword ptr [EBP + 0xffffff4c]
00406428  SAR EDX,CL
0040642a  MOV ECX,dword ptr [EBP + -0x10]
0040642d  SHL EDX,CL
0040642f  AND EDX,dword ptr [EBP + 0xffffff54]
00406435  MOV dword ptr [EBP + 0xffffff14],EDX
0040643b  MOV EAX,dword ptr [EBP + 0xffffff28]
00406441  AND EAX,0xff
00406446  MOV ECX,dword ptr [EBP + 0xffffff68]
0040644c  SAR EAX,CL
0040644e  MOV ECX,dword ptr [EBP + 0xffffff50]
00406454  SHL EAX,CL
00406456  AND EAX,dword ptr [EBP + -0xc]
00406459  MOV dword ptr [EBP + 0xffffff1c],EAX
0040645f  CMP dword ptr [EBP + -0x3c],0x20
00406463  JNZ 0x0040648e
00406465  MOV ECX,dword ptr [EBP + 0xffffff10]
0040646b  ADD ECX,dword ptr [EBP + 0xffffff08]
00406471  ADD ECX,dword ptr [EBP + 0xffffff14]
00406477  ADD ECX,dword ptr [EBP + 0xffffff1c]
0040647d  MOV EDX,dword ptr [EBP + 0xffffff2c]
00406483  MOV EAX,dword ptr [EBP + 0xffffff30]
00406489  MOV dword ptr [EAX + EDX*0x4],ECX
0040648c  JMP 0x004064b6
0040648e  MOV ECX,dword ptr [EBP + 0xffffff10]
00406494  ADD ECX,dword ptr [EBP + 0xffffff08]
0040649a  ADD ECX,dword ptr [EBP + 0xffffff14]
004064a0  ADD ECX,dword ptr [EBP + 0xffffff1c]
004064a6  MOV EDX,dword ptr [EBP + 0xffffff2c]
004064ac  MOV EAX,dword ptr [EBP + 0xffffff34]
004064b2  MOV word ptr [EAX + EDX*0x2],CX
004064b6  JMP 0x00406337
004064bb  MOV ECX,dword ptr [EBP + 0xffffff60]
004064c1  ADD ECX,dword ptr [EBP + -0x80]
004064c4  MOV dword ptr [EBP + 0xffffff60],ECX
004064ca  JMP 0x004062f2
004064cf  PUSH 0x0
004064d1  MOV EDX,dword ptr [EBP + 0xffffff40]
004064d7  MOV EAX,dword ptr [EDX]
004064d9  MOV ECX,dword ptr [EBP + 0xffffff40]
004064df  PUSH ECX
004064e0  CALL dword ptr [EAX + 0x80]
004064e6  PUSH 0x0
004064e8  PUSH 0x1000000
004064ed  PUSH 0x0
004064ef  MOV EDX,dword ptr [EBP + 0xffffff40]
004064f5  PUSH EDX
004064f6  PUSH 0x0
004064f8  MOV EAX,dword ptr [EBP + 0xffffff04]
004064fe  MOV ECX,dword ptr [EAX + 0x6c]
00406501  MOV EDX,dword ptr [EBP + 0xffffff04]
00406507  MOV EAX,dword ptr [EDX + 0x6c]
0040650a  MOV EDX,dword ptr [EAX]
0040650c  PUSH ECX
0040650d  CALL dword ptr [EDX + 0x14]
00406510  MOV EAX,dword ptr [EBP + 0xffffff40]
00406516  MOV ECX,dword ptr [EAX]
00406518  MOV EDX,dword ptr [EBP + 0xffffff40]
0040651e  PUSH EDX
0040651f  CALL dword ptr [ECX + 0x8]
00406522  MOV EAX,dword ptr [EBP + -0x8]
00406525  MOV ECX,dword ptr [EAX]
00406527  MOV EDX,dword ptr [EBP + -0x8]
0040652a  PUSH EDX
0040652b  CALL dword ptr [ECX + 0x8]
0040652e  XOR EAX,EAX
00406530  MOV ESP,EBP
00406532  POP EBP
00406533  RET
