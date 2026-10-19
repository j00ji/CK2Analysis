
void FUN_140bc0960(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong local_38;
  char local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong local_18;
  
  uVar4 = 0xfffffffffffffffe;
  *(undefined1 *)(param_1 + 0x10) = 1;
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x28) + 0x70))();
  }
  local_18 = 0xf;
  local_20 = 0;
  local_30 = '\0';
  FUN_1400b0300(&local_30,"SingleUnitPanel",0xf,param_4,uVar4);
  local_38 = 0xf;
  local_40 = 0;
  local_50 = 0;
  FUN_1400b0300(&local_50,"ship_amount",0xb);
  plVar1 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 8) + 0x88))(*(longlong **)(param_1 + 8),&local_50)
  ;
  if ((undefined **)*plVar1 == &PTR_DAT_14114d4b0) {
    pcVar2 = &local_30;
    if (0xf < local_18) {
      pcVar2 = (char *)CONCAT71(uStack_2f,local_30);
    }
    if (*pcVar2 == '\0') {
      lVar3 = 0;
    }
    else {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (pcVar2[lVar3] != '\0');
    }
    FUN_1400b0300(plVar1 + 2,pcVar2,lVar3,param_4,uVar4);
  }
  else {
    (*(code *)((undefined **)*plVar1)[0x1f])(plVar1);
  }
  if (0xf < local_38) {
    FUN_1400b08c0(&local_50,CONCAT71(uStack_4f,local_50),local_38 + 1);
  }
  local_38 = 0xf;
  local_40 = 0;
  local_50 = 0;
  if (0xf < local_18) {
    FUN_1400b08c0(&local_30,CONCAT71(uStack_2f,local_30),local_18 + 1);
  }
  return;
}

