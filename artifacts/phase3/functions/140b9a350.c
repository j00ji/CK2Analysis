
undefined8 FUN_140b9a350(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar2 = (longlong *)FUN_140b9a450();
  cVar1 = (**(code **)(*plVar2 + 0x30))();
  if ((cVar1 != '\0') && (plVar2 == *(longlong **)(param_2 + 0x168))) {
    if ((*(longlong *)(param_2 + 0x28) == 0) ||
       (lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x108), lVar6 == 0)) {
      lVar6 = *(longlong *)(param_2 + 0x1a8);
      iVar4 = 0;
      lVar5 = *(longlong *)(lVar6 + 0x1a8);
      if (lVar6 != *(longlong *)(lVar6 + 0x1a8)) {
        do {
          lVar3 = lVar5;
          if (4 < iVar4) break;
          iVar4 = iVar4 + 1;
          lVar5 = *(longlong *)(lVar3 + 0x1a8);
          lVar6 = lVar3;
        } while (lVar3 != *(longlong *)(lVar3 + 0x1a8));
      }
    }
    lVar5 = *(longlong *)(lVar6 + 0x28);
    if (((lVar5 == 0) || (*(longlong *)(lVar5 + 0xb0) == 0)) ||
       (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0xb0) + 8),
       (*(longlong *)(lVar5 + 0x40) - *(longlong *)(lVar5 + 0x38) & 0xfffffffffffffff8U) == 0)) {
      lVar5 = DAT_1416e3ad0;
      if (0 < (int)(*(longlong *)(lVar6 + 0x78) - *(longlong *)(lVar6 + 0x70) >> 3)) {
        lVar5 = **(longlong **)(lVar6 + 0x70);
      }
    }
    else {
      lVar5 = **(longlong **)(lVar5 + 0x38);
    }
    if ((*(char *)(lVar5 + 0x394) == '\0') && (*(char *)(lVar5 + 0x395) == '\0')) {
      return 0;
    }
  }
  return 1;
}

