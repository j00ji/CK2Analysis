
ulonglong FUN_140ba1ff0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int local_res10 [6];
  
  if (*(char *)(DAT_1416e3260 + 0x575) == '\0') {
    return DAT_1416e3260 & 0xffffffffffffff00;
  }
  cVar2 = (**(code **)(*param_1 + 0x68))();
  if ((cVar2 != '\0') && (0 < (int)param_1[0x14])) {
    uVar3 = FUN_140822200(DAT_1416e32d8,*(undefined4 *)param_1[0x12]);
    FUN_140ba2760(param_1,local_res10,uVar3);
    iVar1 = (int)param_1[0x16];
    if (local_res10[0] != 0) {
      if (iVar1 + 0x189373U < 0x39580e) {
        local_res10[0] = (iVar1 * 1000) / local_res10[0];
      }
      else {
        local_res10[0] = (int)(((longlong)iVar1 * 1000) / (longlong)local_res10[0]);
      }
      if (500 < local_res10[0]) {
        return 1;
      }
    }
  }
  return 0;
}

