
void FUN_140ba99a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 local_20 [8];
  longlong *local_18;
  
  lVar4 = FUN_1400d3090(param_1 + 0x88);
  lVar9 = 0;
  lVar8 = lVar4 + -0x10;
  if (lVar4 == 0) {
    lVar8 = lVar9;
  }
  *(longlong *)(param_1 + 0x80) = lVar8;
  lVar5 = FUN_1400d3090(param_1 + 0x98);
  lVar4 = lVar5 + -0x10;
  if (lVar5 == 0) {
    lVar4 = lVar9;
  }
  cVar3 = FUN_140ba7980(lVar4,lVar8);
  if (cVar3 == '\0') {
    return;
  }
  lVar8 = param_1 + 0x88;
  lVar5 = FUN_1400d3090(lVar8);
  lVar4 = lVar9;
  if (lVar5 != 0) {
    lVar4 = lVar5 + -0x10;
  }
  cVar3 = *(char *)(lVar4 + 8);
  if ((cVar3 != '\0') && (*(char *)(param_1 + 0xa0) == '\0')) {
    (**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0x1c0))();
  }
  lVar5 = FUN_1400d3090(param_1 + 0x88);
  lVar4 = lVar5 + -0x10;
  if (lVar5 == 0) {
    lVar4 = lVar9;
  }
  *(longlong *)(param_1 + 0x80) = lVar4;
  lVar6 = FUN_1400d3090(param_1 + 0x98);
  lVar5 = lVar6 + -0x10;
  if (lVar6 == 0) {
    lVar5 = lVar9;
  }
  FUN_140ba7c00(lVar5,lVar4);
  if (cVar3 == '\0') {
    if (*(char *)(param_1 + 0xa0) == '\0') goto LAB_140ba9b62;
    lVar5 = FUN_1400d3090(param_1 + 0x98);
    lVar4 = lVar9;
    if (lVar5 != 0) {
      lVar4 = lVar5 + -0x10;
    }
    if (*(char *)(lVar4 + 8) != '\0') goto LAB_140ba9b62;
    lVar4 = *(longlong *)(DAT_1416e3260 + 0x3f0);
    lVar6 = FUN_1400d3090(param_1 + 0x98);
    lVar5 = lVar6 + -0x10;
    if (lVar6 == 0) {
      lVar5 = lVar9;
    }
    if (*(longlong *)(lVar5 + 0x170) == 0) {
      lVar6 = FUN_1400d3090(lVar5 + 0x168);
      *(longlong *)(lVar5 + 0x160) = lVar6;
      if (lVar6 == 0) {
        lVar6 = DAT_1416e2360;
      }
      *(longlong *)(lVar5 + 0x170) = lVar6;
    }
    if (lVar4 != *(longlong *)(lVar5 + 0x170)) goto LAB_140ba9b62;
  }
  plVar10 = *(longlong **)(DAT_1416e3260 + 0x370);
  lVar5 = FUN_1400d3090(param_1 + 0x98);
  lVar4 = lVar5 + -0x10;
  if (lVar5 == 0) {
    lVar4 = lVar9;
  }
  *(longlong *)(param_1 + 0x90) = lVar4;
  (**(code **)(*plVar10 + 0x1a0))(plVar10);
LAB_140ba9b62:
  lVar5 = FUN_1400d3090(lVar8);
  lVar4 = lVar9;
  if (lVar5 != 0) {
    lVar4 = lVar5 + -0x10;
  }
  if ((*(longlong *)(lVar4 + 0x78) != 0) && (*(int *)(*(longlong *)(lVar4 + 0x78) + 8) != 0)) {
    lVar5 = FUN_1400d3090(lVar8);
    lVar4 = lVar5 + -0x10;
    if (lVar5 == 0) {
      lVar4 = lVar9;
    }
    puVar7 = (undefined8 *)FUN_140b99c30(lVar4,local_20);
    lVar5 = FUN_1400d3090(param_1 + 0x88);
    lVar4 = lVar5 + -0x10;
    if (lVar5 == 0) {
      lVar4 = lVar9;
    }
    *(longlong *)(param_1 + 0x80) = lVar4;
    FUN_1403b6c40(*puVar7,lVar4,0);
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_18 + 1;
      lVar4 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar1 = (int *)((longlong)local_18 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_18 + 8))(local_18);
        }
      }
    }
    FUN_1403bd8e0(DAT_1416e3260 + 0x230);
  }
  lVar5 = FUN_1400d3090(lVar8);
  lVar4 = lVar9;
  if (lVar5 != 0) {
    lVar4 = lVar5 + -0x10;
  }
  if (0 < *(int *)(lVar4 + 0xa0)) {
    lVar8 = FUN_1400d3090(lVar8);
    if (lVar8 != 0) {
      lVar9 = lVar8 + -0x10;
    }
    FUN_140ba15e0(lVar9,0);
  }
  return;
}

