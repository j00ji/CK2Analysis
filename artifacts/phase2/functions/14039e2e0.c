
undefined8 * FUN_14039e2e0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 local_88;
  ulonglong local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong local_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_58 = 0;
  iVar1 = *(int *)(param_1 + 0xb4);
  if (iVar1 == 0) {
    FUN_140698f70(param_2,"COMBATVIEW_PHASE_DESC_SKIRMISH");
  }
  else if (iVar1 == 1) {
    local_60 = 0xf;
    local_68 = 0;
    local_78 = 0;
    if (*(char *)(param_1 + 0xc2) != '\0') {
      local_38 = 0xf;
      local_40 = 0;
      local_50 = 0;
      FUN_1400b0300(&local_50,&DAT_141066f10,1);
      uVar2 = FUN_140698f70(&local_98,"COMBATVIEW_PHASE_DESC_NARROW");
      uVar2 = FUN_140d5f250(uVar2,&local_30,&local_50);
      FUN_1400b06b0(&local_78,uVar2,0,0xffffffffffffffff);
      if (0xf < local_18) {
        FUN_1400b08c0(&local_30,CONCAT71(uStack_2f,local_30),local_18 + 1);
      }
      local_18 = 0xf;
      local_20 = 0;
      local_30 = 0;
      if (0xf < local_80) {
        FUN_1400b08c0(&local_98,CONCAT71(uStack_97,local_98),local_80 + 1);
      }
      local_80 = 0xf;
      local_88 = 0;
      local_98 = 0;
      if (0xf < local_38) {
        FUN_1400b08c0(&local_50,CONCAT71(uStack_4f,local_50),local_38 + 1);
      }
    }
    uVar2 = FUN_140698f70(&local_98,"COMBATVIEW_PHASE_DESC_MELEE");
    FUN_1400b06b0(&local_78,uVar2,0,0xffffffffffffffff);
    if (0xf < local_80) {
      FUN_1400b08c0(&local_98,CONCAT71(uStack_97,local_98),local_80 + 1);
    }
    param_2[3] = 0xf;
    param_2[2] = 0;
    puVar3 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar3 = (undefined8 *)*param_2;
    }
    *(undefined1 *)puVar3 = 0;
    FUN_1400b07e0(param_2,&local_78);
    if (0xf < local_60) {
      FUN_1400b08c0(&local_78,CONCAT71(uStack_77,local_78),local_60 + 1);
    }
  }
  else if (iVar1 == 2) {
    FUN_140698f70(param_2,"COMBATVIEW_PHASE_DESC_PURSUE");
  }
  else {
    param_2[3] = 0xf;
    param_2[2] = 0;
    puVar3 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar3 = (undefined8 *)*param_2;
    }
    *(undefined1 *)puVar3 = 0;
    FUN_1400b0300(param_2,&DAT_14106162d,0);
  }
  return param_2;
}

