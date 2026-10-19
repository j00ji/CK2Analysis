
undefined8 * FUN_140ba47e0(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = DAT_1416e3a70;
  *param_2 = &PTR_FUN_141065928;
  *(undefined4 *)(param_2 + 1) = 0x18e;
  param_2[10] = uVar3;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  plVar1 = *(longlong **)(param_1 + 0x38);
  while (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
    plVar1 = (longlong *)plVar1[2];
    param_2[10] = uVar3;
    *(int *)(param_2 + 2) = *(int *)(param_2 + 2) + *(int *)(lVar2 + 0xa8);
    *(int *)(param_2 + 6) = *(int *)(param_2 + 6) + *(int *)(lVar2 + 200);
    *(int *)((longlong)param_2 + 0x14) = *(int *)((longlong)param_2 + 0x14) + *(int *)(lVar2 + 0xac)
    ;
    *(int *)((longlong)param_2 + 0x34) = *(int *)((longlong)param_2 + 0x34) + *(int *)(lVar2 + 0xcc)
    ;
    *(int *)(param_2 + 3) = *(int *)(param_2 + 3) + *(int *)(lVar2 + 0xb0);
    *(int *)(param_2 + 7) = *(int *)(param_2 + 7) + *(int *)(lVar2 + 0xd0);
    *(int *)((longlong)param_2 + 0x1c) = *(int *)((longlong)param_2 + 0x1c) + *(int *)(lVar2 + 0xb4)
    ;
    *(int *)((longlong)param_2 + 0x3c) = *(int *)((longlong)param_2 + 0x3c) + *(int *)(lVar2 + 0xd4)
    ;
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + *(int *)(lVar2 + 0xb8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + *(int *)(lVar2 + 0xd8);
    *(int *)((longlong)param_2 + 0x24) = *(int *)((longlong)param_2 + 0x24) + *(int *)(lVar2 + 0xbc)
    ;
    *(int *)((longlong)param_2 + 0x44) = *(int *)((longlong)param_2 + 0x44) + *(int *)(lVar2 + 0xdc)
    ;
    *(int *)(param_2 + 5) = *(int *)(param_2 + 5) + *(int *)(lVar2 + 0xc0);
    *(int *)(param_2 + 9) = *(int *)(param_2 + 9) + *(int *)(lVar2 + 0xe0);
    *(int *)((longlong)param_2 + 0x2c) = *(int *)((longlong)param_2 + 0x2c) + *(int *)(lVar2 + 0xc4)
    ;
    *(int *)((longlong)param_2 + 0x4c) = *(int *)((longlong)param_2 + 0x4c) + *(int *)(lVar2 + 0xe4)
    ;
    if ((param_3 == '\0') && (*(int *)(lVar2 + 0x138) != 1000)) {
      *(int *)(param_2 + 2) =
           ((int)(((longlong)*(int *)(param_2 + 2) * (longlong)*(int *)(lVar2 + 0x138)) / 1000) /
           1000) * 1000;
      *(int *)((longlong)param_2 + 0x14) =
           ((int)(((longlong)*(int *)(lVar2 + 0x138) * (longlong)*(int *)((longlong)param_2 + 0x14))
                 / 1000) / 1000) * 1000;
      *(int *)(param_2 + 3) =
           ((int)(((longlong)*(int *)(lVar2 + 0x138) * (longlong)*(int *)(param_2 + 3)) / 1000) /
           1000) * 1000;
      *(int *)((longlong)param_2 + 0x1c) =
           ((int)(((longlong)*(int *)(lVar2 + 0x138) * (longlong)*(int *)((longlong)param_2 + 0x1c))
                 / 1000) / 1000) * 1000;
      *(int *)(param_2 + 4) =
           ((int)(((longlong)*(int *)(lVar2 + 0x138) * (longlong)*(int *)(param_2 + 4)) / 1000) /
           1000) * 1000;
      *(int *)((longlong)param_2 + 0x24) =
           ((int)(((longlong)*(int *)(lVar2 + 0x138) * (longlong)*(int *)((longlong)param_2 + 0x24))
                 / 1000) / 1000) * 1000;
      *(int *)(param_2 + 5) =
           ((int)(((longlong)*(int *)(lVar2 + 0x138) * (longlong)*(int *)(param_2 + 5)) / 1000) /
           1000) * 1000;
      *(int *)((longlong)param_2 + 0x2c) =
           ((int)(((longlong)*(int *)((longlong)param_2 + 0x2c) * (longlong)*(int *)(lVar2 + 0x138))
                 / 1000) / 1000) * 1000;
    }
  }
  uVar3 = FUN_140ba4600(param_1);
  param_2[10] = uVar3;
  return param_2;
}

