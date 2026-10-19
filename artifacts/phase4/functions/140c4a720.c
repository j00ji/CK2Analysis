
void FUN_140c4a720(void)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = DAT_1417e3b38;
  if (DAT_1417e3b38 == (undefined8 *)0x0) {
    puVar1 = operator_new(8);
    DAT_1417e3b38 = puVar1;
    *puVar1 = &PTR_FUN_14114aef8;
  }
  FUN_140c4a4f0(&DAT_1416d5ee0,DAT_1417e3b4c);
  DAT_1416d68a0 = 0;
  iVar2 = 0;
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = operator_new(8);
      DAT_1417e3b38 = puVar1;
      *puVar1 = &PTR_FUN_14114aef8;
    }
    if (iVar2 == DAT_1417e3b48) break;
    if (DAT_1416d68a0 == 0) {
      FUN_140c4a600(&DAT_1416d5ee0);
    }
    DAT_1416d68a0 = (DAT_1416d68a0 + 1) % 0x270;
    iVar2 = iVar2 + 1;
  }
  return;
}

