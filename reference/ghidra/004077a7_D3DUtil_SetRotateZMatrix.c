// D3DUtil_SetRotateZMatrix @ 004077a7  size=90

void __cdecl D3DUtil_SetRotateZMatrix(Mat4 *m,float a)

{
  undefined4 extraout_ECX;
  float10 fVar1;
  
  D3DUtil_SetIdentityMatrix(m);
  fVar1 = (float10)thunk_FUN_00404900(a);
  m->m[0] = (float)fVar1;
  fVar1 = (float10)thunk_FUN_00404960(extraout_ECX);
  m->m[1] = (float)fVar1;
  fVar1 = (float10)thunk_FUN_00404960(m);
  m->m[4] = (float)-fVar1;
  fVar1 = (float10)thunk_FUN_00404900(a);
  m->m[5] = (float)fVar1;
  return;
}

