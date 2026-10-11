// FUN_00403e13 @ 00403e13  size=95

int __cdecl FUN_00403e13(float *param_1,float *param_2,float *param_3)

{
  int local_10;
  
  local_10 = thunk_FUN_00403cfe(param_1,param_2,param_3);
  if (-1 < local_10) {
    local_10 = thunk_FUN_00403cfe(param_1 + 3,param_2 + 3,param_3);
  }
  return local_10;
}

