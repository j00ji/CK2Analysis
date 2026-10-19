
undefined4 *
FUN_140847de0(longlong param_1,undefined4 *param_2,int param_3,int param_4,longlong param_5,
             int param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  lVar9 = (longlong)param_3;
  iVar8 = 0;
  iVar1 = *(int *)(param_1 + 0x10 + lVar9 * 4);
  if (0 < iVar1) {
    iVar6 = 1000;
    iVar8 = *(int *)(&DAT_1410fbb78 + lVar9 * 4);
    if (0 < param_4) {
      lVar7 = 0;
      do {
        if ((longlong)iVar8 == 0x4e) {
          lVar2 = *(longlong *)(param_5 + lVar7 * 8);
          lVar3 = 0;
          iVar4 = (int)(*(longlong *)(lVar2 + 0x330) - *(longlong *)(lVar2 + 0x328) >> 3);
          if (0 < iVar4) {
            piVar5 = *(int **)(lVar2 + 0x328);
            do {
              if (*piVar5 == *(int *)(*(longlong *)(param_1 + 0x50) + 0x34)) {
                iVar6 = iVar6 + (*(int **)(lVar2 + 0x328))[lVar3 * 2 + 1];
                break;
              }
              lVar3 = lVar3 + 1;
              piVar5 = piVar5 + 2;
            } while (lVar3 < iVar4);
          }
        }
        else {
          iVar6 = iVar6 + *(int *)(*(longlong *)(param_5 + lVar7 * 8) + 0x28 + (longlong)iVar8 * 4);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < param_4);
    }
    if (iVar8 == 0x4e) {
      iVar8 = (int)(((longlong)
                     (int)(((longlong)iVar1 *
                           (longlong)
                           *(int *)(*(longlong *)(param_1 + 0x50) + 0x4c + (longlong)param_6 * 4)) /
                          1000) * (longlong)iVar6) / 1000);
    }
    else {
      iVar8 = (int)(((longlong)
                     (int)(((longlong)(int)(&DAT_1417ead80)[lVar9 * 3 + (longlong)param_6] *
                           (longlong)iVar1) / 1000) * (longlong)iVar6) / 1000);
    }
    if (iVar8 < 0) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = (int)(((longlong)DAT_1416e2b4c * (longlong)iVar8) / 1000);
  return param_2;
}

