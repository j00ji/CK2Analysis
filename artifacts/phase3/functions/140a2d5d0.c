
ulonglong FUN_140a2d5d0(longlong param_1,longlong param_2,uint *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined1 local_48 [8];
  longlong *local_40;
  
  uVar5 = *(ulonglong *)(param_1 + 0x28);
  if (((uVar5 != 0) && (*(longlong *)(uVar5 + 0x68) != 0)) &&
     (*(int *)(*(longlong *)(uVar5 + 0x68) + 8) != 0)) {
    puVar8 = (undefined8 *)FUN_140b99ce0(uVar5,local_48);
    lVar9 = FUN_1403b6690(*puVar8,param_1);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40);
        }
      }
    }
    if ((lVar9 != 0) && ((int)(*param_3 + 2) < 0x1a)) {
      FUN_1403a1190(lVar9,param_2,param_3);
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x44) == 2) {
    uVar7 = *param_3;
    if (0x18 < (int)uVar7) {
      return (longlong)(int)uVar7;
    }
    *(longlong *)(param_2 + (longlong)(int)uVar7 * 8) = *(longlong *)(param_1 + 0x110) + 0x48;
    *param_3 = *param_3 + 1;
    if ((*(byte *)(lVar9 + 0x1e9) & 2) == 0) {
      return (ulonglong)*param_3;
    }
    uVar10 = FUN_140200560(lVar9,local_res8);
    lVar11 = FUN_1400cd630(uVar10);
    uVar12 = (**(code **)(*(longlong *)(lVar11 + 0x10) + 8))(lVar11 + 0x10);
    if ((char)uVar12 == '\0') {
      lVar11 = (longlong)(int)*param_3;
      if (0x18 < (int)*param_3) {
        return uVar12;
      }
      lVar13 = FUN_1401fffd0(lVar9);
      *(longlong *)(param_2 + lVar11 * 8) = lVar13 + 0x8f8;
      goto LAB_140a2d806;
    }
    if (0x18 < (int)*param_3) {
      return uVar12;
    }
    uVar10 = FUN_140200560(lVar9,local_res20);
    lVar11 = FUN_1400cd630(uVar10);
    lVar11 = lVar11 + 0x78;
    uVar12 = (ulonglong)(int)*param_3;
  }
  else {
    lVar11 = DAT_1418d6ab0;
    if (((DAT_1418d6ab8 != 0) &&
        (uVar7 = *(uint *)(param_1 + 0x80) & 0xffffff, uVar7 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
       (lVar11 = *(longlong *)(*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar7 * 0x10),
       lVar11 == 0)) {
      lVar11 = DAT_1418d6ab0;
    }
    uVar12 = (**(code **)(*(longlong *)(lVar11 + 0x10) + 8))(lVar11 + 0x10);
    if ((char)uVar12 != '\0') {
      lVar11 = (longlong)(int)*param_3;
      if (0x18 < (int)*param_3) {
        return uVar12;
      }
      lVar13 = FUN_1400cd630(param_1 + 0x80);
      *(longlong *)(param_2 + lVar11 * 8) = lVar13 + 0x78;
      goto LAB_140a2d806;
    }
    lVar11 = *(longlong *)(param_1 + 0x78);
    uVar4 = *(ushort *)(*(longlong *)(param_1 + 0x88) + 0x710);
    if (uVar4 != 0) {
      lVar11 = *(longlong *)(*(longlong *)(DAT_1416e3260 + 0x278) + (ulonglong)uVar4 * 8);
    }
    if ((*(int *)(param_1 + 0x44) == 4) &&
       (lVar13 = FUN_1401fffd0(lVar9), *(short *)(lVar13 + 0xe8) != 0)) {
      lVar11 = FUN_1401fffd0(lVar9);
    }
    uVar12 = (ulonglong)(int)*param_3;
    if (0x18 < (int)*param_3) {
      return uVar12;
    }
    lVar11 = lVar11 + 0x8f8;
  }
  *(longlong *)(param_2 + uVar12 * 8) = lVar11;
LAB_140a2d806:
  *param_3 = *param_3 + 1;
  uVar7 = *param_3;
  uVar12 = (ulonglong)uVar7;
  if ((*(byte *)(lVar9 + 0x1e9) & 2) != 0) {
    if ((*(longlong *)(lVar9 + 0x28) != 0) &&
       (lVar11 = *(longlong *)(lVar9 + 0x28) + 0x614, lVar11 != 0)) {
      if (0x18 < (int)uVar7) {
        return uVar12;
      }
      *(longlong *)(param_2 + (longlong)(int)uVar7 * 8) = lVar11;
      *param_3 = *param_3 + 1;
      uVar12 = (ulonglong)*param_3;
    }
    lVar11 = *(longlong *)(lVar9 + 0x168);
    if (*(char *)(lVar11 + 0xf49) == '\0') {
      if (0x18 < (int)uVar12) {
        return uVar12;
      }
      *(longlong *)(param_2 + (longlong)(int)uVar12 * 8) = lVar11 + 3000;
      *param_3 = *param_3 + 1;
      uVar12 = (ulonglong)*param_3;
    }
    lVar13 = *(longlong *)(lVar9 + 0x88);
    if (*(char *)(lVar13 + 0x1019) == '\0') {
      if (0x18 < (int)uVar12) {
        return uVar12;
      }
      uVar12 = (ulonglong)(int)uVar12;
      *(longlong *)(param_2 + uVar12 * 8) = lVar13 + 0xc88;
      *param_3 = *param_3 + 1;
    }
    if (uVar5 != 0) {
      lVar6 = *(longlong *)(uVar5 + 0x80);
      if ((*(char *)(lVar11 + 0x1369) == '\0') && (lVar14 = FUN_140937630(lVar6), lVar14 == lVar11))
      {
        uVar7 = *param_3;
        if (0x18 < (int)uVar7) {
          return (longlong)(int)uVar7;
        }
        *(longlong *)(param_2 + (longlong)(int)uVar7 * 8) = lVar11 + 0xfd8;
        *param_3 = *param_3 + 1;
      }
      if ((*(char *)(lVar13 + 0x1439) == '\0') &&
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0xd48) + 0x498) + 0x88) == lVar13)) {
        uVar7 = *param_3;
        if (0x18 < (int)uVar7) {
          return (longlong)(int)uVar7;
        }
        *(longlong *)(param_2 + (longlong)(int)uVar7 * 8) = lVar13 + 0x10a8;
        *param_3 = *param_3 + 1;
      }
      uVar12 = 0;
      if (*(longlong *)(lVar9 + 0x28) != 0) {
        uVar12 = *(ulonglong *)(*(longlong *)(lVar9 + 0x28) + 0xcf8);
      }
      if ((uVar12 == uVar5) && (uVar12 = FUN_140876c80(), *(longlong *)(uVar12 + 0xb90) != 0)) {
        lVar9 = FUN_140876c80();
        uVar12 = *(ulonglong *)(lVar9 + 0xb90);
        *(ulonglong *)(param_2 + (longlong)(int)*param_3 * 8) = uVar12;
        *param_3 = *param_3 + 1;
      }
    }
  }
  return uVar12;
}

