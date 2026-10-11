// D3DUtil_SetViewMatrix @ 0040738a  size=574

int __cdecl D3DUtil_SetViewMatrix(Mat4 *m,Vec3 *from,Vec3 *at,Vec3 *up)

{
  int iVar1;
  float *pfVar2;
  Vec3 *pVVar3;
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
  
  thunk_FUN_00407cb0(&local_30,&at->x,&from->x);
  fVar4 = (float10)thunk_FUN_00407d50(&local_30);
  local_18 = (float)fVar4;
  if (1e-06 <= local_18) {
    thunk_FUN_00407c60(&local_30,local_18);
    fVar4 = thunk_FUN_00407e40(&up->x,&local_30);
    local_14 = (float)fVar4;
    pfVar2 = thunk_FUN_00407d00(local_3c,local_14,&local_30);
    thunk_FUN_00407cb0(&local_10,&up->x,pfVar2);
    fVar4 = (float10)thunk_FUN_00407d50(&local_10);
    local_18 = (float)fVar4;
    if (fVar4 < (float10)1e-06) {
      pfVar2 = thunk_FUN_00407d00(local_48,local_2c,&local_30);
      pVVar3 = Vec3_Set(local_54,(Vec3 *)0x0,1.0,0.0,(float)pfVar2);
      pfVar2 = thunk_FUN_00407cb0(local_60,&pVVar3->x,pfVar2);
      local_10 = *pfVar2;
      local_c = pfVar2[1];
      local_8 = pfVar2[2];
      fVar4 = (float10)thunk_FUN_00407d50(&local_10);
      local_18 = (float)fVar4;
      if (fVar4 < (float10)1e-06) {
        pfVar2 = thunk_FUN_00407d00(local_6c,local_28,&local_30);
        pVVar3 = Vec3_Set(local_78,(Vec3 *)0x0,0.0,1.0,(float)pfVar2);
        pfVar2 = thunk_FUN_00407cb0(local_84,&pVVar3->x,pfVar2);
        local_10 = *pfVar2;
        local_c = pfVar2[1];
        local_8 = pfVar2[2];
        fVar4 = (float10)thunk_FUN_00407d50(&local_10);
        local_18 = (float)fVar4;
        if (fVar4 < (float10)1e-06) {
          return -0x7ff8ffa9;
        }
      }
    }
    thunk_FUN_00407c60(&local_10,local_18);
    thunk_FUN_00407e80(&local_24,&local_10,&local_30);
    D3DUtil_SetIdentityMatrix(m);
    m->m[0] = local_24;
    m->m[1] = local_10;
    m->m[2] = local_30;
    m->m[4] = local_20;
    m->m[5] = local_c;
    m->m[6] = local_2c;
    m->m[8] = local_1c;
    m->m[9] = local_8;
    m->m[10] = local_28;
    fVar4 = thunk_FUN_00407e40(&from->x,&local_24);
    m->m[0xc] = (float)-fVar4;
    fVar4 = thunk_FUN_00407e40(&from->x,&local_10);
    m->m[0xd] = (float)-fVar4;
    fVar4 = thunk_FUN_00407e40(&from->x,&local_30);
    m->m[0xe] = (float)-fVar4;
    iVar1 = 0;
  }
  else {
    iVar1 = -0x7ff8ffa9;
  }
  return iVar1;
}

