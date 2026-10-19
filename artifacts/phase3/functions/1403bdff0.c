
void FUN_1403bdff0(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar2 = *param_1;
  puVar5 = operator_new(0x28);
  *puVar5 = 0;
  puVar5[1] = 0;
  uVar3 = *param_2;
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_14026d370(puVar5,uVar3);
  puVar5[2] = 0;
  puVar5[3] = lVar2;
  *(undefined1 *)(puVar5 + 4) = 0;
  lVar4 = param_1[2];
  *param_1 = (longlong)puVar5;
  *(int *)(param_1 + 2) = (int)lVar4 + 1;
  if ((int)lVar4 == 0) {
    param_1[1] = (longlong)puVar5;
  }
  else {
    *(undefined8 **)(lVar2 + 0x10) = puVar5;
  }
  return;
}

