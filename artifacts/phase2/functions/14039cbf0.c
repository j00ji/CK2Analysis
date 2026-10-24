
undefined8 * FUN_14039cbf0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  *(undefined4 *)(param_2 + 1) = 0x18e;
  *param_2 = &PTR_FUN_141065928;
  lVar4 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = DAT_1416e3a70;
  iVar2 = (int)(*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80) >> 3);
  if (0 < iVar2) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + lVar4 * 8);
      *(int *)(param_2 + 2) = *(int *)(param_2 + 2) + *(int *)(lVar1 + 0xa8);
      *(int *)(param_2 + 6) = *(int *)(param_2 + 6) + *(int *)(lVar1 + 200);
      *(int *)((longlong)param_2 + 0x14) =
           *(int *)((longlong)param_2 + 0x14) + *(int *)(lVar1 + 0xac);
      *(int *)((longlong)param_2 + 0x34) =
           *(int *)((longlong)param_2 + 0x34) + *(int *)(lVar1 + 0xcc);
      *(int *)(param_2 + 3) = *(int *)(param_2 + 3) + *(int *)(lVar1 + 0xb0);
      *(int *)(param_2 + 7) = *(int *)(param_2 + 7) + *(int *)(lVar1 + 0xd0);
      *(int *)((longlong)param_2 + 0x1c) =
           *(int *)((longlong)param_2 + 0x1c) + *(int *)(lVar1 + 0xb4);
      *(int *)((longlong)param_2 + 0x3c) =
           *(int *)((longlong)param_2 + 0x3c) + *(int *)(lVar1 + 0xd4);
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + *(int *)(lVar1 + 0xb8);
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + *(int *)(lVar1 + 0xd8);
      *(int *)((longlong)param_2 + 0x24) =
           *(int *)((longlong)param_2 + 0x24) + *(int *)(lVar1 + 0xbc);
      *(int *)((longlong)param_2 + 0x44) =
           *(int *)((longlong)param_2 + 0x44) + *(int *)(lVar1 + 0xdc);
      *(int *)(param_2 + 5) = *(int *)(param_2 + 5) + *(int *)(lVar1 + 0xc0);
      *(int *)(param_2 + 9) = *(int *)(param_2 + 9) + *(int *)(lVar1 + 0xe0);
      *(int *)((longlong)param_2 + 0x2c) =
           *(int *)((longlong)param_2 + 0x2c) + *(int *)(lVar1 + 0xc4);
      *(int *)((longlong)param_2 + 0x4c) =
           *(int *)((longlong)param_2 + 0x4c) + *(int *)(lVar1 + 0xe4);
      if ((lVar4 == 0) && (*(longlong *)(lVar1 + 0x28) != 0)) {
        uVar3 = FUN_140ba4600();
        param_2[10] = uVar3;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  return param_2;
}

