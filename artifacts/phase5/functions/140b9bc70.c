
undefined8 * FUN_140b9bc70(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  longlong *plVar29;
  int iVar30;
  longlong *plVar31;
  char local_res20 [8];
  int local_418;
  undefined1 local_414 [12];
  undefined **local_408;
  undefined4 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined4 local_3a8;
  byte local_3a0;
  undefined7 uStack_39f;
  undefined8 local_390;
  ulonglong local_388;
  undefined1 local_380 [16];
  undefined8 local_370;
  undefined8 local_368;
  undefined1 local_360;
  undefined7 uStack_35f;
  undefined8 local_350;
  ulonglong local_348;
  undefined1 local_340 [16];
  undefined8 local_330;
  undefined8 local_328;
  undefined1 local_320;
  undefined7 uStack_31f;
  undefined8 local_310;
  ulonglong local_308;
  undefined1 local_300 [4];
  undefined1 local_2fc [4];
  longlong *local_2f8;
  longlong *local_2f0;
  longlong local_2e8;
  undefined1 local_2e0 [32];
  undefined1 local_2c0 [32];
  undefined1 local_2a0 [16];
  undefined8 local_290;
  undefined8 local_288;
  undefined1 local_280 [32];
  undefined8 local_260;
  undefined1 local_258 [16];
  longlong local_248;
  undefined1 local_238 [32];
  undefined1 local_218 [32];
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  
  local_260 = 0xfffffffffffffffe;
  local_3a8 = 0;
  lVar11 = *(longlong *)(DAT_1416e3260 + 0x3f0);
  param_2[3] = 0xf;
  param_2[2] = 0;
  puVar6 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar6 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar6 = 0;
  puVar6 = param_2 + 4;
  param_2[7] = 0xf;
  param_2[6] = 0;
  if (0xf < (ulonglong)param_2[7]) {
    puVar6 = (undefined8 *)*puVar6;
  }
  *(undefined1 *)puVar6 = 0;
  *(undefined2 *)(param_2 + 8) = 1;
  local_2e8 = lVar11;
  FUN_14037f130(param_2 + 9);
  *(undefined4 *)(param_2 + 0x97) = 0;
  *(undefined1 *)((longlong)param_2 + 0x4bc) = 0;
  local_3a8 = 1;
  plVar29 = *(longlong **)(param_1[0x10] + 0xcc0);
  cVar3 = (**(code **)(*param_1 + 0x70))(param_1);
  if (((cVar3 != '\0') &&
      (lVar9 = param_1[0x10], *(char *)(*(longlong *)(lVar9 + 0xf0) + 100) != '\0')) &&
     (*(longlong *)(lVar9 + 0xd68) != 0)) {
    plVar29 = *(longlong **)(*(longlong *)(lVar9 + 0xd68) + 0x10);
  }
  do {
    do {
      if (plVar29 == (longlong *)0x0) {
        return param_2;
      }
      plVar31 = (longlong *)*plVar29;
      plVar29 = (longlong *)plVar29[2];
      local_2f8 = plVar29;
      local_2f0 = plVar31;
      cVar3 = (**(code **)(*plVar31 + 0x68))(plVar31);
    } while (((cVar3 != '\0') && (*(char *)(*(longlong *)(param_1[0x10] + 0xf0) + 100) == '\0')) ||
            ((cVar3 = (**(code **)(*param_1 + 0x68))(param_1), cVar3 != '\0' &&
             ((cVar3 = (**(code **)(*plVar31 + 0x70))(plVar31), cVar3 != '\0' &&
              (*(char *)(*(longlong *)(param_1[0x10] + 0xf0) + 100) != '\0'))))));
    local_368 = 0xf;
    local_370 = 0;
    local_380[0] = 0;
    FUN_1400b0300(local_380,&DAT_1410a6b8c,2);
    lVar26 = DAT_1417e3b58;
    lVar8 = DAT_1417e3b50;
    lVar9 = DAT_1416e2360;
    if (plVar31[0x2e] == 0) {
      uVar4 = *(uint *)(plVar31 + 0x2d);
      lVar7 = DAT_1417e3b58;
      if (0x1268 < uVar4) {
        lVar7 = DAT_1417e3b50;
      }
      if (lVar7 != 0) {
        for (plVar12 = *(longlong **)
                        (*(longlong *)(lVar7 + 8) +
                        ((ulonglong)(uVar4 * 0x10000 + *(int *)((longlong)plVar31 + 0x16c)) %
                        (ulonglong)*(uint *)(lVar7 + 4)) * 8); plVar12 != (longlong *)0x0;
            plVar12 = (longlong *)plVar12[1]) {
          lVar7 = *plVar12;
          if ((*(int *)(lVar7 + 0x14) == *(int *)((longlong)plVar31 + 0x16c)) &&
             (*(uint *)(lVar7 + 0x10) == uVar4)) goto LAB_140b9be66;
        }
      }
      lVar7 = 0;
LAB_140b9be66:
      plVar31[0x2c] = lVar7;
      if (lVar7 == 0) {
        lVar7 = lVar9;
      }
      plVar31[0x2e] = lVar7;
    }
    if (lVar11 == plVar31[0x2e]) {
LAB_140b9bf85:
      puVar18 = &DAT_141067450;
LAB_140b9bf8c:
      FUN_1400b0300(local_380,puVar18,2);
    }
    else {
      if (plVar31[0x2e] == 0) {
        uVar4 = *(uint *)(plVar31 + 0x2d);
        if (0x1268 < uVar4) {
          lVar26 = lVar8;
        }
        if (lVar26 != 0) {
          for (plVar12 = *(longlong **)
                          (*(longlong *)(lVar26 + 8) +
                          ((ulonglong)(uVar4 * 0x10000 + *(int *)((longlong)plVar31 + 0x16c)) %
                          (ulonglong)*(uint *)(lVar26 + 4)) * 8); plVar12 != (longlong *)0x0;
              plVar12 = (longlong *)plVar12[1]) {
            lVar8 = *plVar12;
            if ((*(int *)(lVar8 + 0x14) == *(int *)((longlong)plVar31 + 0x16c)) &&
               (*(uint *)(lVar8 + 0x10) == uVar4)) goto LAB_140b9bee3;
          }
        }
        lVar8 = 0;
LAB_140b9bee3:
        plVar31[0x2c] = lVar8;
        if (lVar8 == 0) {
          lVar8 = lVar9;
        }
        plVar31[0x2e] = lVar8;
      }
      lVar9 = FUN_1402509d0(lVar11,plVar31[0x2e]);
      if ((*(byte *)(lVar9 + 0x98) & 8) != 0) goto LAB_140b9bf85;
      if (plVar31[0x2e] == 0) {
        lVar9 = FUN_1400d3090(plVar31 + 0x2d);
        plVar31[0x2c] = lVar9;
        plVar31[0x2e] = lVar9;
        if (lVar9 == 0) {
          plVar31[0x2e] = DAT_1416e2360;
        }
      }
      local_res20[0] = '\0';
      FUN_14025d050(lVar11,plVar31[0x2e],local_res20,local_414,&local_418);
      if (local_res20[0] != '\0') {
        puVar18 = &DAT_141067454;
        goto LAB_140b9bf8c;
      }
    }
    if (param_2[2] != 0) {
      FUN_1400b0560(param_2,&DAT_141066f10,1);
    }
    if (plVar31[0x2e] == 0) {
      uVar4 = *(uint *)(plVar31 + 0x2d);
      lVar11 = DAT_1417e3b58;
      if (0x1268 < uVar4) {
        lVar11 = DAT_1417e3b50;
      }
      if (lVar11 != 0) {
        for (plVar12 = *(longlong **)
                        (*(longlong *)(lVar11 + 8) +
                        ((ulonglong)(uVar4 * 0x10000 + *(int *)((longlong)plVar31 + 0x16c)) %
                        (ulonglong)*(uint *)(lVar11 + 4)) * 8); plVar12 != (longlong *)0x0;
            plVar12 = (longlong *)plVar12[1]) {
          lVar11 = *plVar12;
          if ((*(int *)(lVar11 + 0x14) == *(int *)((longlong)plVar31 + 0x16c)) &&
             (*(uint *)(lVar11 + 0x10) == uVar4)) goto LAB_140b9c01e;
        }
      }
      lVar11 = 0;
LAB_140b9c01e:
      plVar31[0x2c] = lVar11;
      if (lVar11 == 0) {
        lVar11 = DAT_1416e2360;
      }
      plVar31[0x2e] = lVar11;
    }
    lVar11 = plVar31[0x2e];
    lVar9 = *(longlong *)(lVar11 + 0x28);
    if (((lVar9 == 0) || (*(longlong *)(lVar9 + 0xb0) == 0)) ||
       (lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0xb0) + 8),
       (ulonglong)(*(longlong *)(lVar9 + 0x40) - *(longlong *)(lVar9 + 0x38)) < 8)) {
      lVar9 = DAT_1416e3ad0;
      if (0 < (int)(*(longlong *)(lVar11 + 0x78) - *(longlong *)(lVar11 + 0x70) >> 3)) {
        lVar9 = **(longlong **)(lVar11 + 0x70);
      }
    }
    else {
      lVar9 = **(longlong **)(lVar9 + 0x38);
    }
    if ((*(byte *)(lVar9 + 0x9d2) & 0x20) == 0) {
      local_388 = 0xf;
      local_390 = 0;
      local_3a0 = 0;
      FUN_1400b0300(&local_3a0,&DAT_1410718fc,3);
      local_328 = 0xf;
      local_330 = 0;
      local_340[0] = 0;
      FUN_1400b0300(local_340,&DAT_141078b18,4);
      if (*(code **)(*plVar31 + 0x30) == (code *)&LAB_1401add00) {
        plVar12 = plVar31 + 0x17;
      }
      else {
        plVar12 = (longlong *)(**(code **)(*plVar31 + 0x30))(plVar31);
      }
      uVar10 = FUN_140d5f250(local_380,local_2c0,plVar12);
      uVar10 = FUN_140d5f250(uVar10,local_2e0,local_340);
      uVar10 = FUN_140d5f250(uVar10,local_238,local_380);
      if (plVar31[0x2e] == 0) {
        lVar11 = FUN_1400d3090(plVar31 + 0x2d);
        plVar31[0x2c] = lVar11;
        plVar31[0x2e] = lVar11;
        if (lVar11 == 0) {
          plVar31[0x2e] = DAT_1416e2360;
        }
      }
      lVar11 = FUN_1401ad120(plVar31[0x2e]);
      cVar3 = (**(code **)(**(longlong **)(lVar11 + 0x850) + 0x48))();
      lVar9 = 0x10;
      if (cVar3 != '\0') {
        lVar9 = 0x868;
      }
      uVar10 = FUN_140d5f250(uVar10,&local_360,lVar9 + lVar11);
      uVar10 = FUN_140d5f250(uVar10,&local_320,&local_3a0);
      FUN_1400b06b0(param_2,uVar10,0,0xffffffffffffffff);
      if (0xf < local_308) {
        FUN_1400b08c0(&local_320,CONCAT71(uStack_31f,local_320),local_308 + 1);
      }
      local_308 = 0xf;
      local_310 = 0;
      local_320 = 0;
      if (0xf < local_348) {
        FUN_1400b08c0(&local_360,CONCAT71(uStack_35f,local_360),local_348 + 1);
      }
      local_348 = 0xf;
      local_350 = 0;
      local_360 = 0;
      FUN_1400ae4f0(local_238);
      FUN_1400ae4f0(local_2e0);
      FUN_1400ae4f0(local_2c0);
      FUN_1400ae4f0(local_340);
      FUN_1400ae4f0(&local_3a0);
    }
    else {
      if (*(code **)(*plVar31 + 0x30) == (code *)&LAB_1401add00) {
        plVar12 = plVar31 + 0x17;
      }
      else {
        plVar12 = (longlong *)(**(code **)(*plVar31 + 0x30))(plVar31);
      }
      uVar10 = FUN_140d5f250(local_380,&local_3a0,plVar12);
      FUN_1400b06b0(param_2,uVar10,0,0xffffffffffffffff);
      if (0xf < local_388) {
        uVar1 = CONCAT71(uStack_39f,local_3a0);
        uVar17 = uVar1;
        if (0xfff < local_388 + 1) {
          if ((local_3a0 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140e3f0ac();
          }
          uVar17 = *(ulonglong *)(uVar1 - 8);
          if (uVar1 <= uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_140e3f0ac();
          }
          if (uVar1 - uVar17 < 8) {
                    /* WARNING: Subroutine does not return */
            FUN_140e3f0ac();
          }
          if (0x27 < uVar1 - uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_140e3f0ac();
          }
        }
        FUN_140e1c5e4(uVar17);
      }
    }
    if (7 < (ulonglong)(plVar31[0x36] - plVar31[0x35])) {
      uVar10 = FUN_140698bb0(local_2e0,"ATTACHED_TO_UNIT");
      uVar10 = FUN_140d5f2e0(local_2c0,&DAT_1410785b8,uVar10);
      FUN_1400b06b0(param_2,uVar10,0,0xffffffffffffffff);
      FUN_1400ae4f0(local_2c0);
      FUN_1400ae4f0(local_2e0);
    }
    if (plVar31[0x38] != 0) {
      uVar10 = FUN_140698bb0(local_2e0,"ATTACHED_UNIT");
      uVar10 = FUN_140d5f2e0(local_2c0,&DAT_1410785b8,uVar10);
      FUN_1400b06b0(param_2,uVar10,0,0xffffffffffffffff);
      FUN_1400ae4f0(local_2c0);
      FUN_1400ae4f0(local_2e0);
    }
    FUN_1400b0560(param_2,&DAT_141142ff0,3);
    iVar19 = 0;
    local_418 = 0;
    local_res20[0] = '\0';
    cVar3 = (**(code **)(*param_1 + 0x68))(param_1);
    iVar20 = 0;
    if ((((cVar3 != '\0') && (cVar3 = FUN_140b99d70(param_1), iVar20 = iVar19, cVar3 == '\0')) &&
        ((*(char *)(DAT_1416e3260 + 0x62a) != '\0' &&
         ((*(int *)((longlong)param_1 + 0xb4) < 1 || (*(int *)((longlong)param_1 + 0xb4) == 3))))))
       && ((cVar3 = (**(code **)(*param_1 + 0x68))(param_1), cVar3 == '\0' ||
           (lVar11 = (**(code **)(*param_1 + 0x50))(param_1), *(longlong *)(lVar11 + 0x230) == 0))))
    {
      local_res20[0] = '\x01';
      plVar12 = (longlong *)(**(code **)(*param_1 + 0x50))(param_1);
      piVar13 = (int *)(**(code **)(*plVar12 + 0x90))(plVar12,local_300,0);
      iVar20 = *piVar13;
      local_418 = iVar20;
    }
    local_400 = 0x18e;
    local_408 = &PTR_FUN_141065928;
    local_3b8 = DAT_1416e3a70;
    iVar30 = 0;
    local_3f8 = 0;
    local_3f0 = 0;
    local_3e8 = 0;
    local_3e0 = 0;
    local_3d8 = 0;
    local_3d0 = 0;
    local_3c8 = 0;
    local_3c0 = 0;
    plVar12 = (longlong *)plVar31[7];
    local_3c0._4_4_ = 0;
    local_3c8._4_4_ = 0;
    iVar28 = 0;
    local_3d0._4_4_ = 0;
    local_3d8._4_4_ = 0;
    local_3f8._4_4_ = 0;
    iVar19 = local_3f8._4_4_;
    if (plVar12 == (longlong *)0x0) {
      local_3e8._4_4_ = 0;
      iVar22 = local_3c0._4_4_;
      iVar24 = local_3c8._4_4_;
      iVar27 = local_3d0._4_4_;
      iVar21 = local_3d8._4_4_;
      iVar5 = local_3e8._4_4_;
      iVar25 = iVar28;
    }
    else {
      local_3e0._4_4_ = 0;
      iVar20 = iVar30;
      iVar23 = iVar30;
      iVar25 = iVar30;
      iVar28 = iVar30;
      do {
        lVar11 = *plVar12;
        plVar12 = (longlong *)plVar12[2];
        uVar4 = (int)local_3f8 + *(int *)(lVar11 + 0xa8);
        local_3f8 = (ulonglong)uVar4;
        iVar30 = iVar30 + *(int *)(lVar11 + 200);
        iVar19 = iVar19 + *(int *)(lVar11 + 0xac);
        local_3d8._4_4_ = local_3d8._4_4_ + *(int *)(lVar11 + 0xcc);
        iVar28 = iVar28 + *(int *)(lVar11 + 0xd0);
        local_3f0 = CONCAT44(local_3f0._4_4_ + *(int *)(lVar11 + 0xb4),
                             (int)local_3f0 + *(int *)(lVar11 + 0xb0));
        local_3d0._4_4_ = local_3d0._4_4_ + *(int *)(lVar11 + 0xd4);
        iVar25 = iVar25 + *(int *)(lVar11 + 0xd8);
        iVar5 = local_3e8._4_4_ + *(int *)(lVar11 + 0xbc);
        local_3e8 = CONCAT44(iVar5,(int)local_3e8 + *(int *)(lVar11 + 0xb8));
        local_3c8._4_4_ = local_3c8._4_4_ + *(int *)(lVar11 + 0xdc);
        iVar20 = iVar20 + *(int *)(lVar11 + 0xc0);
        iVar23 = iVar23 + *(int *)(lVar11 + 0xe0);
        local_3e0._4_4_ = local_3e0._4_4_ + *(int *)(lVar11 + 0xc4);
        local_3c0._4_4_ = local_3c0._4_4_ + *(int *)(lVar11 + 0xe4);
      } while (plVar12 != (longlong *)0x0);
      local_3c0 = CONCAT44(local_3c0._4_4_,iVar23);
      local_3c8 = CONCAT44(local_3c8._4_4_,iVar25);
      local_3d0 = CONCAT44(local_3d0._4_4_,iVar28);
      local_3d8 = CONCAT44(local_3d8._4_4_,iVar30);
      local_3e0 = CONCAT44(local_3e0._4_4_,iVar20);
      local_3f8 = CONCAT44(iVar19,uVar4);
      plVar29 = local_2f8;
      plVar31 = local_2f0;
      iVar22 = local_3c0._4_4_;
      iVar24 = local_3c8._4_4_;
      iVar27 = local_3d0._4_4_;
      iVar21 = local_3d8._4_4_;
      iVar20 = local_418;
      iVar30 = iVar23;
    }
    iVar19 = iVar19 + (int)local_3f8 + (int)local_3f0 + local_3f0._4_4_ + (int)local_3e8 + iVar5 +
             (int)local_3e0 + local_3e0._4_4_;
    iVar22 = iVar21 + (int)local_3d8 + iVar28 + iVar27 + iVar25 + iVar24 + iVar30 + iVar22;
    FUN_1400b0300(local_380,&DAT_141067450,2);
    if (iVar19 < iVar22) {
      FUN_1400b0300(local_380,&DAT_141067454,2);
    }
    cVar3 = (**(code **)(*plVar31 + 0x68))(plVar31);
    plVar12 = (longlong *)0x0;
    if (cVar3 == '\0') {
      local_288 = 0xf;
      local_290 = 0;
      local_2a0[0] = 0;
      FUN_1400b0300(local_2a0,&DAT_1410f4d50,3);
      uVar10 = FUN_140698f70(local_d8,"GALLEYS");
      iVar28 = iVar19 / 1000;
      if (iVar19 != iVar28 * 1000) {
        iVar28 = (uint)(0 < iVar19) + iVar28;
      }
      uVar14 = FUN_140d5ebc0(local_f8,(iVar28 * 1000) / 1000);
      uVar14 = FUN_140d5f2e0(local_118,&DAT_141067450,uVar14);
      uVar14 = FUN_140d5f250(uVar14,local_138,local_2a0);
      uVar10 = FUN_140d5f250(uVar14,local_158,uVar10);
      FUN_1400b06b0(param_2,uVar10,0,0xffffffffffffffff);
      FUN_1400ae4f0(local_158);
      FUN_1400ae4f0(local_138);
      FUN_1400ae4f0(local_118);
      FUN_1400ae4f0(local_f8);
      FUN_1400ae4f0(local_d8);
      puVar18 = local_2a0;
    }
    else {
      local_348 = 0xf;
      local_350 = 0;
      local_360 = 0;
      FUN_1400b0300(&local_360,&DAT_141070c9c,1);
      local_328 = 0xf;
      local_330 = 0;
      local_340[0] = 0;
      FUN_1400b0300(local_340,&DAT_141078b18,4);
      local_388 = 0xf;
      local_390 = 0;
      local_3a0 = 0;
      FUN_1400b0300(&local_3a0,&DAT_1410a3104,5);
      uVar10 = FUN_140849390(&local_408,local_178);
      iVar28 = iVar22 / 1000;
      if (iVar22 != iVar28 * 1000) {
        iVar28 = (uint)(0 < iVar22) + iVar28;
      }
      uVar14 = FUN_140d5ebc0(local_198,(iVar28 * 1000) / 1000);
      iVar28 = iVar19 / 1000;
      if (iVar19 != iVar28 * 1000) {
        iVar28 = (uint)(0 < iVar19) + iVar28;
      }
      uVar15 = FUN_140d5ebc0(local_1b8,(iVar28 * 1000) / 1000);
      uVar15 = FUN_140d5f250(local_380,local_1d8,uVar15);
      uVar15 = FUN_140d5f250(uVar15,local_58,&local_3a0);
      uVar14 = FUN_140d5f250(uVar15,&local_320,uVar14);
      uVar14 = FUN_140d5f250(uVar14,local_238,local_340);
      uVar10 = FUN_140d5f250(uVar14,local_2e0,uVar10);
      uVar10 = FUN_140d5f250(uVar10,local_2c0,&local_360);
      FUN_1400b06b0(param_2,uVar10,0,0xffffffffffffffff);
      FUN_1400ae4f0(local_2c0);
      FUN_1400ae4f0(local_2e0);
      FUN_1400ae4f0(local_238);
      FUN_1400ae4f0(&local_320);
      FUN_1400ae4f0(local_58);
      FUN_1400ae4f0(local_1d8);
      FUN_1400ae4f0(local_1b8);
      FUN_1400ae4f0(local_198);
      FUN_1400ae4f0(local_178);
      FUN_1400ae4f0(&local_3a0);
      FUN_1400ae4f0(local_340);
      puVar18 = &local_360;
    }
    FUN_1400ae4f0(puVar18);
    if ((local_res20[0] != '\0') && (0 < iVar20)) {
      iVar19 = iVar20 / 1000;
      if (iVar20 != iVar19 * 1000) {
        iVar19 = (uint)(0 < iVar20) + iVar19;
      }
      FUN_140d5ebc0(local_78,(iVar19 * 1000) / 1000);
      uVar10 = FUN_140152450(local_98,"REINF_UNIT_SOL","AMOUNT");
      uVar10 = FUN_140d5f2e0(local_b8,&DAT_141066f10,uVar10);
      FUN_1400b06b0(param_2,uVar10,0,0xffffffffffffffff);
      FUN_1400ae4f0(local_b8);
      FUN_1400ae4f0(local_98);
      FUN_1400ae4f0(local_78);
    }
    if (0 < (int)plVar31[0x14]) {
      if ((plVar31[0xd] == 0) || (*(int *)(plVar31[0xd] + 8) == 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        plVar16 = plVar12;
        if (0 < (int)plVar31[0x14]) {
          plVar16 = (longlong *)FUN_140822200(DAT_1416e32d8,*(undefined4 *)plVar31[0x12]);
        }
        if (*(code **)(plVar16[2] + 0x30) == (code *)&LAB_140915c70) {
          lVar11 = plVar16[0x1e] + 0x10;
        }
        else {
          lVar11 = (**(code **)(plVar16[2] + 0x30))();
        }
        uVar10 = FUN_140ba1e70(plVar31,local_2fc,0);
        uVar10 = FUN_140622040(uVar10,local_280,0);
        uVar10 = FUN_140152080(local_1f8,"ESTIMATE_ARIVAL",&DAT_141071994,uVar10,&DAT_14107210c,
                               lVar11);
        uVar10 = FUN_140d5f2e0(local_218,&DAT_141066f10,uVar10);
        FUN_1400b06b0(param_2,uVar10,0,0xffffffffffffffff);
        FUN_1400ae4f0(local_218);
        FUN_1400ae4f0(local_1f8);
        FUN_1400ae4f0(local_280);
        FUN_140ba20a0(param_1,local_258,0);
        if (local_248 != 0) {
          uVar10 = FUN_140d5f2e0(local_280,&DAT_141066f10,local_258);
          FUN_1400b06b0(param_2,uVar10,0,0xffffffffffffffff);
          FUN_1400ae4f0(local_280);
        }
        FUN_1400ae4f0(local_258);
      }
    }
    lVar11 = *(longlong *)(DAT_1416e3260 + 0x3f0);
    if ((*(byte *)(lVar11 + 0x1e9) & 2) != 0) {
      if (param_1[0x2e] == 0) {
        lVar9 = FUN_1400d3090(param_1 + 0x2d);
        param_1[0x2c] = lVar9;
        param_1[0x2e] = lVar9;
        if (lVar9 == 0) {
          param_1[0x2e] = DAT_1416e2360;
        }
      }
      cVar3 = FUN_14025c000(lVar11,param_1[0x2e],0);
      if (cVar3 != '\0') {
        lVar9 = param_1[0x2e];
        if (lVar9 == 0) {
          lVar9 = FUN_140b96ae0(param_1);
        }
        if (*(longlong *)(lVar11 + 0x68) != 0) {
          plVar12 = (longlong *)FUN_140378f10(*(longlong *)(lVar11 + 0x68),lVar9);
        }
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x58))(plVar12,local_218);
          uVar10 = FUN_140152450(local_1f8,"ALLY_ORDER","ORDER");
          uVar10 = FUN_140d5f2e0(local_280,&DAT_141066f10,uVar10);
          FUN_1400b06b0(param_2,uVar10,0,0xffffffffffffffff);
          FUN_1400ae4f0(local_280);
          FUN_1400ae4f0(local_1f8);
          FUN_1400ae4f0(local_218);
        }
      }
    }
    FUN_1400ae4f0(local_380);
    lVar11 = local_2e8;
  } while( true );
}

