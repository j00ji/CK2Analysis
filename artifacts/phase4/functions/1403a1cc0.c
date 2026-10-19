
void FUN_1403a1cc0(ulonglong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong *puVar10;
  
  puVar8 = (undefined8 *)(param_2 + 0x38);
  if (param_2 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  plVar1 = (longlong *)*puVar8;
  while (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
    plVar1 = (longlong *)plVar1[2];
    lVar9 = 3;
    puVar5 = param_1;
    do {
      puVar10 = puVar5 + 0x19;
      plVar4 = (longlong *)puVar5[0x1a];
      plVar3 = (longlong *)*puVar10;
      for (plVar7 = plVar3; (plVar7 != plVar4 && (*plVar7 != lVar2)); plVar7 = plVar7 + 1) {
      }
      plVar6 = plVar3;
      if (plVar7 != plVar4) {
        for (; (plVar6 != plVar4 && (*plVar6 != lVar2)); plVar6 = plVar6 + 1) {
        }
        if (((((longlong)plVar4 - (longlong)plVar3 & 0xfffffffffffffff8U) != 0) &&
            (plVar3 <= plVar6)) && (plVar6 < plVar4)) {
          if (plVar6 == plVar4 + -1) {
            puVar5[0x1a] = (ulonglong)(plVar4 + -1);
          }
          else {
            FUN_140e3b2e0(plVar6,plVar6 + 1,(longlong)plVar4 - (longlong)(plVar6 + 1));
            if ((puVar5[0x1a] - *puVar10 & 0xfffffffffffffff8) != 0) {
              puVar5[0x1a] = puVar5[0x1a] - 8;
            }
          }
        }
      }
      lVar9 = lVar9 + -1;
      puVar5 = puVar10;
    } while (lVar9 != 0);
  }
  return;
}

