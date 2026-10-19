
ulonglong FUN_14039cb40(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  
  uVar3 = *(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80) >> 3;
  iVar2 = (int)uVar3;
  if (0 < iVar2) {
    plVar5 = *(longlong **)(param_1 + 0x80);
    lVar4 = 0;
    do {
      lVar1 = *plVar5;
      bVar6 = *(int *)(lVar1 + 0xa8) != 0;
      uVar3 = (ulonglong)bVar6;
      if (*(int *)(lVar1 + 0xac) != 0) {
        uVar3 = (ulonglong)(bVar6 + 1);
      }
      if (*(int *)(lVar1 + 0xb0) != 0) {
        uVar3 = (ulonglong)((int)uVar3 + 1);
      }
      if (*(int *)(lVar1 + 0xb4) != 0) {
        uVar3 = (ulonglong)((int)uVar3 + 1);
      }
      if (*(int *)(lVar1 + 0xb8) != 0) {
        uVar3 = (ulonglong)((int)uVar3 + 1);
      }
      if (*(int *)(lVar1 + 0xbc) != 0) {
        uVar3 = (ulonglong)((int)uVar3 + 1);
      }
      if (*(int *)(lVar1 + 0xc0) != 0) {
        uVar3 = (ulonglong)((int)uVar3 + 1);
      }
      if (*(int *)(lVar1 + 0xc4) != 0) {
        uVar3 = (ulonglong)((int)uVar3 + 1);
      }
      if ((int)uVar3 != 0) {
        return 1;
      }
      lVar4 = lVar4 + 1;
      plVar5 = plVar5 + 1;
    } while (lVar4 < iVar2);
  }
  return uVar3 & 0xffffffffffffff00;
}

