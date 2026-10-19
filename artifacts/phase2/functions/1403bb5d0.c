
int FUN_1403bb5d0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 local_res18 [4];
  
  cVar2 = (**(code **)(*param_3 + 0x70))(param_3);
  if ((((cVar2 != '\0') ||
       (lVar5 = (**(code **)(*param_3 + 0x50))(param_3), *(longlong *)(lVar5 + 0x230) != 0)) ||
      (*(char *)(*(longlong *)(param_2 + 0xf0) + 100) == '\0')) ||
     ((param_3[0xd] != 0 && (*(int *)(param_3[0xd] + 8) != 0)))) {
    return 0;
  }
  puVar1 = *(undefined8 **)(param_2 + 0xcc0);
  do {
    iVar3 = 0;
    uVar6 = 0;
    if (puVar1 == (undefined8 *)0x0) goto LAB_1403bb692;
    uVar6 = *puVar1;
    puVar1 = (undefined8 *)puVar1[2];
    cVar2 = FUN_140b99d90(param_3,uVar6,0,0);
  } while (cVar2 == '\0');
  if (*(char *)(*(longlong *)(param_2 + 0xf0) + 100) == '\0') {
    iVar3 = 2;
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = 1;
LAB_1403bb692:
    local_res18[0] = 0xffffffff;
    uVar4 = 0xffffffff;
    if (iVar3 == 0) {
      if ((param_3[0xf] != 0) && (*(int *)(param_3[0xf] + 8) != 0)) {
        return 0;
      }
      iVar3 = FUN_1403bb720(param_1,param_2,param_3,local_res18);
      uVar4 = local_res18[0];
      if (iVar3 == 0) {
        return 0;
      }
    }
  }
  if ((*(longlong *)(param_2 + 0xce0) == 0) || (*(int *)(*(longlong *)(param_2 + 0xce0) + 8) == 0))
  {
    local_res18[0] = uVar4;
    FUN_1403bc270(param_1,param_2,iVar3,param_3,uVar6,local_res18);
  }
  return iVar3;
}

