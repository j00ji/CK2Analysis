
undefined4 FUN_1403bb1a0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  longlong *local_50;
  longlong *local_48;
  uint *local_40;
  uint *local_30;
  
  cVar5 = (**(code **)(*param_3 + 0x68))(param_3);
  if ((cVar5 == '\0') ||
     (lVar7 = (**(code **)(*param_3 + 0x50))(param_3), *(longlong *)(lVar7 + 0x230) != 0)) {
    return 0;
  }
  FUN_140938780(param_2,&local_50);
  if ((local_50 != (longlong *)0x0) &&
     (cVar5 = (**(code **)(*local_50 + 0x80))(local_50,param_3), cVar5 != '\0')) {
    uVar6 = (**(code **)(*local_50 + 0x60))(local_50);
    goto LAB_1403bb53d;
  }
  lVar7 = DAT_1418d6ab0;
  if (((DAT_1418d6ab8 != 0) &&
      (uVar10 = *(uint *)(param_2 + 0xd28) & 0xffffff, uVar10 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
     (lVar7 = *(longlong *)(*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar10 * 0x10),
     lVar7 == 0)) {
    lVar7 = DAT_1418d6ab0;
  }
  cVar5 = (**(code **)(*(longlong *)(lVar7 + 0x10) + 8))();
  if (cVar5 == '\0') {
LAB_1403bb329:
    local_40 = *(uint **)(param_2 + 0xce8);
    puVar8 = local_40;
    do {
      do {
        do {
          if ((puVar8 < *(uint **)(param_2 + 0xce8)) || (*(uint **)(param_2 + 0xcf0) <= puVar8)) {
            lVar7 = DAT_1418d6ab0;
            if ((DAT_1418d6ab8 != 0) &&
               ((uVar10 = *(uint *)(param_2 + 0xd1c) & 0xffffff,
                uVar10 < *(uint *)(DAT_1418d6ab8 + 0x28) &&
                (lVar7 = *(longlong *)
                          (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar10 * 0x10),
                lVar7 == 0)))) {
              lVar7 = DAT_1418d6ab0;
            }
            cVar5 = (**(code **)(*(longlong *)(lVar7 + 0x10) + 8))();
            if (cVar5 != '\0') {
              lVar7 = DAT_1418d6ab0;
              if (((DAT_1418d6ab8 != 0) &&
                  (uVar10 = *(uint *)(param_2 + 0xd1c) & 0xffffff,
                  uVar10 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
                 (lVar7 = *(longlong *)
                           (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar10 * 0x10),
                 lVar7 == 0)) {
                lVar7 = DAT_1418d6ab0;
              }
              if (*(longlong *)(lVar7 + 0xcc8) != 0) {
                lVar7 = DAT_1418d6ab0;
                if (((DAT_1418d6ab8 != 0) &&
                    (uVar10 = *(uint *)(param_2 + 0xd1c) & 0xffffff,
                    uVar10 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
                   (lVar7 = *(longlong *)
                             (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar10 * 0x10),
                   lVar7 == 0)) {
                  lVar7 = DAT_1418d6ab0;
                }
                cVar5 = (**(code **)(**(longlong **)(lVar7 + 0xcc8) + 0x80))
                                  (*(longlong **)(lVar7 + 0xcc8),param_3);
                if (cVar5 != '\0') goto LAB_1403bb538;
              }
            }
            plVar4 = local_48;
            if (local_48 == (longlong *)0x0) {
              return 0;
            }
            LOCK();
            plVar1 = local_48 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 != 1) {
              return 0;
            }
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 != 1) {
              return 0;
            }
            (**(code **)(*local_48 + 8))();
            return 0;
          }
          puVar9 = puVar8 + 1;
          uVar10 = *puVar8;
          lVar7 = DAT_1418d6ab0;
          if (((DAT_1418d6ab8 != 0) && ((uVar10 & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
             (lVar7 = *(longlong *)
                       (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                       (ulonglong)(uVar10 & 0xffffff) * 0x10), lVar7 == 0)) {
            lVar7 = DAT_1418d6ab0;
          }
          local_40 = puVar9;
          local_30 = puVar8;
          cVar5 = (**(code **)(*(longlong *)(lVar7 + 0x10) + 8))();
          puVar8 = puVar9;
        } while (cVar5 == '\0');
        lVar7 = DAT_1418d6ab0;
        if (((DAT_1418d6ab8 != 0) && ((uVar10 & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
           (lVar7 = *(longlong *)
                     (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                     (ulonglong)(uVar10 & 0xffffff) * 0x10), lVar7 == 0)) {
          lVar7 = DAT_1418d6ab0;
        }
      } while (*(longlong *)(lVar7 + 0xcc8) == 0);
      lVar7 = DAT_1418d6ab0;
      if (((DAT_1418d6ab8 != 0) && ((uVar10 & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
         (lVar7 = *(longlong *)
                   (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)(uVar10 & 0xffffff) * 0x10)
         , lVar7 == 0)) {
        lVar7 = DAT_1418d6ab0;
      }
      cVar5 = (**(code **)(**(longlong **)(lVar7 + 0xcc8) + 0x80))
                        (*(longlong **)(lVar7 + 0xcc8),param_3);
    } while (cVar5 == '\0');
  }
  else {
    lVar7 = DAT_1418d6ab0;
    if (((DAT_1418d6ab8 != 0) &&
        (uVar10 = *(uint *)(param_2 + 0xd28) & 0xffffff, uVar10 < *(uint *)(DAT_1418d6ab8 + 0x28)))
       && (lVar7 = *(longlong *)(*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar10 * 0x10)
          , lVar7 == 0)) {
      lVar7 = DAT_1418d6ab0;
    }
    if (*(longlong *)(lVar7 + 0xcc8) == 0) goto LAB_1403bb329;
    lVar7 = DAT_1418d6ab0;
    if (((DAT_1418d6ab8 != 0) &&
        (uVar10 = *(uint *)(param_2 + 0xd28) & 0xffffff, uVar10 < *(uint *)(DAT_1418d6ab8 + 0x28)))
       && (lVar7 = *(longlong *)(*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar10 * 0x10)
          , lVar7 == 0)) {
      lVar7 = DAT_1418d6ab0;
    }
    cVar5 = (**(code **)(**(longlong **)(lVar7 + 0xcc8) + 0x80))
                      (*(longlong **)(lVar7 + 0xcc8),param_3);
    if (cVar5 == '\0') goto LAB_1403bb329;
  }
LAB_1403bb538:
  uVar6 = 3;
LAB_1403bb53d:
  plVar4 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_48 + 8))();
      }
    }
  }
  return uVar6;
}

