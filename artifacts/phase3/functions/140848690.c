
int * FUN_140848690(longlong param_1,int *param_2,uint param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong local_res10;
  
  lVar10 = 0;
  *param_2 = 0;
  local_res10 = 8;
  do {
    iVar5 = *(int *)(param_1 + -0x1410fbba8 + (longlong)&DAT_1410fbbb8 + lVar10);
    if (0 < iVar5) {
      iVar1 = *(int *)((longlong)&DAT_1410fbbb8 + lVar10);
      iVar4 = 1000;
      if (0 < (int)param_3) {
        uVar7 = (ulonglong)param_3;
        plVar9 = param_4;
        do {
          lVar6 = 0;
          if ((longlong)iVar1 == 0x4d) {
            lVar8 = *plVar9;
            iVar2 = (int)(*(longlong *)(lVar8 + 0x330) - *(longlong *)(lVar8 + 0x328) >> 3);
            if (0 < iVar2) {
              piVar3 = *(int **)(lVar8 + 0x328);
              do {
                if (*piVar3 == *(int *)(*(longlong *)(param_1 + 0x50) + 0x3c)) {
                  iVar4 = iVar4 + (*(int **)(lVar8 + 0x328))[lVar6 * 2 + 1];
                  break;
                }
                lVar6 = lVar6 + 1;
                piVar3 = piVar3 + 2;
              } while (lVar6 < iVar2);
            }
          }
          else {
            lVar8 = *plVar9;
            iVar4 = iVar4 + *(int *)(lVar8 + 0x28 + (longlong)iVar1 * 4);
          }
          iVar4 = iVar4 + *(int *)(lVar8 + 0x9c);
          plVar9 = plVar9 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (iVar1 == 0x4d) {
        lVar6 = SUB168(SEXT816(0x20c49ba5e353f7cf) *
                       SEXT816((longlong)iVar5 *
                               (longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0x44)),8);
      }
      else {
        lVar6 = SUB168(SEXT816(0x20c49ba5e353f7cf) *
                       SEXT816((longlong)*(int *)((longlong)&DAT_1417eae00 + lVar10) *
                               (longlong)iVar5),8);
      }
      iVar5 = (int)(((longlong)((int)(lVar6 >> 7) - (int)(lVar6 >> 0x3f)) * (longlong)iVar4) / 1000)
      ;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      *param_2 = *param_2 + iVar5;
    }
    lVar10 = lVar10 + 4;
    local_res10 = local_res10 + -1;
    if (local_res10 == 0) {
      return param_2;
    }
  } while( true );
}

