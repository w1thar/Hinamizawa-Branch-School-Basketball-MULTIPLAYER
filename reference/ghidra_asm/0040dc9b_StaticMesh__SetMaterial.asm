0040dc9b  PUSH EBP
0040dc9c  MOV EBP,ESP
0040dc9e  SUB ESP,0x8
0040dca1  MOV dword ptr [EBP + -0x8],ECX
0040dca4  MOV EAX,dword ptr [EBP + -0x8]
0040dca7  MOV ECX,dword ptr [EAX + 0x18]
0040dcaa  ADD ECX,0x44
0040dcad  PUSH ECX
0040dcae  CALL 0x004010e6  ; D3DTextr_GetSurface
0040dcb3  ADD ESP,0x4
0040dcb6  PUSH EAX
0040dcb7  PUSH 0x0
0040dcb9  MOV EDX,dword ptr [EBP + 0x8]
0040dcbc  MOV EAX,dword ptr [EDX]
0040dcbe  MOV ECX,dword ptr [EBP + 0x8]
0040dcc1  PUSH ECX
0040dcc2  CALL dword ptr [EAX + 0x8c]
0040dcc8  PUSH 0x2e
0040dcca  MOV EDX,dword ptr [EBP + -0x8]
0040dccd  MOV EAX,dword ptr [EDX + 0x18]
0040dcd0  ADD EAX,0x44
0040dcd3  PUSH EAX
0040dcd4  CALL 0x00435050  ; _strchr
0040dcd9  ADD ESP,0x8
0040dcdc  MOV dword ptr [EBP + -0x4],EAX
0040dcdf  PUSH 0x74
0040dce1  MOV ECX,dword ptr [EBP + -0x4]
0040dce4  PUSH ECX
0040dce5  CALL 0x00435050  ; _strchr
0040dcea  ADD ESP,0x8
0040dced  TEST EAX,EAX
0040dcef  JZ 0x0040dd36
0040dcf1  PUSH 0x2
0040dcf3  PUSH 0x5
0040dcf5  PUSH 0x0
0040dcf7  MOV EDX,dword ptr [EBP + 0x8]
0040dcfa  MOV EAX,dword ptr [EDX]
0040dcfc  MOV ECX,dword ptr [EBP + 0x8]
0040dcff  PUSH ECX
0040dd00  CALL dword ptr [EAX + 0x94]
0040dd06  PUSH 0x1
0040dd08  PUSH 0x1b
0040dd0a  MOV EDX,dword ptr [EBP + 0x8]
0040dd0d  MOV EAX,dword ptr [EDX]
0040dd0f  MOV ECX,dword ptr [EBP + 0x8]
0040dd12  PUSH ECX
0040dd13  CALL dword ptr [EAX + 0x50]
0040dd16  PUSH 0x5
0040dd18  PUSH 0x13
0040dd1a  MOV EDX,dword ptr [EBP + 0x8]
0040dd1d  MOV EAX,dword ptr [EDX]
0040dd1f  MOV ECX,dword ptr [EBP + 0x8]
0040dd22  PUSH ECX
0040dd23  CALL dword ptr [EAX + 0x50]
0040dd26  PUSH 0x6
0040dd28  PUSH 0x14
0040dd2a  MOV EDX,dword ptr [EBP + 0x8]
0040dd2d  MOV EAX,dword ptr [EDX]
0040dd2f  MOV ECX,dword ptr [EBP + 0x8]
0040dd32  PUSH ECX
0040dd33  CALL dword ptr [EAX + 0x50]
0040dd36  MOV EDX,dword ptr [EBP + -0x8]
0040dd39  MOV EAX,dword ptr [EDX + 0x18]
0040dd3c  FLD float ptr [EAX + 0xc]
0040dd3f  FCOMP float ptr [0x0044e0c8] {1}
0040dd45  FNSTSW AX
0040dd47  TEST AH,0x1
0040dd4a  JZ 0x0040dd7c
0040dd4c  PUSH 0x1
0040dd4e  PUSH 0x1b
0040dd50  MOV ECX,dword ptr [EBP + 0x8]
0040dd53  MOV EDX,dword ptr [ECX]
0040dd55  MOV EAX,dword ptr [EBP + 0x8]
0040dd58  PUSH EAX
0040dd59  CALL dword ptr [EDX + 0x50]
0040dd5c  PUSH 0x5
0040dd5e  PUSH 0x13
0040dd60  MOV ECX,dword ptr [EBP + 0x8]
0040dd63  MOV EDX,dword ptr [ECX]
0040dd65  MOV EAX,dword ptr [EBP + 0x8]
0040dd68  PUSH EAX
0040dd69  CALL dword ptr [EDX + 0x50]
0040dd6c  PUSH 0x2
0040dd6e  PUSH 0x14
0040dd70  MOV ECX,dword ptr [EBP + 0x8]
0040dd73  MOV EDX,dword ptr [ECX]
0040dd75  MOV EAX,dword ptr [EBP + 0x8]
0040dd78  PUSH EAX
0040dd79  CALL dword ptr [EDX + 0x50]
0040dd7c  MOV ECX,dword ptr [EBP + -0x8]
0040dd7f  MOV EDX,dword ptr [ECX + 0x18]
0040dd82  PUSH EDX
0040dd83  MOV EAX,dword ptr [EBP + 0x8]
0040dd86  MOV ECX,dword ptr [EAX]
0040dd88  MOV EDX,dword ptr [EBP + 0x8]
0040dd8b  PUSH EDX
0040dd8c  CALL dword ptr [ECX + 0x40]
0040dd8f  MOV EAX,0x1
0040dd94  MOV ESP,EBP
0040dd96  POP EBP
0040dd97  RET 0x4
