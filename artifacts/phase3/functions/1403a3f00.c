
void FUN_1403a3f00(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 local_68 [96];
  
  FUN_1403a3240();
  lVar7 = param_1 + 0x48;
  lVar9 = 3;
  plVar8 = (longlong *)(param_1 + 0xe8);
  do {
    lVar3 = *(longlong *)(*plVar8 + 0x10);
    if ((longlong *)(lVar3 + 0x48 + (longlong)(int)plVar8[-5] * 200) == plVar8 + -0x14) {
      lVar3 = (longlong)*(int *)((longlong)plVar8 + -0x24) * 200 + *(longlong *)(*plVar8 + 0x18);
    }
    else {
      lVar3 = (longlong)*(int *)((longlong)plVar8 + -0x24) * 200 + lVar3;
    }
    lVar3 = FUN_14039cbf0(lVar3 + 0x48,local_68);
    iVar6 = *(int *)(lVar3 + 0x10) + *(int *)(lVar3 + 0x14) + *(int *)(lVar3 + 0x18) +
            *(int *)(lVar3 + 0x1c) + *(int *)(lVar3 + 0x20) + *(int *)(lVar3 + 0x24) +
            *(int *)(lVar3 + 0x28) + *(int *)(lVar3 + 0x2c);
    lVar3 = *(longlong *)(*plVar8 + 0x10);
    if ((longlong *)(lVar3 + 0x48 + (longlong)(int)plVar8[-5] * 200) == plVar8 + -0x14) {
      lVar3 = (longlong)*(int *)((longlong)plVar8 + -0x24) * 200 + *(longlong *)(*plVar8 + 0x18);
    }
    else {
      lVar3 = (longlong)*(int *)((longlong)plVar8 + -0x24) * 200 + lVar3;
    }
    lVar3 = FUN_14039cbf0(lVar3 + 0x48,local_68);
    iVar1 = *(int *)(lVar3 + 0x24);
    if (iVar6 < 1) {
LAB_1403a4028:
      uVar5 = 0;
    }
    else {
      if (iVar1 + 0x189373U < 0x39580e) {
        iVar2 = (iVar1 * 1000) / iVar6;
        uVar4 = (longlong)(iVar1 * 1000) % (longlong)iVar6 & 0xffffffff;
      }
      else {
        iVar2 = (int)(((longlong)iVar1 * 1000) / (longlong)iVar6);
        uVar4 = ((longlong)iVar1 * 1000) % (longlong)iVar6;
      }
      if (iVar2 < 0x259) goto LAB_1403a4028;
      uVar5 = CONCAT71((int7)(uVar4 >> 8),1);
    }
    FUN_14039cf80(lVar7,uVar5);
    FUN_14039d7d0(lVar7,lVar7 + 0x98,lVar7 + 0x9c,0);
    lVar7 = lVar7 + 200;
    plVar8 = plVar8 + 0x19;
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) {
      return;
    }
  } while( true );
}

