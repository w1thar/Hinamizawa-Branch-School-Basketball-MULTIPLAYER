// FUN_00401daa @ 00401daa  size=1249

uint __fastcall FUN_00401daa(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_58;
  float local_44 [16];
  
  iVar1 = (**(code **)**(undefined4 **)(param_1 + 0x34))
                    (*(undefined4 *)(param_1 + 0x34),&DAT_0044fcd8,param_1 + 0x38);
  if (iVar1 < 0) {
    uVar2 = MessageBoxA((HWND)0x0,&DAT_00452e64,&DAT_00457cc4,0);
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    _memset((void *)(param_1 + 0x94),0,0x20);
    *(undefined4 *)(param_1 + 0x94) = 0x20;
    *(undefined4 *)(param_1 + 0x98) = 0x400;
    (**(code **)(**(int **)(param_1 + 0x38) + 0x18))
              (*(undefined4 *)(param_1 + 0x38),&DAT_0044fc68,FUN_0040228b,param_1 + 0x94);
    if (DAT_00457c94 == '\0') {
      (**(code **)(**(int **)(param_1 + 0x38) + 0x18))
                (*(undefined4 *)(param_1 + 0x38),&DAT_0044fca8,FUN_0040228b,param_1 + 0x94);
      if (DAT_00457c94 == '\0') {
        (**(code **)(**(int **)(param_1 + 0x38) + 0x18))
                  (*(undefined4 *)(param_1 + 0x38),&DAT_0044fc98,FUN_0040228b,param_1 + 0x94);
        if (DAT_00457c94 == '\0') {
          (**(code **)(**(int **)(param_1 + 0x38) + 0x18))
                    (*(undefined4 *)(param_1 + 0x38),&DAT_0044fcb8,FUN_0040228b,param_1 + 0x94);
          if (DAT_00457c94 != '\0') {
            *(undefined1 *)(param_1 + 0x50) = 4;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x50) = 3;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x50) = 2;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
    _memset(&local_c0,0,0x7c);
    local_c0 = 0x7c;
    local_bc = 0x1007;
    if (*(char *)(param_1 + 0x50) < '\x03') {
      local_58 = 0x24000;
    }
    else {
      local_58 = 0x20800;
    }
    local_b4 = 0x280;
    local_b8 = 0x1e0;
    local_78 = 0x20;
    local_74 = 0x400;
    FUN_004334a0(&local_78,(undefined4 *)(param_1 + 0x94),0x20);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x34) + 0x18))
                      (*(undefined4 *)(param_1 + 0x34),&local_c0,param_1 + 0x4c,0);
    if (iVar1 == 0) {
      (**(code **)(**(int **)(param_1 + 0x44) + 0xc))
                (*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x4c));
      iVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x10))
                        (*(undefined4 *)(param_1 + 0x38),&DAT_0044fc68,
                         *(undefined4 *)(param_1 + 0x44),param_1 + 0x3c);
      if ((((iVar1 != 0) &&
           (iVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x10))
                              (*(undefined4 *)(param_1 + 0x38),&DAT_0044fca8,
                               *(undefined4 *)(param_1 + 0x44),param_1 + 0x3c), iVar1 != 0)) &&
          (iVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x10))
                             (*(undefined4 *)(param_1 + 0x38),&DAT_0044fc98,
                              *(undefined4 *)(param_1 + 0x44),param_1 + 0x3c), iVar1 != 0)) &&
         (iVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x10))
                            (*(undefined4 *)(param_1 + 0x38),&DAT_0044fcb8,
                             *(undefined4 *)(param_1 + 0x44),param_1 + 0x3c), iVar1 != 0)) {
        uVar2 = MessageBoxA((HWND)0x0,&DAT_00452e90,&DAT_00457ccc,0);
        return uVar2 & 0xffffff00;
      }
      local_d8 = 0;
      local_d4 = 0;
      local_d0 = 0x280;
      local_cc = 0x1e0;
      local_c8 = 0;
      local_c4 = 0x3f800000;
      iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x34))
                        (*(undefined4 *)(param_1 + 0x3c),&local_d8);
      if (iVar1 == 0) {
        thunk_FUN_00403880(local_44);
        thunk_FUN_004075c8(local_44,0x3f48f5c3,0.785,1.0,2000.0);
        (**(code **)(**(int **)(param_1 + 0x3c) + 0x2c))(*(undefined4 *)(param_1 + 0x3c),3,local_44)
        ;
        (**(code **)(**(int **)(param_1 + 0x3c) + 0x50))(*(undefined4 *)(param_1 + 0x3c),0x89,1);
        (**(code **)(**(int **)(param_1 + 0x3c) + 0x94))(*(undefined4 *)(param_1 + 0x3c),0,0x10,2);
        (**(code **)(**(int **)(param_1 + 0x3c) + 0x94))(*(undefined4 *)(param_1 + 0x3c),1,0x10,2);
        uVar3 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x50))
                          (*(undefined4 *)(param_1 + 0x3c),7,1);
        uVar2 = CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      else {
        uVar2 = MessageBoxA((HWND)0x0,&DAT_00452ea8,&DAT_00457cd0,0);
        uVar2 = uVar2 & 0xffffff00;
      }
    }
    else {
      uVar2 = MessageBoxA((HWND)0x0,&DAT_00452e7c,&DAT_00457cc8,0);
      uVar2 = uVar2 & 0xffffff00;
    }
  }
  return uVar2;
}

