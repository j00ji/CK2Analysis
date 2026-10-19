
void FUN_1403a1b60(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 local_30 [8];
  longlong *local_28;
  
  puVar9 = (undefined8 *)(param_2 + 0x38);
  if (param_2 == 0) {
    puVar9 = (undefined8 *)0x0;
  }
  puVar9 = (undefined8 *)*puVar9;
  pbVar4 = *(byte **)(param_2 + 0x118);
  puVar8 = (undefined8 *)FUN_1403a1430(param_1,local_30,param_3,param_4,0xfffffffffffffffe);
  iVar7 = (**(code **)(*(longlong *)*puVar8 + 0x60))();
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_28 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_28 + 8))(local_28);
      }
    }
  }
  if (iVar7 == 3) {
    while (puVar9 != (undefined8 *)0x0) {
      uVar5 = *puVar9;
      puVar9 = (undefined8 *)puVar9[2];
      FUN_14039c9e0(param_1 + 0x110,uVar5);
    }
  }
  else {
    while (puVar9 != (undefined8 *)0x0) {
      uVar5 = *puVar9;
      puVar9 = (undefined8 *)puVar9[2];
      bVar3 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      FUN_14039c9e0(param_1 + 0x48 + (ulonglong)bVar3 * 200,uVar5);
    }
  }
  plVar10 = (longlong *)(param_2 + 0x130);
  plVar12 = (longlong *)(param_1 + 0x58);
  lVar11 = 3;
  do {
    if (((*(byte *)(*plVar10 + 0x1e9) & 2) != 0) &&
       (cVar6 = FUN_14023d360(*plVar10,*plVar12), cVar6 != '\0')) {
      *plVar12 = *plVar10;
      plVar12[1] = *plVar10;
    }
    plVar10 = plVar10 + 1;
    plVar12 = plVar12 + 0x19;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  return;
}

