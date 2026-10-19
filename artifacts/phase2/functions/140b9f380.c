
int FUN_140b9f380(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  iVar5 = 0;
  while (plVar2 != (longlong *)0x0) {
    lVar3 = *plVar2;
    plVar2 = (longlong *)plVar2[2];
    iVar1 = *(int *)(lVar3 + 0xc4);
    iVar4 = iVar1 / 1000;
    if (iVar1 != iVar4 * 1000) {
      iVar4 = (uint)(0 < iVar1) + iVar4;
    }
    iVar5 = iVar5 + ((iVar4 * 1000) / 1000) * DAT_1416e26ac;
  }
  return iVar5;
}

