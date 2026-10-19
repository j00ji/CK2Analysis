
undefined8 *
FUN_140848850(longlong param_1,undefined8 *param_2,int *param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6,int *param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_38 [4];
  
  piVar4 = (int *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_141065928;
  iVar5 = 0;
  param_2[10] = DAT_1416e3a70;
  *(undefined4 *)(param_2 + 1) = 0x18e;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  local_38[1] = 0;
  do {
    if (0 < *piVar4) {
      FUN_140847fd0(param_1,local_38,iVar5,param_4,param_5,param_6);
      iVar2 = *piVar4;
      local_38[0] = (int)(((longlong)local_38[0] * 1000) / (longlong)iVar2);
      if (local_38[0] < 100) {
        local_38[0] = 100;
      }
      if (*param_7 != 1000) {
        local_38[0] = (int)(((longlong)*param_7 * (longlong)local_38[0]) / 1000);
      }
      if (local_38[0] == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = (int)(((longlong)*param_3 * (longlong)iVar2) / 1000);
        if (iVar3 + 0x189373U < 0x39580e) {
          iVar3 = (iVar3 * 1000) / local_38[0];
        }
        else {
          iVar3 = (int)(((longlong)iVar3 * 1000) / (longlong)local_38[0]);
        }
      }
      if (iVar2 < iVar3) {
        iVar3 = iVar2;
      }
      *piVar4 = iVar2 - iVar3;
      piVar1 = (int *)((longlong)piVar4 + ((longlong)param_2 - param_1));
      *piVar1 = *piVar1 + iVar3;
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar5 < 8);
  return param_2;
}

