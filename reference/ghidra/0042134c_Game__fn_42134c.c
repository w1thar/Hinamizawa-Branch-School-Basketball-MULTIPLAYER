// Game::fn_42134c @ 0042134c  size=2499

void __thiscall Game::fn_42134c(Game *this)

{
  Vec3 *pVVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 local_34c [12];
  undefined1 local_340 [32];
  undefined1 local_320 [12];
  undefined1 local_314 [32];
  undefined1 local_2f4 [12];
  undefined1 local_2e8 [32];
  undefined1 local_2c8 [12];
  undefined1 local_2bc [32];
  undefined1 local_29c [12];
  undefined1 local_290 [32];
  undefined1 local_270 [12];
  undefined1 local_264 [32];
  undefined1 local_244 [12];
  undefined1 local_238 [32];
  undefined1 local_218 [12];
  undefined1 local_20c [32];
  undefined1 local_1ec [12];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [12];
  undefined1 local_1b4 [32];
  undefined1 local_194 [12];
  undefined1 local_188 [32];
  undefined1 local_168 [12];
  undefined1 local_15c [32];
  undefined1 local_13c [12];
  undefined1 local_130 [32];
  undefined1 local_110 [12];
  undefined1 local_104 [32];
  undefined1 local_e4 [12];
  undefined1 local_d8 [32];
  undefined1 local_b8 [12];
  undefined1 local_ac [32];
  int local_8c;
  int local_88;
  undefined4 local_84 [8];
  undefined4 local_64 [8];
  undefined4 local_44 [8];
  undefined4 local_24 [8];
  
  if (this->b3a4 != '\0') {
    thunk_FUN_0040c3a0(local_84,0x20,4,&LAB_0040119f);
    if (this->b3a6 == '\0') {
      for (local_8c = 0; local_8c < 3; local_8c = local_8c + 1) {
        uVar9 = 0x3f800000;
        fVar8 = (float)this->teamYou[local_8c] * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        uVar5 = 0x3f000000;
        pVVar1 = Vec3_Set(local_218,(Vec3 *)(((float)local_8c + 0.3) * 0.075 * 640.0),81.6,0.01,0.5)
        ;
        puVar2 = thunk_FUN_00422870(local_20c,&pVVar1->x,uVar5,uVar6,uVar7,fVar8,uVar9);
        puVar4 = local_84;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        uVar9 = 0x3f56872b;
        fVar8 = (float)this->teamYou[local_8c] * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        uVar5 = 0x3f000000;
        pVVar1 = Vec3_Set(local_244,(Vec3 *)(((float)local_8c + 0.3) * 0.075 * 640.0),33.6,0.01,0.5)
        ;
        puVar2 = thunk_FUN_00422870(local_238,&pVVar1->x,uVar5,uVar6,uVar7,fVar8,uVar9);
        puVar4 = local_64;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        uVar9 = 0x3f800000;
        fVar8 = (float)(this->teamYou[local_8c] + 1) * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        uVar5 = 0x3f000000;
        pVVar1 = Vec3_Set(local_270,(Vec3 *)(((float)local_8c + 1.3) * 0.075 * 640.0),81.6,0.01,0.5)
        ;
        puVar2 = thunk_FUN_00422870(local_264,&pVVar1->x,uVar5,uVar6,uVar7,fVar8,uVar9);
        puVar4 = local_44;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        uVar9 = 0x3f56872b;
        fVar8 = (float)(this->teamYou[local_8c] + 1) * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        uVar5 = 0x3f000000;
        pVVar1 = Vec3_Set(local_29c,(Vec3 *)(((float)local_8c + 1.3) * 0.075 * 640.0),33.6,0.01,0.5)
        ;
        puVar2 = thunk_FUN_00422870(local_290,&pVVar1->x,uVar5,uVar6,uVar7,fVar8,uVar9);
        puVar4 = local_24;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_84,4,0);
      }
      for (local_8c = 0; local_8c < 3; local_8c = local_8c + 1) {
        uVar9 = 0x3f800000;
        fVar8 = (float)this->teamCom[local_8c] * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        uVar5 = 0x3f000000;
        pVVar1 = Vec3_Set(local_2c8,(Vec3 *)(((float)local_8c + 10.0) * 0.075 * 640.0),81.6,0.01,0.5
                         );
        puVar2 = thunk_FUN_00422870(local_2bc,&pVVar1->x,uVar5,uVar6,uVar7,fVar8,uVar9);
        puVar4 = local_84;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        uVar9 = 0x3f56872b;
        fVar8 = (float)this->teamCom[local_8c] * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        uVar5 = 0x3f000000;
        pVVar1 = Vec3_Set(local_2f4,(Vec3 *)(((float)local_8c + 10.0) * 0.075 * 640.0),33.6,0.01,0.5
                         );
        puVar2 = thunk_FUN_00422870(local_2e8,&pVVar1->x,uVar5,uVar6,uVar7,fVar8,uVar9);
        puVar4 = local_64;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        uVar9 = 0x3f800000;
        fVar8 = (float)(this->teamCom[local_8c] + 1) * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        uVar5 = 0x3f000000;
        pVVar1 = Vec3_Set(local_320,(Vec3 *)(((float)local_8c + 11.0) * 0.075 * 640.0),81.6,0.01,0.5
                         );
        puVar2 = thunk_FUN_00422870(local_314,&pVVar1->x,uVar5,uVar6,uVar7,fVar8,uVar9);
        puVar4 = local_44;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        uVar9 = 0x3f56872b;
        fVar8 = (float)(this->teamCom[local_8c] + 1) * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        uVar5 = 0x3f000000;
        pVVar1 = Vec3_Set(local_34c,(Vec3 *)(((float)local_8c + 11.0) * 0.075 * 640.0),33.6,0.01,0.5
                         );
        puVar2 = thunk_FUN_00422870(local_340,&pVVar1->x,uVar5,uVar6,uVar7,fVar8,uVar9);
        puVar4 = local_24;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_84,4,0);
      }
    }
    else {
      for (local_88 = 0; local_88 < 3; local_88 = local_88 + 1) {
        uVar9 = 0x3f800000;
        fVar8 = (float)this->teamCom[local_88] * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        uVar5 = 0x3f000000;
        pVVar1 = Vec3_Set(local_b8,(Vec3 *)(((float)local_88 + 0.3) * 0.075 * 640.0),81.6,0.01,0.5);
        puVar2 = thunk_FUN_00422870(local_ac,&pVVar1->x,uVar5,uVar6,uVar7,fVar8,uVar9);
        puVar4 = local_84;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        uVar9 = 0x3f56872b;
        fVar8 = (float)this->teamCom[local_88] * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        uVar5 = 0x3f000000;
        pVVar1 = Vec3_Set(local_e4,(Vec3 *)(((float)local_88 + 0.3) * 0.075 * 640.0),33.6,0.01,0.5);
        puVar2 = thunk_FUN_00422870(local_d8,&pVVar1->x,uVar5,uVar6,uVar7,fVar8,uVar9);
        puVar4 = local_64;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        uVar9 = 0x3f800000;
        fVar8 = (float)(this->teamCom[local_88] + 1) * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        uVar5 = 0x3f000000;
        pVVar1 = Vec3_Set(local_110,(Vec3 *)(((float)local_88 + 1.3) * 0.075 * 640.0),81.6,0.01,0.5)
        ;
        puVar2 = thunk_FUN_00422870(local_104,&pVVar1->x,uVar5,uVar6,uVar7,fVar8,uVar9);
        puVar4 = local_44;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        uVar9 = 0x3f56872b;
        fVar8 = (float)(this->teamCom[local_88] + 1) * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        uVar5 = 0x3f000000;
        pVVar1 = Vec3_Set(local_13c,(Vec3 *)(((float)local_88 + 1.3) * 0.075 * 640.0),33.6,0.01,0.5)
        ;
        puVar2 = thunk_FUN_00422870(local_130,&pVVar1->x,uVar5,uVar6,uVar7,fVar8,uVar9);
        puVar4 = local_24;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_84,4,0);
      }
      for (local_88 = 0; local_88 < 3; local_88 = local_88 + 1) {
        uVar9 = 0x3f800000;
        fVar8 = (float)this->teamYou[local_88] * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        uVar5 = 0x3f000000;
        pVVar1 = Vec3_Set(local_168,(Vec3 *)(((float)local_88 + 10.0) * 0.075 * 640.0),81.6,0.01,0.5
                         );
        puVar2 = thunk_FUN_00422870(local_15c,&pVVar1->x,uVar5,uVar6,uVar7,fVar8,uVar9);
        puVar4 = local_84;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        uVar9 = 0x3f56872b;
        fVar8 = (float)this->teamYou[local_88] * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        uVar5 = 0x3f000000;
        pVVar1 = Vec3_Set(local_194,(Vec3 *)(((float)local_88 + 10.0) * 0.075 * 640.0),33.6,0.01,0.5
                         );
        puVar2 = thunk_FUN_00422870(local_188,&pVVar1->x,uVar5,uVar6,uVar7,fVar8,uVar9);
        puVar4 = local_64;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        uVar9 = 0x3f800000;
        fVar8 = (float)(this->teamYou[local_88] + 1) * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        uVar5 = 0x3f000000;
        pVVar1 = Vec3_Set(local_1c0,(Vec3 *)(((float)local_88 + 11.0) * 0.075 * 640.0),81.6,0.01,0.5
                         );
        puVar2 = thunk_FUN_00422870(local_1b4,&pVVar1->x,uVar5,uVar6,uVar7,fVar8,uVar9);
        puVar4 = local_44;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        uVar9 = 0x3f56872b;
        fVar8 = (float)(this->teamYou[local_88] + 1) * 0.165 - 1.0;
        uVar7 = 0;
        uVar6 = 0xffffffff;
        uVar5 = 0x3f000000;
        pVVar1 = Vec3_Set(local_1ec,(Vec3 *)(((float)local_88 + 11.0) * 0.075 * 640.0),33.6,0.01,0.5
                         );
        puVar2 = thunk_FUN_00422870(local_1e0,&pVVar1->x,uVar5,uVar6,uVar7,fVar8,uVar9);
        puVar4 = local_24;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
        (*this->device->lpVtbl->DrawPrimitive)(this->device,5,0x1c4,local_84,4,0);
      }
    }
  }
  return;
}

