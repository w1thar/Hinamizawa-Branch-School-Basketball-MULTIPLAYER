// Game::fn_428491 @ 00428491  size=568

void __thiscall Game::fn_428491(Game *this)

{
  undefined4 uVar1;
  Vec3 *pVVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 local_134 [12];
  undefined1 local_128 [32];
  undefined1 local_108 [12];
  undefined1 local_fc [32];
  undefined1 local_dc [12];
  undefined1 local_d0 [32];
  undefined1 local_b0 [12];
  undefined1 local_a4 [32];
  undefined4 local_84 [8];
  undefined4 local_64 [8];
  undefined4 local_44 [8];
  undefined4 local_24 [8];
  
  if (0.01 <= this->f394) {
    thunk_FUN_0040c3a0(local_84,0x20,4,&LAB_0040119f);
    uVar10 = 0x3f0f5c29;
    uVar9 = 0xbf35c28f;
    uVar8 = 0;
    lVar6 = __ftol();
    uVar1 = CONCAT31((uint3)(CONCAT22((short)((uint)((int)lVar6 << 0x18) >> 0x10),0xff00) >> 8) |
                     0xff00,0xff);
    uVar7 = 0x3f000000;
    pVVar2 = Vec3_Set(local_b0,(Vec3 *)0x0,480.0,0.0,0.5);
    puVar3 = thunk_FUN_00422870(local_a4,&pVVar2->x,uVar7,uVar1,uVar8,uVar9,uVar10);
    puVar5 = local_84;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar10 = 0x3f147ae1;
    uVar9 = 0xbf35c28f;
    uVar8 = 0;
    lVar6 = __ftol();
    uVar1 = CONCAT31((uint3)(CONCAT22((short)((uint)((int)lVar6 << 0x18) >> 0x10),0xff00) >> 8) |
                     0xff00,0xff);
    uVar7 = 0x3f000000;
    pVVar2 = Vec3_Set(local_dc,(Vec3 *)0x0,0.0,0.0,0.5);
    puVar3 = thunk_FUN_00422870(local_d0,&pVVar2->x,uVar7,uVar1,uVar8,uVar9,uVar10);
    puVar5 = local_64;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar10 = 0x3f147ae1;
    uVar9 = 0xbf333333;
    uVar8 = 0;
    lVar6 = __ftol();
    uVar1 = CONCAT31((uint3)(CONCAT22((short)((uint)((int)lVar6 << 0x18) >> 0x10),0xff00) >> 8) |
                     0xff00,0xff);
    uVar7 = 0x3f000000;
    pVVar2 = Vec3_Set(local_108,(Vec3 *)0x44200000,480.0,0.0,0.5);
    puVar3 = thunk_FUN_00422870(local_fc,&pVVar2->x,uVar7,uVar1,uVar8,uVar9,uVar10);
    puVar5 = local_44;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    uVar10 = 0x3f0f5c29;
    uVar9 = 0xbf333333;
    uVar8 = 0;
    lVar6 = __ftol();
    uVar1 = CONCAT31((uint3)(CONCAT22((short)((uint)((int)lVar6 << 0x18) >> 0x10),0xff00) >> 8) |
                     0xff00,0xff);
    uVar7 = 0x3f000000;
    pVVar2 = Vec3_Set(local_134,(Vec3 *)0x44200000,0.0,0.0,0.5);
    puVar3 = thunk_FUN_00422870(local_128,&pVVar2->x,uVar7,uVar1,uVar8,uVar9,uVar10);
    puVar5 = local_24;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    (*this->device->lpVtbl->SetTextureStageState)(this->device,0,5,0);
    (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_84,4,0);
    (*this->device->lpVtbl->SetTextureStageState)(this->device,0,5,2);
  }
  return;
}

