// FUN_004038d0 @ 004038d0  size=285

void __cdecl FUN_004038d0(undefined4 *param_1,int param_2,int param_3)

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
             *(float *)(param_2 + ((uint)uVar2 + (uint)uVar1 * 4) * 4) *
             *(float *)(param_3 + ((uint)uVar3 + (uint)uVar2 * 4) * 4) +
             local_44[(uint)uVar3 + (uint)uVar1 * 4];
      }
    }
  }
  FUN_004334a0(param_1,local_44,0x40);
  return;
}

