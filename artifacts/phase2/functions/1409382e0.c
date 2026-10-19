
void FUN_1409382e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 *local_res8;
  
  cVar4 = (**(code **)(*param_2 + 0x70))(param_2);
  if (((cVar4 != '\0') && (*(char *)(*(longlong *)(param_1 + 0xf0) + 100) != '\0')) &&
     (*(longlong *)(param_1 + 0xd68) != 0)) {
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0xd68) + 0x10);
    for (local_res8 = (undefined8 *)*puVar1;
        (local_res8 != (undefined8 *)0x0 && ((longlong *)*local_res8 != param_2));
        local_res8 = (undefined8 *)local_res8[2]) {
    }
    FUN_1400d4c30(puVar1,&local_res8);
  }
  for (local_res8 = *(undefined8 **)(param_1 + 0xcc0);
      (local_res8 != (undefined8 *)0x0 && ((longlong *)*local_res8 != param_2));
      local_res8 = (undefined8 *)local_res8[2]) {
  }
  FUN_1400d4c30((undefined8 *)(param_1 + 0xcc0),&local_res8);
  cVar4 = (**(code **)(*param_2 + 0x70))(param_2);
  if (cVar4 == '\0') {
    if (param_2[0x2e] == 0) {
      lVar6 = FUN_1400d3090(param_2 + 0x2d);
      param_2[0x2c] = lVar6;
      param_2[0x2e] = lVar6;
      if (lVar6 == 0) {
        param_2[0x2e] = DAT_1416e2360;
      }
    }
    lVar6 = param_2[0x2e];
    lVar8 = *(longlong *)(lVar6 + 0x28);
    if (((lVar8 == 0) || (*(longlong *)(lVar8 + 0xb0) == 0)) ||
       (lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0xb0) + 8),
       (ulonglong)(*(longlong *)(lVar8 + 0x40) - *(longlong *)(lVar8 + 0x38)) < 8)) {
      lVar8 = DAT_1416e3ad0;
      if (0 < (int)(*(longlong *)(lVar6 + 0x78) - *(longlong *)(lVar6 + 0x70) >> 3)) {
        lVar8 = **(longlong **)(lVar6 + 0x70);
      }
    }
    else {
      lVar8 = **(longlong **)(lVar8 + 0x38);
    }
    if (*(char *)(lVar8 + 0x394) != '\0') {
      iVar5 = (int)(*(longlong *)(param_1 + 0xcf0) - *(longlong *)(param_1 + 0xce8) >> 2);
      lVar6 = 0;
      if (0 < iVar5) {
        do {
          plVar10 = DAT_1418d6ab0;
          if (((DAT_1418d6ab8 != 0) &&
              (uVar9 = *(uint *)(*(longlong *)(param_1 + 0xce8) + lVar6 * 4) & 0xffffff,
              uVar9 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
             (plVar10 = *(longlong **)
                         (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar9 * 0x10),
             plVar10 == (longlong *)0x0)) {
            plVar10 = DAT_1418d6ab0;
          }
          lVar8 = *(longlong *)(plVar10[6] + 0x498);
          lVar3 = *(longlong *)(lVar8 + 0x28);
          if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0xab4) != 0)) {
            if (lVar3 == 0) {
              local_res8 = operator_new(0xd70);
              uVar7 = FUN_1401b1690(local_res8,lVar8);
              *(undefined8 *)(lVar8 + 0x28) = uVar7;
            }
            pbVar2 = (byte *)(*(longlong *)(*(longlong *)(lVar8 + 0x28) + 0xab4) + 0x1d);
            *pbVar2 = *pbVar2 | 0x10;
          }
          lVar8 = plVar10[7];
          if ((*(byte *)(lVar8 + 0x1e9) & 2) == 0) {
            if (*(code **)(*plVar10 + 0x30) == (code *)&LAB_1403827a0) {
              if (((*(int *)((longlong)plVar10 + 0x2c) - 3U & 0xfffffffa) != 0) ||
                 (*(int *)((longlong)plVar10 + 0x2c) == 4)) {
LAB_140938544:
                lVar8 = *(longlong *)(plVar10[6] + 0x498);
                goto LAB_140938555;
              }
            }
            else {
              cVar4 = (**(code **)(*plVar10 + 0x30))(plVar10);
              if (cVar4 == '\0') goto LAB_140938544;
            }
            lVar8 = plVar10[8];
          }
LAB_140938555:
          if (lVar8 != *(longlong *)(plVar10[6] + 0x498)) {
            lVar8 = plVar10[7];
            if ((*(byte *)(lVar8 + 0x1e9) & 2) == 0) {
              if (*(code **)(*plVar10 + 0x30) == (code *)&LAB_1403827a0) {
                if (((*(int *)((longlong)plVar10 + 0x2c) - 3U & 0xfffffffa) != 0) ||
                   (*(int *)((longlong)plVar10 + 0x2c) == 4)) {
LAB_14093859c:
                  lVar8 = *(longlong *)(plVar10[6] + 0x498);
                  goto LAB_1409385ad;
                }
              }
              else {
                cVar4 = (**(code **)(*plVar10 + 0x30))(plVar10);
                if (cVar4 == '\0') goto LAB_14093859c;
              }
              lVar8 = plVar10[8];
            }
LAB_1409385ad:
            if ((*(longlong *)(lVar8 + 0x28) != 0) &&
               (*(longlong *)(*(longlong *)(lVar8 + 0x28) + 0xab4) != 0)) {
              lVar8 = plVar10[7];
              if ((*(byte *)(lVar8 + 0x1e9) & 2) == 0) {
                if (*(code **)(*plVar10 + 0x30) == (code *)&LAB_1403827a0) {
                  if (((*(int *)((longlong)plVar10 + 0x2c) - 3U & 0xfffffffa) != 0) ||
                     (*(int *)((longlong)plVar10 + 0x2c) == 4)) {
LAB_1409385f6:
                    lVar8 = *(longlong *)(plVar10[6] + 0x498);
                    goto LAB_140938607;
                  }
                }
                else {
                  cVar4 = (**(code **)(*plVar10 + 0x30))(plVar10);
                  if (cVar4 == '\0') goto LAB_1409385f6;
                }
                lVar8 = plVar10[8];
              }
LAB_140938607:
              lVar8 = FUN_1400b1aa0(lVar8);
              *(byte *)(lVar8 + 0x1d) = *(byte *)(lVar8 + 0x1d) | 0x10;
            }
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar5);
      }
    }
  }
  return;
}

