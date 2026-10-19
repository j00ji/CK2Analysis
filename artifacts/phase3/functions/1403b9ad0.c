
undefined8 * FUN_1403b9ad0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  while( true ) {
    if (plVar2 == (longlong *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    if (*plVar2 == param_3) break;
    plVar2 = (longlong *)plVar2[3];
  }
  *param_2 = 0;
  param_2[1] = 0;
  lVar3 = *plVar2;
  if (plVar2[1] != 0) {
    LOCK();
    piVar1 = (int *)(plVar2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  FUN_14026d370(param_2,lVar3);
  return param_2;
}

