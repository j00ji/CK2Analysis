
void FUN_140749530(longlong param_1)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  char local_b8;
  undefined7 uStack_b7;
  longlong local_a8;
  ulonglong local_a0;
  undefined **local_98;
  undefined4 local_90;
  char local_88;
  undefined7 uStack_87;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar8 = 0;
  lVar11 = param_1 + 0x10;
  if (param_1 == 0) {
    lVar11 = lVar8;
  }
  ppuVar2 = (undefined **)**(longlong **)(param_1 + 8);
  if (ppuVar2 == &PTR_FUN_1410d31c0) {
    plVar3 = *(longlong **)((*(longlong **)(param_1 + 8))[0x6d] + 0x218);
  }
  else {
    plVar3 = (longlong *)(*(code *)ppuVar2[0x1c])();
  }
  (**(code **)(*plVar3 + 8))(plVar3,lVar11);
  pvVar4 = operator_new(0xa8);
  uVar5 = FUN_1407970b0(pvVar4,param_1 + 0x68,*(undefined4 *)(param_1 + 0x88),1);
  plVar3 = *(longlong **)(param_1 + 8);
  if ((undefined **)*plVar3 == &PTR_FUN_1410d31c0) {
    uVar6 = *(undefined8 *)(plVar3[0x6d] + 0x218);
  }
  else {
    uVar6 = (*(code *)((undefined **)*plVar3)[0x1c])(plVar3);
  }
  FUN_140c3d960(uVar6,uVar5);
  uVar5 = FUN_1407cc700(&local_98,param_1 + 0x68,*(undefined4 *)(param_1 + 0x88));
  FUN_140747920(param_1 + 0x58,uVar5);
  if (0xf < local_70) {
    FUN_1400b08c0(&local_88,CONCAT71(uStack_87,local_88),local_70 + 1);
  }
  if (DAT_1416e325c == 1) {
    local_a0 = 0xf;
    local_a8 = 0;
    local_b8 = '\0';
    FUN_1400b0300(&local_b8,&DAT_14106162d,0);
    if (DAT_1417e3b70 == 1) {
      uVar12 = 0xc;
      pcVar7 = "fullchecksum";
LAB_140749764:
      FUN_1400b0300(&local_b8,pcVar7,uVar12);
    }
    else {
      if (DAT_1417e3b70 == 2) {
        uVar12 = 9;
        pcVar7 = "randomlog";
        goto LAB_140749764;
      }
      if (DAT_1417e3b70 == 3) {
        uVar12 = 0x10;
        pcVar7 = "extremerandomlog";
        goto LAB_140749764;
      }
    }
    if (local_a8 != 0) {
      puVar9 = operator_new(0x30);
      *(undefined4 *)(puVar9 + 1) = 0x18e;
      *puVar9 = &PTR_FUN_141157d28;
      puVar1 = puVar9 + 2;
      pcVar7 = &local_b8;
      if (0xf < local_a0) {
        pcVar7 = (char *)CONCAT71(uStack_b7,local_b8);
      }
      puVar9[5] = 0xf;
      puVar9[4] = 0;
      puVar10 = puVar1;
      if (0xf < (ulonglong)puVar9[5]) {
        puVar10 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)puVar10 = 0;
      if (*pcVar7 != '\0') {
        lVar8 = -1;
        do {
          lVar8 = lVar8 + 1;
        } while (pcVar7[lVar8] != '\0');
      }
      FUN_1400b0300(puVar1,pcVar7,lVar8);
      *puVar9 = &PTR_FUN_141157e00;
      FUN_140756c60(param_1,puVar9);
    }
    if (local_a0 < 0x10) goto LAB_140749818;
    uVar5 = CONCAT71(uStack_b7,local_b8);
    pcVar7 = &local_b8;
    uVar13 = local_a0;
  }
  else {
    pcVar7 = (char *)FUN_140698f70(&local_b8,"CONNECTED");
    local_90 = 0x18e;
    local_98 = &PTR_FUN_141157d28;
    if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
      pcVar7 = *(char **)pcVar7;
    }
    local_70 = 0xf;
    local_78 = 0;
    local_88 = '\0';
    if (*pcVar7 != '\0') {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (pcVar7[lVar8] != '\0');
    }
    FUN_1400b0300(&local_88,pcVar7,lVar8);
    local_98 = &PTR_FUN_141157e00;
    if (0xf < local_a0) {
      FUN_1400b08c0(&local_b8,CONCAT71(uStack_b7,local_b8),local_a0 + 1);
    }
    local_a0 = 0xf;
    local_a8 = 0;
    local_b8 = '\0';
    FUN_140756c60(param_1,&local_98);
    local_98 = &PTR_FUN_141157d28;
    if (local_70 < 0x10) goto LAB_140749818;
    uVar5 = CONCAT71(uStack_87,local_88);
    pcVar7 = &local_88;
    uVar13 = local_70;
  }
  FUN_1400b08c0(pcVar7,uVar5,uVar13 + 1);
LAB_140749818:
  *(undefined4 *)(param_1 + 0xd4) = 1;
  ppuVar2 = (undefined **)**(longlong **)(param_1 + 8);
  if (ppuVar2 == &PTR_FUN_1410d31c0) {
    lVar11 = *(longlong *)((*(longlong **)(param_1 + 8))[0x6d] + 0x218);
  }
  else {
    lVar11 = (*(code *)ppuVar2[0x1c])();
  }
  FUN_140c429b0(0,*(undefined4 *)(lVar11 + 0xac));
  return;
}

