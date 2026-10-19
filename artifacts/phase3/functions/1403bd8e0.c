
void FUN_1403bd8e0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if ((DAT_1416e32d2 == '\0') && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
    plVar1 = (longlong *)(param_1 + 0x30);
    plVar6 = *(longlong **)(param_1 + 0x18);
    do {
      plVar2 = (longlong *)plVar6[3];
      FUN_1403a9a80(*plVar6);
      iVar4 = (**(code **)(*(longlong *)*plVar6 + 0x60))();
      if (iVar4 == 3) {
        if (*(int *)(*(longlong *)(*plVar6 + 0x10) + 0x40) == 0) {
          iVar4 = 0;
          if (0 < (int)(*(longlong *)(param_1 + 0x38) - *plVar1 >> 4)) {
            plVar5 = (longlong *)*plVar1;
            do {
              if (*plVar5 == *plVar6) goto LAB_1403bd9c2;
              iVar4 = iVar4 + 1;
              plVar5 = plVar5 + 2;
            } while (iVar4 < (int)(*(longlong *)(param_1 + 0x38) - *plVar1 >> 4));
          }
LAB_1403bd9b7:
          FUN_1403be260(plVar1,plVar6);
        }
      }
      else {
        lVar3 = *plVar6;
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x40) == 0) ||
           (*(int *)(*(longlong *)(lVar3 + 0x18) + 0x40) == 0)) {
          iVar4 = 0;
          if (0 < (int)(*(longlong *)(param_1 + 0x38) - *plVar1 >> 4)) {
            plVar5 = (longlong *)*plVar1;
            do {
              if (*plVar5 == lVar3) goto LAB_1403bd9c2;
              iVar4 = iVar4 + 1;
              plVar5 = plVar5 + 2;
            } while (iVar4 < (int)(*(longlong *)(param_1 + 0x38) - *plVar1 >> 4));
          }
          goto LAB_1403bd9b7;
        }
      }
LAB_1403bd9c2:
      plVar6 = plVar2;
    } while (plVar2 != (longlong *)0x0);
  }
  return;
}

