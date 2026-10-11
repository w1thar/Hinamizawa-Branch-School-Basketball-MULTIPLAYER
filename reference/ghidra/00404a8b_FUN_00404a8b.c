// FUN_00404a8b @ 00404a8b  size=172

void __fastcall FUN_00404a8b(undefined4 *param_1)

{
  TexContainer *local_8;
  
  if (param_1[0x1b] != 0) {
    (**(code **)(*(int *)param_1[0x1b] + 8))(param_1[0x1b]);
    param_1[0x1b] = 0;
  }
  if (param_1[0x1d] != 0) {
    operator_delete((void *)param_1[0x1d]);
    param_1[0x1d] = 0;
  }
  DeleteObject((HGDIOBJ)param_1[0x1c]);
  if (g_textureList == (TexContainer *)param_1) {
    g_textureList = (TexContainer *)*param_1;
  }
  else {
    for (local_8 = g_textureList; local_8 != (TexContainer *)0x0; local_8 = local_8->next) {
      if (local_8->next == (TexContainer *)param_1) {
        local_8->next = (TexContainer *)*param_1;
      }
    }
  }
  return;
}

