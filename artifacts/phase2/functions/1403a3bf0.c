
undefined8 *
FUN_1403a3bf0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 local_60 [88];
  
  *(undefined4 *)(param_2 + 1) = 0x18e;
  *param_2 = &PTR_FUN_141065928;
  param_2[10] = DAT_1416e3a70;
  uVar4 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    uVar1 = FUN_140ba4600(**(undefined8 **)(param_1 + 0x30));
    param_2[10] = uVar1;
  }
  param_1 = param_1 + 0x48;
  lVar3 = 3;
  do {
    lVar2 = FUN_14039cbf0(param_1,local_60,param_3,param_4,uVar4);
    param_1 = param_1 + 200;
    *(int *)(param_2 + 2) = *(int *)(param_2 + 2) + *(int *)(lVar2 + 0x10);
    *(int *)(param_2 + 6) = *(int *)(param_2 + 6) + *(int *)(lVar2 + 0x30);
    *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + *(int *)(lVar2 + 0x14)
    ;
    *(int *)((longlong)param_2 + 0x34) = *(int *)((longlong)param_2 + 0x34) + *(int *)(lVar2 + 0x34)
    ;
    *(int *)(param_2 + 3) = *(int *)(param_2 + 3) + *(int *)(lVar2 + 0x18);
    *(int *)(param_2 + 7) = *(int *)(param_2 + 7) + *(int *)(lVar2 + 0x38);
    *(int *)((longlong)param_2 + 0x1c) = *(int *)((longlong)param_2 + 0x1c) + *(int *)(lVar2 + 0x1c)
    ;
    *(int *)((longlong)param_2 + 0x3c) = *(int *)((longlong)param_2 + 0x3c) + *(int *)(lVar2 + 0x3c)
    ;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + *(int *)(lVar2 + 0x20);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + *(int *)(lVar2 + 0x40);
    *(int *)((longlong)param_2 + 0x24) = *(int *)((longlong)param_2 + 0x24) + *(int *)(lVar2 + 0x24)
    ;
    *(int *)((longlong)param_2 + 0x44) = *(int *)((longlong)param_2 + 0x44) + *(int *)(lVar2 + 0x44)
    ;
    *(int *)(param_2 + 5) = *(int *)(param_2 + 5) + *(int *)(lVar2 + 0x28);
    *(int *)(param_2 + 9) = *(int *)(param_2 + 9) + *(int *)(lVar2 + 0x48);
    *(int *)((longlong)param_2 + 0x2c) = *(int *)((longlong)param_2 + 0x2c) + *(int *)(lVar2 + 0x2c)
    ;
    *(int *)((longlong)param_2 + 0x4c) = *(int *)((longlong)param_2 + 0x4c) + *(int *)(lVar2 + 0x4c)
    ;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return param_2;
}

