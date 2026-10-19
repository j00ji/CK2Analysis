
longlong FUN_14025d050(longlong param_1,longlong param_2,char *param_3,undefined1 *param_4,
                      undefined4 *param_5)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  int iVar13;
  bool bVar14;
  
  iVar13 = 0;
  *param_5 = 0;
  cVar12 = '\0';
  *param_4 = 0;
  lVar10 = DAT_1416e2360;
  lVar5 = *(longlong *)(param_1 + 0x28);
  if (((lVar5 == 0) || (param_2 == param_1)) || ((*(byte *)(param_2 + 0x1e9) & 2) == 0)) {
    *param_3 = '\0';
    return DAT_1416e2360;
  }
  lVar8 = *(longlong *)(param_2 + 0x1a8);
  lVar11 = lVar8;
  iVar1 = iVar13;
  do {
    if (lVar11 == param_1) goto LAB_14025d3fe;
    lVar9 = *(longlong *)(lVar11 + 0x1a8);
    if (lVar11 == lVar9) break;
    lVar11 = *(longlong *)(lVar9 + 0x28);
    lVar6 = DAT_1416e3ad0;
    if (((lVar11 != 0) && (*(longlong *)(lVar11 + 0xb0) != 0)) &&
       (lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0xb0) + 8),
       7 < (ulonglong)(*(longlong *)(lVar11 + 0x40) - *(longlong *)(lVar11 + 0x38)))) {
      lVar6 = **(longlong **)(lVar11 + 0x38);
    }
    bVar14 = iVar1 < *(int *)(lVar6 + 0x3f0);
    lVar11 = lVar9;
    iVar1 = *(int *)(lVar6 + 0x3f0);
  } while (bVar14);
  lVar11 = *(longlong *)(param_1 + 0x1a8);
  lVar9 = lVar11;
  iVar1 = iVar13;
  do {
    if (lVar9 == param_2) goto LAB_14025d3fe;
    lVar6 = *(longlong *)(lVar9 + 0x1a8);
    if (lVar9 == lVar6) break;
    lVar9 = *(longlong *)(lVar6 + 0x28);
    lVar7 = DAT_1416e3ad0;
    if (((lVar9 != 0) && (*(longlong *)(lVar9 + 0xb0) != 0)) &&
       (lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0xb0) + 8),
       7 < (ulonglong)(*(longlong *)(lVar9 + 0x40) - *(longlong *)(lVar9 + 0x38)))) {
      lVar7 = **(longlong **)(lVar9 + 0x38);
    }
    bVar14 = iVar1 < *(int *)(lVar7 + 0x3f0);
    lVar9 = lVar6;
    iVar1 = *(int *)(lVar7 + 0x3f0);
  } while (bVar14);
  lVar10 = *(longlong *)(param_2 + 0x28);
  if (lVar10 == 0) {
    *param_3 = '\0';
    return DAT_1416e2360;
  }
  if (*(longlong *)(lVar5 + 0x108) == 0) {
    lVar9 = *(longlong *)(lVar11 + 0x1a8);
    iVar1 = iVar13;
    if (lVar11 != *(longlong *)(lVar11 + 0x1a8)) {
      do {
        lVar6 = lVar9;
        if (4 < iVar1) break;
        iVar1 = iVar1 + 1;
        lVar9 = *(longlong *)(lVar6 + 0x1a8);
        lVar11 = lVar6;
      } while (lVar6 != *(longlong *)(lVar6 + 0x1a8));
    }
  }
  else {
    lVar11 = *(longlong *)(lVar5 + 0x108);
  }
  lVar9 = *(longlong *)(lVar11 + 0x28);
  if (((lVar9 == 0) || (*(longlong *)(lVar9 + 0xb0) == 0)) ||
     (lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0xb0) + 8),
     (ulonglong)(*(longlong *)(lVar9 + 0x40) - *(longlong *)(lVar9 + 0x38)) < 8)) {
    lVar9 = DAT_1416e3ad0;
    if (0 < (int)(*(longlong *)(lVar11 + 0x78) - *(longlong *)(lVar11 + 0x70) >> 3)) {
      lVar9 = **(longlong **)(lVar11 + 0x70);
    }
  }
  else {
    lVar9 = **(longlong **)(lVar9 + 0x38);
  }
  if (*(longlong *)(lVar10 + 0x108) == 0) {
    lVar10 = *(longlong *)(lVar8 + 0x1a8);
    iVar1 = iVar13;
    if (lVar8 != *(longlong *)(lVar8 + 0x1a8)) {
      do {
        lVar11 = lVar10;
        if (4 < iVar1) break;
        iVar1 = iVar1 + 1;
        lVar10 = *(longlong *)(lVar11 + 0x1a8);
        lVar8 = lVar11;
      } while (lVar11 != *(longlong *)(lVar11 + 0x1a8));
    }
  }
  else {
    lVar8 = *(longlong *)(lVar10 + 0x108);
  }
  lVar10 = *(longlong *)(lVar8 + 0x28);
  if (((lVar10 == 0) || (*(longlong *)(lVar10 + 0xb0) == 0)) ||
     (lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0xb0) + 8),
     (ulonglong)(*(longlong *)(lVar10 + 0x40) - *(longlong *)(lVar10 + 0x38)) < 8)) {
    lVar10 = DAT_1416e3ad0;
    if ((int)(*(longlong *)(lVar8 + 0x78) - *(longlong *)(lVar8 + 0x70) >> 3) < 1)
    goto LAB_14025d2c5;
    plVar2 = *(longlong **)(lVar8 + 0x70);
  }
  else {
    plVar2 = *(longlong **)(lVar10 + 0x38);
  }
  lVar10 = *plVar2;
LAB_14025d2c5:
  if ((*(char *)(lVar9 + 0x394) != '\0') || (*(char *)(lVar9 + 0x395) != '\0')) {
    cVar12 = '\x01';
  }
  if ((*(char *)(lVar10 + 0x394) != '\0') || (*(char *)(lVar10 + 0x395) != '\0')) {
    iVar13 = 1;
  }
  if ((cVar12 == (char)iVar13) &&
     (((*(byte *)(lVar10 + 0x9d2) ^ *(byte *)(lVar9 + 0x9d2)) & 0x40) == 0)) {
    if (lVar5 == 0) {
      pvVar3 = operator_new(0xd70);
      uVar4 = FUN_1401b1690(pvVar3,param_1);
      *(undefined8 *)(param_1 + 0x28) = uVar4;
    }
    lVar5 = *(longlong *)(param_1 + 0x28);
    if (*(longlong *)(lVar5 + 0xb0) != 0) {
      if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0xb0) == 0)) {
        FUN_1401b3840(param_1 + 0x20);
      }
      if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0xb0) + 0x1b2) & 1) != 0) &&
         (lVar5 = FUN_140251570(param_1,param_2), lVar5 != 0)) {
        *param_4 = 1;
        *param_3 = '\x01';
        return param_1;
      }
    }
    lVar5 = FUN_14025c100(param_1,param_2,param_3);
    if (*param_3 == '\0') {
      lVar5 = FUN_14025c780(param_1,param_2,param_3,param_4,param_5);
      if (*param_3 == '\0') {
        lVar5 = FUN_14025c920(param_1,param_2,param_3);
        if (*param_3 == '\0') {
          *param_3 = '\0';
          lVar5 = DAT_1416e2360;
        }
        else {
          *param_5 = 1;
        }
      }
    }
    else {
      *param_5 = 2;
    }
  }
  else {
    *param_3 = '\x01';
    lVar5 = DAT_1416e2360;
  }
  return lVar5;
LAB_14025d3fe:
  *param_3 = '\0';
  if ((*(longlong *)(param_1 + 0x28) == 0) ||
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x108), lVar5 == 0)) {
    lVar5 = *(longlong *)(param_1 + 0x1a8);
    lVar8 = *(longlong *)(lVar5 + 0x1a8);
    if (lVar5 != *(longlong *)(lVar5 + 0x1a8)) {
      do {
        if (4 < iVar13) break;
        iVar13 = iVar13 + 1;
        bVar14 = lVar8 != *(longlong *)(lVar8 + 0x1a8);
        lVar5 = lVar8;
        lVar8 = *(longlong *)(lVar8 + 0x1a8);
      } while (bVar14);
    }
  }
  if ((*(byte *)(*(longlong *)(lVar5 + 0x88) + 0x196c) & 0x10) == 0) {
    return lVar10;
  }
  if ((DAT_1417efb82 == '\0') && (DAT_1416e2910 == 0)) {
    return lVar10;
  }
  lVar5 = FUN_14025c780(param_1,param_2,param_3,param_4,param_5);
  return lVar5;
}

