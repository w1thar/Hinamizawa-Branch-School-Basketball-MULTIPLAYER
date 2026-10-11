// FUN_0040685b @ 0040685b  size=71

undefined4 FUN_0040685b(void)

{
  TexContainer *local_8;
  
  for (local_8 = g_textureList; local_8 != (TexContainer *)0x0; local_8 = local_8->next) {
    if (local_8->surface != (void *)0x0) {
      (**(code **)(*(int *)local_8->surface + 8))(local_8->surface);
      local_8->surface = (void *)0x0;
    }
  }
  return 0;
}

