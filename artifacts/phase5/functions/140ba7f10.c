
void FUN_140ba7f10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int local_res8 [2];
  
  FUN_140b96490();
  plVar2 = *(longlong **)(param_1 + 0x220);
  if (plVar2 != (longlong *)0x0) {
    do {
      lVar1 = *plVar2;
      plVar2 = (longlong *)plVar2[2];
      plVar3 = (longlong *)(lVar1 + 0x10);
      if (lVar1 == 0) {
        plVar3 = (longlong *)0x0;
      }
      FUN_140c34e50(param_2,0x27ec);
      (**(code **)(*plVar3 + 8))(plVar3,param_2);
    } while (plVar2 != (longlong *)0x0);
  }
  local_res8[0] = *(int *)(param_1 + 0x238);
  if (0 < local_res8[0]) {
    FUN_140c33980(param_2,0x2739,local_res8);
  }
  return;
}

