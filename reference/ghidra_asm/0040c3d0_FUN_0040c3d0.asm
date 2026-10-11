0040c3d0  PUSH EBP
0040c3d1  MOV EBP,ESP
0040c3d3  PUSH ECX
0040c3d4  MOV dword ptr [EBP + -0x4],ECX
0040c3d7  MOV ECX,dword ptr [EBP + -0x4]
0040c3da  CALL 0x0040130c  ; Vec3::CtorDefault
0040c3df  MOV ECX,dword ptr [EBP + -0x4]
0040c3e2  ADD ECX,0xc
0040c3e5  CALL 0x0040130c  ; Vec3::CtorDefault
0040c3ea  MOV EAX,dword ptr [EBP + -0x4]
0040c3ed  MOV ESP,EBP
0040c3ef  POP EBP
0040c3f0  RET
