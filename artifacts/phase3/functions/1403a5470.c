
void FUN_1403a5470(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  longlong lVar12;
  undefined1 local_78 [96];
  
  piVar10 = (int *)(param_2 + 0xc4);
  lVar12 = 3;
  do {
    piVar1 = piVar10 + -0x1f;
    lVar7 = FUN_14039cbf0(piVar1,local_78);
    if (*(int *)(lVar7 + 0x10) + *(int *)(lVar7 + 0x14) + *(int *)(lVar7 + 0x18) +
        *(int *)(lVar7 + 0x1c) + *(int *)(lVar7 + 0x20) + *(int *)(lVar7 + 0x24) +
        *(int *)(lVar7 + 0x28) + *(int *)(lVar7 + 0x2c) != 0) {
      lVar7 = *(longlong *)(piVar10 + 9);
      iVar3 = piVar10[0xe];
      lVar5 = *(longlong *)(lVar7 + 0x10);
      piVar11 = (int *)(lVar5 + 0x48 + (longlong)piVar10[-1] * 200);
      lVar9 = (longlong)*piVar10 * 200;
      lVar6 = lVar5;
      if (piVar11 == piVar1) {
        lVar6 = *(longlong *)(lVar7 + 0x18);
      }
      iVar4 = *(int *)(lVar9 + lVar6 + 0xfc);
      lVar6 = lVar5;
      if (piVar11 == piVar1) {
        lVar6 = *(longlong *)(lVar7 + 0x18);
      }
      cVar2 = (char)piVar10[0x11];
      if ((cVar2 == '\0') || (iVar3 != 2)) {
        if ((*(char *)(lVar9 + lVar6 + 0x108) == '\0') || (*(int *)(lVar9 + lVar6 + 0xfc) != 2)) {
          if ((cVar2 == '\0') || ((iVar3 != 2 && ((cVar2 == '\0' || (iVar3 != 2)))))) {
            if (piVar11 == piVar1) {
              lVar5 = *(longlong *)(lVar7 + 0x18);
            }
            if (piVar10[-1] != *(int *)(lVar5 + lVar9 + 0xc4)) {
              if ((*(char *)((longlong)piVar10 + 0x45) == '\0') || (iVar3 != 2)) {
                if (iVar3 == iVar4) goto LAB_1403a565d;
                piVar10[0xe] = iVar4;
                if (iVar4 != 2) {
                  *(undefined2 *)(piVar10 + 0x11) = 0;
                  piVar10[0xf] = 0;
                }
                *(undefined1 *)((longlong)piVar10 + 0x45) = 0;
              }
              else {
                lVar7 = FUN_1403a0590(piVar1);
                *(undefined8 *)(lVar7 + 0xb4) = 1;
                *(undefined2 *)(lVar7 + 0xc0) = 0;
                lVar7 = FUN_1403a0590();
                *(undefined1 *)(lVar7 + 0xc1) = 0;
                lVar7 = *(longlong *)(*(longlong *)(piVar10 + 9) + 0x10);
                if ((int *)(lVar7 + 0x48 + (longlong)piVar10[-1] * 200) == piVar1) {
                  lVar7 = (longlong)*piVar10 * 200 +
                          *(longlong *)(*(longlong *)(piVar10 + 9) + 0x18);
                }
                else {
                  lVar7 = (longlong)*piVar10 * 200 + lVar7;
                }
                *(int *)(lVar7 + 0xc4) = piVar10[-1];
                uVar8 = FUN_1403a0590(piVar1);
                FUN_14039cf80(uVar8,1);
                piVar10[0xe] = 1;
                piVar10[0xf] = 0;
                *(undefined2 *)(piVar10 + 0x11) = 0;
              }
LAB_1403a5653:
              FUN_14039cf80(piVar1,1);
            }
          }
        }
        else if (iVar3 != 2) {
          piVar10[0xe] = 2;
          *(undefined1 *)((longlong)piVar10 + 0x45) = 1;
          goto LAB_1403a5653;
        }
      }
    }
LAB_1403a565d:
    piVar10 = piVar10 + 0x32;
    lVar12 = lVar12 + -1;
    if (lVar12 == 0) {
      return;
    }
  } while( true );
}

