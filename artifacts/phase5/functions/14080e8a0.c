
void FUN_14080e8a0(longlong param_1)

{
  int iVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  FUN_1403829c0(*(undefined8 *)(param_1 + 0x28));
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x18);
  lVar3 = FUN_1400aea20();
  uVar2 = FUN_140da1950(*(undefined8 *)(DAT_1416e3b28 + 0x1c0));
  *(undefined1 *)(lVar3 + 0x65) = uVar2;
  *(bool *)(lVar3 + 99) = iVar1 == 0x34cae411;
  **(undefined1 **)(param_1 + 0x30) = 1;
  return;
}

