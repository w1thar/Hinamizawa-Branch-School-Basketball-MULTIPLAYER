// D3DUtil_SetViewMatrix @ 0040738a  size=574

int __cdecl D3DUtil_SetViewMatrix(Mat4 *m,Vec3 *from,Vec3 *at,Vec3 *up)

{
  int iVar1;
  Vec3 *pVVar2;
  Vec3 *pVVar3;
  float fVar4;
  Vec3 local_84;
  Vec3 local_78;
  Vec3 local_6c;
  Vec3 local_60;
  Vec3 local_54;
  Vec3 local_48;
  Vec3 local_3c;
  Vec3 local_30;
  Vec3 local_24;
  float local_18;
  float local_14;
  Vec3 local_10;
  
  Vec3_Sub(&local_30,at,from);
  local_18 = Vec3_Magnitude(&local_30);
  if (1e-06 <= local_18) {
    Vec3::DivAssign(&local_30,local_18);
    local_14 = Vec3_Dot(up,&local_30);
    pVVar2 = Vec3_Scale(&local_3c,local_14,&local_30);
    Vec3_Sub(&local_10,up,pVVar2);
    local_18 = Vec3_Magnitude(&local_10);
    if (local_18 < 1e-06) {
      pVVar2 = Vec3_Scale(&local_48,local_30.y,&local_30);
      pVVar3 = Vec3::Ctor(&local_54,0.0,1.0,0.0);
      pVVar2 = Vec3_Sub(&local_60,pVVar3,pVVar2);
      local_10.x = pVVar2->x;
      local_10.y = pVVar2->y;
      local_10.z = pVVar2->z;
      local_18 = Vec3_Magnitude(&local_10);
      if (local_18 < 1e-06) {
        pVVar2 = Vec3_Scale(&local_6c,local_30.z,&local_30);
        pVVar3 = Vec3::Ctor(&local_78,0.0,0.0,1.0);
        pVVar2 = Vec3_Sub(&local_84,pVVar3,pVVar2);
        local_10.x = pVVar2->x;
        local_10.y = pVVar2->y;
        local_10.z = pVVar2->z;
        local_18 = Vec3_Magnitude(&local_10);
        if (local_18 < 1e-06) {
          return -0x7ff8ffa9;
        }
      }
    }
    Vec3::DivAssign(&local_10,local_18);
    Vec3_Cross(&local_24,&local_10,&local_30);
    D3DUtil_SetIdentityMatrix(m);
    m->m[0] = local_24.x;
    m->m[1] = local_10.x;
    m->m[2] = local_30.x;
    m->m[4] = local_24.y;
    m->m[5] = local_10.y;
    m->m[6] = local_30.y;
    m->m[8] = local_24.z;
    m->m[9] = local_10.z;
    m->m[10] = local_30.z;
    fVar4 = Vec3_Dot(from,&local_24);
    m->m[0xc] = -fVar4;
    fVar4 = Vec3_Dot(from,&local_10);
    m->m[0xd] = -fVar4;
    fVar4 = Vec3_Dot(from,&local_30);
    m->m[0xe] = -fVar4;
    iVar1 = 0;
  }
  else {
    iVar1 = -0x7ff8ffa9;
  }
  return iVar1;
}

