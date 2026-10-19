
void FUN_1403a16f0(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (param_3 == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x38);
    puVar3 = operator_new(0x20);
    *puVar3 = param_2;
    puVar3[1] = lVar2;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
    iVar1 = *(int *)(param_1 + 0x40);
    *(undefined8 **)(param_1 + 0x38) = puVar3;
    *(int *)(param_1 + 0x40) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined8 **)(param_1 + 0x30) = puVar3;
    }
    else {
      *(undefined8 **)(lVar2 + 0x10) = puVar3;
    }
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x30);
    puVar3 = operator_new(0x20);
    *puVar3 = param_2;
    puVar3[1] = 0;
    puVar3[2] = lVar2;
    *(undefined1 *)(puVar3 + 3) = 0;
    iVar1 = *(int *)(param_1 + 0x40);
    *(undefined8 **)(param_1 + 0x30) = puVar3;
    *(int *)(param_1 + 0x40) = iVar1 + 1;
    if (iVar1 == 0) {
      *(undefined8 **)(param_1 + 0x38) = puVar3;
    }
    else {
      *(undefined8 **)(lVar2 + 8) = puVar3;
    }
  }
  FUN_1403a1b60(param_1,param_2);
  return;
}

