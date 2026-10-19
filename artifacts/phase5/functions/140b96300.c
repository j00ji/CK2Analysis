
void FUN_140b96300(longlong param_1)

{
  code *pcVar1;
  
  if ((*(int *)(param_1 + 0x10) != 0) || (*(int *)(param_1 + 0x14) != 0)) {
    pcVar1 = *(code **)(*(longlong *)(param_1 + -0x10) + 0x38);
    if (pcVar1 == (code *)&LAB_140b95430) {
      if (*(uint *)(DAT_1416e3260 + 0x42c) <= *(uint *)(param_1 + 0x14)) {
        *(uint *)(DAT_1416e3260 + 0x42c) = *(uint *)(param_1 + 0x14) + 1;
      }
      FUN_140c425f0(param_1,param_1 + 0x10,0);
      FUN_140b98e30(param_1 + -0x10,*(undefined8 *)(param_1 + 0x70));
      return;
    }
    (*pcVar1)(param_1 + -0x10);
  }
  FUN_140b98e30(param_1 + -0x10,*(undefined8 *)(param_1 + 0x70));
  return;
}

