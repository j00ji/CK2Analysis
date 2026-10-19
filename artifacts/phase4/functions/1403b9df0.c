
void FUN_1403b9df0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  while (puVar1 != (undefined8 *)0x0) {
    plVar2 = (longlong *)*puVar1;
    puVar1 = (undefined8 *)puVar1[3];
    uVar3 = (**(code **)(*plVar2 + 0x58))(plVar2);
    FUN_140c34e50(param_2,uVar3);
    (**(code **)(*plVar2 + 8))(plVar2,param_2);
  }
  return;
}

