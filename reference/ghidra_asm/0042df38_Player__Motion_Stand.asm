0042df38  PUSH EBP
0042df39  MOV EBP,ESP
0042df3b  SUB ESP,0x8
0042df3e  MOV dword ptr [EBP + -0x8],ECX
0042df41  MOV dword ptr [EBP + -0x4],0x0
0042df48  JMP 0x0042df53
0042df4a  MOV EAX,dword ptr [EBP + -0x4]
0042df4d  ADD EAX,0x1
0042df50  MOV dword ptr [EBP + -0x4],EAX
0042df53  CMP dword ptr [EBP + -0x4],0x1
0042df57  JGE 0x0042df83
0042df59  MOV ECX,dword ptr [EBP + -0x8]
0042df5c  MOV EDX,dword ptr [ECX + 0x4]
0042df5f  MOV EAX,dword ptr [EDX + 0x2c]
0042df62  IMUL EAX,EAX,0x18
0042df65  PUSH EAX
0042df66  PUSH 0x0
0042df68  MOV ECX,dword ptr [EBP + -0x4]
0042df6b  IMUL ECX,ECX,0xc
0042df6e  MOV EDX,dword ptr [EBP + -0x8]
0042df71  MOV EAX,dword ptr [EDX + 0x4c]
0042df74  MOV ECX,dword ptr [EAX + ECX*0x1 + 0x8]
0042df78  PUSH ECX
0042df79  CALL 0x00433440  ; _memset
0042df7e  ADD ESP,0xc
0042df81  JMP 0x0042df4a
0042df83  MOV EDX,dword ptr [EBP + -0x8]
0042df86  MOV EAX,dword ptr [EDX + 0x4c]
0042df89  MOV dword ptr [EAX],0x3e82de65
0042df8f  MOV ECX,dword ptr [EBP + -0x8]
0042df92  MOV EDX,dword ptr [ECX + 0x4c]
0042df95  MOV dword ptr [EDX + 0x4],0x40a00000
0042df9c  MOV EAX,dword ptr [EBP + -0x8]
0042df9f  MOV ECX,dword ptr [EAX + 0x4c]
0042dfa2  MOV EDX,dword ptr [ECX + 0x8]
0042dfa5  MOV dword ptr [EDX + 0x1bc],0xbf973b00
0042dfaf  MOV EAX,dword ptr [EBP + -0x8]
0042dfb2  MOV ECX,dword ptr [EAX + 0x4c]
0042dfb5  MOV dword ptr [ECX + 0xc],0x0
0042dfbc  MOV ESP,EBP
0042dfbe  POP EBP
0042dfbf  RET
