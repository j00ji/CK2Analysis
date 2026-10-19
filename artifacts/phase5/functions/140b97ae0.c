
void FUN_140b97ae0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  undefined1 local_c;
  
  uVar6 = 0xfffffffffffffffe;
  local_20 = (undefined8 *)0x0;
  uStack_18 = 0;
  local_10 = 0;
  local_c = 0;
  plVar5 = (longlong *)(param_1 + 0x38);
  if (param_1 == 0) {
    plVar5 = (longlong *)0x0;
  }
  lVar2 = *plVar5;
  while (lVar2 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x10);
    FUN_1400cd690(&local_20);
  }
  iVar1 = *(int *)(param_1 + 0x48);
  while (puVar4 = local_20, iVar1 != 0) {
    FUN_140b987f0(param_1,**(undefined8 **)(param_1 + 0x38));
    iVar1 = *(int *)(param_1 + 0x48);
  }
  while (puVar3 = local_20, puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)puVar4[2];
    FUN_140b97bb0(param_1,*puVar4,0xffffffff,param_4,uVar6);
    puVar4 = puVar3;
  }
  while (puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)puVar3[2];
    thunk_FUN_140e1c5e4(puVar3,0x20);
    puVar3 = puVar4;
  }
  return;
}

