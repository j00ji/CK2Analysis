
undefined8 * FUN_1403a40e0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 1) = 0x18e;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1410900c8;
  lVar1 = DAT_1418d6ab0;
  param_1[3] = 0;
  if (lVar1 == 0) {
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar1 + 0x18);
  }
  uVar2 = FUN_140822200(DAT_1416e32d8,0);
  uVar3 = DAT_1416e32d8;
  param_1[5] = uVar2;
  uVar3 = FUN_140822200(uVar3,0);
  param_1[6] = uVar3;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = DAT_14144fe3c;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}

