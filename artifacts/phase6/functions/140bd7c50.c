
void FUN_140bd7c50(longlong param_1)

{
  int *piVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  int iVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar16;
  longlong *plVar17;
  int *piVar18;
  int *piVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined8 local_res8;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  int *local_38;
  int *piStack_30;
  longlong local_28;
  longlong *plVar15;
  
  if ((*(int *)(param_1 + 0x40) == 0) && (*(int *)(param_1 + 0x44) == 0)) {
    local_38 = (int *)0x0;
    piStack_30 = (int *)0x0;
    plVar21 = (longlong *)0x0;
    local_28 = 0;
    lVar20 = *(longlong *)(param_1 + 0x38);
    if (1 < *(int *)(lVar20 + 0x48)) {
      plVar17 = plVar21;
      for (plVar13 = *(longlong **)(lVar20 + 0x38); plVar13 != (longlong *)0x0;
          plVar13 = (longlong *)plVar13[2]) {
        lVar8 = *plVar13;
        plVar17 = (longlong *)
                  (ulonglong)
                  (uint)((int)plVar17 +
                        *(int *)(lVar8 + 0xa8) + *(int *)(lVar8 + 0xac) + *(int *)(lVar8 + 0xb0) +
                        *(int *)(lVar8 + 0xb4) + *(int *)(lVar8 + 0xb8) + *(int *)(lVar8 + 0xbc) +
                        *(int *)(lVar8 + 0xc0) + *(int *)(lVar8 + 0xc4));
      }
      plVar13 = (longlong *)(lVar20 + 0x38);
      if (lVar20 == 0) {
        plVar13 = plVar21;
      }
      plVar13 = (longlong *)*plVar13;
      plVar15 = plVar21;
      do {
        if (plVar13 == (longlong *)0x0) goto LAB_140bd7eb1;
        if ((int)plVar17 < (int)plVar15) goto LAB_140bd7eb1;
        lVar20 = *plVar13;
        plVar13 = (longlong *)plVar13[2];
        iVar12 = *(int *)(lVar20 + 0xa8) + *(int *)(lVar20 + 0xac) + *(int *)(lVar20 + 0xb0) +
                 *(int *)(lVar20 + 0xb4) + *(int *)(lVar20 + 0xb8) + *(int *)(lVar20 + 0xbc) +
                 *(int *)(lVar20 + 0xc0) + *(int *)(lVar20 + 0xc4);
        uVar4 = (ulonglong)local_res8 >> 0x20;
        local_res8 = (void *)CONCAT44((int)uVar4,*(undefined4 *)(lVar20 + 0x14));
        FUN_14011d6b0(&local_38,&local_res8);
        uVar16 = (int)plVar17 - iVar12;
        plVar17 = (longlong *)(ulonglong)uVar16;
        uVar14 = (int)plVar15 + iVar12;
        plVar15 = (longlong *)(ulonglong)uVar14;
      } while ((int)uVar14 <= (int)uVar16);
      plVar13 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x38);
      if (*(longlong *)(param_1 + 0x38) == 0) {
        plVar13 = plVar21;
      }
      plVar13 = (longlong *)*plVar13;
      piVar18 = piStack_30;
      piVar19 = local_38;
      if (plVar13 != (longlong *)0x0) {
LAB_140bd7dc0:
        iVar12 = (int)plVar17;
        if (iVar12 < (int)plVar15) {
          lVar20 = *plVar13;
          plVar13 = (longlong *)plVar13[2];
          iVar6 = *(int *)(lVar20 + 0xa8) + *(int *)(lVar20 + 0xac) + *(int *)(lVar20 + 0xb0) +
                  *(int *)(lVar20 + 0xb4) + *(int *)(lVar20 + 0xb8) + *(int *)(lVar20 + 0xbc) +
                  *(int *)(lVar20 + 0xc0) + *(int *)(lVar20 + 0xc4);
          for (piVar11 = piVar19; piVar11 != piVar18; piVar11 = piVar11 + 1) {
            if (*piVar11 == *(int *)(lVar20 + 0x14)) {
              if ((piVar11 != piVar18) && (uVar14 = (int)plVar15 - iVar6, iVar12 < (int)uVar14)) {
                plVar17 = (longlong *)(ulonglong)(uint)(iVar12 + iVar6);
                plVar15 = (longlong *)(ulonglong)uVar14;
                piVar11 = piVar19;
                goto LAB_140bd7e40;
              }
              break;
            }
          }
          goto LAB_140bd7ea8;
        }
      }
    }
LAB_140bd7eb1:
    pvVar7 = operator_new(0xb8);
    lVar20 = *(longlong *)(param_1 + 0x38);
    local_res8 = pvVar7;
    if (*(longlong *)(lVar20 + 0x170) == 0) {
      lVar8 = FUN_1400d3090(lVar20 + 0x168);
      *(longlong *)(lVar20 + 0x160) = lVar8;
      *(longlong *)(lVar20 + 0x170) = lVar8;
      if (lVar8 == 0) {
        *(undefined8 *)(lVar20 + 0x170) = DAT_1416e2360;
      }
    }
    local_50 = *(longlong *)(lVar20 + 0x170);
    local_48 = *(undefined4 *)(local_50 + 0x10);
    local_44 = *(undefined4 *)(local_50 + 0x14);
    plVar21 = *(longlong **)(param_1 + 0x38);
    uVar2 = *(undefined1 *)((longlong)plVar21 + 0x157);
    uVar3 = *(undefined2 *)(plVar21[0x10] + 0xe8);
    uVar5 = (**(code **)(*plVar21 + 0x70))();
    uVar9 = FUN_1403f7aa0(pvVar7,&local_50,uVar3,uVar5,0,&local_38,uVar2,0);
    plVar21 = *(longlong **)(param_1 + 0x48);
    if (*(code **)(*plVar21 + 0xe0) == (code *)&LAB_14064e820) {
      uVar10 = *(undefined8 *)(plVar21[0x6d] + 0x218);
    }
    else {
      uVar10 = (**(code **)(*plVar21 + 0xe0))(plVar21);
    }
    FUN_140c3d960(uVar10,uVar9);
    if (local_38 != (int *)0x0) {
      FUN_1400b0c40(&local_38,local_38,local_28 - (longlong)local_38 >> 2);
    }
  }
  return;
  while (piVar11 = piVar11 + 1, piVar11 != piVar18) {
LAB_140bd7e40:
    if (*piVar11 == *(int *)(lVar20 + 0x14)) break;
  }
  if (((3 < (ulonglong)((longlong)piVar18 - (longlong)piVar19)) && (piVar19 <= piVar11)) &&
     (piVar11 < piVar18)) {
    piVar1 = piVar18 + -1;
    if (piVar11 == piVar1) {
      if (3 < (ulonglong)((longlong)piVar18 - (longlong)piVar19)) {
        piVar18 = piVar1;
        piStack_30 = piVar1;
      }
    }
    else {
      FUN_140e3b2e0(piVar11,piVar11 + 1,(longlong)piVar18 - (longlong)(piVar11 + 1));
      piVar18 = piStack_30;
      piVar19 = local_38;
      if (3 < (ulonglong)((longlong)piStack_30 - (longlong)local_38)) {
        piVar18 = piStack_30 + -1;
        piStack_30 = piVar18;
      }
    }
  }
LAB_140bd7ea8:
  if (plVar13 == (longlong *)0x0) goto LAB_140bd7eb1;
  goto LAB_140bd7dc0;
}

