
void FUN_1403aa2a0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_140269c60(param_1 + 0x58);
  uVar2 = FUN_140269c60(param_1 + 0x70,uVar2);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    uVar2 = (*(code *)**(undefined8 **)(lVar1 + 0x10))(lVar1 + 0x10,uVar2);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    uVar2 = (*(code *)**(undefined8 **)(lVar1 + 0x10))(lVar1 + 0x10,uVar2);
  }
  FUN_1401ac450(param_1,0x98,uVar2);
  return;
}

