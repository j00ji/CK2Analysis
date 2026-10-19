
undefined8 *
FUN_140b95100(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *param_1 = &PTR_FUN_1410f8b78;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 3) = 0x18e;
  param_1[2] = &PTR_FUN_14114b020;
  *(undefined4 *)(param_1 + 4) = DAT_1417ed630;
  *(undefined4 *)((longlong)param_1 + 0x24) = DAT_1417ed634;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_141143198;
  param_1[2] = &PTR_LAB_1411430b8;
  param_1[6] = &PTR_FUN_141143188;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  puVar4 = param_1 + 0x17;
  param_1[0x1a] = 0xf;
  param_1[0x19] = 0;
  puVar2 = puVar4;
  if (0xf < (ulonglong)param_1[0x1a]) {
    puVar2 = (undefined8 *)*puVar4;
  }
  *(undefined1 *)puVar2 = 0;
  FUN_1400b0300(puVar4,&DAT_14106162d,0,param_4,0xfffffffffffffffe);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf4) = 0;
  puVar2 = param_1 + 0x1f;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  if (0xf < (ulonglong)param_1[0x22]) {
    puVar2 = (undefined8 *)*puVar2;
  }
  *(undefined1 *)puVar2 = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)((longlong)param_1 + 0x155) = 0x1000000;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  lVar1 = DAT_1416e2360;
  param_1[0x2c] = DAT_1416e2360;
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(lVar1 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)(lVar1 + 0x14);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x29c77f8;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3c] = 0x29c77f8;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  puVar3 = (undefined4 *)FUN_14077c7b0(DAT_1416e3260);
  *(undefined4 *)(param_1 + 0x3c) = *puVar3;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  lVar1 = DAT_1416e2360;
  param_1[0x26] = DAT_1416e2360;
  param_1[0x28] = lVar1;
  param_1[0x27] = lVar1;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  return param_1;
}

