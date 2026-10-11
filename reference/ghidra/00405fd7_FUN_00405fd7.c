// FUN_00405fd7 @ 00405fd7  size=1373

undefined4 __fastcall FUN_00405fd7(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint local_d8;
  int *local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  uint local_b0;
  uint local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  uint local_8c;
  uint local_88;
  int local_84;
  int local_70;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_18;
  int local_14;
  uint local_10;
  int *local_c;
  uint local_8;
  
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x90))(*(undefined4 *)(param_1 + 0x6c),&local_c);
  local_94 = 0x7c;
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x58))(*(undefined4 *)(param_1 + 0x6c),&local_94);
  local_90 = 0x101007;
  local_2c = 0x1800;
  local_28 = 0;
  local_88 = *(uint *)(param_1 + 0x54);
  local_8c = *(uint *)(param_1 + 0x58);
  local_a8 = (**(code **)(*local_c + 0x18))(local_c,&local_94,&local_c4,0);
  if (local_a8 < 0) {
    (**(code **)(*local_c + 8))(local_c);
  }
  else {
    do {
      iVar1 = (**(code **)(*local_c4 + 100))(local_c4,0,&local_94,0,0);
    } while (iVar1 == -0x7789fde4);
    local_bc = local_84;
    local_a4 = local_70;
    local_8 = local_38;
    local_b0 = local_34;
    local_10 = local_30;
    bVar4 = 8;
    local_98 = 0;
    local_c0 = 8;
    local_18 = 0;
    local_b8 = 8;
    local_14 = 0;
    local_9c = 8;
    local_b4 = 0;
    for (local_a0 = local_3c; (local_a0 != 0 && ((local_a0 & 1) == 0)); local_a0 = local_a0 >> 1) {
      local_98 = local_98 + 1;
    }
    for (; local_a0 != 0; local_a0 = local_a0 >> 1) {
      bVar4 = bVar4 - 1;
    }
    for (local_a0 = local_38; (local_a0 != 0 && ((local_a0 & 1) == 0)); local_a0 = local_a0 >> 1) {
      local_18 = local_18 + 1;
    }
    for (; local_a0 != 0; local_a0 = local_a0 >> 1) {
      local_c0 = local_c0 + -1;
    }
    for (local_a0 = local_34; (local_a0 != 0 && ((local_a0 & 1) == 0)); local_a0 = local_a0 >> 1) {
      local_14 = local_14 + 1;
    }
    for (; local_a0 != 0; local_a0 = local_a0 >> 1) {
      local_b8 = local_b8 + -1;
    }
    for (local_a0 = local_30; (local_a0 != 0 && ((local_a0 & 1) == 0)); local_a0 = local_a0 >> 1) {
      local_b4 = local_b4 + 1;
    }
    for (; local_a0 != 0; local_a0 = local_a0 >> 1) {
      local_9c = local_9c + -1;
    }
    for (local_ac = 0; local_ac < local_8c; local_ac = local_ac + 1) {
      for (local_d8 = 0; local_d8 < local_88; local_d8 = local_d8 + 1) {
        uVar3 = *(uint *)(*(int *)(param_1 + 0x74) + (local_ac * local_88 + local_d8) * 4);
        uVar5 = ((int)(uVar3 >> 0x18) >> (bVar4 & 0x1f)) << ((byte)local_98 & 0x1f) & local_3c;
        uVar2 = ((int)(uVar3 >> 0x10 & 0xff) >> ((byte)local_c0 & 0x1f)) << ((byte)local_18 & 0x1f)
                & local_38;
        uVar6 = ((int)(uVar3 >> 8 & 0xff) >> ((byte)local_b8 & 0x1f)) << ((byte)local_14 & 0x1f) &
                local_34;
        uVar3 = ((int)(uVar3 & 0xff) >> ((byte)local_9c & 0x1f)) << ((byte)local_b4 & 0x1f) &
                local_30;
        if (local_40 == 0x20) {
          *(uint *)(local_a4 + local_d8 * 4) = uVar5 + uVar2 + uVar6 + uVar3;
        }
        else {
          *(short *)(local_a4 + local_d8 * 2) =
               (short)uVar5 + (short)uVar2 + (short)uVar6 + (short)uVar3;
        }
      }
      local_a4 = local_a4 + local_84;
    }
    (**(code **)(*local_c4 + 0x80))(local_c4,0);
    (**(code **)(**(int **)(param_1 + 0x6c) + 0x14))
              (*(undefined4 *)(param_1 + 0x6c),0,local_c4,0,0x1000000,0);
    (**(code **)(*local_c4 + 8))(local_c4);
    (**(code **)(*local_c + 8))(local_c);
  }
  return 0;
}

