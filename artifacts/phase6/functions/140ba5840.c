
void FUN_140ba5840(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  char local_res8 [16];
  undefined1 local_res18 [8];
  int local_res20 [2];
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_30 [8];
  longlong *local_28;
  
  if (*(char *)(param_1 + 0x158) == '\0') {
    return;
  }
  *(char *)(param_1 + 0x157) = param_2;
  FUN_140b9b660();
  if (*(longlong *)(param_1 + 0x78) == 0) {
    return;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x78) + 8) == 0) {
    return;
  }
  if (param_2 != '\0') {
    return;
  }
  plVar4 = (longlong *)FUN_140b99c30(param_1,local_40);
  plVar8 = DAT_1418d6ab0;
  if (((DAT_1418d6ab8 != 0) &&
      (uVar7 = *(uint *)(*plVar4 + 0x20) & 0xffffff, uVar7 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
     (plVar8 = *(longlong **)(*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar7 * 0x10),
     plVar8 == (longlong *)0x0)) {
    plVar8 = DAT_1418d6ab0;
  }
  if (*(code **)(*plVar8 + 0x30) == (code *)&LAB_1403827a0) {
    if (((*(int *)((longlong)plVar8 + 0x2c) - 3U & 0xfffffffa) != 0) ||
       (*(int *)((longlong)plVar8 + 0x2c) == 4)) {
LAB_140ba5912:
      lVar9 = *(longlong *)(plVar8[6] + 0x498);
      goto LAB_140ba5923;
    }
  }
  else {
    cVar3 = (**(code **)(*plVar8 + 0x30))(plVar8);
    if (cVar3 == '\0') goto LAB_140ba5912;
  }
  lVar9 = plVar8[8];
LAB_140ba5923:
  if (*(longlong *)(param_1 + 0x170) == 0) {
    lVar5 = FUN_1400d3090(param_1 + 0x168);
    *(longlong *)(param_1 + 0x160) = lVar5;
    if (lVar5 == 0) {
      lVar5 = DAT_1416e2360;
    }
    *(longlong *)(param_1 + 0x170) = lVar5;
  }
  FUN_14025d050(*(undefined8 *)(param_1 + 0x170),lVar9,local_res8,local_res18,local_res20);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_38 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_38 + 8))(local_38);
      }
    }
  }
  if ((local_res8[0] == '\0') || (local_res20[0] == 3)) {
    puVar6 = (undefined8 *)FUN_140b99c30(param_1,local_30);
    FUN_1403b6c40(*puVar6,param_1,0);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_28 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  }
  return;
}

