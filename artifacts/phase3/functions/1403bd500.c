
void FUN_1403bd500(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong *local_res8;
  
  lVar4 = DAT_1418d6ab0;
  if (((DAT_1418d6ab8 != 0) &&
      (uVar6 = *(uint *)(*param_2 + 0x20) & 0xffffff, uVar6 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
     (lVar4 = *(longlong *)(*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar6 * 0x10),
     lVar4 == 0)) {
    lVar4 = DAT_1418d6ab0;
  }
  cVar3 = (**(code **)(*(longlong *)(lVar4 + 0x10) + 8))(lVar4 + 0x10);
  if (cVar3 != '\0') {
    lVar4 = DAT_1418d6ab0;
    if (((DAT_1418d6ab8 != 0) &&
        (uVar6 = *(uint *)(*param_2 + 0x20) & 0xffffff, uVar6 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
       (lVar4 = *(longlong *)(*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar6 * 0x10),
       lVar4 == 0)) {
      lVar4 = DAT_1418d6ab0;
    }
    if ((*(int *)(lVar4 + 0x2c) == 4) && (*(char *)(DAT_1416e3260 + 0x34a) == '\0')) {
      lVar4 = FUN_1401fffd0(*(undefined8 *)(*(longlong *)(lVar4 + 0x30) + 0x498));
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x70);
    }
    if ((lVar4 != 0) && (*(short *)(lVar4 + 0xe8) != 0)) goto LAB_1403bd5f9;
  }
  lVar4 = *(longlong *)(*param_2 + 0x28);
LAB_1403bd5f9:
  if ((lVar4 == 0) || (*(short *)(lVar4 + 0xe8) == 0)) {
    lVar4 = *(longlong *)(*param_2 + 0x30);
  }
  FUN_1403aa9c0(*param_2);
  local_res8 = *(longlong **)(param_1 + 0x18);
  if (local_res8 != (longlong *)0x0) {
    do {
      if (*local_res8 == *param_2) break;
      local_res8 = (longlong *)local_res8[3];
    } while (local_res8 != (longlong *)0x0);
  }
  FUN_1403be090(param_1 + 0x18,&local_res8);
  FUN_1403bdd50(param_2);
  plVar1 = *(longlong **)(lVar4 + 0xcc0);
  while (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
    plVar1 = (longlong *)plVar1[2];
    if (((*(longlong *)(lVar2 + 0x68) == 0) || (*(int *)(*(longlong *)(lVar2 + 0x68) + 8) == 0)) &&
       ((*(longlong *)(lVar2 + 0x78) == 0 || (*(int *)(*(longlong *)(lVar2 + 0x78) + 8) == 0)))) {
      if (((*(int *)(lVar2 + 0xa0) < 1) && (*(int *)(lVar2 + 0xb4) < 1)) &&
         (*(char *)(lVar2 + 0x157) != '\0')) {
        if (*(longlong *)(lVar2 + 0x170) == 0) {
          lVar5 = FUN_1400d3090(lVar2 + 0x168);
          *(longlong *)(lVar2 + 0x160) = lVar5;
          *(longlong *)(lVar2 + 0x170) = lVar5;
          if (lVar5 == 0) {
            *(undefined8 *)(lVar2 + 0x170) = DAT_1416e2360;
          }
        }
        cVar3 = FUN_140238d40(*(undefined8 *)(lVar2 + 0x170));
        if (cVar3 != '\0') {
          FUN_140934230(lVar4,lVar2);
        }
      }
      FUN_1403bc0c0(param_1,lVar2,lVar4);
    }
  }
  return;
}

