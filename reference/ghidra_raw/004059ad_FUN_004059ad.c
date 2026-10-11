// FUN_004059ad @ 004059ad  size=1578

int __fastcall FUN_004059ad(int param_1)

{
  ushort uVar1;
  uint uVar2;
  UINT UVar3;
  int iVar4;
  uint *local_554;
  uint local_550;
  ushort *local_54c;
  ushort local_548;
  uint local_544;
  uint local_540;
  undefined4 local_53c [2];
  uint local_534;
  uint local_530;
  int local_52c;
  int local_518;
  int local_4e8;
  uint local_4e4;
  uint local_4e0;
  uint local_4dc;
  uint local_4d8;
  uint local_4c0;
  RGBQUAD local_4bc [256];
  uint local_bc;
  uint local_b8;
  uint local_b4;
  int *local_b0;
  HDC local_ac;
  int *local_a8;
  undefined1 local_a4 [4];
  int local_a0;
  int local_9c;
  HDC local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  int local_30;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_8;
  
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x90))(*(undefined4 *)(param_1 + 0x6c),&local_8);
  GetObjectA(*(HANDLE *)(param_1 + 0x70),0x18,local_a4);
  local_84 = 0x7c;
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x58))(*(undefined4 *)(param_1 + 0x6c),&local_84);
  local_80 = 0x101007;
  local_1c = 0x1800;
  local_18 = 0;
  local_78 = local_a0;
  local_7c = local_9c;
  local_88 = (**(code **)(*local_8 + 0x18))(local_8,&local_84,&local_a8,0);
  if (local_88 < 0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  else {
    local_ac = CreateCompatibleDC((HDC)0x0);
    if (local_ac == (HDC)0x0) {
      (**(code **)(*local_a8 + 8))(local_a8);
      (**(code **)(*local_8 + 8))(local_8);
    }
    else {
      SelectObject(local_ac,*(HGDIOBJ *)(param_1 + 0x70));
      if (local_30 == 8) {
        local_b8 = 0x44;
        UVar3 = GetDIBColorTable(local_ac,0,0x100,local_4bc);
        local_bc = CONCAT22(local_bc._2_2_,(short)UVar3);
        local_b4 = local_b4 & 0xffff0000;
        while ((local_b4 & 0xffff) < (local_bc & 0xffff)) {
          uVar1._0_1_ = local_4bc[local_b4 & 0xffff].rgbBlue;
          uVar1._1_1_ = local_4bc[local_b4 & 0xffff].rgbGreen;
          local_4bc[local_b4 & 0xffff] =
               (RGBQUAD)((uint)local_4bc[local_b4 & 0xffff] >> 0x10 & 0xff |
                         ((int)(uint)uVar1 >> 8) << 8 |
                        (uint)local_4bc[local_b4 & 0xffff].rgbBlue << 0x10);
          if ((*(uint *)(param_1 + 100) & 3) != 0) {
            if ((*(uint *)(param_1 + 100) & 2) == 0) {
              if (((*(uint *)(param_1 + 100) & 1) != 0) &&
                 (local_4bc[local_b4 & 0xffff] != (RGBQUAD)0xffffff)) {
                local_4bc[local_b4 & 0xffff] =
                     (RGBQUAD)((uint)local_4bc[local_b4 & 0xffff] | 0xff000000);
              }
            }
            else if (local_4bc[local_b4 & 0xffff] != (RGBQUAD)0x0) {
              local_4bc[local_b4 & 0xffff] =
                   (RGBQUAD)((uint)local_4bc[local_b4 & 0xffff] | 0xff000000);
            }
          }
          local_b4 = CONCAT22(local_b4._2_2_,(short)local_b4 + 1);
        }
        if ((*(uint *)(param_1 + 100) & 3) != 0) {
          local_b8 = local_b8 | 0x400;
        }
        (**(code **)(*local_8 + 0x14))(local_8,local_b8,local_4bc,&local_b0,0);
        (**(code **)(*local_a8 + 0x7c))(local_a8,local_b0);
        (**(code **)(**(int **)(param_1 + 0x6c) + 0x7c))(*(undefined4 *)(param_1 + 0x6c),local_b0);
        if (local_b0 != (int *)0x0) {
          (**(code **)(*local_b0 + 8))(local_b0);
          local_b0 = (int *)0x0;
        }
      }
      iVar4 = (**(code **)(*local_a8 + 0x44))(local_a8,&local_8c);
      if (-1 < iVar4) {
        BitBlt(local_8c,0,0,local_a0,local_9c,local_ac,0,0,0xcc0020);
        (**(code **)(*local_a8 + 0x68))(local_a8,local_8c);
      }
      DeleteDC(local_ac);
      (**(code **)(**(int **)(param_1 + 0x6c) + 0x14))
                (*(undefined4 *)(param_1 + 0x6c),0,local_a8,0,0x1000000,0);
      (**(code **)(*local_a8 + 8))(local_a8);
      if ((local_20 != 0) && ((*(uint *)(param_1 + 100) & 3) != 0)) {
        local_53c[0] = 0x7c;
        do {
          iVar4 = (**(code **)(**(int **)(param_1 + 0x6c) + 100))
                            (*(undefined4 *)(param_1 + 0x6c),0,local_53c,0,0);
        } while (iVar4 == -0x7789fde4);
        local_4c0 = local_4d8;
        uVar2 = local_4c0;
        local_4dc = local_4e4 | local_4e0 | local_4dc;
        local_540 = 0;
        if ((*(uint *)(param_1 + 100) & 1) != 0) {
          local_540 = local_4dc;
        }
        for (local_544 = 0; local_544 < local_534; local_544 = local_544 + 1) {
          local_54c = (ushort *)(local_518 + local_544 * local_52c);
          local_554 = (uint *)(local_518 + local_544 * local_52c);
          for (local_550 = 0; local_550 < local_530; local_550 = local_550 + 1) {
            if (local_4e8 == 0x10) {
              local_548 = (ushort)local_4dc;
              *local_54c = *local_54c & local_548;
              if (*local_54c != local_540) {
                local_4c0._0_2_ = (ushort)local_4d8;
                *local_54c = *local_54c | (ushort)local_4c0;
              }
              local_54c = local_54c + 1;
            }
            if (local_4e8 == 0x20) {
              *local_554 = *local_554 & local_4dc;
              if (*local_554 != local_540) {
                *local_554 = *local_554 | local_4d8;
              }
              local_554 = local_554 + 1;
            }
          }
        }
        local_4c0 = uVar2;
        (**(code **)(**(int **)(param_1 + 0x6c) + 0x80))(*(undefined4 *)(param_1 + 0x6c),0);
      }
      (**(code **)(*local_8 + 8))(local_8);
      local_88 = 0;
    }
  }
  return local_88;
}

