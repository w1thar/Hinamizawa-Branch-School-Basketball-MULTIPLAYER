// _IsEqualGUID @ 004038a0  size=28

/* Library Function - Single Match
    _IsEqualGUID
   
   Library: Visual Studio 2003 Debug */

bool __cdecl _IsEqualGUID(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = _memcmp(param_1,param_2,0x10);
  return (bool)('\x01' - (iVar1 != 0));
}

