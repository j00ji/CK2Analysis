
void FUN_140821b50(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  
  iVar1 = *(int *)(param_1 + 0x3258);
  lVar8 = 0;
  if (0 < (longlong)iVar1) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x32c0) + lVar8 * 8);
      if (((*(char *)(lVar2 + 100) == '\0') && (cVar6 = FUN_140959950(lVar2), cVar6 == '\0')) &&
         (*(char *)(lVar2 + 0x6b) == '\0')) {
        bVar5 = false;
        iVar11 = 0;
        lVar9 = 0;
        iVar4 = (int)((*(longlong *)(lVar2 + 0x1a0) - *(longlong *)(lVar2 + 0x198)) / 0x18);
        if (0 < iVar4) {
          lVar10 = 0;
          do {
            if ((lVar9 < 0) ||
               ((int)((*(longlong *)(lVar2 + 0x1a0) - *(longlong *)(lVar2 + 0x198)) / 0x18) <=
                iVar11)) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(*(longlong *)(lVar2 + 0x198) + 4 + lVar10);
            }
            lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x32c0) + (longlong)iVar7 * 8);
            if (*(char *)(lVar3 + 100) != '\0') {
              *(undefined1 *)(lVar3 + 0x68) = 1;
              bVar5 = true;
            }
            iVar11 = iVar11 + 1;
            lVar9 = lVar9 + 1;
            lVar10 = lVar10 + 0x18;
          } while (lVar9 < iVar4);
          if (bVar5) {
            if (*(char *)(lVar2 + 100) == '\0') {
              *(undefined1 *)(lVar2 + 0x69) = 1;
            }
            else {
              *(undefined1 *)(lVar2 + 0x68) = 1;
            }
          }
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar1);
  }
  return;
}

