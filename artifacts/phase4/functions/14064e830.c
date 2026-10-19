
void FUN_14064e830(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x368);
  puVar2 = *(undefined8 **)(lVar1 + 0x218);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(longlong *)(lVar1 + 0x218) = param_2;
  *(code **)(param_2 + 0x3a8) = FUN_14078e5b0;
  *(code **)(*(longlong *)(lVar1 + 0x218) + 0x3b0) = FUN_14078dd40;
  return;
}

