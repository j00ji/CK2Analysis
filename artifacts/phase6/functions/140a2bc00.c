
void FUN_140a2bc00(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int *piVar3;
  
  uVar2 = FUN_1400d3090(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  uVar2 = FUN_1400d3090(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  uVar2 = FUN_1400d3090(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = uVar2;
  *(undefined8 *)(param_1 + 0xf0) = uVar2;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    *(undefined8 *)(param_1 + 0x50) = DAT_1416e2360;
  }
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((lVar1 == 0) ||
     ((*(longlong *)(lVar1 + 0x28) != 0 &&
      ((*(byte *)(*(longlong *)(lVar1 + 0x28) + 0xd6c) & 2) != 0)))) {
LAB_140a2bcac:
    *(undefined8 *)(param_1 + 0x48) = DAT_1416e2360;
  }
  else if (DAT_1417e6c90 < *(int *)(lVar1 + 0xbc)) {
    piVar3 = (int *)FUN_14077c7b0(DAT_1416e3260);
    if ((*piVar3 < *(int *)(lVar1 + 0xb8)) || (*(int *)(lVar1 + 0xbc) <= *piVar3))
    goto LAB_140a2bcac;
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    if ((*(longlong *)(lVar1 + 0x28) == 0) ||
       ((*(byte *)(*(longlong *)(lVar1 + 0x28) + 0xd6c) & 2) == 0)) {
      if (DAT_1417e6c90 < *(int *)(lVar1 + 0xbc)) {
        piVar3 = (int *)FUN_14077c7b0(DAT_1416e3260);
        if ((*piVar3 < *(int *)(lVar1 + 0xb8)) || (*(int *)(lVar1 + 0xbc) <= *piVar3))
        goto LAB_140a2bd3a;
      }
      FUN_1401b4500(*(undefined8 *)(param_1 + 0xf0));
      lVar1 = *(longlong *)(param_1 + 0xf0);
      if (*(longlong *)(lVar1 + 0x28) == 0) {
        return;
      }
      *(longlong *)(*(longlong *)(lVar1 + 0x28) + 0xcf0) = param_1;
      *(undefined1 *)(lVar1 + 0x1c8) = 1;
      return;
    }
  }
LAB_140a2bd3a:
  *(undefined8 *)(param_1 + 0xf0) = DAT_1416e2360;
  return;
}

