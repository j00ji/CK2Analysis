
void FUN_140a2ac20(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 *puVar4;
  
  lVar2 = DAT_1416e3260;
  puVar4 = (undefined4 *)FUN_14077c7b0(DAT_1416e3260);
  uVar1 = *puVar4;
  *(undefined4 *)(param_1 + 0x108) = uVar1;
  if (*(uint *)(lVar2 + 0x430) <= *(uint *)(param_2 + 4)) {
    *(uint *)(lVar2 + 0x430) = *(uint *)(param_2 + 4) + 1;
  }
  cVar3 = FUN_140c425f0(param_1,param_2,CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1));
  if (cVar3 == '\0') {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

