
/* WARNING: Removing unreachable block (ram,0x000140bc1ec9) */

void FUN_140bc1e80(longlong param_1)

{
  int iVar1;
  undefined **ppuVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  char *pcVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  char local_90;
  undefined7 uStack_8f;
  undefined8 local_80;
  ulonglong local_78;
  char local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  ulonglong local_58;
  
  *(undefined4 *)(param_1 + 0x338) = 3;
  puVar9 = (undefined8 *)0x0;
  if (*(longlong *)(param_1 + 0x340) != 0) {
    FUN_14063b250(*(undefined8 *)(param_1 + 0xa8),*(longlong *)(param_1 + 0x340) + 0x30);
    plVar7 = *(longlong **)(param_1 + 0x340);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
    *(undefined8 *)(param_1 + 0x340) = 0;
  }
  local_58 = 0xf;
  local_60 = 0;
  local_70 = '\0';
  FUN_1400b0300(&local_70,"unit_view",9);
  if (DAT_1416e3280 == 0) {
    pvVar6 = operator_new(0x88);
    DAT_1416e3280 = FUN_1407c7cc0(pvVar6);
  }
  FUN_1407c69d0(DAT_1416e3280,&local_70,*(undefined8 *)(param_1 + 0x38),0,0);
  if (0xf < local_58) {
    FUN_1400b08c0(&local_70,CONCAT71(uStack_6f,local_70),local_58 + 1);
  }
  if ((*(longlong **)(param_1 + 0x40) != (longlong *)0x0) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x68))(), cVar3 != '\0')) {
    local_58 = 0xf;
    local_60 = 0;
    local_70 = '\0';
    FUN_1400b0300(&local_70,"SingleUnitPanel",0xf);
    local_78 = 0xf;
    local_80 = 0;
    local_90 = '\0';
    FUN_1400b0300(&local_90,"right_leader_name",0x11);
    plVar7 = *(longlong **)(param_1 + 0x38);
    if ((undefined **)*plVar7 == &PTR_FUN_141156ab0) {
      plVar7 = (longlong *)FUN_140ceb7c0(&local_90,plVar7 + 0xa3,plVar7 + 0xa0);
    }
    else {
      plVar7 = (longlong *)(*(code *)((undefined **)*plVar7)[0x11])(plVar7,&local_90);
    }
    puVar13 = (undefined8 *)0xffffffffffffffff;
    if ((undefined **)*plVar7 == &PTR_DAT_14114d4b0) {
      pcVar12 = &local_70;
      if (0xf < local_58) {
        pcVar12 = (char *)CONCAT71(uStack_6f,local_70);
      }
      puVar14 = puVar9;
      if (*pcVar12 != '\0') {
        puVar14 = (undefined8 *)0xffffffffffffffff;
        do {
          puVar14 = (undefined8 *)((longlong)puVar14 + 1);
        } while (pcVar12[(longlong)puVar14] != '\0');
      }
      FUN_1400b0300(plVar7 + 2,pcVar12,puVar14);
    }
    else {
      (*(code *)((undefined **)*plVar7)[0x1f])();
    }
    if (0xf < local_78) {
      FUN_1400b08c0(&local_90,CONCAT71(uStack_8f,local_90),local_78 + 1);
    }
    local_78 = 0xf;
    local_80 = 0;
    local_90 = '\0';
    if (0xf < local_58) {
      FUN_1400b08c0(&local_70,CONCAT71(uStack_6f,local_70),local_58 + 1);
    }
    local_78 = 0xf;
    local_80 = 0;
    local_90 = '\0';
    FUN_1400b0300(&local_90,"SingleUnitPanel",0xf);
    local_58 = 0xf;
    local_60 = 0;
    local_70 = '\0';
    FUN_1400b0300(&local_70,"right_leader_button",0x13);
    plVar7 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x38) + 0x78))
                       (*(longlong **)(param_1 + 0x38),&local_70);
    if (*(code **)(*plVar7 + 0xf8) == (code *)&LAB_140c4ab40) {
      pcVar12 = &local_90;
      if (0xf < local_78) {
        pcVar12 = (char *)CONCAT71(uStack_8f,local_90);
      }
      cVar3 = *pcVar12;
      puVar14 = puVar9;
      while (cVar3 != '\0') {
        puVar13 = (undefined8 *)((longlong)puVar13 + 1);
        puVar14 = puVar13;
        cVar3 = pcVar12[(longlong)puVar13];
      }
      FUN_1400b0300(plVar7 + 2,pcVar12,puVar14);
    }
    else {
      (**(code **)(*plVar7 + 0xf8))();
    }
    if (0xf < local_58) {
      FUN_1400b08c0(&local_70,CONCAT71(uStack_6f,local_70),local_58 + 1);
    }
    local_58 = 0xf;
    local_60 = 0;
    local_70 = '\0';
    if (0xf < local_78) {
      FUN_1400b08c0(&local_90,CONCAT71(uStack_8f,local_90),local_78 + 1);
    }
    local_78 = 0xf;
    local_80 = 0;
    local_90 = '\0';
    FUN_1400b0300(&local_90,"SingleUnitPanel",0xf);
    local_58 = 0xf;
    local_60 = 0;
    local_70 = '\0';
    FUN_1400b0300(&local_70,"left_leader_name",0x10);
    plVar7 = *(longlong **)(param_1 + 0x38);
    if ((undefined **)*plVar7 == &PTR_FUN_141156ab0) {
      plVar7 = (longlong *)FUN_140ceb7c0(&local_70,plVar7 + 0xa3,plVar7 + 0xa0);
    }
    else {
      plVar7 = (longlong *)(*(code *)((undefined **)*plVar7)[0x11])(plVar7,&local_70);
    }
    (**(code **)(*plVar7 + 0xf8))(plVar7,&local_90);
    FUN_1400ae4f0(&local_70);
    FUN_1400ae4f0(&local_90);
    local_78 = 0xf;
    local_80 = 0;
    local_90 = '\0';
    FUN_1400b0300(&local_90,"SingleUnitPanel",0xf);
    local_58 = 0xf;
    local_60 = 0;
    local_70 = '\0';
    FUN_1400b0300(&local_70,"left_leader_button",0x12);
    plVar7 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x38) + 0x78))
                       (*(longlong **)(param_1 + 0x38),&local_70);
    (**(code **)(*plVar7 + 0xf8))(plVar7,&local_90);
    FUN_1400ae4f0(&local_70);
    FUN_1400ae4f0(&local_90);
    local_78 = 0xf;
    local_80 = 0;
    local_90 = '\0';
    FUN_1400b0300(&local_90,"SingleUnitPanel",0xf);
    local_58 = 0xf;
    local_60 = 0;
    local_70 = '\0';
    FUN_1400b0300(&local_70,"center_leader_name",0x12);
    plVar7 = *(longlong **)(param_1 + 0x38);
    if ((undefined **)*plVar7 == &PTR_FUN_141156ab0) {
      plVar7 = (longlong *)FUN_140ceb7c0(&local_70,plVar7 + 0xa3,plVar7 + 0xa0);
    }
    else {
      plVar7 = (longlong *)(*(code *)((undefined **)*plVar7)[0x11])(plVar7,&local_70);
    }
    (**(code **)(*plVar7 + 0xf8))(plVar7,&local_90);
    FUN_1400ae4f0(&local_70);
    FUN_1400ae4f0(&local_90);
    local_78 = 0xf;
    local_80 = 0;
    local_90 = '\0';
    FUN_1400b0300(&local_90,"SingleUnitPanel",0xf);
    local_58 = 0xf;
    local_60 = 0;
    local_70 = '\0';
    FUN_1400b0300(&local_70,"center_leader_button",0x14);
    plVar7 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x38) + 0x78))
                       (*(longlong **)(param_1 + 0x38),&local_70);
    (**(code **)(*plVar7 + 0xf8))(plVar7,&local_90);
    FUN_1400ae4f0(&local_70);
    FUN_1400ae4f0(&local_90);
  }
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x28) + 0x70))();
  if ((*(longlong **)(param_1 + 0x40) == (longlong *)0x0) ||
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x70))(), cVar3 == '\0')) {
    local_60 = 0;
    local_58 = 0;
    FUN_1400b0200(&local_70,0,0);
    FUN_1400b0300(&local_70,"load_capacity",0xd);
    plVar7 = *(longlong **)(param_1 + 0x38);
    if ((undefined **)*plVar7 == &PTR_FUN_141156ab0) {
      plVar7 = (longlong *)FUN_140ceb7c0(&local_70,plVar7 + 0xa3,plVar7 + 0xa0);
    }
    else {
      plVar7 = (longlong *)(*(code *)((undefined **)*plVar7)[0x11])(plVar7,&local_70);
    }
    (**(code **)(*plVar7 + 0x78))(plVar7);
    FUN_1400ae4f0(&local_70);
  }
  else {
    local_58 = 0xf;
    local_60 = 0;
    local_70 = '\0';
    FUN_1400b0300(&local_70,"navy_list",9);
    plVar7 = *(longlong **)(param_1 + 0x38);
    if ((undefined **)*plVar7 == &PTR_FUN_141156ab0) {
      pcVar12 = &local_70;
      if (0xf < local_58) {
        pcVar12 = (char *)CONCAT71(uStack_6f,local_70);
      }
      plVar7 = (longlong *)FUN_1404613f0(plVar7 + 0xd4,pcVar12);
    }
    else {
      plVar7 = (longlong *)(*(code *)((undefined **)*plVar7)[0x22])(plVar7,&local_70);
    }
    FUN_1400ae4f0(&local_70);
    if (*(code **)(*plVar7 + 0xb8) == (code *)&LAB_140c56ef0) {
      *(undefined4 *)(plVar7 + 0x3f) = 0;
      FUN_140c54f40();
    }
    else {
      (**(code **)(*plVar7 + 0xb8))(plVar7);
    }
    FUN_1400b1970((undefined8 *)(param_1 + 0x90));
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      puVar13 = puVar9;
    }
    for (puVar13 = (undefined8 *)*puVar13; puVar13 != (undefined8 *)0x0;
        puVar13 = (undefined8 *)puVar13[2]) {
      uVar8 = *puVar13;
      pvVar6 = operator_new(0x100);
      uVar8 = FUN_140bbffb0(pvVar6,*(undefined8 *)(DAT_1416e3260 + 0x370),uVar8);
      (**(code **)(*plVar7 + 0x20))(plVar7,uVar8,0);
      lVar11 = *(longlong *)(param_1 + 0x98);
      puVar9 = operator_new(0x20);
      *puVar9 = uVar8;
      puVar9[1] = lVar11;
      puVar9[2] = 0;
      *(undefined1 *)(puVar9 + 3) = 0;
      *(undefined8 **)(param_1 + 0x98) = puVar9;
      iVar1 = *(int *)(param_1 + 0xa0);
      *(int *)(param_1 + 0xa0) = iVar1 + 1;
      if (iVar1 == 0) {
        *(undefined8 *)(param_1 + 0x90) = puVar9;
      }
      else {
        *(undefined8 **)(lVar11 + 0x10) = puVar9;
      }
    }
    local_78 = 0xf;
    local_80 = 0;
    local_90 = '\0';
    FUN_1400b0300(&local_90,"SingleUnitPanel",0xf);
    (**(code **)(plVar7[1] + 0xf8))(plVar7 + 1,&local_90);
    FUN_1400ae4f0(&local_90);
    (**(code **)(*plVar7 + 0xe0))(plVar7);
    local_60 = 0;
    local_58 = 0;
    FUN_1400b0200(&local_70,0,0);
    FUN_1400b0300(&local_70,"load_capacity_amount",0x14);
    plVar7 = *(longlong **)(param_1 + 0x38);
    if ((undefined **)*plVar7 == &PTR_FUN_141156ab0) {
      uVar8 = FUN_140ceb7c0(&local_70,plVar7 + 0xa3,plVar7 + 0xa0);
    }
    else {
      uVar8 = (*(code *)((undefined **)*plVar7)[0x11])(plVar7,&local_70);
    }
    uVar4 = FUN_140b9f380(*(undefined8 *)(param_1 + 0x40));
    uVar10 = FUN_140d5ebc0(&local_90,uVar4);
    FUN_140c58b10(uVar8,uVar10,0);
    FUN_1400ae4f0(&local_90);
    FUN_1400ae4f0(&local_70);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x248);
    iVar5 = FUN_140b9f380();
    fVar15 = (float)(int)(((longlong)(iVar5 * 1000) * (longlong)DAT_1416e26fc) / 1000) /
             DAT_141164eec;
    fVar16 = (float)iVar1 / DAT_141164eec;
    local_60 = 0;
    local_58 = 0;
    FUN_1400b0200(&local_70,0,0);
    FUN_1400b0300(&local_70,"loot_progress",0xd);
    plVar7 = *(longlong **)(param_1 + 0x38);
    if ((undefined **)*plVar7 == &PTR_FUN_141156ab0) {
      lVar11 = FUN_140ceb7c0(&local_70,plVar7 + 0x9d,plVar7 + 0x9a);
    }
    else {
      lVar11 = (*(code *)((undefined **)*plVar7)[0x13])(plVar7,&local_70);
    }
    ppuVar2 = (undefined **)**(longlong **)(lVar11 + 0xc0);
    if (ppuVar2 != &PTR_LAB_141158048) {
      (*(code *)ppuVar2[0x16])
                (*(longlong **)(lVar11 + 0xc0),(longlong)((fVar16 / fVar15) * DAT_141164e74));
    }
    FUN_1400ae4f0(&local_70);
  }
  FUN_140bc1570(param_1);
  return;
}

