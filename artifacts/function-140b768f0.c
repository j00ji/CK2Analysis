
undefined1 * FUN_140b768f0(longlong param_1,undefined1 *param_2,undefined8 param_3,char param_4)

{
  code *pcVar1;
  longlong lVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined8 local_c8;
  ulonglong local_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  ulonglong local_58;
  char local_50 [32];
  undefined8 local_30;
  
  lVar11 = DAT_1416e3260;
  local_30 = 0xfffffffffffffffe;
  lVar10 = 0;
  iVar8 = 0;
  local_78 = 0;
  uVar3 = FUN_1406e7e40(param_1 + 0x90,param_3,0);
  lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x278) + (ulonglong)uVar3 * 8);
  if (*(short *)(lVar11 + 0xe8) == 0) {
    pcVar7 = (char *)&DAT_1418d1c70;
    if (0xf < DAT_1418d1c88) {
      pcVar7 = DAT_1418d1c70;
    }
    *(undefined8 *)(param_2 + 0x18) = 0xf;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    if (*pcVar7 != '\0') {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (pcVar7[lVar10] != '\0');
    }
    FUN_1400b0300(param_2,pcVar7,lVar10);
  }
  else {
    if (*(longlong *)(param_1 + 0x78) == 0) {
      iVar8 = *(int *)(param_1 + 0x60);
    }
    else {
      plVar9 = (longlong *)(param_1 + 0x68);
      plVar4 = (longlong *)FUN_1405a08d0(param_3,plVar9,0);
      if (plVar4 != (longlong *)0x0) {
        if ((undefined **)*plVar4 == &PTR_FUN_141145e38) {
          if (0xf < *(ulonglong *)(param_1 + 0x80)) {
            plVar9 = (longlong *)*plVar9;
          }
          lVar5 = (*(code *)PTR_FUN_141145e48)(plVar4,plVar9);
        }
        else {
          lVar5 = (*(code *)((undefined **)*plVar4)[1])(plVar4,plVar9);
        }
        if (lVar5 != 0) {
          iVar8 = *(int *)(lVar5 + 0x20);
        }
      }
    }
    local_c0 = 0xf;
    local_c8 = 0;
    local_d8 = 0;
    if (iVar8 == 0) {
      FUN_1400b0300(&local_d8,&DAT_141066f10,1);
      pcVar1 = *(code **)(*(longlong *)(lVar11 + 0x10) + 0x30);
      if (pcVar1 == (code *)&LAB_140915c70) {
        lVar11 = *(longlong *)(lVar11 + 0xf0) + 0x10;
      }
      else {
        lVar11 = (*pcVar1)();
      }
      pcVar7 = "NAVAL_PATH_TRIGGER";
      if (param_4 != '\0') {
        pcVar7 = "NOT_NAVAL_PATH_TRIGGER";
      }
      uVar6 = FUN_140152450(&local_b8,pcVar7,&DAT_1410774d0,lVar11);
      FUN_140d5f250(uVar6,param_2,&local_d8);
      if (0xf < local_a0) {
        FUN_1400b08c0(&local_b8,CONCAT71(uStack_b7,local_b8),local_a0 + 1);
      }
      local_a0 = 0xf;
      local_a8 = 0;
      local_b8 = 0;
    }
    else {
      FUN_1400b0300(&local_d8,&DAT_141066f10,1);
      pcVar1 = *(code **)(*(longlong *)(lVar11 + 0x10) + 0x30);
      if (pcVar1 == (code *)&LAB_140915c70) {
        lVar11 = *(longlong *)(lVar11 + 0xf0) + 0x10;
      }
      else {
        lVar11 = (*pcVar1)();
      }
      local_80 = 0xf;
      local_88 = 0;
      local_98 = 0;
      pcVar7 = local_50;
      if (iVar8 < 0) {
        local_50[0] = '-';
        pcVar7 = local_50 + 1;
        iVar8 = -iVar8;
      }
      FUN_140d5e4a0(iVar8 / 1000,pcVar7);
      if (local_50[0] != '\0') {
        lVar5 = -1;
        do {
          lVar10 = lVar5 + 1;
          lVar2 = lVar5 + 1;
          lVar5 = lVar10;
        } while (local_50[lVar2] != '\0');
      }
      FUN_1400b0300(&local_98,local_50,lVar10);
      uVar6 = FUN_140ad2120(param_1,&local_b8,param_4);
      uVar6 = FUN_140269eb0(&local_70,"NAVAL_PATH_DISTANCE_TRIGGER",&DAT_1410774d0,lVar11,
                            "COMPARISON",uVar6,"VALUE",&local_98);
      FUN_140d5f250(uVar6,param_2,&local_d8);
      if (0xf < local_58) {
        FUN_1400b08c0(&local_70,CONCAT71(uStack_6f,local_70),local_58 + 1);
      }
      local_58 = 0xf;
      local_60 = 0;
      local_70 = 0;
      if (0xf < local_a0) {
        FUN_1400b08c0(&local_b8,CONCAT71(uStack_b7,local_b8),local_a0 + 1);
      }
      local_a0 = 0xf;
      local_a8 = 0;
      local_b8 = 0;
      if (0xf < local_80) {
        FUN_1400b08c0(&local_98,CONCAT71(uStack_97,local_98),local_80 + 1);
      }
      local_80 = 0xf;
      local_88 = 0;
      local_98 = 0;
    }
    if (0xf < local_c0) {
      FUN_1400b08c0(&local_d8,CONCAT71(uStack_d7,local_d8),local_c0 + 1);
    }
  }
  return param_2;
}


