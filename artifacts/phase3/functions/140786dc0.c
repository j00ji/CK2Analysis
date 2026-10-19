
void FUN_140786dc0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  uint uVar18;
  longlong *plVar19;
  longlong lVar20;
  bool bVar21;
  longlong *local_res18;
  longlong *local_760;
  longlong local_758;
  longlong local_738;
  longlong *local_730;
  longlong local_728;
  longlong *local_720;
  undefined **local_718;
  undefined4 local_710;
  byte local_708;
  undefined7 uStack_707;
  undefined8 local_6f8;
  ulonglong local_6f0;
  undefined4 local_6e8;
  undefined2 local_6e4;
  undefined4 local_6e0;
  undefined4 local_6dc;
  undefined2 local_6d8;
  undefined2 local_6d6;
  undefined4 local_6d4;
  undefined1 local_6d0;
  ulonglong local_6c8;
  undefined8 uStack_6c0;
  longlong local_6b8;
  ulonglong local_6b0;
  undefined8 local_6a8;
  longlong lStack_6a0;
  longlong local_698;
  undefined4 local_690;
  undefined4 local_68c;
  undefined1 local_688;
  int local_678;
  longlong local_670;
  undefined8 *local_668;
  undefined8 *local_660;
  undefined8 *local_658;
  undefined8 *local_650;
  undefined8 *local_648;
  undefined8 *local_640;
  undefined8 *local_638;
  undefined8 *local_630;
  undefined1 local_628;
  undefined7 uStack_627;
  undefined8 local_618;
  ulonglong local_610;
  uint local_608;
  int local_604;
  undefined8 *local_5f8;
  undefined8 *local_5f0;
  undefined1 local_5e0 [8];
  longlong *local_5d8;
  undefined1 local_5d0 [8];
  longlong *local_5c8;
  undefined1 local_5c0 [8];
  longlong local_5b8;
  undefined1 local_5b0 [8];
  longlong *local_5a8;
  undefined1 local_5a0 [8];
  longlong local_598;
  undefined8 local_590;
  undefined8 local_588 [3];
  ulonglong local_570;
  undefined8 *local_568;
  undefined8 *local_560;
  undefined1 local_550 [32];
  undefined1 local_530 [160];
  undefined **local_490 [12];
  undefined1 local_430 [160];
  undefined **local_390 [12];
  undefined1 local_330 [160];
  undefined **local_290 [12];
  undefined1 local_230 [160];
  undefined **local_190 [12];
  undefined1 local_130 [160];
  undefined **local_90 [14];
  
  local_590 = 0xfffffffffffffffe;
  if ((char)param_2[1] != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x370) + 0x1b0))();
  }
  cVar4 = (**(code **)(*param_2 + 0x70))(param_2);
  plVar11 = (longlong *)0x0;
  if (cVar4 != '\0') {
    lVar7 = (**(code **)(*param_2 + 0x60))(param_2);
    plVar9 = *(longlong **)(lVar7 + 0x230);
    while (plVar9 != (longlong *)0x0) {
      lVar7 = *plVar9;
      plVar9 = (longlong *)plVar9[2];
      if (*(char *)(lVar7 + 8) != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x370) + 0x1b8))();
      }
    }
    lVar7 = (**(code **)(*param_2 + 0x60))();
    if (0 < *(int *)(lVar7 + 0x248)) {
      bVar21 = false;
      lVar7 = param_2[0x10];
      iVar6 = (int)(*(longlong *)(lVar7 + 0xcf0) - *(longlong *)(lVar7 + 0xce8) >> 2);
      if (0 < iVar6) {
        local_758 = 0;
        do {
          if (bVar21) goto LAB_140787100;
          plVar9 = DAT_1418d6ab0;
          if (((DAT_1418d6ab8 != 0) &&
              (uVar18 = *(uint *)(*(longlong *)(lVar7 + 0xce8) + local_758 * 4) & 0xffffff,
              uVar18 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
             (plVar9 = *(longlong **)
                        (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar18 * 0x10),
             plVar9 == (longlong *)0x0)) {
            plVar9 = DAT_1418d6ab0;
          }
          cVar4 = (**(code **)(plVar9[2] + 8))();
          if (cVar4 != '\0') {
            plVar9 = DAT_1418d6ab0;
            if (((DAT_1418d6ab8 != 0) &&
                (uVar18 = *(uint *)(*(longlong *)(lVar7 + 0xce8) + local_758 * 4) & 0xffffff,
                uVar18 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
               (plVar9 = *(longlong **)
                          (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar18 * 0x10),
               plVar9 == (longlong *)0x0)) {
              plVar9 = DAT_1418d6ab0;
            }
            if (*(code **)(*plVar9 + 0x30) == (code *)&LAB_1403827a0) {
              if (((*(int *)((longlong)plVar9 + 0x2c) - 3U & 0xfffffffa) == 0) &&
                 (*(int *)((longlong)plVar9 + 0x2c) != 4)) goto LAB_140786fea;
LAB_140786fc1:
              plVar19 = DAT_1416e2360;
              if (((longlong *)plVar9[6] != (longlong *)0x0) &&
                 (cVar4 = (**(code **)(*(longlong *)plVar9[6] + 0x40))(), plVar19 = DAT_1416e2360,
                 cVar4 != '\0')) {
                plVar19 = *(longlong **)(plVar9[6] + 0x498);
              }
            }
            else {
              cVar4 = (**(code **)(*plVar9 + 0x30))(plVar9);
              if (cVar4 == '\0') goto LAB_140786fc1;
LAB_140786fea:
              plVar19 = (longlong *)plVar9[8];
            }
            lVar20 = plVar19[5];
            if ((lVar20 == 0) || (*(longlong *)(lVar20 + 0x108) == 0)) {
              lVar20 = plVar19[0x35];
              lVar8 = *(longlong *)(lVar20 + 0x1a8);
              plVar9 = plVar11;
              if (lVar20 != *(longlong *)(lVar20 + 0x1a8)) {
                do {
                  lVar15 = lVar8;
                  if (4 < (int)plVar9) break;
                  plVar9 = (longlong *)(ulonglong)((int)plVar9 + 1);
                  lVar8 = *(longlong *)(lVar15 + 0x1a8);
                  lVar20 = lVar15;
                } while (lVar15 != *(longlong *)(lVar15 + 0x1a8));
              }
            }
            else {
              lVar20 = *(longlong *)(lVar20 + 0x108);
            }
            if (param_2[0x2e] == 0) {
              lVar8 = FUN_1400d3090(param_2 + 0x2d);
              param_2[0x2c] = lVar8;
              param_2[0x2e] = lVar8;
              if (lVar8 == 0) {
                param_2[0x2e] = (longlong)DAT_1416e2360;
              }
            }
            lVar8 = *(longlong *)(param_2[0x2e] + 0x28);
            if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0x108) == 0)) {
              lVar8 = *(longlong *)(param_2[0x2e] + 0x1a8);
              lVar15 = *(longlong *)(lVar8 + 0x1a8);
              plVar9 = plVar11;
              if (lVar8 != *(longlong *)(lVar8 + 0x1a8)) {
                do {
                  if (4 < (int)plVar9) break;
                  plVar9 = (longlong *)(ulonglong)((int)plVar9 + 1);
                  bVar21 = lVar15 != *(longlong *)(lVar15 + 0x1a8);
                  lVar8 = lVar15;
                  lVar15 = *(longlong *)(lVar15 + 0x1a8);
                } while (bVar21);
              }
            }
            else {
              lVar8 = *(longlong *)(lVar8 + 0x108);
            }
            bVar21 = lVar20 == lVar8;
          }
          local_758 = local_758 + 1;
        } while (local_758 < iVar6);
        if (bVar21) {
LAB_140787100:
          lVar7 = (**(code **)(*param_2 + 0x60))(param_2);
          local_670 = ((longlong)*(int *)(lVar7 + 0x248) << 0x1e) / 0x1f40000;
          if (param_2[0x2e] == 0) {
            lVar7 = FUN_1400d3090(param_2 + 0x2d);
            param_2[0x2c] = lVar7;
            param_2[0x2e] = lVar7;
            if (lVar7 == 0) {
              param_2[0x2e] = (longlong)DAT_1416e2360;
            }
          }
          FUN_14024ab30(param_2[0x2e],&local_670);
          lVar7 = (**(code **)(*param_2 + 0x60))(param_2);
          iVar6 = (int)(((longlong)*(int *)(lVar7 + 0x248) * (longlong)DAT_1416e26ec) / 1000);
          local_678 = iVar6;
          if (param_2[0x2e] == 0) {
            lVar7 = FUN_1400d3090(param_2 + 0x2d);
            param_2[0x2c] = lVar7;
            param_2[0x2e] = lVar7;
            if (lVar7 == 0) {
              param_2[0x2e] = (longlong)DAT_1416e2360;
            }
          }
          if (*(longlong *)(param_2[0x2e] + 0x28) != 0) {
            piVar1 = (int *)(*(longlong *)(param_2[0x2e] + 0x28) + 0x1a4);
            *piVar1 = *piVar1 + iVar6;
          }
        }
      }
    }
  }
  while( true ) {
    plVar9 = param_2 + 9;
    if (param_2 == (longlong *)0x0) {
      plVar9 = (longlong *)&DAT_00000010;
    }
    if ((int)*plVar9 == 0) break;
    plVar9 = param_2 + 7;
    if (param_2 == (longlong *)0x0) {
      plVar9 = plVar11;
    }
    lVar7 = *(longlong *)*plVar9;
    local_710 = 0x18e;
    local_718 = &PTR_FUN_141065530;
    local_6f0 = 0xf;
    local_6f8 = 0;
    local_708 = 0;
    local_6e0 = 0x28c4;
    local_6dc = 0x28c4;
    local_6c8 = 0;
    uStack_6c0 = 0;
    local_6b8 = 0;
    local_6b0 = 0;
    local_6a8 = 0;
    lStack_6a0 = 0;
    local_6d8 = 0xffff;
    FUN_1400b0300(&local_708,&DAT_14106162d,0);
    local_6e8 = 0;
    local_6e4 = 0;
    local_6d6 = 0;
    local_6d4 = 0;
    local_6d0 = 0;
    local_718 = &PTR_FUN_141143470;
    local_690 = *(undefined4 *)(lVar7 + 0x10);
    local_68c = *(undefined4 *)(lVar7 + 0x14);
    local_688 = 1;
    local_698 = lVar7;
    FUN_140baac20(&local_718);
    local_718 = &PTR_FUN_141065530;
    if (local_6b0 != 0) {
      uVar10 = (longlong)(lStack_6a0 - local_6b0) >> 2;
      if (0x3fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_140e3f0ac();
      }
      uVar16 = local_6b0;
      if (0xfff < uVar10 * 4) {
        if ((local_6b0 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
        uVar16 = *(ulonglong *)(local_6b0 - 8);
        if (local_6b0 <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
        if (local_6b0 - uVar16 < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
        if (0x27 < local_6b0 - uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
      }
      FUN_140e1c5e4(uVar16);
      local_6b0 = 0;
      local_6a8 = 0;
      lStack_6a0 = 0;
    }
    if (local_6c8 != 0) {
      uVar10 = (longlong)(local_6b8 - local_6c8) >> 2;
      if (0x3fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_140e3f0ac();
      }
      uVar16 = local_6c8;
      if (0xfff < uVar10 * 4) {
        if ((local_6c8 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
        uVar16 = *(ulonglong *)(local_6c8 - 8);
        if (local_6c8 <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
        if (local_6c8 - uVar16 < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
        if (0x27 < local_6c8 - uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
      }
      FUN_140e1c5e4(uVar16);
      local_6c8 = 0;
      uStack_6c0 = 0;
      local_6b8 = 0;
    }
    if (0xf < local_6f0) {
      uVar16 = CONCAT71(uStack_707,local_708);
      uVar10 = uVar16;
      if (0xfff < local_6f0 + 1) {
        if ((local_708 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
        uVar10 = *(ulonglong *)(uVar16 - 8);
        if (uVar16 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
        if (uVar16 - uVar10 < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
        if (0x27 < uVar16 - uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
      }
      FUN_140e1c5e4(uVar10);
    }
  }
  lVar7 = param_2[0x10];
  if (lVar7 != 0) {
    for (local_668 = *(undefined8 **)(lVar7 + 0xcc0); local_668 != (undefined8 *)0x0;
        local_668 = (undefined8 *)local_668[2]) {
      if ((longlong *)*local_668 == param_2) {
        if (local_668 != (undefined8 *)0x0) {
          FUN_1409382e0(lVar7,param_2);
        }
        break;
      }
    }
  }
  FUN_140b99ce0(param_2,&local_728);
  if (local_728 != 0) {
    FUN_1403b6c40(local_728,param_2,1);
  }
  plVar9 = local_720;
  if (local_720 != (longlong *)0x0) {
    LOCK();
    plVar19 = local_720 + 1;
    lVar7 = *plVar19;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_720)(local_720);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_720 + 8))();
      }
    }
  }
  FUN_140b99c30(param_2);
  if (local_738 != 0) {
    FUN_1403b6c40(local_738,param_2,1);
  }
  if (local_730 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_730 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_730)(local_730);
      LOCK();
      piVar1 = (int *)((longlong)local_730 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_730 + 8))();
      }
    }
  }
  plVar9 = DAT_1416e2360;
  if (param_2[0x2e] == 0) {
    uVar18 = *(uint *)(param_2 + 0x2d);
    lVar7 = DAT_1417e3b58;
    if (0x1268 < uVar18) {
      lVar7 = DAT_1417e3b50;
    }
    plVar19 = plVar11;
    if (lVar7 != 0) {
      iVar6 = *(int *)((longlong)param_2 + 0x16c);
      for (puVar12 = *(undefined8 **)
                      (*(longlong *)(lVar7 + 8) +
                      ((ulonglong)(uVar18 * 0x10000 + iVar6) % (ulonglong)*(uint *)(lVar7 + 4)) * 8)
          ; (plVar19 = plVar11, puVar12 != (undefined8 *)0x0 &&
            ((plVar19 = (longlong *)*puVar12, local_608 = uVar18, local_604 = iVar6,
             *(int *)((longlong)plVar19 + 0x14) != iVar6 || (*(uint *)(plVar19 + 2) != uVar18))));
          puVar12 = (undefined8 *)puVar12[1]) {
      }
    }
    param_2[0x2c] = (longlong)plVar19;
    if (plVar19 == (longlong *)0x0) {
      plVar19 = plVar9;
    }
    param_2[0x2e] = (longlong)plVar19;
  }
  local_760 = (longlong *)param_2[0x2e];
  if ((longlong *)param_2[0x2e] == (longlong *)0x0) {
    local_760 = plVar9;
  }
  local_res18 = param_3;
  if (((param_3 == (longlong *)0x0) &&
      (lVar7 = local_760[5], local_res18 = DAT_1416e3148, lVar7 != 0)) &&
     (*(longlong *)(lVar7 + 0xb0) != 0)) {
    if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0xb0) == 0)) {
      FUN_1401b3840(local_760 + 4);
    }
    local_res18 = *(longlong **)(*(longlong *)(local_760[5] + 0xb0) + 8);
  }
  cVar4 = (**(code **)(*param_2 + 0x68))(param_2);
  if ((cVar4 == '\0') ||
     (lVar7 = (**(code **)(*param_2 + 0x50))(param_2), puVar12 = local_5f0,
     *(longlong *)(lVar7 + 0x230) == 0)) {
    for (local_660 = (undefined8 *)local_res18[4]; local_660 != (undefined8 *)0x0;
        local_660 = (undefined8 *)local_660[2]) {
      if ((longlong *)*local_660 == param_2) {
        puVar12 = local_5f0;
        if (local_660 != (undefined8 *)0x0) goto LAB_140787bfd;
        break;
      }
    }
    plVar11 = (longlong *)
              FUN_1400ae570(local_530,
                            "D:\\jenkins\\workspace\\ck2-steam\\ck2\\source\\gamestate.cpp",0x1004);
    FUN_140d652c0(plVar11,"pUnit->GetOwner()->GetDemesne().GetUnits().Contains(pUnit) != true",0x42)
    ;
    uVar5 = FUN_1400b14a0((longlong)*(int *)(*plVar11 + 4) + (longlong)plVar11,10);
    FUN_1400b1350(plVar11,uVar5);
    FUN_1400b0b20(plVar11);
    FUN_140d64ca0(local_490);
    local_490[0] = std::ios_base::vftable;
    std::ios_base::_Ios_base_dtor((ios_base *)local_490);
    puVar12 = (undefined8 *)FUN_1401e2a30(local_760,local_550,0,0);
    uVar13 = FUN_1400ae570(local_430,"D:\\jenkins\\workspace\\ck2-steam\\ck2\\source\\gamestate.cpp"
                           ,0x1005);
    uVar3 = *(undefined4 *)((longlong)local_760 + 0x14);
    FUN_140d652c0(uVar13,"pUnit->GetOwner(): ",0x13);
    if (0xf < (ulonglong)puVar12[3]) {
      puVar12 = (undefined8 *)*puVar12;
    }
    uVar13 = FUN_1400cdc40(uVar13,puVar12);
    uVar13 = FUN_1400cdc40(uVar13,&DAT_141071800);
    uVar13 = FUN_140268040(uVar13,uVar3);
    plVar11 = (longlong *)FUN_1400cdc40(uVar13,&DAT_1410bdc5c);
    uVar5 = FUN_1400b14a0((longlong)*(int *)(*plVar11 + 4) + (longlong)plVar11,10);
    FUN_1400b1350(plVar11,uVar5);
    FUN_1400b0b20(plVar11);
    FUN_140d64ca0(local_390);
    local_390[0] = std::ios_base::vftable;
    std::ios_base::_Ios_base_dtor((ios_base *)local_390);
    FUN_1400ae4f0(local_550);
    uVar13 = FUN_1400ae570(local_330,"D:\\jenkins\\workspace\\ck2-steam\\ck2\\source\\gamestate.cpp"
                           ,0x1006);
    lVar7 = *(longlong *)(param_2[0x10] + 0xf0);
    FUN_140d652c0(uVar13,"pUnit->IsArmy(): ",0x11);
    uVar5 = (**(code **)(*param_2 + 0x68))(param_2);
    uVar13 = FUN_1407901c0(uVar13,uVar5);
    uVar13 = FUN_1400cdc40(uVar13,"   pUnit->GetLocation(): ");
    plVar11 = (longlong *)(lVar7 + 0x10);
    if (0xf < *(ulonglong *)(lVar7 + 0x28)) {
      plVar11 = (longlong *)*plVar11;
    }
    plVar11 = (longlong *)FUN_1400cdc40(uVar13,plVar11);
    uVar5 = FUN_1400b14a0((longlong)*(int *)(*plVar11 + 4) + (longlong)plVar11,10);
    FUN_1400b1350(plVar11,uVar5);
    FUN_1400b0b20(plVar11);
    FUN_140d64ca0(local_290);
    local_290[0] = std::ios_base::vftable;
    std::ios_base::_Ios_base_dtor((ios_base *)local_290);
    uVar13 = FUN_1400ae570(local_230,"D:\\jenkins\\workspace\\ck2-steam\\ck2\\source\\gamestate.cpp"
                           ,0x1007);
    lVar7 = param_2[9];
    FUN_140d652c0(uVar13,"pUnit->GetNumSubUnits(): ",0x19);
    plVar11 = (longlong *)FUN_1401637b0(uVar13,(int)lVar7);
    uVar5 = FUN_1400b14a0((longlong)*(int *)(*plVar11 + 4) + (longlong)plVar11,10);
    FUN_1400b1350(plVar11,uVar5);
    FUN_1400b0b20(plVar11);
    uVar5 = FUN_1400b14a0((longlong)*(int *)(*plVar11 + 4) + (longlong)plVar11,10);
    FUN_1400b1350(plVar11,uVar5);
    FUN_1400b0b20(plVar11);
    FUN_140d64ca0(local_190);
    local_190[0] = std::ios_base::vftable;
    std::ios_base::_Ios_base_dtor((ios_base *)local_190);
    local_5f0 = *(undefined8 **)(param_1 + 0x100);
    puVar17 = local_5f0;
    while ((puVar12 = puVar17, local_5f8 = *(undefined8 **)(param_1 + 0x100), local_5f8 <= puVar12
           && (local_568 = *(undefined8 **)(param_1 + 0x108), puVar12 < local_568))) {
      puVar17 = puVar12 + 1;
      plVar11 = (longlong *)*puVar12;
      lVar7 = plVar11[5];
      plVar9 = DAT_1416e3148;
      if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0xb0) != 0)) {
        plVar9 = *(longlong **)(*(longlong *)(lVar7 + 0xb0) + 8);
      }
      local_658 = (undefined8 *)plVar9[4];
      local_560 = puVar12;
      if (local_658 != (undefined8 *)0x0) {
        do {
          if ((longlong *)*local_658 == param_2) break;
          local_658 = (undefined8 *)local_658[2];
        } while (local_658 != (undefined8 *)0x0);
        if (local_658 != (undefined8 *)0x0) {
          puVar14 = (undefined8 *)FUN_1401e2a30(local_760,local_588,0,0);
          puVar12 = (undefined8 *)FUN_1401e2a30(plVar11,&local_628,0,0);
          uVar13 = FUN_1400ae570(local_130,
                                 "D:\\jenkins\\workspace\\ck2-steam\\ck2\\source\\gamestate.cpp",
                                 0x1010);
          FUN_140d652c0(uVar13,"Unit is actually in ",0x14);
          if (0xf < (ulonglong)puVar12[3]) {
            puVar12 = (undefined8 *)*puVar12;
          }
          uVar13 = FUN_1400cdc40(uVar13,puVar12);
          uVar13 = FUN_1400cdc40(uVar13," instead of ");
          if (0xf < (ulonglong)puVar14[3]) {
            puVar14 = (undefined8 *)*puVar14;
          }
          plVar9 = (longlong *)FUN_1400cdc40(uVar13,puVar14);
          uVar5 = FUN_1400b14a0((longlong)*(int *)(*plVar9 + 4) + (longlong)plVar9,10);
          FUN_1400b1350(plVar9,uVar5);
          FUN_1400b0b20(plVar9);
          FUN_140d64ca0(local_90);
          local_90[0] = std::ios_base::vftable;
          std::ios_base::_Ios_base_dtor((ios_base *)local_90);
          if (0xf < local_610) {
            FUN_1400b08c0(&local_628,CONCAT71(uStack_627,local_628),local_610 + 1);
          }
          local_610 = 0xf;
          local_618 = 0;
          local_628 = 0;
          if (0xf < local_570) {
            FUN_1400b08c0(local_588,local_588[0]);
          }
          local_res18 = (longlong *)FUN_1400b1d10();
          local_760 = plVar11;
        }
      }
    }
  }
LAB_140787bfd:
  local_5f0 = puVar12;
  cVar4 = (**(code **)(*local_res18 + 0x30))(local_res18);
  if (cVar4 != '\0') {
    for (local_650 = (undefined8 *)local_res18[4];
        (local_650 != (undefined8 *)0x0 && ((longlong *)*local_650 != param_2));
        local_650 = (undefined8 *)local_650[2]) {
    }
    local_648 = local_650;
    FUN_1400d4c30(local_res18 + 4,&local_648);
  }
  cVar4 = (**(code **)(*param_2 + 0x68))(param_2);
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(*param_2 + 0x70))(param_2);
    if ((cVar4 != '\0') &&
       (lVar7 = (**(code **)(*param_2 + 0x60))(param_2), *(int *)(lVar7 + 0x240) != 0)) {
      lVar7 = (**(code **)(*param_2 + 0x60))(param_2);
      puVar12 = *(undefined8 **)(lVar7 + 0x230);
      while (puVar12 != (undefined8 *)0x0) {
        uVar13 = *puVar12;
        puVar12 = (undefined8 *)puVar12[2];
        FUN_140786dc0(param_1,uVar13,local_res18);
      }
    }
  }
  else {
    lVar7 = (**(code **)(*param_2 + 0x50))();
    if (*(longlong *)(lVar7 + 0x230) != 0) {
      lVar7 = (**(code **)(*param_2 + 0x50))(param_2);
      puVar12 = (undefined8 *)(*(longlong *)(lVar7 + 0x230) + 0x230);
      for (local_640 = (undefined8 *)*puVar12;
          (local_640 != (undefined8 *)0x0 && ((longlong *)*local_640 != param_2));
          local_640 = (undefined8 *)local_640[2]) {
      }
      local_638 = local_640;
      FUN_1400d4c30(puVar12,&local_638);
    }
  }
  plVar11 = *(longlong **)(param_1 + 0x248);
  do {
    plVar9 = plVar11;
    if (plVar9 == (longlong *)0x0) {
      iVar6 = (int)(*(longlong *)(DAT_1416e3260 + 0x280) - *(longlong *)(DAT_1416e3260 + 0x278) >> 3
                   );
      if (0 < iVar6) {
        uVar10 = 0;
        do {
          lVar7 = *(longlong *)(*(longlong *)(DAT_1416e3260 + 0x278) + (uVar10 & 0xffff) * 8);
          for (puVar12 = *(undefined8 **)(lVar7 + 0xcc0); puVar12 != (undefined8 *)0x0;
              puVar12 = (undefined8 *)puVar12[2]) {
            if ((longlong *)*puVar12 == param_2) {
              FUN_1409382e0(lVar7,param_2);
              break;
            }
          }
          plVar9 = (longlong *)FUN_140938780(lVar7,local_5e0);
          plVar11 = local_5d8;
          lVar20 = *plVar9;
          if (local_5d8 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_5d8 + 1;
            lVar8 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_5d8)(local_5d8);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11);
              }
            }
          }
          if (lVar20 != 0) {
            plVar9 = (longlong *)FUN_140938780(lVar7,local_5d0);
            plVar11 = local_5c8;
            for (puVar12 = *(undefined8 **)(*(longlong *)(*plVar9 + 0x10) + 0x30);
                (puVar12 != (undefined8 *)0x0 && ((longlong *)*puVar12 != param_2));
                puVar12 = (undefined8 *)puVar12[2]) {
            }
            if (local_5c8 != (longlong *)0x0) {
              LOCK();
              plVar9 = local_5c8 + 1;
              lVar20 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar20 == 1) {
                (**(code **)*local_5c8)(local_5c8);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11);
                }
              }
            }
            if (puVar12 != (undefined8 *)0x0) {
              plVar11 = (longlong *)FUN_140938780(lVar7,local_5c0);
              (**(code **)(**(longlong **)(*plVar11 + 0x10) + 0x38))
                        (*(longlong **)(*plVar11 + 0x10),param_2);
              if (local_5b8 != 0) {
                FUN_1400b1860();
              }
            }
            plVar9 = (longlong *)FUN_140938780(lVar7,local_5b0);
            plVar11 = local_5a8;
            for (puVar12 = *(undefined8 **)(*(longlong *)(*plVar9 + 0x18) + 0x30);
                (puVar12 != (undefined8 *)0x0 && ((longlong *)*puVar12 != param_2));
                puVar12 = (undefined8 *)puVar12[2]) {
            }
            if (local_5a8 != (longlong *)0x0) {
              LOCK();
              plVar9 = local_5a8 + 1;
              lVar20 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar20 == 1) {
                (**(code **)*local_5a8)(local_5a8);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11);
                }
              }
            }
            if (puVar12 != (undefined8 *)0x0) {
              plVar11 = (longlong *)FUN_140938780(lVar7,local_5a0);
              (**(code **)(**(longlong **)(*plVar11 + 0x18) + 0x38))
                        (*(longlong **)(*plVar11 + 0x18),param_2);
              if (local_598 != 0) {
                FUN_1400b1860();
              }
            }
          }
          uVar18 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar18;
        } while ((int)uVar18 < iVar6);
      }
      cVar4 = (**(code **)(*param_2 + 0x68))(param_2);
      if (cVar4 == '\0') {
        lVar7 = (**(code **)(*param_2 + 0x60))(param_2);
        if (lVar7 != 0) {
          uVar13 = (**(code **)(*param_2 + 0x60))(param_2);
          FUN_140132d60(uVar13);
        }
      }
      else {
        lVar7 = (**(code **)(*param_2 + 0x50))();
        if (lVar7 != 0) {
          uVar13 = (**(code **)(*param_2 + 0x50))(param_2);
          FUN_140132d10(uVar13);
        }
      }
      if ((char)param_2[1] != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x370) + 0x1b8))
                  (*(longlong **)(param_1 + 0x370),param_2);
        (**(code **)(**(longlong **)(param_1 + 0x370) + 0x178))();
      }
      *(undefined1 *)(param_1 + 0x400) = 1;
      (**(code **)param_2[2])(param_2 + 2,1);
      *(undefined1 *)(param_1 + 0x400) = 0;
      return;
    }
    plVar11 = (longlong *)plVar9[3];
    lVar7 = *plVar9;
    if (lVar7 != 0) {
      if (*(longlong *)(lVar7 + 0x10) != 0) {
        for (local_630 = *(undefined8 **)(*(longlong *)(lVar7 + 0x10) + 0x30);
            local_630 != (undefined8 *)0x0; local_630 = (undefined8 *)local_630[2]) {
          if ((longlong *)*local_630 == param_2) {
            (**(code **)(**(longlong **)(lVar7 + 0x10) + 0x38))
                      (*(longlong **)(lVar7 + 0x10),param_2);
            break;
          }
        }
      }
      lVar7 = *plVar9;
      if (*(longlong *)(lVar7 + 0x18) != 0) {
        for (puVar12 = *(undefined8 **)(*(longlong *)(lVar7 + 0x18) + 0x30);
            puVar12 != (undefined8 *)0x0; puVar12 = (undefined8 *)puVar12[2]) {
          if ((longlong *)*puVar12 == param_2) {
            (**(code **)(**(longlong **)(lVar7 + 0x18) + 0x38))
                      (*(longlong **)(lVar7 + 0x18),param_2);
            break;
          }
        }
      }
    }
  } while( true );
}

