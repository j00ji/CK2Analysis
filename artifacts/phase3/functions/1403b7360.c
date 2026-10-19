
undefined8 FUN_1403b7360(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  ulonglong local_res8;
  undefined8 uVar6;
  undefined **local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  uVar6 = 0xfffffffffffffffe;
  pppuVar4 = (undefined ***)0x0;
  local_res8 = local_res8 & 0xffffffff00000000;
  pppuVar5 = pppuVar4;
  plVar1 = *(longlong **)(param_1 + 0x10);
  do {
    if ((int)(plVar1[0x1a] - plVar1[0x19] >> 3) != 0) {
      lVar3 = FUN_1403a3bf0(*(longlong **)(param_1 + 0x10),&local_68);
      if (*(int *)(lVar3 + 0x10) + *(int *)(lVar3 + 0x14) + *(int *)(lVar3 + 0x18) +
          *(int *)(lVar3 + 0x1c) + *(int *)(lVar3 + 0x20) + *(int *)(lVar3 + 0x24) +
          *(int *)(lVar3 + 0x28) + *(int *)(lVar3 + 0x2c) != 0) {
        pppuVar5 = pppuVar4;
        plVar1 = *(longlong **)(param_1 + 0x18);
        goto LAB_1403b74a0;
      }
      break;
    }
    pppuVar5 = (undefined ***)((longlong)pppuVar5 + 1);
    plVar1 = plVar1 + 0x19;
  } while ((longlong)pppuVar5 < 3);
  local_60 = 0x18e;
  local_68 = &PTR_FUN_141065928;
  local_18 = DAT_1416e3a70;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  cVar2 = FUN_1403a2a80(*(undefined8 *)(param_1 + 0x10),&local_68);
  local_res8 = DAT_1417e8e38;
  pppuVar5 = &local_68;
  if (cVar2 == '\0') {
    pppuVar5 = pppuVar4;
  }
  FUN_1403ad020(param_1,0,pppuVar5,DAT_1416e2360,0,&local_res8,uVar6);
  FUN_1403a2150(*(undefined8 *)(param_1 + 0x10),cVar2);
  return 1;
  while (pppuVar5 = (undefined ***)((longlong)pppuVar5 + 1), plVar1 = plVar1 + 0x19,
        (longlong)pppuVar5 < 3) {
LAB_1403b74a0:
    if ((int)(plVar1[0x1a] - plVar1[0x19] >> 3) != 0) {
      lVar3 = FUN_1403a3bf0(*(longlong **)(param_1 + 0x18),&local_68);
      if (*(int *)(lVar3 + 0x10) + *(int *)(lVar3 + 0x14) + *(int *)(lVar3 + 0x18) +
          *(int *)(lVar3 + 0x1c) + *(int *)(lVar3 + 0x20) + *(int *)(lVar3 + 0x24) +
          *(int *)(lVar3 + 0x28) + *(int *)(lVar3 + 0x2c) != 0) {
        return 0;
      }
      break;
    }
  }
  local_60 = 0x18e;
  local_68 = &PTR_FUN_141065928;
  local_18 = DAT_1416e3a70;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  cVar2 = FUN_1403a2a80(*(undefined8 *)(param_1 + 0x18),&local_68);
  local_res8 = DAT_1417e8e38;
  pppuVar5 = &local_68;
  if (cVar2 == '\0') {
    pppuVar5 = pppuVar4;
  }
  FUN_1403ad020(param_1,1,pppuVar5,DAT_1416e2360,0,&local_res8);
  FUN_1403a2150(*(undefined8 *)(param_1 + 0x18),cVar2);
  return 1;
}

