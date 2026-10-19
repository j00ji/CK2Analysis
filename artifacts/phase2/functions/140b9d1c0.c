
void FUN_140b9d1c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  ulonglong *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong local_30;
  longlong *local_28;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (*(char *)(param_1 + 0x220) != '\0') {
    *(undefined1 *)(param_1 + 0x220) = 0;
    if ((*(longlong *)(param_1 + 0x78) == 0) || (*(int *)(*(longlong *)(param_1 + 0x78) + 8) == 0))
    {
      if ((*(longlong *)(param_1 + 0x68) != 0) && (*(int *)(*(longlong *)(param_1 + 0x68) + 8) != 0)
         ) {
        plVar4 = (longlong *)FUN_140b99ce0(param_1,local_20,param_3,param_4,0xfffffffffffffffe);
        lVar5 = *(longlong *)(*plVar4 + 0x10);
        for (plVar10 = *(longlong **)(lVar5 + 0x30); plVar10 != (longlong *)0x0;
            plVar10 = (longlong *)plVar10[2]) {
          if (*plVar10 == param_1) {
            if (plVar10 != (longlong *)0x0) goto LAB_140b9d3ce;
            break;
          }
        }
        lVar5 = *(longlong *)(*plVar4 + 0x18);
LAB_140b9d3ce:
        FUN_1403a3680(lVar5,param_1);
        if (local_18 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_18 + 1;
          lVar5 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_18)(local_18);
            LOCK();
            piVar1 = (int *)((longlong)local_18 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_18 + 8))(local_18);
            }
          }
        }
        *(undefined1 *)(param_1 + 0x221) = 1;
      }
    }
    else {
      FUN_140b99c30(param_1,&local_30);
      lVar8 = local_30;
      FUN_1403b6c40(local_30,param_1,0);
      lVar5 = DAT_1416e3260;
      plVar10 = local_28;
      if (*(int *)(*(longlong *)(lVar8 + 0x10) + 0x40) == 0) {
        iVar6 = 0;
        puVar7 = (ulonglong *)(DAT_1416e3260 + 0x260);
        if (0 < (int)((longlong)(*(longlong *)(DAT_1416e3260 + 0x268) - *puVar7) >> 4)) {
          plVar4 = (longlong *)*puVar7;
          do {
            if (*plVar4 == lVar8) goto LAB_140b9d330;
            iVar6 = iVar6 + 1;
            plVar4 = plVar4 + 2;
          } while (iVar6 < (int)((longlong)(*(longlong *)(DAT_1416e3260 + 0x268) - *puVar7) >> 4));
        }
        plVar10 = *(longlong **)(DAT_1416e3260 + 0x268);
        if ((&local_30 < plVar10) && (plVar4 = (longlong *)*puVar7, plVar4 <= &local_30)) {
          if (plVar10 == *(longlong **)(DAT_1416e3260 + 0x270)) {
            FUN_1403be2f0(puVar7);
          }
          puVar2 = *(undefined8 **)(lVar5 + 0x268);
          puVar9 = (undefined8 *)
                   (((longlong)&local_30 - (longlong)plVar4 & 0xfffffffffffffff0U) + *puVar7);
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0;
            puVar2[1] = 0;
            lVar8 = puVar9[1];
            uVar3 = *puVar9;
            if (lVar8 != 0) {
              LOCK();
              piVar1 = (int *)(lVar8 + 8);
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            FUN_14026d370(puVar2,uVar3);
          }
          *(longlong *)(lVar5 + 0x268) = *(longlong *)(lVar5 + 0x268) + 0x10;
          plVar10 = local_28;
        }
        else {
          if (plVar10 == *(longlong **)(DAT_1416e3260 + 0x270)) {
            FUN_1403be2f0(puVar7);
          }
          plVar10 = local_28;
          puVar2 = *(undefined8 **)(lVar5 + 0x268);
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0;
            puVar2[1] = 0;
            if (local_28 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_28 + 1) = (int)local_28[1] + 1;
              UNLOCK();
              lVar8 = local_30;
            }
            FUN_14026d370(puVar2,lVar8,local_28);
          }
          *(longlong *)(lVar5 + 0x268) = *(longlong *)(lVar5 + 0x268) + 0x10;
        }
      }
LAB_140b9d330:
      plVar4 = local_28;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar10 + 1;
        lVar5 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_28 + 8))();
          }
        }
      }
    }
  }
  return;
}

