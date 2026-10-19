
void FUN_140bd2990(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong local_38;
  undefined1 local_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  
  *param_1 = &PTR_FUN_141145900;
  if (param_1[6] != 0) {
    local_38 = 0xf;
    local_40 = 0;
    local_50 = 0;
    FUN_1400b0300(&local_50,"disbandbutton",0xd,param_4,0xfffffffffffffffe);
    lVar1 = (**(code **)(*(longlong *)param_1[6] + 0x78))((longlong *)param_1[6],&local_50);
    (**(code **)(*(longlong *)(lVar1 + 0x60) + 0x10))((longlong *)(lVar1 + 0x60),param_1 + 0x62);
    if (0xf < local_38) {
      FUN_1400b08c0(&local_50,CONCAT71(uStack_4f,local_50),local_38 + 1);
    }
    local_38 = 0xf;
    local_40 = 0;
    local_50 = 0;
    FUN_1400b0300(&local_50,"newunitbutton",0xd);
    lVar1 = (**(code **)(*(longlong *)param_1[6] + 0x78))((longlong *)param_1[6],&local_50);
    (**(code **)(*(longlong *)(lVar1 + 0x60) + 0x10))((longlong *)(lVar1 + 0x60),param_1 + 0x6d);
    if (0xf < local_38) {
      FUN_1400b08c0(&local_50,CONCAT71(uStack_4f,local_50),local_38 + 1);
    }
    local_38 = 0xf;
    local_40 = 0;
    local_50 = 0;
    FUN_1400b0300(&local_50,"splitinhalfbutton",0x11);
    lVar1 = (**(code **)(*(longlong *)param_1[6] + 0x78))((longlong *)param_1[6],&local_50);
    (**(code **)(*(longlong *)(lVar1 + 0x60) + 0x10))((longlong *)(lVar1 + 0x60),param_1 + 0x78);
    if (0xf < local_38) {
      FUN_1400b08c0(&local_50,CONCAT71(uStack_4f,local_50),local_38 + 1);
    }
    local_38 = 0xf;
    local_40 = 0;
    local_50 = 0;
    FUN_1400b0300(&local_50,"loadtoshipbutton",0x10);
    lVar1 = (**(code **)(*(longlong *)param_1[6] + 0x78))((longlong *)param_1[6],&local_50);
    (**(code **)(*(longlong *)(lVar1 + 0x60) + 0x10))((longlong *)(lVar1 + 0x60),param_1 + 0x20);
    if (0xf < local_38) {
      FUN_1400b08c0(&local_50,CONCAT71(uStack_4f,local_50),local_38 + 1);
    }
    local_38 = 0xf;
    local_40 = 0;
    local_50 = 0;
    FUN_1400b0300(&local_50,"remove_unit_from_selection_button",0x21);
    lVar1 = (**(code **)(*(longlong *)param_1[6] + 0x78))((longlong *)param_1[6],&local_50);
    (**(code **)(*(longlong *)(lVar1 + 0x60) + 0x10))((longlong *)(lVar1 + 0x60),param_1 + 0x83);
    if (0xf < local_38) {
      FUN_1400b08c0(&local_50,CONCAT71(uStack_4f,local_50),local_38 + 1);
    }
    local_18 = 0xf;
    local_20 = 0;
    local_30[0] = 0;
    FUN_1400b0300(local_30,"button_embarked",0xf);
    local_38 = 0xf;
    local_40 = 0;
    local_50 = 0;
    FUN_1400b0300(&local_50,"embarked_unit",0xd);
    plVar2 = (longlong *)
             (**(code **)(*(longlong *)param_1[6] + 0xe8))((longlong *)param_1[6],&local_50);
    lVar1 = (**(code **)(*plVar2 + 0x78))(plVar2,local_30);
    (**(code **)(*(longlong *)(lVar1 + 0x60) + 0x10))((longlong *)(lVar1 + 0x60),param_1 + 10);
    FUN_1400ae4f0(&local_50);
    FUN_1400ae4f0(local_30);
    local_18 = 0xf;
    local_20 = 0;
    local_30[0] = 0;
    FUN_1400b0300(local_30,"select_unit_button",0x12);
    lVar1 = (**(code **)(*(longlong *)param_1[6] + 0x78))((longlong *)param_1[6],local_30);
    (**(code **)(*(longlong *)(lVar1 + 0x60) + 0x10))((longlong *)(lVar1 + 0x60),param_1 + 0x8e);
    FUN_1400ae4f0(local_30);
    if (*(char *)(param_1 + 0xc3) == '\0') {
      local_18 = 0xf;
      local_20 = 0;
      local_30[0] = 0;
      FUN_1400b0300(local_30,"attach_order_button",0x13);
      lVar1 = (**(code **)(*(longlong *)param_1[6] + 0x78))((longlong *)param_1[6],local_30);
      (**(code **)(*(longlong *)(lVar1 + 0x60) + 0x10))((longlong *)(lVar1 + 0x60),param_1 + 0x99);
      FUN_1400ae4f0(local_30);
      local_38 = 0xf;
      local_40 = 0;
      local_50 = 0;
      FUN_1400b0300(&local_50,"ally_order_member_list",0x16);
      local_18 = 0xf;
      local_20 = 0;
      local_30[0] = 0;
      FUN_1400b0300(local_30,"ally_order_window",0x11);
      plVar2 = (longlong *)
               (**(code **)(*(longlong *)param_1[6] + 0xe8))((longlong *)param_1[6],local_30);
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x110))(plVar2,&local_50);
      FUN_1400ae4f0(local_30);
      FUN_1400ae4f0(&local_50);
      if (*(code **)(*plVar2 + 0x48) == (code *)&LAB_140c56fe0) {
        *(undefined4 *)(plVar2 + 0x3f) = 0;
        FUN_140c54df0();
      }
      else {
        (**(code **)(*plVar2 + 0x48))(plVar2);
      }
      FUN_14012ff00(param_1 + 0xc0);
    }
    local_18 = 0xf;
    local_20 = 0;
    local_30[0] = 0;
    FUN_1400b0300(local_30,"goto_location_button",0x14);
    lVar1 = (**(code **)(*(longlong *)param_1[6] + 0x78))((longlong *)param_1[6],local_30);
    (**(code **)(*(longlong *)(lVar1 + 0x60) + 0x10))((longlong *)(lVar1 + 0x60),param_1 + 0xa4);
    FUN_1400ae4f0(local_30);
    local_18 = 0xf;
    local_20 = 0;
    local_30[0] = 0;
    FUN_1400b0300(local_30,"army_shield",0xb);
    lVar1 = (**(code **)(*(longlong *)param_1[6] + 0x78))((longlong *)param_1[6],local_30);
    (**(code **)(*(longlong *)(lVar1 + 0x60) + 0x10))((longlong *)(lVar1 + 0x60),param_1 + 0x15);
    FUN_1400ae4f0(local_30);
    local_18 = 0xf;
    local_20 = 0;
    local_30[0] = 0;
    FUN_1400b0300(local_30,"attach_unit_button",0x12);
    lVar1 = (**(code **)(*(longlong *)param_1[6] + 0x78))((longlong *)param_1[6],local_30);
    (**(code **)(*(longlong *)(lVar1 + 0x60) + 0x10))((longlong *)(lVar1 + 0x60),param_1 + 0x36);
    FUN_1400ae4f0(local_30);
    local_18 = 0xf;
    local_20 = 0;
    local_30[0] = 0;
    FUN_1400b0300(local_30,"detach_unit_button",0x12);
    lVar1 = (**(code **)(*(longlong *)param_1[6] + 0x78))((longlong *)param_1[6],local_30);
    (**(code **)(*(longlong *)(lVar1 + 0x60) + 0x10))((longlong *)(lVar1 + 0x60),param_1 + 0x41);
    FUN_1400ae4f0(local_30);
    local_18 = 0xf;
    local_20 = 0;
    local_30[0] = 0;
    FUN_1400b0300(local_30,"toggle_looter_button",0x14);
    lVar1 = (**(code **)(*(longlong *)param_1[6] + 0x78))((longlong *)param_1[6],local_30);
    FUN_1400ae4f0(local_30);
    if (lVar1 != 0) {
      local_20 = 0;
      local_18 = 0;
      FUN_1400b0200(local_30,0,0);
      FUN_1400b0300(local_30,"toggle_looter_button",0x14);
      lVar1 = (**(code **)(*(longlong *)param_1[6] + 0x78))((longlong *)param_1[6],local_30);
      (**(code **)(*(longlong *)(lVar1 + 0x60) + 0x10))((longlong *)(lVar1 + 0x60),param_1 + 0x57);
      FUN_1400ae4f0(local_30);
    }
  }
  (**(code **)(*(longlong *)param_1[6] + 0xb0))();
  FUN_1400b19c0(param_1 + 0xc0);
  param_1[0xba] = &PTR_FUN_141079e08;
  param_1[0xaf] = &PTR_FUN_141070e90;
  param_1[0xa4] = &PTR_FUN_141070e90;
  param_1[0x99] = &PTR_FUN_141070e90;
  param_1[0x8e] = &PTR_FUN_141070e90;
  param_1[0x83] = &PTR_FUN_141070e90;
  param_1[0x78] = &PTR_FUN_141070e90;
  param_1[0x6d] = &PTR_FUN_141070e90;
  param_1[0x62] = &PTR_FUN_141070e90;
  param_1[0x57] = &PTR_FUN_141070e90;
  param_1[0x4c] = &PTR_FUN_141070e90;
  param_1[0x41] = &PTR_FUN_141070e90;
  param_1[0x36] = &PTR_FUN_141070e90;
  param_1[0x2b] = &PTR_FUN_141070e90;
  param_1[0x20] = &PTR_FUN_141070e90;
  param_1[0x15] = &PTR_FUN_141070e90;
  param_1[10] = &PTR_FUN_141070e90;
  FUN_140c63670(param_1);
  return;
}

