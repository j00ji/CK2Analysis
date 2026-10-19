
void FUN_14039d7d0(longlong param_1,int *param_2,int *param_3,undefined8 *param_4)

{
  undefined **ppuVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *piVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int *piVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  char *pcVar20;
  longlong lVar21;
  int iVar22;
  longlong local_res8;
  int *local_res10;
  int *local_res18;
  undefined8 *local_res20;
  int local_1f4;
  int local_1f0 [2];
  longlong local_1e8;
  longlong local_1e0;
  char local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  longlong local_178;
  byte local_170;
  undefined7 uStack_16f;
  undefined8 local_160;
  ulonglong local_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  undefined8 local_140;
  ulonglong local_138;
  undefined1 local_130 [16];
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  
  local_90 = 0xfffffffffffffffe;
  iVar18 = 0;
  iVar17 = 0;
  iVar16 = -1000;
  if ((*(int *)(param_1 + 0xb4) == 1) || (*(int *)(param_1 + 0xb4) == 0)) {
    if (*(char *)(param_1 + 0xc2) == '\0') {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x10);
      if (lVar12 + 0x48 + (longlong)*(int *)(param_1 + 0x78) * 200 == param_1) {
        lVar12 = (longlong)*(int *)(param_1 + 0x7c) * 200 +
                 *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
      }
      else {
        lVar12 = (longlong)*(int *)(param_1 + 0x7c) * 200 + lVar12;
      }
      if (*(char *)(lVar12 + 0x10a) == '\0') goto LAB_14039d8e8;
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x10);
      if (lVar12 + 0x48 + (longlong)*(int *)(param_1 + 0x78) * 200 == param_1) {
        lVar12 = (longlong)*(int *)(param_1 + 0x7c) * 200 +
                 *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
      }
      else {
        lVar12 = (longlong)*(int *)(param_1 + 0x7c) * 200 + lVar12;
      }
      iVar16 = *(int *)(lVar12 + 0x10c);
    }
    else {
      iVar16 = *(int *)(param_1 + 0xc4);
    }
    if (iVar16 < DAT_1416e2684) {
      iVar16 = DAT_1416e2684;
    }
    iVar16 = iVar16 * 1000;
  }
LAB_14039d8e8:
  iVar19 = (int)(*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80) >> 3);
  iVar22 = iVar17;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (0 < iVar19) {
    local_178 = (longlong)iVar19;
    local_1e0 = 0;
    iVar17 = iVar18;
    iVar22 = iVar18;
    do {
      if ((iVar16 != -1000) && (iVar16 <= iVar18)) break;
      local_1e8 = CONCAT44(local_1e8._4_4_,1000);
      plVar8 = *(longlong **)(*(longlong *)(local_res8 + 0x80) + local_1e0 * 8);
      iVar11 = (int)plVar8[0x15] + *(int *)((longlong)plVar8 + 0xac) + (int)plVar8[0x16] +
               *(int *)((longlong)plVar8 + 0xb4) + (int)plVar8[0x17] +
               *(int *)((longlong)plVar8 + 0xbc) + (int)plVar8[0x18] +
               *(int *)((longlong)plVar8 + 0xc4);
      iVar19 = iVar11;
      if ((-1 < iVar16) && (iVar16 < iVar11 + iVar18)) {
        iVar19 = iVar16 - iVar18;
        if (iVar11 == 0) {
          local_1e8 = CONCAT44(local_1e8._4_4_,0xffffffff);
        }
        else if (iVar19 + 0x189373U < 0x39580e) {
          local_1e8 = CONCAT44(local_1e8._4_4_,(iVar19 * 1000) / iVar11);
        }
        else {
          local_1e8 = (longlong)(int)(((longlong)iVar19 * 1000) / (longlong)iVar11);
        }
      }
      iVar18 = iVar18 + iVar19;
      local_1f0[0] = 0;
      local_1f4 = 0;
      FUN_140a2d950(plVar8,local_1f0,&local_1f4,local_res8,param_4 != (undefined8 *)0x0);
      iVar19 = (int)(((longlong)local_1f0[0] * (longlong)(int)local_1e8) / 1000);
      iVar17 = iVar17 + iVar19;
      iVar11 = (int)(((longlong)local_1f4 * (longlong)(int)local_1e8) / 1000);
      iVar22 = iVar22 + iVar11;
      param_4 = local_res20;
      if (local_res20 != (undefined8 *)0x0) {
        local_98 = 0xf;
        local_a0 = 0;
        local_b0[0] = 0;
        FUN_1400b0300(local_b0,&DAT_14108f99c,6);
        local_b8 = 0xf;
        local_c0 = 0;
        local_d0[0] = 0;
        FUN_1400b0300(local_d0,&DAT_14108f990,10);
        local_d8 = 0xf;
        local_e0 = 0;
        local_f0[0] = 0;
        FUN_1400b0300(local_f0,&DAT_141071bdc,4);
        uVar6 = (**(code **)(*plVar8 + 0x50))(plVar8,local_198);
        local_f8 = 0xf;
        local_100 = 0;
        local_110[0] = 0;
        pcVar20 = local_1d8;
        if (iVar11 < 0) {
          local_1d8[0] = '-';
          pcVar20 = local_1d8 + 1;
          iVar11 = -iVar11;
        }
        FUN_140d5e4a0(iVar11 / 1000,pcVar20);
        if (local_1d8[0] == '\0') {
          lVar21 = 0;
        }
        else {
          lVar12 = -1;
          do {
            lVar21 = lVar12 + 1;
            lVar3 = lVar12 + 1;
            lVar12 = lVar21;
          } while (local_1d8[lVar3] != '\0');
        }
        FUN_1400b0300(local_110,local_1d8,lVar21);
        local_118 = 0xf;
        local_120 = 0;
        local_130[0] = 0;
        pcVar20 = local_1d8;
        if (iVar19 < 0) {
          local_1d8[0] = '-';
          pcVar20 = local_1d8 + 1;
          iVar19 = -iVar19;
        }
        FUN_140d5e4a0(iVar19 / 1000,pcVar20);
        if (local_1d8[0] == '\0') {
          lVar21 = 0;
        }
        else {
          lVar12 = -1;
          do {
            lVar21 = lVar12 + 1;
            lVar3 = lVar12 + 1;
            lVar12 = lVar21;
          } while (local_1d8[lVar3] != '\0');
        }
        FUN_1400b0300(local_130,local_1d8,lVar21);
        uVar6 = FUN_140d5f250(uVar6,local_1b8,local_f0);
        uVar6 = FUN_140d5f250(uVar6,local_88,local_130);
        uVar6 = FUN_140d5f250(uVar6,local_68,local_d0);
        uVar6 = FUN_140d5f250(uVar6,&local_150,local_110);
        uVar6 = FUN_140d5f250(uVar6,&local_170,local_b0);
        param_4 = local_res20;
        FUN_1400b06b0(local_res20,uVar6,0,0xffffffffffffffff);
        if (0xf < local_158) {
          uVar2 = CONCAT71(uStack_16f,local_170);
          uVar13 = uVar2;
          if (0xfff < local_158 + 1) {
            if ((local_170 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_140e3f0ac();
            }
            uVar13 = *(ulonglong *)(uVar2 - 8);
            if (uVar2 <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_140e3f0ac();
            }
            if (uVar2 - uVar13 < 8) {
                    /* WARNING: Subroutine does not return */
              FUN_140e3f0ac();
            }
            if (0x27 < uVar2 - uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_140e3f0ac();
            }
          }
          FUN_140e1c5e4(uVar13);
        }
        local_158 = 0xf;
        local_160 = 0;
        local_170 = 0;
        if (0xf < local_138) {
          FUN_1400b08c0(&local_150,CONCAT71(uStack_14f,local_150),local_138 + 1);
        }
        local_138 = 0xf;
        local_140 = 0;
        local_150 = 0;
        FUN_1400ae4f0(local_68);
        FUN_1400ae4f0(local_88);
        FUN_1400ae4f0(local_1b8);
        FUN_1400ae4f0(local_198);
        FUN_1400ae4f0(local_130);
        FUN_1400ae4f0(local_110);
        FUN_1400ae4f0(local_f0);
        FUN_1400ae4f0(local_d0);
        FUN_1400ae4f0(local_b0);
        if ((int)param_4[2] != 0) {
          puVar15 = param_4;
          if (0xf < (ulonglong)param_4[3]) {
            puVar15 = (undefined8 *)*param_4;
          }
          if (*(char *)((longlong)((int)param_4[2] + -1) + (longlong)puVar15) != '\n') {
            FUN_1400b0560(param_4,&DAT_141066f10,1);
          }
        }
      }
      local_1e0 = local_1e0 + 1;
    } while (local_1e0 < local_178);
  }
  piVar4 = local_res18;
  lVar3 = local_res8;
  lVar12 = *(longlong *)(*(longlong *)(local_res8 + 0xa0) + 0x10);
  if (lVar12 + 0x48 + (longlong)*(int *)(local_res8 + 0x78) * 200 == local_res8) {
    lVar12 = (longlong)*(int *)(local_res8 + 0x7c) * 200 +
             *(longlong *)(*(longlong *)(local_res8 + 0xa0) + 0x18);
  }
  else {
    lVar12 = (longlong)*(int *)(local_res8 + 0x7c) * 200 + lVar12;
  }
  lVar21 = *(longlong *)(local_res8 + 0xa8);
  iVar18 = 0;
  iVar16 = (int)((*(longlong *)(lVar21 + 0x248) - *(longlong *)(lVar21 + 0x240)) / 0x18);
  lVar14 = 0;
  if (0 < iVar16) {
    lVar7 = 0;
    do {
      if (*(int *)(lVar7 + 0x10 + *(longlong *)(lVar21 + 0x240)) ==
          *(int *)(*(longlong *)(lVar12 + 0xf0) + 0x238)) {
        iVar16 = *(int *)(*(longlong *)(lVar21 + 0x240) + 0x14 + (longlong)iVar18 * 0x18);
        goto LAB_14039dea2;
      }
      iVar18 = iVar18 + 1;
      lVar14 = lVar14 + 1;
      lVar7 = lVar7 + 0x18;
    } while (lVar14 < iVar16);
  }
  iVar16 = 1000;
LAB_14039dea2:
  if (param_4 == (undefined8 *)0x0) goto LAB_14039e044;
  if (iVar16 < 0x3e9) {
    if (iVar16 < 1000) {
      lVar12 = FUN_1403a0590(local_res8);
      ppuVar1 = (undefined **)**(longlong **)(lVar12 + 0xa8);
      if (ppuVar1 == &PTR_FUN_141090430) {
        plVar8 = *(longlong **)(lVar12 + 0xa8) + 0x3c;
      }
      else {
        plVar8 = (longlong *)(*(code *)ppuVar1[6])();
      }
      local_res8 = CONCAT44(local_res8._4_4_,iVar16 + -1000);
      uVar6 = FUN_140c64eb0(local_1b8,&local_res8,0,1);
      uVar6 = FUN_140152080(local_198,"TACTICAL_DISADVANTAGE","TACTIC",plVar8,&DAT_141079320,uVar6);
      FUN_1400b06b0(param_4,uVar6,0,0xffffffffffffffff);
      FUN_1400ae4f0(local_198);
      goto LAB_14039e000;
    }
  }
  else {
    lVar12 = FUN_1403a0590(local_res8);
    ppuVar1 = (undefined **)**(longlong **)(lVar12 + 0xa8);
    if (ppuVar1 == &PTR_FUN_141090430) {
      plVar8 = *(longlong **)(lVar12 + 0xa8) + 0x3c;
    }
    else {
      plVar8 = (longlong *)(*(code *)ppuVar1[6])();
    }
    local_res8 = CONCAT44(local_res8._4_4_,iVar16);
    uVar6 = FUN_140c64eb0(local_1b8,&local_res8,0,1);
    uVar6 = FUN_140152080(local_198,"TACTICAL_ADVANTAGE","TACTIC",plVar8,&DAT_141079320,uVar6);
    FUN_1400b06b0(param_4,uVar6,0,0xffffffffffffffff);
    FUN_1400ae4f0(local_198);
LAB_14039e000:
    FUN_1400ae4f0(local_1b8);
  }
  if ((int)param_4[2] != 0) {
    puVar15 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      puVar15 = (undefined8 *)*param_4;
    }
    if (*(char *)((longlong)((int)param_4[2] + -1) + (longlong)puVar15) != '\n') {
      FUN_1400b0560(param_4,&DAT_141066f10,1);
    }
  }
LAB_14039e044:
  iVar17 = (int)(((longlong)iVar17 * (longlong)iVar16) / 1000);
  iVar16 = (int)(((longlong)iVar22 * (longlong)iVar16) / 1000);
  cVar5 = FUN_1403a0b10(lVar3);
  if (cVar5 != '\0') {
    piVar9 = (int *)FUN_1403a0b70(lVar3,&local_res8);
    iVar18 = *piVar9;
    lVar12 = (longlong)DAT_1416e2648;
    if (param_4 != (undefined8 *)0x0) {
      piVar9 = (int *)FUN_1403a0b70(lVar3,&local_1f4);
      local_res8 = CONCAT44(local_res8._4_4_,
                            (int)(((longlong)*piVar9 * (longlong)DAT_1416e2648) / 1000));
      uVar6 = FUN_140c64eb0(local_1b8,&local_res8,1,1);
      uVar6 = FUN_140152450(local_198,"FLANKING_BONUS",&DAT_141079320,uVar6);
      FUN_1400b06b0(param_4,uVar6,0,0xffffffffffffffff);
      FUN_1400ae4f0(local_198);
      FUN_1400ae4f0(local_1b8);
      if ((int)param_4[2] != 0) {
        puVar15 = param_4;
        if (0xf < (ulonglong)param_4[3]) {
          puVar15 = (undefined8 *)*param_4;
        }
        if (*(char *)((longlong)((int)param_4[2] + -1) + (longlong)puVar15) != '\n') {
          FUN_1400b0560(param_4,&DAT_141066f10,1);
        }
      }
    }
    lVar12 = (longlong)((int)((iVar18 * lVar12) / 1000) + 1000);
    iVar17 = (int)((iVar17 * lVar12) / 1000);
    iVar16 = (int)((iVar16 * lVar12) / 1000);
  }
  if (*(char *)(lVar3 + 0xc0) != '\0') {
    if (param_4 != (undefined8 *)0x0) {
      FUN_1400b0300(param_4,&DAT_14106162d,0);
    }
    iVar17 = 0;
    iVar16 = 0;
  }
  *local_res10 = iVar17;
  *piVar4 = iVar16;
  if (param_4 != (undefined8 *)0x0) {
    local_res8._0_4_ = iVar16;
    uVar6 = FUN_140d5ede0(local_88,&local_res8,0);
    local_res8 = CONCAT44(local_res8._4_4_,iVar17);
    uVar10 = FUN_140d5ede0(local_1b8,&local_res8,0);
    uVar6 = FUN_140152080(local_198,"FLANK_DAMAGE_FINAL","DAMAGE",uVar10,"MORALE_DAMAGE",uVar6);
    FUN_1400b06b0(param_4,uVar6,0,0xffffffffffffffff);
    FUN_1400ae4f0(local_198);
    FUN_1400ae4f0(local_1b8);
    FUN_1400ae4f0(local_88);
  }
  return;
}

