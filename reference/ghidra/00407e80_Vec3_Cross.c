// Vec3_Cross @ 00407e80  size=271

Vec3 * __cdecl Vec3_Cross(Vec3 *out,Vec3 *a,Vec3 *b)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  Vec3 local_10;
  
  Vec3::CtorDefault(&local_10);
  pfVar5 = Vec3::IndexConst(a,1);
  pfVar6 = Vec3::IndexConst(b,2);
  fVar1 = *pfVar5;
  fVar2 = *pfVar6;
  pfVar5 = Vec3::IndexConst(a,2);
  pfVar6 = Vec3::IndexConst(b,1);
  fVar3 = *pfVar5;
  fVar4 = *pfVar6;
  pfVar5 = Vec3::Index(&local_10,0);
  *pfVar5 = fVar1 * fVar2 - fVar3 * fVar4;
  pfVar5 = Vec3::IndexConst(a,2);
  pfVar6 = Vec3::IndexConst(b,0);
  fVar1 = *pfVar5;
  fVar2 = *pfVar6;
  pfVar5 = Vec3::IndexConst(a,0);
  pfVar6 = Vec3::IndexConst(b,2);
  fVar3 = *pfVar5;
  fVar4 = *pfVar6;
  pfVar5 = Vec3::Index(&local_10,1);
  *pfVar5 = fVar1 * fVar2 - fVar3 * fVar4;
  pfVar5 = Vec3::IndexConst(a,0);
  pfVar6 = Vec3::IndexConst(b,1);
  fVar1 = *pfVar5;
  fVar2 = *pfVar6;
  pfVar5 = Vec3::IndexConst(a,1);
  pfVar6 = Vec3::IndexConst(b,0);
  fVar3 = *pfVar5;
  fVar4 = *pfVar6;
  pfVar5 = Vec3::Index(&local_10,2);
  *pfVar5 = fVar1 * fVar2 - fVar3 * fVar4;
  out->x = local_10.x;
  out->y = local_10.y;
  out->z = local_10.z;
  return out;
}

