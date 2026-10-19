
undefined1 FUN_1403a1de0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x40) != 0)) {
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    do {
      if (puVar1 == (undefined8 *)0x0) {
        return 1;
      }
      uVar2 = *puVar1;
      puVar1 = (undefined8 *)puVar1[2];
      cVar3 = FUN_140b99d90(uVar2,param_2,0,0);
    } while (cVar3 != '\0');
    return 0;
  }
  return 0;
}

