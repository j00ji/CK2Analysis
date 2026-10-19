
undefined8 *
FUN_140ba87a0(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined1 param_4,
             undefined1 param_5)

{
  FUN_1401554f0(param_1,0x27f1,param_3,0,0,0);
  *param_1 = &PTR_FUN_141144510;
  param_1[0x10] = param_2;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x12) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x94) = param_4;
  *(uint *)(param_1 + 0x13) = (uint)*(ushort *)(*(longlong *)(param_2 + 0x80) + 0xe8);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = param_5;
  return param_1;
}

