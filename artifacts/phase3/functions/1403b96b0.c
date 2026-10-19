
undefined8 *
FUN_1403b96b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = param_1[1];
  uVar3 = *param_1;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 8);
    while (iVar1 != 0) {
      LOCK();
      bVar4 = iVar1 == *(int *)(lVar2 + 8);
      if (bVar4) {
        *(int *)(lVar2 + 8) = iVar1 + 1;
      }
      UNLOCK();
      if (bVar4) {
        FUN_14026d370(param_2,uVar3,lVar2,param_4,0xfffffffffffffffe);
        return param_2;
      }
      iVar1 = *(int *)(lVar2 + 8);
    }
  }
  return param_2;
}

