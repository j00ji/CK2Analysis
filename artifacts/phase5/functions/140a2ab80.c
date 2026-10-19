
void FUN_140a2ab80(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 local_res8;
  int local_resc;
  
  puVar3 = (undefined4 *)FUN_14077c7b0(DAT_1416e3260);
  lVar1 = DAT_1416e3260;
  local_res8 = 0x3f;
  *(undefined4 *)(param_1 + 0x108) = *puVar3;
  local_resc = *(int *)(lVar1 + 0x430) + 1;
  *(int *)(lVar1 + 0x430) = local_resc;
  cVar2 = FUN_140c425f0(param_1,&local_res8,1);
  while (cVar2 == '\0') {
    local_resc = *(int *)(DAT_1416e3260 + 0x430) + 1;
    *(int *)(DAT_1416e3260 + 0x430) = local_resc;
    cVar2 = FUN_140c425f0(param_1,&local_res8,1);
  }
  return;
}

