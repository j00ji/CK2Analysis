
void FUN_140ba7dd0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_3 == 0x2739) {
    FUN_140c36fc0(param_2,param_1 + 0x238,0x2739,param_4,0xfffffffffffffffe);
  }
  else if (param_3 == 0x27ec) {
    pvVar2 = operator_new(0x240);
    lVar3 = FUN_1401add10(pvVar2);
    if (*(longlong *)(param_1 + 0x160) == 0) {
      lVar4 = FUN_1400d3090(param_1 + 0x158);
      *(longlong *)(param_1 + 0x150) = lVar4;
      if (lVar4 == 0) {
        lVar4 = DAT_1416e2360;
      }
      *(longlong *)(param_1 + 0x160) = lVar4;
    }
    FUN_140b977a0(lVar3,*(undefined8 *)(param_1 + 0x160));
    (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))((longlong *)(lVar3 + 0x10),param_2);
    FUN_140ba7c00(param_1 + -0x10,lVar3);
    if (*(longlong *)(param_1 + 0x160) == 0) {
      lVar4 = FUN_1400d3090(param_1 + 0x158);
      *(longlong *)(param_1 + 0x150) = lVar4;
      if (lVar4 == 0) {
        lVar4 = DAT_1416e2360;
      }
      *(longlong *)(param_1 + 0x160) = lVar4;
    }
    plVar5 = (longlong *)FUN_1400b1d10(*(undefined8 *)(param_1 + 0x160));
    cVar1 = (**(code **)(*plVar5 + 0x30))(plVar5);
    if (cVar1 != '\0') {
      FUN_1404942d0(plVar5,lVar3);
    }
  }
  else if (param_3 != 0x2932) {
    FUN_140b95f20();
  }
  return;
}

