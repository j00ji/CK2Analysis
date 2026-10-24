
undefined8 FUN_14039e690(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  int iVar16;
  ulonglong uVar17;
  char *pcVar18;
  ulonglong uVar19;
  int iVar20;
  int local_res8 [2];
  undefined8 local_res10;
  int local_res18 [2];
  longlong local_res20;
  undefined1 local_3d8 [16];
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined1 local_3b8 [16];
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined1 local_398 [16];
  undefined8 local_388;
  undefined8 local_380;
  undefined1 local_378 [16];
  undefined8 local_368;
  undefined8 local_360;
  int local_358 [8];
  byte local_338;
  undefined7 uStack_337;
  undefined8 local_328;
  ulonglong local_320;
  undefined1 local_318;
  undefined7 uStack_317;
  undefined8 local_308;
  ulonglong local_300;
  undefined1 local_2f8;
  undefined7 uStack_2f7;
  undefined8 local_2e8;
  ulonglong local_2e0;
  undefined1 local_2d8;
  undefined7 uStack_2d7;
  undefined8 local_2c8;
  ulonglong local_2c0;
  undefined1 local_2b8;
  undefined7 uStack_2b7;
  undefined8 local_2a8;
  ulonglong local_2a0;
  undefined1 local_298;
  undefined7 uStack_297;
  undefined8 local_288;
  ulonglong local_280;
  undefined1 local_278;
  undefined7 uStack_277;
  undefined8 local_268;
  ulonglong local_260;
  char local_258 [32];
  undefined1 local_238;
  undefined7 uStack_237;
  undefined8 local_228;
  ulonglong local_220;
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined1 local_1f0 [32];
  undefined1 local_1d0 [32];
  longlong local_1b0;
  byte local_1a8;
  undefined7 uStack_1a7;
  undefined8 local_198;
  ulonglong local_190;
  undefined **local_188;
  undefined4 local_180;
  int local_178 [4];
  int local_168;
  int local_164;
  int local_160;
  undefined8 local_138;
  undefined8 local_128;
  undefined1 local_118 [56];
  undefined8 auStack_e0 [4];
  undefined4 auStack_c0 [4];
  undefined8 auStack_b0 [14];
  ulonglong uVar15;
  
  local_128 = 0xfffffffffffffffe;
  uVar19 = 0;
  iVar16 = 0;
  local_1f8 = 0;
  local_res10 = param_2;
  FUN_140698f70(param_2,"COMBATVIEW_TOTALTROOPS_FLANK");
  local_1f8 = 1;
  local_358[0] = 0;
  local_358[1] = 0;
  local_358[2] = 0;
  local_358[3] = 0;
  local_358[4] = 0;
  local_358[5] = 0;
  local_358[6] = 0;
  local_358[7] = 0;
  local_1b0 = (longlong)(int)(*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80) >> 3);
  local_res20 = 0;
  iVar20 = iVar16;
  if (0 < local_1b0) {
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x80) + local_res20 * 8);
      lVar1 = lVar4 + 0x98;
      local_180 = *(undefined4 *)(lVar4 + 0xa0);
      local_188 = &PTR_FUN_141065928;
      lVar7 = (lVar4 + 0xa8) - lVar1;
      uVar8 = *(undefined8 *)(lVar4 + 0xb0);
      *(undefined8 *)((longlong)auStack_e0 + lVar7 + -0xa8) = *(undefined8 *)(lVar4 + 0xa8);
      *(undefined8 *)((longlong)auStack_e0 + lVar7 + -0xa0) = uVar8;
      uVar8 = *(undefined8 *)(lVar4 + 0xc0);
      *(undefined8 *)((longlong)auStack_e0 + lVar7 + -0x98) = *(undefined8 *)(lVar4 + 0xb8);
      *(undefined8 *)((longlong)auStack_e0 + lVar7 + -0x90) = uVar8;
      lVar7 = (lVar4 + 200) - lVar1;
      uVar3 = *(undefined4 *)(lVar4 + 0xcc);
      uVar5 = *(undefined4 *)(lVar4 + 0xd0);
      uVar6 = *(undefined4 *)(lVar4 + 0xd4);
      *(undefined4 *)((longlong)auStack_c0 + lVar7 + -200) = *(undefined4 *)(lVar4 + 200);
      *(undefined4 *)((longlong)auStack_c0 + lVar7 + -0xc4) = uVar3;
      *(undefined4 *)((longlong)auStack_c0 + lVar7 + -0xc0) = uVar5;
      *(undefined4 *)((longlong)auStack_c0 + lVar7 + -0xbc) = uVar6;
      uVar8 = *(undefined8 *)(lVar4 + 0xe0);
      *(undefined8 *)((longlong)auStack_b0 + lVar7 + -200) = *(undefined8 *)(lVar4 + 0xd8);
      *(undefined8 *)((longlong)auStack_b0 + lVar7 + -0xc0) = uVar8;
      local_138 = *(undefined8 *)(lVar4 + 0xe8);
      uVar15 = uVar19;
      uVar17 = uVar19;
      do {
        if (0 < *(int *)((longlong)local_178 + uVar17)) {
          uVar3 = *(undefined4 *)(param_1 + 0xb4);
          local_res8[0] = 0;
          FUN_140a2d5d0(lVar4,local_118,local_res8);
          FUN_140847fd0(lVar1,local_res18,uVar15,local_res8[0],local_118,uVar3);
          *(int *)((longlong)local_358 + uVar17) =
               *(int *)((longlong)local_358 + uVar17) + local_res18[0];
        }
        uVar13 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar13;
        uVar17 = uVar17 + 4;
      } while ((int)uVar13 < 8);
      local_res20 = local_res20 + 1;
    } while (local_res20 < local_1b0);
    iVar16 = (int)local_358._0_8_;
    iVar20 = (int)local_358._8_8_;
  }
  iVar14 = local_358[1] + iVar16 + iVar20 + local_358[3] + local_358[4] + local_358[5] +
           local_358[6] + local_358[7];
  FUN_14039cbf0(param_1,&local_188);
  uVar8 = local_res10;
  if (local_178[0] != 0) {
    local_3c0 = 0xf;
    local_3c8 = 0;
    local_3d8[0] = 0;
    FUN_1400b0300(local_3d8,&DAT_14108f9f8,4);
    local_360 = 0xf;
    local_368 = 0;
    local_378[0] = 0;
    FUN_1400b0300(local_378,&DAT_141071bdc,4);
    local_380 = 0xf;
    local_388 = 0;
    local_398[0] = 0;
    FUN_1400b0300(local_398,&DAT_14107a018,3);
    local_3a0 = 0xf;
    local_3a8 = 0;
    local_3b8[0] = 0;
    FUN_1400b0300(local_3b8,&DAT_141061630);
    local_200 = 0xf;
    local_208 = 0;
    local_218[0] = 0;
    pcVar18 = local_258;
    if (iVar16 < 0) {
      local_258[0] = '-';
      pcVar18 = local_258 + 1;
      iVar16 = -iVar16;
    }
    FUN_140d5e4a0(iVar16 / 1000,pcVar18);
    cVar2 = *pcVar18;
    while (cVar2 != '\0') {
      pcVar18 = pcVar18 + 1;
      cVar2 = *pcVar18;
    }
    FUN_140d5e4a0(iVar16 % 1000 + 1000,pcVar18);
    *pcVar18 = '.';
    pcVar18[2] = '\0';
    if (local_258[0] != '\0') {
      uVar15 = 0xffffffffffffffff;
      do {
        uVar19 = uVar15 + 1;
        lVar1 = uVar15 + 1;
        uVar15 = uVar19;
      } while (local_258[lVar1] != '\0');
    }
    FUN_1400b0300(local_218,local_258,uVar19);
    uVar8 = FUN_140698f70(local_1d0,"DEFENCE");
    iVar16 = local_178[0] / 1000;
    if (local_178[0] != iVar16 * 1000) {
      iVar16 = (uint)(0 < local_178[0]) + iVar16;
    }
    uVar9 = FUN_140c668e0(local_1f0,(iVar16 * 1000) / 1000,&DAT_141070b84,&DAT_141067474);
    uVar10 = FUN_140698f70(&local_278,"LIGHT_INFANTRY");
    uVar10 = FUN_140d5f2e0(&local_298,&DAT_141066f10,uVar10);
    uVar10 = FUN_140d5f250(uVar10,&local_2b8,local_3b8);
    uVar9 = FUN_140d5f250(uVar10,&local_2d8,uVar9);
    uVar9 = FUN_140d5f250(uVar9,&local_2f8,local_398);
    uVar8 = FUN_140d5f250(uVar9,&local_318,uVar8);
    uVar8 = FUN_140d5f250(uVar8,&local_238,local_378);
    uVar8 = FUN_140d5f250(uVar8,&local_338,local_218);
    uVar9 = FUN_140d5f250(uVar8,&local_1a8,local_3d8);
    uVar8 = local_res10;
    FUN_1400b06b0(local_res10,uVar9,0,0xffffffffffffffff);
    if (0xf < local_190) {
      uVar15 = CONCAT71(uStack_1a7,local_1a8);
      uVar19 = uVar15;
      if (0xfff < local_190 + 1) {
        if ((local_1a8 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
        uVar19 = *(ulonglong *)(uVar15 - 8);
        if (uVar15 <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
        if (uVar15 - uVar19 < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
        if (0x27 < uVar15 - uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
      }
      FUN_140e1c5e4(uVar19);
    }
    local_190 = 0xf;
    local_198 = 0;
    local_1a8 = 0;
    if (0xf < local_320) {
      uVar15 = CONCAT71(uStack_337,local_338);
      uVar19 = uVar15;
      if (0xfff < local_320 + 1) {
        if ((local_338 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
        uVar19 = *(ulonglong *)(uVar15 - 8);
        if (uVar15 <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
        if (uVar15 - uVar19 < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
        if (0x27 < uVar15 - uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
      }
      FUN_140e1c5e4(uVar19);
    }
    local_320 = 0xf;
    local_328 = 0;
    local_338 = 0;
    if (0xf < local_220) {
      FUN_1400ad750(CONCAT71(uStack_237,local_238),local_220 + 1,1);
    }
    local_220 = 0xf;
    local_228 = 0;
    local_238 = 0;
    if (0xf < local_300) {
      FUN_1400b08c0(&local_318,CONCAT71(uStack_317,local_318),local_300 + 1);
    }
    local_300 = 0xf;
    local_308 = 0;
    local_318 = 0;
    if (0xf < local_2e0) {
      FUN_1400b08c0(&local_2f8,CONCAT71(uStack_2f7,local_2f8),local_2e0 + 1);
    }
    local_2e0 = 0xf;
    local_2e8 = 0;
    local_2f8 = 0;
    if (0xf < local_2c0) {
      FUN_1400b08c0(&local_2d8,CONCAT71(uStack_2d7,local_2d8),local_2c0 + 1);
    }
    local_2c0 = 0xf;
    local_2c8 = 0;
    local_2d8 = 0;
    if (0xf < local_2a0) {
      FUN_1400b08c0(&local_2b8,CONCAT71(uStack_2b7,local_2b8),local_2a0 + 1);
    }
    local_2a0 = 0xf;
    local_2a8 = 0;
    local_2b8 = 0;
    if (0xf < local_280) {
      FUN_1400b08c0(&local_298,CONCAT71(uStack_297,local_298),local_280 + 1);
    }
    local_280 = 0xf;
    local_288 = 0;
    local_298 = 0;
    if (0xf < local_260) {
      FUN_1400b08c0(&local_278,CONCAT71(uStack_277,local_278),local_260 + 1);
    }
    local_260 = 0xf;
    local_268 = 0;
    local_278 = 0;
    FUN_1400ae4f0(local_1f0);
    FUN_1400ae4f0(local_1d0);
    FUN_1400ae4f0(local_218);
    FUN_1400ae4f0(local_3b8);
    FUN_1400ae4f0(local_398);
    FUN_1400ae4f0(local_378);
    FUN_1400ae4f0(local_3d8);
    iVar20 = (int)local_358._8_8_;
  }
  if (local_178[1] != 0) {
    local_3a0 = 0xf;
    local_3a8 = 0;
    local_3b8[0] = 0;
    FUN_1400b0300(local_3b8,&DAT_14108f9f8,4);
    local_380 = 0xf;
    local_388 = 0;
    local_398[0] = 0;
    FUN_1400b0300(local_398,&DAT_141071bdc,4);
    local_360 = 0xf;
    local_368 = 0;
    local_378[0] = 0;
    FUN_1400b0300(local_378,&DAT_14107a018,3);
    local_3c0 = 0xf;
    local_3c8 = 0;
    local_3d8[0] = 0;
    FUN_1400b0300(local_3d8,&DAT_141061630,2);
    local_res8[0] = local_358[1];
    uVar9 = FUN_140d5ede0(&local_338,local_res8,1);
    uVar10 = FUN_140698f70(&local_318,"DEFENCE");
    iVar16 = local_178[1] / 1000;
    if (local_178[1] != iVar16 * 1000) {
      iVar16 = (uint)(0 < local_178[1]) + iVar16;
    }
    uVar11 = FUN_140c668e0(&local_2f8,(iVar16 * 1000) / 1000,&DAT_141070b84,&DAT_141067474);
    uVar12 = FUN_140698f70(&local_2d8,"HEAVY_INFANTRY");
    uVar12 = FUN_140d5f2e0(&local_2b8,&DAT_141066f10,uVar12);
    uVar12 = FUN_140d5f250(uVar12,&local_298,local_3d8);
    uVar11 = FUN_140d5f250(uVar12,&local_278,uVar11);
    uVar11 = FUN_140d5f250(uVar11,local_258,local_378);
    uVar10 = FUN_140d5f250(uVar11,&local_238,uVar10);
    uVar10 = FUN_140d5f250(uVar10,local_218,local_398);
    uVar9 = FUN_140d5f250(uVar10,local_1f0,uVar9);
    uVar9 = FUN_140d5f250(uVar9,local_1d0,local_3b8);
    FUN_1400b06b0(uVar8,uVar9,0,0xffffffffffffffff);
    FUN_1400ae4f0(local_1d0);
    FUN_1400ae4f0(local_1f0);
    FUN_1400ae4f0(local_218);
    FUN_1400ae4f0(&local_238);
    FUN_1400ae4f0(local_258);
    FUN_1400ae4f0(&local_278);
    FUN_1400ae4f0(&local_298);
    FUN_1400ae4f0(&local_2b8);
    FUN_1400ae4f0(&local_2d8);
    FUN_1400ae4f0(&local_2f8);
    FUN_1400ae4f0(&local_318);
    FUN_1400ae4f0(&local_338);
    FUN_1400ae4f0(local_3d8);
    FUN_1400ae4f0(local_378);
    FUN_1400ae4f0(local_398);
    FUN_1400ae4f0(local_3b8);
  }
  if (local_178[2] != 0) {
    local_3a0 = 0xf;
    local_3a8 = 0;
    local_3b8[0] = 0;
    FUN_1400b0300(local_3b8,&DAT_14108f9f8,4);
    local_380 = 0xf;
    local_388 = 0;
    local_398[0] = 0;
    FUN_1400b0300(local_398,&DAT_141071bdc,4);
    local_360 = 0xf;
    local_368 = 0;
    local_378[0] = 0;
    FUN_1400b0300(local_378,&DAT_14107a018,3);
    local_3c0 = 0xf;
    local_3c8 = 0;
    local_3d8[0] = 0;
    FUN_1400b0300(local_3d8,&DAT_141061630,2);
    local_res8[0] = iVar20;
    uVar9 = FUN_140d5ede0(&local_338,local_res8,1);
    uVar10 = FUN_140698f70(&local_318,"DEFENCE");
    iVar16 = local_178[2] / 1000;
    if (local_178[2] != iVar16 * 1000) {
      iVar16 = (uint)(0 < local_178[2]) + iVar16;
    }
    uVar11 = FUN_140c668e0(&local_2f8,(iVar16 * 1000) / 1000,&DAT_141070b84,&DAT_141067474);
    uVar12 = FUN_140698f70(&local_2d8,"PIKEMEN");
    uVar12 = FUN_140d5f2e0(&local_2b8,&DAT_141066f10,uVar12);
    uVar12 = FUN_140d5f250(uVar12,&local_298,local_3d8);
    uVar11 = FUN_140d5f250(uVar12,&local_278,uVar11);
    uVar11 = FUN_140d5f250(uVar11,local_258,local_378);
    uVar10 = FUN_140d5f250(uVar11,&local_238,uVar10);
    uVar10 = FUN_140d5f250(uVar10,local_218,local_398);
    uVar9 = FUN_140d5f250(uVar10,local_1f0,uVar9);
    uVar9 = FUN_140d5f250(uVar9,local_1d0,local_3b8);
    FUN_1400b06b0(uVar8,uVar9,0,0xffffffffffffffff);
    FUN_1400ae4f0(local_1d0);
    FUN_1400ae4f0(local_1f0);
    FUN_1400ae4f0(local_218);
    FUN_1400ae4f0(&local_238);
    FUN_1400ae4f0(local_258);
    FUN_1400ae4f0(&local_278);
    FUN_1400ae4f0(&local_298);
    FUN_1400ae4f0(&local_2b8);
    FUN_1400ae4f0(&local_2d8);
    FUN_1400ae4f0(&local_2f8);
    FUN_1400ae4f0(&local_318);
    FUN_1400ae4f0(&local_338);
    FUN_1400ae4f0(local_3d8);
    FUN_1400ae4f0(local_378);
    FUN_1400ae4f0(local_398);
    FUN_1400ae4f0(local_3b8);
  }
  if (local_178[3] != 0) {
    local_3a0 = 0xf;
    local_3a8 = 0;
    local_3b8[0] = 0;
    FUN_1400b0300(local_3b8,&DAT_14108f9f8,4);
    local_380 = 0xf;
    local_388 = 0;
    local_398[0] = 0;
    FUN_1400b0300(local_398,&DAT_141071bdc,4);
    local_368 = 0;
    local_360 = 0;
    FUN_1400b0200(local_378,0,0);
    FUN_1400b0300(local_378,&DAT_14107a018,3);
    local_3c8 = 0;
    local_3c0 = 0;
    FUN_1400b0200(local_3d8,0,0);
    FUN_1400b0300(local_3d8,&DAT_141061630,2);
    local_res8[0] = local_358[3];
    uVar9 = FUN_140d5ede0(&local_338,local_res8,1);
    uVar10 = FUN_140698f70(&local_318,"DEFENCE");
    iVar16 = local_178[3] / 1000;
    if (local_178[3] != iVar16 * 1000) {
      iVar16 = (uint)(0 < local_178[3]) + iVar16;
    }
    uVar11 = FUN_140c668e0(&local_2f8,(iVar16 * 1000) / 1000,&DAT_141070b84,&DAT_141067474);
    uVar12 = FUN_140698f70(&local_2d8,"LIGHT_CAVALRY");
    uVar12 = FUN_140d5f2e0(&local_2b8,&DAT_141066f10,uVar12);
    uVar12 = FUN_140d5f250(uVar12,&local_298,local_3d8);
    uVar11 = FUN_140d5f250(uVar12,&local_278,uVar11);
    uVar11 = FUN_140d5f250(uVar11,local_258,local_378);
    uVar10 = FUN_140d5f250(uVar11,&local_238,uVar10);
    uVar10 = FUN_140d5f250(uVar10,local_218,local_398);
    uVar9 = FUN_140d5f250(uVar10,local_1f0,uVar9);
    uVar9 = FUN_140d5f250(uVar9,local_1d0,local_3b8);
    FUN_1400b06b0(uVar8,uVar9,0,0xffffffffffffffff);
    FUN_1400ae4f0(local_1d0);
    FUN_1400ae4f0(local_1f0);
    FUN_1400ae4f0(local_218);
    FUN_1400ae4f0(&local_238);
    FUN_1400ae4f0(local_258);
    FUN_1400ae4f0(&local_278);
    FUN_1400ae4f0(&local_298);
    FUN_1400ae4f0(&local_2b8);
    FUN_1400ae4f0(&local_2d8);
    FUN_1400ae4f0(&local_2f8);
    FUN_1400ae4f0(&local_318);
    FUN_1400ae4f0(&local_338);
    FUN_1400ae4f0(local_3d8);
    FUN_1400ae4f0(local_378);
    FUN_1400ae4f0(local_398);
    FUN_1400ae4f0(local_3b8);
  }
  if (local_168 != 0) {
    local_3a8 = 0;
    local_3a0 = 0;
    FUN_1400b0200(local_3b8,0,0);
    FUN_1400b0300(local_3b8,&DAT_14108f9f8,4);
    local_388 = 0;
    local_380 = 0;
    FUN_1400b0200(local_398,0,0);
    FUN_1400b0300(local_398,&DAT_141071bdc,4);
    local_368 = 0;
    local_360 = 0;
    FUN_1400b0200(local_378,0,0);
    FUN_1400b0300(local_378,&DAT_14107a018,3);
    local_3c8 = 0;
    local_3c0 = 0;
    FUN_1400b0200(local_3d8,0,0);
    FUN_1400b0300(local_3d8,&DAT_141061630,2);
    local_res8[0] = (int)local_358._16_8_;
    uVar9 = FUN_140d5ede0(&local_338,local_res8,1);
    uVar10 = FUN_140698f70(&local_318,"DEFENCE");
    iVar16 = local_168 / 1000;
    if (local_168 != iVar16 * 1000) {
      iVar16 = (uint)(0 < local_168) + iVar16;
    }
    uVar11 = FUN_140c668e0(&local_2f8,(iVar16 * 1000) / 1000,&DAT_141070b84,&DAT_141067474);
    uVar12 = FUN_140698f70(&local_2d8,"KNIGHTS");
    uVar12 = FUN_140d5f2e0(&local_2b8,&DAT_141066f10,uVar12);
    uVar12 = FUN_140d5f250(uVar12,&local_298,local_3d8);
    uVar11 = FUN_140d5f250(uVar12,&local_278,uVar11);
    uVar11 = FUN_140d5f250(uVar11,local_258,local_378);
    uVar10 = FUN_140d5f250(uVar11,&local_238,uVar10);
    uVar10 = FUN_140d5f250(uVar10,local_218,local_398);
    uVar9 = FUN_140d5f250(uVar10,local_1f0,uVar9);
    uVar9 = FUN_140d5f250(uVar9,local_1d0,local_3b8);
    FUN_1400b06b0(uVar8,uVar9,0,0xffffffffffffffff);
    FUN_1400ae4f0(local_1d0);
    FUN_1400ae4f0(local_1f0);
    FUN_1400ae4f0(local_218);
    FUN_1400ae4f0(&local_238);
    FUN_1400ae4f0(local_258);
    FUN_1400ae4f0(&local_278);
    FUN_1400ae4f0(&local_298);
    FUN_1400ae4f0(&local_2b8);
    FUN_1400ae4f0(&local_2d8);
    FUN_1400ae4f0(&local_2f8);
    FUN_1400ae4f0(&local_318);
    FUN_1400ae4f0(&local_338);
    FUN_1400ae4f0(local_3d8);
    FUN_1400ae4f0(local_378);
    FUN_1400ae4f0(local_398);
    FUN_1400ae4f0(local_3b8);
  }
  if (local_164 != 0) {
    local_3a8 = 0;
    local_3a0 = 0;
    FUN_1400b0200(local_3b8,0,0);
    FUN_1400b0300(local_3b8,&DAT_14108f9f8,4);
    local_388 = 0;
    local_380 = 0;
    FUN_1400b0200(local_398,0,0);
    FUN_1400b0300(local_398,&DAT_141071bdc,4);
    local_368 = 0;
    local_360 = 0;
    FUN_1400b0200(local_378,0,0);
    FUN_1400b0300(local_378,&DAT_14107a018,3);
    local_3c8 = 0;
    local_3c0 = 0;
    FUN_1400b0200(local_3d8,0,0);
    FUN_1400b0300(local_3d8,&DAT_141061630,2);
    local_res8[0] = local_358[5];
    uVar9 = FUN_140d5ede0(&local_338,local_res8,1);
    uVar10 = FUN_140698f70(&local_318,"DEFENCE");
    iVar16 = local_164 / 1000;
    if (local_164 != iVar16 * 1000) {
      iVar16 = (uint)(0 < local_164) + iVar16;
    }
    uVar11 = FUN_140c668e0(&local_2f8,(iVar16 * 1000) / 1000,&DAT_141070b84,&DAT_141067474);
    uVar12 = FUN_140698f70(&local_2d8,"ARCHERS");
    uVar12 = FUN_140d5f2e0(&local_2b8,&DAT_141066f10,uVar12);
    uVar12 = FUN_140d5f250(uVar12,&local_298,local_3d8);
    uVar11 = FUN_140d5f250(uVar12,&local_278,uVar11);
    uVar11 = FUN_140d5f250(uVar11,local_258,local_378);
    uVar10 = FUN_140d5f250(uVar11,&local_238,uVar10);
    uVar10 = FUN_140d5f250(uVar10,local_218,local_398);
    uVar9 = FUN_140d5f250(uVar10,local_1f0,uVar9);
    uVar9 = FUN_140d5f250(uVar9,local_1d0,local_3b8);
    FUN_1400b06b0(uVar8,uVar9,0,0xffffffffffffffff);
    FUN_1400ae4f0(local_1d0);
    FUN_1400ae4f0(local_1f0);
    FUN_1400ae4f0(local_218);
    FUN_1400ae4f0(&local_238);
    FUN_1400ae4f0(local_258);
    FUN_1400ae4f0(&local_278);
    FUN_1400ae4f0(&local_298);
    FUN_1400ae4f0(&local_2b8);
    FUN_1400ae4f0(&local_2d8);
    FUN_1400ae4f0(&local_2f8);
    FUN_1400ae4f0(&local_318);
    FUN_1400ae4f0(&local_338);
    FUN_1400ae4f0(local_3d8);
    FUN_1400ae4f0(local_378);
    FUN_1400ae4f0(local_398);
    FUN_1400ae4f0(local_3b8);
  }
  if (local_160 != 0) {
    local_3a8 = 0;
    local_3a0 = 0;
    FUN_1400b0200(local_3b8,0,0);
    FUN_1400b0300(local_3b8,&DAT_14108f9f8,4);
    local_388 = 0;
    local_380 = 0;
    FUN_1400b0200(local_398,0,0);
    FUN_1400b0300(local_398,&DAT_141071bdc,4);
    local_368 = 0;
    local_360 = 0;
    FUN_1400b0200(local_378,0,0);
    FUN_1400b0300(local_378,&DAT_14107a018,3);
    local_3c8 = 0;
    local_3c0 = 0;
    FUN_1400b0200(local_3d8,0,0);
    FUN_1400b0300(local_3d8,&DAT_141061630,2);
    local_res8[0] = (int)local_358._24_8_;
    uVar9 = FUN_140d5ede0(&local_338,local_res8,1);
    uVar10 = FUN_140698f70(&local_318,"DEFENCE");
    iVar16 = local_160 / 1000;
    if (local_160 != iVar16 * 1000) {
      iVar16 = (uint)(0 < local_160) + iVar16;
    }
    uVar11 = FUN_140c668e0(&local_2f8,(iVar16 * 1000) / 1000,&DAT_141070b84,&DAT_141067474);
    uVar12 = FUN_140698f70(&local_2d8,"SPECIAL_TROOPS");
    uVar12 = FUN_140d5f2e0(&local_2b8,&DAT_141066f10,uVar12);
    uVar12 = FUN_140d5f250(uVar12,&local_298,local_3d8);
    uVar11 = FUN_140d5f250(uVar12,&local_278,uVar11);
    uVar11 = FUN_140d5f250(uVar11,local_258,local_378);
    uVar10 = FUN_140d5f250(uVar11,&local_238,uVar10);
    uVar10 = FUN_140d5f250(uVar10,local_218,local_398);
    uVar9 = FUN_140d5f250(uVar10,local_1f0,uVar9);
    uVar9 = FUN_140d5f250(uVar9,local_1d0,local_3b8);
    FUN_1400b06b0(uVar8,uVar9,0,0xffffffffffffffff);
    FUN_1400ae4f0(local_1d0);
    FUN_1400ae4f0(local_1f0);
    FUN_1400ae4f0(local_218);
    FUN_1400ae4f0(&local_238);
    FUN_1400ae4f0(local_258);
    FUN_1400ae4f0(&local_278);
    FUN_1400ae4f0(&local_298);
    FUN_1400ae4f0(&local_2b8);
    FUN_1400ae4f0(&local_2d8);
    FUN_1400ae4f0(&local_2f8);
    FUN_1400ae4f0(&local_318);
    FUN_1400ae4f0(&local_338);
    FUN_1400ae4f0(local_3d8);
    FUN_1400ae4f0(local_378);
    FUN_1400ae4f0(local_398);
    FUN_1400ae4f0(local_3b8);
  }
  local_res8[0] = iVar14;
  uVar9 = FUN_140d5ede0(local_3d8,local_res8,1);
  uVar9 = FUN_140152450(local_1f0,"TOTAL_DEFENCE",&DAT_14108fa00,uVar9);
  uVar9 = FUN_140d5f2e0(local_1d0,&DAT_141067448,uVar9);
  FUN_1400b06b0(uVar8,uVar9,0,0xffffffffffffffff);
  FUN_1400ae4f0(local_1d0);
  FUN_1400ae4f0(local_1f0);
  FUN_1400ae4f0(local_3d8);
  return uVar8;
}

