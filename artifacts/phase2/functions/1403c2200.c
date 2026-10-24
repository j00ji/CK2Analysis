
/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

ulonglong * FUN_1403c2200(longlong param_1,ulonglong *param_2,longlong *param_3)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 uVar9;
  longlong lVar10;
  int *piVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined **ppuVar21;
  bool bVar22;
  int local_res20 [2];
  undefined8 uStack_cf0;
  undefined1 auStack_ce8 [32];
  undefined8 local_cc8;
  undefined8 local_cc0;
  undefined1 local_cb8;
  undefined4 local_cb0;
  uint local_ca8 [2];
  undefined1 local_ca0 [16];
  undefined8 local_c90;
  undefined8 local_c88;
  undefined1 local_c78 [16];
  undefined8 local_c68;
  undefined8 local_c60;
  undefined1 local_c58 [16];
  undefined8 local_c48;
  undefined8 local_c40;
  undefined **local_c38;
  undefined1 local_c30 [16];
  undefined8 local_c20;
  undefined8 local_c18;
  undefined1 local_c10 [16];
  undefined8 local_c00;
  undefined8 local_bf8;
  longlong local_bf0;
  undefined **local_be8;
  undefined1 local_be0 [16];
  undefined8 local_bd0;
  undefined8 local_bc8;
  undefined1 local_bc0 [16];
  undefined8 local_bb0;
  undefined8 local_ba8;
  undefined1 local_ba0 [16];
  undefined8 local_b90;
  undefined8 local_b88;
  undefined1 local_b80 [16];
  undefined8 local_b70;
  undefined8 local_b68;
  undefined1 local_b60 [16];
  undefined8 local_b50;
  undefined8 local_b48;
  undefined1 local_b40 [16];
  undefined8 local_b30;
  undefined8 local_b28;
  undefined1 local_b20 [16];
  undefined8 local_b10;
  undefined8 local_b08;
  undefined **local_af8;
  undefined4 local_af0;
  undefined8 local_ae8;
  undefined8 local_ae0;
  undefined8 local_ad8;
  undefined8 local_ad0;
  undefined8 local_ac8;
  undefined8 local_ac0;
  undefined4 local_ab8;
  undefined8 local_ab0;
  undefined8 local_aa8;
  undefined8 local_aa0;
  undefined8 local_a98;
  undefined8 local_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  longlong local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined4 local_a50;
  undefined ***local_a48;
  undefined ***local_a40;
  undefined ***local_a38;
  undefined4 local_a30;
  undefined8 local_a2c;
  undefined2 local_a24;
  undefined8 local_a20;
  undefined8 local_a18;
  undefined8 local_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 local_9e8;
  ulonglong local_9d8 [2];
  ulonglong local_9c8;
  ulonglong local_9c0;
  ulonglong local_9b8 [2];
  ulonglong local_9a8;
  ulonglong local_9a0;
  undefined2 local_998;
  undefined1 local_990 [1136];
  undefined4 local_520;
  undefined1 local_51c;
  undefined1 local_508 [1224];
  
  local_9e8 = 0xfffffffffffffffe;
  uVar15 = 0;
  local_ca8[0] = 0;
  local_9c0 = 0xf;
  local_9c8 = 0;
  local_9d8[0] = local_9d8[0] & 0xffffffffffffff00;
  local_9a0 = 0xf;
  local_9a8 = 0;
  local_9b8[0] = local_9b8[0] & 0xffffffffffffff00;
  local_998 = 1;
  uStack_cf0 = 0x1403c2287;
  FUN_14037f130(local_990);
  local_520 = 0;
  local_51c = 0;
  bVar22 = false;
  plVar6 = *(longlong **)(DAT_1416e3260 + 0x248);
  if (plVar6 != (longlong *)0x0) {
    do {
      if (bVar22) goto LAB_1403c22d5;
      bVar22 = *plVar6 == *(longlong *)(param_1 + 0x40);
      plVar6 = (longlong *)plVar6[3];
    } while (plVar6 != (longlong *)0x0);
    if (bVar22) {
LAB_1403c22d5:
      local_c88 = 0xf;
      local_c90 = 0;
      local_ca0[0] = 0;
      uStack_cf0 = 0x1403c22fb;
      FUN_1400b0300(local_ca0,"left_portrait_martial_value",0x1b);
      local_ca8[0] = 2;
      local_c60 = 0xf;
      local_c68 = 0;
      local_c78[0] = 0;
      uStack_cf0 = 0x1403c2328;
      FUN_1400b0300(local_c78,"attacker",8);
      uVar16 = 6;
      local_ca8[0] = 6;
      uStack_cf0 = 0x1403c2343;
      plVar6 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
                         (*(longlong **)(param_1 + 0x38),local_c78);
      uStack_cf0 = 0x1403c2354;
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x88))(plVar6,local_ca0);
      if (plVar6 == param_3) {
LAB_1403c269a:
        bVar22 = true;
      }
      else {
        local_c40 = 0xf;
        local_c48 = 0;
        local_c58[0] = 0;
        uStack_cf0 = 0x1403c2381;
        FUN_1400b0300(local_c58,"center_portrait_martial_value",0x1d);
        local_ca8[0] = 0xe;
        local_c18 = 0xf;
        local_c20 = 0;
        local_c30[0] = 0;
        uStack_cf0 = 0x1403c23b3;
        FUN_1400b0300(local_c30,"attacker",8);
        uVar16 = 0x1e;
        local_ca8[0] = 0x1e;
        uStack_cf0 = 0x1403c23ce;
        plVar6 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
                           (*(longlong **)(param_1 + 0x38),local_c30);
        uStack_cf0 = 0x1403c23df;
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x88))(plVar6,local_c58);
        if (plVar6 == param_3) goto LAB_1403c269a;
        local_bf8 = 0xf;
        local_c00 = 0;
        local_c10[0] = 0;
        uStack_cf0 = 0x1403c2418;
        FUN_1400b0300(local_c10,"right_portrait_martial_value",0x1c);
        local_ca8[0] = 0x3e;
        local_bc8 = 0xf;
        local_bd0 = 0;
        local_be0[0] = 0;
        uStack_cf0 = 0x1403c2450;
        FUN_1400b0300(local_be0,"attacker");
        uVar16 = 0x7e;
        local_ca8[0] = 0x7e;
        uStack_cf0 = 0x1403c246e;
        plVar6 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
                           (*(longlong **)(param_1 + 0x38),local_be0);
        uStack_cf0 = 0x1403c2482;
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x88))(plVar6,local_c10);
        if (plVar6 == param_3) goto LAB_1403c269a;
        local_b08 = 0xf;
        local_b10 = 0;
        local_b20[0] = 0;
        uStack_cf0 = 0x1403c24bb;
        FUN_1400b0300(local_b20,"left_portrait_martial_value",0x1b);
        local_ca8[0] = 0xfe;
        local_b30 = 0;
        local_b28 = 0;
        uStack_cf0 = 0x1403c24e2;
        FUN_1400b0200(local_b40,0,0);
        uStack_cf0 = 0x1403c24f9;
        FUN_1400b0300(local_b40,"defender");
        uVar16 = 0x1fe;
        local_ca8[0] = 0x1fe;
        uStack_cf0 = 0x1403c2517;
        plVar6 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
                           (*(longlong **)(param_1 + 0x38),local_b40);
        uStack_cf0 = 0x1403c252b;
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x88))(plVar6,local_b20);
        if (plVar6 == param_3) goto LAB_1403c269a;
        local_b50 = 0;
        local_b48 = 0;
        uStack_cf0 = 0x1403c2553;
        FUN_1400b0200(local_b60,0,0);
        uStack_cf0 = 0x1403c256c;
        FUN_1400b0300(local_b60,"center_portrait_martial_value",0x1d);
        local_ca8[0] = 0x3fe;
        local_b70 = 0;
        local_b68 = 0;
        uStack_cf0 = 0x1403c2593;
        FUN_1400b0200(local_b80,0,0);
        uStack_cf0 = 0x1403c25ac;
        FUN_1400b0300(local_b80,"defender");
        uVar16 = 0x7fe;
        local_ca8[0] = 0x7fe;
        uStack_cf0 = 0x1403c25ca;
        plVar6 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
                           (*(longlong **)(param_1 + 0x38),local_b80);
        uStack_cf0 = 0x1403c25de;
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x88))(plVar6,local_b60);
        if (plVar6 == param_3) goto LAB_1403c269a;
        local_b90 = 0;
        local_b88 = 0;
        uStack_cf0 = 0x1403c2606;
        FUN_1400b0200(local_ba0,0,0);
        uStack_cf0 = 0x1403c261f;
        FUN_1400b0300(local_ba0,"right_portrait_martial_value",0x1c);
        local_ca8[0] = 0xffe;
        local_bb0 = 0;
        local_ba8 = 0;
        uStack_cf0 = 0x1403c2646;
        FUN_1400b0200(local_bc0,0,0);
        uStack_cf0 = 0x1403c265f;
        FUN_1400b0300(local_bc0,"defender",8);
        uVar16 = 0x1ffe;
        local_ca8[0] = 0x1ffe;
        uStack_cf0 = 0x1403c267d;
        plVar6 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
                           (*(longlong **)(param_1 + 0x38),local_bc0);
        uStack_cf0 = 0x1403c2691;
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x88))(plVar6,local_ba0);
        if (plVar6 == param_3) goto LAB_1403c269a;
        bVar22 = false;
      }
      if (uVar16 >> 0xc != 0) {
        uVar16 = uVar16 & 0xffffefff;
        uStack_cf0 = 0x1403c26b2;
        FUN_1400ae4f0(local_bc0);
      }
      if ((uVar16 >> 0xb & 1) != 0) {
        uVar16 = uVar16 & 0xfffff7ff;
        uStack_cf0 = 0x1403c26c9;
        FUN_1400ae4f0(local_ba0);
      }
      if ((uVar16 >> 10 & 1) != 0) {
        uVar16 = uVar16 & 0xfffffbff;
        uStack_cf0 = 0x1403c26e0;
        FUN_1400ae4f0(local_b80);
      }
      if ((uVar16 >> 9 & 1) != 0) {
        uVar16 = uVar16 & 0xfffffdff;
        uStack_cf0 = 0x1403c26f7;
        FUN_1400ae4f0(local_b60);
      }
      if ((uVar16 >> 8 & 1) != 0) {
        uVar16 = uVar16 & 0xfffffeff;
        uStack_cf0 = 0x1403c270e;
        FUN_1400ae4f0(local_b40);
      }
      if ((char)uVar16 < '\0') {
        uVar16 = uVar16 & 0xffffff7f;
        uStack_cf0 = 0x1403c2724;
        FUN_1400ae4f0(local_b20);
      }
      if ((uVar16 & 0x40) != 0) {
        uVar16 = uVar16 & 0xffffffbf;
        uStack_cf0 = 0x1403c273a;
        FUN_1400ae4f0(local_be0);
      }
      if ((uVar16 & 0x20) != 0) {
        uVar16 = uVar16 & 0xffffffdf;
        uStack_cf0 = 0x1403c2750;
        FUN_1400ae4f0(local_c10);
      }
      if ((uVar16 & 0x10) != 0) {
        uVar16 = uVar16 & 0xffffffef;
        uStack_cf0 = 0x1403c2763;
        FUN_1400ae4f0(local_c30);
      }
      if ((uVar16 & 8) != 0) {
        uVar16 = uVar16 & 0xfffffff7;
        uStack_cf0 = 0x1403c2776;
        FUN_1400ae4f0(local_c58);
      }
      uStack_cf0 = 0x1403c2783;
      FUN_1400ae4f0(local_c78);
      uVar16 = uVar16 & 0xfffffff9;
      uStack_cf0 = 0x1403c2790;
      FUN_1400ae4f0(local_ca0);
      if (!bVar22) {
        iVar5 = 0;
        local_res20[0] = 0;
        local_c38 = &PTR_DAT_141061b00;
        local_be8 = &PTR_s_left_skirmish_141061b20;
        do {
          local_bf0 = 0;
          ppuVar21 = local_be8;
          do {
            pcVar8 = *ppuVar21;
            local_c60 = 0xf;
            local_c68 = 0;
            local_c78[0] = 0;
            uVar13 = uVar15;
            if (*pcVar8 != '\0') {
              uVar13 = 0xffffffffffffffff;
              do {
                uVar13 = uVar13 + 1;
              } while (pcVar8[uVar13] != '\0');
            }
            uStack_cf0 = 0x1403c28f8;
            FUN_1400b0300(local_c78,pcVar8,uVar13);
            local_c88 = 0xf;
            local_c90 = 0;
            local_ca0[0] = 0;
            uStack_cf0 = 0x1403c291f;
            FUN_1400b0300(local_ca0,"attacker",8);
            uStack_cf0 = 0x1403c2932;
            plVar6 = (longlong *)
                     (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
                               (*(longlong **)(param_1 + 0x38),local_ca0);
            uStack_cf0 = 0x1403c2943;
            plVar6 = (longlong *)(**(code **)(*plVar6 + 0x98))(plVar6,local_c78);
            uStack_cf0 = 0x1403c2952;
            FUN_1400ae4f0(local_ca0);
            uStack_cf0 = 0x1403c295c;
            FUN_1400ae4f0(local_c78);
            if (plVar6 == param_3) {
              lVar10 = (longlong)local_res20[0] * 200;
              uStack_cf0 = 0x1403c3c90;
              uVar7 = FUN_14039d760(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x48 +
                                    lVar10,local_ca0);
              uStack_cf0 = 0x1403c3c9f;
              FUN_1400cd750(local_9d8,uVar7);
              uStack_cf0 = 0x1403c3ca8;
              FUN_1400ae4f0(local_ca0);
              lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
LAB_1403c3cb1:
              uStack_cf0 = 0x1403c3cc1;
              uVar7 = FUN_14039e2e0(lVar20 + 0x48 + lVar10,local_ca0);
              puVar12 = local_9b8;
              goto LAB_1403c3cc8;
            }
            pcVar8 = *ppuVar21;
            local_bf8 = 0xf;
            local_c00 = 0;
            uVar13 = uVar15;
            if (*pcVar8 != '\0') {
              uVar13 = 0xffffffffffffffff;
              do {
                uVar13 = uVar13 + 1;
              } while (pcVar8[uVar13] != '\0');
            }
            uStack_cf0 = 0x1403c29a6;
            local_c10[0] = plVar6 == param_3;
            FUN_1400b0300(local_c10,pcVar8,uVar13);
            local_ca8[0] = uVar16 | 0x2000;
            local_c18 = 0xf;
            local_c20 = 0;
            local_c30[0] = 0;
            uStack_cf0 = 0x1403c29da;
            FUN_1400b0300(local_c30,"defender",8);
            uVar17 = uVar16 | 0x6000;
            uStack_cf0 = 0x1403c2a07;
            local_ca8[0] = uVar17;
            plVar6 = (longlong *)
                     (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
                               (*(longlong **)(param_1 + 0x38),local_c30);
            uStack_cf0 = 0x1403c2a1b;
            plVar6 = (longlong *)(**(code **)(*plVar6 + 0x98))(plVar6,local_c10);
            if (plVar6 == param_3) {
LAB_1403c2b2f:
              bVar22 = true;
            }
            else {
              local_c40 = 0xf;
              local_c48 = 0;
              local_c58[0] = 0;
              uStack_cf0 = 0x1403c2a4e;
              FUN_1400b0300(local_c58,"_narrow_flank",0xd);
              local_ca8[0] = uVar16 | 0xe000;
              local_c60 = 0xf;
              local_c68 = 0;
              local_c78[0] = 0;
              uStack_cf0 = 0x1403c2a7c;
              FUN_1400b0300(local_c78,"defender");
              local_ca8[0] = uVar16 | 0x1e000;
              uStack_cf0 = 0x1403c2a97;
              plVar6 = (longlong *)
                       (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
                                 (*(longlong **)(param_1 + 0x38),local_c78);
              pcVar8 = *local_c38;
              local_c90 = 0;
              local_c88 = 0;
              uStack_cf0 = 0x1403c2ab7;
              FUN_1400b0200(local_ca0,0);
              uVar13 = uVar15;
              if (*pcVar8 != '\0') {
                uVar13 = 0xffffffffffffffff;
                do {
                  uVar13 = uVar13 + 1;
                } while (pcVar8[uVar13] != '\0');
              }
              uStack_cf0 = 0x1403c2adb;
              FUN_1400b0300(local_ca0,pcVar8,uVar13);
              local_ca8[0] = uVar16 | 0x3e000;
              uStack_cf0 = 0x1403c2afb;
              uVar7 = FUN_140d5f250(local_ca0,local_be0,local_c58);
              uVar17 = uVar16 | 0x7e000;
              uStack_cf0 = 0x1403c2b18;
              local_ca8[0] = uVar17;
              plVar6 = (longlong *)(**(code **)(*plVar6 + 0x98))(plVar6,uVar7);
              if (plVar6 == param_3) goto LAB_1403c2b2f;
              bVar22 = false;
            }
            if (uVar17 >> 0x12 != 0) {
              uVar17 = uVar17 & 0xfffbffff;
              uStack_cf0 = 0x1403c2b47;
              FUN_1400ae4f0(local_be0);
            }
            if ((uVar17 >> 0x11 & 1) != 0) {
              uVar17 = uVar17 & 0xfffdffff;
              uStack_cf0 = 0x1403c2b5b;
              FUN_1400ae4f0(local_ca0);
            }
            if ((uVar17 >> 0x10 & 1) != 0) {
              uVar17 = uVar17 & 0xfffeffff;
              uStack_cf0 = 0x1403c2b6f;
              FUN_1400ae4f0(local_c78);
            }
            if ((uVar17 >> 0xf & 1) != 0) {
              uVar17 = uVar17 & 0xffff7fff;
              uStack_cf0 = 0x1403c2b83;
              FUN_1400ae4f0(local_c58);
            }
            uStack_cf0 = 0x1403c2b91;
            FUN_1400ae4f0(local_c30);
            uVar16 = uVar17 & 0xffff9fff;
            uStack_cf0 = 0x1403c2ba2;
            FUN_1400ae4f0(local_c10);
            if (bVar22) {
              lVar10 = (longlong)local_res20[0] * 200;
              uStack_cf0 = 0x1403c3c47;
              uVar7 = FUN_14039d760(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 0x48 +
                                    lVar10,local_ca0);
              uStack_cf0 = 0x1403c3c56;
              FUN_1400cd750(local_9d8,uVar7);
              uStack_cf0 = 0x1403c3c5f;
              FUN_1400ae4f0(local_ca0);
              lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18);
              goto LAB_1403c3cb1;
            }
            local_bf0 = local_bf0 + 1;
            ppuVar21 = ppuVar21 + 1;
          } while (local_bf0 < 4);
          local_c48 = 0;
          local_c40 = 0;
          uStack_cf0 = 0x1403c2be6;
          FUN_1400b0200(local_c58,0,0);
          uStack_cf0 = 0x1403c2bfc;
          FUN_1400b0300(local_c58,"_damage",7);
          local_c68 = 0;
          local_c60 = 0;
          uStack_cf0 = 0x1403c2c13;
          FUN_1400b0200(local_c78,0,0);
          uStack_cf0 = 0x1403c2c29;
          FUN_1400b0300(local_c78,"attacker");
          uStack_cf0 = 0x1403c2c3c;
          plVar6 = (longlong *)
                   (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
                             (*(longlong **)(param_1 + 0x38),local_c78);
          ppuVar21 = local_c38;
          pcVar8 = *local_c38;
          local_c90 = 0;
          local_c88 = 0;
          uStack_cf0 = 0x1403c2c5d;
          FUN_1400b0200(local_ca0,0);
          uVar13 = uVar15;
          if (*pcVar8 != '\0') {
            uVar13 = 0xffffffffffffffff;
            do {
              uVar13 = uVar13 + 1;
            } while (pcVar8[uVar13] != '\0');
          }
          uStack_cf0 = 0x1403c2c86;
          FUN_1400b0300(local_ca0,pcVar8,uVar13);
          uStack_cf0 = 0x1403c2c98;
          uVar7 = FUN_140d5f250(local_ca0,local_c30,local_c58);
          uStack_cf0 = 0x1403c2ca9;
          plVar6 = (longlong *)(**(code **)(*plVar6 + 0x88))(plVar6,uVar7);
          uStack_cf0 = 0x1403c2cb8;
          FUN_1400ae4f0(local_c30);
          uStack_cf0 = 0x1403c2cc2;
          FUN_1400ae4f0(local_ca0);
          uStack_cf0 = 0x1403c2ccc;
          FUN_1400ae4f0(local_c78);
          uStack_cf0 = 0x1403c2cd6;
          FUN_1400ae4f0(local_c58);
          if (plVar6 == param_3) {
            lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
LAB_1403c2df3:
            uStack_cf0 = 0x1403c2e11;
            uVar7 = FUN_14039d760((longlong)local_res20[0] * 200 + 0x48 + lVar20,local_ca0);
            uStack_cf0 = 0x1403c2e20;
            FUN_1400cd750(local_9d8,uVar7);
            uStack_cf0 = 0x1403c2e29;
            FUN_1400ae4f0(local_ca0);
          }
          else {
            local_c48 = 0;
            local_c40 = 0;
            uStack_cf0 = 0x1403c2cfe;
            FUN_1400b0200(local_c58,0,0);
            uStack_cf0 = 0x1403c2d14;
            FUN_1400b0300(local_c58,"_damage",7);
            local_c68 = 0;
            local_c60 = 0;
            uStack_cf0 = 0x1403c2d2b;
            FUN_1400b0200(local_c78,0,0);
            uStack_cf0 = 0x1403c2d41;
            FUN_1400b0300(local_c78,"defender");
            uStack_cf0 = 0x1403c2d54;
            plVar6 = (longlong *)
                     (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
                               (*(longlong **)(param_1 + 0x38),local_c78);
            pcVar8 = *ppuVar21;
            local_c90 = 0;
            local_c88 = 0;
            uStack_cf0 = 0x1403c2d71;
            FUN_1400b0200(local_ca0,0);
            uVar13 = uVar15;
            if (*pcVar8 != '\0') {
              uVar13 = 0xffffffffffffffff;
              do {
                uVar13 = uVar13 + 1;
              } while (pcVar8[uVar13] != '\0');
            }
            uStack_cf0 = 0x1403c2d96;
            FUN_1400b0300(local_ca0,pcVar8,uVar13);
            uStack_cf0 = 0x1403c2da8;
            uVar7 = FUN_140d5f250(local_ca0,local_c30,local_c58);
            uStack_cf0 = 0x1403c2db9;
            plVar6 = (longlong *)(**(code **)(*plVar6 + 0x88))(plVar6,uVar7);
            uStack_cf0 = 0x1403c2dc8;
            FUN_1400ae4f0(local_c30);
            uStack_cf0 = 0x1403c2dd2;
            FUN_1400ae4f0(local_ca0);
            uStack_cf0 = 0x1403c2ddc;
            FUN_1400ae4f0(local_c78);
            uStack_cf0 = 0x1403c2de6;
            FUN_1400ae4f0(local_c58);
            if (plVar6 == param_3) {
              lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18);
              goto LAB_1403c2df3;
            }
          }
          local_res20[0] = local_res20[0] + 1;
          local_be8 = local_be8 + 4;
          local_c38 = ppuVar21 + 1;
        } while (local_res20[0] < 3);
        uStack_cf0 = 0x1403c2e66;
        pcVar8 = (char *)(**(code **)(*param_3 + 0x90))(param_3);
        if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
          pcVar8 = *(char **)pcVar8;
        }
        uStack_cf0 = 0x1403c2e7f;
        iVar4 = strcmp(pcVar8,"goto_location_button");
        if (iVar4 == 0) {
          lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x28);
          ppuVar21 = *(undefined ***)(lVar20 + 0x10);
          if (ppuVar21 == &PTR_LAB_1410eea48) {
            lVar20 = *(longlong *)(lVar20 + 0xf0) + 0x10;
          }
          else {
            uStack_cf0 = 0x1403c2eb2;
            lVar20 = (*(code *)ppuVar21[6])();
          }
          uStack_cf0 = 0x1403c2ecc;
          uVar7 = FUN_140152450(local_ca0,"CIW_GOTOLOCATION","WHERE",lVar20);
          puVar12 = local_9d8;
LAB_1403c3cc8:
          uStack_cf0 = 0x1403c3cd0;
          FUN_1400cd750(puVar12,uVar7);
          uStack_cf0 = 0x1403c3cd9;
          FUN_1400ae4f0(local_ca0);
          puVar14 = auStack_ce8;
        }
        else {
          local_c68 = 0;
          local_c60 = 0;
          uStack_cf0 = 0x1403c2eee;
          FUN_1400b0200(local_c78,0,0);
          uStack_cf0 = 0x1403c2f04;
          FUN_1400b0300(local_c78,"shield",6);
          local_c90 = 0;
          local_c88 = 0;
          uStack_cf0 = 0x1403c2f1b;
          FUN_1400b0200(local_ca0,0,0);
          uStack_cf0 = 0x1403c2f31;
          FUN_1400b0300(local_ca0,"attacker",8);
          uStack_cf0 = 0x1403c2f44;
          plVar6 = (longlong *)
                   (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
                             (*(longlong **)(param_1 + 0x38),local_ca0);
          uStack_cf0 = 0x1403c2f52;
          plVar6 = (longlong *)(**(code **)(*plVar6 + 0x78))(plVar6,local_c78);
          uStack_cf0 = 0x1403c2f61;
          FUN_1400ae4f0(local_ca0);
          uStack_cf0 = 0x1403c2f6b;
          FUN_1400ae4f0(local_c78);
          if (plVar6 == param_3) {
            lVar20 = *(longlong *)
                      (**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x30) +
                      0x170);
            if (lVar20 == 0) {
              uStack_cf0 = 0x1403c2f94;
              lVar20 = FUN_140b96ae0();
            }
            lVar10 = *(longlong *)(lVar20 + 0x28);
            if (((lVar10 == 0) || (*(longlong *)(lVar10 + 0xb0) == 0)) ||
               (lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0xb0) + 8),
               (ulonglong)(*(longlong *)(lVar10 + 0x40) - *(longlong *)(lVar10 + 0x38)) < 8)) {
              uVar7 = DAT_1416e3ad0;
              if (0 < (int)(*(longlong *)(lVar20 + 0x78) - *(longlong *)(lVar20 + 0x70) >> 3)) {
                uVar7 = **(undefined8 **)(lVar20 + 0x70);
              }
            }
            else {
              uVar7 = **(undefined8 **)(lVar10 + 0x38);
            }
            uStack_cf0 = 0x1403c2ffb;
            uVar7 = FUN_140a4fae0(uVar7,local_508,0);
            uStack_cf0 = 0x1403c300b;
            FUN_140156920(local_9d8,uVar7);
            uStack_cf0 = 0x1403c3018;
            FUN_14013a6e0(local_508);
            puVar14 = auStack_ce8;
          }
          else {
            local_c68 = 0;
            local_c60 = 0;
            uStack_cf0 = 0x1403c3033;
            FUN_1400b0200(local_c78,0,0);
            uStack_cf0 = 0x1403c3049;
            FUN_1400b0300(local_c78,"shield",6);
            local_c90 = 0;
            local_c88 = 0;
            uStack_cf0 = 0x1403c3060;
            FUN_1400b0200(local_ca0,0,0);
            uStack_cf0 = 0x1403c3076;
            FUN_1400b0300(local_ca0,"defender",8);
            uStack_cf0 = 0x1403c3089;
            plVar6 = (longlong *)
                     (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
                               (*(longlong **)(param_1 + 0x38),local_ca0);
            uStack_cf0 = 0x1403c3097;
            plVar6 = (longlong *)(**(code **)(*plVar6 + 0x78))(plVar6,local_c78);
            uStack_cf0 = 0x1403c30a6;
            FUN_1400ae4f0(local_ca0);
            uStack_cf0 = 0x1403c30b0;
            FUN_1400ae4f0(local_c78);
            if (plVar6 == param_3) {
              lVar20 = *(longlong *)
                        (**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 0x30)
                        + 0x170);
              if (lVar20 == 0) {
                uStack_cf0 = 0x1403c30d9;
                lVar20 = FUN_140b96ae0();
              }
              lVar10 = *(longlong *)(lVar20 + 0x28);
              if (((lVar10 == 0) || (*(longlong *)(lVar10 + 0xb0) == 0)) ||
                 (lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0xb0) + 8),
                 (ulonglong)(*(longlong *)(lVar10 + 0x40) - *(longlong *)(lVar10 + 0x38)) < 8)) {
                uVar7 = DAT_1416e3ad0;
                if (0 < (int)(*(longlong *)(lVar20 + 0x78) - *(longlong *)(lVar20 + 0x70) >> 3)) {
                  uVar7 = **(undefined8 **)(lVar20 + 0x70);
                }
              }
              else {
                uVar7 = **(undefined8 **)(lVar10 + 0x38);
              }
              uStack_cf0 = 0x1403c3140;
              uVar7 = FUN_140a4fae0(uVar7,local_508,0);
              uStack_cf0 = 0x1403c3150;
              FUN_140156920(local_9d8,uVar7);
              uStack_cf0 = 0x1403c315d;
              FUN_14013a6e0(local_508);
              puVar14 = auStack_ce8;
            }
            else {
              uStack_cf0 = 0x1403c3172;
              FUN_1400afe20(local_c78,"combat_modifier_strip");
              uStack_cf0 = 0x1403c3183;
              FUN_1400afe20(local_ca0,"attacker");
              uStack_cf0 = 0x1403c3196;
              plVar6 = (longlong *)
                       (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
                                 (*(longlong **)(param_1 + 0x38),local_ca0);
              uStack_cf0 = 0x1403c31a7;
              plVar6 = (longlong *)(**(code **)(*plVar6 + 0x98))(plVar6,local_c78);
              uStack_cf0 = 0x1403c31b6;
              FUN_1400ae4f0(local_ca0);
              uStack_cf0 = 0x1403c31c0;
              FUN_1400ae4f0(local_c78);
              if (plVar6 == param_3) {
                puVar14 = auStack_ce8;
                if (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x90) == 0) goto LAB_1403c3cd9;
                uStack_cf0 = 0x1403c31eb;
                FUN_1400afe20(local_ca0,&DAT_141066f10);
                plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x90);
                local_cb0 = 0xbf;
                local_cb8 = 1;
                local_cc0 = 0;
                local_cc8 = 0;
                uStack_cf0 = 0x1403c3223;
                uVar7 = (**(code **)(*plVar6 + 0x70))(plVar6,local_c30,2);
                uStack_cf0 = 0x1403c322f;
                uVar9 = (**(code **)(*plVar6 + 0x30))(plVar6);
                uStack_cf0 = 0x1403c323f;
                uVar9 = FUN_140d5f250(uVar9,local_c58,local_ca0);
                uStack_cf0 = 0x1403c324f;
                uVar7 = FUN_140d5f250(uVar9,local_c78,uVar7);
                uStack_cf0 = 0x1403c325e;
                FUN_1400cd750(local_9d8,uVar7);
                uStack_cf0 = 0x1403c3267;
                FUN_1400ae4f0(local_c78);
                uStack_cf0 = 0x1403c3271;
                FUN_1400ae4f0(local_c58);
                uStack_cf0 = 0x1403c327b;
                FUN_1400ae4f0(local_c30);
              }
              else {
                uStack_cf0 = 0x1403c3291;
                FUN_1400afe20(local_c78,"combat_modifier_strip");
                uStack_cf0 = 0x1403c32a2;
                FUN_1400afe20(local_ca0,"defender");
                uStack_cf0 = 0x1403c32b5;
                plVar6 = (longlong *)
                         (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
                                   (*(longlong **)(param_1 + 0x38),local_ca0);
                uStack_cf0 = 0x1403c32c6;
                plVar6 = (longlong *)(**(code **)(*plVar6 + 0x98))(plVar6,local_c78);
                uStack_cf0 = 0x1403c32d5;
                FUN_1400ae4f0(local_ca0);
                uStack_cf0 = 0x1403c32df;
                FUN_1400ae4f0(local_c78);
                if (plVar6 == param_3) {
                  puVar14 = auStack_ce8;
                  if (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x48) == 0) goto LAB_1403c3cd9;
                  uStack_cf0 = 0x1403c3307;
                  FUN_1400afe20(local_ca0,&DAT_141066f10);
                  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x48);
                  local_cb0 = 0xbf;
                  local_cb8 = 1;
                  local_cc0 = 0;
                  local_cc8 = 0;
                  uStack_cf0 = 0x1403c333c;
                  uVar7 = (**(code **)(*plVar6 + 0x70))(plVar6,local_c30,2);
                  uStack_cf0 = 0x1403c3348;
                  uVar9 = (**(code **)(*plVar6 + 0x30))(plVar6);
                  uStack_cf0 = 0x1403c3358;
                  uVar9 = FUN_140d5f250(uVar9,local_c58,local_ca0);
                  uStack_cf0 = 0x1403c3368;
                  uVar7 = FUN_140d5f250(uVar9,local_c78,uVar7);
                  uStack_cf0 = 0x1403c3377;
                  FUN_1400cd750(local_9d8,uVar7);
                  uStack_cf0 = 0x1403c3380;
                  FUN_1400ae4f0(local_c78);
                  uStack_cf0 = 0x1403c338a;
                  FUN_1400ae4f0(local_c58);
                  uStack_cf0 = 0x1403c3394;
                  FUN_1400ae4f0(local_c30);
                }
                else {
                  uStack_cf0 = 0x1403c33a6;
                  pcVar8 = (char *)(**(code **)(*param_3 + 0x90))(param_3);
                  if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
                    pcVar8 = *(char **)pcVar8;
                  }
                  uStack_cf0 = 0x1403c33bf;
                  iVar4 = strcmp(pcVar8,"light_infantry");
                  if (iVar4 == 0) {
                    uStack_cf0 = 0x1403c33d3;
                    uVar7 = FUN_140698f70(local_ca0,"LIGHT_INFANTRY");
                  }
                  else {
                    uStack_cf0 = 0x1403c33e4;
                    uVar7 = (**(code **)(*param_3 + 0x90))(param_3);
                    uStack_cf0 = 0x1403c33f3;
                    cVar3 = FUN_1400b1830(uVar7,"pikemen");
                    if (cVar3 == '\0') {
                      uStack_cf0 = 0x1403c3418;
                      uVar7 = (**(code **)(*param_3 + 0x90))(param_3);
                      uStack_cf0 = 0x1403c3427;
                      cVar3 = FUN_1400b1830(uVar7,"archers");
                      if (cVar3 == '\0') {
                        uStack_cf0 = 0x1403c344c;
                        uVar7 = (**(code **)(*param_3 + 0x90))(param_3);
                        uStack_cf0 = 0x1403c345b;
                        cVar3 = FUN_1400b1830(uVar7,"heavy_infantry");
                        if (cVar3 == '\0') {
                          uStack_cf0 = 0x1403c3480;
                          uVar7 = (**(code **)(*param_3 + 0x90))(param_3);
                          uStack_cf0 = 0x1403c348f;
                          cVar3 = FUN_1400b1830(uVar7,"light_cavalry");
                          if (cVar3 == '\0') {
                            uStack_cf0 = 0x1403c34b4;
                            uVar7 = (**(code **)(*param_3 + 0x90))(param_3);
                            uStack_cf0 = 0x1403c34c3;
                            cVar3 = FUN_1400b1830(uVar7,"special_troops");
                            if (cVar3 == '\0') {
                              uStack_cf0 = 0x1403c34e8;
                              uVar7 = (**(code **)(*param_3 + 0x90))(param_3);
                              uStack_cf0 = 0x1403c34f7;
                              cVar3 = FUN_1400b1830(uVar7,"heavy_cavalry");
                              if (cVar3 == '\0') {
                                uStack_cf0 = 0x1403c351c;
                                uVar7 = (**(code **)(*param_3 + 0x90))(param_3);
                                uStack_cf0 = 0x1403c352b;
                                cVar3 = FUN_1400b1830(uVar7,"units_total");
                                if (cVar3 == '\0') {
                                  uStack_cf0 = 0x1403c3550;
                                  FUN_1400afe20(local_ca0,&DAT_14108f820);
                                  uStack_cf0 = 0x1403c355d;
                                  uVar7 = (**(code **)(*param_3 + 0x90))(param_3);
                                  uStack_cf0 = 0x1403c356c;
                                  iVar4 = FUN_140d5f3f0(uVar7,local_ca0,0);
                                  uStack_cf0 = 0x1403c357b;
                                  FUN_1400ae4f0(local_ca0);
                                  uVar13 = uVar15;
                                  if (iVar4 == -1) {
                                    uStack_cf0 = 0x1403c3593;
                                    FUN_1400afe20(local_ca0,"right");
                                    uStack_cf0 = 0x1403c35a0;
                                    uVar7 = (**(code **)(*param_3 + 0x90))(param_3);
                                    uStack_cf0 = 0x1403c35af;
                                    iVar4 = FUN_140d5f3f0(uVar7,local_ca0,0);
                                    uStack_cf0 = 0x1403c35be;
                                    FUN_1400ae4f0(local_ca0);
                                    uVar13 = 1;
                                    if (iVar4 != -1) {
                                      uVar13 = 2;
                                    }
                                  }
                                  lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10);
                                  uStack_cf0 = 0x1403c35e6;
                                  FUN_1400afe20(local_ca0,"attacker");
                                  uStack_cf0 = 0x1403c35f9;
                                  lVar10 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
                                                     (*(longlong **)(param_1 + 0x38),local_ca0);
                                  uStack_cf0 = 0x1403c3609;
                                  cVar3 = (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x130))
                                                    ((longlong *)(lVar10 + 0x28),param_3);
                                  uStack_cf0 = 0x1403c3617;
                                  FUN_1400ae4f0(local_ca0);
                                  if (cVar3 == '\0') {
                                    uStack_cf0 = 0x1403c362b;
                                    FUN_1400afe20(local_ca0,"defender");
                                    uStack_cf0 = 0x1403c363e;
                                    lVar20 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xe8))
                                                       (*(longlong **)(param_1 + 0x38),local_ca0);
                                    uStack_cf0 = 0x1403c364e;
                                    cVar3 = (**(code **)(*(longlong *)(lVar20 + 0x28) + 0x130))
                                                      ((longlong *)(lVar20 + 0x28),param_3);
                                    uStack_cf0 = 0x1403c365a;
                                    FUN_1400ae4f0(local_ca0);
                                    puVar14 = auStack_ce8;
                                    if (cVar3 == '\0') goto LAB_1403c3cd9;
                                    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18);
                                  }
                                  uStack_cf0 = 0x1403c367b;
                                  FUN_1400afe20(local_ca0,"strength");
                                  uStack_cf0 = 0x1403c3688;
                                  uVar7 = (**(code **)(*param_3 + 0x90))(param_3);
                                  uStack_cf0 = 0x1403c3697;
                                  iVar4 = FUN_140d5f3f0(uVar7,local_ca0,0);
                                  uStack_cf0 = 0x1403c36a6;
                                  FUN_1400ae4f0(local_ca0);
                                  if (iVar4 == -1) {
                                    uStack_cf0 = 0x1403c36d8;
                                    FUN_1400afe20(local_ca0,"tactic");
                                    uStack_cf0 = 0x1403c36e5;
                                    uVar7 = (**(code **)(*param_3 + 0x90))(param_3);
                                    uStack_cf0 = 0x1403c36f4;
                                    iVar4 = FUN_140d5f3f0(uVar7,local_ca0,0);
                                    uStack_cf0 = 0x1403c3703;
                                    FUN_1400ae4f0(local_ca0);
                                    if (iVar4 != -1) {
                                      lVar10 = uVar13 * 200;
                                      lVar18 = lVar20 + 0x48 + lVar10;
                                      uStack_cf0 = 0x1403c3727;
                                      uVar7 = FUN_14039e500(lVar18,local_ca0);
                                      uStack_cf0 = 0x1403c3736;
                                      FUN_1400cd750(local_9d8,uVar7);
                                      uStack_cf0 = 0x1403c373f;
                                      FUN_1400ae4f0(local_ca0);
                                      uStack_cf0 = 0x1403c375b;
                                      uVar7 = FUN_140d5ebc0(local_c78,
                                                            *(int *)(lVar10 + 0xf8 + lVar20) -
                                                            *(int *)(*(longlong *)
                                                                      (lVar10 + 0xe8 + lVar20) +
                                                                    0x38));
                                      uStack_cf0 = 0x1403c3776;
                                      uVar7 = FUN_140152450(local_ca0,"TACTIC_CHANGE_DAYS",
                                                            &DAT_141071b10,uVar7);
                                      uStack_cf0 = 0x1403c3785;
                                      FUN_1400cd750(local_9b8,uVar7);
                                      uStack_cf0 = 0x1403c378e;
                                      FUN_1400ae4f0(local_ca0);
                                      uStack_cf0 = 0x1403c3798;
                                      FUN_1400ae4f0(local_c78);
                                      local_af0 = 0x18e;
                                      local_ae8 = 0;
                                      local_ae0 = 0xffffffffffffffff;
                                      local_ad8 = DAT_1416e3250;
                                      local_ad0 = DAT_1416e3248;
                                      local_ac8 = 0xffffffffffffffff;
                                      local_ac0 = 0xffffffffffffffff;
                                      local_ab8 = 0xffffffff;
                                      local_af8 = &PTR_FUN_1410655c8;
                                      local_ab0 = DAT_1416e3238;
                                      local_aa8 = DAT_1416e3238;
                                      local_aa0 = DAT_1416e3228;
                                      local_a98 = DAT_1416e3228;
                                      local_a90 = 0;
                                      local_a88 = 0;
                                      uStack_a80 = 0;
                                      local_a78 = 0;
                                      uStack_a70 = 0;
                                      local_a68 = 0;
                                      uStack_a60 = 0;
                                      local_a58 = DAT_1416e3230;
                                      local_a50 = 0;
                                      local_a48 = &local_af8;
                                      local_a40 = &local_af8;
                                      local_a38 = &local_af8;
                                      local_a2c = 0;
                                      local_a24 = 1;
                                      local_a20 = 0;
                                      local_a18 = 0;
                                      local_a10 = 0;
                                      local_a08 = 0;
                                      uStack_a00 = 0;
                                      local_9f8 = 0;
                                      local_a30 = 0;
                                      uStack_cf0 = 0x1403c38d1;
                                      FUN_1406d4ac0(&local_af8);
                                      lVar20 = DAT_1416e23d0;
                                      lVar10 = (longlong)
                                               (int)(*(longlong *)(DAT_1416e23d0 + 0x40) -
                                                     *(longlong *)(DAT_1416e23d0 + 0x38) >> 3);
                                      uVar13 = lVar10 * 4 + 0x17;
                                      if (uVar13 <= lVar10 * 4 + 8U) {
                                        uVar13 = 0xffffffffffffff0;
                                      }
                                      uStack_cf0 = 0x1403c3915;
                                      lVar2 = -(uVar13 & 0xfffffffffffffff0);
                                      local_a68 = lVar18;
                                      *(undefined4 *)((longlong)local_ca8 + lVar2) = 0xa110ca7e;
                                      *(undefined4 *)((longlong)local_ca8 + lVar10 * 4 + lVar2 + 4)
                                           = 0xa110ca7e;
                                      uVar13 = uVar15;
                                      uVar19 = uVar15;
                                      if (0 < lVar10) {
                                        do {
                                          lVar18 = *(longlong *)
                                                    (*(longlong *)(lVar20 + 0x38) + uVar19 * 8);
                                          plVar6 = (longlong *)(lVar18 + 0x10);
                                          pcVar1 = *(code **)(*plVar6 + 0x30);
                                          *(undefined8 *)(auStack_ce8 + lVar2 + -8) = 0x1403c3959;
                                          cVar3 = (*pcVar1)(plVar6,&local_af8);
                                          if (cVar3 == '\0') {
                                            *(undefined4 *)
                                             ((longlong)local_ca8 + uVar19 * 4 + lVar2 + 4) = 0;
                                          }
                                          else {
                                            *(undefined8 *)(auStack_ce8 + lVar2 + -8) = 0x1403c3974;
                                            piVar11 = (int *)FUN_140834920(lVar18 + 0x70,local_res20
                                                                           ,&local_af8);
                                            iVar5 = *piVar11;
                                            *(int *)((longlong)local_ca8 + uVar19 * 4 + lVar2 + 4) =
                                                 iVar5;
                                            uVar13 = (ulonglong)(uint)((int)uVar13 + iVar5);
                                          }
                                          iVar5 = (int)uVar13;
                                          uVar19 = uVar19 + 1;
                                        } while ((longlong)uVar19 < lVar10);
                                      }
                                      local_res20[0] = CONCAT31(local_res20[0]._1_3_,iVar5 == 0);
                                      if (iVar5 != 0) {
                                        *(undefined8 *)(auStack_ce8 + lVar2 + -8) = 0x1403c39af;
                                        FUN_1400afe20(local_ca0,&DAT_141066f10);
                                        *(undefined8 *)(auStack_ce8 + lVar2 + -8) = 0x1403c39c0;
                                        uVar7 = FUN_140698bb0(local_c58,"COMBAT_TACTICS_AVAILABLE");
                                        *(undefined8 *)(auStack_ce8 + lVar2 + -8) = 0x1403c39d1;
                                        uVar7 = FUN_140d5f250(uVar7,local_c78,local_ca0);
                                        *(undefined8 *)(auStack_ce8 + lVar2 + -8) = 0x1403c39e8;
                                        FUN_1400b06b0(local_9b8,uVar7,0,0xffffffffffffffff);
                                        *(undefined8 *)(auStack_ce8 + lVar2 + -8) = 0x1403c39f2;
                                        FUN_1400ae4f0(local_c78);
                                        *(undefined8 *)(auStack_ce8 + lVar2 + -8) = 0x1403c39fc;
                                        FUN_1400ae4f0(local_c58);
                                        *(undefined8 *)(auStack_ce8 + lVar2 + -8) = 0x1403c3a06;
                                        FUN_1400ae4f0(local_ca0);
                                        if (0 < lVar10) {
                                          do {
                                            if (*(int *)((longlong)local_ca8 +
                                                        uVar15 * 4 + lVar2 + 4) != 0) {
                                              plVar6 = *(longlong **)
                                                        (*(longlong *)(lVar20 + 0x38) + uVar15 * 8);
                                              *(undefined8 *)(auStack_ce8 + lVar2 + -8) =
                                                   0x1403c3a49;
                                              FUN_1400afe20(local_c78,&DAT_141066f10);
                                              *(undefined8 *)(auStack_ce8 + lVar2 + -8) =
                                                   0x1403c3a5a;
                                              FUN_1400afe20(local_ca0,&DAT_141061630);
                                              if ((undefined **)*plVar6 == &PTR_FUN_141090430) {
                                                plVar6 = plVar6 + 0x3c;
                                              }
                                              else {
                                                pcVar1 = (code *)((undefined **)*plVar6)[6];
                                                *(undefined8 *)(auStack_ce8 + lVar2 + -8) =
                                                     0x1403c3a72;
                                                plVar6 = (longlong *)(*pcVar1)(plVar6);
                                              }
                                              if ((char)local_res20[0] == '\0') {
                                                iVar4 = *(int *)((longlong)local_ca8 +
                                                                uVar15 * 4 + lVar2 + 4);
                                                if (iVar4 + 0x189373U < 0x39580e) {
                                                  iVar4 = (iVar4 * 1000) / iVar5;
                                                }
                                                else {
                                                  iVar4 = (int)(((longlong)iVar4 * 1000) /
                                                               (longlong)iVar5);
                                                }
                                              }
                                              else {
                                                iVar4 = -1;
                                              }
                                              local_c38 = (undefined **)
                                                          CONCAT44(local_c38._4_4_,iVar4);
                                              *(undefined8 *)(auStack_ce8 + lVar2 + -8) =
                                                   0x1403c3ad0;
                                              uVar7 = FUN_140c651e0(local_be0,&local_c38,1,1);
                                              *(undefined8 *)(auStack_ce8 + lVar2 + -8) =
                                                   0x1403c3ae6;
                                              uVar9 = FUN_140d5f250(plVar6,local_c10,local_ca0);
                                              *(undefined8 *)(auStack_ce8 + lVar2 + -8) =
                                                   0x1403c3af6;
                                              uVar7 = FUN_140d5f250(uVar9,local_c30,uVar7);
                                              *(undefined8 *)(auStack_ce8 + lVar2 + -8) =
                                                   0x1403c3b07;
                                              uVar7 = FUN_140d5f250(uVar7,local_c58,local_c78);
                                              *(undefined8 *)(auStack_ce8 + lVar2 + -8) =
                                                   0x1403c3b1e;
                                              FUN_1400b06b0(local_9b8,uVar7,0,0xffffffffffffffff);
                                              *(undefined8 *)(auStack_ce8 + lVar2 + -8) =
                                                   0x1403c3b28;
                                              FUN_1400ae4f0(local_c58);
                                              *(undefined8 *)(auStack_ce8 + lVar2 + -8) =
                                                   0x1403c3b32;
                                              FUN_1400ae4f0(local_c30);
                                              *(undefined8 *)(auStack_ce8 + lVar2 + -8) =
                                                   0x1403c3b3f;
                                              FUN_1400ae4f0(local_c10);
                                              *(undefined8 *)(auStack_ce8 + lVar2 + -8) =
                                                   0x1403c3b4c;
                                              FUN_1400ae4f0(local_be0);
                                              *(undefined8 *)(auStack_ce8 + lVar2 + -8) =
                                                   0x1403c3b56;
                                              FUN_1400ae4f0(local_ca0);
                                              *(undefined8 *)(auStack_ce8 + lVar2 + -8) =
                                                   0x1403c3b60;
                                              FUN_1400ae4f0(local_c78);
                                            }
                                            uVar15 = uVar15 + 1;
                                          } while ((longlong)uVar15 < lVar10);
                                        }
                                        *(undefined8 *)(auStack_ce8 + lVar2 + -8) = 0x1403c3b83;
                                        FUN_140d5f730(local_9b8,local_ca0);
                                        *(undefined8 *)(auStack_ce8 + lVar2 + -8) = 0x1403c3b8c;
                                        FUN_1400ae4f0(local_ca0);
                                      }
                                      *(undefined8 *)(auStack_ce8 + lVar2 + -8) = 0x1403c3b99;
                                      FUN_1406d3280(&local_af8);
                                      puVar14 = auStack_ce8 + lVar2;
                                      goto LAB_1403c3cd9;
                                    }
                                    uStack_cf0 = 0x1403c3bae;
                                    FUN_1400afe20(local_ca0,"morale");
                                    uStack_cf0 = 0x1403c3bbb;
                                    uVar7 = (**(code **)(*param_3 + 0x90))(param_3);
                                    uStack_cf0 = 0x1403c3bca;
                                    iVar5 = FUN_140d5f3f0(uVar7,local_ca0,0);
                                    uStack_cf0 = 0x1403c3bd9;
                                    FUN_1400ae4f0(local_ca0);
                                    puVar14 = auStack_ce8;
                                    if (iVar5 == -1) goto LAB_1403c3cd9;
                                    uStack_cf0 = 0x1403c3bfd;
                                    uVar7 = FUN_14039ff60(uVar13 * 200 + 0x48 + lVar20,local_ca0,0);
                                  }
                                  else {
                                    uStack_cf0 = 0x1403c36c3;
                                    uVar7 = FUN_14039e690(uVar13 * 200 + 0x48 + lVar20,local_ca0);
                                  }
                                }
                                else {
                                  uStack_cf0 = 0x1403c353f;
                                  uVar7 = FUN_140698f70(local_ca0,"COMBATVIEW_TOTALTROOPS");
                                }
                              }
                              else {
                                uStack_cf0 = 0x1403c350b;
                                uVar7 = FUN_140698f70(local_ca0,"KNIGHTS");
                              }
                            }
                            else {
                              uStack_cf0 = 0x1403c34d7;
                              uVar7 = FUN_140698f70(local_ca0,"SPECIAL_TROOPS");
                            }
                          }
                          else {
                            uStack_cf0 = 0x1403c34a3;
                            uVar7 = FUN_140698f70(local_ca0,"LIGHT_CAVALRY");
                          }
                        }
                        else {
                          uStack_cf0 = 0x1403c346f;
                          uVar7 = FUN_140698f70(local_ca0,"HEAVY_INFANTRY");
                        }
                      }
                      else {
                        uStack_cf0 = 0x1403c343b;
                        uVar7 = FUN_140698f70(local_ca0,"ARCHERS");
                      }
                    }
                    else {
                      uStack_cf0 = 0x1403c3407;
                      uVar7 = FUN_140698f70(local_ca0,"PIKEMEN");
                    }
                  }
                  uStack_cf0 = 0x1403c3c0c;
                  FUN_1400cd750(local_9d8,uVar7);
                }
              }
              uStack_cf0 = 0x1403c3c15;
              FUN_1400ae4f0(local_ca0);
              puVar14 = auStack_ce8;
            }
          }
        }
LAB_1403c3cd9:
        *(undefined8 *)(puVar14 + -8) = 0x1403c3cec;
        FUN_14014b0a0(param_2,local_9d8);
        *(undefined8 *)(puVar14 + -8) = 0x1403c3cf9;
        FUN_14013a6e0(local_9d8);
        return param_2;
      }
      lVar20 = param_3[1];
      if (((lVar20 == 0) || ((*(byte *)(lVar20 + 0x1e9) & 2) == 0)) ||
         ((lVar20 = *(longlong *)(lVar20 + 0x28), lVar20 == 0 || (lVar20 == -0xbe4)))) {
        uStack_cf0 = 0x1403c2860;
        uVar7 = FUN_140698f70(local_ca0,"LEADER_MARTIAL_VALUE");
        uStack_cf0 = 0x1403c286f;
        FUN_1400cd750(local_9d8,uVar7);
        uStack_cf0 = 0x1403c2878;
        FUN_1400ae4f0(local_ca0);
        uStack_cf0 = 0x1403c2887;
        FUN_14014b0a0(param_2,local_9d8);
      }
      else {
        uStack_cf0 = 0x1403c27e3;
        uVar7 = FUN_140263780(lVar20 + 0xbe4,local_508);
        uStack_cf0 = 0x1403c27f3;
        FUN_140156920(local_9d8,uVar7);
        uStack_cf0 = 0x1403c2800;
        FUN_14013a6e0(local_508);
        if ((local_9c8 == 0) && (local_9a8 == 0)) {
          uStack_cf0 = 0x1403c2824;
          uVar7 = FUN_140698f70(local_ca0,"LEADER_MARTIAL_VALUE");
          uStack_cf0 = 0x1403c2833;
          FUN_1400cd750(local_9d8,uVar7);
          uStack_cf0 = 0x1403c283c;
          FUN_1400ae4f0(local_ca0);
        }
        uStack_cf0 = 0x1403c284b;
        FUN_14014b0a0(param_2,local_9d8);
      }
      goto LAB_1403c3e5c;
    }
  }
  param_2[3] = 0xf;
  param_2[2] = 0;
  puVar12 = param_2;
  if (0xf < param_2[3]) {
    puVar12 = (ulonglong *)*param_2;
  }
  *(undefined1 *)puVar12 = 0;
  if (local_9c0 < 0x10) {
    if (local_9c8 != 0xffffffffffffffff) {
      uStack_cf0 = 0x1403c3d4c;
      FUN_140e3b2e0(param_2,local_9d8);
    }
  }
  else {
    *param_2 = local_9d8[0];
    local_9d8[0] = 0;
  }
  param_2[2] = local_9c8;
  param_2[3] = local_9c0;
  local_9c0 = 0xf;
  local_9c8 = 0;
  local_9d8[0] = local_9d8[0] & 0xffffffffffffff00;
  param_2[7] = 0xf;
  param_2[6] = 0;
  if (param_2[7] < 0x10) {
    puVar12 = param_2 + 4;
  }
  else {
    puVar12 = (ulonglong *)param_2[4];
  }
  *(undefined1 *)puVar12 = 0;
  if (local_9a0 < 0x10) {
    if (local_9a8 != 0xffffffffffffffff) {
      uStack_cf0 = 0x1403c3dd8;
      FUN_140e3b2e0(param_2 + 4,local_9b8);
    }
  }
  else {
    param_2[4] = local_9b8[0];
    local_9b8[0] = 0;
  }
  param_2[6] = local_9a8;
  param_2[7] = local_9a0;
  local_9a0 = 0xf;
  local_9a8 = 0;
  local_9b8[0] = local_9b8[0] & 0xffffffffffffff00;
  *(undefined1 *)(param_2 + 8) = (undefined1)local_998;
  *(undefined1 *)((longlong)param_2 + 0x41) = local_998._1_1_;
  uStack_cf0 = 0x1403c3e41;
  FUN_14014b270(param_2 + 9,local_990);
  *(undefined4 *)(param_2 + 0x97) = local_520;
  *(undefined1 *)((longlong)param_2 + 0x4bc) = local_51c;
LAB_1403c3e5c:
  uStack_cf0 = 0x1403c3e68;
  FUN_14013a6e0(local_9d8);
  return param_2;
}

