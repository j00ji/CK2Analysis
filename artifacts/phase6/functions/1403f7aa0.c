
/* WARNING: Removing unreachable block (ram,0x0001403f7b96) */

undefined8 *
FUN_1403f7aa0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
             undefined4 param_5,longlong *param_6,undefined1 param_7,undefined1 param_8)

{
  FUN_1401554f0(param_1,0x28cc,param_3,0,0,0,0xfffffffffffffffe);
  *param_1 = &PTR_FUN_1410971c0;
  param_1[0x10] = *param_2;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(int *)(param_1 + 0x12) = (int)param_3;
  *(undefined4 *)((longlong)param_1 + 0x94) = param_5;
  *(undefined1 *)(param_1 + 0x13) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x99) = param_7;
  *(undefined1 *)((longlong)param_1 + 0x9a) = param_8;
  *(undefined1 *)((longlong)param_1 + 0x9b) = 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if (0 < (int)(param_6[1] - *param_6 >> 2)) {
    FUN_140394db0(param_1 + 0x14,param_6);
  }
  return param_1;
}

