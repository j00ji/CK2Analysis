
void FUN_140bb0ed0(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_res8;
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  if ((*(int *)(param_1 + 0xe8) != DAT_1417ed634) || (*(int *)(param_1 + 0xe4) != DAT_1417ed630)) {
    lVar3 = FUN_1400d3090(param_1 + 0xe4);
    lVar4 = DAT_1416e2360;
    if (lVar3 != 0) {
      lVar4 = lVar3;
    }
    *(longlong *)(param_1 + 0xd8) = lVar4;
    *(ulonglong *)(param_1 + 0xe4) = CONCAT44(DAT_1417ed634,DAT_1417ed630);
  }
  lVar4 = FUN_140a82af0(param_1 + 0x80);
  local_res8 = (void *)CONCAT44(local_res8._4_4_,1000);
  if (*(char *)(param_1 + 0xe0) == '\0') {
    lVar3 = DAT_1418d6ab0;
    if (((DAT_1418d6ab8 != 0) &&
        (uVar2 = *(uint *)(lVar4 + 0x3e0) & 0xffffff, uVar2 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
       (lVar3 = *(longlong *)(*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar2 * 0x10),
       lVar3 == 0)) {
      lVar3 = DAT_1418d6ab0;
    }
    uVar8 = FUN_1409f5be0(lVar3,*(undefined8 *)(param_1 + 0xd8),0,&local_res8,uVar8);
    local_res8 = operator_new(0x240);
    lVar3 = FUN_1401add10(local_res8);
  }
  else {
    lVar3 = DAT_1418d6ab0;
    if (((DAT_1418d6ab8 != 0) &&
        (uVar2 = *(uint *)(lVar4 + 0x3e0) & 0xffffff, uVar2 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
       (lVar3 = *(longlong *)(*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar2 * 0x10),
       lVar3 == 0)) {
      lVar3 = DAT_1418d6ab0;
    }
    uVar8 = FUN_1409f5e90(lVar3,*(undefined8 *)(param_1 + 0xd8),&local_res8);
    local_res8 = operator_new(0x250);
    lVar3 = FUN_140ba7310(local_res8);
  }
  pcVar1 = *(code **)(*(longlong *)(lVar3 + 0x10) + 0x38);
  if (pcVar1 == FUN_140b953f0) {
    iVar7 = *(int *)(DAT_1416e3260 + 0x42c) + 1;
    *(int *)(DAT_1416e3260 + 0x42c) = iVar7;
    local_res8 = (void *)CONCAT44(iVar7,0x3e);
    FUN_140c425f0((longlong *)(lVar3 + 0x10),&local_res8,0);
  }
  else {
    (*pcVar1)();
  }
  if ((*(char *)(param_1 + 0xe0) == '\0') &&
     (lVar5 = FUN_14023cf90(*(undefined8 *)(param_1 + 0xd8),uVar8),
     (*(byte *)(lVar5 + 0x1e9) & 2) != 0)) {
    FUN_14023aa20(lVar5,uVar8);
  }
  lVar5 = DAT_1418d6ab0;
  if (((DAT_1418d6ab8 != 0) &&
      (uVar2 = *(uint *)(lVar4 + 0x3e0) & 0xffffff, uVar2 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
     (lVar5 = *(longlong *)(*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar2 * 0x10),
     lVar5 == 0)) {
    lVar5 = DAT_1418d6ab0;
  }
  if ((*(int *)(lVar5 + 0x2c) == 4) && (*(char *)(DAT_1416e3260 + 0x34a) == '\0')) {
    uVar6 = FUN_1401fffd0(*(undefined8 *)(*(longlong *)(lVar5 + 0x30) + 0x498));
  }
  else {
    uVar6 = *(undefined8 *)(lVar5 + 0x70);
  }
  FUN_140b98e30(lVar3,uVar6);
  FUN_140b97bb0(lVar3,uVar8,0xffffffff);
  lVar4 = *(longlong *)(param_1 + 0xd8);
  lVar5 = *(longlong *)(lVar4 + 0x28);
  uVar8 = DAT_1416e3148;
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0xb0) != 0)) {
    if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0xb0) == 0)) {
      FUN_1401b3840(lVar4 + 0x20);
    }
    uVar8 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar4 + 0x28) + 0xb0) + 8);
  }
  FUN_1404942d0(uVar8,lVar3);
  (**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0x3b0))
            (*(longlong **)(DAT_1416e3260 + 0x370),uVar6);
  FUN_1403bc0c0(DAT_1416e3260 + 0x230,lVar3,*(undefined8 *)(lVar3 + 0x80));
  return;
}

