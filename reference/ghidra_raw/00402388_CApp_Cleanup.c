// CApp_Cleanup @ 00402388  size=233

void __fastcall CApp_Cleanup(int param_1)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))(*(undefined4 *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 8))(*(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 8))(*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 8))(*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    (**(code **)(**(int **)(param_1 + 0x40) + 8))(*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 8))(*(undefined4 *)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}

