
void FUN_1403b9910(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar10;
  
  uVar10 = 0;
  puVar6 = *(undefined8 **)(param_1 + 0x18);
  while (puVar6 != (undefined8 *)0x0) {
    plVar4 = (longlong *)puVar6[1];
    puVar5 = (undefined8 *)puVar6[3];
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6 = puVar5;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))();
        }
      }
    }
  }
  uVar11 = uVar10;
  if (0 < (int)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 4)) {
    do {
      lVar7 = *(longlong *)(param_1 + 0x30);
      plVar4 = *(longlong **)(uVar11 + 8 + lVar7);
      *(undefined8 *)(uVar11 + 8 + lVar7) = 0;
      *(undefined8 *)(uVar11 + lVar7) = 0;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))();
          }
        }
      }
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar11 = uVar11 + 0x10;
    } while ((int)uVar9 < (int)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 4))
    ;
  }
  FUN_1403bdf60(param_1 + 0x18);
  lVar7 = *(longlong *)(param_1 + 0x38);
  lVar12 = *(longlong *)(param_1 + 0x30);
  if (lVar12 == lVar7) {
    *(longlong *)(param_1 + 0x38) = lVar12;
  }
  else {
    do {
      plVar4 = *(longlong **)(lVar12 + 8);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4);
          }
        }
      }
      lVar12 = lVar12 + 0x10;
    } while (lVar12 != lVar7);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
  }
  return;
}

