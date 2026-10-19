
void FUN_1403a3240(longlong param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  int local_38;
  ulonglong local_34;
  
  lVar14 = 0;
  param_1 = param_1 + 0x48;
  uVar12 = 2;
  do {
    cVar3 = FUN_14039cb40(param_1);
    if (cVar3 != '\0') {
      if ((*(char *)(param_1 + 0xc0) == '\0') || (*(int *)(param_1 + 0xb4) != 2)) {
        lVar11 = (longlong)*(int *)(param_1 + 0x78);
        lVar9 = lVar11 * 200 + param_2;
        if ((*(int *)(lVar9 + 0xfc) == 2) &&
           ((*(char *)(param_1 + 0xc1) == '\0' || (*(int *)(param_1 + 0xb4) != 2)))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        lVar13 = (longlong)*(int *)(param_1 + 0x7c) * 200;
        if ((*(int *)(lVar13 + 0xfc + param_2) == 2) &&
           ((*(char *)(param_1 + 0xc1) == '\0' || (*(int *)(param_1 + 0xb4) != 2)))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        cVar3 = FUN_14039cb40(lVar9 + 0x48);
        iVar10 = (int)lVar11;
        if ((cVar3 == '\0') || (bVar1)) {
          cVar3 = FUN_14039cb40(param_2 + 0x48 + lVar13);
          if ((cVar3 == '\0') || (bVar2)) {
            if (iVar10 == 0) {
              local_38 = 0;
              local_34 = 0x200000001;
              uVar8 = 0;
            }
            else if (iVar10 == 1) {
              uVar5 = FUN_140c4a7f0();
              uVar5 = uVar5 & 0x80000001;
              if ((int)uVar5 < 0) {
                uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
              }
              local_38 = 1;
              uVar8 = 1;
              uVar6 = 0;
              if (uVar5 == 0) {
                uVar6 = 2;
              }
              local_34 = CONCAT44(uVar6,-(uint)(uVar5 != 0)) & 0xffffffff00000002;
            }
            else {
              if (iVar10 != 2) {
                return;
              }
              uVar8 = 2;
              local_38 = 2;
              local_34 = 1;
            }
            iVar10 = 0;
            do {
              iVar7 = iVar10 + (iVar10 / 3 + (iVar10 >> 0x1f) +
                               (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) &
                                     0xffffffffU) >> 0x1f)) * -3;
              lVar9 = param_2 + 0x48 + (longlong)(&local_38)[iVar7] * 200;
              if (iVar10 == 6) {
                *(undefined4 *)(param_1 + 0x7c) = uVar8;
                iVar10 = *(int *)(lVar9 + 0xb4);
                *(int *)(param_1 + 0xb4) = iVar10;
                if (iVar10 != 2) {
                  *(undefined2 *)(param_1 + 0xc0) = 0;
                  *(undefined4 *)(param_1 + 0xb8) = 0;
                }
                FUN_14039cf80(param_1);
                if ((*(int *)(lVar9 + 0xb4) == 2) &&
                   ((*(char *)(param_1 + 0xc0) == '\0' || (*(int *)(param_1 + 0xb4) != 2)))) {
LAB_1403a363c:
                  *(undefined1 *)(param_1 + 0xc1) = 1;
                }
                break;
              }
              if (((2 < iVar10) ||
                  ((*(int *)(lVar9 + 0xb4) != 2 || (*(char *)(lVar9 + 0xc0) == '\0')))) &&
                 (cVar3 = FUN_14039cb40(lVar9), cVar3 != '\0')) {
                *(int *)(param_1 + 0x7c) = (&local_38)[iVar7];
                if (((*(char *)(lVar9 + 0xc1) == '\0') || (*(int *)(lVar9 + 0xb4) != 2)) &&
                   (cVar3 = FUN_1403a0b10(lVar9), cVar3 == '\0')) {
                  iVar10 = *(int *)(lVar9 + 0xb4);
                  *(int *)(param_1 + 0xb4) = iVar10;
                  lVar11 = param_1;
                  if (iVar10 != 2) {
                    *(undefined2 *)(param_1 + 0xc0) = 0;
                    *(undefined4 *)(param_1 + 0xb8) = 0;
                  }
                }
                else {
                  *(undefined1 *)(lVar9 + 0xc1) = 0;
                  iVar10 = *(int *)(param_1 + 0xb4);
                  if (*(int *)(param_1 + 0xb4) == 2) {
                    iVar10 = 1;
                  }
                  *(int *)(param_1 + 0xb4) = iVar10;
                  if (iVar10 != 2) {
                    *(undefined2 *)(param_1 + 0xc0) = 0;
                    *(undefined4 *)(param_1 + 0xb8) = 0;
                  }
                  *(int *)(lVar9 + 0xb4) = iVar10;
                  if (iVar10 != 2) {
                    *(undefined2 *)(lVar9 + 0xc0) = 0;
                    *(undefined4 *)(lVar9 + 0xb8) = 0;
                  }
                  *(undefined4 *)(lVar9 + 0x7c) = *(undefined4 *)(param_1 + 0x78);
                  FUN_14039cf80(param_1,1);
                  lVar11 = lVar9;
                }
                FUN_14039cf80(lVar11);
                if (*(int *)(lVar9 + 0xb4) == 2) goto LAB_1403a363c;
                break;
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < 7);
          }
          else {
            lVar9 = FUN_1403a0590(param_1);
            if (*(int *)(param_1 + 0xb4) != *(int *)(lVar9 + 0xb4)) {
              lVar9 = FUN_1403a0590(param_1);
              iVar10 = *(int *)(lVar9 + 0xb4);
              *(int *)(param_1 + 0xb4) = iVar10;
              if (iVar10 == 2) {
                lVar9 = FUN_1403a0590(param_1);
                if ((*(char *)(lVar9 + 0xc0) == '\0') || (uVar4 = 1, *(int *)(lVar9 + 0xb4) != 2)) {
                  uVar4 = 0;
                }
                *(undefined1 *)(param_1 + 0xc1) = uVar4;
                FUN_14039cf80(param_1);
              }
              else {
                *(undefined2 *)(param_1 + 0xc0) = 0;
                *(undefined4 *)(param_1 + 0xb8) = 0;
                FUN_14039cf80(param_1);
              }
            }
          }
        }
        else {
          iVar7 = *(int *)(param_1 + 0xb4);
          *(int *)(param_1 + 0x7c) = iVar10;
          iVar10 = *(int *)(lVar9 + 0xfc);
          if (iVar7 != iVar10) {
            if (iVar7 < iVar10) {
              *(int *)(lVar9 + 0xfc) = iVar7;
              if (iVar7 != 2) {
                *(undefined2 *)(lVar9 + 0x108) = 0;
                *(undefined4 *)(lVar9 + 0x100) = 0;
              }
              FUN_14039cf80(lVar9 + 0x48);
            }
            else {
              *(int *)(param_1 + 0xb4) = iVar10;
              if (iVar10 != 2) {
                *(undefined2 *)(param_1 + 0xc0) = 0;
                *(undefined4 *)(param_1 + 0xb8) = 0;
              }
              FUN_14039cf80(param_1);
            }
          }
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x78);
        *(int *)(param_1 + 0xb4) = (int)uVar12;
        FUN_14039cf80(param_1);
      }
      uVar12 = 2;
    }
    lVar14 = lVar14 + 1;
    param_1 = param_1 + 200;
    if (2 < lVar14) {
      return;
    }
  } while( true );
}

