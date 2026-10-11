// D3DUtil_SetViewMatrix @ 0040738a  size=574

undefined4 __cdecl
D3DUtil_SetViewMatrix(float *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined4 uVar1;
  float *pfVar2;
  float *pfVar3;
  float10 fVar4;
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  thunk_FUN_00407cb0(&local_30,param_3,param_2);
  fVar4 = (float10)thunk_FUN_00407d50(&local_30);
  local_18 = (float)fVar4;
  if (1e-06 <= local_18) {
    thunk_FUN_00407c60(&local_30,local_18);
    fVar4 = thunk_FUN_00407e40(param_4,&local_30);
    local_14 = (float)fVar4;
    pfVar2 = thunk_FUN_00407d00(local_3c,local_14,&local_30);
    thunk_FUN_00407cb0(&local_10,param_4,pfVar2);
    fVar4 = (float10)thunk_FUN_00407d50(&local_10);
    local_18 = (float)fVar4;
    if (fVar4 < (float10)1e-06) {
      pfVar2 = thunk_FUN_00407d00(local_48,local_2c,&local_30);
      pfVar3 = (float *)D3DVECTOR_ctor(local_54,0,0x3f800000,0);
      pfVar2 = thunk_FUN_00407cb0(local_60,pfVar3,pfVar2);
      local_10 = *pfVar2;
      local_c = pfVar2[1];
      local_8 = pfVar2[2];
      fVar4 = (float10)thunk_FUN_00407d50(&local_10);
      local_18 = (float)fVar4;
      if (fVar4 < (float10)1e-06) {
        pfVar2 = thunk_FUN_00407d00(local_6c,local_28,&local_30);
        pfVar3 = (float *)D3DVECTOR_ctor(local_78,0,0,0x3f800000);
        pfVar2 = thunk_FUN_00407cb0(local_84,pfVar3,pfVar2);
        local_10 = *pfVar2;
        local_c = pfVar2[1];
        local_8 = pfVar2[2];
        fVar4 = (float10)thunk_FUN_00407d50(&local_10);
        local_18 = (float)fVar4;
        if (fVar4 < (float10)1e-06) {
          return 0x80070057;
        }
      }
    }
    thunk_FUN_00407c60(&local_10,local_18);
    thunk_FUN_00407e80(&local_24,&local_10,&local_30);
    thunk_FUN_00408040(param_1);
    *param_1 = local_24;
    param_1[1] = local_10;
    param_1[2] = local_30;
    param_1[4] = local_20;
    param_1[5] = local_c;
    param_1[6] = local_2c;
    param_1[8] = local_1c;
    param_1[9] = local_8;
    param_1[10] = local_28;
    fVar4 = thunk_FUN_00407e40(param_2,&local_24);
    param_1[0xc] = (float)-fVar4;
    fVar4 = thunk_FUN_00407e40(param_2,&local_10);
    param_1[0xd] = (float)-fVar4;
    fVar4 = thunk_FUN_00407e40(param_2,&local_30);
    param_1[0xe] = (float)-fVar4;
    uVar1 = 0;
  }
  else {
    uVar1 = 0x80070057;
  }
  return uVar1;
}

