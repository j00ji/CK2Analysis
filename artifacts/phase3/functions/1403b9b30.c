
void FUN_1403b9b30(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong **pplVar3;
  longlong **pplVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong *plVar18;
  bool bVar19;
  undefined8 uVar20;
  longlong *local_40;
  longlong *local_38;
  
  uVar20 = 0xfffffffffffffffe;
  uVar13 = 0;
  plVar6 = *(longlong **)(param_1 + 0x18);
  uVar17 = uVar13;
  do {
    while( true ) {
      if (plVar6 == (longlong *)0x0) {
        if (0 < (int)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 4)) {
          do {
            FUN_1403bd500(param_1,(longlong)(int)uVar13 * 0x10 + *(longlong *)(param_1 + 0x30));
            uVar12 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar12;
          } while ((int)uVar12 <
                   (int)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 4));
        }
        lVar5 = *(longlong *)(param_1 + 0x38);
        lVar14 = *(longlong *)(param_1 + 0x30);
        if (lVar14 == lVar5) {
          *(longlong *)(param_1 + 0x38) = lVar14;
        }
        else {
          do {
            plVar6 = *(longlong **)(lVar14 + 8);
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar16 = plVar6 + 1;
              lVar7 = *plVar16;
              *(int *)plVar16 = (int)*plVar16 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                iVar9 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*plVar6 + 8))(plVar6);
                }
              }
            }
            lVar14 = lVar14 + 0x10;
          } while (lVar14 != lVar5);
          *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
        }
        return;
      }
      plVar16 = (longlong *)plVar6[3];
      plVar2 = (longlong *)plVar6[1];
      plVar18 = (longlong *)*plVar6;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      bVar19 = false;
      iVar9 = (int)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 4);
      uVar11 = uVar13;
      uVar15 = uVar13;
      local_40 = plVar18;
      local_38 = plVar2;
      plVar6 = plVar16;
      if (0 < iVar9) break;
LAB_1403b9bf2:
      cVar8 = (**(code **)(*plVar18 + 0x78))(plVar18,param_2,uVar15,(longlong)iVar9,uVar20);
      if (cVar8 != '\0') {
        if (0 < (int)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 4)) {
          puVar10 = *(undefined8 **)(param_1 + 0x30);
          uVar11 = uVar13;
          do {
            if ((longlong *)*puVar10 == plVar18) goto LAB_1403b9cd5;
            uVar12 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar12;
            puVar10 = puVar10 + 2;
          } while ((int)uVar12 <
                   (int)(*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30) >> 4));
        }
        pplVar3 = *(longlong ***)(param_1 + 0x38);
        if ((&local_40 < pplVar3) &&
           (pplVar4 = *(longlong ***)(param_1 + 0x30), pplVar4 <= &local_40)) {
          if (pplVar3 == *(longlong ***)(param_1 + 0x40)) {
            FUN_1403be2f0(param_1 + 0x30);
          }
          puVar10 = *(undefined8 **)(param_1 + 0x38);
          plVar18 = (longlong *)
                    (((longlong)&local_40 - (longlong)pplVar4 & 0xfffffffffffffff0U) +
                    *(longlong *)(param_1 + 0x30));
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = 0;
            puVar10[1] = 0;
            plVar16 = (longlong *)plVar18[1];
            plVar18 = (longlong *)*plVar18;
            if (plVar16 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
              UNLOCK();
            }
LAB_1403b9ccb:
            FUN_14026d370(puVar10,plVar18,plVar16);
          }
        }
        else {
          if (pplVar3 == *(longlong ***)(param_1 + 0x40)) {
            FUN_1403be2f0(param_1 + 0x30);
          }
          puVar10 = *(undefined8 **)(param_1 + 0x38);
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = 0;
            puVar10[1] = 0;
            plVar16 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
              UNLOCK();
            }
            goto LAB_1403b9ccb;
          }
        }
        *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 0x10;
      }
LAB_1403b9cd5:
      iVar9 = (int)uVar17;
      if (iVar9 == (iVar9 / 100) * 100) {
        FUN_140789fb0(DAT_1416e3260,0);
      }
      uVar17 = (ulonglong)(iVar9 + 1);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar2 + 1;
        iVar9 = (int)*plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
joined_r0x0001403b9d10:
        if (iVar9 == 1) {
          (**(code **)*plVar2)();
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar2 + 8))();
          }
        }
      }
    }
    do {
      if (bVar19) goto LAB_1403b9bd3;
      bVar19 = *(longlong **)(uVar11 + *(longlong *)(param_1 + 0x30)) == plVar18;
      uVar15 = uVar15 + 1;
      uVar11 = uVar11 + 0x10;
    } while ((longlong)uVar15 < (longlong)iVar9);
    if (!bVar19) goto LAB_1403b9bf2;
LAB_1403b9bd3:
  } while (plVar2 == (longlong *)0x0);
  LOCK();
  plVar16 = plVar2 + 1;
  iVar9 = (int)*plVar16;
  *(int *)plVar16 = (int)*plVar16 + -1;
  UNLOCK();
  goto joined_r0x0001403b9d10;
}

