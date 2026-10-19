
undefined8 FUN_140c3d9e0(longlong param_1)

{
  ulonglong *puVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined8 **ppuVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined1 uVar9;
  char cVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  char *pcVar21;
  undefined8 *local_res8;
  longlong *local_res10;
  longlong *local_res18;
  ulonglong local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined1 local_488;
  undefined7 uStack_487;
  undefined8 local_478;
  ulonglong local_470;
  undefined **local_468;
  longlong local_460;
  ulonglong local_458;
  undefined **local_448;
  longlong local_440;
  ulonglong local_438;
  undefined **local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_408 [4];
  undefined1 local_3e8 [160];
  undefined **local_348 [12];
  undefined1 local_2e8 [16];
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8 [16];
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8 [32];
  undefined8 local_288;
  longlong local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined1 local_268 [32];
  undefined1 local_248 [96];
  undefined1 local_1e8 [160];
  undefined **local_148 [14];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  local_288 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x3b8) != '\0') {
    *(undefined1 *)(param_1 + 0x3b8) = 0;
    for (puVar16 = *(undefined8 **)(param_1 + 8); puVar16 != (undefined8 *)0x0;
        puVar16 = (undefined8 *)puVar16[2]) {
      (**(code **)(*(longlong *)*puVar16 + 8))((longlong *)*puVar16,3);
    }
    FUN_140c404d0(param_1);
  }
  iVar13 = *(int *)(param_1 + 0x58);
  if (iVar13 == 7) {
    for (puVar16 = *(undefined8 **)(param_1 + 8); puVar16 != (undefined8 *)0x0;
        puVar16 = (undefined8 *)puVar16[2]) {
      (**(code **)(*(longlong *)*puVar16 + 8))((longlong *)*puVar16,2);
    }
  }
  else {
    if (iVar13 != 3) {
      lVar20 = **(longlong **)(param_1 + 0x60);
      if ((iVar13 - 2U & 0xfffffffd) == 0) {
        (**(code **)(lVar20 + 0x30))(*(longlong **)(param_1 + 0x60),0);
        if ((*(char *)(param_1 + 0x390) == '\0') && (*(char *)(param_1 + 0x3b9) == '\0')) {
          puVar1 = (ulonglong *)(param_1 + 0x70);
          *(ulonglong *)(param_1 + 0x78) = *puVar1;
          plVar15 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x60) + 0x40))();
          if ((int)plVar15[2] != 0) {
            do {
              puVar16 = *(undefined8 **)*plVar15;
              local_res8 = puVar16;
              if ((&local_res8 < *(undefined8 ***)(param_1 + 0x78)) &&
                 (ppuVar4 = (undefined8 **)*puVar1, ppuVar4 <= &local_res8)) {
                if (*(longlong *)(param_1 + 0x78) == *(longlong *)(param_1 + 0x80)) {
                  FUN_1400b15a0(puVar1);
                }
                if (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0) {
                  **(undefined8 **)(param_1 + 0x78) =
                       *(undefined8 *)
                        (*puVar1 + ((longlong)&local_res8 - (longlong)ppuVar4 >> 3) * 8);
                }
              }
              else {
                if (*(longlong *)(param_1 + 0x78) == *(longlong *)(param_1 + 0x80)) {
                  FUN_1400b15a0(puVar1);
                }
                if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
                  **(longlong **)(param_1 + 0x78) = (longlong)puVar16;
                }
              }
              *(longlong *)(param_1 + 0x78) = *(longlong *)(param_1 + 0x78) + 8;
              lVar20 = *plVar15;
              if (lVar20 != 0) {
                if (*(char *)((longlong)plVar15 + 0x14) == '\0') {
                  lVar18 = *(longlong *)(lVar20 + 8);
                  lVar5 = *(longlong *)(lVar20 + 0x10);
                  if (lVar18 != 0) {
                    *(longlong *)(lVar18 + 0x10) = lVar5;
                  }
                  if (lVar5 != 0) {
                    *(longlong *)(lVar5 + 8) = lVar18;
                  }
                  if (lVar20 == *plVar15) {
                    *plVar15 = lVar5;
                  }
                  if (lVar20 == plVar15[1]) {
                    plVar15[1] = lVar18;
                  }
                  thunk_FUN_140e1c5e4(lVar20,0x20);
                  *(int *)(plVar15 + 2) = (int)plVar15[2] + -1;
                }
                else {
                  *(undefined1 *)(lVar20 + 0x18) = 1;
                }
              }
            } while ((int)plVar15[2] != 0);
            FUN_140c40d30(puVar1,&local_res8);
            if (1 < DAT_1417e3b70) {
              uVar14 = FUN_1400ae570(local_3e8,
                                     "D:\\jenkins\\workspace\\ck2-steam\\clausewitz\\clausewitzlib\\session.cpp"
                                     ,0x1b9,0x301);
              lVar20 = *(longlong *)(param_1 + 0x78);
              uVar6 = *puVar1;
              FUN_140d652c0(uVar14,"PROCESSING COMMANDS: ",0x15);
              plVar15 = (longlong *)
                        FUN_1401637b0(uVar14,(longlong)(lVar20 - uVar6) >> 3 & 0xffffffff);
              uVar9 = FUN_1400b14a0((longlong)*(int *)(*plVar15 + 4) + (longlong)plVar15,10);
              FUN_1400b1350(plVar15,uVar9);
              FUN_1400b0b20(plVar15);
              FUN_140d64ca0(local_348);
              local_348[0] = std::ios_base::vftable;
              std::ios_base::_Ios_base_dtor((ios_base *)local_348);
              uVar14 = FUN_1400ae570(local_3e8,
                                     "D:\\jenkins\\workspace\\ck2-steam\\clausewitz\\clausewitzlib\\session.cpp"
                                     ,0x1ba,0x302);
              lVar20 = *(longlong *)(param_1 + 0x78);
              uVar6 = *puVar1;
              FUN_140d652c0(uVar14,"PROCESSING COMMANDS: ",0x15);
              plVar15 = (longlong *)
                        FUN_1401637b0(uVar14,(longlong)(lVar20 - uVar6) >> 3 & 0xffffffff);
              uVar9 = FUN_1400b14a0((longlong)*(int *)(*plVar15 + 4) + (longlong)plVar15,10);
              FUN_1400b1350(plVar15,uVar9);
              FUN_1400b0b20(plVar15);
              FUN_140d64ca0(local_348);
              local_348[0] = std::ios_base::vftable;
              std::ios_base::_Ios_base_dtor((ios_base *)local_348);
            }
            local_280 = 0;
            uStack_278 = 0;
            local_270 = 0;
            plVar15 = (longlong *)*puVar1;
            local_res18 = plVar15 + (int)(*(longlong *)(param_1 + 0x78) - (longlong)plVar15 >> 3);
            for (; local_res10 = plVar15, plVar15 != local_res18; plVar15 = plVar15 + 1) {
              plVar7 = (longlong *)*plVar15;
              cVar10 = (**(code **)(*plVar7 + 0x70))(plVar7);
              local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,cVar10);
              if (cVar10 == '\0') {
                cVar10 = '\0';
                if (*(char *)(param_1 + 0x3ba) != '\0') {
                  lVar20 = *(longlong *)(param_1 + 0x3e0);
                  lVar18 = *(longlong *)(param_1 + 0x3d8);
                  uVar12 = (**(code **)(*(longlong *)*plVar15 + 0x38))();
                  if ((uint)(lVar20 - lVar18 >> 2) <= uVar12) {
                    local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffff00000000);
                    iVar13 = (**(code **)(*(longlong *)*plVar15 + 0x38))();
                    FUN_140430d60(param_1 + 0x3d8,iVar13 + 1,&local_res8);
                  }
                  iVar13 = (**(code **)(*(longlong *)*plVar15 + 0x38))();
                  piVar2 = (int *)(*(longlong *)(param_1 + 0x3d8) + (longlong)iVar13 * 4);
                  *piVar2 = *piVar2 + 1;
                }
              }
              else {
                cVar10 = (**(code **)(*plVar7 + 0x60))(plVar7);
                if ((cVar10 == '\0') &&
                   (cVar10 = (**(code **)(*plVar7 + 0x80))(plVar7), cVar10 == '\0')) {
                  local_4a8 = 0;
                  uStack_4a0 = 0;
                  local_498 = 0;
                  if (((byte)(*(char *)(param_1 + 0x5c) - 6U) < 3) &&
                     (*(longlong *)(param_1 + 0x3a8) != 0)) {
                    uVar11 = (**(code **)(*plVar7 + 0x38))(plVar7);
                    (**(code **)(param_1 + 0x3a8))(&local_4a8,uVar11,0);
                  }
                  if (*(char *)(param_1 + 0x5c) == '\a') {
                    if ((ulonglong)(plVar7[0xb] - plVar7[10]) < 4) {
                      uVar14 = FUN_1400ae570(local_3e8,
                                             "D:\\jenkins\\workspace\\ck2-steam\\clausewitz\\clausewitzlib\\session.cpp"
                                             ,0x1d6,0x301);
                      FUN_140d652c0(uVar14,"NO PRE EXECUTION CHECKSUMS WITH COMMAND!\n");
                      FUN_140d64ca0(local_348);
                      local_348[0] = std::ios_base::vftable;
                      std::ios_base::_Ios_base_dtor((ios_base *)local_348);
                    }
                    if ((ulonglong)(plVar7[0xe] - plVar7[0xd]) < 4) {
                      uVar14 = FUN_1400ae570(local_3e8,
                                             "D:\\jenkins\\workspace\\ck2-steam\\clausewitz\\clausewitzlib\\session.cpp"
                                             ,0x1db,0x301);
                      FUN_140d652c0(uVar14,"NO POST EXECUTION CHECKSUMS WITH COMMAND!\n");
                      FUN_140d64ca0(local_348);
                      local_348[0] = std::ios_base::vftable;
                      std::ios_base::_Ios_base_dtor((ios_base *)local_348);
                    }
                    if ((*(code **)(param_1 + 0x3b0) != (code *)0x0) &&
                       (cVar10 = (**(code **)(param_1 + 0x3b0))(plVar7 + 10,&local_4a8),
                       cVar10 != '\0')) {
                      local_468 = &PTR_FUN_1410d3b90;
                      local_460 = 0;
                      local_458 = 0;
                      FUN_140c59e40(local_248,&local_468,1,1,0);
                      FUN_140c331c0(local_1e8,local_248,0);
                      uVar11 = (**(code **)(*plVar7 + 0x38))(plVar7);
                      FUN_140c34e50(local_1e8,uVar11);
                      (**(code **)(*plVar7 + 8))(plVar7,local_1e8);
                      puVar16 = (undefined8 *)FUN_140d69220(&local_468,&local_488);
                      uVar14 = FUN_1400ae570(local_3e8,
                                             "D:\\jenkins\\workspace\\ck2-steam\\clausewitz\\clausewitzlib\\session.cpp"
                                             ,0x1e7,0x301);
                      FUN_140d652c0(uVar14,"OOS detected before command execution of: ",0x2a);
                      if (0xf < (ulonglong)puVar16[3]) {
                        puVar16 = (undefined8 *)*puVar16;
                      }
                      plVar17 = (longlong *)FUN_1400cdc40(uVar14,puVar16);
                      uVar9 = FUN_1400b14a0((longlong)*(int *)(*plVar17 + 4) + (longlong)plVar17,10)
                      ;
                      FUN_1400b1350(plVar17,uVar9);
                      FUN_1400b0b20(plVar17);
                      FUN_140d64ca0(local_348);
                      local_348[0] = std::ios_base::vftable;
                      std::ios_base::_Ios_base_dtor((ios_base *)local_348);
                      if (0xf < local_470) {
                        FUN_1400b08c0(&local_488,CONCAT71(uStack_487,local_488));
                      }
                      FUN_140c33530(local_1e8);
                      FUN_140c5a240(local_248);
                      local_468 = &PTR_FUN_1410d3b90;
                      local_458 = local_458 & 0xffffffff;
                      if (local_460 != 0) {
                        thunk_FUN_140e1c5e4();
                        local_460 = 0;
                      }
                    }
                  }
                  else if (((*(char *)(param_1 + 0x5c) - 6U & 0xfd) == 0) &&
                          ((ulonglong *)(plVar7 + 10) != &local_4a8)) {
                    FUN_140155f20(plVar7 + 10,&local_4a8);
                  }
                  if (local_4a8 != 0) {
                    FUN_1400b0c40();
                  }
                }
                *(undefined1 *)(param_1 + 0x390) = 1;
                plVar17 = (longlong *)*plVar15;
                if ((*(char *)(param_1 + 0x5c) - 6U & 0xfd) == 0) {
                  local_2d0 = 0xf;
                  local_2d8 = 0;
                  local_2e8[0] = 0;
                  FUN_1400b0300(local_2e8,&DAT_14106162d);
                  plVar17 = (longlong *)(**(code **)(*plVar17 + 0x68))(plVar17,local_2e8);
                }
                (**(code **)(*plVar17 + 0x30))(plVar17);
                if (plVar17 != (longlong *)*plVar15) {
                  (**(code **)*plVar17)(plVar17,1);
                }
                *(undefined1 *)(param_1 + 0x390) = 0;
                cVar10 = (**(code **)(*plVar7 + 0x60))(plVar7);
                if ((cVar10 == '\0') &&
                   (cVar10 = (**(code **)(*plVar7 + 0x80))(plVar7), cVar10 == '\0')) {
                  local_4a8 = 0;
                  uStack_4a0 = 0;
                  local_498 = 0;
                  if (((byte)(*(char *)(param_1 + 0x5c) - 6U) < 3) &&
                     (*(longlong *)(param_1 + 0x3a8) != 0)) {
                    uVar11 = (**(code **)(*plVar7 + 0x38))(plVar7);
                    (**(code **)(param_1 + 0x3a8))(&local_4a8,uVar11);
                  }
                  if (*(char *)(param_1 + 0x5c) == '\a') {
                    if ((*(code **)(param_1 + 0x3b0) != (code *)0x0) &&
                       (cVar10 = (**(code **)(param_1 + 0x3b0))(plVar7 + 0xd,&local_4a8),
                       cVar10 != '\0')) {
                      local_448 = &PTR_FUN_1410d3b90;
                      local_440 = 0;
                      local_438 = 0;
                      FUN_140c59e40(local_248,&local_448,1,1,0);
                      FUN_140c331c0(local_1e8,local_248,0);
                      uVar11 = (**(code **)(*plVar7 + 0x38))(plVar7);
                      FUN_140c34e50(local_1e8,uVar11);
                      (**(code **)(*plVar7 + 8))(plVar7,local_1e8);
                      puVar16 = (undefined8 *)FUN_140d69220(&local_448,&local_488);
                      uVar14 = FUN_1400ae570(local_3e8,
                                             "D:\\jenkins\\workspace\\ck2-steam\\clausewitz\\clausewitzlib\\session.cpp"
                                             ,0x225,0x301);
                      FUN_140d652c0(uVar14,"OOS detected after command execution of: ",0x29);
                      if (0xf < (ulonglong)puVar16[3]) {
                        puVar16 = (undefined8 *)*puVar16;
                      }
                      plVar17 = (longlong *)FUN_1400cdc40(uVar14,puVar16);
                      uVar9 = FUN_1400b14a0((longlong)*(int *)(*plVar17 + 4) + (longlong)plVar17,10)
                      ;
                      FUN_1400b1350(plVar17,uVar9);
                      FUN_1400b0b20(plVar17);
                      FUN_140d64ca0(local_348);
                      local_348[0] = std::ios_base::vftable;
                      std::ios_base::_Ios_base_dtor((ios_base *)local_348);
                      if (0xf < local_470) {
                        FUN_1400b08c0(&local_488,CONCAT71(uStack_487,local_488));
                      }
                      FUN_140c33530(local_1e8);
                      FUN_140c5a240(local_248);
                      local_448 = &PTR_FUN_1410d3b90;
                      local_438 = local_438 & 0xffffffff;
                      if (local_440 != 0) {
                        thunk_FUN_140e1c5e4();
                        local_440 = 0;
                      }
                    }
                  }
                  else if (((*(char *)(param_1 + 0x5c) - 6U & 0xfd) == 0) &&
                          ((ulonglong *)(plVar7 + 0xd) != &local_4a8)) {
                    FUN_140155f20(plVar7 + 0xd,&local_4a8);
                  }
                  if (local_4a8 != 0) {
                    FUN_1400b0c40();
                  }
                }
                if ((*(char *)(param_1 + 0x5c) - 6U & 0xfd) == 0) {
                  FUN_140d149b0(*(undefined8 *)(param_1 + 0x60),plVar7);
                }
                cVar10 = (**(code **)(*(longlong *)*plVar15 + 0x60))();
                if ((cVar10 == '\0') || (*(char *)(*plVar15 + 0x48) != '\0')) {
                  cVar10 = (char)local_res8;
                }
                else {
                  *(undefined1 *)(*plVar15 + 0x48) = 1;
                  uVar14 = FUN_1400ae4a0(local_2a8,param_1 + 0x110);
                  lVar18 = (**(code **)(*(longlong *)*plVar15 + 0x68))((longlong *)*plVar15,uVar14);
                  lVar20 = *(longlong *)(param_1 + 0x138);
                  local_res10 = operator_new(0x20);
                  *local_res10 = lVar18;
                  local_res10[1] = lVar20;
                  local_res10[2] = 0;
                  *(undefined1 *)(local_res10 + 3) = 0;
                  *(longlong **)(param_1 + 0x138) = local_res10;
                  iVar13 = *(int *)(param_1 + 0x140);
                  *(int *)(param_1 + 0x140) = iVar13 + 1;
                  cVar10 = (char)local_res8;
                  if (iVar13 == 0) {
                    *(longlong **)(param_1 + 0x130) = local_res10;
                  }
                  else {
                    *(longlong **)(lVar20 + 0x10) = local_res10;
                  }
                }
              }
              if ((1 < DAT_1417e3b70) && ((byte)(*(char *)(param_1 + 0x5c) - 6U) < 3)) {
                local_470 = 0xf;
                local_478 = 0;
                local_488 = 0;
                FUN_1400b0300(&local_488,", Type: ");
                pcVar21 = "N";
                if (cVar10 != '\0') {
                  pcVar21 = "Y";
                }
                local_2b0 = 0xf;
                local_2b8 = 0;
                local_2c8[0] = 0;
                lVar20 = 0;
                if (*pcVar21 != '\0') {
                  lVar20 = -1;
                  do {
                    lVar20 = lVar20 + 1;
                  } while (pcVar21[lVar20] != '\0');
                }
                FUN_1400b0300(local_2c8,pcVar21,lVar20);
                local_490 = 0xf;
                local_498 = 0;
                local_4a8 = local_4a8 & 0xffffffffffffff00;
                FUN_1400b0300(&local_4a8,", Valid: ",9);
                uVar14 = FUN_140d5ebc0(local_58,*(undefined4 *)(*plVar15 + 0x44));
                uVar14 = FUN_140d5f2e0(local_78,"HANDLED COMMAND! ID: ",uVar14);
                uVar14 = FUN_140d5f250(uVar14,local_98,&local_4a8);
                uVar14 = FUN_140d5f250(uVar14,local_b8,local_2c8);
                uVar14 = FUN_140d5f250(uVar14,local_d8,&local_488);
                uVar11 = (**(code **)(*(longlong *)*plVar15 + 0x38))();
                uVar19 = FUN_140c3acb0(uVar11);
                FUN_140d5f250(uVar14,local_2a8,uVar19);
                FUN_1400ae4f0(local_d8);
                FUN_1400ae4f0(local_b8);
                FUN_1400ae4f0(local_98);
                FUN_1400ae4f0(local_78);
                FUN_1400ae4f0(local_58);
                FUN_1400ae4f0(&local_4a8);
                FUN_1400ae4f0(local_2c8);
                FUN_1400ae4f0(&local_488);
                lVar20 = (**(code **)(*(longlong *)*plVar15 + 0x88))((longlong *)*plVar15,local_268)
                ;
                lVar20 = *(longlong *)(lVar20 + 0x10);
                FUN_1400ae4f0(local_268);
                if (lVar20 != 0) {
                  uVar14 = (**(code **)(*(longlong *)*plVar15 + 0x88))
                                     ((longlong *)*plVar15,local_408);
                  uVar14 = FUN_140d5f2e0(local_268,", Extra: ",uVar14);
                  FUN_1400b06b0(local_2a8,uVar14,0,0xffffffffffffffff);
                  FUN_1400ae4f0(local_268);
                  FUN_1400ae4f0(local_408);
                }
                local_res8 = local_408;
                uVar14 = FUN_1400ae4a0(local_408,local_2a8);
                uVar19 = FUN_1400ae570(local_3e8,
                                       "D:\\jenkins\\workspace\\ck2-steam\\clausewitz\\clausewitzlib\\session.cpp"
                                      );
                uVar14 = FUN_140d64fe0(uVar19,uVar14);
                FUN_1400b1140(uVar14);
                FUN_140d64ca0(local_348);
                local_348[0] = std::ios_base::vftable;
                std::ios_base::_Ios_base_dtor((ios_base *)local_348);
                FUN_1400ae4f0(local_2a8);
              }
              if (cVar10 == '\0') {
                local_428 = &PTR_FUN_1410d3b90;
                local_420 = 0;
                local_418 = 0;
                FUN_140c59e40(local_248,&local_428,1,1,0);
                FUN_140c331c0(local_1e8,local_248);
                plVar7 = (longlong *)*plVar15;
                uVar11 = (**(code **)(*plVar7 + 0x38))(plVar7);
                FUN_140c34e50(local_1e8,uVar11);
                (**(code **)(*plVar7 + 8))(plVar7,local_1e8);
                if (1 < DAT_1417e3b70) {
                  puVar16 = (undefined8 *)FUN_140d69220(&local_428,local_408);
                  uVar14 = FUN_1400ae570(local_3e8,
                                         "D:\\jenkins\\workspace\\ck2-steam\\clausewitz\\clausewitzlib\\session.cpp"
                                         ,0x25c);
                  FUN_140d652c0(uVar14,"Failed running command: ");
                  if (0xf < (ulonglong)puVar16[3]) {
                    puVar16 = (undefined8 *)*puVar16;
                  }
                  uVar14 = FUN_1400cdc40(uVar14,puVar16);
                  FUN_1400b1140(uVar14);
                  FUN_140d64ca0(local_348);
                  local_348[0] = std::ios_base::vftable;
                  std::ios_base::_Ios_base_dtor((ios_base *)local_348);
                  FUN_1400ae4f0(local_408);
                }
                FUN_140c33530(local_1e8);
                FUN_140c5a240(local_248);
                FUN_140714fa0(&local_428);
              }
              if (*(code **)(param_1 + 0x3a0) != (code *)0x0) {
                (**(code **)(param_1 + 0x3a0))(*(undefined8 *)(param_1 + 0x398));
              }
            }
            uVar11 = FUN_140c40140(param_1);
            if (local_280 != 0) {
              FUN_1400b0c40(uVar11,local_280,-local_280 >> 2);
            }
          }
          pcVar8 = *(code **)(**(longlong **)(param_1 + 0x60) + 0x98);
          if (pcVar8 == (code *)&LAB_140d104f0) {
            plVar15 = *(longlong **)(param_1 + 0x60) + 0xc;
          }
          else {
            plVar15 = (longlong *)(*pcVar8)();
          }
          for (plVar7 = (longlong *)*plVar15; plVar7 != (longlong *)0x0;
              plVar7 = (longlong *)plVar7[2]) {
            plVar17 = (longlong *)*plVar7;
            if (*(int *)((longlong)plVar17 + 0x44) != 0) {
              for (piVar2 = *(int **)(param_1 + 0x370); piVar2 != (int *)0x0;
                  piVar2 = *(int **)(piVar2 + 4)) {
                if (*piVar2 == *(int *)((longlong)plVar17 + 0x44)) {
                  plVar17 = (longlong *)
                            FUN_1400ae570(local_3e8,
                                          "D:\\jenkins\\workspace\\ck2-steam\\clausewitz\\clausewitzlib\\session.cpp"
                                          ,0x28d);
                  FUN_140d652c0(plVar17,"Command double! Skipping.",0x19);
                  uVar9 = FUN_1400b14a0((longlong)*(int *)(*plVar17 + 4) + (longlong)plVar17,10);
                  FUN_1400b1350(plVar17,uVar9);
                  FUN_1400b0b20(plVar17);
                  FUN_140d64ca0(local_348);
                  local_348[0] = std::ios_base::vftable;
                  std::ios_base::_Ios_base_dtor((ios_base *)local_348);
                  goto LAB_140c3ecf5;
                }
              }
            }
            cVar10 = (**(code **)(*plVar17 + 0x70))(plVar17);
            if (cVar10 == '\0') {
              uVar14 = FUN_1400ae570(local_3e8,
                                     "D:\\jenkins\\workspace\\ck2-steam\\clausewitz\\clausewitzlib\\session.cpp"
                                     ,0x285);
              uVar3 = *(undefined2 *)(*plVar7 + 0x40);
              FUN_140d652c0(uVar14,"Attempted to execute invalid order with stamp ",0x2e);
              uVar14 = FUN_1401637b0(uVar14,uVar3);
              FUN_1400b1140(uVar14);
              FUN_140d64ca0(local_348);
              local_348[0] = std::ios_base::vftable;
              std::ios_base::_Ios_base_dtor((ios_base *)local_348);
              uVar14 = FUN_1400ae570(local_3e8,
                                     "D:\\jenkins\\workspace\\ck2-steam\\clausewitz\\clausewitzlib\\session.cpp"
                                     ,0x286);
              uVar3 = *(undefined2 *)(*plVar7 + 0x40);
              FUN_140d652c0(uVar14,"Attempted to execute invalid order with stamp ",0x2e);
              uVar14 = FUN_1401637b0(uVar14,uVar3);
              FUN_1400b1140(uVar14);
              FUN_140d64ca0(local_348);
              local_348[0] = std::ios_base::vftable;
              std::ios_base::_Ios_base_dtor((ios_base *)local_348);
            }
            else {
              *(undefined1 *)(param_1 + 0x390) = 1;
              (**(code **)(*(longlong *)*plVar7 + 0x30))();
              *(undefined1 *)(param_1 + 0x390) = 0;
              uVar11 = *(undefined4 *)(*plVar7 + 0x44);
              lVar20 = *(longlong *)(param_1 + 0x378);
              local_res8 = operator_new(0x20);
              *(undefined4 *)local_res8 = uVar11;
              local_res8[1] = lVar20;
              local_res8[2] = 0;
              *(undefined1 *)(local_res8 + 3) = 0;
              *(undefined8 **)(param_1 + 0x378) = local_res8;
              iVar13 = *(int *)(param_1 + 0x380);
              *(int *)(param_1 + 0x380) = iVar13 + 1;
              if (iVar13 == 0) {
                *(undefined8 **)(param_1 + 0x370) = local_res8;
              }
              else {
                *(undefined8 **)(lVar20 + 0x10) = local_res8;
              }
              if ((*(int *)(param_1 + 0x388) < *(int *)(param_1 + 0x380)) &&
                 (lVar20 = *(longlong *)(param_1 + 0x370), lVar20 != 0)) {
                if (*(char *)(param_1 + 900) == '\0') {
                  lVar18 = *(longlong *)(lVar20 + 0x10);
                  *(longlong *)(param_1 + 0x370) = lVar18;
                  if (lVar18 == 0) {
                    *(undefined8 *)(param_1 + 0x378) = 0;
                  }
                  else {
                    *(undefined8 *)(lVar18 + 8) = 0;
                  }
                  thunk_FUN_140e1c5e4(lVar20,0x20);
                  *(int *)(param_1 + 0x380) = *(int *)(param_1 + 0x380) + -1;
                }
                else {
                  *(undefined1 *)(lVar20 + 0x18) = 1;
                }
              }
            }
            if (*(code **)(param_1 + 0x3a0) != (code *)0x0) {
              (**(code **)(param_1 + 0x3a0))(*(undefined8 *)(param_1 + 0x398));
            }
LAB_140c3ecf5:
            puVar16 = (undefined8 *)*plVar7;
            if (puVar16 != (undefined8 *)0x0) {
              (**(code **)*puVar16)(puVar16,1);
            }
          }
          FUN_1400b1970(plVar15);
        }
        else {
          puVar16 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x60) + 0x40))();
          for (plVar15 = (longlong *)*puVar16; plVar15 != (longlong *)0x0;
              plVar15 = (longlong *)plVar15[2]) {
            cVar10 = (**(code **)(*(longlong *)*plVar15 + 0x60))();
            if ((cVar10 != '\0') && (*(char *)(*plVar15 + 0x48) == '\0')) {
              *(undefined1 *)(*plVar15 + 0x48) = 1;
              plVar7 = (longlong *)*plVar15;
              uVar14 = FUN_1400afe20(local_408,&DAT_14106162d);
              uVar14 = (**(code **)(*plVar7 + 0x68))(plVar7,uVar14);
              lVar20 = *(longlong *)(param_1 + 0x138);
              local_res8 = operator_new(0x20);
              *local_res8 = uVar14;
              local_res8[1] = lVar20;
              local_res8[2] = 0;
              *(undefined1 *)(local_res8 + 3) = 0;
              *(undefined8 **)(param_1 + 0x138) = local_res8;
              iVar13 = *(int *)(param_1 + 0x140);
              *(int *)(param_1 + 0x140) = iVar13 + 1;
              if (iVar13 == 0) {
                *(undefined8 **)(param_1 + 0x130) = local_res8;
              }
              else {
                *(undefined8 **)(lVar20 + 0x10) = local_res8;
              }
            }
          }
          uVar14 = FUN_1400ae570(local_3e8,
                                 "D:\\jenkins\\workspace\\ck2-steam\\clausewitz\\clausewitzlib\\session.cpp"
                                 ,0x2a1);
          FUN_140d652c0(uVar14,"Update within execution. Skipping.",0x22);
          FUN_1400b1140(uVar14);
          FUN_140d64ca0(local_348);
          local_348[0] = std::ios_base::vftable;
          std::ios_base::_Ios_base_dtor((ios_base *)local_348);
          uVar14 = FUN_1400ae570(local_1e8,
                                 "D:\\jenkins\\workspace\\ck2-steam\\clausewitz\\clausewitzlib\\session.cpp"
                                 ,0x2a2);
          FUN_140d652c0(uVar14,"Update within execution. Skipping.",0x22);
          FUN_1400b1140(uVar14);
          FUN_140d64ca0(local_148);
          local_148[0] = std::ios_base::vftable;
          std::ios_base::_Ios_base_dtor((ios_base *)local_148);
        }
      }
      else {
        (**(code **)(lVar20 + 0x30))();
        if ((*(char *)(param_1 + 0x390) == '\0') && (*(char *)(param_1 + 0x3b9) == '\0')) {
          if (*(int *)(param_1 + 0x58) == 6) {
            FUN_140c3eed0(param_1);
          }
        }
        else {
          uVar14 = FUN_1400ae570(local_3e8,
                                 "D:\\jenkins\\workspace\\ck2-steam\\clausewitz\\clausewitzlib\\session.cpp"
                                 ,0x2b4);
          FUN_140d652c0(uVar14,"Update within execution. Skipping.",0x22);
          FUN_1400b1140(uVar14);
          FUN_140d64ca0(local_348);
          local_348[0] = std::ios_base::vftable;
          std::ios_base::_Ios_base_dtor((ios_base *)local_348);
        }
      }
      return 1;
    }
    puVar16 = *(undefined8 **)(param_1 + 8);
    if (puVar16 != (undefined8 *)0x0) {
      do {
        (**(code **)(*(longlong *)*puVar16 + 8))((longlong *)*puVar16,7);
        puVar16 = (undefined8 *)puVar16[2];
      } while (puVar16 != (undefined8 *)0x0);
      return 0;
    }
  }
  return 0;
}

