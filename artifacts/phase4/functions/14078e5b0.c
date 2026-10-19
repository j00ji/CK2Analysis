
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14078e5b0(longlong *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  void *pvVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int *piVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  undefined8 *puVar27;
  int iVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int local_res20 [2];
  int local_148;
  int local_144;
  uint local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  uint local_c4;
  longlong local_c0;
  longlong *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *puStack_98;
  longlong local_90;
  void *local_88;
  void *local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  uVar26 = 0;
  local_res20[0] = 0;
  FUN_140790bf0(param_1,param_2,local_res20);
  if (DAT_1417e3b38 == (undefined8 *)0x0) {
    DAT_1417e3b38 = operator_new(8);
    *DAT_1417e3b38 = &PTR_FUN_14114aef8;
  }
  puVar15 = DAT_1417e3b38;
  *(undefined4 *)*param_1 = DAT_1417e3b4c;
  if (puVar15 == (undefined8 *)0x0) {
    DAT_1417e3b38 = operator_new(8);
    *DAT_1417e3b38 = &PTR_FUN_14114aef8;
  }
  *(undefined4 *)(*param_1 + 4) = DAT_1417e3b48;
  lVar12 = DAT_1416e3260;
  if ((DAT_1416e3260 != 0) && (*(char *)(DAT_1416e3260 + 0x62a) != '\0')) {
    plVar14 = *(longlong **)(DAT_1416e3260 + 0xc0);
    while (plVar14 != (longlong *)0x0) {
      lVar11 = *plVar14;
      plVar14 = (longlong *)plVar14[2];
      *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + *(int *)(lVar11 + 0x124);
    }
    *(undefined4 *)(*param_1 + 0xc) = *(undefined4 *)(lVar12 + 0x434);
    if (((*(char *)(lVar12 + 0x62a) != '\0') && (0 < DAT_1417e3b70)) && ((int)param_2 == 0x280b)) {
      local_134 = 0;
      local_11c = 0;
      local_118 = 0;
      local_130 = 0;
      local_12c = 0;
      local_128 = 0;
      local_ec = 0;
      local_124 = 0;
      local_144 = 0;
      local_res20[0] = 0;
      local_120 = 0;
      local_114 = 0;
      local_110 = 0;
      local_10c = 0;
      local_104 = 0;
      local_100 = 0;
      local_fc = 0;
      local_f8 = 0;
      local_f4 = 0;
      local_f0 = 0;
      local_c4 = 0;
      local_138 = 0;
      local_108 = 0;
      local_e8 = 0;
      local_e4 = 0;
      local_e0 = 0;
      local_dc = 0;
      local_d8 = 0;
      local_d4 = 0;
      local_d0 = 0;
      local_cc = 0;
      local_c8 = 0;
      local_b0 = (longlong *)(lVar12 + 0x100);
      lVar11 = (longlong)(int)(*(longlong *)(lVar12 + 0x108) - *local_b0 >> 3);
      local_c0 = 0;
      uVar23 = uVar26;
      uVar24 = uVar26;
      if (0 < lVar11) {
        do {
          iVar28 = DAT_1414462f0;
          uVar20 = 0;
          lVar2 = *(longlong *)(*local_b0 + local_c0 * 8);
          uVar26 = uVar26 + 1;
          auVar36._4_4_ = uVar26;
          auVar36._0_4_ = uVar26;
          auVar36._8_4_ = uVar26;
          auVar36._12_4_ = uVar26;
          lVar13 = *(longlong *)(lVar2 + 0x28);
          if ((lVar13 != 0) && ((*(byte *)(lVar13 + 0xd6d) & 2) != 0)) {
            local_130 = local_130 + uVar26;
          }
          uVar23 = uVar23 + *(int *)(lVar2 + 0x14);
          local_c4 = uVar23 - 0xffff;
          if (uVar23 < 0x10000) {
            local_c4 = uVar23;
          }
          uVar24 = uVar24 + *(int *)(lVar2 + 0x14);
          local_138 = uVar24 - 0xffff;
          if (uVar24 < 0x10000) {
            local_138 = uVar24;
          }
          if ((7 < (ulonglong)(*(longlong *)(lVar2 + 0xf0) - *(longlong *)(lVar2 + 0xe8))) ||
             (7 < (ulonglong)(*(longlong *)(lVar2 + 0x108) - *(longlong *)(lVar2 + 0x100)))) {
            local_108 = local_108 +
                        ((int)(*(longlong *)(lVar2 + 0x108) - *(longlong *)(lVar2 + 0x100) >> 3) +
                        (int)(*(longlong *)(lVar2 + 0xf0) - *(longlong *)(lVar2 + 0xe8) >> 3)) *
                        uVar26;
          }
          cVar5 = FUN_140789820(lVar12,lVar2);
          iVar22 = uVar26 + local_12c;
          if (cVar5 != '\0') {
            iVar22 = local_12c;
          }
          if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0x128) != 0)) {
            lVar12 = FUN_14036e8d0(*(undefined8 *)(lVar13 + 0x128));
            local_128 = local_128 + uVar26 + *(int *)(lVar12 + 0x14) * uVar26;
          }
          lVar12 = *(longlong *)(lVar2 + 0x28);
          plVar14 = DAT_1416e3ac0;
          if (lVar12 != 0) {
            if (*(longlong *)(lVar12 + 0x118) != 0) {
              local_ec = local_ec + uVar26;
            }
            if (lVar12 != 0) {
              plVar14 = *(longlong **)(lVar12 + 0xf0);
            }
          }
          cVar5 = (**(code **)(*plVar14 + 0x40))();
          if (cVar5 != '\0') {
            local_110 = local_110 + uVar26;
          }
          lVar12 = *(longlong *)(lVar2 + 0x28);
          lVar13 = DAT_1416e23a0;
          if (lVar12 != 0) {
            lVar13 = *(longlong *)(lVar12 + 0xafc);
          }
          if (*(int *)(lVar13 + 8) != 0) {
            lVar13 = DAT_1416e23a0;
            if (lVar12 != 0) {
              lVar13 = *(longlong *)(lVar12 + 0xafc);
            }
            local_10c = local_10c + *(int *)(lVar13 + 8) * uVar26;
          }
          plVar14 = (longlong *)(lVar12 + 0x1b4);
          if (lVar12 == 0) {
            plVar14 = &DAT_1417e6c28;
          }
          local_124 = local_124 + (int)(*plVar14 >> 0xf);
          piVar17 = (int *)(lVar12 + 0x1a4);
          if (lVar12 == 0) {
            piVar17 = &DAT_141061850;
          }
          local_e8 = local_e8 + *piVar17 / 1000;
          piVar17 = (int *)(lVar12 + 0x1a8);
          if (lVar12 == 0) {
            piVar17 = &DAT_141061850;
          }
          local_e4 = local_e4 + *piVar17 / 1000;
          if ((lVar12 != 0) && (lVar12 != -0x614)) {
            local_114 = local_114 +
                        (int)(*(longlong *)(lVar12 + 0x62c) - *(longlong *)(lVar12 + 0x624) >> 3) *
                        uVar26;
          }
          lVar13 = *(longlong *)(lVar2 + 0x150);
          uVar23 = (uint)(*(longlong *)(lVar2 + 0x158) - lVar13 >> 1);
          uVar18 = uVar20;
          if (((0 < (int)uVar23) && (7 < uVar23)) && (1 < iVar28)) {
            uVar24 = uVar23 & 0x80000007;
            if ((int)uVar24 < 0) {
              uVar24 = (uVar24 - 1 | 0xfffffff8) + 1;
            }
            auVar31 = ZEXT816(0);
            auVar35 = ZEXT816(0);
            do {
              auVar30._8_8_ = 0;
              auVar30._0_8_ = *(ulonglong *)(lVar13 + uVar18 * 2);
              auVar30 = pmovzxwd(in_XMM1,auVar30);
              auVar32._0_4_ = auVar30._0_4_ + _DAT_141165170;
              auVar32._4_4_ = auVar30._4_4_ + _UNK_141165174;
              auVar32._8_4_ = auVar30._8_4_ + _UNK_141165178;
              auVar32._12_4_ = auVar30._12_4_ + _UNK_14116517c;
              auVar30 = pmulld(auVar32,auVar36);
              auVar33._0_4_ = auVar30._0_4_ + auVar31._0_4_;
              auVar33._4_4_ = auVar30._4_4_ + auVar31._4_4_;
              auVar33._8_4_ = auVar30._8_4_ + auVar31._8_4_;
              auVar33._12_4_ = auVar30._12_4_ + auVar31._12_4_;
              auVar31._8_8_ = 0;
              auVar31._0_8_ = *(ulonglong *)(lVar13 + 8 + uVar18 * 2);
              auVar31 = pmovzxwd(auVar33,auVar31);
              auVar34._0_4_ = auVar31._0_4_ + _DAT_141165170;
              auVar34._4_4_ = auVar31._4_4_ + _UNK_141165174;
              auVar34._8_4_ = auVar31._8_4_ + _UNK_141165178;
              auVar34._12_4_ = auVar31._12_4_ + _UNK_14116517c;
              auVar31 = pmulld(auVar34,auVar36);
              in_XMM1._0_4_ = auVar31._0_4_ + auVar35._0_4_;
              in_XMM1._4_4_ = auVar31._4_4_ + auVar35._4_4_;
              in_XMM1._8_4_ = auVar31._8_4_ + auVar35._8_4_;
              in_XMM1._12_4_ = auVar31._12_4_ + auVar35._12_4_;
              uVar18 = uVar18 + 8;
              auVar31 = auVar33;
              auVar35 = in_XMM1;
            } while ((longlong)uVar18 < (longlong)(int)(uVar23 - uVar24));
            local_144 = local_144 +
                        auVar33._0_4_ + in_XMM1._0_4_ + auVar33._8_4_ + in_XMM1._8_4_ +
                        auVar33._4_4_ + in_XMM1._4_4_ + auVar33._12_4_ + in_XMM1._12_4_;
          }
          lVar21 = (longlong)(int)uVar23;
          if ((longlong)uVar18 < lVar21) {
            uVar19 = uVar20;
            uVar25 = uVar20;
            if (1 < (longlong)(lVar21 - uVar18)) {
              do {
                uVar19 = (ulonglong)((int)uVar19 + (*(ushort *)(lVar13 + uVar18 * 2) + 1) * uVar26);
                uVar25 = (ulonglong)
                         ((int)uVar25 + (*(ushort *)(lVar13 + 2 + uVar18 * 2) + 1) * uVar26);
                uVar18 = uVar18 + 2;
              } while ((longlong)uVar18 < lVar21 + -1);
            }
            if ((longlong)uVar18 < lVar21) {
              local_144 = local_144 + (*(ushort *)(lVar13 + uVar18 * 2) + 1) * uVar26;
            }
            local_144 = local_144 + (int)uVar19 + (int)uVar25;
          }
          iVar28 = (int)*(char *)(lVar2 + 0x1e1);
          if (lVar12 == 0) {
            iVar6 = (int)(*(longlong *)(lVar2 + 0x158) - lVar13 >> 1);
            if (iVar6 < 1) goto LAB_14078ebff;
            iVar7 = FUN_14017efe0(0);
            iVar10 = FUN_14017f040(0);
            uVar18 = uVar20;
            lVar12 = DAT_1416e3b00;
            do {
              lVar13 = *(longlong *)(lVar2 + 0x150);
              if (lVar12 == 0) {
                local_80 = operator_new(600);
                lVar12 = FUN_140aacc50(local_80);
                DAT_1416e3b00 = lVar12;
              }
              uVar1 = *(ushort *)(lVar13 + uVar18 * 2);
              lVar13 = DAT_1416e3b08;
              if ((int)(uint)uVar1 <
                  (int)(*(longlong *)(lVar12 + 0x18) - *(longlong *)(lVar12 + 0x10) >> 3)) {
                lVar13 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (ulonglong)uVar1 * 8);
              }
              iVar28 = iVar28 + *(int *)(lVar13 + (longlong)iVar7 * 4 + 0x28) / 1000;
              uVar23 = (int)uVar20 + *(int *)((longlong)iVar10 * 4 + 0x28 + lVar13);
              uVar20 = (ulonglong)uVar23;
              uVar18 = uVar18 + 1;
            } while ((longlong)uVar18 < (longlong)iVar6);
          }
          else {
            iVar28 = iVar28 + *(int *)(lVar12 + 0x798) / 1000;
            uVar20 = (ulonglong)*(uint *)(lVar12 + 0x89c);
LAB_14078ebff:
            uVar23 = (uint)uVar20;
            lVar12 = DAT_1416e3b00;
          }
          uVar20 = 0;
          uVar24 = 0;
          if ((int)uVar23 < 0) {
            uVar24 = uVar23;
          }
          uVar24 = (int)uVar24 / 1000 + iVar28;
          uVar23 = 0;
          if (-1 < (int)uVar24) {
            uVar23 = uVar24;
          }
          local_res20[0] = local_res20[0] + uVar23 * uVar26;
          iVar28 = (int)*(char *)(lVar2 + 0x1e2);
          lVar13 = *(longlong *)(lVar2 + 0x28);
          if (lVar13 == 0) {
            iVar6 = (int)(*(longlong *)(lVar2 + 0x158) - *(longlong *)(lVar2 + 0x150) >> 1);
            if (0 < iVar6) {
              iVar7 = FUN_14017efe0(1);
              iVar10 = FUN_14017f040(1);
              uVar18 = uVar20;
              do {
                lVar13 = *(longlong *)(lVar2 + 0x150);
                if (lVar12 == 0) {
                  local_88 = operator_new(600);
                  lVar12 = FUN_140aacc50(local_88);
                  DAT_1416e3b00 = lVar12;
                }
                uVar1 = *(ushort *)(lVar13 + uVar18 * 2);
                lVar13 = DAT_1416e3b08;
                if ((int)(uint)uVar1 <
                    (int)(*(longlong *)(lVar12 + 0x18) - *(longlong *)(lVar12 + 0x10) >> 3)) {
                  lVar13 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (ulonglong)uVar1 * 8);
                }
                iVar28 = iVar28 + *(int *)(lVar13 + (longlong)iVar7 * 4 + 0x28) / 1000;
                uVar20 = (ulonglong)
                         (uint)((int)uVar20 + *(int *)((longlong)iVar10 * 4 + 0x28 + lVar13));
                uVar18 = uVar18 + 1;
              } while ((longlong)uVar18 < (longlong)iVar6);
            }
            iVar6 = (int)uVar20;
          }
          else {
            iVar28 = iVar28 + *(int *)(lVar13 + 0x790) / 1000;
            iVar6 = *(int *)(lVar13 + 0x894);
          }
          uVar20 = 0;
          iVar7 = 0;
          if (iVar6 < 0) {
            iVar7 = iVar6;
          }
          iVar28 = iVar7 / 1000 + iVar28;
          iVar6 = 0;
          if (-1 < iVar28) {
            iVar6 = iVar28;
          }
          local_res20[0] = local_res20[0] + iVar6 * uVar26;
          iVar28 = (int)*(char *)(lVar2 + 0x1e3);
          lVar13 = *(longlong *)(lVar2 + 0x28);
          if (lVar13 == 0) {
            iVar6 = (int)(*(longlong *)(lVar2 + 0x158) - *(longlong *)(lVar2 + 0x150) >> 1);
            if (0 < iVar6) {
              iVar7 = FUN_14017efe0(2);
              iVar10 = FUN_14017f040(2);
              uVar18 = uVar20;
              do {
                lVar13 = *(longlong *)(lVar2 + 0x150);
                if (lVar12 == 0) {
                  local_60 = operator_new(600);
                  lVar12 = FUN_140aacc50(local_60);
                  DAT_1416e3b00 = lVar12;
                }
                uVar1 = *(ushort *)(lVar13 + uVar18 * 2);
                lVar13 = DAT_1416e3b08;
                if ((int)(uint)uVar1 <
                    (int)(*(longlong *)(lVar12 + 0x18) - *(longlong *)(lVar12 + 0x10) >> 3)) {
                  lVar13 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (ulonglong)uVar1 * 8);
                }
                iVar28 = iVar28 + *(int *)(lVar13 + (longlong)iVar7 * 4 + 0x28) / 1000;
                uVar20 = (ulonglong)
                         (uint)((int)uVar20 + *(int *)(lVar13 + (longlong)iVar10 * 4 + 0x28));
                uVar18 = uVar18 + 1;
              } while ((longlong)uVar18 < (longlong)iVar6);
            }
            iVar6 = (int)uVar20;
          }
          else {
            iVar28 = iVar28 + *(int *)(lVar13 + 0x79c) / 1000;
            iVar6 = *(int *)(lVar13 + 0x8a0);
          }
          uVar20 = 0;
          iVar7 = 0;
          if (iVar6 < 0) {
            iVar7 = iVar6;
          }
          iVar28 = iVar7 / 1000 + iVar28;
          iVar6 = 0;
          if (-1 < iVar28) {
            iVar6 = iVar28;
          }
          local_res20[0] = local_res20[0] + iVar6 * uVar26;
          iVar28 = (int)*(char *)(lVar2 + 0x1e4);
          lVar13 = *(longlong *)(lVar2 + 0x28);
          if (lVar13 == 0) {
            iVar6 = (int)(*(longlong *)(lVar2 + 0x158) - *(longlong *)(lVar2 + 0x150) >> 1);
            if (0 < iVar6) {
              iVar7 = FUN_14017efe0(3);
              iVar10 = FUN_14017f040(3);
              uVar18 = uVar20;
              do {
                lVar13 = *(longlong *)(lVar2 + 0x150);
                if (lVar12 == 0) {
                  local_58 = operator_new(600);
                  lVar12 = FUN_140aacc50(local_58);
                  DAT_1416e3b00 = lVar12;
                }
                uVar1 = *(ushort *)(lVar13 + uVar18 * 2);
                lVar13 = DAT_1416e3b08;
                if ((int)(uint)uVar1 <
                    (int)(*(longlong *)(lVar12 + 0x18) - *(longlong *)(lVar12 + 0x10) >> 3)) {
                  lVar13 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (ulonglong)uVar1 * 8);
                }
                iVar28 = iVar28 + *(int *)(lVar13 + (longlong)iVar7 * 4 + 0x28) / 1000;
                uVar20 = (ulonglong)
                         (uint)((int)uVar20 + *(int *)(lVar13 + (longlong)iVar10 * 4 + 0x28));
                uVar18 = uVar18 + 1;
              } while ((longlong)uVar18 < (longlong)iVar6);
            }
            iVar6 = (int)uVar20;
          }
          else {
            iVar28 = iVar28 + *(int *)(lVar13 + 0x794) / 1000;
            iVar6 = *(int *)(lVar13 + 0x898);
          }
          uVar20 = 0;
          iVar7 = 0;
          if (iVar6 < 0) {
            iVar7 = iVar6;
          }
          iVar28 = iVar7 / 1000 + iVar28;
          iVar6 = 0;
          if (-1 < iVar28) {
            iVar6 = iVar28;
          }
          local_res20[0] = local_res20[0] + iVar6 * uVar26;
          iVar28 = (int)*(char *)(lVar2 + 0x1e5);
          lVar13 = *(longlong *)(lVar2 + 0x28);
          if (lVar13 == 0) {
            iVar6 = (int)(*(longlong *)(lVar2 + 0x158) - *(longlong *)(lVar2 + 0x150) >> 1);
            if (0 < iVar6) {
              iVar7 = FUN_14017efe0(4);
              iVar10 = FUN_14017f040(4);
              uVar18 = uVar20;
              do {
                lVar13 = *(longlong *)(lVar2 + 0x150);
                if (lVar12 == 0) {
                  local_a8 = operator_new(600);
                  lVar12 = FUN_140aacc50(local_a8);
                  DAT_1416e3b00 = lVar12;
                }
                uVar1 = *(ushort *)(lVar13 + uVar18 * 2);
                lVar13 = DAT_1416e3b08;
                if ((int)(uint)uVar1 <
                    (int)(*(longlong *)(lVar12 + 0x18) - *(longlong *)(lVar12 + 0x10) >> 3)) {
                  lVar13 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + (ulonglong)uVar1 * 8);
                }
                iVar28 = iVar28 + *(int *)(lVar13 + (longlong)iVar7 * 4 + 0x28) / 1000;
                uVar20 = (ulonglong)
                         (uint)((int)uVar20 + *(int *)(lVar13 + (longlong)iVar10 * 4 + 0x28));
                uVar18 = uVar18 + 1;
              } while ((longlong)uVar18 < (longlong)iVar6);
            }
            iVar6 = (int)uVar20;
          }
          else {
            iVar28 = iVar28 + *(int *)(lVar13 + 0x7a0) / 1000;
            iVar6 = *(int *)(lVar13 + 0x8a4);
          }
          lVar12 = 0;
          iVar10 = 0;
          iVar7 = iVar10;
          if (iVar6 < 0) {
            iVar7 = iVar6;
          }
          iVar28 = iVar7 / 1000 + iVar28;
          iVar6 = 0;
          if (-1 < iVar28) {
            iVar6 = iVar28;
          }
          local_res20[0] = local_res20[0] + iVar6 * uVar26;
          iVar28 = FUN_1401aca60(lVar2,0);
          iVar6 = FUN_1401aca60(lVar2,1);
          iVar7 = FUN_1401aca60(lVar2,2);
          iVar8 = FUN_1401aca60(lVar2,3);
          iVar9 = FUN_1401aca60(lVar2,4);
          local_100 = local_100 + iVar28 * uVar26 + iVar6 * uVar26 + iVar7 * uVar26 + iVar8 * uVar26
                      + iVar9 * uVar26;
          if ((*(longlong *)(lVar2 + 0x28) != 0) &&
             ((*(byte *)(*(longlong *)(lVar2 + 0x28) + 0xd6d) & 1) != 0)) {
            local_120 = local_120 + uVar26;
          }
          local_fc = local_fc + *(ushort *)(lVar2 + 0x1ca) * uVar26;
          cVar5 = FUN_1401ad4a0(lVar2);
          if (cVar5 != '\0') {
            local_f8 = local_f8 + uVar26;
          }
          if ((*(longlong *)(lVar2 + 0x28) != 0) &&
             ((*(byte *)(*(longlong *)(lVar2 + 0x28) + 0xd6c) & 2) != 0)) {
            local_f4 = local_f4 + uVar26;
          }
          iVar28 = FUN_1401ad590(lVar2);
          local_f0 = local_f0 + iVar28 * uVar26;
          lVar13 = *(longlong *)(lVar2 + 0x28);
          iVar28 = iVar10;
          if (lVar13 != 0) {
            iVar28 = *(int *)(lVar13 + 0xd54);
          }
          local_e0 = local_e0 + iVar28 * uVar26;
          iVar28 = iVar10;
          if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0xb0) != 0)) {
            lVar21 = lVar12;
            if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0xb0) != 0)) {
              lVar21 = *(longlong *)(lVar13 + 0xb0) + 0x10;
            }
            iVar28 = *(int *)(lVar21 + 0x10) * uVar26;
          }
          local_dc = local_dc + iVar28;
          if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0xb0) != 0)) {
            if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0xb0) != 0)) {
              lVar12 = *(longlong *)(lVar13 + 0xb0) + 0x28;
            }
            iVar10 = *(int *)(lVar12 + 0x10) * uVar26;
          }
          local_d8 = local_d8 + iVar10;
          if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0x138) != 0)) {
            lVar12 = FUN_1400b1f00(lVar2);
            local_d4 = local_d4 + *(int *)(*(longlong *)(lVar12 + 0x10) + 0x398) * uVar26;
          }
          local_c0 = local_c0 + 1;
          lVar12 = DAT_1416e3260;
          local_12c = iVar22;
          uVar23 = local_c4;
          uVar24 = local_138;
        } while (local_c0 < lVar11);
      }
      iVar28 = 0;
      uVar20 = 0;
      local_80 = (void *)(*(longlong *)(lVar12 + 0x108) - *(longlong *)(lVar12 + 0x100) >> 3);
      iVar22 = (int)(*(longlong *)(lVar12 + 0x280) - *(longlong *)(lVar12 + 0x278) >> 3);
      if (0 < iVar22) {
        uVar18 = uVar20;
        iVar6 = iVar28;
        iVar7 = iVar28;
        do {
          uVar26 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar26;
          lVar11 = *(longlong *)(*(longlong *)(lVar12 + 0x278) + uVar18 * 8);
          local_134 = local_134 + *(int *)(lVar11 + 0xcd0) * uVar26;
          for (plVar14 = *(longlong **)(lVar11 + 0xcc0); plVar14 != (longlong *)0x0;
              plVar14 = (longlong *)plVar14[2]) {
            lVar11 = *plVar14;
            local_104 = uVar26 + iVar28;
            if (*(int *)(lVar11 + 0xa0) < 1) {
              local_104 = iVar28;
            }
            puVar15 = (undefined8 *)(lVar11 + 0x38);
            if (lVar11 == 0) {
              puVar15 = (undefined8 *)0x0;
            }
            for (plVar3 = (longlong *)*puVar15; plVar3 != (longlong *)0x0;
                plVar3 = (longlong *)plVar3[2]) {
              lVar11 = *plVar3;
              local_11c = iVar7 + (*(int *)(lVar11 + 0xa8) + *(int *)(lVar11 + 0xac) +
                                   *(int *)(lVar11 + 0xb0) + *(int *)(lVar11 + 0xb4) +
                                   *(int *)(lVar11 + 0xb8) + *(int *)(lVar11 + 0xbc) +
                                   *(int *)(lVar11 + 0xc0) + *(int *)(lVar11 + 0xc4)) * uVar26;
              local_118 = iVar6 + uVar26;
              iVar7 = local_11c;
              iVar6 = local_118;
            }
            iVar28 = local_104;
          }
          uVar18 = uVar18 + 1;
        } while ((longlong)uVar18 < (longlong)iVar22);
      }
      lVar11 = 0;
      if (DAT_1416e3928 == (undefined8 *)0x0) {
        DAT_1416e3928 = operator_new(0x60);
        *(undefined4 *)(DAT_1416e3928 + 1) = 0x18e;
        *DAT_1416e3928 = &PTR_FUN_1410e6698;
        DAT_1416e3928[2] = 0;
        DAT_1416e3928[3] = 0;
        DAT_1416e3928[4] = 0;
        DAT_1416e3928[5] = 0;
        DAT_1416e3928[6] = 0;
        DAT_1416e3928[7] = 0;
        *(undefined1 *)(DAT_1416e3928 + 8) = 0;
        DAT_1416e3928[9] = 0;
        DAT_1416e3928[10] = 0;
        DAT_1416e3928[0xb] = 0;
        lVar12 = DAT_1416e3260;
        local_a8 = DAT_1416e3928;
      }
      iVar28 = (int)((longlong)(DAT_1416e3928[3] - DAT_1416e3928[2]) >> 3);
      if (0 < iVar28) {
        iVar22 = 1;
        puVar15 = DAT_1416e3928;
        do {
          if (puVar15 == (undefined8 *)0x0) {
            puVar15 = operator_new(0x60);
            *(undefined4 *)(puVar15 + 1) = 0x18e;
            *puVar15 = &PTR_FUN_1410e6698;
            puVar15[2] = 0;
            puVar15[3] = 0;
            puVar15[4] = 0;
            puVar15[5] = 0;
            puVar15[6] = 0;
            puVar15[7] = 0;
            *(undefined1 *)(puVar15 + 8) = 0;
            puVar15[9] = 0;
            puVar15[10] = 0;
            puVar15[0xb] = 0;
            DAT_1416e3928 = puVar15;
            local_a8 = puVar15;
          }
          lVar12 = DAT_1416e3930;
          if ((-1 < lVar11) && (iVar22 + -1 < (int)((longlong)(puVar15[3] - puVar15[2]) >> 3))) {
            lVar12 = *(longlong *)(puVar15[2] + lVar11 * 8);
          }
          iVar6 = FUN_14087f910(lVar12,1,0);
          local_d0 = local_d0 + iVar6 * iVar22;
          iVar6 = FUN_14087fb20(lVar12);
          local_cc = local_cc + iVar6 * iVar22;
          local_c8 = local_c8 + (uint)*(ushort *)(*(longlong *)(lVar12 + 0x20) + 0x390) * iVar22;
          iVar22 = iVar22 + 1;
          lVar11 = lVar11 + 1;
          lVar12 = DAT_1416e3260;
        } while (lVar11 < iVar28);
      }
      iVar10 = 0;
      local_88 = (void *)(*(longlong *)(lVar12 + 0x3c0) - *(longlong *)(lVar12 + 0x3b8) >> 3);
      iVar7 = 0;
      iVar6 = 0;
      local_148 = 0;
      iVar22 = 0;
      local_a0 = (undefined8 *)0x0;
      puStack_98 = (undefined8 *)0x0;
      local_90 = 0;
      iVar8 = (int)local_88;
      lVar11 = 0;
      puVar15 = (undefined8 *)0x0;
      puVar27 = (undefined8 *)0x0;
      iVar28 = 0;
      if (0 < iVar8) {
        iVar9 = 0;
        iVar7 = iVar10;
        local_148 = iVar10;
        iVar22 = iVar10;
        iVar6 = iVar10;
        do {
          iVar9 = iVar9 + 1;
          lVar2 = *(longlong *)(*(longlong *)(lVar12 + 0x3b8) + lVar11 * 8);
          iVar7 = iVar7 + (int)(*(longlong *)(lVar2 + 0x38) - *(longlong *)(lVar2 + 0x30) >> 3) *
                          iVar9;
          iVar6 = iVar6 + (int)(*(longlong *)(lVar2 + 0x68) - *(longlong *)(lVar2 + 0x60) >> 3) *
                          iVar9;
          local_148 = local_148 +
                      (int)(*(longlong *)(lVar2 + 0x50) - *(longlong *)(lVar2 + 0x48) >> 2) * iVar9;
          iVar10 = iVar10 + iVar9 * (int)(*(longlong *)(lVar2 + 0x80) - *(longlong *)(lVar2 + 0x78)
                                         >> 2);
          iVar22 = iVar22 + iVar9 * (int)(*(longlong *)(lVar2 + 0xf8) - *(longlong *)(lVar2 + 0xf0)
                                         >> 3);
          local_b0 = *(longlong **)(lVar2 + 0x150);
          for (puVar16 = puVar27; puVar16 != puVar15; puVar16 = puVar16 + 1) {
            if ((longlong *)*puVar16 == local_b0) {
              if (puVar16 != puVar15) goto LAB_14078f67c;
              break;
            }
          }
          FUN_1400b12c0(&local_a0,&local_b0);
          puVar15 = puStack_98;
          lVar12 = DAT_1416e3260;
          puVar27 = local_a0;
LAB_14078f67c:
          lVar11 = lVar11 + 1;
          iVar28 = iVar10;
        } while (lVar11 < iVar8);
      }
      pvVar4 = local_88;
      lVar12 = local_90;
      uVar20 = 0;
      uVar26 = 0;
      if (DAT_1416e3ac8 == 0) {
        local_a8 = operator_new(0x1e8);
        DAT_1416e3ac8 = FUN_140a82e10(local_a8);
      }
      local_78 = 0;
      lStack_70 = 0;
      local_68 = 0;
      uVar29 = FUN_1400cd9a0(&local_78,DAT_1416e3ac8 + 0x10);
      iVar10 = (int)(lStack_70 - local_78 >> 3);
      uVar18 = uVar20;
      if (0 < iVar10) {
        do {
          uVar26 = (int)uVar18 + (uint)*(ushort *)(*(longlong *)(local_78 + uVar20 * 8) + 700);
          uVar20 = uVar20 + 1;
          uVar18 = (ulonglong)uVar26;
        } while ((longlong)uVar20 < (longlong)iVar10);
      }
      *(int *)(*param_1 + 0x10) = local_134;
      *(int *)(*param_1 + 0x14) = (int)local_80;
      *(int *)(*param_1 + 0x18) = local_130;
      *(int *)(*param_1 + 0x1c) = local_12c;
      *(int *)(*param_1 + 0x20) = local_128;
      *(int *)(*param_1 + 0x24) = local_124;
      *(int *)(*param_1 + 0x28) = local_144;
      *(int *)(*param_1 + 0x2c) = local_res20[0];
      *(int *)(*param_1 + 0x30) = local_120;
      *(int *)(*param_1 + 0x34) = local_11c;
      *(int *)(*param_1 + 0x38) = local_118;
      *(int *)(*param_1 + 0x3c) = local_114;
      *(int *)(*param_1 + 0x40) = local_110;
      *(int *)(*param_1 + 0x44) = local_10c;
      *(uint *)(*param_1 + 0x48) = local_c4 << 0x10 | local_138;
      *(int *)(*param_1 + 0x4c) = local_108;
      *(int *)(*param_1 + 0x50) = local_104;
      *(int *)(*param_1 + 0x54) = local_100;
      *(int *)(*param_1 + 0x58) = local_fc;
      *(int *)(*param_1 + 0x5c) = local_f8;
      *(int *)(*param_1 + 0x60) = local_f4;
      *(int *)(*param_1 + 100) = local_f0;
      *(int *)(*param_1 + 0x68) = local_ec;
      *(int *)(*param_1 + 0x6c) = local_e8;
      *(int *)(*param_1 + 0x70) = local_e4;
      *(int *)(*param_1 + 0x74) = local_e0;
      *(int *)(*param_1 + 0x78) = local_dc;
      *(int *)(*param_1 + 0x7c) = local_d8;
      *(int *)(*param_1 + 0x80) = local_d4;
      *(int *)(*param_1 + 0x84) = local_d0;
      *(int *)(*param_1 + 0x88) = local_cc;
      *(int *)(*param_1 + 0x8c) = local_c8;
      *(int *)(*param_1 + 0x90) = (int)pvVar4;
      *(int *)(*param_1 + 0x94) = iVar7;
      *(int *)(*param_1 + 0x98) = local_148;
      *(int *)(*param_1 + 0x9c) = iVar6;
      *(int *)(*param_1 + 0xa0) = iVar28;
      *(int *)(*param_1 + 0xa4) = iVar22;
      *(int *)(*param_1 + 0xa8) = (int)((longlong)puVar15 - (longlong)puVar27 >> 3);
      *(uint *)(*param_1 + 0xac) = uVar26;
      *(undefined4 *)(*param_1 + 0xb0) = 0;
      *(undefined4 *)(*param_1 + 0xb4) = 0;
      *(undefined4 *)(*param_1 + 0xb8) = 0;
      *(undefined4 *)(*param_1 + 0xbc) = 0;
      *(undefined4 *)(*param_1 + 0xc0) = 0;
      if (local_78 != 0) {
        uVar29 = FUN_1400b09e0(0,local_78,local_68 - local_78 >> 3);
      }
      if (puVar27 != (undefined8 *)0x0) {
        FUN_1400b09e0(uVar29,puVar27,lVar12 - (longlong)puVar27 >> 3);
      }
    }
  }
  iVar28 = (int)(param_1[1] - *param_1 >> 2) + -1;
  if (-1 < iVar28) {
    lVar12 = (longlong)iVar28;
    piVar17 = (int *)(*param_1 + lVar12 * 4);
    do {
      if (*piVar17 != 0) {
        FUN_140790cc0(param_1,(longlong)(iVar28 + 1));
        return;
      }
      iVar28 = iVar28 + -1;
      piVar17 = piVar17 + -1;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  return;
}

