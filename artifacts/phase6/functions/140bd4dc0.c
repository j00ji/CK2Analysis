
void FUN_140bd4dc0(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  char *pcVar12;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined7 uStack_117;
  undefined8 local_108;
  ulonglong local_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
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
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  pcVar12 = "unitpanel";
  if (*(char *)(param_1 + 0x618) != '\0') {
    pcVar12 = "short_unitpanel";
  }
  local_100 = 0xf;
  lVar3 = 0;
  local_108 = 0;
  local_118 = 0;
  if (*pcVar12 != '\0') {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (pcVar12[lVar3] != '\0');
  }
  FUN_1400b0300(&local_118,pcVar12,lVar3);
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x48) + 0xb8);
  if (pcVar1 == (code *)&LAB_14064e800) {
    plVar9 = (longlong *)(*(longlong **)(param_1 + 0x48))[0x62];
  }
  else {
    plVar9 = (longlong *)(*pcVar1)();
  }
  plVar11 = *(longlong **)(param_1 + 0x48);
  if (*(code **)(*plVar11 + 0xd0) == (code *)&LAB_14064e810) {
    plVar11 = plVar11 + 0xafd;
  }
  else {
    plVar11 = (longlong *)(**(code **)(*plVar11 + 0xd0))(plVar11);
  }
  uVar2 = (**(code **)(*plVar9 + 0x58))(plVar9,&local_118,plVar11);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  if (0xf < local_100) {
    FUN_1400b08c0(&local_118,CONCAT71(uStack_117,local_118),local_100 + 1);
  }
  local_c0 = 0xf;
  local_c8 = 0;
  local_d8 = 0;
  FUN_1400b0300(&local_d8,"newunitbutton",0xd);
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                    (*(longlong **)(param_1 + 0x30),&local_d8);
  if (0xf < local_c0) {
    FUN_1400b08c0(&local_d8,CONCAT71(uStack_d7,local_d8),local_c0 + 1);
  }
  local_c0 = 0xf;
  local_c8 = 0;
  local_d8 = 0;
  local_a0 = 0xf;
  local_a8 = 0;
  local_b8 = 0;
  FUN_1400b0300(&local_b8,"splitinhalfbutton",0x11);
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                    (*(longlong **)(param_1 + 0x30),&local_b8);
  if (0xf < local_a0) {
    FUN_1400b08c0(&local_b8,CONCAT71(uStack_b7,local_b8),local_a0 + 1);
  }
  local_a0 = 0xf;
  local_a8 = 0;
  local_b8 = 0;
  local_80 = 0xf;
  local_88 = 0;
  local_98 = 0;
  FUN_1400b0300(&local_98,"disbandbutton",0xd);
  lVar5 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                    (*(longlong **)(param_1 + 0x30),&local_98);
  if (0xf < local_80) {
    FUN_1400b08c0(&local_98,CONCAT71(uStack_97,local_98),local_80 + 1);
  }
  local_80 = 0xf;
  local_88 = 0;
  local_98 = 0;
  local_100 = 0xf;
  local_108 = 0;
  local_118 = 0;
  FUN_1400b0300(&local_118,"loadtoshipbutton",0x10);
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                    (*(longlong **)(param_1 + 0x30),&local_118);
  if (0xf < local_100) {
    FUN_1400b08c0(&local_118,CONCAT71(uStack_117,local_118),local_100 + 1);
  }
  local_100 = 0xf;
  local_108 = 0;
  local_118 = 0;
  local_e0 = 0xf;
  local_e8 = 0;
  local_f8[0] = 0;
  FUN_1400b0300(local_f8,"quicksplitbutton",0x10);
  lVar7 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                    (*(longlong **)(param_1 + 0x30),local_f8);
  FUN_1400ae4f0(local_f8);
  local_60 = 0xf;
  local_68 = 0;
  local_78[0] = 0;
  FUN_1400b0300(local_78,"select_unit_button",0x12);
  lVar8 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                    (*(longlong **)(param_1 + 0x30),local_78);
  FUN_1400ae4f0(local_78);
  local_40 = 0xf;
  local_48 = 0;
  local_58[0] = 0;
  FUN_1400b0300(local_58,"attach_order_button",0x13);
  plVar9 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                     (*(longlong **)(param_1 + 0x30),local_58);
  FUN_1400ae4f0(local_58);
  local_120 = 0xf;
  local_128 = 0;
  local_138[0] = 0;
  FUN_1400b0300(local_138,"goto_location_button",0x14);
  lVar10 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                     (*(longlong **)(param_1 + 0x30),local_138);
  (**(code **)(*(longlong *)(lVar10 + 0x60) + 8))((longlong *)(lVar10 + 0x60),param_1 + 0x520);
  FUN_1400ae4f0(local_138);
  local_120 = 0xf;
  local_128 = 0;
  local_138[0] = 0;
  FUN_1400b0300(local_138,"army_shield",0xb);
  lVar10 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                     (*(longlong **)(param_1 + 0x30),local_138);
  (**(code **)(*(longlong *)(lVar10 + 0x60) + 8))((longlong *)(lVar10 + 0x60),param_1 + 0xa8);
  FUN_1400ae4f0(local_138);
  (**(code **)(*(longlong *)(lVar5 + 0x60) + 8))((longlong *)(lVar5 + 0x60),param_1 + 0x310);
  (**(code **)(*(longlong *)(lVar3 + 0x60) + 8))((longlong *)(lVar3 + 0x60),param_1 + 0x368);
  (**(code **)(*(longlong *)(lVar4 + 0x60) + 8))((longlong *)(lVar4 + 0x60),param_1 + 0x3c0);
  (**(code **)(*(longlong *)(lVar6 + 0x60) + 8))((longlong *)(lVar6 + 0x60),param_1 + 0x100);
  (**(code **)(*(longlong *)(lVar7 + 0x60) + 8))((longlong *)(lVar7 + 0x60),param_1 + 0x260);
  local_120 = 0xf;
  local_128 = 0;
  local_138[0] = 0;
  FUN_1400b0300(local_138,"attach_unit_button",0x12);
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                    (*(longlong **)(param_1 + 0x30),local_138);
  (**(code **)(*(longlong *)(lVar3 + 0x60) + 8))((longlong *)(lVar3 + 0x60),param_1 + 0x1b0);
  FUN_1400ae4f0(local_138);
  local_120 = 0xf;
  local_128 = 0;
  local_138[0] = 0;
  FUN_1400b0300(local_138,"detach_unit_button",0x12);
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                    (*(longlong **)(param_1 + 0x30),local_138);
  (**(code **)(*(longlong *)(lVar3 + 0x60) + 8))((longlong *)(lVar3 + 0x60),param_1 + 0x208);
  FUN_1400ae4f0(local_138);
  local_120 = 0xf;
  local_128 = 0;
  local_138[0] = 0;
  FUN_1400b0300(local_138,"toggle_looter_button",0x14);
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                    (*(longlong **)(param_1 + 0x30),local_138);
  FUN_1400ae4f0(local_138);
  if (lVar3 != 0) {
    local_120 = 0xf;
    local_128 = 0;
    local_138[0] = 0;
    FUN_1400b0300(local_138,"toggle_looter_button",0x14);
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                      (*(longlong **)(param_1 + 0x30),local_138);
    (**(code **)(*(longlong *)(lVar3 + 0x60) + 8))((longlong *)(lVar3 + 0x60),param_1 + 0x2b8);
    FUN_1400ae4f0(local_138);
  }
  local_120 = 0xf;
  local_128 = 0;
  local_138[0] = 0;
  FUN_1400b0300(local_138,"remove_unit_from_selection_button",0x21);
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                    (*(longlong **)(param_1 + 0x30),local_138);
  (**(code **)(*(longlong *)(lVar3 + 0x60) + 8))((longlong *)(lVar3 + 0x60),param_1 + 0x418);
  FUN_1400ae4f0(local_138);
  local_e0 = 0xf;
  local_e8 = 0;
  local_f8[0] = 0;
  FUN_1400b0300(local_f8,"button_embarked",0xf);
  local_128 = 0;
  local_120 = 0;
  FUN_1400b0200(local_138,0,0);
  FUN_1400b0300(local_138,"embarked_unit",0xd);
  plVar11 = (longlong *)
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0xe8))
                      (*(longlong **)(param_1 + 0x30),local_138);
  lVar3 = (**(code **)(*plVar11 + 0x78))(plVar11,local_f8);
  (**(code **)(*(longlong *)(lVar3 + 0x60) + 8))((longlong *)(lVar3 + 0x60),param_1 + 0x50);
  FUN_1400ae4f0(local_138);
  FUN_1400ae4f0(local_f8);
  (**(code **)(*(longlong *)(lVar8 + 0x60) + 8))((longlong *)(lVar8 + 0x60),param_1 + 0x470);
  if (*(char *)(param_1 + 0x618) == '\0') {
    (**(code **)(plVar9[0xc] + 8))(plVar9 + 0xc,param_1 + 0x4c8);
    local_128 = 0;
    local_120 = 0;
    FUN_1400b0200(local_138,0,0);
    FUN_1400b0300(local_138,"ally_order_window",0x11);
    plVar11 = (longlong *)
              (**(code **)(**(longlong **)(param_1 + 0x30) + 0xe8))
                        (*(longlong **)(param_1 + 0x30),local_138);
    (**(code **)(*plVar11 + 0x50))(plVar11);
    FUN_1400ae4f0(local_138);
    if (DAT_1417efb83 == '\0') {
      (**(code **)(*plVar9 + 0x288))(plVar9);
    }
  }
  local_128 = 0;
  local_120 = 0;
  FUN_1400b0200(local_138,0,0);
  FUN_1400b0300(local_138,"UnitView",8);
  plVar9 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0x28);
  (**(code **)(*plVar9 + 0xf8))(plVar9,local_138);
  FUN_1400ae4f0(local_138);
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x28) + 0x70))();
  local_128 = 0;
  local_120 = 0;
  FUN_1400b0200(local_138,0,0);
  FUN_1400b0300(local_138,"embarked_unit",0xd);
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xe8))
                    (*(longlong **)(param_1 + 0x30),local_138);
  (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x78))();
  FUN_1400ae4f0(local_138);
  return;
}

