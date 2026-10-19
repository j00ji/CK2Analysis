
void FUN_1403aa9c0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  FUN_1403a2f60(param_1[2]);
  FUN_1403a2f60(param_1[3]);
  lVar10 = DAT_1418d6ab0;
  if (((DAT_1418d6ab8 != 0) &&
      ((*(uint *)(param_1 + 4) & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
     (lVar10 = *(longlong *)
                (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                (ulonglong)(*(uint *)(param_1 + 4) & 0xffffff) * 0x10), lVar10 == 0)) {
    lVar10 = DAT_1418d6ab0;
  }
  iVar6 = (**(code **)(*param_1 + 0x60))(param_1);
  if (((iVar6 == 3) &&
      (cVar5 = (**(code **)(*(longlong *)(lVar10 + 0x10) + 8))(lVar10 + 0x10), cVar5 != '\0')) &&
     (*(longlong **)(lVar10 + 0xcc8) == param_1)) {
    FUN_1409fe3f0(lVar10,0,1);
    return;
  }
  cVar5 = (**(code **)(*(longlong *)(lVar10 + 0x10) + 8))(lVar10 + 0x10);
  bVar3 = false;
  if (cVar5 == '\0') {
LAB_1403aab07:
    bVar4 = false;
  }
  else {
    iVar6 = *(int *)(lVar10 + 0x2c);
    if ((iVar6 == 4) && (*(char *)(DAT_1416e3260 + 0x34a) == '\0')) {
      lVar7 = FUN_1401fffd0(*(undefined8 *)(*(longlong *)(lVar10 + 0x30) + 0x498));
    }
    else {
      lVar7 = *(longlong *)(lVar10 + 0x70);
    }
    bVar3 = false;
    if (lVar7 == 0) goto LAB_1403aab07;
    if ((iVar6 == 4) && (*(char *)(DAT_1416e3260 + 0x34a) == '\0')) {
      uVar8 = FUN_1401fffd0(*(undefined8 *)(*(longlong *)(lVar10 + 0x30) + 0x498));
    }
    else {
      uVar8 = *(undefined8 *)(lVar10 + 0x70);
    }
    puVar9 = (undefined8 *)FUN_140938780(uVar8,local_48);
    bVar3 = true;
    if ((longlong *)*puVar9 != param_1) goto LAB_1403aab07;
    bVar4 = true;
  }
  if ((bVar3) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_40 + 8))(local_40);
      }
    }
  }
  bVar3 = false;
  if (bVar4) {
    if ((*(int *)(lVar10 + 0x2c) == 4) && (*(char *)(DAT_1416e3260 + 0x34a) == '\0')) {
      lVar10 = FUN_1401fffd0(*(undefined8 *)(*(longlong *)(lVar10 + 0x30) + 0x498));
    }
    else {
      lVar10 = *(longlong *)(lVar10 + 0x70);
    }
    plVar2 = *(longlong **)(lVar10 + 0xce0);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    *(undefined8 *)(lVar10 + 0xce0) = 0;
    *(undefined8 *)(lVar10 + 0xcd8) = 0;
    return;
  }
  lVar10 = param_1[5];
  if (lVar10 != 0) {
    puVar9 = (undefined8 *)FUN_140938780(lVar10,local_38);
    bVar3 = true;
    if ((longlong *)*puVar9 == param_1) {
      bVar4 = true;
      goto LAB_1403aabe0;
    }
  }
  bVar4 = false;
LAB_1403aabe0:
  if ((bVar3) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_30 + 8))(local_30);
      }
    }
  }
  if (bVar4) {
    plVar2 = *(longlong **)(lVar10 + 0xce0);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    *(undefined8 *)(lVar10 + 0xce0) = 0;
    *(undefined8 *)(lVar10 + 0xcd8) = 0;
  }
  return;
}

