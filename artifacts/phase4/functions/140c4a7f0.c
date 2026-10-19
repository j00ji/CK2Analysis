
uint FUN_140c4a7f0(void)

{
  uint uVar1;
  undefined *puVar2;
  
  if (DAT_1417e3b32 != '\0') {
    return 0;
  }
  puVar2 = &DAT_1416d5ee0;
  if (DAT_1416d68a0 == 0) {
    FUN_140c4a600(&DAT_1416d5ee0);
  }
  uVar1 = *(uint *)(puVar2 + (longlong)DAT_1416d68a0 * 4) ^
          (int)*(uint *)(puVar2 + (longlong)DAT_1416d68a0 * 4) >> 0xb;
  uVar1 = uVar1 ^ (uVar1 & 0xff3a58ad) << 7;
  uVar1 = uVar1 ^ (uVar1 & 0xffffdf8c) << 0xf;
  DAT_1416d68a0 = (DAT_1416d68a0 + 1) % 0x270;
  if (DAT_1417e3b38 == (undefined8 *)0x0) {
    DAT_1417e3b38 = operator_new(8);
    *DAT_1417e3b38 = &PTR_FUN_14114aef8;
  }
  DAT_1417e3b48 = DAT_1417e3b48 + 1;
  return ((int)uVar1 >> 0x12 ^ uVar1) & 0x7fffffff;
}

