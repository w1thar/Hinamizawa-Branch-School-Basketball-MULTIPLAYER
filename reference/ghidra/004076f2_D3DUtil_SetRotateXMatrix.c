// D3DUtil_SetRotateXMatrix @ 004076f2  size=91

void __cdecl D3DUtil_SetRotateXMatrix(Mat4 *m,float a)

{
  undefined4 extraout_ECX;
  float10 fVar1;
  
  D3DUtil_SetIdentityMatrix(m);
  fVar1 = (float10)thunk_FUN_00404900(a);
  m->m[5] = (float)fVar1;
  fVar1 = (float10)thunk_FUN_00404960(extraout_ECX);
  m->m[6] = (float)fVar1;
  fVar1 = (float10)thunk_FUN_00404960(m);
  m->m[9] = (float)-fVar1;
  fVar1 = (float10)thunk_FUN_00404900(a);
  m->m[10] = (float)fVar1;
  return;
}

