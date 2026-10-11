// D3DUtil_SetRotateYMatrix @ 0040774d  size=90

void __cdecl D3DUtil_SetRotateYMatrix(Mat4 *m,float a)

{
  undefined4 extraout_ECX;
  float10 fVar1;
  
  D3DUtil_SetIdentityMatrix(m);
  fVar1 = (float10)thunk_FUN_00404900(a);
  m->m[0] = (float)fVar1;
  fVar1 = (float10)thunk_FUN_00404960(extraout_ECX);
  m->m[2] = (float)-fVar1;
  fVar1 = (float10)thunk_FUN_00404960(m);
  m->m[8] = (float)fVar1;
  fVar1 = (float10)thunk_FUN_00404900(a);
  m->m[10] = (float)fVar1;
  return;
}

