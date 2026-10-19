
void FUN_140937f10(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *pvVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  
  lVar11 = 0;
  for (plVar10 = *(longlong **)(param_1 + 0xcc0); plVar10 != (longlong *)0x0;
      plVar10 = (longlong *)plVar10[2]) {
    if ((longlong *)*plVar10 == param_2) {
      if (plVar10 != (longlong *)0x0) goto LAB_140937fa7;
      break;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0xcc8);
  puVar4 = operator_new(0x20);
  *puVar4 = param_2;
  puVar4[1] = lVar5;
  puVar4[2] = 0;
  *(undefined1 *)(puVar4 + 3) = 0;
  *(undefined8 **)(param_1 + 0xcc8) = puVar4;
  iVar3 = *(int *)(param_1 + 0xcd0);
  *(int *)(param_1 + 0xcd0) = iVar3 + 1;
  if (iVar3 == 0) {
    *(undefined8 **)(param_1 + 0xcc0) = puVar4;
  }
  else {
    *(undefined8 **)(lVar5 + 0x10) = puVar4;
  }
LAB_140937fa7:
  cVar2 = (**(code **)(*param_2 + 0x70))(param_2);
  if (cVar2 == '\0') {
    if (param_2[0x2e] == 0) {
      lVar5 = FUN_1400d3090(param_2 + 0x2d);
      param_2[0x2c] = lVar5;
      param_2[0x2e] = lVar5;
      if (lVar5 == 0) {
        param_2[0x2e] = DAT_1416e2360;
      }
    }
    lVar5 = param_2[0x2e];
    lVar9 = *(longlong *)(lVar5 + 0x28);
    if (((lVar9 == 0) || (*(longlong *)(lVar9 + 0xb0) == 0)) ||
       (lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0xb0) + 8),
       (ulonglong)(*(longlong *)(lVar9 + 0x40) - *(longlong *)(lVar9 + 0x38)) < 8)) {
      lVar9 = DAT_1416e3ad0;
      if (0 < (int)(*(longlong *)(lVar5 + 0x78) - *(longlong *)(lVar5 + 0x70) >> 3)) {
        lVar9 = **(longlong **)(lVar5 + 0x70);
      }
    }
    else {
      lVar9 = **(longlong **)(lVar9 + 0x38);
    }
    if ((*(char *)(lVar9 + 0x394) != '\0') &&
       (iVar3 = (int)(*(longlong *)(param_1 + 0xcf0) - *(longlong *)(param_1 + 0xce8) >> 2),
       0 < iVar3)) {
      do {
        plVar10 = DAT_1418d6ab0;
        if ((DAT_1418d6ab8 != 0) &&
           ((uVar8 = *(uint *)(*(longlong *)(param_1 + 0xce8) + lVar11 * 4) & 0xffffff,
            uVar8 < *(uint *)(DAT_1418d6ab8 + 0x28) &&
            (plVar10 = *(longlong **)
                        (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar8 * 0x10),
            plVar10 == (longlong *)0x0)))) {
          plVar10 = DAT_1418d6ab0;
        }
        lVar5 = *(longlong *)(plVar10[6] + 0x498);
        lVar9 = *(longlong *)(lVar5 + 0x28);
        if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0xab4) != 0)) {
          if (lVar9 == 0) {
            pvVar6 = operator_new(0xd70);
            uVar7 = FUN_1401b1690(pvVar6,lVar5);
            *(undefined8 *)(lVar5 + 0x28) = uVar7;
          }
          pbVar1 = (byte *)(*(longlong *)(*(longlong *)(lVar5 + 0x28) + 0xab4) + 0x1d);
          *pbVar1 = *pbVar1 | 0x10;
        }
        lVar5 = plVar10[7];
        if ((*(byte *)(lVar5 + 0x1e9) & 2) == 0) {
          if (*(code **)(*plVar10 + 0x30) == (code *)&LAB_1403827a0) {
            if (((*(int *)((longlong)plVar10 + 0x2c) - 3U & 0xfffffffa) != 0) ||
               (*(int *)((longlong)plVar10 + 0x2c) == 4)) {
LAB_1409381e2:
              lVar5 = *(longlong *)(plVar10[6] + 0x498);
              goto LAB_1409381f3;
            }
          }
          else {
            cVar2 = (**(code **)(*plVar10 + 0x30))(plVar10);
            if (cVar2 == '\0') goto LAB_1409381e2;
          }
          lVar5 = plVar10[8];
        }
LAB_1409381f3:
        if (lVar5 != *(longlong *)(plVar10[6] + 0x498)) {
          lVar5 = plVar10[7];
          if ((*(byte *)(lVar5 + 0x1e9) & 2) == 0) {
            if (*(code **)(*plVar10 + 0x30) == (code *)&LAB_1403827a0) {
              if (((*(int *)((longlong)plVar10 + 0x2c) - 3U & 0xfffffffa) != 0) ||
                 (*(int *)((longlong)plVar10 + 0x2c) == 4)) {
LAB_14093823a:
                lVar5 = *(longlong *)(plVar10[6] + 0x498);
                goto LAB_14093824b;
              }
            }
            else {
              cVar2 = (**(code **)(*plVar10 + 0x30))(plVar10);
              if (cVar2 == '\0') goto LAB_14093823a;
            }
            lVar5 = plVar10[8];
          }
LAB_14093824b:
          if ((*(longlong *)(lVar5 + 0x28) != 0) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x28) + 0xab4) != 0)) {
            lVar5 = plVar10[7];
            if ((*(byte *)(lVar5 + 0x1e9) & 2) == 0) {
              if (*(code **)(*plVar10 + 0x30) == (code *)&LAB_1403827a0) {
                if (((*(int *)((longlong)plVar10 + 0x2c) - 3U & 0xfffffffa) != 0) ||
                   (*(int *)((longlong)plVar10 + 0x2c) == 4)) {
LAB_140938294:
                  lVar5 = *(longlong *)(plVar10[6] + 0x498);
                  goto LAB_1409382a5;
                }
              }
              else {
                cVar2 = (**(code **)(*plVar10 + 0x30))(plVar10);
                if (cVar2 == '\0') goto LAB_140938294;
              }
              lVar5 = plVar10[8];
            }
LAB_1409382a5:
            lVar5 = FUN_1400b1aa0(lVar5);
            *(byte *)(lVar5 + 0x1d) = *(byte *)(lVar5 + 0x1d) | 0x10;
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar3);
    }
  }
  else if ((*(char *)(*(longlong *)(param_1 + 0xf0) + 100) != '\0') &&
          (lVar11 = *(longlong *)(param_1 + 0xd68), lVar11 != 0)) {
    for (puVar4 = *(undefined8 **)(lVar11 + 0x10); puVar4 != (undefined8 *)0x0;
        puVar4 = (undefined8 *)puVar4[2]) {
      if ((longlong *)*puVar4 == param_2) {
        if (puVar4 != (undefined8 *)0x0) {
          return;
        }
        break;
      }
    }
    lVar5 = *(longlong *)(lVar11 + 0x18);
    puVar4 = operator_new(0x20);
    *puVar4 = param_2;
    puVar4[1] = lVar5;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
    *(undefined8 **)(lVar11 + 0x18) = puVar4;
    iVar3 = *(int *)(lVar11 + 0x20);
    *(int *)(lVar11 + 0x20) = iVar3 + 1;
    if (iVar3 == 0) {
      *(undefined8 **)(lVar11 + 0x10) = puVar4;
    }
    else {
      *(undefined8 **)(lVar5 + 0x10) = puVar4;
    }
  }
  return;
}

