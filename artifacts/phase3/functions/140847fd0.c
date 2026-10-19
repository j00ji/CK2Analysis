
int * FUN_140847fd0(longlong param_1,int *param_2,int param_3,int param_4,longlong param_5,
                   int param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar9 = (longlong)param_3;
  iVar6 = 0;
  iVar1 = *(int *)(param_1 + 0x10 + lVar9 * 4);
  if (0 < iVar1) {
    iVar7 = 1000;
    iVar6 = (&DAT_1410fbb98)[lVar9];
    if (0 < param_4) {
      lVar8 = 0;
      do {
        if ((longlong)iVar6 == 0x4f) {
          lVar2 = *(longlong *)(param_5 + lVar8 * 8);
          lVar3 = 0;
          iVar4 = (int)(*(longlong *)(lVar2 + 0x330) - *(longlong *)(lVar2 + 0x328) >> 3);
          if (0 < iVar4) {
            piVar5 = *(int **)(lVar2 + 0x328);
            do {
              if (*piVar5 == *(int *)(*(longlong *)(param_1 + 0x50) + 0x38)) {
                iVar7 = iVar7 + (*(int **)(lVar2 + 0x328))[lVar3 * 2 + 1];
                break;
              }
              lVar3 = lVar3 + 1;
              piVar5 = piVar5 + 2;
            } while (lVar3 < iVar4);
          }
        }
        else {
          iVar7 = iVar7 + *(int *)(*(longlong *)(param_5 + lVar8 * 8) + 0x28 + (longlong)iVar6 * 4);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < param_4);
    }
    if (iVar6 == 0x4f) {
      lVar9 = SUB168(SEXT816(0x20c49ba5e353f7cf) *
                     SEXT816((longlong)
                             (int)(((longlong)iVar1 *
                                   (longlong)
                                   *(int *)(*(longlong *)(param_1 + 0x50) + 0x58 +
                                           (longlong)param_6 * 4)) / 1000) * (longlong)iVar7),8);
    }
    else {
      lVar9 = SUB168(SEXT816(0x20c49ba5e353f7cf) *
                     SEXT816((longlong)
                             (int)(((longlong)(int)(&DAT_1417eacf0)[lVar9 * 3 + (longlong)param_6] *
                                   (longlong)iVar1) / 1000) * (longlong)iVar7),8);
    }
    iVar6 = (int)(lVar9 >> 7) - (int)(lVar9 >> 0x3f);
    if (iVar6 < 0) {
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = iVar6;
  return param_2;
}

