// FUN_00407e80 @ 00407e80  size=271

undefined4 * __cdecl FUN_00407e80(undefined4 *param_1,void *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  thunk_FUN_00407fe0(&local_10);
  pfVar5 = (float *)thunk_FUN_00408000(param_2,1);
  pfVar6 = (float *)thunk_FUN_00408000(param_3,2);
  fVar1 = *pfVar5;
  fVar2 = *pfVar6;
  pfVar5 = (float *)thunk_FUN_00408000(param_2,2);
  pfVar6 = (float *)thunk_FUN_00408000(param_3,1);
  fVar3 = *pfVar5;
  fVar4 = *pfVar6;
  pfVar5 = (float *)thunk_FUN_00408020(&local_10,0);
  *pfVar5 = fVar1 * fVar2 - fVar3 * fVar4;
  pfVar5 = (float *)thunk_FUN_00408000(param_2,2);
  pfVar6 = (float *)thunk_FUN_00408000(param_3,0);
  fVar1 = *pfVar5;
  fVar2 = *pfVar6;
  pfVar5 = (float *)thunk_FUN_00408000(param_2,0);
  pfVar6 = (float *)thunk_FUN_00408000(param_3,2);
  fVar3 = *pfVar5;
  fVar4 = *pfVar6;
  pfVar5 = (float *)thunk_FUN_00408020(&local_10,1);
  *pfVar5 = fVar1 * fVar2 - fVar3 * fVar4;
  pfVar5 = (float *)thunk_FUN_00408000(param_2,0);
  pfVar6 = (float *)thunk_FUN_00408000(param_3,1);
  fVar1 = *pfVar5;
  fVar2 = *pfVar6;
  pfVar5 = (float *)thunk_FUN_00408000(param_2,1);
  pfVar6 = (float *)thunk_FUN_00408000(param_3,0);
  fVar3 = *pfVar5;
  fVar4 = *pfVar6;
  pfVar5 = (float *)thunk_FUN_00408020(&local_10,2);
  *pfVar5 = fVar1 * fVar2 - fVar3 * fVar4;
  *param_1 = local_10;
  param_1[1] = local_c;
  param_1[2] = local_8;
  return param_1;
}

