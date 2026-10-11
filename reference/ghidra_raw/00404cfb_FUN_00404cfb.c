// FUN_00404cfb @ 00404cfb  size=1850

undefined4 __thiscall FUN_00404cfb(void *this,LPCSTR param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  short sVar4;
  byte local_9c;
  byte local_98;
  uint local_94;
  uint local_90;
  byte local_8c;
  byte local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_5c;
  uint local_58;
  uint local_4c;
  uint local_48;
  uint local_38;
  int local_28;
  uint local_24;
  byte local_1c;
  char cStack_1b;
  ushort uStack_1a;
  ushort local_10;
  undefined2 uStack_e;
  undefined1 local_c;
  byte bStack_b;
  uint local_8;
  
  puVar1 = (uint *)_fopen(param_1,&DAT_00452f34);
  if (puVar1 == (uint *)0x0) {
    uVar2 = 0x80004005;
  }
  else {
    FUN_004343a0((char *)&local_1c,0x12,1,(int *)puVar1);
    if ((cStack_1b == '\0') && (((uStack_1a & 0xff) == 10 || ((uStack_1a & 0xff) == 2)))) {
      if (local_1c != 0) {
        FUN_00434270(puVar1,(uint)local_1c,1);
      }
      *(uint *)((int)this + 0x54) = (uint)local_10;
      *(uint *)((int)this + 0x58) = CONCAT12(local_c,uStack_e) & 0xffff;
      *(uint *)((int)this + 0x60) = CONCAT11(bStack_b,local_c) & 0xff;
      uVar2 = operator_new(*(int *)((int)this + 0x54) * *(int *)((int)this + 0x58) * 4);
      *(undefined4 *)((int)this + 0x74) = uVar2;
      if (*(int *)((int)this + 0x74) == 0) {
        _fclose((int *)puVar1);
        uVar2 = 0x80004005;
      }
      else {
        for (local_8 = 0; local_8 < *(uint *)((int)this + 0x58); local_8 = local_8 + 1) {
          local_28 = local_8 * *(int *)((int)this + 0x54);
          if ((bStack_b & 0x10) == 0) {
            local_28 = ((*(int *)((int)this + 0x58) - local_8) + -1) * *(int *)((int)this + 0x54);
          }
          local_24 = 0;
          while (local_24 < *(uint *)((int)this + 0x54)) {
            if ((uStack_1a & 0xff) == 10) {
              puVar1[1] = puVar1[1] - 1;
              if ((int)puVar1[1] < 0) {
                local_6c = FUN_00434070((int *)puVar1);
              }
              else {
                local_6c = (uint)*(byte *)*puVar1;
                *puVar1 = *puVar1 + 1;
              }
              sVar4 = ((ushort)local_6c & 0x7f) + 1;
              if ((local_6c & 0x80) == 0) {
                while (sVar4 != 0) {
                  puVar1[1] = puVar1[1] - 1;
                  if ((int)puVar1[1] < 0) {
                    local_80 = FUN_00434070((int *)puVar1);
                  }
                  else {
                    local_80 = (uint)*(byte *)*puVar1;
                    *puVar1 = *puVar1 + 1;
                  }
                  puVar1[1] = puVar1[1] - 1;
                  if ((int)puVar1[1] < 0) {
                    local_84 = FUN_00434070((int *)puVar1);
                  }
                  else {
                    local_84 = (uint)*(byte *)*puVar1;
                    *puVar1 = *puVar1 + 1;
                  }
                  puVar1[1] = puVar1[1] - 1;
                  if ((int)puVar1[1] < 0) {
                    uVar3 = FUN_00434070((int *)puVar1);
                    local_88 = (byte)uVar3;
                  }
                  else {
                    local_88 = *(byte *)*puVar1;
                    *puVar1 = *puVar1 + 1;
                  }
                  local_4c = (uint)local_88;
                  local_48 = 0xff;
                  if (*(int *)((int)this + 0x60) == 0x20) {
                    puVar1[1] = puVar1[1] - 1;
                    if ((int)puVar1[1] < 0) {
                      uVar3 = FUN_00434070((int *)puVar1);
                      local_8c = (byte)uVar3;
                    }
                    else {
                      local_8c = *(byte *)*puVar1;
                      *puVar1 = *puVar1 + 1;
                    }
                    local_48 = (uint)local_8c;
                  }
                  *(uint *)(*(int *)((int)this + 0x74) + (local_28 + local_24) * 4) =
                       local_4c * 0x1000000 + (local_84 & 0xff) * 0x10000 +
                       (local_80 & 0xff) * 0x100 + local_48;
                  local_24 = local_24 + 1;
                  sVar4 = sVar4 + -1;
                }
              }
              else {
                puVar1[1] = puVar1[1] - 1;
                if ((int)puVar1[1] < 0) {
                  local_70 = FUN_00434070((int *)puVar1);
                }
                else {
                  local_70 = (uint)*(byte *)*puVar1;
                  *puVar1 = *puVar1 + 1;
                }
                puVar1[1] = puVar1[1] - 1;
                if ((int)puVar1[1] < 0) {
                  local_74 = FUN_00434070((int *)puVar1);
                }
                else {
                  local_74 = (uint)*(byte *)*puVar1;
                  *puVar1 = *puVar1 + 1;
                }
                puVar1[1] = puVar1[1] - 1;
                if ((int)puVar1[1] < 0) {
                  local_78 = FUN_00434070((int *)puVar1);
                }
                else {
                  local_78 = (uint)*(byte *)*puVar1;
                  *puVar1 = *puVar1 + 1;
                }
                local_38 = 0xff;
                if (*(int *)((int)this + 0x60) == 0x20) {
                  puVar1[1] = puVar1[1] - 1;
                  if ((int)puVar1[1] < 0) {
                    local_7c = FUN_00434070((int *)puVar1);
                  }
                  else {
                    local_7c = (uint)*(byte *)*puVar1;
                    *puVar1 = *puVar1 + 1;
                  }
                  local_38 = local_7c;
                }
                while (sVar4 != 0) {
                  *(uint *)(*(int *)((int)this + 0x74) + (local_28 + local_24) * 4) =
                       local_70 * 0x100 + local_74 * 0x10000 + local_38 + local_78 * 0x1000000;
                  local_24 = local_24 + 1;
                  sVar4 = sVar4 + -1;
                }
              }
            }
            else {
              puVar1[1] = puVar1[1] - 1;
              if ((int)puVar1[1] < 0) {
                local_90 = FUN_00434070((int *)puVar1);
              }
              else {
                local_90 = (uint)*(byte *)*puVar1;
                *puVar1 = *puVar1 + 1;
              }
              puVar1[1] = puVar1[1] - 1;
              if ((int)puVar1[1] < 0) {
                local_94 = FUN_00434070((int *)puVar1);
              }
              else {
                local_94 = (uint)*(byte *)*puVar1;
                *puVar1 = *puVar1 + 1;
              }
              puVar1[1] = puVar1[1] - 1;
              if ((int)puVar1[1] < 0) {
                uVar3 = FUN_00434070((int *)puVar1);
                local_98 = (byte)uVar3;
              }
              else {
                local_98 = *(byte *)*puVar1;
                *puVar1 = *puVar1 + 1;
              }
              local_5c = (uint)local_98;
              local_58 = 0xff;
              if (*(int *)((int)this + 0x60) == 0x20) {
                puVar1[1] = puVar1[1] - 1;
                if ((int)puVar1[1] < 0) {
                  uVar3 = FUN_00434070((int *)puVar1);
                  local_9c = (byte)uVar3;
                }
                else {
                  local_9c = *(byte *)*puVar1;
                  *puVar1 = *puVar1 + 1;
                }
                local_58 = (uint)local_9c;
              }
              *(uint *)(*(int *)((int)this + 0x74) + (local_28 + local_24) * 4) =
                   local_5c * 0x1000000 + (local_94 & 0xff) * 0x10000 + (local_90 & 0xff) * 0x100 +
                   local_58;
              local_24 = local_24 + 1;
            }
          }
        }
        _fclose((int *)puVar1);
        *(undefined4 *)((int)this + 0x68) = 1;
        uVar2 = 0;
      }
    }
    else {
      _fclose((int *)puVar1);
      uVar2 = 0x80004005;
    }
  }
  return uVar2;
}

