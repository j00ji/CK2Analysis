
undefined8 * FUN_140bd3060(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  code *pcVar1;
  undefined **ppuVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  char *pcVar13;
  int *piVar14;
  undefined8 uVar15;
  int iVar16;
  ulonglong *puVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  undefined8 *puVar22;
  longlong *local_res8;
  undefined8 *local_res10;
  longlong *local_res20;
  ulonglong in_stack_fffffffffffff958;
  ulonglong local_688 [4];
  ulonglong local_668 [2];
  undefined8 local_658;
  undefined8 local_650;
  ulonglong local_648;
  longlong lStack_640;
  undefined8 local_638;
  ulonglong local_630;
  undefined1 local_628 [16];
  undefined8 local_618;
  undefined8 local_610;
  ulonglong local_608 [4];
  undefined4 local_5e8;
  longlong *local_5e0;
  ulonglong local_5d8 [4];
  longlong *local_5b8;
  undefined8 local_5b0;
  undefined1 local_5a8 [32];
  undefined1 local_588 [144];
  undefined1 local_4f8 [1216];
  
  local_5b0 = 0xfffffffffffffffe;
  puVar22 = (undefined8 *)0x0;
  local_5e8 = 0;
  param_2[3] = 0xf;
  param_2[2] = 0;
  puVar7 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar7 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar7 = 0;
  param_2[7] = 0xf;
  param_2[6] = 0;
  if ((ulonglong)param_2[7] < 0x10) {
    puVar7 = param_2 + 4;
  }
  else {
    puVar7 = (undefined8 *)param_2[4];
  }
  *(undefined1 *)puVar7 = 0;
  *(undefined2 *)(param_2 + 8) = 1;
  local_res10 = param_2;
  FUN_14037f130(param_2 + 9);
  *(undefined4 *)(param_2 + 0x97) = 0;
  *(undefined1 *)((longlong)param_2 + 0x4bc) = 0;
  local_5e8 = 1;
  local_630 = 0xf;
  local_638 = 0;
  local_648 = local_648 & 0xffffffffffffff00;
  FUN_1400b0300(&local_648,"newunitbutton",0xd);
  local_res8 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                         (*(longlong **)(param_1 + 0x30),&local_648);
  if (0xf < local_630) {
    FUN_1400b08c0(&local_648,local_648,local_630 + 1);
  }
  local_630 = 0xf;
  local_638 = 0;
  local_648 = local_648 & 0xffffffffffffff00;
  FUN_1400b0300(&local_648,"splitinhalfbutton",0x11);
  local_res20 = (longlong *)
                (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                          (*(longlong **)(param_1 + 0x30),&local_648);
  if (0xf < local_630) {
    FUN_1400b08c0(&local_648,local_648,local_630 + 1);
  }
  local_630 = 0xf;
  local_638 = 0;
  local_648 = local_648 & 0xffffffffffffff00;
  FUN_1400b0300(&local_648,"disbandbutton",0xd);
  local_5e0 = (longlong *)
              (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                        (*(longlong **)(param_1 + 0x30),&local_648);
  if (0xf < local_630) {
    FUN_1400b08c0(&local_648,local_648,local_630 + 1);
  }
  local_610 = 0xf;
  local_618 = 0;
  local_628[0] = 0;
  FUN_1400b0300(local_628,"loadtoshipbutton",0x10);
  plVar8 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                     (*(longlong **)(param_1 + 0x30),local_628);
  FUN_1400ae4f0(local_628);
  local_630 = 0xf;
  local_638 = 0;
  local_648 = local_648 & 0xffffffffffffff00;
  FUN_1400b0300(&local_648,"select_unit_button",0x12);
  local_5b8 = (longlong *)
              (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                        (*(longlong **)(param_1 + 0x30),&local_648);
  FUN_1400ae4f0(&local_648);
  local_630 = 0xf;
  local_638 = 0;
  local_648 = local_648 & 0xffffffffffffff00;
  FUN_1400b0300(&local_648,"embarked_unit",0xd);
  lVar9 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xe8))
                    (*(longlong **)(param_1 + 0x30),&local_648);
  cVar4 = (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x130))((longlong *)(lVar9 + 0x28),param_3);
  FUN_1400ae4f0(&local_648);
  if (cVar4 != '\0') {
    uVar10 = FUN_140698bb0(local_688,"UNIT_UNLOAD_DESC");
    FUN_1400cd750(param_2,uVar10);
    FUN_1400ae4f0(local_688);
    return param_2;
  }
  local_630 = 0xf;
  local_638 = 0;
  local_648 = local_648 & 0xffffffffffffff00;
  FUN_1400b0300(&local_648,"army_name",9);
  plVar11 = *(longlong **)(param_1 + 0x30);
  if ((undefined **)*plVar11 == &PTR_FUN_141156ab0) {
    plVar11 = (longlong *)FUN_140ceb7c0(&local_648,plVar11 + 0xa3,plVar11 + 0xa0);
  }
  else {
    plVar11 = (longlong *)(*(code *)((undefined **)*plVar11)[0x11])(plVar11,&local_648);
  }
  FUN_1400ae4f0(&local_648);
  if (plVar11 == param_3) {
    local_630 = 0xf;
    local_638 = 0;
    local_648 = local_648 & 0xffffffffffffff00;
    FUN_1400b0300(&local_648,"army_name",9);
    plVar8 = *(longlong **)(param_1 + 0x30);
    if ((undefined **)*plVar8 == &PTR_FUN_141156ab0) {
      lVar9 = FUN_140ceb7c0(&local_648,plVar8 + 0xa3,plVar8 + 0xa0);
    }
    else {
      lVar9 = (*(code *)((undefined **)*plVar8)[0x11])(plVar8,&local_648);
    }
    lVar12 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
    uVar10 = *(undefined8 *)(lVar12 + 0x10);
    iVar5 = *(int *)(*(longlong *)(lVar9 + 0xd8) + 0x1b8);
    FUN_1400ae4f0(&local_648);
    if (iVar5 == (int)uVar10) {
      return param_2;
    }
    pcVar1 = *(code **)(**(longlong **)(param_1 + 0x38) + 0x30);
    if (pcVar1 == (code *)&LAB_1401add00) {
      plVar8 = *(longlong **)(param_1 + 0x38) + 0x17;
    }
    else {
      plVar8 = (longlong *)(*pcVar1)();
    }
    FUN_1400eaa20(param_2,plVar8);
    return param_2;
  }
  pcVar13 = (char *)(**(code **)(*param_3 + 0x90))(param_3);
  if (0xf < *(ulonglong *)(pcVar13 + 0x18)) {
    pcVar13 = *(char **)pcVar13;
  }
  iVar5 = strcmp(pcVar13,"goto_location_button");
  if (iVar5 == 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x80);
    ppuVar2 = *(undefined ***)(lVar9 + 0x10);
    if (ppuVar2 == &PTR_LAB_1410eea48) {
      lVar9 = *(longlong *)(lVar9 + 0xf0) + 0x10;
    }
    else {
      lVar9 = (*(code *)ppuVar2[6])();
    }
    uVar10 = FUN_140152450(local_688,"CIW_GOTOLOCATION","WHERE",lVar9);
    FUN_1400cd750(param_2,uVar10);
    puVar17 = local_688;
    goto LAB_140bd4d91;
  }
  pcVar13 = (char *)(**(code **)(*param_3 + 0x90))(param_3);
  if (0xf < *(ulonglong *)(pcVar13 + 0x18)) {
    pcVar13 = *(char **)pcVar13;
  }
  iVar5 = strcmp(pcVar13,"army_shield");
  if (iVar5 == 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x138);
    lVar12 = *(longlong *)(lVar9 + 0x28);
    if (((lVar12 == 0) || (*(longlong *)(lVar12 + 0xb0) == 0)) ||
       (lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0xb0) + 8),
       (ulonglong)(*(longlong *)(lVar12 + 0x40) - *(longlong *)(lVar12 + 0x38)) < 8)) {
      uVar10 = DAT_1416e3ad0;
      if (0 < (int)(*(longlong *)(lVar9 + 0x78) - *(longlong *)(lVar9 + 0x70) >> 3)) {
        uVar10 = **(undefined8 **)(lVar9 + 0x70);
      }
    }
    else {
      uVar10 = **(undefined8 **)(lVar12 + 0x38);
    }
    uVar10 = FUN_140a4fae0(uVar10,local_4f8,0);
    FUN_140156920(param_2,uVar10);
    FUN_14013a6e0(local_4f8);
    return param_2;
  }
  pcVar13 = (char *)(**(code **)(*param_3 + 0x90))(param_3);
  if (0xf < *(ulonglong *)(pcVar13 + 0x18)) {
    pcVar13 = *(char **)pcVar13;
  }
  iVar5 = strcmp(pcVar13,"army_size");
  if (iVar5 == 0) {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x68))();
    if (cVar4 == '\0') {
      return param_2;
    }
    uVar6 = FUN_140b9b340(*(undefined8 *)(param_1 + 0x38));
    local_res8._0_4_ = uVar6;
    uVar10 = FUN_14011d2f0(local_688,"UNIT_MAX",&DAT_141071830,&local_res8);
    FUN_1400cd750(param_2,uVar10);
    FUN_1400ae4f0(local_688);
    lVar9 = FUN_140ba47e0(*(undefined8 *)(param_1 + 0x38),local_588,1);
    iVar16 = *(int *)(lVar9 + 0x10) + *(int *)(lVar9 + 0x14) + *(int *)(lVar9 + 0x18) +
             *(int *)(lVar9 + 0x1c) + *(int *)(lVar9 + 0x20) + *(int *)(lVar9 + 0x24) +
             *(int *)(lVar9 + 0x28) + *(int *)(lVar9 + 0x2c);
    iVar5 = iVar16 / 1000;
    if (iVar16 != iVar5 * 1000) {
      iVar5 = (uint)(0 < iVar16) + iVar5;
    }
    local_res8 = (longlong *)CONCAT44(local_res8._4_4_,(iVar5 * 1000) / 1000);
    uVar10 = FUN_14011d2f0(local_668,"UNIT_CURRENT","CURRENT",&local_res8);
    uVar10 = FUN_140d5f2e0(local_688,&DAT_141066f10,uVar10);
    FUN_1400b06b0(param_2,uVar10,0,0xffffffffffffffff);
    FUN_1400ae4f0(local_688);
    FUN_1400ae4f0(local_668);
    cVar4 = FUN_140b998f0(*(undefined8 *)(param_1 + 0x38));
    if (cVar4 == '\0') {
      lVar9 = (*(longlong **)(param_1 + 0x38))[0x2e];
      if (lVar9 == 0) {
        lVar9 = FUN_140b96ae0();
      }
      uVar10 = FUN_1400b1ba0(lVar9,0);
      uVar10 = FUN_1400b1d70(uVar10);
      cVar4 = FUN_140490f00(uVar10);
      if (cVar4 != '\0') {
        return param_2;
      }
      lVar9 = FUN_140b995d0(*(undefined8 *)(param_1 + 0x38));
      plVar8 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x38) + 0x50))();
      ppuVar2 = *(undefined ***)(lVar9 + 0x10);
      if (ppuVar2 == &PTR_LAB_1410eea48) {
        lVar9 = *(longlong *)(lVar9 + 0xf0) + 0x10;
      }
      else {
        lVar9 = (*(code *)ppuVar2[6])((longlong *)(lVar9 + 0x10));
      }
      uVar10 = (**(code **)(*plVar8 + 0x90))(plVar8,&local_res8,1);
      uVar10 = FUN_14061ba70(local_668,"UNIT_NOT_REINFORCE","REINFORCE",uVar10,"FRIENDLY",lVar9);
      uVar10 = FUN_140d5f2e0(local_688,&DAT_141066f10,uVar10);
      FUN_1400b06b0(param_2,uVar10,0,0xffffffffffffffff);
      FUN_1400ae4f0(local_688);
    }
    else {
      plVar8 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x38) + 0x50))();
      uVar10 = (**(code **)(*plVar8 + 0x90))(plVar8,&local_res8,1);
      uVar10 = FUN_14030c350(local_668,"UNIT_WILL_REINFORCE","REINFORCE",uVar10);
      uVar10 = FUN_140d5f2e0(local_688,&DAT_141066f10,uVar10);
      FUN_1400b06b0(param_2,uVar10,0,0xffffffffffffffff);
      FUN_1400ae4f0(local_688);
    }
    FUN_1400ae4f0(local_668);
    uVar10 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x50))();
    piVar14 = (int *)FUN_140ba65b0(uVar10,&local_res8);
    if (*piVar14 == 1000) {
      return param_2;
    }
    uVar10 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x50))();
    uVar10 = FUN_140ba5bf0(uVar10,0x5e);
    uVar10 = FUN_1401e2a30(uVar10,&local_648,0,0);
    uVar15 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x50))();
    piVar14 = (int *)FUN_140ba65b0(uVar15,&local_res20);
    local_res8 = (longlong *)CONCAT44(local_res8._4_4_,*piVar14 + -1000);
    uVar15 = FUN_140c64eb0(local_628,&local_res8,2,1);
    uVar10 = FUN_140152080(local_668,"UNIT_LEADER_REINFORCE_RATE","REINFORCE",uVar15,"LEADER",uVar10
                          );
    uVar10 = FUN_140d5f2e0(local_688,&DAT_141066f10,uVar10);
    FUN_1400b06b0(param_2,uVar10,0,0xffffffffffffffff);
    FUN_1400ae4f0(local_688);
    FUN_1400ae4f0(local_668);
    FUN_1400ae4f0(local_628);
    puVar17 = &local_648;
    goto LAB_140bd4d91;
  }
  if (param_3 == local_res8) {
    uVar10 = FUN_140698f70(local_688,"NEW_UNIT");
    FUN_1400cd750(param_2,uVar10);
    FUN_1400ae4f0(local_688);
    uVar10 = FUN_140698f70(local_688,"NEW_UNIT_DRO");
    FUN_1400cd750(param_2 + 4,uVar10);
    FUN_1400ae4f0(local_688);
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x70))();
    if ((cVar4 == '\0') ||
       (lVar9 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x60))(), *(int *)(lVar9 + 0x240) < 1
       )) {
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x68))();
      if ((cVar4 == '\0') ||
         (lVar9 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x50))(),
         *(longlong *)(lVar9 + 0x230) == 0)) {
        lVar9 = *(longlong *)(param_1 + 0x38);
        if (*(int *)(lVar9 + 0xb4) < 1) {
          if ((*(longlong *)(lVar9 + 0x68) == 0) || (*(int *)(*(longlong *)(lVar9 + 0x68) + 8) == 0)
             ) {
            if (*(int *)(lVar9 + 0x48) < 1) {
              uVar10 = FUN_140698f70(local_668,"SPLIT_SINGLE_SUBUNIT");
              uVar10 = FUN_140d5f2e0(local_688,&DAT_141066f10,uVar10);
              FUN_1400b06b0(param_2 + 4,uVar10,0,0xffffffffffffffff);
              FUN_1400ae4f0(local_688);
              puVar17 = local_668;
            }
            else {
              iVar5 = (**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0x200))();
              if (iVar5 == 1) {
                return param_2;
              }
              uVar10 = FUN_140698f70(local_668,"SPLIT_SEVERAL_SELECTED");
              uVar10 = FUN_140d5f2e0(local_688,&DAT_141066f10,uVar10);
              FUN_1400b06b0(param_2 + 4,uVar10,0,0xffffffffffffffff);
              FUN_1400ae4f0(local_688);
              puVar17 = local_668;
            }
          }
          else {
            uVar10 = FUN_140698f70(local_668,"SPLIT_IN_COMBAT");
            uVar10 = FUN_140d5f2e0(local_688,&DAT_141066f10,uVar10);
            FUN_1400b06b0(param_2 + 4,uVar10,0,0xffffffffffffffff);
            FUN_1400ae4f0(local_688);
            puVar17 = local_668;
          }
        }
        else {
          uVar10 = FUN_140698f70(local_668,"SPLIT_RETREATING");
          uVar10 = FUN_140d5f2e0(local_688,&DAT_141066f10,uVar10);
          FUN_1400b06b0(param_2 + 4,uVar10,0,0xffffffffffffffff);
          FUN_1400ae4f0(local_688);
          puVar17 = local_668;
        }
      }
      else {
        uVar10 = FUN_140698f70(local_668,"SPLIT_LOADED_ARMY");
        uVar10 = FUN_140d5f2e0(local_688,&DAT_141066f10,uVar10);
        FUN_1400b06b0(param_2 + 4,uVar10,0,0xffffffffffffffff);
        FUN_1400ae4f0(local_688);
        puVar17 = local_668;
      }
    }
    else {
      uVar10 = FUN_140698f70(local_668,"SPLIT_LOADED_NAVY");
      uVar10 = FUN_140d5f2e0(local_688,&DAT_141066f10,uVar10);
      FUN_1400b06b0(param_2 + 4,uVar10,0,0xffffffffffffffff);
      FUN_1400ae4f0(local_688);
      puVar17 = local_668;
    }
    goto LAB_140bd4d91;
  }
  if (param_3 == local_res20) {
    uVar10 = FUN_140698f70(local_688,"SPLIT_IN_HALF_UNIT");
    FUN_1400cd750(param_2,uVar10);
    FUN_1400ae4f0(local_688);
    uVar10 = FUN_140698f70(local_688,"SPLIT_IN_HALF_UNIT_DRO");
    FUN_1400cd750(param_2 + 4,uVar10);
    FUN_1400ae4f0(local_688);
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x70))();
    if ((cVar4 == '\0') ||
       (lVar9 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x60))(), *(int *)(lVar9 + 0x240) < 1
       )) {
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x68))();
      if ((cVar4 == '\0') ||
         (lVar9 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x50))(),
         *(longlong *)(lVar9 + 0x230) == 0)) {
        lVar9 = *(longlong *)(param_1 + 0x38);
        if (*(int *)(lVar9 + 0xb4) < 1) {
          if ((*(longlong *)(lVar9 + 0x68) == 0) || (*(int *)(*(longlong *)(lVar9 + 0x68) + 8) == 0)
             ) {
            if (*(int *)(lVar9 + 0x48) < 1) {
              uVar10 = FUN_140698f70(local_668,"SPLIT_SINGLE_SUBUNIT");
              uVar10 = FUN_140d5f2e0(local_688,&DAT_141066f10,uVar10);
              FUN_1400b06b0(param_2 + 4,uVar10,0,0xffffffffffffffff);
              FUN_1400ae4f0(local_688);
              puVar17 = local_668;
            }
            else {
              iVar5 = (**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0x200))();
              if (iVar5 == 1) {
                return param_2;
              }
              uVar10 = FUN_140698f70(local_668,"SPLIT_SEVERAL_SELECTED");
              uVar10 = FUN_140d5f2e0(local_688,&DAT_141066f10,uVar10);
              FUN_1400b06b0(param_2 + 4,uVar10,0,0xffffffffffffffff);
              FUN_1400ae4f0(local_688);
              puVar17 = local_668;
            }
          }
          else {
            uVar10 = FUN_140698f70(local_668,"SPLIT_IN_COMBAT");
            uVar10 = FUN_140d5f2e0(local_688,&DAT_141066f10,uVar10);
            FUN_1400b06b0(param_2 + 4,uVar10,0,0xffffffffffffffff);
            FUN_1400ae4f0(local_688);
            puVar17 = local_668;
          }
        }
        else {
          uVar10 = FUN_140698f70(local_668,"SPLIT_RETREATING");
          uVar10 = FUN_140d5f2e0(local_688,&DAT_141066f10,uVar10);
          FUN_1400b06b0(param_2 + 4,uVar10,0,0xffffffffffffffff);
          FUN_1400ae4f0(local_688);
          puVar17 = local_668;
        }
      }
      else {
        uVar10 = FUN_140698f70(local_668,"SPLIT_LOADED_ARMY");
        uVar10 = FUN_140d5f2e0(local_688,&DAT_141066f10,uVar10);
        FUN_1400b06b0(param_2 + 4,uVar10,0,0xffffffffffffffff);
        FUN_1400ae4f0(local_688);
        puVar17 = local_668;
      }
    }
    else {
      uVar10 = FUN_140698f70(local_668,"SPLIT_LOADED_NAVY");
      uVar10 = FUN_140d5f2e0(local_688,&DAT_141066f10,uVar10);
      FUN_1400b06b0(param_2 + 4,uVar10,0,0xffffffffffffffff);
      FUN_1400ae4f0(local_688);
      puVar17 = local_668;
    }
    goto LAB_140bd4d91;
  }
  if (param_3 == local_5e0) {
    uVar10 = FUN_140698f70(local_688,"DISBAND_UNIT");
    FUN_1400cd750(param_2,uVar10);
    FUN_1400ae4f0(local_688);
    uVar10 = FUN_140698f70(local_668,"DISBAND_UNIT_DRO");
    FUN_1400cd750(param_2 + 4,uVar10);
    FUN_1400ae4f0(local_668);
    if (*(int *)(*(longlong *)(param_1 + 0x38) + 0xb4) != 3) {
      return param_2;
    }
    uVar10 = FUN_140698f70(local_668,"DISBAND_SHATTERED");
    uVar10 = FUN_140d5f2e0(local_688,&DAT_141066f10,uVar10);
    FUN_1400b06b0(param_2 + 4,uVar10,0,0xffffffffffffffff);
    FUN_1400ae4f0(local_688);
    puVar17 = local_668;
    goto LAB_140bd4d91;
  }
  pcVar13 = (char *)(**(code **)(*param_3 + 0x90))(param_3);
  if (0xf < *(ulonglong *)(pcVar13 + 0x18)) {
    pcVar13 = *(char **)pcVar13;
  }
  iVar5 = strcmp(pcVar13,"toggle_looter_button");
  if (iVar5 == 0) {
    local_610 = 0xf;
    local_618 = 0;
    local_628[0] = 0;
    FUN_1400b0300(local_628,"toggle_looter_button",0x14);
    plVar8 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                       (*(longlong **)(param_1 + 0x30),local_628);
    if (*(code **)(*plVar8 + 0x1f0) == (code *)&LAB_140cfb1a0) {
      cVar4 = *(int *)((longlong)plVar8 + 0x8c) == 3;
    }
    else {
      cVar4 = (**(code **)(*plVar8 + 0x1f0))();
    }
    FUN_1400ae4f0(local_628);
    if (cVar4 == '\0') {
      uVar10 = FUN_140698f70(local_688,"TOGGLE_LOOTER");
      FUN_1400cd750(param_2,uVar10);
      FUN_1400ae4f0(local_688);
    }
    else {
      FUN_140bb7030(local_588,*(undefined8 *)(param_1 + 0x38));
      local_610 = 0xf;
      local_618 = 0;
      local_628[0] = 0;
      FUN_1400b0300(local_628,&DAT_141066f10,1);
      uVar10 = FUN_140698f70(local_668,"TOGGLE_LOOTER");
      uVar10 = FUN_140d5f250(uVar10,local_688,local_628);
      FUN_1400cd750(param_2,uVar10);
      FUN_1400ae4f0(local_688);
      FUN_1400ae4f0(local_668);
      FUN_1400ae4f0(local_628);
      FUN_140bb71b0(local_588,param_2);
      FUN_1400b2310(local_588);
    }
    uVar10 = FUN_140698f70(local_688,"TOGGLE_LOOTER_DESC");
    FUN_1400cd750(param_2 + 4,uVar10);
    FUN_1400ae4f0(local_688);
    if (DAT_1417eae70 == DAT_1417f2ff0) {
      uVar10 = FUN_140698f70(local_668,"TOGGLE_LOOTER_0_MAINT_DESC");
      uVar10 = FUN_140d5f2e0(local_688,&DAT_14106175c,uVar10);
      FUN_1400b06b0(param_2 + 4,uVar10,0,0xffffffffffffffff);
      FUN_1400ae4f0(local_688);
      puVar17 = local_668;
    }
    else {
      local_res8 = (longlong *)(DAT_1417eae70 * 0x320000 >> 0xf);
      uVar10 = FUN_140d5ef90(local_628,&local_res8,1);
      uVar10 = FUN_140152450(local_668,"TOGGLE_LOOTER_GR0_MAINT_DESC",&DAT_141079320,uVar10);
      uVar10 = FUN_140d5f2e0(local_688,&DAT_14106175c,uVar10);
      FUN_1400b06b0(param_2 + 4,uVar10,0,0xffffffffffffffff);
      FUN_1400ae4f0(local_688);
      FUN_1400ae4f0(local_668);
      puVar17 = (ulonglong *)local_628;
    }
    goto LAB_140bd4d91;
  }
  if (param_3 == plVar8) {
    uVar10 = FUN_140698f70(local_688,"LOADSHIP_UNIT");
    FUN_1400cd750(param_2,uVar10);
    FUN_1400ae4f0(local_688);
    uVar10 = FUN_140698f70(local_668,"LOADSHIP_UNIT_DRO");
    FUN_1400cd750(param_2 + 4,uVar10);
    FUN_1400ae4f0(local_668);
    if (*(code **)(*plVar8 + 0x1f0) == (code *)&LAB_140cfb1a0) {
      cVar4 = *(int *)((longlong)plVar8 + 0x8c) == 3;
    }
    else {
      cVar4 = (**(code **)(*plVar8 + 0x1f0))(plVar8);
    }
    if (cVar4 == '\0') {
      return param_2;
    }
    plVar8 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x80) + 0xcc0);
    do {
      do {
        do {
          if (plVar8 == (longlong *)0x0) {
            local_618 = 0;
            local_610 = 0;
            FUN_1400b0200(local_628,0,0);
            FUN_1400b0300(local_628,&DAT_141067474,2);
            uVar10 = FUN_140698f70(&local_648,"LOADSHIP_UNIT_FAILDESC");
            uVar10 = FUN_140d5f2e0(local_668,&DAT_1410a50a8,uVar10);
            uVar10 = FUN_140d5f250(uVar10,local_688,local_628);
            FUN_1400b06b0(param_2 + 4,uVar10,0,0xffffffffffffffff);
            FUN_1400ae4f0(local_688);
            FUN_1400ae4f0(local_668);
            FUN_1400ae4f0(&local_648);
            puVar17 = (ulonglong *)local_628;
            goto LAB_140bd4d91;
          }
          plVar11 = (longlong *)*plVar8;
          plVar8 = (longlong *)plVar8[2];
          cVar4 = (**(code **)(*plVar11 + 0x70))(plVar11);
        } while (cVar4 == '\0');
        lVar9 = plVar11[0x2e];
        if (lVar9 == 0) {
          lVar9 = FUN_140b96ae0(plVar11);
        }
        lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x170);
        if (lVar12 == 0) {
          lVar12 = FUN_140b96ae0();
        }
      } while (lVar9 != lVar12);
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x50))();
      uVar10 = (**(code **)(*plVar11 + 0x60))(plVar11);
      cVar4 = FUN_140ba7980(uVar10);
    } while (cVar4 == '\0');
    local_618 = 0;
    local_610 = 0;
    FUN_1400b0200(local_628,0,0);
    FUN_1400b0300(local_628,&DAT_141067474,2);
    uVar10 = FUN_140698f70(&local_648,"LOADSHIP_UNIT_FAILDESC2");
    uVar10 = FUN_140d5f2e0(local_668,&DAT_1410a50a8,uVar10);
    uVar10 = FUN_140d5f250(uVar10,local_688,local_628);
    FUN_1400b06b0(param_2 + 4,uVar10,0,0xffffffffffffffff);
    FUN_1400ae4f0(local_688);
    FUN_1400ae4f0(local_668);
    FUN_1400ae4f0(&local_648);
    puVar17 = (ulonglong *)local_628;
    goto LAB_140bd4d91;
  }
  uVar10 = (**(code **)(*param_3 + 0x90))(param_3);
  cVar4 = FUN_1400b1830(uVar10,"leader_button");
  if (cVar4 == '\0') {
    uVar10 = (**(code **)(*param_3 + 0x90))(param_3);
    cVar4 = FUN_1400b1830(uVar10,"unitleader");
    if (cVar4 != '\0') goto LAB_140bd4d4c;
    if (param_3 == local_5b8) {
      uVar10 = FUN_140698f70(local_688,"SELECT_UNIT");
      FUN_1400cd750(param_2,uVar10);
      FUN_1400ae4f0(local_688);
      uVar10 = FUN_140698f70(local_668,"SELECT_UNIT_DRO");
      FUN_1400cd750(param_2 + 4,uVar10);
      puVar17 = local_668;
      goto LAB_140bd4d91;
    }
    uVar10 = (**(code **)(*param_3 + 0x90))(param_3);
    cVar4 = FUN_1400b1830(uVar10,"unit_morale");
    if (cVar4 != '\0') {
LAB_140bd4c66:
      uVar6 = FUN_140b9ebd0(*(undefined8 *)(param_1 + 0x38));
      local_res8 = (longlong *)CONCAT44(local_res8._4_4_,uVar6);
      uVar10 = FUN_140b9eaa0(*(undefined8 *)(param_1 + 0x38),&local_res20);
      uVar10 = FUN_140c651e0(local_5a8,uVar10,1,1);
      uVar15 = FUN_140b9e9b0(*(undefined8 *)(param_1 + 0x38),&local_5e0);
      uVar15 = FUN_140c651e0(local_5d8,uVar15,1,1);
      uVar10 = FUN_14061b2a0(local_608,"COMBATVIEW_MORALE","MORALE",uVar15,"DELTA",uVar10,
                             "TOTAL_MORALE",&local_res8);
      FUN_1400cd750(param_2,uVar10);
      FUN_1400ae4f0(local_608);
      FUN_1400ae4f0(local_5d8);
      FUN_1400ae4f0(local_5a8);
      uVar10 = FUN_140b9ec70(*(undefined8 *)(param_1 + 0x38),local_688);
      FUN_1400cd750(param_2 + 4,uVar10);
      puVar17 = local_688;
      goto LAB_140bd4d91;
    }
    uVar10 = (**(code **)(*param_3 + 0x90))(param_3);
    cVar4 = FUN_1400b1830(uVar10,"unit_morale_frame");
    if (cVar4 != '\0') goto LAB_140bd4c66;
    uVar10 = (**(code **)(*param_3 + 0x90))(param_3);
    cVar4 = FUN_1400b1830(uVar10,"attach_unit_button");
    if (cVar4 != '\0') {
      if (7 < (ulonglong)
              (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1b0) -
              *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1a8))) {
        local_618 = 0;
        local_610 = 0;
        FUN_1400b0200(local_628,0,0);
        FUN_1400b0300(local_628,&DAT_141066f10,1);
        uVar10 = FUN_140698f70(local_668,"UW_UNITS_ATTACHED");
        uVar10 = FUN_140d5f250(uVar10,local_688,local_628);
        FUN_1400cd750(param_2,uVar10);
        FUN_1400ae4f0(local_688);
        FUN_1400ae4f0(local_668);
        FUN_1400ae4f0(local_628);
        local_648 = 0;
        lStack_640 = 0;
        local_638 = 0;
        FUN_1400cd7d0(&local_648,*(longlong *)(param_1 + 0x38) + 0x1a8);
        uVar3 = local_648;
        local_res8 = (longlong *)(longlong)(int)((longlong)(lStack_640 - local_648) >> 3);
        if (0 < (longlong)local_res8) {
          do {
            plVar8 = *(longlong **)(uVar3 + (longlong)puVar22 * 8);
            local_658 = 0;
            local_650 = 0;
            FUN_1400b0200(local_668,0,0);
            FUN_1400b0300(local_668,&DAT_1410fd384,4);
            local_618 = 0;
            local_610 = 0;
            FUN_1400b0200(local_628,0,0);
            FUN_1400b0300(local_628,&DAT_1410764d4,4);
            if (*(code **)(*plVar8 + 0x30) == (code *)&LAB_1401add00) {
              plVar11 = plVar8 + 0x17;
            }
            else {
              plVar11 = (longlong *)(**(code **)(*plVar8 + 0x30))(plVar8);
            }
            in_stack_fffffffffffff958 = in_stack_fffffffffffff958 & 0xffffffffffffff00;
            uVar6 = FUN_140b9aa40(plVar8,0,0,0,in_stack_fffffffffffff958);
            uVar10 = FUN_140d5ebc0(local_608,uVar6);
            uVar15 = FUN_140d5f250(plVar11,local_5d8,local_628);
            uVar10 = FUN_140d5f250(uVar15,local_5a8,uVar10);
            FUN_140d5f250(uVar10,local_688);
            FUN_1400ae4f0(local_5a8);
            FUN_1400ae4f0(local_5d8);
            FUN_1400ae4f0(local_608);
            FUN_1400ae4f0(local_628);
            FUN_1400ae4f0(local_668);
            FUN_1400b06b0(param_2);
            FUN_1400ae4f0(local_688);
            puVar22 = (undefined8 *)((longlong)puVar22 + 1);
          } while ((longlong)puVar22 < (longlong)local_res8);
        }
        FUN_1400b19c0(&local_648);
        return param_2;
      }
      lVar9 = FUN_140bd8260(param_1);
      if (lVar9 == 0) {
        uVar10 = FUN_140698f70(local_608,"UW_NOT_POSSIBLE_TO_ATTACH");
        FUN_1400cd750(param_2,uVar10);
        FUN_1400ae4f0(local_608);
        uVar10 = FUN_140698f70(local_5d8,"ATTACHMENT_REQUIREMENTS_TOOLTIP");
        FUN_1400cd750(param_2 + 4,uVar10);
        puVar17 = local_5d8;
      }
      else {
        plVar8 = (longlong *)FUN_140bd8260(param_1);
        if (*(code **)(*plVar8 + 0x30) == (code *)&LAB_1401add00) {
          plVar8 = plVar8 + 0x17;
        }
        else {
          plVar8 = (longlong *)(**(code **)(*plVar8 + 0x30))();
        }
        FUN_1400ae4a0(local_688,plVar8);
        uVar10 = FUN_140152450(local_608,"UW_ATTACH_TO",&DAT_1410725c8,local_688);
        FUN_1400cd750(param_2,uVar10);
        FUN_1400ae4f0(local_608);
        if (0 < *(int *)(*(longlong *)(param_1 + 0x38) + 0xb4)) {
          uVar10 = FUN_140698f70(local_608,"ATTACH_RETREATING");
          FUN_1400cd750(param_2 + 4,uVar10);
          FUN_1400ae4f0(local_608);
        }
        puVar17 = local_688;
      }
      goto LAB_140bd4d91;
    }
    uVar10 = (**(code **)(*param_3 + 0x90))(param_3);
    cVar4 = FUN_1400b1830(uVar10,"detach_unit_button");
    if (cVar4 != '\0') {
      plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x1c0);
      if (plVar8 == (longlong *)0x0) {
        return param_2;
      }
      if (*(code **)(*plVar8 + 0x30) == (code *)&LAB_1401add00) {
        plVar8 = plVar8 + 0x17;
      }
      else {
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x30))();
      }
      FUN_1400ae4a0(local_688,plVar8);
      uVar10 = FUN_140152450(local_608,"UW_DETACH_FROM",&DAT_1410725c8,local_688);
      FUN_1400cd750(param_2,uVar10);
      FUN_1400ae4f0(local_608);
      if (0 < *(int *)(*(longlong *)(param_1 + 0x38) + 0xb4)) {
        uVar10 = FUN_140698f70(local_608,"DETACH_RETREATING");
        FUN_1400cd750(param_2 + 4,uVar10);
        FUN_1400ae4f0(local_608);
      }
      puVar17 = local_688;
      goto LAB_140bd4d91;
    }
    uVar10 = (**(code **)(*param_3 + 0x90))(param_3);
    cVar4 = FUN_1400b1830(uVar10,"quicksplitbutton");
    if (cVar4 == '\0') {
      uVar10 = (**(code **)(*param_3 + 0x90))(param_3);
      cVar4 = FUN_1400b1830(uVar10,"attach_order_button");
      if (cVar4 == '\0') {
        return param_2;
      }
      local_658 = 0;
      local_650 = 0;
      FUN_1400b0200(local_668,0,0);
      FUN_1400b0300(local_668,"attach_order_button",0x13);
      plVar8 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                         (*(longlong **)(param_1 + 0x30),local_668);
      FUN_1400ae4f0(local_668);
      uVar10 = FUN_140698bb0(local_608,"ALLY_ORDER_ATTACH_TITLE");
      FUN_1400cd750(param_2,uVar10);
      FUN_1400ae4f0(local_608);
      if (*(code **)(*plVar8 + 0x1f0) == (code *)&LAB_140cfb1a0) {
        cVar4 = *(int *)((longlong)plVar8 + 0x8c) == 3;
      }
      else {
        cVar4 = (**(code **)(*plVar8 + 0x1f0))(plVar8);
      }
      if (cVar4 == '\0') {
        uVar10 = FUN_140698bb0(local_5d8,"ATTACH_TO_UNIT_ALLY_ORDER_BUTTON");
        uVar10 = FUN_140d5f2e0(local_608,&DAT_141066f10,uVar10);
        FUN_1400b06b0(param_2,uVar10,0,0xffffffffffffffff);
        FUN_1400ae4f0(local_608);
      }
      else {
        uVar10 = FUN_140698bb0(local_5d8,"ALLY_ORDER_BUTTON_NO_ALLIES");
        uVar10 = FUN_140d5f2e0(local_608,&DAT_141066f10,uVar10);
        FUN_1400b06b0(param_2,uVar10,0,0xffffffffffffffff);
        FUN_1400ae4f0(local_608);
      }
      FUN_1400ae4f0(local_5d8);
      uVar10 = FUN_140698bb0(local_608,"ALLY_ORDER_DELAYED_TOOLTIP");
      puVar7 = param_2 + 4;
    }
    else {
      uVar10 = FUN_140698f70(local_608,"SPLIT_QUICK_MENU");
      FUN_1400cd750(param_2,uVar10);
      FUN_1400ae4f0(local_608);
      local_658 = 0;
      local_650 = 0;
      FUN_1400b0200(local_668,0,0);
      FUN_1400b0300(local_668,"quicksplitbutton");
      plVar8 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                         (*(longlong **)(param_1 + 0x30),local_668);
      if (*(code **)(*plVar8 + 0x1f0) == (code *)&LAB_140cfb1a0) {
        cVar4 = *(int *)((longlong)plVar8 + 0x8c) == 3;
      }
      else {
        cVar4 = (**(code **)(*plVar8 + 0x1f0))();
      }
      FUN_1400ae4f0(local_668);
      if (cVar4 == '\0') {
        return param_2;
      }
      cVar19 = '\0';
      cVar20 = '\0';
      cVar4 = '\0';
      cVar21 = '\0';
      cVar18 = '\0';
      lVar9 = *(longlong *)(param_1 + 0x38);
      puVar7 = (undefined8 *)(lVar9 + 0x38);
      if (lVar9 == 0) {
        puVar7 = puVar22;
      }
      plVar8 = (longlong *)*puVar7;
      while ((plVar8 != (longlong *)0x0 &&
             (((cVar19 == '\0' || (cVar20 == '\0')) ||
              ((cVar4 == '\0' || ((cVar21 == '\0' || (cVar18 == '\0'))))))))) {
        lVar12 = *plVar8;
        plVar8 = (longlong *)plVar8[2];
        iVar5 = *(int *)(lVar12 + 0x44);
        if (iVar5 == 4) {
          cVar21 = '\x01';
        }
        else if (iVar5 == 3) {
          cVar19 = '\x01';
        }
        else if (iVar5 == 2) {
          cVar4 = '\x01';
        }
        else if ((*(byte *)(*(longlong *)(lVar12 + 0x88) + 0x9d3) & 0x40) == 0) {
          cVar18 = '\x01';
        }
        else {
          cVar20 = '\x01';
        }
      }
      if ((byte)(cVar18 + cVar21 + cVar4 + cVar20 + cVar19) < 2) {
        uVar10 = FUN_140698f70(local_608,"SPLIT_SAME");
        puVar7 = param_2 + 4;
      }
      else {
        if (*(int *)(lVar9 + 0xb4) < 1) {
          return param_2;
        }
        uVar10 = FUN_140698f70(local_608,"SPLIT_RETREATING");
        puVar7 = param_2 + 4;
      }
    }
  }
  else {
LAB_140bd4d4c:
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x70))();
    if (cVar4 == '\0') {
      return param_2;
    }
    if (*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x80) + 0xf0) + 100)
        != '\0') {
      return param_2;
    }
    uVar10 = FUN_140698f70(local_608,"CANNOT_CHANGE_LEADER_AT_SEA");
    puVar7 = param_2;
  }
  FUN_1400cd750(puVar7,uVar10);
  puVar17 = local_608;
LAB_140bd4d91:
  FUN_1400ae4f0(puVar17);
  return param_2;
}


