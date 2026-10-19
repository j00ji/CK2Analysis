
int * FUN_140848320(longlong param_1,int *param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5,longlong param_6)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  piVar4 = (int *)(param_1 + 0x10);
  *param_2 = 0;
  uVar5 = 0;
  do {
    if (0 < *piVar4) {
      piVar3 = (int *)FUN_140847de0(param_1,&stack0x00000038,uVar5,param_3,param_4,param_5);
      *param_2 = *param_2 + *piVar3;
      uVar1 = uVar5;
      if (uVar5 == 6) {
        uVar1 = *(uint *)(*(longlong *)(param_1 + 0x50) + 100);
      }
      uVar7 = (ulonglong)uVar1;
      lVar8 = 0;
      do {
        lVar6 = *(longlong *)(param_6 + lVar8 * 8);
        if (lVar6 != 0) {
          iVar2 = (int)uVar7;
          if ((iVar2 == 0) || (iVar2 == 5)) {
            iVar2 = *(int *)(lVar6 + 0x20);
LAB_14084841f:
            if (iVar2 != 0) {
              *param_2 = (int)(((longlong)*param_2 * (longlong)(iVar2 + 1000)) / 1000);
            }
          }
          else {
            if (iVar2 - 1U < 2) {
              iVar2 = *(int *)(lVar6 + 0x24);
              goto LAB_14084841f;
            }
            if (iVar2 - 3U < 2) {
              iVar2 = *(int *)(lVar6 + 0x28);
              goto LAB_14084841f;
            }
            if ((iVar2 == 6) &&
               (*(code **)(**(longlong **)(param_1 + 0x50) + 0x38) == FUN_1400ae550)) {
              iVar2 = *(int *)(*(longlong *)(lVar6 + 0x90) +
                              (ulonglong)*(ushort *)(*(longlong **)(param_1 + 0x50) + 8) * 4);
              goto LAB_14084841f;
            }
          }
          iVar2 = FUN_140a30150(uVar7 & 0xffffffff);
          if ((iVar2 != 0x1e) && (iVar2 = *(int *)(lVar6 + 0x18 + (longlong)iVar2 * 4), iVar2 != 0))
          {
            *param_2 = (int)(((longlong)*param_2 * (longlong)(iVar2 + 1000)) / 1000);
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < 2);
    }
    uVar5 = uVar5 + 1;
    piVar4 = piVar4 + 1;
    if (7 < (int)uVar5) {
      return param_2;
    }
  } while( true );
}

