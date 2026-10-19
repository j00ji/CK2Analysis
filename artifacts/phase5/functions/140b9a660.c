
void FUN_140b9a660(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong local_18;
  
  uVar5 = 0xfffffffffffffffe;
  *(undefined4 *)(param_1 + 0x34) = 0;
  cVar2 = (**(code **)(*param_1 + 0x70))();
  local_18 = 0xf;
  local_20 = 0;
  local_30 = 0;
  if (cVar2 == '\0') {
    FUN_1400b0300(&local_30,"army_selected",0xd,param_4,uVar5);
    plVar4 = (longlong *)FUN_140c52b00();
    FUN_140c52b00();
    lVar1 = *plVar4;
    uVar3 = FUN_140c532d0();
    cVar2 = (**(code **)(lVar1 + 0xd8))(plVar4,uVar3);
    if (0xf < local_18) {
      FUN_1400b08c0(&local_30,CONCAT71(uStack_2f,local_30),local_18 + 1);
    }
    if (cVar2 != '\0') {
      return;
    }
    local_18 = 0xf;
    local_20 = 0;
    local_30 = 0;
    FUN_1400b0300(&local_30,"army_selected",0xd);
    plVar4 = (longlong *)FUN_140c52b00();
    FUN_140c52b00();
    lVar1 = *plVar4;
    uVar3 = FUN_140c532d0();
    (**(code **)(lVar1 + 0x60))(plVar4,uVar3);
  }
  else {
    FUN_1400b0300(&local_30,"navy_selected",0xd,param_4,uVar5);
    plVar4 = (longlong *)FUN_140c52b00();
    FUN_140c52b00();
    lVar1 = *plVar4;
    uVar3 = FUN_140c532d0();
    cVar2 = (**(code **)(lVar1 + 0xd8))(plVar4,uVar3);
    if (0xf < local_18) {
      FUN_1400b08c0(&local_30,CONCAT71(uStack_2f,local_30),local_18 + 1);
    }
    if (cVar2 != '\0') {
      return;
    }
    local_18 = 0xf;
    local_20 = 0;
    local_30 = 0;
    FUN_1400b0300(&local_30,"navy_selected",0xd);
    plVar4 = (longlong *)FUN_140c52b00();
    FUN_140c52b00();
    lVar1 = *plVar4;
    uVar3 = FUN_140c532d0();
    (**(code **)(lVar1 + 0x60))(plVar4,uVar3);
  }
  if (0xf < local_18) {
    FUN_1400b08c0(&local_30,CONCAT71(uStack_2f,local_30),local_18 + 1);
  }
  return;
}

