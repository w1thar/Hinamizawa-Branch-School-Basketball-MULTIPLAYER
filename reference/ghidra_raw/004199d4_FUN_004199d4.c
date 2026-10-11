// FUN_004199d4 @ 004199d4  size=273

float10 __thiscall FUN_004199d4(int param_1,float param_2,float param_3,float param_4)

{
  float local_8;
  
  local_8 = param_2 + 3.14;
  if (3.14 <= local_8) {
    local_8 = local_8 - 6.28;
  }
  if (local_8 < param_2) {
    if (param_2 <= param_3 || param_3 <= local_8) {
      local_8 = param_3 - param_4 * *(float *)(param_1 + 0x54);
    }
    else {
      local_8 = param_4 * *(float *)(param_1 + 0x54) + param_3;
    }
  }
  else if (param_3 < param_2 || local_8 < param_3) {
    local_8 = param_4 * *(float *)(param_1 + 0x54) + param_3;
  }
  else {
    local_8 = param_3 - param_4 * *(float *)(param_1 + 0x54);
  }
  return (float10)local_8;
}

