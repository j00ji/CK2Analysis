
void FUN_140b96380(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  longlong *plVar9;
  
  for (puVar2 = *(undefined8 **)(param_1 + 0x38); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)puVar2[2]) {
    FUN_140a2bc00(*puVar2);
  }
  plVar9 = (longlong *)(param_1 + 0x130);
  piVar8 = (int *)(param_1 + 0x148);
  lVar7 = 3;
  do {
    iVar1 = *piVar8;
    if (iVar1 != 0) {
      if (DAT_1417e3b58 != 0) {
        for (plVar3 = *(longlong **)
                       (*(longlong *)(DAT_1417e3b58 + 8) +
                       ((ulonglong)(iVar1 + 0x420000) % (ulonglong)*(uint *)(DAT_1417e3b58 + 4)) * 8
                       ); plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[1]) {
          lVar6 = *plVar3;
          if ((*(int *)(lVar6 + 0x14) == iVar1) && (*(int *)(lVar6 + 0x10) == 0x42)) {
            if (lVar6 != 0) goto LAB_140b96423;
            break;
          }
        }
      }
      lVar6 = DAT_1416e2360;
LAB_140b96423:
      *plVar9 = lVar6;
      FUN_1401b4500();
      lVar6 = *plVar9;
      if (*(longlong *)(lVar6 + 0x28) == 0) {
        pvVar4 = operator_new(0xd70);
        uVar5 = FUN_1401b1690(pvVar4);
        *(undefined8 *)(lVar6 + 0x28) = uVar5;
      }
      *(longlong *)(*(longlong *)(lVar6 + 0x28) + 0xcf8) = param_1;
      *(undefined1 *)(lVar6 + 0x1c8) = 1;
    }
    piVar8 = piVar8 + 1;
    plVar9 = plVar9 + 1;
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      return;
    }
  } while( true );
}

