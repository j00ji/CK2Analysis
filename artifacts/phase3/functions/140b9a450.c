
longlong * FUN_140b9a450(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  plVar5 = DAT_1416e39f8;
  do {
    plVar12 = DAT_1416e39f8;
    if (plVar2 == (longlong *)0x0) {
      DAT_1416e39f8 = plVar12;
      return plVar5;
    }
    lVar3 = *plVar2;
    plVar2 = (longlong *)plVar2[2];
    lVar4 = *(longlong *)(lVar3 + 0x28);
    DAT_1416e39f8 = plVar12;
    if (lVar4 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x88);
      if (*(longlong *)(lVar4 + 0x170) == 0) {
        uVar1 = *(uint *)(lVar4 + 0x168);
        lVar10 = DAT_1417e3b58;
        if (0x1268 < uVar1) {
          lVar10 = DAT_1417e3b50;
        }
        if (lVar10 != 0) {
          for (plVar5 = *(longlong **)
                         (*(longlong *)(lVar10 + 8) +
                         ((ulonglong)(uVar1 * 0x10000 + *(int *)(lVar4 + 0x16c)) %
                         (ulonglong)*(uint *)(lVar10 + 4)) * 8); plVar5 != (longlong *)0x0;
              plVar5 = (longlong *)plVar5[1]) {
            lVar10 = *plVar5;
            if ((*(int *)(lVar10 + 0x14) == *(int *)(lVar4 + 0x16c)) &&
               (*(uint *)(lVar10 + 0x10) == uVar1)) goto LAB_140b9a50a;
          }
        }
        lVar10 = 0;
LAB_140b9a50a:
        *(longlong *)(lVar4 + 0x160) = lVar10;
        if (lVar10 == 0) {
          lVar10 = DAT_1416e2360;
        }
        *(longlong *)(lVar4 + 0x170) = lVar10;
      }
      if (((*(byte *)(lVar3 + 0x9d3) & 0x40) != 0) &&
         (lVar3 = *(longlong *)(lVar3 + 0x498), lVar3 != *(longlong *)(lVar4 + 0x170))) {
        lVar10 = *(longlong *)(lVar3 + 0x1a8);
        iVar8 = 0;
        do {
          if (lVar10 == *(longlong *)(lVar4 + 0x170)) goto LAB_140b9a5c6;
          lVar6 = *(longlong *)(lVar10 + 0x1a8);
          if (lVar10 == lVar6) break;
          lVar10 = *(longlong *)(lVar6 + 0x28);
          lVar11 = DAT_1416e3ad0;
          if (((lVar10 != 0) && (*(longlong *)(lVar10 + 0xb0) != 0)) &&
             (lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0xb0) + 8),
             (*(longlong *)(lVar10 + 0x40) - *(longlong *)(lVar10 + 0x38) & 0xfffffffffffffff8U) !=
             0)) {
            lVar11 = **(longlong **)(lVar10 + 0x38);
          }
          bVar7 = iVar8 < *(int *)(lVar11 + 0x3f0);
          lVar10 = lVar6;
          iVar8 = *(int *)(lVar11 + 0x3f0);
        } while (bVar7);
        plVar12 = *(longlong **)(lVar3 + 0x168);
      }
    }
LAB_140b9a5c6:
    cVar9 = (**(code **)(*plVar12 + 0x30))(plVar12);
    plVar5 = plVar12;
    if (cVar9 == '\0') {
      return plVar12;
    }
  } while( true );
}

