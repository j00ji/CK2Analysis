
undefined8 FUN_1403a6300(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  char local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined1 *in_stack_fffffffffffffaf8;
  undefined4 local_4e0;
  int local_4dc;
  undefined4 local_4d8;
  int local_4d4;
  int local_4d0;
  int local_4c8;
  undefined8 local_4c4;
  int local_4b8;
  undefined8 local_4b4;
  int local_4a8;
  undefined8 local_4a4;
  int local_498;
  undefined8 local_494;
  int local_488;
  int local_484;
  int local_480;
  int local_47c;
  int local_478;
  int local_474;
  int local_470;
  int local_46c;
  int local_468;
  undefined1 local_464 [4];
  int local_460;
  undefined1 local_45c [4];
  longlong local_458;
  longlong local_450;
  undefined1 local_448 [4];
  int local_444;
  int local_440;
  int local_43c;
  undefined **local_438;
  undefined4 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined4 local_3f8;
  longlong local_3f0;
  longlong local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined4 local_390;
  undefined ***local_388;
  undefined ***local_380;
  undefined ***local_378;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined2 local_364;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined **local_328;
  undefined4 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined ***local_278;
  undefined ***local_270;
  undefined ***local_268;
  undefined4 local_260;
  undefined8 local_25c;
  undefined2 local_254;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  uint local_218;
  int local_214;
  uint local_208;
  int local_204;
  uint local_1f8;
  int local_1f4;
  uint local_1e8;
  int local_1e4;
  longlong local_1d8 [6];
  undefined **local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  longlong local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined ***local_f8;
  undefined ***local_f0;
  undefined ***local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined2 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_48;
  
  local_70 = 0xfffffffffffffffe;
  lVar8 = param_1[2];
  local_1d8[0] = *(longlong *)(lVar8 + 0x58);
  local_1d8[1] = *(undefined8 *)(lVar8 + 0x120);
  local_1d8[2] = *(undefined8 *)(lVar8 + 0x1e8);
  lVar8 = param_1[3];
  local_1d8[3] = *(undefined8 *)(lVar8 + 0x58);
  local_1d8[4] = *(undefined8 *)(lVar8 + 0x120);
  local_1d8[5] = *(undefined8 *)(lVar8 + 0x1e8);
  lVar17 = 0;
  lVar15 = 3;
  lVar8 = DAT_1416e2360;
  lVar10 = lVar17;
  do {
    lVar18 = *(longlong *)((longlong)local_1d8 + lVar10);
    if ((*(byte *)(lVar18 + 0x1e9) & 2) != 0) {
      if ((*(longlong *)(lVar18 + 0x28) == 0) ||
         ((*(byte *)(*(longlong *)(lVar18 + 0x28) + 0xd6c) & 2) == 0)) {
        if (DAT_1417e6c90 < *(int *)(lVar18 + 0xbc)) {
          piVar7 = (int *)FUN_14077c7b0(DAT_1416e3260);
          lVar8 = DAT_1416e2360;
          if ((*piVar7 < *(int *)(lVar18 + 0xb8)) || (*(int *)(lVar18 + 0xbc) <= *piVar7))
          goto LAB_1403a63ff;
        }
      }
      else {
LAB_1403a63ff:
        lVar12 = param_1[2];
        if (*(longlong *)(lVar12 + 0x58) == lVar18) {
          *(longlong *)(lVar12 + 0x58) = lVar8;
        }
        if (*(longlong *)(lVar12 + 0x120) == lVar18) {
          *(longlong *)(lVar12 + 0x120) = lVar8;
        }
        if (*(longlong *)(lVar12 + 0x1e8) == lVar18) {
          *(longlong *)(lVar12 + 0x1e8) = lVar8;
        }
      }
    }
    lVar18 = *(longlong *)((longlong)local_1d8 + lVar10 + 0x18);
    if ((*(byte *)(lVar18 + 0x1e9) & 2) != 0) {
      if ((*(longlong *)(lVar18 + 0x28) == 0) ||
         ((*(byte *)(*(longlong *)(lVar18 + 0x28) + 0xd6c) & 2) == 0)) {
        if (DAT_1417e6c90 < *(int *)(lVar18 + 0xbc)) {
          piVar7 = (int *)FUN_14077c7b0(DAT_1416e3260);
          lVar8 = DAT_1416e2360;
          if ((*piVar7 < *(int *)(lVar18 + 0xb8)) || (*(int *)(lVar18 + 0xbc) <= *piVar7))
          goto LAB_1403a648d;
        }
      }
      else {
LAB_1403a648d:
        lVar12 = param_1[3];
        if (*(longlong *)(lVar12 + 0x58) == lVar18) {
          *(longlong *)(lVar12 + 0x58) = lVar8;
        }
        if (*(longlong *)(lVar12 + 0x120) == lVar18) {
          *(longlong *)(lVar12 + 0x120) = lVar8;
        }
        if (*(longlong *)(lVar12 + 0x1e8) == lVar18) {
          *(longlong *)(lVar12 + 0x1e8) = lVar8;
        }
      }
    }
    lVar10 = lVar10 + 8;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  if ((int)param_1[7] == -1) {
    *(undefined4 *)(param_1 + 7) = 0;
  }
  iVar4 = (**(code **)(*param_1 + 0x60))(param_1);
  if ((iVar4 == 3) && (*(int *)(param_1[2] + 0x40) != 0)) {
    lVar8 = **(longlong **)(param_1[2] + 0x30);
    lVar10 = *(longlong *)(lVar8 + 0x1c0);
    if ((lVar10 == 0) || (*(longlong *)(lVar10 + 0x80) != *(longlong *)(lVar8 + 0x80))) {
      lVar10 = lVar8;
    }
    if (*(longlong *)(lVar10 + 0x170) == 0) {
      lVar8 = FUN_1400d3090(lVar10 + 0x168);
      *(longlong *)(lVar10 + 0x160) = lVar8;
      *(longlong *)(lVar10 + 0x170) = lVar8;
      if (lVar8 == 0) {
        *(longlong *)(lVar10 + 0x170) = DAT_1416e2360;
      }
    }
    lVar8 = *(longlong *)(lVar10 + 0x170);
    plVar11 = *(longlong **)(param_1[2] + 0x30);
    while (plVar11 != (longlong *)0x0) {
      lVar10 = *plVar11;
      plVar11 = (longlong *)plVar11[2];
      if (*(longlong *)(lVar10 + 0x170) == 0) {
        uVar1 = *(uint *)(lVar10 + 0x168);
        lVar15 = DAT_1417e3b58;
        if (0x1268 < uVar1) {
          lVar15 = DAT_1417e3b50;
        }
        lVar18 = lVar17;
        if (lVar15 != 0) {
          iVar4 = *(int *)(lVar10 + 0x16c);
          for (plVar14 = *(longlong **)
                          (*(longlong *)(lVar15 + 8) +
                          ((ulonglong)(uVar1 * 0x10000 + iVar4) % (ulonglong)*(uint *)(lVar15 + 4))
                          * 8);
              (lVar18 = lVar17, plVar14 != (longlong *)0x0 &&
              ((lVar18 = *plVar14, local_218 = uVar1, local_214 = iVar4,
               *(int *)(lVar18 + 0x14) != iVar4 || (*(uint *)(lVar18 + 0x10) != uVar1))));
              plVar14 = (longlong *)plVar14[1]) {
          }
        }
        *(longlong *)(lVar10 + 0x160) = lVar18;
        if (lVar18 == 0) {
          lVar18 = DAT_1416e2360;
        }
        *(longlong *)(lVar10 + 0x170) = lVar18;
      }
      local_res8[0] = '\0';
      in_stack_fffffffffffffaf8 = local_448;
      FUN_14025d050(*(undefined8 *)(lVar10 + 0x170),lVar8,local_res8,local_res18,
                    in_stack_fffffffffffffaf8);
      if (local_res8[0] != '\0') {
        FUN_1403b6c40(param_1,lVar10,0);
      }
      plVar9 = (longlong *)FUN_140b99ce0(lVar10);
      plVar14 = local_48;
      lVar15 = *plVar9;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_48 + 1;
        lVar18 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar7 = (int *)((longlong)plVar14 + 0xc);
          iVar4 = *piVar7;
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14);
          }
        }
      }
      if (lVar15 != 0) {
        lVar15 = *(longlong *)(lVar10 + 0x1c0);
        if ((lVar15 == 0) || (*(longlong *)(lVar15 + 0x80) != *(longlong *)(lVar10 + 0x80))) {
          lVar15 = lVar10;
        }
        if (*(longlong *)(lVar15 + 0x170) == 0) {
          uVar1 = *(uint *)(lVar15 + 0x168);
          lVar18 = DAT_1417e3b58;
          if (0x1268 < uVar1) {
            lVar18 = DAT_1417e3b50;
          }
          lVar12 = lVar17;
          if (lVar18 != 0) {
            iVar4 = *(int *)(lVar15 + 0x16c);
            for (plVar14 = *(longlong **)
                            (*(longlong *)(lVar18 + 8) +
                            ((ulonglong)(uVar1 * 0x10000 + iVar4) % (ulonglong)*(uint *)(lVar18 + 4)
                            ) * 8);
                (lVar12 = lVar17, plVar14 != (longlong *)0x0 &&
                ((lVar12 = *plVar14, local_208 = uVar1, local_204 = iVar4,
                 *(int *)(lVar12 + 0x14) != iVar4 || (*(uint *)(lVar12 + 0x10) != uVar1))));
                plVar14 = (longlong *)plVar14[1]) {
            }
          }
          *(longlong *)(lVar15 + 0x160) = lVar12;
          if (lVar12 == 0) {
            lVar12 = DAT_1416e2360;
          }
          *(longlong *)(lVar15 + 0x170) = lVar12;
        }
        if (*(longlong *)(lVar15 + 0x170) == lVar8) {
          return 0;
        }
        FUN_1403b6c40(param_1,lVar10,0);
      }
    }
  }
  lVar8 = 3;
  FUN_1403a8de0(param_1);
  if ((((*(int *)(param_1[2] + 0x40) != 0) || (*(int *)(param_1[3] + 0x40) != 0)) &&
      (FUN_1403a9a80(param_1), *(int *)(param_1[2] + 0x40) == 0)) &&
     (*(int *)(param_1[3] + 0x40) == 0)) {
    return 1;
  }
  FUN_1403a3ac0();
  FUN_1403a3ac0(param_1[3]);
  (**(code **)(*(longlong *)param_1[2] + 0x40))((longlong *)param_1[2],param_1[3],param_1);
  uVar19 = (**(code **)(*(longlong *)param_1[3] + 0x40))((longlong *)param_1[3],param_1[2],param_1);
  uVar19 = FUN_1403a5470(uVar19,param_1[2]);
  FUN_1403a5470(uVar19,param_1[3]);
  local_4c8 = 0;
  local_4c4 = 0;
  local_4b8 = 0;
  local_4b4 = 0;
  local_4a8 = 0;
  local_4a4 = 0;
  local_498 = 0;
  local_494 = 0;
  iVar4 = 1000;
  iVar5 = (**(code **)(*param_1 + 0x60))(param_1);
  if ((((iVar5 == 3) && (*(int *)(param_1[3] + 0x1c4) != 1)) &&
      (cVar3 = (**(code **)(*param_1 + 0x48))(param_1), uVar19 = extraout_XMM0_Da,
      iVar5 = DAT_1416e2640, iVar6 = DAT_1416e263c, cVar3 == '\0')) ||
     ((iVar5 = (**(code **)(*param_1 + 0x60))(param_1), uVar19 = extraout_XMM0_Da_00, iVar16 = 1000,
      iVar5 == 3 &&
      (cVar3 = (**(code **)(*param_1 + 0x48))(param_1), uVar19 = extraout_XMM0_Da_01, iVar16 = 1000,
      iVar5 = DAT_1416e2664, iVar6 = DAT_1416e2658, cVar3 != '\0')))) {
    iVar16 = iVar5;
    iVar4 = iVar6;
  }
  lVar10 = lVar17;
  do {
    lVar15 = param_1[3];
    local_444 = *(int *)(lVar10 + lVar15 + 0xe0);
    local_440 = (int)(((longlong)local_444 * (longlong)iVar4) / 1000);
    iVar5 = *(int *)(lVar10 + lVar15 + 0xc4);
    (&local_4c8)[iVar5] = (&local_4c8)[iVar5] + local_440;
    local_43c = *(int *)(lVar10 + lVar15 + 0xe4);
    local_488 = (int)(((longlong)local_43c * (longlong)iVar4) / 1000);
    (&local_4b8)[iVar5] = (&local_4b8)[iVar5] + local_488;
    lVar18 = param_1[2];
    local_484 = *(int *)(lVar18 + 0xe0 + lVar10);
    local_480 = (int)(((longlong)local_484 * (longlong)iVar16) / 1000);
    iVar5 = *(int *)(lVar18 + 0xc4 + lVar10);
    (&local_4a8)[iVar5] = (&local_4a8)[iVar5] + local_480;
    local_47c = *(int *)(lVar18 + 0xe4 + lVar10);
    local_478 = (int)(((longlong)local_47c * (longlong)iVar16) / 1000);
    (&local_498)[iVar5] = (&local_498)[iVar5] + local_478;
    *(undefined4 *)(lVar10 + lVar15 + 0x104) = 0;
    *(undefined4 *)(lVar10 + param_1[2] + 0x104) = 0;
    lVar10 = lVar10 + 200;
    lVar15 = lVar17;
    lVar18 = lVar17;
  } while (lVar10 < 600);
  do {
    if (0 < *(int *)((longlong)&local_4c8 + lVar15)) {
      local_4e0 = *(undefined4 *)((longlong)&local_4b8 + lVar15);
      local_4dc = *(int *)((longlong)&local_4c8 + lVar15);
      uVar19 = FUN_1403a05e0(param_1[2] + 0x48 + lVar18,&local_4dc,&local_4e0);
    }
    if (0 < *(int *)((longlong)&local_4a8 + lVar15)) {
      local_4d8 = *(undefined4 *)((longlong)&local_498 + lVar15);
      local_4d4 = *(int *)((longlong)&local_4a8 + lVar15);
      uVar19 = FUN_1403a05e0(param_1[3] + 0x48 + lVar18,&local_4d4,&local_4d8);
    }
    lVar13 = DAT_1417e3b58;
    lVar12 = DAT_1417e3b50;
    lVar10 = DAT_1416e2360;
    lVar8 = lVar8 + -1;
    lVar15 = lVar15 + 4;
    lVar18 = lVar18 + 200;
  } while (lVar8 != 0);
  if ((*(int *)(param_1[2] + 0x40) == 0) ||
     ((*(short *)(param_1[5] + 0xe8) == 0 && (*(int *)(param_1[3] + 0x40) == 0))))
  goto LAB_1403a74fe;
  lVar8 = **(longlong **)(param_1[2] + 0x30);
  lVar15 = *(longlong *)(lVar8 + 0x1c0);
  if ((lVar15 == 0) || (*(longlong *)(lVar15 + 0x80) != *(longlong *)(lVar8 + 0x80))) {
    lVar15 = lVar8;
  }
  if (*(longlong *)(lVar15 + 0x170) == 0) {
    uVar1 = *(uint *)(lVar15 + 0x168);
    lVar8 = DAT_1417e3b58;
    if (0x1268 < uVar1) {
      lVar8 = DAT_1417e3b50;
    }
    lVar18 = lVar17;
    if (lVar8 != 0) {
      iVar4 = *(int *)(lVar15 + 0x16c);
      for (plVar11 = *(longlong **)
                      (*(longlong *)(lVar8 + 8) +
                      ((ulonglong)(uVar1 * 0x10000 + iVar4) % (ulonglong)*(uint *)(lVar8 + 4)) * 8);
          (lVar18 = lVar17, plVar11 != (longlong *)0x0 &&
          ((lVar18 = *plVar11, local_1f8 = uVar1, local_1f4 = iVar4,
           *(int *)(lVar18 + 0x14) != iVar4 || (*(uint *)(lVar18 + 0x10) != uVar1))));
          plVar11 = (longlong *)plVar11[1]) {
      }
    }
    *(longlong *)(lVar15 + 0x160) = lVar18;
    if (lVar18 == 0) {
      lVar18 = lVar10;
    }
    *(longlong *)(lVar15 + 0x170) = lVar18;
  }
  uVar2 = *(undefined8 *)(lVar15 + 0x170);
  if (*(int *)(param_1[3] + 0x40) == 0) {
    plVar11 = DAT_1418d6ab0;
    if (((DAT_1418d6ab8 != 0) &&
        ((*(uint *)(param_1 + 4) & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
       (plVar11 = *(longlong **)
                   (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                   (ulonglong)(*(uint *)(param_1 + 4) & 0xffffff) * 0x10),
       plVar11 == (longlong *)0x0)) {
      plVar11 = DAT_1418d6ab0;
    }
    cVar3 = (**(code **)(plVar11[2] + 8))();
    if (cVar3 == '\0') {
      lVar8 = FUN_1409388f0(param_1[5]);
    }
    else {
      plVar11 = DAT_1418d6ab0;
      if (((DAT_1418d6ab8 != 0) &&
          ((*(uint *)(param_1 + 4) & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
         (plVar11 = *(longlong **)
                     (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                     (ulonglong)(*(uint *)(param_1 + 4) & 0xffffff) * 0x10),
         plVar11 == (longlong *)0x0)) {
        plVar11 = DAT_1418d6ab0;
      }
      lVar8 = plVar11[7];
      if ((*(byte *)(lVar8 + 0x1e9) & 2) == 0) {
        if (*(code **)(*plVar11 + 0x30) == (code *)&LAB_1403827a0) {
          if (((*(int *)((longlong)plVar11 + 0x2c) - 3U & 0xfffffffa) != 0) ||
             (*(int *)((longlong)plVar11 + 0x2c) == 4)) {
LAB_1403a6cd8:
            lVar8 = *(longlong *)(plVar11[6] + 0x498);
            goto LAB_1403a6cf8;
          }
        }
        else {
          cVar3 = (**(code **)(*plVar11 + 0x30))(plVar11);
          if (cVar3 == '\0') goto LAB_1403a6cd8;
        }
        lVar8 = plVar11[8];
      }
    }
  }
  else {
    lVar8 = **(longlong **)(param_1[3] + 0x30);
    lVar15 = *(longlong *)(lVar8 + 0x1c0);
    if ((lVar15 == 0) || (*(longlong *)(lVar15 + 0x80) != *(longlong *)(lVar8 + 0x80))) {
      lVar15 = lVar8;
    }
    if (*(longlong *)(lVar15 + 0x170) == 0) {
      uVar1 = *(uint *)(lVar15 + 0x168);
      if (0x1268 < uVar1) {
        lVar13 = lVar12;
      }
      lVar8 = lVar17;
      if (lVar13 != 0) {
        iVar4 = *(int *)(lVar15 + 0x16c);
        for (plVar11 = *(longlong **)
                        (*(longlong *)(lVar13 + 8) +
                        ((ulonglong)(uVar1 * 0x10000 + iVar4) % (ulonglong)*(uint *)(lVar13 + 4)) *
                        8);
            (lVar8 = lVar17, plVar11 != (longlong *)0x0 &&
            ((lVar8 = *plVar11, local_1e8 = uVar1, local_1e4 = iVar4,
             *(int *)(lVar8 + 0x14) != iVar4 || (*(uint *)(lVar8 + 0x10) != uVar1))));
            plVar11 = (longlong *)plVar11[1]) {
        }
      }
      *(longlong *)(lVar15 + 0x160) = lVar8;
      if (lVar8 == 0) {
        lVar8 = lVar10;
      }
      *(longlong *)(lVar15 + 0x170) = lVar8;
    }
    lVar8 = *(longlong *)(lVar15 + 0x170);
  }
LAB_1403a6cf8:
  lVar10 = FUN_140251570(uVar2,lVar8);
  uVar19 = extraout_XMM0_Da_02;
  while (lVar10 == 0) {
    lVar15 = *(longlong *)(lVar8 + 0x1a8);
    if (lVar15 == lVar8) goto LAB_1403a74fe;
    lVar10 = *(longlong *)(lVar15 + 0x28);
    if (((lVar10 == 0) || (*(longlong *)(lVar10 + 0xb0) == 0)) ||
       (lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0xb0) + 8),
       (ulonglong)(*(longlong *)(lVar10 + 0x40) - *(longlong *)(lVar10 + 0x38)) < 8)) {
      lVar10 = DAT_1416e3ad0;
      if (0 < (int)(*(longlong *)(lVar15 + 0x78) - *(longlong *)(lVar15 + 0x70) >> 3)) {
        lVar10 = **(longlong **)(lVar15 + 0x70);
      }
    }
    else {
      lVar10 = **(longlong **)(lVar10 + 0x38);
    }
    lVar17 = *(longlong *)(lVar8 + 0x28);
    if (((lVar17 == 0) || (*(longlong *)(lVar17 + 0xb0) == 0)) ||
       (lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0xb0) + 8),
       (ulonglong)(*(longlong *)(lVar17 + 0x40) - *(longlong *)(lVar17 + 0x38)) < 8)) {
      lVar17 = DAT_1416e3ad0;
      if (0 < (int)(*(longlong *)(lVar8 + 0x78) - *(longlong *)(lVar8 + 0x70) >> 3)) {
        plVar11 = *(longlong **)(lVar8 + 0x70);
        goto LAB_1403a6dc3;
      }
    }
    else {
      plVar11 = *(longlong **)(lVar17 + 0x38);
LAB_1403a6dc3:
      lVar17 = *plVar11;
    }
    if (*(int *)(lVar10 + 0x3f0) <= *(int *)(lVar17 + 0x3f0)) goto LAB_1403a74fe;
    lVar10 = FUN_140251570(uVar2);
    lVar8 = lVar15;
    uVar19 = extraout_XMM0_Da_03;
  }
  lVar8 = (longlong)DAT_1416e269c;
  local_474 = DAT_1416e269c;
  iVar5 = FUN_140bba2a0(param_1[2] + 0x30);
  local_4d0 = iVar5;
  local_res20 = FUN_140bba2a0(param_1[3] + 0x30);
  uVar19 = extraout_XMM0_Da_04;
  iVar4 = iVar5;
  if (local_res20 == 0) {
    plVar11 = DAT_1418d6ab0;
    if (((DAT_1418d6ab8 != 0) &&
        ((*(uint *)(param_1 + 4) & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
       (plVar11 = *(longlong **)
                   (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                   (ulonglong)(*(uint *)(param_1 + 4) & 0xffffff) * 0x10),
       plVar11 == (longlong *)0x0)) {
      plVar11 = DAT_1418d6ab0;
    }
    cVar3 = (**(code **)(plVar11[2] + 8))();
    uVar19 = extraout_XMM0_Da_05;
    if (cVar3 != '\0') {
      plVar11 = DAT_1418d6ab0;
      if (((DAT_1418d6ab8 != 0) &&
          ((*(uint *)(param_1 + 4) & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
         (plVar11 = *(longlong **)
                     (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                     (ulonglong)(*(uint *)(param_1 + 4) & 0xffffff) * 0x10),
         plVar11 == (longlong *)0x0)) {
        plVar11 = DAT_1418d6ab0;
      }
      lVar15 = plVar11[0x198];
      local_470 = *(int *)(lVar15 + 0xa8) + *(int *)(lVar15 + 0xac) + *(int *)(lVar15 + 0xb0) +
                  *(int *)(lVar15 + 0xb4) + *(int *)(lVar15 + 0xb8) + *(int *)(lVar15 + 0xbc) +
                  *(int *)(lVar15 + 0xc0) + *(int *)(lVar15 + 0xc4);
      iVar6 = local_470 / 1000;
      if (local_470 % 1000 != 0) {
        iVar6 = (uint)(0 < local_470) + iVar6;
      }
      if ((iVar6 * 1000) / 1000 <= iVar5) {
        plVar11 = DAT_1418d6ab0;
        if (((DAT_1418d6ab8 != 0) &&
            ((*(uint *)(param_1 + 4) & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
           (plVar11 = *(longlong **)
                       (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                       (ulonglong)(*(uint *)(param_1 + 4) & 0xffffff) * 0x10),
           plVar11 == (longlong *)0x0)) {
          plVar11 = DAT_1418d6ab0;
        }
        lVar15 = plVar11[0x198];
        local_46c = *(int *)(lVar15 + 200) + *(int *)(lVar15 + 0xcc) + *(int *)(lVar15 + 0xd0) +
                    *(int *)(lVar15 + 0xd4) + *(int *)(lVar15 + 0xd8) + *(int *)(lVar15 + 0xdc) +
                    *(int *)(lVar15 + 0xe0) + *(int *)(lVar15 + 0xe4);
        iVar6 = local_46c / 1000;
        if (local_46c % 1000 != 0) {
          iVar6 = (uint)(0 < local_46c) + iVar6;
        }
        local_res20 = (iVar6 * 1000) / 10000;
        goto LAB_1403a7033;
      }
    }
    if ((*(short *)(param_1[5] + 0xe8) != 0) && (DAT_1416e26a8 <= iVar5)) {
      local_res20 = DAT_1416e26a8;
      goto LAB_1403a7033;
    }
  }
  else {
LAB_1403a7033:
    if ((0 < local_res20) &&
       (plVar11 = *(longlong **)(param_1[3] + 0x30), plVar11 != (longlong *)0x0)) {
      lVar15 = (longlong)local_res20;
      do {
        lVar17 = *plVar11;
        plVar11 = (longlong *)plVar11[2];
        iVar4 = 0;
        plVar14 = *(longlong **)(lVar17 + 0x38);
        if (plVar14 != (longlong *)0x0) {
          iVar4 = 0;
          do {
            lVar18 = *plVar14;
            plVar14 = (longlong *)plVar14[2];
            local_468 = *(int *)(lVar18 + 0xa8) + *(int *)(lVar18 + 0xac) + *(int *)(lVar18 + 0xb0)
                        + *(int *)(lVar18 + 0xb4) + *(int *)(lVar18 + 0xb8) +
                        *(int *)(lVar18 + 0xbc) + *(int *)(lVar18 + 0xc0) + *(int *)(lVar18 + 0xc4);
            iVar6 = local_468 / 1000;
            if (local_468 % 1000 != 0) {
              iVar6 = (uint)(0 < local_468) + iVar6;
            }
            iVar4 = iVar4 + (iVar6 * 1000) / 1000;
          } while (plVar14 != (longlong *)0x0);
        }
        lVar18 = (longlong)iVar4 * 0x8000;
        lVar12 = (longlong)iVar4 << 0x1e;
        lVar13 = ((lVar12 / (lVar15 << 0xf)) * (longlong)iVar5 * 0x8000 >> 0xf) *
                 ((lVar8 << 0x1e) / 0x1f40000) >> 0xf;
        if (lVar13 <= lVar18) {
          lVar18 = lVar13;
        }
        if (*(longlong *)(lVar17 + 0x170) == 0) {
          lVar12 = FUN_1400d3090(lVar17 + 0x168,lVar12 % (lVar15 << 0xf));
          *(longlong *)(lVar17 + 0x160) = lVar12;
          *(longlong *)(lVar17 + 0x170) = lVar12;
          uVar19 = extraout_XMM0_Da_06;
          if (lVar12 == 0) {
            *(longlong *)(lVar17 + 0x170) = DAT_1416e2360;
          }
        }
        local_68 = *(longlong **)(lVar10 + 0x68);
        local_58 = *(longlong **)(lVar10 + 0x60);
        plVar14 = local_58;
        local_60 = local_68;
        if (local_58 == local_68) {
LAB_1403a727f:
          local_458 = lVar18;
          if (*(longlong *)(lVar17 + 0x170) == 0) {
            lVar18 = FUN_1400d3090(lVar17 + 0x168);
            *(longlong *)(lVar17 + 0x160) = lVar18;
            *(longlong *)(lVar17 + 0x170) = lVar18;
            if (lVar18 == 0) {
              *(longlong *)(lVar17 + 0x170) = DAT_1416e2360;
            }
          }
          uVar19 = FUN_140bdf320(lVar10,*(undefined8 *)(lVar17 + 0x170),&local_458);
        }
        else {
          do {
            if (*plVar14 == *(longlong *)(lVar17 + 0x170)) break;
            plVar14 = plVar14 + 1;
          } while (plVar14 != local_68);
          if (plVar14 == local_68) goto LAB_1403a727f;
          local_98 = lVar18;
          if (*(longlong *)(lVar17 + 0x170) == 0) {
            lVar12 = FUN_1400d3090();
            *(longlong *)(lVar17 + 0x160) = lVar12;
            *(longlong *)(lVar17 + 0x170) = lVar12;
            uVar19 = extraout_XMM0_Da_07;
            if (lVar12 == 0) {
              *(longlong *)(lVar17 + 0x170) = DAT_1416e2360;
            }
          }
          lVar17 = *(longlong *)(lVar17 + 0x170);
          if ((lVar18 != DAT_1417f3228) &&
             (iVar4 = (int)(*(longlong *)(lVar10 + 200) - *(longlong *)(lVar10 + 0xc0) >> 5),
             lVar12 = (longlong)iVar4, 0 < iVar4)) {
            lVar13 = 0;
            do {
              if (lVar17 == *(longlong *)(*(longlong *)(lVar10 + 0xc0) + 0x10 + lVar13)) {
                plVar14 = (longlong *)(lVar13 + 0x18 + *(longlong *)(lVar10 + 0xc0));
                *plVar14 = *plVar14 + lVar18;
              }
              lVar13 = lVar13 + 0x20;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
        }
        iVar4 = local_4d0;
      } while (plVar11 != (longlong *)0x0);
    }
  }
  if ((0 < iVar4) && (plVar11 = *(longlong **)(param_1[2] + 0x30), plVar11 != (longlong *)0x0)) {
    lVar15 = (longlong)local_res20;
    do {
      lVar17 = *plVar11;
      plVar11 = (longlong *)plVar11[2];
      in_stack_fffffffffffffaf8 =
           (undefined1 *)((ulonglong)in_stack_fffffffffffffaf8 & 0xffffffffffffff00);
      iVar5 = FUN_140b9aa40(lVar17,0,0,0,in_stack_fffffffffffffaf8);
      lVar18 = (longlong)iVar5 * 0x8000;
      lVar12 = (longlong)iVar5 << 0x1e;
      lVar13 = ((lVar12 / ((longlong)iVar4 << 0xf)) * lVar15 * 0x8000 >> 0xf) *
               ((lVar8 << 0x1e) / 0x1f40000) >> 0xf;
      if (lVar13 <= lVar18) {
        lVar18 = lVar13;
      }
      uVar19 = extraout_XMM0_Da_08;
      if (*(longlong *)(lVar17 + 0x170) == 0) {
        lVar12 = FUN_1400d3090(lVar17 + 0x168,lVar12 % ((longlong)iVar4 << 0xf));
        *(longlong *)(lVar17 + 0x160) = lVar12;
        *(longlong *)(lVar17 + 0x170) = lVar12;
        uVar19 = extraout_XMM0_Da_09;
        if (lVar12 == 0) {
          *(longlong *)(lVar17 + 0x170) = DAT_1416e2360;
        }
      }
      local_90 = *(longlong **)(lVar10 + 0x68);
      local_80 = *(longlong **)(lVar10 + 0x60);
      plVar14 = local_80;
      local_88 = local_90;
      if (local_80 == local_90) {
LAB_1403a749f:
        local_450 = lVar18;
        if (*(longlong *)(lVar17 + 0x170) == 0) {
          lVar18 = FUN_1400d3090(lVar17 + 0x168);
          *(longlong *)(lVar17 + 0x160) = lVar18;
          *(longlong *)(lVar17 + 0x170) = lVar18;
          if (lVar18 == 0) {
            *(longlong *)(lVar17 + 0x170) = DAT_1416e2360;
          }
        }
        uVar19 = FUN_140bdf320(lVar10);
      }
      else {
        do {
          if (*plVar14 == *(longlong *)(lVar17 + 0x170)) break;
          plVar14 = plVar14 + 1;
        } while (plVar14 != local_90);
        if (plVar14 == local_90) goto LAB_1403a749f;
        local_78 = lVar18;
        if (*(longlong *)(lVar17 + 0x170) == 0) {
          lVar12 = FUN_1400d3090(lVar17 + 0x168);
          *(longlong *)(lVar17 + 0x160) = lVar12;
          *(longlong *)(lVar17 + 0x170) = lVar12;
          uVar19 = extraout_XMM0_Da_10;
          if (lVar12 == 0) {
            *(longlong *)(lVar17 + 0x170) = DAT_1416e2360;
          }
        }
        lVar17 = *(longlong *)(lVar17 + 0x170);
        lVar12 = 0;
        if ((lVar18 != DAT_1417f3228) &&
           (iVar5 = (int)(*(longlong *)(lVar10 + 200) - *(longlong *)(lVar10 + 0xc0) >> 5),
           lVar13 = (longlong)iVar5, 0 < iVar5)) {
          do {
            if (lVar17 == *(longlong *)(*(longlong *)(lVar10 + 0xc0) + 0x10 + lVar12)) {
              plVar14 = (longlong *)(*(longlong *)(lVar10 + 0xc0) + 0x18 + lVar12);
              *plVar14 = *plVar14 + lVar18;
            }
            lVar12 = lVar12 + 0x20;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
      }
    } while (plVar11 != (longlong *)0x0);
  }
LAB_1403a74fe:
  iVar5 = 0;
  uVar19 = FUN_1403a56a0(uVar19,param_1[2],param_1[3]);
  FUN_1403a56a0(uVar19,param_1[3],param_1[2]);
  FUN_1403a3240(param_1[2],param_1[3]);
  uVar19 = FUN_1403a3240(param_1[3],param_1[2]);
  uVar19 = FUN_1403a5470(uVar19,param_1[2]);
  FUN_1403a5470(uVar19,param_1[3]);
  iVar4 = (**(code **)(*param_1 + 0x60))(param_1);
  if ((((((iVar4 == 3) && ((int)param_1[7] % DAT_1416e2650 == 0)) && ((int)param_1[7] != 0)) &&
       ((lVar8 = param_1[2], *(int *)(lVar8 + 0x40) != 0 &&
        (7 < (ulonglong)(*(longlong *)(lVar8 + 0x198) - *(longlong *)(lVar8 + 400)))))) &&
      (7 < (ulonglong)(*(longlong *)(param_1[3] + 0x198) - *(longlong *)(param_1[3] + 400)))) &&
     (cVar3 = (**(code **)(*param_1 + 0x48))(param_1), cVar3 == '\0')) {
    piVar7 = (int *)FUN_1403a7c80(param_1,local_464,0);
    local_460 = -*piVar7;
    lVar8 = **(longlong **)(param_1[3] + 400);
    piVar7 = (int *)(lVar8 + 0x40);
    *piVar7 = *piVar7 + local_460;
    if (*piVar7 < 0) {
      *(undefined4 *)(lVar8 + 0x40) = 0;
    }
    else if (1000 < *(int *)(lVar8 + 0x40)) {
      *(undefined4 *)(lVar8 + 0x40) = 1000;
    }
  }
  *(int *)(param_1 + 0x11) = (int)param_1[0x11] + -1;
  lVar8 = FUN_1408b4ea0();
  if ((int)param_1[0x11] < 1) {
    iVar4 = (**(code **)(*param_1 + 0x60))(param_1);
    if (iVar4 == 1) {
      do {
        if (iVar5 == 0) {
          plVar11 = param_1 + 0xe;
          lVar8 = 0x58;
        }
        else {
          plVar11 = param_1 + 0xb;
          lVar8 = 0x70;
        }
        lVar10 = DAT_1416e2360;
        if ((*(longlong *)(lVar8 + 8 + (longlong)param_1) -
             (longlong)*(longlong **)(lVar8 + (longlong)param_1) & 0xfffffffffffffff8U) != 0) {
          lVar10 = **(longlong **)(lVar8 + (longlong)param_1);
        }
        if (iVar5 == 0) {
          lVar8 = param_1[3];
          lVar15 = param_1[2];
        }
        else {
          lVar8 = param_1[2];
          lVar15 = param_1[3];
        }
        in_stack_fffffffffffffaf8 =
             (undefined1 *)((ulonglong)in_stack_fffffffffffffaf8 & 0xffffffffffffff00);
        FUN_1403a5a30(plVar11,lVar10,lVar8,lVar15,in_stack_fffffffffffffaf8);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 2);
    }
    else {
      iVar4 = (**(code **)(*param_1 + 0x60))(param_1);
      if (((iVar4 == 3) && (piVar7 = (int *)FUN_1403a7c80(param_1,local_45c,0), 0 < *piVar7)) &&
         (cVar3 = (**(code **)(*param_1 + 0x48))(param_1), cVar3 == '\0')) {
        plVar11 = DAT_1418d6ab0;
        if (((DAT_1418d6ab8 != 0) &&
            ((*(uint *)(param_1 + 4) & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
           (plVar11 = *(longlong **)
                       (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                       (ulonglong)(*(uint *)(param_1 + 4) & 0xffffff) * 0x10),
           plVar11 == (longlong *)0x0)) {
          plVar11 = DAT_1418d6ab0;
        }
        if (*(int *)((longlong)plVar11 + 0x2c) != 3) {
          local_370 = FUN_140c4a7f0();
          local_430 = 0x18e;
          local_428 = 0;
          local_420 = 0xffffffffffffffff;
          local_418 = DAT_1416e3250;
          local_410 = DAT_1416e3248;
          local_408 = 0xffffffffffffffff;
          local_400 = 0xffffffffffffffff;
          local_3f8 = 0xffffffff;
          local_438 = &PTR_FUN_1410655c8;
          local_3f0 = DAT_1416e3238;
          local_3e8 = DAT_1416e3238;
          local_3e0 = DAT_1416e3228;
          local_3d8 = DAT_1416e3228;
          local_3d0 = 0;
          local_3c8 = 0;
          uStack_3c0 = 0;
          local_3b8 = 0;
          uStack_3b0 = 0;
          local_3a8 = 0;
          uStack_3a0 = 0;
          local_398 = DAT_1416e3230;
          local_390 = 0;
          local_388 = &local_438;
          local_380 = &local_438;
          local_378 = &local_438;
          local_364 = 1;
          local_360 = 0;
          local_358 = 0;
          local_350 = 0;
          local_348 = 0;
          uStack_340 = 0;
          local_338 = 0;
          local_320 = 0x18e;
          local_318 = 0;
          local_310 = 0xffffffffffffffff;
          local_308 = DAT_1416e3250;
          local_300 = DAT_1416e3248;
          local_2f8 = 0xffffffffffffffff;
          local_2f0 = 0xffffffffffffffff;
          local_2e8 = 0xffffffff;
          local_328 = &PTR_FUN_1410655c8;
          local_2e0 = DAT_1416e3238;
          local_2d8 = DAT_1416e3238;
          local_2d0 = DAT_1416e3228;
          local_2c8 = DAT_1416e3228;
          local_2c0 = 0;
          local_2b8 = 0;
          uStack_2b0 = 0;
          local_2a8 = 0;
          uStack_2a0 = 0;
          local_298 = 0;
          uStack_290 = 0;
          local_288 = DAT_1416e3230;
          local_280 = 0;
          local_278 = &local_328;
          local_270 = &local_328;
          local_268 = &local_328;
          local_25c = 0;
          local_254 = 1;
          local_250 = 0;
          local_248 = 0;
          local_240 = 0;
          local_238 = 0;
          uStack_230 = 0;
          local_228 = 0;
          local_260 = 0;
          local_1a0 = 0x18e;
          local_198 = 0;
          local_190 = 0xffffffffffffffff;
          local_188 = DAT_1416e3250;
          local_180 = DAT_1416e3248;
          local_178 = 0xffffffffffffffff;
          local_170 = 0xffffffffffffffff;
          local_168 = 0xffffffff;
          local_1a8 = &PTR_FUN_1410655c8;
          local_160 = DAT_1416e3238;
          local_158 = DAT_1416e3238;
          local_150 = DAT_1416e3228;
          local_148 = DAT_1416e3228;
          local_140 = 0;
          local_138 = 0;
          uStack_130 = 0;
          local_128 = 0;
          uStack_120 = 0;
          local_118 = 0;
          uStack_110 = 0;
          local_108 = DAT_1416e3230;
          local_100 = 0;
          local_f8 = &local_1a8;
          local_f0 = &local_1a8;
          local_e8 = &local_1a8;
          local_dc = 0;
          local_d4 = 1;
          local_d0 = 0;
          local_c8 = 0;
          local_c0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = 0;
          local_e0 = 0;
          local_36c = local_370;
          local_368 = local_370;
          if ((*(byte *)(*(longlong *)(param_1[2] + 0x120) + 0x1e9) & 2) != 0) {
            lVar10 = *(longlong *)(param_1[3] + 0x120);
            if (((*(byte *)(lVar10 + 0x1e9) & 2) != 0) &&
               ((lVar10 != DAT_1416e3238 || ((*(byte *)(lVar10 + 0x1e9) & 2) == 0)))) {
              FUN_1406d4ac0(&local_328);
              local_2e0 = lVar10;
              if (lVar10 == 0) {
                local_2e0 = DAT_1416e3238;
              }
              if ((*(byte *)(local_2e0 + 0x1e9) & 2) != 0) {
                LOCK();
                *(int *)(local_2e0 + 0x1c0) = *(int *)(local_2e0 + 0x1c0) + 1;
                UNLOCK();
              }
            }
            lVar10 = *(longlong *)(param_1[2] + 0x120);
            if ((lVar10 != local_3f0) || ((*(byte *)(lVar10 + 0x1e9) & 2) == 0)) {
              (*(code *)local_438[7])(&local_438);
              local_3f0 = lVar10;
              if (lVar10 == 0) {
                local_3f0 = DAT_1416e3238;
              }
              if ((*(byte *)(local_3f0 + 0x1e9) & 2) != 0) {
                LOCK();
                *(int *)(local_3f0 + 0x1c0) = *(int *)(local_3f0 + 0x1c0) + 1;
                UNLOCK();
              }
            }
            if (*(longlong *)(lVar8 + 0x60) != 0) {
              FUN_1408b3220(*(longlong *)(lVar8 + 0x60),&local_438);
            }
          }
          if ((*(byte *)(*(longlong *)(param_1[3] + 0x120) + 0x1e9) & 2) != 0) {
            lVar10 = *(longlong *)(param_1[2] + 0x120);
            if (((*(byte *)(lVar10 + 0x1e9) & 2) != 0) &&
               ((lVar10 != local_2e0 || ((*(byte *)(lVar10 + 0x1e9) & 2) == 0)))) {
              (*(code *)local_328[7])(&local_328);
              local_2e0 = lVar10;
              if (lVar10 == 0) {
                local_2e0 = DAT_1416e3238;
              }
              if ((*(byte *)(local_2e0 + 0x1e9) & 2) != 0) {
                LOCK();
                *(int *)(local_2e0 + 0x1c0) = *(int *)(local_2e0 + 0x1c0) + 1;
                UNLOCK();
              }
            }
            lVar10 = *(longlong *)(param_1[3] + 0x120);
            if ((lVar10 != local_3f0) || ((*(byte *)(lVar10 + 0x1e9) & 2) == 0)) {
              (*(code *)local_438[7])(&local_438);
              local_3f0 = lVar10;
              if (lVar10 == 0) {
                local_3f0 = DAT_1416e3238;
              }
              if ((*(byte *)(local_3f0 + 0x1e9) & 2) != 0) {
                LOCK();
                *(int *)(local_3f0 + 0x1c0) = *(int *)(local_3f0 + 0x1c0) + 1;
                UNLOCK();
              }
            }
            if (*(longlong *)(lVar8 + 0x60) != 0) {
              FUN_1408b3220(*(longlong *)(lVar8 + 0x60),&local_438);
            }
          }
          FUN_1406d3280(&local_1a8);
          FUN_1406d3280(&local_328);
          FUN_1406d3280(&local_438);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x11) = DAT_1416e2608;
  }
  FUN_1403a8bb0(param_1);
  cVar3 = (**(code **)(*param_1 + 0x88))(param_1);
  if (cVar3 != '\0') {
    return 1;
  }
  *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  return 0;
}

