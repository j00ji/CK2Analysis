
void FUN_1403f7bc0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char cVar4;
  longlong lVar5;
  void *pvVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong *puVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 local_40;
  uint local_3c;
  
  lVar5 = FUN_1400d3090(param_1 + 0x88);
  *(longlong *)(param_1 + 0x80) = lVar5;
  lVar13 = *(longlong *)(lVar5 + 0x28);
  plVar7 = DAT_1416e3148;
  if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0xb0) != 0)) {
    plVar7 = *(longlong **)(*(longlong *)(lVar13 + 0xb0) + 8);
  }
  cVar4 = (**(code **)(*plVar7 + 0x30))();
  lVar13 = DAT_1416e3260;
  if (cVar4 != '\0') {
    local_3c = *(int *)(DAT_1416e3260 + 0x42c) + 1;
    *(uint *)(DAT_1416e3260 + 0x42c) = local_3c;
    local_40 = 0x3e;
    uVar8 = *(undefined8 *)
             (*(longlong *)(lVar13 + 0x278) + (ulonglong)*(ushort *)(param_1 + 0x90) * 8);
    if (*(char *)(param_1 + 0x98) == '\0') {
      pvVar6 = operator_new(0x240);
      plVar7 = (longlong *)FUN_1401add10(pvVar6);
    }
    else {
      pvVar6 = operator_new(0x250);
      plVar7 = (longlong *)FUN_140ba7310(pvVar6);
    }
    if (*(code **)(*plVar7 + 0x38) == (code *)&LAB_140b95430) {
      if (*(uint *)(DAT_1416e3260 + 0x42c) <= local_3c) {
        *(uint *)(DAT_1416e3260 + 0x42c) = local_3c + 1;
      }
      FUN_140c425f0(plVar7 + 2,&local_40,0);
    }
    else {
      (**(code **)(*plVar7 + 0x38))(plVar7,&local_40);
    }
    FUN_140b98e30(plVar7,uVar8);
    FUN_140ba5840(plVar7);
    uVar14 = 0;
    uVar12 = uVar14;
    uVar15 = uVar14;
    if (0 < (int)(*(longlong *)(param_1 + 0xa8) - *(longlong *)(param_1 + 0xa0) >> 2)) {
      do {
        iVar1 = *(int *)(uVar15 + *(longlong *)(param_1 + 0xa0));
        if (DAT_1417e3b58 != 0) {
          for (plVar9 = *(longlong **)
                         (*(longlong *)(DAT_1417e3b58 + 8) +
                         ((ulonglong)(iVar1 + 0x3f0000) % (ulonglong)*(uint *)(DAT_1417e3b58 + 4)) *
                         8); plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[1]) {
            lVar13 = *plVar9;
            if ((*(int *)(lVar13 + 0x14) == iVar1) && (*(int *)(lVar13 + 0x10) == 0x3f)) {
              if (lVar13 != 0) {
                if (*(char *)(*(longlong *)(lVar13 + 0x28) + 0x157) == '\0') {
                  FUN_140ba5840(plVar7,0);
                }
                else if ((char)plVar7[0x2b] != '\0') {
                  *(undefined1 *)((longlong)plVar7 + 0x157) = 1;
                  FUN_140b9b660(plVar7);
                }
                FUN_140b987f0(*(undefined8 *)(lVar13 + 0x28),lVar13);
                FUN_140b97bb0(plVar7,lVar13,0xffffffff);
              }
              break;
            }
          }
        }
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
        uVar15 = uVar15 + 4;
      } while ((int)uVar11 <
               (int)(*(longlong *)(param_1 + 0xa8) - *(longlong *)(param_1 + 0xa0) >> 2));
    }
    uVar11 = *(uint *)(param_1 + 0x88);
    lVar13 = DAT_1417e3b58;
    if (0x1268 < uVar11) {
      lVar13 = DAT_1417e3b50;
    }
    uVar12 = uVar14;
    if (lVar13 != 0) {
      for (puVar10 = *(ulonglong **)
                      (*(longlong *)(lVar13 + 8) +
                      ((ulonglong)(uVar11 * 0x10000 + *(int *)(param_1 + 0x8c)) %
                      (ulonglong)*(uint *)(lVar13 + 4)) * 8);
          (uVar12 = uVar14, puVar10 != (ulonglong *)0x0 &&
          ((uVar12 = *puVar10, *(int *)(uVar12 + 0x14) != *(int *)(param_1 + 0x8c) ||
           (*(uint *)(uVar12 + 0x10) != uVar11)))); puVar10 = (ulonglong *)puVar10[1]) {
      }
    }
    lVar13 = *(longlong *)(uVar12 + 0x28);
    plVar9 = DAT_1416e3148;
    if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0xb0) != 0)) {
      if ((lVar13 == 0) || (*(longlong *)(lVar13 + 0xb0) == 0)) {
        FUN_1401b3840(uVar12 + 0x20);
      }
      plVar9 = *(longlong **)(*(longlong *)(*(longlong *)(uVar12 + 0x28) + 0xb0) + 8);
    }
    FUN_1404942d0(plVar9,plVar7);
    if ((plVar7[0xf] == 0) || (*(int *)(plVar7[0xf] + 8) == 0)) {
      FUN_1403bc0c0(DAT_1416e3260 + 0x230,plVar7,plVar7[0x10]);
    }
    uVar3 = DAT_1417e3b32;
    DAT_1417e3b32 = 1;
    lVar13 = *(longlong *)(lVar5 + 0x28);
    if ((lVar13 == 0) || (*(longlong *)(lVar13 + 0xab4) == 0)) {
      if (lVar5 == *(longlong *)(DAT_1416e3260 + 0x3f0)) {
        if (*(char *)(param_1 + 0x9a) == '\0') {
          if (*(char *)(param_1 + 0x9b) != '\0') {
            (**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0x1a0))
                      (*(longlong **)(DAT_1416e3260 + 0x370),plVar7);
          }
        }
        else {
          (**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0x180))
                    (*(longlong **)(DAT_1416e3260 + 0x370),&local_40);
        }
      }
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x94);
      if (lVar13 == 0) {
        pvVar6 = operator_new(0xd70);
        uVar8 = FUN_1401b1690(pvVar6,lVar5);
        *(undefined8 *)(lVar5 + 0x28) = uVar8;
      }
      FUN_140126e90(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar5 + 0x28) + 0xab4) + 8),plVar7,
                    uVar2);
    }
    DAT_1417e3b32 = uVar3;
    if (*(char *)(param_1 + 0x98) == '\0') {
      uVar8 = (**(code **)(*plVar7 + 0x50))();
      FUN_1401329b0(uVar8);
      uVar8 = (**(code **)(*plVar7 + 0x50))(plVar7);
      FUN_140132db0(0,&LAB_140132e70,uVar8);
    }
    else {
      uVar8 = (**(code **)(*plVar7 + 0x60))(plVar7);
      FUN_140132b60(uVar8);
      uVar8 = (**(code **)(*plVar7 + 0x60))(plVar7);
      FUN_140132db0(1,&LAB_140132e8c,uVar8);
    }
  }
  return;
}

