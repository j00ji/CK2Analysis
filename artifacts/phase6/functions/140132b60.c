
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140132b60(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  plVar1 = *(longlong **)(param_1 + 0xd8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x230))(plVar1,param_1);
  }
  uVar5 = DAT_1416e2360;
  plVar1 = DAT_1417e71f8;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_140132e94(*(longlong *)(param_1 + 0xd8),param_1);
    uVar5 = DAT_1416e2360;
    plVar1 = DAT_1417e71f8;
  }
  while (plVar3 = plVar1, DAT_1416e2360 = uVar5, plVar3 != (longlong *)0x0) {
    if (*plVar3 == 0) {
      plVar1 = (longlong *)plVar3[2];
      if (plVar3 != (longlong *)0x0) {
        if (DAT_1417e720c == '\0') {
          plVar2 = (longlong *)plVar3[1];
          if (plVar2 != (longlong *)0x0) {
            plVar2[2] = (longlong)plVar1;
          }
          if (plVar1 != (longlong *)0x0) {
            plVar1[1] = (longlong)plVar2;
          }
          if (plVar3 == DAT_1417e71f8) {
            DAT_1417e71f8 = plVar1;
          }
          if (plVar3 == DAT_1417e7200) {
            DAT_1417e7200 = plVar2;
          }
          thunk_FUN_140e1c5e4(plVar3,0x20);
          _DAT_1417e7208 = _DAT_1417e7208 + -1;
          uVar5 = DAT_1416e2360;
        }
        else {
          *(undefined1 *)(plVar3 + 3) = 1;
          uVar5 = DAT_1416e2360;
        }
      }
    }
    else {
      FUN_140132e94(*plVar3,param_1);
      uVar5 = DAT_1416e2360;
      plVar1 = (longlong *)plVar3[2];
    }
  }
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    if (*(longlong *)(param_1 + 0x170) == 0) {
      lVar4 = FUN_1400d3090(param_1 + 0x168);
      *(longlong *)(param_1 + 0x160) = lVar4;
      *(longlong *)(param_1 + 0x170) = lVar4;
      if (lVar4 == 0) {
        *(undefined8 *)(param_1 + 0x170) = uVar5;
      }
    }
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x170) + 0x28);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0xab4) != 0)) {
      if (*(longlong *)(param_1 + 0x170) == 0) {
        lVar4 = FUN_1400d3090(param_1 + 0x168);
        *(longlong *)(param_1 + 0x160) = lVar4;
        *(longlong *)(param_1 + 0x170) = lVar4;
        if (lVar4 == 0) {
          *(undefined8 *)(param_1 + 0x170) = uVar5;
        }
      }
      lVar4 = FUN_1400b1aa0(*(undefined8 *)(param_1 + 0x170));
      plVar1 = *(longlong **)(lVar4 + 8);
      if ((char)plVar1[6] != '\0') {
        if ((undefined **)*plVar1 == &PTR_FUN_141070878) {
          FUN_1400d3cd0();
          return;
        }
        (*(code *)((undefined **)*plVar1)[0x46])(plVar1,param_1);
      }
    }
  }
  return;
}

