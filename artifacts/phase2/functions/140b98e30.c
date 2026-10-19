
void FUN_140b98e30(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined4 uVar11;
  longlong *local_3d8;
  longlong *plStack_3d0;
  longlong local_3c8;
  undefined1 local_3c0;
  undefined7 uStack_3bf;
  undefined8 local_3b0;
  ulonglong local_3a8;
  byte local_3a0;
  undefined7 uStack_39f;
  undefined8 local_390;
  ulonglong local_388;
  undefined **local_378;
  undefined4 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined4 local_338;
  longlong local_330;
  longlong local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined ***local_2c8;
  undefined ***local_2c0;
  undefined ***local_2b8;
  undefined4 local_2b0;
  undefined8 local_2ac;
  undefined2 local_2a4;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  longlong *local_268;
  undefined **local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined4 local_218;
  longlong local_210;
  longlong local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  longlong *plStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined ***local_1a8;
  undefined ***local_1a0;
  undefined ***local_198;
  undefined4 local_190;
  undefined8 local_18c;
  undefined2 local_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined **local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined ***local_98;
  undefined ***local_90;
  undefined ***local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined2 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar6 = param_1[0x10];
  if (lVar6 != 0) {
    for (plVar10 = *(longlong **)(lVar6 + 0xcc0); plVar10 != (longlong *)0x0;
        plVar10 = (longlong *)plVar10[2]) {
      if ((longlong *)*plVar10 == param_1) {
        if (plVar10 != (longlong *)0x0) {
          FUN_1409382e0(lVar6,param_1);
        }
        break;
      }
    }
  }
  param_1[0x10] = param_2;
  if (param_2 != 0) {
    FUN_140937f10(param_2,param_1);
  }
  cVar1 = *(char *)(DAT_1416e3260 + 0x62a);
  cVar5 = (**(code **)(*param_1 + 0x70))(param_1);
  if (cVar5 == '\0') {
    cVar5 = (**(code **)(*param_1 + 0x68))(param_1);
    if (cVar5 != '\0') {
      lVar6 = (**(code **)(*param_1 + 0x50))(param_1);
      *(undefined8 *)(lVar6 + 0x238) = 0;
    }
  }
  else {
    if ((((cVar1 != '\0') && (param_2 != 0)) &&
        ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0xd48) + 0x498) + 0x1e9) & 2) != 0)) &&
       (*(longlong *)(param_2 + 0xd68) != 0)) {
      local_140 = 0x18e;
      local_138 = 0;
      local_130 = 0xffffffffffffffff;
      local_128 = DAT_1416e3250;
      local_120 = DAT_1416e3248;
      local_118 = 0xffffffffffffffff;
      local_110 = 0xffffffffffffffff;
      local_108 = 0xffffffff;
      local_148 = &PTR_FUN_1410655c8;
      local_100 = DAT_1416e3238;
      local_f8 = DAT_1416e3238;
      local_f0 = DAT_1416e3228;
      local_e8 = DAT_1416e3228;
      local_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = DAT_1416e3230;
      local_a0 = 0;
      local_98 = &local_148;
      local_90 = &local_148;
      local_88 = &local_148;
      local_7c = 0;
      local_74 = 1;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_80 = 0;
      local_250 = 0x18e;
      local_248 = 0;
      local_240 = 0xffffffffffffffff;
      local_238 = DAT_1416e3250;
      local_230 = DAT_1416e3248;
      local_228 = 0xffffffffffffffff;
      local_220 = 0xffffffffffffffff;
      local_218 = 0xffffffff;
      local_258 = &PTR_FUN_1410655c8;
      local_210 = DAT_1416e3238;
      local_208 = DAT_1416e3238;
      local_200 = DAT_1416e3228;
      local_1f8 = DAT_1416e3228;
      local_1f0 = 0;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      plStack_1c0 = (longlong *)0x0;
      local_1b8 = DAT_1416e3230;
      local_1b0 = 0;
      local_1a8 = &local_258;
      local_1a0 = &local_258;
      local_198 = &local_258;
      local_18c = 0;
      local_184 = 1;
      local_180 = 0;
      local_178 = 0;
      local_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_158 = 0;
      local_190 = 0;
      if (param_1[0x2e] == 0) {
        lVar6 = FUN_1400d3090(param_1 + 0x2d);
        param_1[0x2c] = lVar6;
        param_1[0x2e] = lVar6;
        if (lVar6 == 0) {
          param_1[0x2e] = DAT_1416e2360;
        }
      }
      lVar6 = param_1[0x2e];
      if ((lVar6 != local_100) || ((*(byte *)(lVar6 + 0x1e9) & 2) == 0)) {
        (*(code *)local_148[7])(&local_148);
        local_100 = lVar6;
        if (lVar6 == 0) {
          local_100 = DAT_1416e3238;
        }
        if ((*(byte *)(local_100 + 0x1e9) & 2) != 0) {
          LOCK();
          *(int *)(local_100 + 0x1c0) = *(int *)(local_100 + 0x1c0) + 1;
          UNLOCK();
        }
      }
      local_1a0 = &local_148;
      (*(code *)local_258[7])(&local_258);
      local_3a8 = 0xf;
      local_3b0 = 0;
      local_3c0 = 0;
      plStack_1c0 = param_1;
      FUN_1400b0300(&local_3c0,"on_entering_port",0x10);
      uVar7 = FUN_1408b4ea0();
      lVar6 = FUN_1401abd60(uVar7,&local_3c0);
      if (lVar6 != 0) {
        FUN_1408b3220(lVar6,&local_258);
      }
      if (0xf < local_3a8) {
        FUN_1400b08c0(&local_3c0,CONCAT71(uStack_3bf,local_3c0),local_3a8 + 1);
      }
      FUN_1406d3280(&local_258);
      FUN_1406d3280(&local_148);
    }
    lVar6 = (**(code **)(*param_1 + 0x60))(param_1);
    puVar2 = *(undefined8 **)(lVar6 + 0x230);
    while (puVar2 != (undefined8 *)0x0) {
      uVar7 = *puVar2;
      puVar2 = (undefined8 *)puVar2[2];
      if ((*(char *)(*(longlong *)(param_2 + 0xf0) + 100) == '\0') || (0 < (int)param_1[0x14])) {
        FUN_140b98e30(uVar7,param_2);
      }
      else {
        uVar8 = (**(code **)(*param_1 + 0x60))(param_1);
        FUN_140ba7d10(uVar8,uVar7);
        FUN_140b98e30(uVar7,param_2);
        FUN_1403bc0c0(DAT_1416e3260 + 0x230,uVar7,param_1[0x10]);
      }
    }
  }
  if (cVar1 != '\0') {
    local_3d8 = (longlong *)0x0;
    plStack_3d0 = (longlong *)0x0;
    local_3c8 = 0;
    FUN_140ba5f50(param_1,&local_3d8);
    local_370 = 0x18e;
    local_368 = 0;
    local_360 = 0xffffffffffffffff;
    local_358 = DAT_1416e3250;
    local_350 = DAT_1416e3248;
    local_348 = 0xffffffffffffffff;
    local_340 = 0xffffffffffffffff;
    local_338 = 0xffffffff;
    local_378 = &PTR_FUN_1410655c8;
    local_330 = DAT_1416e3238;
    local_328 = DAT_1416e3238;
    local_320 = DAT_1416e3228;
    local_318 = DAT_1416e3228;
    local_310 = 0;
    local_308 = 0;
    uStack_300 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    local_2d8 = DAT_1416e3230;
    local_2d0 = 0;
    local_2c8 = &local_378;
    local_2c0 = &local_378;
    local_2b8 = &local_378;
    local_2ac = 0;
    local_2a4 = 1;
    local_2a0 = 0;
    local_298 = 0;
    local_290 = 0;
    local_288 = 0;
    uStack_280 = 0;
    local_278 = 0;
    local_2b0 = 0;
    uVar7 = FUN_1408b4ea0();
    plVar4 = plStack_3d0;
    for (plVar10 = local_3d8; local_268 = plVar10, plVar10 != plVar4; plVar10 = plVar10 + 1) {
      lVar6 = *plVar10;
      if ((lVar6 != local_330) || ((*(byte *)(lVar6 + 0x1e9) & 2) == 0)) {
        (*(code *)local_378[7])(&local_378);
        local_330 = lVar6;
        if (lVar6 == 0) {
          local_330 = DAT_1416e3238;
        }
        if ((*(byte *)(local_330 + 0x1e9) & 2) != 0) {
          LOCK();
          *(int *)(local_330 + 0x1c0) = *(int *)(local_330 + 0x1c0) + 1;
          UNLOCK();
          plVar10 = local_268;
        }
      }
      local_2b0 = FUN_140c4a7f0();
      local_2ac = CONCAT44(local_2b0,local_2b0);
      local_388 = 0xf;
      local_390 = 0;
      local_3a0 = 0;
      FUN_1400b0300(&local_3a0,"on_unit_entering_province",0x19);
      lVar6 = FUN_1401abd60(uVar7,&local_3a0);
      if (lVar6 != 0) {
        FUN_1408b3220(lVar6,&local_378);
      }
      if (0xf < local_388) {
        uVar3 = CONCAT71(uStack_39f,local_3a0);
        uVar9 = uVar3;
        if (0xfff < local_388 + 1) {
          if ((local_3a0 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_140e3f0ac();
          }
          uVar9 = *(ulonglong *)(uVar3 - 8);
          if (uVar3 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_140e3f0ac();
          }
          if (uVar3 - uVar9 < 8) {
                    /* WARNING: Subroutine does not return */
            FUN_140e3f0ac();
          }
          if (0x27 < uVar3 - uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_140e3f0ac();
          }
        }
        FUN_140e1c5e4(uVar9);
      }
    }
    uVar11 = FUN_1406d3280(&local_378);
    if (local_3d8 != (longlong *)0x0) {
      FUN_1400b09e0(uVar11,local_3d8,local_3c8 - (longlong)local_3d8 >> 3);
    }
  }
  *(int *)((longlong)param_1 + 0x1e4) = *(int *)((longlong)param_1 + 0x1e4) + 1;
  return;
}

