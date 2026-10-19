
undefined4 * FUN_140ba2760(longlong *param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  if ((*(char *)(*(longlong *)(param_3 + 0xf0) + 100) == '\0') &&
     (*(char *)(*(longlong *)(param_1[0x10] + 0xf0) + 100) != '\0')) {
    cVar2 = (**(code **)(*param_1 + 0x68))();
    if (cVar2 != '\0') {
      *param_2 = DAT_1416e2b1c;
      return param_2;
    }
  }
  if ((*(char *)(*(longlong *)(param_3 + 0xf0) + 100) != '\0') &&
     (*(char *)(*(longlong *)(param_1[0x10] + 0xf0) + 100) == '\0')) {
    cVar2 = (**(code **)(*param_1 + 0x68))(param_1);
    if (cVar2 != '\0') {
      *param_2 = DAT_1416e2bb0;
      return param_2;
    }
  }
  lVar1 = *(longlong *)(param_1[0x10] + 0xf0);
  iVar3 = FUN_140959c40(lVar1,*(undefined2 *)(param_3 + 0xe8));
  if (iVar3 < 0) {
    *param_2 = 1000;
    return param_2;
  }
  *param_2 = *(undefined4 *)(*(longlong *)(lVar1 + 0x198) + 0xc + (longlong)iVar3 * 0x18);
  return param_2;
}

