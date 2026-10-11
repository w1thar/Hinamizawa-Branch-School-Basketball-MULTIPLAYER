// D3DMath_MatrixMultiply @ 004038d0  size=285

void __cdecl D3DMath_MatrixMultiply(Mat4 *out,Mat4 *a,Mat4 *b)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  float local_44 [16];
  
  _memset(local_44,0,0x40);
  for (uVar1 = 0; uVar1 < 4; uVar1 = uVar1 + 1) {
    for (uVar3 = 0; uVar3 < 4; uVar3 = uVar3 + 1) {
      for (uVar2 = 0; uVar2 < 4; uVar2 = uVar2 + 1) {
        local_44[(uint)uVar3 + (uint)uVar1 * 4] =
             a->m[(uint)uVar2 + (uint)uVar1 * 4] * b->m[(uint)uVar3 + (uint)uVar2 * 4] +
             local_44[(uint)uVar3 + (uint)uVar1 * 4];
      }
    }
  }
  FUN_004334a0(out->m,local_44,0x40);
  return;
}

