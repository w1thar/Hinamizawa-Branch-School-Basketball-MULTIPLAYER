0042dcb7  PUSH EBP
0042dcb8  MOV EBP,ESP
0042dcba  PUSH ECX
0042dcbb  MOV dword ptr [EBP + -0x4],ECX
0042dcbe  MOV EAX,dword ptr [EBP + -0x4]
0042dcc1  ADD EAX,0x158
0042dcc6  MOV ECX,dword ptr [EBP + 0x8]
0042dcc9  MOV dword ptr [EAX],ECX
0042dccb  MOV EDX,dword ptr [EBP + 0xc]
0042dcce  MOV dword ptr [EAX + 0x4],EDX
0042dcd1  MOV ECX,dword ptr [EBP + 0x10]
0042dcd4  MOV dword ptr [EAX + 0x8],ECX
0042dcd7  MOV EDX,dword ptr [EBP + -0x4]
0042dcda  MOV EAX,dword ptr [EBP + 0x14]
0042dcdd  MOV dword ptr [EDX + 0x164],EAX
0042dce3  MOV ECX,dword ptr [EBP + -0x4]
0042dce6  ADD ECX,0x158
0042dcec  MOV EDX,dword ptr [EBP + -0x4]
0042dcef  MOV EAX,dword ptr [EDX + 0x4]
0042dcf2  MOV EDX,dword ptr [EAX + 0x20]
0042dcf5  ADD EDX,0x90
0042dcfb  MOV EAX,dword ptr [ECX]
0042dcfd  MOV dword ptr [EDX],EAX
0042dcff  MOV EAX,dword ptr [ECX + 0x4]
0042dd02  MOV dword ptr [EDX + 0x4],EAX
0042dd05  MOV ECX,dword ptr [ECX + 0x8]
0042dd08  MOV dword ptr [EDX + 0x8],ECX
0042dd0b  MOV EDX,dword ptr [EBP + -0x4]
0042dd0e  MOV EAX,dword ptr [EDX + 0x4]
0042dd11  MOV ECX,dword ptr [EAX + 0x20]
0042dd14  MOV EDX,dword ptr [EBP + -0x4]
0042dd17  MOV EAX,dword ptr [EDX + 0x164]
0042dd1d  MOV dword ptr [ECX + 0xa0],EAX
0042dd23  MOV ESP,EBP
0042dd25  POP EBP
0042dd26  RET 0x10
