// FUN_00407986 @ 00407986  size=123

int __cdecl FUN_00407986(undefined4 param_1,undefined4 param_2,int param_3,LPCSTR param_4)

{
  CHAR local_104 [256];
  
  wsprintfA(local_104,s__s__ld___00452f7c,param_1,param_2);
  OutputDebugStringA(local_104);
  OutputDebugStringA(param_4);
  if (param_3 != 0) {
    wsprintfA(local_104,s__hr__08lx__00452f88,param_3);
    OutputDebugStringA(local_104);
  }
  OutputDebugStringA(&DAT_00452f94);
  return param_3;
}

