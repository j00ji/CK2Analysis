
undefined8 * FUN_140bbb130(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 local_60 [88];
  
  *param_2 = &PTR_FUN_141065928;
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
  plVar1 = (longlong *)*param_1;
  while (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
    plVar1 = (longlong *)plVar1[2];
    if ((param_4 != '\0') || (*(int *)(lVar2 + 0xb4) < 1)) {
      lVar2 = FUN_140ba47e0(lVar2,local_60,param_3);
      *(int *)(param_2 + 2) = *(int *)(param_2 + 2) + *(int *)(lVar2 + 0x10);
      *(int *)(param_2 + 6) = *(int *)(param_2 + 6) + *(int *)(lVar2 + 0x30);
      *(int *)((longlong)param_2 + 0x14) =
           *(int *)((longlong)param_2 + 0x14) + *(int *)(lVar2 + 0x14);
      *(int *)((longlong)param_2 + 0x34) =
           *(int *)((longlong)param_2 + 0x34) + *(int *)(lVar2 + 0x34);
      *(int *)(param_2 + 3) = *(int *)(param_2 + 3) + *(int *)(lVar2 + 0x18);
      *(int *)(param_2 + 7) = *(int *)(param_2 + 7) + *(int *)(lVar2 + 0x38);
      *(int *)((longlong)param_2 + 0x1c) =
           *(int *)((longlong)param_2 + 0x1c) + *(int *)(lVar2 + 0x1c);
      *(int *)((longlong)param_2 + 0x3c) =
           *(int *)((longlong)param_2 + 0x3c) + *(int *)(lVar2 + 0x3c);
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + *(int *)(lVar2 + 0x20);
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + *(int *)(lVar2 + 0x40);
      *(int *)((longlong)param_2 + 0x24) =
           *(int *)((longlong)param_2 + 0x24) + *(int *)(lVar2 + 0x24);
      *(int *)((longlong)param_2 + 0x44) =
           *(int *)((longlong)param_2 + 0x44) + *(int *)(lVar2 + 0x44);
      *(int *)(param_2 + 5) = *(int *)(param_2 + 5) + *(int *)(lVar2 + 0x28);
      *(int *)(param_2 + 9) = *(int *)(param_2 + 9) + *(int *)(lVar2 + 0x48);
      *(int *)((longlong)param_2 + 0x2c) =
           *(int *)((longlong)param_2 + 0x2c) + *(int *)(lVar2 + 0x2c);
      *(int *)((longlong)param_2 + 0x4c) =
           *(int *)((longlong)param_2 + 0x4c) + *(int *)(lVar2 + 0x4c);
    }
  }
  return param_2;
}

