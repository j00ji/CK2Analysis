
void FUN_1407d40b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_1417e3b38;
  if (DAT_1417e3b38 == (undefined8 *)0x0) {
    puVar1 = operator_new(8);
    DAT_1417e3b38 = puVar1;
    *puVar1 = &PTR_FUN_14114aef8;
  }
  DAT_1417e3b4c = *(undefined4 *)(param_1 + 0x80);
  DAT_1417e3b48 = 0;
  if (puVar1 == (undefined8 *)0x0) {
    DAT_1417e3b38 = operator_new(8);
    *DAT_1417e3b38 = &PTR_FUN_14114aef8;
  }
  DAT_1417e3b48 = *(undefined4 *)(param_1 + 0x84);
  FUN_140c4a720();
  FUN_1407880a0(DAT_1416e3260);
  return;
}

