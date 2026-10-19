
void FUN_1403a2f60(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar3 = (longlong *)param_1[6];
joined_r0x0001403a2f74:
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  lVar10 = *plVar3;
  plVar3 = (longlong *)plVar3[2];
  if (*(code **)(*param_1 + 0x38) == FUN_1403a17b0) {
    plVar11 = (longlong *)param_1[6];
    if (plVar11 == (longlong *)0x0) {
LAB_1403a3043:
      FUN_1403a1cc0(param_1,lVar10);
    }
    else {
      do {
        if (*plVar11 == lVar10) {
          if (plVar11 == (longlong *)0x0) goto LAB_1403a3043;
          if (*(char *)((longlong)param_1 + 0x44) != '\0') {
            *(undefined1 *)(plVar11 + 3) = 1;
            FUN_1403a1cc0(param_1,lVar10);
            goto LAB_1403a304e;
          }
          lVar4 = plVar11[1];
          lVar5 = plVar11[2];
          if (lVar4 != 0) {
            *(longlong *)(lVar4 + 0x10) = lVar5;
          }
          if (lVar5 != 0) {
            *(longlong *)(lVar5 + 8) = lVar4;
          }
          if (plVar11 == (longlong *)param_1[6]) {
            param_1[6] = lVar5;
          }
          if (plVar11 == (longlong *)param_1[7]) {
            param_1[7] = lVar4;
          }
          thunk_FUN_140e1c5e4(plVar11,0x20);
          *(int *)(param_1 + 8) = (int)param_1[8] + -1;
          goto LAB_1403a3043;
        }
        plVar11 = (longlong *)plVar11[2];
      } while (plVar11 != (longlong *)0x0);
      FUN_1403a1cc0(param_1,lVar10);
    }
  }
  else {
    (**(code **)(*param_1 + 0x38))(param_1,lVar10);
  }
LAB_1403a304e:
  plVar8 = (longlong *)FUN_1403a1430(param_1,local_58);
  plVar9 = (longlong *)FUN_140b99ce0(lVar10,local_68);
  plVar11 = local_60;
  lVar4 = *plVar8;
  lVar5 = *plVar9;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_60 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
  }
  plVar11 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_50 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
  }
  if (lVar5 != lVar4) goto LAB_1403a3109;
  plVar11 = *(longlong **)(lVar10 + 0x68);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar11 + 8))();
    }
  }
  *(undefined8 *)(lVar10 + 0x68) = 0;
  *(undefined8 *)(lVar10 + 0x60) = 0;
  goto LAB_1403a31bf;
LAB_1403a3109:
  plVar8 = (longlong *)FUN_1403a1430(param_1,local_38);
  plVar9 = (longlong *)FUN_140b99c30(lVar10,local_48);
  plVar11 = local_40;
  lVar4 = *plVar8;
  lVar5 = *plVar9;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_40 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
  }
  plVar11 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_30 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
  }
  if (lVar5 == lVar4) {
    plVar11 = *(longlong **)(lVar10 + 0x78);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar11 + 8))();
      }
    }
    *(undefined8 *)(lVar10 + 0x78) = 0;
    *(undefined8 *)(lVar10 + 0x70) = 0;
LAB_1403a31bf:
    if ((*(longlong **)(lVar10 + 0xd8) != (longlong *)0x0) &&
       (cVar7 = (**(code **)(**(longlong **)(lVar10 + 0xd8) + 0x168))(), cVar7 != '\0')) {
      lVar10 = (**(code **)(**(longlong **)(lVar10 + 0xd8) + 0xe0))();
      *(undefined1 *)(lVar10 + 0x140) = 0;
    }
  }
  goto joined_r0x0001403a2f74;
}

