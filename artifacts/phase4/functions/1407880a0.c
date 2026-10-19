
void FUN_1407880a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_1417e3b38;
  if (DAT_1417e3b38 == (undefined8 *)0x0) {
    puVar1 = operator_new(8);
    DAT_1417e3b38 = puVar1;
    *puVar1 = &PTR_FUN_14114aef8;
  }
  **(undefined4 **)(param_1 + 0x408) = DAT_1417e3b48;
  if (puVar1 == (undefined8 *)0x0) {
    DAT_1417e3b38 = operator_new(8);
    *DAT_1417e3b38 = &PTR_FUN_14114aef8;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 4) = DAT_1417e3b4c;
  return;
}

