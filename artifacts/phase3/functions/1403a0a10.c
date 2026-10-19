
int * FUN_1403a0a10(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  
  iVar4 = 0;
  iVar5 = 0;
  iVar2 = (int)(*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80) >> 3);
  lVar3 = (longlong)iVar2;
  if (0 < iVar2) {
    plVar6 = *(longlong **)(param_1 + 0x80);
    do {
      lVar1 = *plVar6;
      plVar6 = plVar6 + 1;
      iVar2 = *(int *)(lVar1 + 0xa8) + *(int *)(lVar1 + 0xac) + *(int *)(lVar1 + 0xb0) +
              *(int *)(lVar1 + 0xb4) + *(int *)(lVar1 + 0xb8) + *(int *)(lVar1 + 0xbc) +
              *(int *)(lVar1 + 0xc0) + *(int *)(lVar1 + 0xc4);
      iVar5 = iVar5 + iVar2;
      iVar4 = iVar4 + (int)(((longlong)*(int *)(lVar1 + 0x40) * (longlong)iVar2) / 1000);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if (iVar5 != 0) {
      if (iVar4 + 0x189373U < 0x39580e) {
        *param_2 = (iVar4 * 1000) / iVar5;
        return param_2;
      }
      *param_2 = (int)(((longlong)iVar4 * 1000) / (longlong)iVar5);
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}

