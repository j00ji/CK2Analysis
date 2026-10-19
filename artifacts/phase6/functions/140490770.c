
void FUN_140490770(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  while (puVar2 != (undefined8 *)0x0) {
    uVar3 = *puVar2;
    puVar2 = (undefined8 *)puVar2[2];
    FUN_140b96380(uVar3);
  }
  lVar8 = 0;
  iVar6 = (int)(*(longlong *)(param_1 + 0x228) - *(longlong *)(param_1 + 0x220) >> 2);
  if (0 < iVar6) {
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x220) + lVar8 * 4);
      if (DAT_1417e3b58 != 0) {
        for (plVar7 = *(longlong **)
                       (*(longlong *)(DAT_1417e3b58 + 8) +
                       ((ulonglong)(iVar1 + 0x3f0000) % (ulonglong)*(uint *)(DAT_1417e3b58 + 4)) * 8
                       ); plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[1]) {
          lVar4 = *plVar7;
          if ((*(int *)(lVar4 + 0x14) == iVar1) && (*(int *)(lVar4 + 0x10) == 0x3f)) {
            if (lVar4 != 0) {
              lVar5 = *(longlong *)(param_1 + 0x210);
              plVar7 = operator_new(0x20);
              *plVar7 = lVar4;
              plVar7[1] = lVar5;
              plVar7[2] = 0;
              *(undefined1 *)(plVar7 + 3) = 0;
              iVar1 = *(int *)(param_1 + 0x218);
              *(longlong **)(param_1 + 0x210) = plVar7;
              *(int *)(param_1 + 0x218) = iVar1 + 1;
              if (iVar1 == 0) {
                *(longlong **)(param_1 + 0x208) = plVar7;
              }
              else {
                *(longlong **)(lVar5 + 0x10) = plVar7;
              }
            }
            break;
          }
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar6);
  }
  return;
}

