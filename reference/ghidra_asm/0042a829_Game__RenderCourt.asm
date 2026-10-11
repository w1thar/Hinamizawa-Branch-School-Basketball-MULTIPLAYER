0042a829  PUSH EBP
0042a82a  MOV EBP,ESP
0042a82c  PUSH ECX
0042a82d  MOV dword ptr [EBP + -0x4],ECX
0042a830  MOV EAX,dword ptr [EBP + -0x4]
0042a833  MOV dword ptr [EAX + 0xf0],0x3f800000
0042a83d  MOV ECX,dword ptr [EBP + -0x4]
0042a840  MOV dword ptr [ECX + 0xf4],0x3f800000
0042a84a  MOV EDX,dword ptr [EBP + -0x4]
0042a84d  MOV dword ptr [EDX + 0xf8],0x3f800000
0042a857  MOV EAX,dword ptr [EBP + -0x4]
0042a85a  MOV dword ptr [EAX + 0xfc],0x3f000000
0042a864  MOV ECX,dword ptr [EBP + -0x4]
0042a867  MOV dword ptr [ECX + 0x100],0x3f800000
0042a871  MOV EDX,dword ptr [EBP + -0x4]
0042a874  MOV dword ptr [EDX + 0x104],0x3f800000
0042a87e  MOV EAX,dword ptr [EBP + -0x4]
0042a881  MOV dword ptr [EAX + 0x108],0x3f800000
0042a88b  MOV ECX,dword ptr [EBP + -0x4]
0042a88e  ADD ECX,0xf0
0042a894  PUSH ECX
0042a895  MOV EDX,dword ptr [EBP + -0x4]
0042a898  MOV EAX,dword ptr [EDX + 0x3c]
0042a89b  MOV ECX,dword ptr [EBP + -0x4]
0042a89e  MOV EDX,dword ptr [ECX + 0x3c]
0042a8a1  MOV ECX,dword ptr [EDX]
0042a8a3  PUSH EAX
0042a8a4  CALL dword ptr [ECX + 0x40]
0042a8a7  PUSH 0x45424c {'basket\\court.tga'}
0042a8ac  CALL 0x004010e6
0042a8b1  ADD ESP,0x4
0042a8b4  PUSH EAX
0042a8b5  PUSH 0x0
0042a8b7  MOV EDX,dword ptr [EBP + -0x4]
0042a8ba  MOV EAX,dword ptr [EDX + 0x3c]
0042a8bd  MOV ECX,dword ptr [EBP + -0x4]
0042a8c0  MOV EDX,dword ptr [ECX + 0x3c]
0042a8c3  MOV ECX,dword ptr [EDX]
0042a8c5  PUSH EAX
0042a8c6  CALL dword ptr [ECX + 0x8c]
0042a8cc  MOV EDX,dword ptr [EBP + -0x4]
0042a8cf  MOV EAX,dword ptr [EDX + 0x3c]
0042a8d2  PUSH EAX
0042a8d3  MOV ECX,dword ptr [EBP + -0x4]
0042a8d6  MOV ECX,dword ptr [ECX + 0xc4]
0042a8dc  CALL 0x0040116d
0042a8e1  MOV EDX,dword ptr [EBP + -0x4]
0042a8e4  MOV EAX,dword ptr [EDX + 0x3c]
0042a8e7  PUSH EAX
0042a8e8  MOV ECX,dword ptr [EBP + -0x4]
0042a8eb  MOV ECX,dword ptr [ECX + 0xc8]
0042a8f1  CALL 0x0040116d
0042a8f6  MOV ESP,EBP
0042a8f8  POP EBP
0042a8f9  RET
