
/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_1403a8bb0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 auStack_110 [5];
  undefined1 local_e8 [88];
  undefined **local_90 [11];
  
  uVar16 = 0;
  iVar18 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x40);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x30);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x40);
  plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x30);
  lVar1 = (longlong)(iVar2 + iVar18) * 8;
  uVar9 = lVar1 + 0x17;
  if (uVar9 <= lVar1 + 8U) {
    uVar9 = 0xffffffffffffff0;
  }
  auStack_110[0] = 0x1403a8c26;
  lVar1 = -(uVar9 & 0xfffffffffffffff0);
  *(undefined4 *)(local_e8 + lVar1) = 0xa110ca7e;
  *(undefined4 *)(local_e8 + (longlong)(iVar2 + iVar18) * 8 + lVar1 + 4) = 0xa110ca7e;
  uVar9 = uVar16;
  uVar13 = uVar16;
  uVar17 = uVar16;
  while (iVar18 = (int)uVar9, plVar3 != (longlong *)0x0) {
    plVar4 = (longlong *)plVar3[2];
    lVar14 = *plVar3;
    if (lVar14 == 0) {
LAB_1403a8ca8:
      bVar7 = false;
    }
    else {
      *(undefined8 *)((longlong)auStack_110 + lVar1) = 0x1403a8c6f;
      lVar10 = FUN_140ba47e0(lVar14,local_e8,1);
      uVar13 = 1;
      if (*(int *)(lVar10 + 0x10) + *(int *)(lVar10 + 0x14) + *(int *)(lVar10 + 0x18) +
          *(int *)(lVar10 + 0x1c) + *(int *)(lVar10 + 0x20) + *(int *)(lVar10 + 0x24) +
          *(int *)(lVar10 + 0x28) + *(int *)(lVar10 + 0x2c) != 0) goto LAB_1403a8ca8;
      uVar11 = uVar16;
      if (0 < (longlong)uVar17) {
        do {
          if (*(longlong *)(local_e8 + uVar11 * 8 + lVar1 + 4) == lVar14) goto LAB_1403a8ca8;
          uVar11 = uVar11 + 1;
        } while ((longlong)uVar11 < (longlong)uVar17);
      }
      bVar7 = true;
    }
    if (uVar13 != 0) {
      uVar13 = 0;
      local_e8._0_8_ = &PTR_FUN_141065928;
    }
    plVar3 = plVar4;
    if (bVar7) {
      uVar9 = (ulonglong)(iVar18 + 1);
      *(longlong *)(local_e8 + uVar17 * 8 + lVar1 + 4) = lVar14;
      uVar17 = uVar17 + 1;
    }
  }
  bVar7 = false;
  if (plVar15 != (longlong *)0x0) {
    lVar14 = (longlong)iVar18;
    do {
      plVar3 = (longlong *)plVar15[2];
      lVar10 = *plVar15;
      if (lVar10 == 0) {
LAB_1403a8d57:
        bVar8 = false;
      }
      else {
        *(undefined8 *)((longlong)auStack_110 + lVar1) = 0x1403a8d1e;
        lVar12 = FUN_140ba47e0(lVar10,local_90,1);
        bVar7 = true;
        if (*(int *)(lVar12 + 0x10) + *(int *)(lVar12 + 0x14) + *(int *)(lVar12 + 0x18) +
            *(int *)(lVar12 + 0x1c) + *(int *)(lVar12 + 0x20) + *(int *)(lVar12 + 0x24) +
            *(int *)(lVar12 + 0x28) + *(int *)(lVar12 + 0x2c) != 0) goto LAB_1403a8d57;
        uVar13 = uVar16;
        if (0 < lVar14) {
          do {
            if (*(longlong *)(local_e8 + uVar13 * 8 + lVar1 + 4) == lVar10) goto LAB_1403a8d57;
            uVar13 = uVar13 + 1;
          } while ((longlong)uVar13 < lVar14);
        }
        bVar8 = true;
      }
      if (bVar7) {
        bVar7 = false;
        local_90[0] = &PTR_FUN_141065928;
      }
      if (bVar8) {
        uVar9 = (ulonglong)((int)uVar9 + 1);
        *(longlong *)(local_e8 + lVar14 * 8 + lVar1 + 4) = lVar10;
        lVar14 = lVar14 + 1;
      }
      iVar18 = (int)uVar9;
      plVar15 = plVar3;
    } while (plVar3 != (longlong *)0x0);
  }
  if (0 < iVar18) {
    do {
      uVar5 = *(undefined8 *)(local_e8 + uVar16 * 8 + lVar1 + 4);
      *(undefined8 *)((longlong)auStack_110 + lVar1) = 0x1403a8da4;
      FUN_140786dc0(DAT_1416e3260,uVar5,0);
      uVar16 = uVar16 + 1;
    } while ((longlong)uVar16 < (longlong)iVar18);
  }
  pcVar6 = *(code **)(*DAT_1416e3260 + 0x18);
  *(undefined8 *)((longlong)auStack_110 + lVar1) = 0x1403a8db9;
  (*pcVar6)();
  return;
}

