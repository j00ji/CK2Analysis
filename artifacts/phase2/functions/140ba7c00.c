
void FUN_140ba7c00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar5 = 0;
  iVar3 = (int)(param_2[0x36] - param_2[0x35] >> 3);
  if (0 < iVar3) {
    do {
      lVar1 = *(longlong *)(param_2[0x35] + lVar5 * 8);
      if (*(longlong **)(lVar1 + 0x1c0) == param_2) {
        *(undefined8 *)(lVar1 + 0x1c0) = 0;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  param_2[0x36] = param_2[0x35];
  lVar5 = (**(code **)(*param_2 + 0x50))(param_2);
  plVar2 = *(longlong **)(lVar5 + 0x38);
  *(longlong *)(lVar5 + 0x230) = param_1;
  while (plVar2 != (longlong *)0x0) {
    lVar5 = *plVar2;
    plVar2 = (longlong *)plVar2[2];
    if (500 < *(int *)(lVar5 + 0x40)) {
      *(undefined4 *)(lVar5 + 0x40) = 500;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x238);
  puVar4 = operator_new(0x20);
  *puVar4 = param_2;
  puVar4[1] = lVar5;
  puVar4[2] = 0;
  *(undefined1 *)(puVar4 + 3) = 0;
  iVar3 = *(int *)(param_1 + 0x240);
  *(undefined8 **)(param_1 + 0x238) = puVar4;
  *(int *)(param_1 + 0x240) = iVar3 + 1;
  if (iVar3 == 0) {
    *(undefined8 **)(param_1 + 0x230) = puVar4;
  }
  else {
    *(undefined8 **)(lVar5 + 0x10) = puVar4;
  }
  return;
}

