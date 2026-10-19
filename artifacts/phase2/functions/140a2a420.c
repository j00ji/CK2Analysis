
undefined8 * FUN_140a2a420(undefined8 *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined8 local_30;
  ulonglong local_28;
  
  uVar5 = 0xfffffffffffffffe;
  *(undefined4 *)(param_1 + 1) = 0x18e;
  *param_1 = &PTR_FUN_14114b020;
  *(undefined4 *)(param_1 + 2) = DAT_1417ed630;
  *(undefined4 *)((longlong)param_1 + 0x14) = DAT_1417ed634;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_1410fba40;
  param_1[4] = &PTR_FUN_1410fbb30;
  uVar4 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 1000;
  uVar2 = DAT_1416e2360;
  uVar1 = DAT_1416e2360;
  if (param_2 != '\0') {
    uVar1 = uVar4;
  }
  param_1[9] = uVar1;
  if (param_2 != '\0') {
    uVar2 = uVar4;
  }
  param_1[10] = uVar2;
  local_28 = 0xf;
  local_30 = 0;
  local_40 = 0;
  FUN_1400b0300(&local_40,&DAT_14106162d,0,param_4,0xfffffffffffffffe);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = DAT_1417ed630;
  *(undefined4 *)((longlong)param_1 + 100) = DAT_1417ed634;
  if (0xf < local_28) {
    FUN_1400b08c0(&local_40,CONCAT71(uStack_3f,local_40),local_28 + 1);
  }
  local_28 = 0xf;
  local_30 = 0;
  local_40 = 0;
  FUN_1400b0300(&local_40,&DAT_14106162d,0,param_4,uVar5);
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = DAT_1417ed630;
  *(undefined4 *)((longlong)param_1 + 0x74) = DAT_1417ed634;
  if (0xf < local_28) {
    FUN_1400b08c0(&local_40,CONCAT71(uStack_3f,local_40),local_28 + 1);
  }
  param_1[0xf] = 0;
  if ((param_2 == '\0') && (DAT_1418d6ab0 != 0)) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(DAT_1418d6ab0 + 0x18);
    uVar2 = DAT_1416e3ad0;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar2 = DAT_1416e3ad0;
    if (param_2 != '\0') {
      uVar2 = uVar4;
    }
  }
  param_1[0x11] = uVar2;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x18e;
  param_1[0x13] = &PTR_FUN_141065928;
  param_1[0x1d] = DAT_1416e3a70;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar2 = DAT_1416e2360;
  if (param_2 != '\0') {
    uVar2 = uVar4;
  }
  param_1[0x1e] = uVar2;
  local_28 = 0xf;
  local_30 = 0;
  local_40 = 0;
  FUN_1400b0300(&local_40,&DAT_14106162d,0,param_4,uVar5);
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = DAT_1417ed630;
  *(undefined4 *)((longlong)param_1 + 0x104) = DAT_1417ed634;
  if (0xf < local_28) {
    FUN_1400b08c0(&local_40,CONCAT71(uStack_3f,local_40),local_28 + 1);
  }
  *(undefined4 *)(param_1 + 0x21) = 0x29c77f8;
  param_1[0x22] = DAT_1416e3a00;
  puVar3 = param_1 + 0x23;
  param_1[0x26] = 0xf;
  param_1[0x25] = 0;
  if (0xf < (ulonglong)param_1[0x26]) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  *(undefined4 *)(param_1 + 0x27) = 1000;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 1;
  param_1[0x28] = DAT_1414511f8;
  *(undefined4 *)(param_1 + 0x29) = 1000;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0x18e;
  param_1[0x2a] = &PTR_FUN_141065928;
  param_1[0x34] = DAT_1416e3a70;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1ac) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1ae) = 0;
  return param_1;
}

