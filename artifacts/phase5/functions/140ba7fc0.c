
void FUN_140ba7fc0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int *piVar9;
  longlong *plVar10;
  
LAB_140ba7ff0:
  do {
    plVar10 = param_1;
    if ((undefined **)*param_1 != &PTR_FUN_1411430f8) {
      plVar10 = (longlong *)(*(code *)((undefined **)*param_1)[0xc])(param_1);
    }
    iVar5 = FUN_140bba910(plVar10 + 0x46);
    uVar7 = (**(code **)(*param_1 + 0x60))(param_1);
    iVar6 = FUN_140b9f380(uVar7);
    if (iVar5 <= iVar6) {
      return;
    }
    plVar10 = (longlong *)param_1[0x46];
    do {
      if (plVar10 == (longlong *)0x0) goto LAB_140ba7ff0;
      lVar1 = *plVar10;
      plVar10 = (longlong *)plVar10[2];
    } while (*(int *)(lVar1 + 0x48) == 0);
    puVar8 = (undefined8 *)(lVar1 + 0x38);
    if (lVar1 == 0) {
      puVar8 = (undefined8 *)0x0;
    }
    puVar8 = *(undefined8 **)*puVar8;
    if (((*(int *)((longlong)puVar8 + 0x44) == 1) && (lVar2 = puVar8[9], lVar2 != 0)) &&
       ((*(longlong *)(lVar2 + 0x28) == 0 ||
        ((*(byte *)(*(longlong *)(lVar2 + 0x28) + 0xd6c) & 2) == 0)))) {
      if (DAT_1417e6c90 < *(int *)(lVar2 + 0xbc)) {
        piVar9 = (int *)FUN_14077c7b0(DAT_1416e3260);
        if ((*piVar9 < *(int *)(lVar2 + 0xb8)) || (*(int *)(lVar2 + 0xbc) <= *piVar9))
        goto LAB_140ba8135;
      }
      lVar2 = *(longlong *)(puVar8[9] + 0x28);
      plVar10 = DAT_1416e3148;
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xb0) != 0)) {
        plVar10 = *(longlong **)(*(longlong *)(lVar2 + 0xb0) + 8);
      }
      cVar4 = (**(code **)(*plVar10 + 0x30))();
      if (cVar4 != '\0') {
        lVar2 = puVar8[9];
        lVar3 = *(longlong *)(lVar2 + 0x28);
        plVar10 = DAT_1416e3148;
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0xb0) != 0)) {
          if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0xb0) == 0)) {
            FUN_1401b3840(lVar2 + 0x20);
          }
          plVar10 = *(longlong **)(*(longlong *)(*(longlong *)(lVar2 + 0x28) + 0xb0) + 8);
        }
        FUN_14049e9b0(plVar10,puVar8);
      }
    }
LAB_140ba8135:
    FUN_140b987f0(lVar1,puVar8);
    (**(code **)*puVar8)(puVar8,1);
    if (*(int *)(lVar1 + 0x48) == 0) {
      lVar3 = *(longlong *)(*(longlong *)(DAT_1416e3260 + 0x3b0) + 8);
      LOCK();
      plVar10 = (longlong *)(lVar3 + 0x80);
      lVar2 = *plVar10;
      *plVar10 = *plVar10 + 1;
      UNLOCK();
      FUN_140791320(lVar3 + (ulonglong)((int)lVar2 * 3 & 7) * 0x28 + 0x180,lVar1 + 0x20);
    }
  } while( true );
}

