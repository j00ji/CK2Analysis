
ulonglong FUN_140959950(longlong param_1)

{
  int iVar1;
  ulonglong in_RAX;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if ((DAT_1416e32d8 == 0) || (*(char *)(param_1 + 100) != '\0')) {
    return in_RAX & 0xffffffffffffff00;
  }
  iVar5 = 0;
  lVar3 = *(longlong *)(param_1 + 0x1a0) - *(longlong *)(param_1 + 0x198);
  iVar1 = (int)(lVar3 >> 0x3f);
  iVar2 = (int)(lVar3 / 0x18) + iVar1;
  if (iVar2 != iVar1 && -1 < iVar2 - iVar1) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      if ((lVar3 < 0) ||
         ((int)((*(longlong *)(param_1 + 0x1a0) - *(longlong *)(param_1 + 0x198)) / 0x18) <= iVar5))
      {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(lVar4 + 4 + *(longlong *)(param_1 + 0x198));
      }
      if (*(char *)(*(longlong *)(*(longlong *)(DAT_1416e32d8 + 0x32c0) + (longlong)iVar2 * 8) + 100
                   ) == '\0') {
        return (ulonglong)(uint7)(int7)(int3)((uint)iVar2 >> 8) << 8;
      }
      iVar5 = iVar5 + 1;
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x18;
    } while (iVar5 < (int)((*(longlong *)(param_1 + 0x1a0) - *(longlong *)(param_1 + 0x198)) / 0x18)
            );
  }
  return 1;
}

