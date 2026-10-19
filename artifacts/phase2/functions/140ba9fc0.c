
undefined8 FUN_140ba9fc0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = FUN_1400d3090(param_1 + 0x88);
  lVar6 = 0;
  lVar5 = lVar6;
  if (lVar2 != 0) {
    lVar5 = lVar2 + -0x10;
  }
  *(longlong *)(param_1 + 0x80) = lVar5;
  if (lVar5 != 0) {
    lVar2 = FUN_1400d3090(param_1 + 0x98);
    lVar5 = lVar6;
    if (lVar2 != 0) {
      lVar5 = lVar2 + -0x10;
    }
    *(longlong *)(param_1 + 0x90) = lVar5;
    if (lVar5 != 0) {
      lVar5 = param_1 + 0x88;
      lVar3 = FUN_1400d3090(lVar5);
      lVar2 = lVar6;
      if (lVar3 != 0) {
        lVar2 = lVar3 + -0x10;
      }
      if (*(longlong *)(lVar2 + 0x230) == 0) {
        lVar3 = FUN_1400d3090(param_1 + 0x88);
        lVar2 = lVar3 + -0x10;
        if (lVar3 == 0) {
          lVar2 = lVar6;
        }
        *(longlong *)(param_1 + 0x80) = lVar2;
        lVar4 = FUN_1400d3090(param_1 + 0x98);
        lVar3 = lVar4 + -0x10;
        if (lVar4 == 0) {
          lVar3 = lVar6;
        }
        cVar1 = FUN_140ba7980(lVar3,lVar2);
        if (cVar1 != '\0') {
          lVar5 = FUN_1400d3090(lVar5);
          if (lVar5 != 0) {
            lVar6 = lVar5 + -0x10;
          }
          if ((*(char *)(lVar6 + 0x221) == '\0') &&
             ((0 < *(int *)(lVar6 + 0xb4) || (0 < *(int *)(lVar6 + 0x48))))) {
            return 1;
          }
        }
      }
      return 0;
    }
  }
  return 0;
}

