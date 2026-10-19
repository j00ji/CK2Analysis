
undefined8 FUN_140ba7380(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  bool bVar16;
  char local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0xf0);
  uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x80) + 0xe8);
  if (*(char *)(lVar7 + 100) != '\0') {
    uVar1 = *(undefined2 *)(lVar7 + 0x52);
  }
  uVar2 = *(undefined2 *)(param_2 + 0xe8);
  if (*(char *)(*(longlong *)(param_2 + 0xf0) + 100) == '\0') {
    if (*(char *)(*(longlong *)(param_2 + 0xf0) + 0x6b) != '\0') {
      uVar15 = DAT_1416e2360;
      if (*(longlong *)(param_1 + 0x170) == 0) {
        lVar7 = FUN_1400d3090(param_1 + 0x168);
        *(longlong *)(param_1 + 0x160) = lVar7;
        *(longlong *)(param_1 + 0x170) = lVar7;
        if (lVar7 == 0) {
          *(undefined8 *)(param_1 + 0x170) = uVar15;
        }
      }
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x168) + 0xba0) == '\0') {
        return 0;
      }
      if (*(longlong *)(param_1 + 0x170) == 0) {
        lVar7 = FUN_1400d3090(param_1 + 0x168);
        *(longlong *)(param_1 + 0x160) = lVar7;
        *(longlong *)(param_1 + 0x170) = lVar7;
        if (lVar7 == 0) {
          *(undefined8 *)(param_1 + 0x170) = uVar15;
        }
      }
      piVar8 = (int *)FUN_140935d10(param_2,local_res8,*(undefined8 *)(param_1 + 0x170));
      if (DAT_1416e2ad0 < *piVar8) {
        return 0;
      }
    }
    cVar3 = FUN_140823160(DAT_1416e32d8,uVar1,uVar2);
    if ((cVar3 != '\0') &&
       ((*(char *)(*(longlong *)(param_2 + 0xf0) + 100) == '\0' ||
        (*(char *)(param_2 + 0xdaa) == '\0')))) {
      return 1;
    }
    return 0;
  }
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0xd48) + 0x498) + 0x1e9) & 2) == 0) {
    return 0;
  }
  if (*(longlong *)(param_2 + 0xd68) == 0) {
    return 0;
  }
  puVar11 = *(uint **)(param_2 + 0xce8);
LAB_140ba7410:
  do {
    do {
      if ((puVar11 < *(uint **)(param_2 + 0xce8)) || (*(uint **)(param_2 + 0xcf0) <= puVar11)) {
        return 0;
      }
      puVar12 = puVar11 + 1;
      plVar13 = DAT_1418d6ab0;
      if (((DAT_1418d6ab8 != 0) && ((*puVar11 & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
         (plVar13 = *(longlong **)
                     (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                     (ulonglong)(*puVar11 & 0xffffff) * 0x10), plVar13 == (longlong *)0x0)) {
        plVar13 = DAT_1418d6ab0;
      }
      cVar3 = (**(code **)(plVar13[2] + 8))();
      puVar11 = puVar12;
    } while (cVar3 == '\0');
    lVar7 = plVar13[7];
    if ((*(byte *)(lVar7 + 0x1e9) & 2) == 0) {
      if (*(code **)(*plVar13 + 0x30) == (code *)&LAB_1403827a0) {
        if (((*(int *)((longlong)plVar13 + 0x2c) - 3U & 0xfffffffa) != 0) ||
           (*(int *)((longlong)plVar13 + 0x2c) == 4)) {
LAB_140ba75a3:
          lVar7 = *(longlong *)(plVar13[6] + 0x498);
          goto LAB_140ba74bd;
        }
      }
      else {
        cVar3 = (**(code **)(*plVar13 + 0x30))();
        if (cVar3 == '\0') goto LAB_140ba75a3;
      }
      lVar7 = plVar13[8];
    }
LAB_140ba74bd:
    uVar15 = DAT_1416e2360;
    if (*(longlong *)(param_1 + 0x170) == 0) {
      lVar5 = FUN_1400d3090();
      *(longlong *)(param_1 + 0x160) = lVar5;
      *(longlong *)(param_1 + 0x170) = lVar5;
      if (lVar5 == 0) {
        *(undefined8 *)(param_1 + 0x170) = uVar15;
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x170);
    if (lVar7 != lVar5) {
      if (lVar5 == 0) {
        lVar5 = FUN_1400d3090();
        *(longlong *)(param_1 + 0x160) = lVar5;
        *(longlong *)(param_1 + 0x170) = lVar5;
        if (lVar5 == 0) {
          *(undefined8 *)(param_1 + 0x170) = uVar15;
        }
      }
      lVar5 = *(longlong *)(param_1 + 0x170);
      if (lVar7 != lVar5) {
        lVar14 = *(longlong *)(lVar5 + 0x1a8);
        iVar4 = 0;
        do {
          if (lVar14 == lVar7) goto LAB_140ba7741;
          lVar6 = *(longlong *)(lVar14 + 0x1a8);
          if (lVar14 == lVar6) break;
          lVar14 = *(longlong *)(lVar6 + 0x28);
          lVar9 = DAT_1416e3ad0;
          if (((lVar14 != 0) && (*(longlong *)(lVar14 + 0xb0) != 0)) &&
             (lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0xb0) + 8),
             (*(longlong *)(lVar14 + 0x40) - *(longlong *)(lVar14 + 0x38) & 0xfffffffffffffff8U) !=
             0)) {
            lVar9 = **(longlong **)(lVar14 + 0x38);
          }
          bVar16 = iVar4 < *(int *)(lVar9 + 0x3f0);
          lVar14 = lVar6;
          iVar4 = *(int *)(lVar9 + 0x3f0);
        } while (bVar16);
      }
      lVar14 = DAT_1416e3ad0;
      if (lVar5 == 0) {
        lVar5 = FUN_1400d3090();
        *(longlong *)(param_1 + 0x160) = lVar5;
        *(longlong *)(param_1 + 0x170) = lVar5;
        if (lVar5 == 0) {
          *(undefined8 *)(param_1 + 0x170) = uVar15;
        }
      }
      lVar5 = *(longlong *)(param_1 + 0x170);
      if (lVar5 != lVar7) {
        lVar6 = *(longlong *)(lVar7 + 0x1a8);
        iVar4 = 0;
        do {
          if (lVar6 == lVar5) goto LAB_140ba7741;
          lVar9 = *(longlong *)(lVar6 + 0x1a8);
          if (lVar6 == lVar9) break;
          lVar6 = *(longlong *)(lVar9 + 0x28);
          lVar10 = lVar14;
          if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0xb0) != 0)) &&
             (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0xb0) + 8),
             (*(longlong *)(lVar6 + 0x40) - *(longlong *)(lVar6 + 0x38) & 0xfffffffffffffff8U) != 0)
             ) {
            lVar10 = **(longlong **)(lVar6 + 0x38);
          }
          bVar16 = iVar4 < *(int *)(lVar10 + 0x3f0);
          lVar6 = lVar9;
          iVar4 = *(int *)(lVar10 + 0x3f0);
        } while (bVar16);
      }
      if ((*(longlong *)(lVar7 + 0x28) == 0) ||
         (lVar14 = *(longlong *)(*(longlong *)(lVar7 + 0x28) + 0x108), lVar14 == 0)) {
        lVar14 = *(longlong *)(lVar7 + 0x1a8);
        iVar4 = 0;
        lVar6 = *(longlong *)(lVar14 + 0x1a8);
        if (lVar14 != *(longlong *)(lVar14 + 0x1a8)) {
          do {
            lVar9 = lVar6;
            if (4 < iVar4) break;
            iVar4 = iVar4 + 1;
            lVar6 = *(longlong *)(lVar9 + 0x1a8);
            lVar14 = lVar9;
          } while (lVar9 != *(longlong *)(lVar9 + 0x1a8));
        }
      }
      if (lVar5 == 0) {
        lVar5 = FUN_1400d3090();
        *(longlong *)(param_1 + 0x160) = lVar5;
        *(longlong *)(param_1 + 0x170) = lVar5;
        if (lVar5 == 0) {
          *(undefined8 *)(param_1 + 0x170) = uVar15;
        }
      }
      lVar5 = *(longlong *)(param_1 + 0x170);
      if ((*(longlong *)(lVar5 + 0x28) == 0) ||
         (lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x28) + 0x108), lVar6 == 0)) {
        lVar6 = *(longlong *)(lVar5 + 0x1a8);
        iVar4 = 0;
        lVar9 = *(longlong *)(lVar6 + 0x1a8);
        if (lVar6 != *(longlong *)(lVar6 + 0x1a8)) {
          do {
            if (4 < iVar4) break;
            iVar4 = iVar4 + 1;
            bVar16 = lVar9 != *(longlong *)(lVar9 + 0x1a8);
            lVar6 = lVar9;
            lVar9 = *(longlong *)(lVar9 + 0x1a8);
          } while (bVar16);
        }
      }
      if (lVar14 != lVar6) goto LAB_140ba7410;
    }
LAB_140ba7741:
    if (lVar5 == 0) {
      lVar5 = FUN_1400d3090(param_1 + 0x168);
      *(longlong *)(param_1 + 0x160) = lVar5;
      *(longlong *)(param_1 + 0x170) = lVar5;
      if (lVar5 == 0) {
        *(undefined8 *)(param_1 + 0x170) = uVar15;
      }
    }
    local_res8[0] = '\0';
    FUN_14025d050(lVar7,*(undefined8 *)(param_1 + 0x170),local_res8,local_res10,local_res18);
    if (local_res8[0] == '\0') {
      return 1;
    }
  } while( true );
}

