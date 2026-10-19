
void FUN_1403be470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  puVar1 = operator_new(0x18);
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
  *puVar1 = &PTR_LAB_141090370;
  puVar1[2] = param_2;
  FUN_14026d370(param_1,param_2,puVar1,param_4,uVar2);
  return;
}

