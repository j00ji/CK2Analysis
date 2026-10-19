
void FUN_1403b6910(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar5 = DAT_1416e3260;
  uVar8 = 0;
  iVar6 = (**(code **)(*param_1 + 0x60))();
  if (((iVar6 == 3) &&
      ((*(longlong *)(param_2 + 0x1b0) - *(longlong *)(param_2 + 0x1a8) & 0xfffffffffffffff8U) != 0)
      ) && (*(int *)(param_1[2] + 0x40) != 0)) {
    uVar8 = 0;
    if (*(longlong *)(**(longlong **)(param_1[2] + 0x30) + 0x1c0) == param_2) {
      uVar8 = 1;
    }
  }
  (**(code **)(*(longlong *)param_1[2] + 0x30))((longlong *)param_1[2],param_2,uVar8);
  FUN_140ba5f50(param_2,param_1 + 0xb);
  iVar6 = (**(code **)(*param_1 + 0x60))(param_1);
  if (iVar6 == 3) {
    puVar7 = (undefined8 *)FUN_1403b9ad0(lVar5 + 0x230,local_28,param_1);
    plVar2 = (longlong *)puVar7[1];
    uVar3 = *puVar7;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
      }
    }
    plVar4 = *(longlong **)(param_2 + 0x78);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    *(longlong **)(param_2 + 0x78) = plVar2;
    *(undefined8 *)(param_2 + 0x70) = uVar3;
    local_10 = local_20;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2);
        local_10 = local_20;
      }
    }
  }
  else {
    puVar7 = (undefined8 *)FUN_1403b9ad0(lVar5 + 0x230,local_18,param_1);
    plVar2 = (longlong *)puVar7[1];
    uVar3 = *puVar7;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
      }
    }
    plVar4 = *(longlong **)(param_2 + 0x68);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    *(longlong **)(param_2 + 0x68) = plVar2;
    *(undefined8 *)(param_2 + 0x60) = uVar3;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_10 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_10 + 8))(local_10);
      }
    }
  }
  return;
}

