
bool FUN_140ba6360(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  
  if (*(char *)(*(longlong *)(param_2 + 0xf0) + 100) != '\0') {
    return *(char *)(param_2 + 0xdaa) == '\0';
  }
  puVar1 = *(undefined8 **)(param_2 + 0xcc0);
  do {
    do {
      if (puVar1 == (undefined8 *)0x0) {
        return false;
      }
      plVar2 = (longlong *)*puVar1;
      puVar1 = (undefined8 *)puVar1[2];
      cVar3 = (**(code **)(*plVar2 + 0x70))(plVar2);
    } while (cVar3 == '\0');
    uVar4 = (**(code **)(*plVar2 + 0x60))(plVar2);
    cVar3 = FUN_140ba7980(uVar4,param_1);
  } while (cVar3 == '\0');
  return true;
}

