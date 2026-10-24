
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_140a9d8d0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  void *pvVar2;
  undefined **ppuVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int *piVar15;
  void *pvVar16;
  undefined8 uVar17;
  short *psVar18;
  char *pcVar19;
  char ******ppppppcVar20;
  undefined1 *puVar21;
  char *******pppppppcVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  char *pcVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  undefined8 extraout_XMM0_Qa;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 in_stack_fffffffffffff470;
  undefined4 uVar29;
  char *******local_b78 [2];
  longlong local_b68;
  ulonglong local_b60;
  char ******local_b58 [2];
  undefined8 local_b48;
  undefined8 local_b40;
  char ******local_b38 [4];
  uint local_b18;
  char ******local_b10 [2];
  undefined8 local_b00;
  undefined8 local_af8;
  char local_af0;
  undefined7 uStack_aef;
  undefined8 local_ae0;
  ulonglong local_ad8;
  longlong local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 local_ab0;
  longlong local_aa8;
  longlong lStack_aa0;
  undefined8 local_a98;
  undefined1 local_a88;
  undefined7 uStack_a87;
  longlong local_a78;
  ulonglong local_a70;
  undefined1 local_a68 [16];
  longlong local_a58;
  undefined8 local_a50;
  undefined2 local_a48;
  undefined1 local_a40 [1136];
  undefined4 local_5d0;
  char local_5cc;
  undefined8 local_5b8;
  undefined1 local_5b0 [16];
  longlong local_5a0;
  char local_588 [128];
  undefined1 local_508 [1232];
  
  local_5b8 = 0xfffffffffffffffe;
  lVar27 = 0;
  local_b18 = 0;
  local_a70 = 0xf;
  local_a78 = 0;
  local_a88 = 0;
  local_a50 = 0xf;
  local_a58 = 0;
  local_a68[0] = 0;
  local_a48 = 1;
  local_res10 = param_2;
  FUN_14037f130(local_a40);
  local_5d0 = 0;
  local_5cc = '\0';
  param_1[0xafb] = (longlong)param_3;
  local_aa8 = 0;
  lStack_aa0 = 0;
  local_a98 = 0;
  lVar12 = (**(code **)(*param_3 + 0x90))(param_3);
  if (*(longlong *)(lVar12 + 0x10) != 0) {
    uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
    plVar14 = (longlong *)FUN_140d5fab0(uVar13,&local_ac8);
    if (&local_aa8 != plVar14) {
      FUN_14018b900(&local_aa8,plVar14);
    }
    if (local_ac8 != 0) {
      FUN_140169ce0(local_ac8,uStack_ac0);
      FUN_140164f90();
      local_ac8 = 0;
      uStack_ac0 = 0;
      local_ab8 = 0;
    }
  }
  lVar7 = lStack_aa0;
  lVar28 = local_aa8;
  lVar12 = param_3[6];
  if ((*(longlong *)(lVar12 + 0x58) == 0) && (*(longlong *)(lVar12 + 0x60) == 0)) {
LAB_140a9da8f:
    bVar5 = false;
  }
  else {
    pcVar19 = *(char **)(lVar12 + 0x58);
    local_ad8 = 0xf;
    local_ae0 = 0;
    local_af0 = '\0';
    if (*pcVar19 != '\0') {
      lVar27 = -1;
      do {
        lVar27 = lVar27 + 1;
      } while (pcVar19[lVar27] != '\0');
    }
    FUN_1400b0300(&local_af0,pcVar19,lVar27);
    lVar27 = 1;
    pcVar19 = &local_af0;
    if (0xf < local_ad8) {
      pcVar19 = (char *)CONCAT71(uStack_aef,local_af0);
    }
    iVar10 = strcmp(pcVar19,"CHARACTER_TOOLTIP");
    if ((iVar10 != 0) || (lVar12 = lVar7 - lVar28 >> 5, (int)lVar12 < 1)) goto LAB_140a9da8f;
    pcVar19 = (char *)(lVar28 + -0x20 + lVar12 * 0x20);
    if (0xf < *(ulonglong *)(pcVar19 + 0x18)) {
      pcVar19 = *(char **)pcVar19;
    }
    iVar10 = strcmp(pcVar19,"portrait");
    if (iVar10 != 0) goto LAB_140a9da8f;
    bVar5 = true;
  }
  if (lVar27 != 0) {
    FUN_1400ae4f0(&local_af0);
  }
  bVar6 = false;
  if (bVar5) {
    if (DAT_1417e3b58 != 0) {
      for (plVar14 = *(longlong **)
                      (*(longlong *)(DAT_1417e3b58 + 8) +
                      ((ulonglong)((int)param_3[1] + 0x420000) %
                      (ulonglong)*(uint *)(DAT_1417e3b58 + 4)) * 8); plVar14 != (longlong *)0x0;
          plVar14 = (longlong *)plVar14[1]) {
        pvVar2 = (void *)*plVar14;
        if ((*(int *)((longlong)pvVar2 + 0x14) == (int)param_3[1]) &&
           (*(int *)((longlong)pvVar2 + 0x10) == 0x42)) {
          if ((pvVar2 != (void *)0x0) && ((*(byte *)((longlong)pvVar2 + 0x1e9) & 2) != 0)) {
            FUN_14037f8c0(local_a40,pvVar2);
            FUN_140a989a0(&local_a88,param_3);
            FUN_140a44100(local_a40,local_b78,&local_a88,0);
            pppppppcVar22 = (char *******)local_b78;
            if (0xf < local_b60) {
              pppppppcVar22 = local_b78[0];
            }
            if (*(char *)pppppppcVar22 == '\0') {
              lVar12 = 0;
            }
            else {
              lVar12 = -1;
              do {
                lVar12 = lVar12 + 1;
              } while (*(char *)((longlong)pppppppcVar22 + lVar12) != '\0');
            }
            FUN_1400b0300(&local_a88,pppppppcVar22,lVar12);
            if ((*(longlong *)((longlong)pvVar2 + 0x28) == 0) ||
               ((*(byte *)(*(longlong *)((longlong)pvVar2 + 0x28) + 0xd6c) & 2) == 0)) {
              if (DAT_1417e6c90 < *(int *)((longlong)pvVar2 + 0xbc)) {
                piVar15 = (int *)FUN_14077c7b0(DAT_1416e3260);
                if ((*piVar15 < *(int *)((longlong)pvVar2 + 0xb8)) ||
                   (*(int *)((longlong)pvVar2 + 0xbc) <= *piVar15)) goto LAB_140a9de6e;
              }
              lVar27 = FUN_1400b1ba0(pvVar2,0);
              lVar12 = *(longlong *)(lVar27 + 0x28);
              if ((lVar12 == 0) ||
                 ((*(longlong *)(lVar12 + 0xb0) == 0 ||
                  (lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0xb0) + 8),
                  (ulonglong)(*(longlong *)(lVar12 + 0x40) - *(longlong *)(lVar12 + 0x38)) < 8)))) {
                lVar12 = DAT_1416e3ad0;
                if (0 < (int)(*(longlong *)(lVar27 + 0x78) - *(longlong *)(lVar27 + 0x70) >> 3)) {
                  lVar12 = **(longlong **)(lVar27 + 0x70);
                }
              }
              else {
                lVar12 = **(longlong **)(lVar12 + 0x38);
              }
              if ((*(char *)(lVar12 + 0x394) == '\0') && (*(char *)(lVar12 + 0x395) == '\0')) {
                ppuVar3 = *(undefined ***)param_1[0xce3];
                if (ppuVar3 == &PTR_FUN_1410c9a70) {
                  bVar8 = *(byte *)(((longlong *)param_1[0xce3])[2] + 0x85) >> 2 & 1;
                }
                else {
                  bVar8 = (*(code *)ppuVar3[0x10])();
                }
                if (bVar8 == 0) {
                  if (*(code **)(*param_1 + 0x108) == (code *)&LAB_14064e890) {
                    lVar12 = *(longlong *)(DAT_1416e3260 + 0x3f0);
                  }
                  else {
                    lVar12 = (**(code **)(*param_1 + 0x108))(param_1);
                  }
                  if ((*(byte *)(lVar12 + 0x1e9) & 2) != 0) {
                    lVar12 = FUN_14078a5f0(DAT_1416e3260);
                    lVar12 = FUN_1400d3090(lVar12 + 0x40);
                    if ((*(byte *)(lVar12 + 0x1e9) & 2) != 0) {
                      if ((int)local_a78 != 0) {
                        puVar21 = &local_a88;
                        if (0xf < local_a70) {
                          puVar21 = (undefined1 *)CONCAT71(uStack_a87,local_a88);
                        }
                        if (puVar21[(int)local_a78 + -1] != '\n') {
                          FUN_1400b0560(&local_a88,&DAT_141066f10,1);
                        }
                      }
                      iVar10 = (**(code **)(*param_3 + 400))(param_3);
                      if (iVar10 == 1) {
                        if (*(code **)(*param_1 + 0x108) == (code *)&LAB_14064e890) {
                          pvVar16 = *(void **)(DAT_1416e3260 + 0x3f0);
                        }
                        else {
                          pvVar16 = (void *)(**(code **)(*param_1 + 0x108))(param_1);
                        }
                        if (pvVar2 == pvVar16) {
                          uVar13 = FUN_140698f70(local_b58,"RCLK_TO_ACT");
                          FUN_1400b06b0(&local_a88,uVar13,0,0xffffffffffffffff);
                        }
                        else {
                          uVar13 = FUN_140698f70(local_b58,"RCLK_TO_INTERACT");
                          FUN_1400b06b0(&local_a88,uVar13,0,0xffffffffffffffff);
                        }
                        FUN_1400ae4f0(local_b58);
                        plVar14 = param_3 + 2;
                        if (0xf < (ulonglong)param_3[5]) {
                          plVar14 = (longlong *)*plVar14;
                        }
                        iVar10 = strcmp((char *)plVar14,"dynastic_view_info");
                        if (iVar10 == 0) {
                          local_res8 = (void *)0x0;
                          (**(code **)(*param_1 + 0x408))(param_1,&local_res8);
                          if (local_res8 == pvVar2) {
                            uVar13 = FUN_140698bb0(local_b10,"LEFT_TO_PAN_TO_CHARACTER");
                            uVar13 = FUN_140d5f2e0(local_b58,&DAT_141066f10,uVar13);
                            FUN_1400b06b0(&local_a88,uVar13,0,0xffffffffffffffff);
                            FUN_1400ae4f0(local_b58);
                            ppppppcVar20 = (char ******)local_b10;
                            goto LAB_140a9de68;
                          }
                        }
                      }
                      else {
                        iVar10 = (**(code **)(*param_3 + 400))(param_3);
                        if (iVar10 == 2) {
                          uVar13 = FUN_140698f70(local_b58,"RCLK_TO_SELECT");
                          FUN_1400b06b0(&local_a88,uVar13,0,0xffffffffffffffff);
                          ppppppcVar20 = (char ******)local_b58;
LAB_140a9de68:
                          FUN_1400ae4f0(ppppppcVar20);
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_140a9de6e:
            FUN_1400ae4f0(local_b78);
            goto LAB_140aa1a7e;
          }
          break;
        }
      }
    }
    FUN_14014b0a0(param_2,&local_a88);
    goto LAB_140aa1cb5;
  }
  lVar12 = param_3[6];
  if ((*(longlong *)(lVar12 + 0x58) == 0) && (*(longlong *)(lVar12 + 0x60) == 0)) {
LAB_140a9df51:
    bVar5 = false;
  }
  else {
    FUN_1400afe20(local_b78,*(undefined8 *)(lVar12 + 0x58));
    bVar6 = true;
    pppppppcVar22 = (char *******)local_b78;
    if (0xf < local_b60) {
      pppppppcVar22 = local_b78[0];
    }
    iVar10 = strcmp((char *)pppppppcVar22,"CHARACTER_DEAD_TOOLTIP");
    if ((iVar10 != 0) || (iVar10 = (int)(lVar7 - lVar28 >> 5), iVar10 < 2)) goto LAB_140a9df51;
    puVar24 = (undefined8 *)((longlong)(iVar10 + -1) * 0x20 + lVar28);
    if (0xf < (ulonglong)puVar24[3]) {
      puVar24 = (undefined8 *)*puVar24;
    }
    lVar12 = 0;
    do {
      lVar27 = lVar12 + 1;
      if (*(char *)((longlong)puVar24 + lVar12) != (&DAT_14108f864)[lVar12]) goto LAB_140a9df51;
      lVar12 = lVar27;
    } while (lVar27 != 5);
    pcVar19 = (char *)((longlong)(iVar10 + -2) * 0x20 + lVar28);
    if (0xf < *(ulonglong *)(pcVar19 + 0x18)) {
      pcVar19 = *(char **)pcVar19;
    }
    iVar10 = strcmp(pcVar19,"portrait");
    if (iVar10 != 0) goto LAB_140a9df51;
    bVar5 = true;
  }
  if (bVar6) {
    FUN_1400ae4f0(local_b78);
  }
  bVar6 = false;
  if (bVar5) {
    local_res8 = (void *)CONCAT44((int)param_3[1],0x42);
    lVar12 = FUN_1400d3090(&local_res8);
    if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0x1e9) & 2) != 0)) {
      FUN_14037f8c0(local_a40,lVar12);
      FUN_140a989a0(&local_a88,param_3);
    }
    goto LAB_140aa1a7e;
  }
  lVar12 = param_3[6];
  if (((*(longlong *)(lVar12 + 0x58) != 0) || (*(longlong *)(lVar12 + 0x60) != 0)) &&
     (iVar10 = strcmp(*(char **)(lVar12 + 0x58),"CHARACTER_POWERFUL_TOOLTIP"), iVar10 == 0)) {
    uVar13 = FUN_140698bb0(local_b78,"CHARACTER_POWERFUL_TOOLTIP");
    FUN_1400cd750(&local_a88,uVar13);
    FUN_1400ae4f0(local_b78);
    iVar10 = (**(code **)(*param_3 + 0xa0))(param_3);
    if (iVar10 != 2) {
      uVar13 = FUN_140698bb0(local_b78,"CHARACTER_POWERFUL_EXPLANATION");
      FUN_1400b06b0(local_a68,uVar13,0,0xffffffffffffffff);
      FUN_1400ae4f0(local_b78);
      param_2 = local_res10;
      goto LAB_140aa1a7e;
    }
    uVar13 = FUN_140698bb0(local_b78,"CHARACTER_POWERFUL_TOOLTIP_ANGRY");
    goto LAB_140a9e038;
  }
  if ((*(longlong *)(lVar12 + 0x58) == 0) && (*(longlong *)(lVar12 + 0x60) == 0)) {
LAB_140a9e0c8:
    bVar5 = false;
  }
  else {
    FUN_1400afe20(local_b78,*(undefined8 *)(lVar12 + 0x58));
    bVar6 = true;
    pppppppcVar22 = (char *******)local_b78;
    if (0xf < local_b60) {
      pppppppcVar22 = local_b78[0];
    }
    iVar10 = strcmp((char *)pppppppcVar22,"DLC_TOOLTIP");
    if (iVar10 != 0) goto LAB_140a9e0c8;
    bVar5 = true;
  }
  if (bVar6) {
    FUN_1400ae4f0(local_b78);
  }
  if (bVar5) {
    FUN_140a98a40(&local_a88,param_3);
    param_2 = local_res10;
    goto LAB_140aa1a7e;
  }
  iVar10 = (int)(lVar7 - lVar28 >> 5);
  if (iVar10 < 2) {
LAB_140a9e890:
    lVar12 = 0;
    if (1 < iVar10) {
      pcVar19 = (char *)((longlong)(iVar10 + -1) * 0x20 + lVar28);
      if (0xf < *(ulonglong *)(pcVar19 + 0x18)) {
        pcVar19 = *(char **)pcVar19;
      }
      iVar11 = strcmp(pcVar19,"relation");
      if (iVar11 == 0) {
        pcVar19 = (char *)((longlong)(iVar10 + -2) * 0x20 + lVar28);
        if (0xf < *(ulonglong *)(pcVar19 + 0x18)) {
          pcVar19 = *(char **)pcVar19;
        }
        iVar10 = strcmp(pcVar19,"portrait");
        if (iVar10 == 0) {
          local_res8 = (void *)CONCAT44((int)param_3[1],0x42);
          lVar27 = FUN_1400d3090(&local_res8);
          lVar12 = DAT_1416e2360;
          if (lVar27 != 0) {
            lVar12 = lVar27;
          }
          iVar10 = (**(code **)(*param_3 + 0xa0))(param_3);
          lVar27 = 0x90;
          if (iVar10 == 1) {
            lVar28 = 0x38;
            if (*(longlong *)(lVar12 + 0xa0) != 0) {
              lVar28 = lVar27;
            }
            uVar13 = FUN_140152450(local_b78,"CHAR_RELATION_DYNASTY",&DAT_1410725c8,lVar28 + lVar12)
            ;
            FUN_1400cd750(&local_a88,uVar13);
            FUN_1400ae4f0(local_b78);
          }
          iVar10 = (**(code **)(*param_3 + 0xa0))(param_3);
          if (iVar10 == 2) {
            uVar13 = FUN_140698f70(local_b78,"CHAR_RELATION_YOU");
            FUN_1400cd750(&local_a88,uVar13);
            FUN_1400ae4f0(local_b78);
          }
          iVar10 = (**(code **)(*param_3 + 0xa0))(param_3);
          if (iVar10 == 3) {
            lVar28 = 0x38;
            if (*(longlong *)(lVar12 + 0xa0) != 0) {
              lVar28 = lVar27;
            }
            uVar13 = FUN_140152450(local_b78,"CHAR_RELATION_HEIR",&DAT_1410725c8,lVar28 + lVar12);
            FUN_1400cd750(&local_a88,uVar13);
            FUN_1400ae4f0(local_b78);
          }
          iVar10 = (**(code **)(*param_3 + 0xa0))(param_3);
          if (iVar10 == 4) {
            lVar28 = 0x38;
            if (*(longlong *)(lVar12 + 0xa0) != 0) {
              lVar28 = lVar27;
            }
            uVar13 = FUN_140152450(local_b78,"CHAR_RELATION_BASTARD_DYNASTY",&DAT_1410725c8,
                                   lVar28 + lVar12);
            FUN_1400cd750(&local_a88,uVar13);
            FUN_1400ae4f0(local_b78);
          }
          iVar10 = (**(code **)(*param_3 + 0xa0))(param_3);
          param_2 = local_res10;
          if (iVar10 == 5) {
            if (*(code **)(*param_1 + 0x108) == (code *)&LAB_14064e890) {
              uVar13 = *(undefined8 *)(DAT_1416e3260 + 0x3f0);
            }
            else {
              uVar13 = (**(code **)(*param_1 + 0x108))(param_1);
            }
            uVar13 = FUN_1402096c0(lVar12,local_b58,uVar13,0);
            lVar28 = 0x38;
            if (*(longlong *)(lVar12 + 0xa0) != 0) {
              lVar28 = lVar27;
            }
            uVar13 = FUN_140152080(local_b78,"CHAR_RELATION_CLOSE_DYNASTY",&DAT_1410725c8,
                                   lVar12 + lVar28,&DAT_141077a5c,uVar13);
            FUN_1400cd750(&local_a88,uVar13);
            FUN_1400ae4f0(local_b78);
            pppppppcVar22 = local_b58;
            goto LAB_140a9e215;
          }
          goto LAB_140aa1a7e;
        }
      }
    }
    if ((ulonglong)param_3[5] < 0x10) {
      plVar14 = param_3 + 2;
    }
    else {
      plVar14 = (longlong *)param_3[2];
    }
    iVar10 = strcmp((char *)plVar14,"DefaultTitleTooltip");
    if (iVar10 == 0) {
      lVar12 = (**(code **)(*param_3 + 0x178))(param_3);
      param_2 = local_res10;
      if (lVar12 != 0) {
        lVar12 = (**(code **)(*param_3 + 0x178))(param_3);
        if (DAT_1416e3ac8 == 0) {
          local_res8 = operator_new(0x1e8);
          DAT_1416e3ac8 = FUN_140a82e10(local_res8);
        }
        plVar14 = *(longlong **)(DAT_1416e3ac8 + 0x18);
        plVar23 = *(longlong **)(DAT_1416e3ac8 + 0x10);
        param_2 = local_res10;
        if (plVar23 != plVar14) {
          do {
            if (*plVar23 == lVar12) break;
            plVar23 = plVar23 + 1;
          } while (plVar23 != plVar14);
          if (plVar23 != plVar14) {
            uVar13 = FUN_140a4fae0(lVar12,local_508,0);
            FUN_140156920(&local_a88,uVar13);
            goto LAB_140aa1a6b;
          }
        }
      }
    }
    else if (((*(byte *)(*(longlong *)(param_1[0xd2f] + 0x40) + 0x85) & 4) == 0) ||
            (cVar9 = FUN_1407fc630(param_1[0xd2f],param_3,&local_a88), param_2 = local_res10,
            cVar9 == '\0')) {
      cVar9 = FUN_1400b1830(param_3 + 2,"ButtonMenuButton");
      if (cVar9 != '\0') {
        uVar13 = FUN_140c75050();
        uVar17 = FUN_140c74dd0(uVar13,local_b78,param_3);
        FUN_1400cd750(&local_a88,uVar17);
        FUN_1400ae4f0(local_b78);
        uVar13 = FUN_140c74e90(uVar13,local_b78,param_3);
        goto LAB_140a9e038;
      }
      cVar9 = FUN_1400b1830(param_3 + 2,"MessageWindow");
      if (cVar9 != '\0') {
        uVar13 = (**(code **)(*(longlong *)param_1[0x86] + 0x40))
                           ((longlong *)param_1[0x86],local_508,param_3);
        FUN_140156920(&local_a88,uVar13);
        goto LAB_140aa1a6b;
      }
      cVar9 = FUN_1400b1830(param_3 + 2,"EndOfCombatDialog");
      if ((cVar9 != '\0') || (cVar9 = FUN_1400b1830(param_3 + 2,"EndOfSiegeDialog"), cVar9 != '\0'))
      {
        param_2 = local_res10;
        for (plVar14 = (longlong *)param_1[0x6a]; local_res10 = param_2, plVar14 != (longlong *)0x0;
            plVar14 = (longlong *)plVar14[2]) {
          plVar23 = (longlong *)*plVar14;
          if (*(code **)(*plVar23 + 0x38) == (code *)&LAB_140622e20) {
            cVar9 = (**(code **)(*(longlong *)(plVar23[2] + 0x28) + 0x130))();
          }
          else {
            cVar9 = (**(code **)(*plVar23 + 0x38))(plVar23,param_3);
          }
          if (cVar9 != '\0') {
            uVar13 = (**(code **)(*plVar23 + 0x40))(plVar23,local_508,param_3);
            FUN_140156920(&local_a88,uVar13);
            goto LAB_140aa1a6b;
          }
          param_2 = local_res10;
        }
        goto LAB_140aa1a7e;
      }
      cVar9 = FUN_1400b1830(param_3 + 2,"CombatView");
      if (cVar9 != '\0') {
        uVar13 = FUN_1403c2200(param_1[0xa7f],local_508,param_3);
        FUN_140156920(&local_a88,uVar13);
        goto LAB_140aa1a6b;
      }
      cVar9 = FUN_1400b1830(param_3 + 2,"message_setting_item");
      if (cVar9 != '\0') {
        local_ab8 = 0;
        local_ab0 = 0;
        FUN_1400b0200(&local_ac8,0,0);
        FUN_1400b0300(&local_ac8,"settings",8);
        local_ae0 = 0;
        local_ad8 = 0;
        FUN_1400b0200(&local_af0,0,0);
        FUN_1400b0300(&local_af0,"menu_message_settings",0x15);
        plVar14 = (longlong *)
                  (**(code **)(*(longlong *)param_1[0xcc3] + 0xe8))
                            ((longlong *)param_1[0xcc3],&local_af0);
        plVar14 = (longlong *)(**(code **)(*plVar14 + 0x110))(plVar14,&local_ac8);
        FUN_1400ae4f0(&local_af0);
        FUN_1400ae4f0(&local_ac8);
        if (*(code **)(*plVar14 + 0x58) == (code *)&LAB_140c54dc0) {
          puVar24 = (undefined8 *)(**(code **)(plVar14[0x12] + 0x58))();
        }
        else {
          puVar24 = (undefined8 *)(**(code **)(*plVar14 + 0x58))(plVar14);
        }
        param_2 = local_res10;
        for (puVar24 = (undefined8 *)*puVar24; local_res10 = param_2, puVar24 != (undefined8 *)0x0;
            puVar24 = (undefined8 *)puVar24[2]) {
          uVar13 = *puVar24;
          cVar9 = FUN_14067e6c0(uVar13,param_3);
          if (cVar9 != '\0') {
            uVar13 = FUN_14067ea00(uVar13,local_508,param_3);
            FUN_140156920(&local_a88,uVar13);
            FUN_14013a6e0(local_508);
          }
          param_2 = local_res10;
        }
        goto LAB_140aa1a7e;
      }
      cVar9 = FUN_1400b1830(param_3 + 2,"diplo_offer_dialog");
      if (cVar9 == '\0') {
        cVar9 = FUN_1400b1830(param_3 + 2,"waroverview");
        if (cVar9 == '\0') {
          cVar9 = FUN_1400b1830(param_3 + 2,"outliner");
          if (cVar9 == '\0') {
            uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
            cVar9 = FUN_1400b1830(uVar13,"closebutton");
            if (cVar9 == '\0') {
              uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
              cVar9 = FUN_1400b1830(uVar13,"close_button");
              if (cVar9 != '\0') goto LAB_140aa1842;
              uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
              cVar9 = FUN_1400b1830(uVar13,"remove_unit_from_selection_button");
              if (cVar9 != '\0') goto LAB_140aa1842;
              cVar9 = FUN_1400b1830(param_3 + 2,"navy_option");
              if ((cVar9 != '\0') ||
                 (cVar9 = FUN_1400b1830(param_3 + 2,"combat_view"), cVar9 != '\0')) {
                param_2 = local_res10;
                if (param_1[0xa7f] == 0) goto LAB_140aa1a7e;
                uVar13 = FUN_1403c2200(param_1[0xa7f],local_508,param_3);
                FUN_140156920(&local_a88,uVar13);
                goto LAB_140aa1a6b;
              }
              uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
              cVar9 = FUN_1400b1830(uVar13,"shield");
              if ((cVar9 != '\0') &&
                 (cVar9 = FUN_1400b1830(param_3 + 2,"chatplayer"), cVar9 != '\0')) {
                uVar13 = FUN_14064d2e0(param_1,local_508,param_3);
                FUN_140156920(&local_a88,uVar13);
                FUN_14013a6e0(local_508);
                FUN_14014b0a0(local_res10,&local_a88);
                FUN_140158640(&local_aa8);
                FUN_14013a6e0(&local_a88);
                return local_res10;
              }
              cVar9 = FUN_1400b1830(param_3 + 2,"court_view");
              if (((((((cVar9 != '\0') ||
                      (cVar9 = FUN_1400b1830(param_3 + 2,"realm_view"), cVar9 != '\0')) ||
                     (cVar9 = FUN_1400b1830(param_3 + 2,"title_history_view"), cVar9 != '\0')) ||
                    ((cVar9 = FUN_1400b1830(param_3 + 2,"military_view"), cVar9 != '\0' ||
                     (cVar9 = FUN_1400b1830(param_3 + 2,"government_view"), cVar9 != '\0')))) ||
                   ((cVar9 = FUN_1400b1830(param_3 + 2,"economy_view"), cVar9 != '\0' ||
                    ((cVar9 = FUN_1400b1830(param_3 + 2,"dynastic_view"), cVar9 != '\0' ||
                     (cVar9 = FUN_1400b1830(param_3 + 2,"dynastic_view_info"), cVar9 != '\0'))))))
                  || (cVar9 = FUN_1400b1830(param_3 + 2,"dynastic_actions"), cVar9 != '\0')) ||
                 ((cVar9 = FUN_1400b1830(param_3 + 2,"religion_view"), cVar9 != '\0' ||
                  (cVar9 = FUN_1400b1830(param_3 + 2,"overview_temp_mod_box"), cVar9 != '\0')))) {
                uVar13 = FUN_14066c820(param_1,local_508,param_3);
                FUN_140156920(&local_a88,uVar13);
                goto LAB_140aa1a6b;
              }
              cVar9 = FUN_1400b1830(param_3 + 2,"succession_view");
              if (cVar9 != '\0') {
                uVar13 = (**(code **)(*param_1 + 0x278))(param_1,local_508,param_3);
                FUN_140156920(&local_a88,uVar13);
                goto LAB_140aa1a6b;
              }
              cVar9 = FUN_1400b1830(param_3 + 2,"character_select");
              if (cVar9 != '\0') {
                uVar13 = FUN_14066c820(param_1,local_508,param_3);
                FUN_140156920(&local_a88,uVar13);
                FUN_14013a6e0(local_508);
                param_2 = local_res10;
                if (local_a78 != 0) goto LAB_140aa1a7e;
                if (*(code **)(*param_1 + 0x2a8) == (code *)&LAB_14066c7c0) {
                  plVar14 = (longlong *)param_1[0xcbe];
                }
                else {
                  plVar14 = (longlong *)(**(code **)(*param_1 + 0x2a8))(param_1);
                }
                uVar13 = (**(code **)(*plVar14 + 0x40))(plVar14,local_508,param_3);
                FUN_140156920(&local_a88,uVar13);
                goto LAB_140aa1a6b;
              }
              cVar9 = FUN_1400b1830(param_3 + 2,"alert_scope");
              if ((cVar9 != '\0') ||
                 (cVar9 = FUN_1400b1830(param_3 + 2,"diplo_message"), cVar9 != '\0')) {
                uVar13 = FUN_14014abd0(param_1[0xce1],local_508,param_3);
                FUN_140156920(&local_a88,uVar13);
                goto LAB_140aa1a6b;
              }
              local_ae0 = 0;
              local_ad8 = 0;
              FUN_1400b0200(&local_af0,0,0);
              FUN_1400b0300(&local_af0,"overview_religion_icon");
              uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
              iVar10 = FUN_1400afd70(uVar13,&local_af0);
              FUN_1400ae4f0(&local_af0);
              uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffff470 >> 0x20);
              if (iVar10 != 0) {
                local_b68 = 0;
                local_b60 = 0;
                FUN_1400b0200(local_b78,0,0);
                FUN_1400b0300(local_b78,"actual_slider",0xd);
                uVar26 = 0x10;
                local_b18 = uVar26;
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                iVar10 = FUN_1400afd70(uVar13,local_b78);
                if (iVar10 == 0) {
LAB_140a9f561:
                  bVar5 = true;
                }
                else {
                  local_b48 = 0;
                  local_b40 = 0;
                  FUN_1400b0200(local_b58,0,0);
                  FUN_1400b0300(local_b58,"ds_TrackButton",0xe);
                  uVar26 = 0x30;
                  local_b18 = uVar26;
                  uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                  iVar10 = FUN_1400afd70(uVar13,local_b58);
                  if (iVar10 == 0) goto LAB_140a9f561;
                  local_b00 = 0;
                  local_af8 = 0;
                  FUN_1400b0200(local_b10,0,0);
                  FUN_1400b0300(local_b10,"ds_SliderButton",0xf);
                  uVar26 = 0x70;
                  local_b18 = uVar26;
                  uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                  iVar10 = FUN_1400afd70(uVar13,local_b10);
                  if (iVar10 == 0) goto LAB_140a9f561;
                  local_ab8 = 0;
                  local_ab0 = 0;
                  FUN_1400b0200(&local_ac8,0,0);
                  FUN_1400b0300(&local_ac8,"ds_downButton",0xd);
                  uVar26 = 0xf0;
                  local_b18 = uVar26;
                  uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                  iVar10 = FUN_1400afd70(uVar13,&local_ac8);
                  if (iVar10 == 0) goto LAB_140a9f561;
                  local_ae0 = 0;
                  local_ad8 = 0;
                  FUN_1400b0200(&local_af0,0,0);
                  FUN_1400b0300(&local_af0,"ds_upButton",0xb);
                  uVar26 = 0x1f0;
                  local_b18 = uVar26;
                  uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                  iVar10 = FUN_1400afd70(uVar13,&local_af0);
                  if (iVar10 == 0) goto LAB_140a9f561;
                  bVar5 = false;
                }
                if (uVar26 >> 8 != 0) {
                  uVar26 = uVar26 & 0xfffffeff;
                  FUN_1400ae4f0(&local_af0);
                }
                if ((char)uVar26 < '\0') {
                  uVar26 = uVar26 & 0xffffff7f;
                  FUN_1400ae4f0(&local_ac8);
                }
                if ((uVar26 & 0x40) != 0) {
                  uVar26 = uVar26 & 0xffffffbf;
                  FUN_1400ae4f0(local_b10);
                }
                if ((uVar26 & 0x20) != 0) {
                  FUN_1400ae4f0(local_b58);
                }
                bVar6 = false;
                FUN_1400ae4f0(local_b78);
                if (bVar5) {
                  local_b68 = 0;
                  local_b60 = 0;
                  FUN_1400b0200(local_b78,0,0);
                  FUN_1400b0300(local_b78,"treasury",8);
                  iVar10 = FUN_1400afd70(param_3 + 2,local_b78);
                  FUN_1400ae4f0(local_b78);
                  param_2 = local_res10;
                  if (iVar10 == 0) goto LAB_140aa1a7e;
                  local_b68 = 0;
                  local_b60 = 0;
                  FUN_1400b0200(local_b78,0,0);
                  FUN_1400b0300(local_b78,"stability",9);
                  goto LAB_140a9e044;
                }
                cVar9 = FUN_1400b1830(param_3 + 2,"province_view");
                if (cVar9 == '\0') {
                  uVar13 = FUN_140d5fdf0(param_3 + 2,local_b78,0);
                  bVar6 = true;
                  cVar9 = FUN_1400b1830(uVar13,"settlement");
                  if ((((cVar9 != '\0') ||
                       (cVar9 = FUN_1400b1830(param_3 + 2,"build_settlement_view"), cVar9 != '\0'))
                      || (cVar9 = FUN_1400b1830(param_3 + 2,"siege_view"), cVar9 != '\0')) ||
                     (((cVar9 = FUN_1400b1830(param_3 + 2,"trade_view"), cVar9 != '\0' ||
                       (cVar9 = FUN_1400b1830(param_3 + 2,"fort_view"), cVar9 != '\0')) ||
                      (cVar9 = FUN_1400b1830(param_3 + 2,"hospital_view"), cVar9 != '\0'))))
                  goto LAB_140a9f6fb;
                  bVar5 = false;
                }
                else {
LAB_140a9f6fb:
                  bVar5 = true;
                }
                if (bVar6) {
                  FUN_1400ae4f0(local_b78);
                }
                if (bVar5) {
                  if (*(code **)(*param_1 + 0x2a8) == (code *)&LAB_14066c7c0) {
                    plVar14 = (longlong *)param_1[0xcbe];
                  }
                  else {
                    plVar14 = (longlong *)(**(code **)(*param_1 + 0x2a8))(param_1);
                  }
                  uVar13 = (**(code **)(*plVar14 + 0x40))(plVar14,local_508,param_3);
                  FUN_140156920(&local_a88,uVar13);
                  goto LAB_140aa1a6b;
                }
                cVar9 = FUN_1400b1830(param_3 + 2,"character_select_province");
                if (cVar9 != '\0') {
                  if (*(code **)(*param_1 + 0x2a8) == (code *)&LAB_14066c7c0) {
                    plVar14 = (longlong *)param_1[0xcbe];
                  }
                  else {
                    plVar14 = (longlong *)(**(code **)(*param_1 + 0x2a8))(param_1);
                  }
                  uVar13 = (**(code **)(*plVar14 + 0x40))(plVar14,local_508,param_3);
                  FUN_140156920(&local_a88,uVar13);
                  goto LAB_140aa1a6b;
                }
                cVar9 = FUN_1400b1830(param_3 + 2,"arrange_marriage_view");
                if (cVar9 != '\0') {
                  uVar13 = (**(code **)(**(longlong **)param_1[0x667] + 0x48))
                                     (*(longlong **)param_1[0x667],local_508,param_3);
                  FUN_140156920(&local_a88,uVar13);
                  goto LAB_140aa1a6b;
                }
                cVar9 = FUN_1400b1830(param_3 + 2,"build_buildings_view");
                if ((cVar9 != '\0') ||
                   (cVar9 = FUN_1400b1830(param_3 + 2,"build_buildings_box"), cVar9 != '\0')) {
                  uVar13 = (**(code **)(*(longlong *)param_1[0xccb] + 0x28))
                                     ((longlong *)param_1[0xccb],local_508,param_3);
                  FUN_140156920(&local_a88,uVar13);
                  goto LAB_140aa1a6b;
                }
                cVar9 = FUN_1400b1830(param_3 + 2,"TraitEntry");
                if (cVar9 != '\0') {
                  plVar14 = (longlong *)param_3[1];
                  param_2 = local_res10;
                  if ((plVar14 != (longlong *)0x0) &&
                     (cVar9 = (**(code **)(*plVar14 + 0xe8))(plVar14), param_2 = local_res10,
                     cVar9 != '\0')) {
                    local_b48 = 0;
                    local_b40 = 0;
                    FUN_1400b0200(local_b58,0,0);
                    FUN_1400b0300(local_b58,&DAT_141071804,2);
                    if (*(code **)(*param_1 + 0x108) == (code *)&LAB_14064e890) {
                      uVar13 = *(undefined8 *)(DAT_1416e3260 + 0x3f0);
                    }
                    else {
                      uVar13 = (**(code **)(*param_1 + 0x108))(param_1);
                    }
                    uVar13 = FUN_140aa9a40(plVar14,&local_ac8,uVar13);
                    local_b68 = 0;
                    local_b60 = 0;
                    FUN_1400b0200(local_b78,0,0);
                    FUN_1400b0300(local_b78,&DAT_141070b84,2);
                    uVar13 = FUN_140d5f250(local_b78,&local_af0,uVar13);
                    uVar13 = FUN_140d5f250(uVar13,local_b10,local_b58);
                    FUN_1400cd750(&local_a88,uVar13);
                    FUN_1400ae4f0(local_b10);
                    FUN_1400ae4f0(&local_af0);
                    FUN_1400ae4f0(local_b78);
                    FUN_1400ae4f0(&local_ac8);
                    FUN_1400ae4f0(local_b58);
                    if (*(code **)(*param_1 + 0x108) == (code *)&LAB_14064e890) {
                      uVar13 = *(undefined8 *)(DAT_1416e3260 + 0x3f0);
                    }
                    else {
                      uVar13 = (**(code **)(*param_1 + 0x108))(param_1);
                    }
                    uVar13 = FUN_140aa9c00(plVar14,local_b78,uVar13);
                    FUN_1400cd750(local_a68,uVar13);
                    FUN_1400ae4f0(local_b78);
                    uVar13 = FUN_140d5f730(local_a68,local_b58);
                    FUN_1400cd750(local_a68,uVar13);
                    FUN_1400ae4f0(local_b58);
                    FUN_1400b0560(local_a68,&DAT_141066f10,1);
                    if (*(code **)(*param_1 + 0x108) == (code *)&LAB_14064e890) {
                      uVar13 = *(undefined8 *)(DAT_1416e3260 + 0x3f0);
                    }
                    else {
                      uVar13 = (**(code **)(*param_1 + 0x108))(param_1);
                    }
                    uVar13 = (**(code **)(*plVar14 + 0xd0))(plVar14,local_b78,uVar13);
                    FUN_1400b06b0(local_a68,uVar13,0,0xffffffffffffffff);
                    FUN_1400ae4f0(local_b78);
                    uVar13 = FUN_140d5f730(local_a68,local_b58);
                    goto LAB_140a9fa57;
                  }
                  goto LAB_140aa1a7e;
                }
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,"unitattrition");
                if (cVar9 != '\0') {
                  plVar14 = (longlong *)FUN_140670bf0(param_1,param_3);
                  param_2 = local_res10;
                  if ((plVar14 != (longlong *)0x0) &&
                     (cVar9 = (**(code **)(*plVar14 + 0x68))(plVar14), param_2 = local_res10,
                     cVar9 != '\0')) {
                    FUN_140b9fc20(plVar14,&local_res8);
                    param_2 = local_res10;
                  }
                  goto LAB_140aa1a7e;
                }
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,"domestictext_culture");
                if (cVar9 != '\0') {
                  local_b68 = 0;
                  local_b60 = 0;
                  FUN_1400b0200(local_b78,0,0);
                  uVar13 = FUN_1400b0300(local_b78,"PRIMARYCULTURE",0xe);
                  FUN_140c43150(uVar13,&local_af0);
                  FUN_1400ae4f0(local_b78);
                  if (*(code **)(*param_1 + 0x108) == (code *)&LAB_14064e890) {
                    lVar27 = *(longlong *)(DAT_1416e3260 + 0x3f0);
                  }
                  else {
                    lVar27 = (**(code **)(*param_1 + 0x108))(param_1);
                  }
                  pcVar19 = (char *)(*(longlong *)(lVar27 + 0x170) + 0x100);
                  if (0xf < *(ulonglong *)(*(longlong *)(lVar27 + 0x170) + 0x118)) {
                    pcVar19 = *(char **)pcVar19;
                  }
                  pcVar25 = local_588;
                  do {
                    cVar9 = *pcVar19;
                    *pcVar25 = cVar9;
                    pcVar19 = pcVar19 + 1;
                    pcVar25 = pcVar25 + 1;
                  } while (cVar9 != '\0');
                  local_b00 = 0;
                  local_af8 = 0;
                  FUN_1400b0200(local_b10,0);
                  lVar27 = lVar12;
                  if (local_588[0] != '\0') {
                    lVar28 = -1;
                    do {
                      lVar7 = lVar28 + 1;
                      lVar27 = lVar28 + 1;
                      lVar28 = lVar28 + 1;
                    } while (local_588[lVar7] != '\0');
                  }
                  FUN_1400b0300(local_b10,local_588,lVar27);
                  local_b48 = 0;
                  local_b40 = 0;
                  FUN_1400b0200(local_b58,0,0);
                  uVar13 = FUN_1400b0300(local_b58,"CULTURE",7);
                  FUN_140c43150(uVar13,&local_ac8,local_b10);
                  FUN_140c445f0(&local_af0,local_b58);
                  FUN_140c43e80(&local_ac8);
                  FUN_1400ae4f0(local_b58);
                  FUN_1400ae4f0(local_b10);
                  if (*(code **)(*param_1 + 0x108) == (code *)&LAB_14064e890) {
                    lVar27 = *(longlong *)(DAT_1416e3260 + 0x3f0);
                  }
                  else {
                    lVar27 = (**(code **)(*param_1 + 0x108))(param_1);
                  }
                  lVar27 = *(longlong *)(*(longlong *)(lVar27 + 0x170) + 0x128);
                  pcVar19 = (char *)(lVar27 + 0x98);
                  if (0xf < *(ulonglong *)(lVar27 + 0xb0)) {
                    pcVar19 = *(char **)pcVar19;
                  }
                  pcVar25 = local_588;
                  do {
                    cVar9 = *pcVar19;
                    *pcVar25 = cVar9;
                    pcVar19 = pcVar19 + 1;
                    pcVar25 = pcVar25 + 1;
                  } while (cVar9 != '\0');
                  local_b00 = 0;
                  local_af8 = 0;
                  FUN_1400b0200(local_b10,0);
                  if (local_588[0] != '\0') {
                    lVar27 = -1;
                    do {
                      lVar12 = lVar27 + 1;
                      lVar28 = lVar27 + 1;
                      lVar27 = lVar12;
                    } while (local_588[lVar28] != '\0');
                  }
                  FUN_1400b0300(local_b10,local_588,lVar12);
                  local_b48 = 0;
                  local_b40 = 0;
                  FUN_1400b0200(local_b58,0,0);
                  uVar13 = FUN_1400b0300(local_b58,"GROUP",5);
                  uVar13 = FUN_140c43150(uVar13,&local_ac8,local_b10);
                  FUN_140c445f0(&local_af0,local_b58,uVar13);
                  FUN_140c43e80(&local_ac8);
                  FUN_1400ae4f0(local_b58);
                  FUN_1400ae4f0(local_b10);
                  if (DAT_1417f0ff8 == 0) {
                    local_res8 = operator_new(0x420);
                    uVar13 = FUN_1409eae00(local_res8);
                    FUN_1400afc00(extraout_XMM0_Qa,uVar13);
                  }
                  local_ac8 = *(longlong *)(DAT_1417f0ff8 + 0x28);
                  uStack_ac0 = *(undefined8 *)(DAT_1417f0ff8 + 0x30);
                  uVar13 = FUN_140c440b0(&local_af0,local_b58,&local_ac8);
                  FUN_1400cd750(&local_a88,uVar13);
                  FUN_1400ae4f0(local_b58);
                  FUN_140c43e80(&local_af0);
                  param_2 = local_res10;
                  goto LAB_140aa1a7e;
                }
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,"leader_maneuever");
                if (cVar9 != '\0') {
                  pcVar19 = "MANEUEVER";
LAB_140a9fe12:
                  uVar13 = FUN_140698f70(local_b78,pcVar19);
                  puVar21 = &local_a88;
LAB_140a9e03c:
                  FUN_1400cd750(puVar21,uVar13);
                  goto LAB_140a9e044;
                }
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,"leader_siege");
                if (cVar9 != '\0') {
                  pcVar19 = "SIEGE";
                  goto LAB_140a9fe12;
                }
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,"leader_fire");
                if (cVar9 != '\0') {
                  pcVar19 = "FIRE";
                  goto LAB_140a9fe12;
                }
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,"leader_shock");
                if (cVar9 != '\0') {
                  pcVar19 = "SHOCK";
                  goto LAB_140a9fe12;
                }
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,"counter");
                if (cVar9 != '\0') {
                  FUN_140d5fab0(param_3 + 2,&local_ac8,0x2e);
                  pcVar19 = (char *)(local_ac8 + 0x20);
                  if (0xf < *(ulonglong *)(local_ac8 + 0x38)) {
                    pcVar19 = *(char **)pcVar19;
                  }
                  iVar10 = FID_conflict_atoi(pcVar19);
                  pcVar19 = (char *)(local_ac8 + 0x40);
                  if (0xf < *(ulonglong *)(local_ac8 + 0x58)) {
                    pcVar19 = *(char **)pcVar19;
                  }
                  iVar11 = FID_conflict_atoi(pcVar19);
                  local_res8 = (void *)CONCAT44(iVar11,iVar10);
                  plVar14 = (longlong *)FUN_1400d3090(&local_res8);
                  if (plVar14 != (longlong *)0x0) {
                    uVar13 = (**(code **)(*plVar14 + 0x68))(plVar14,local_b78);
                    FUN_1400cd750(&local_a88,uVar13);
                    FUN_1400ae4f0(local_b78);
                  }
                  FUN_140158640(&local_ac8);
                  param_2 = local_res10;
                  goto LAB_140aa1a7e;
                }
                cVar9 = FUN_1400b1830(param_3 + 2,"UnitView");
                if (cVar9 != '\0') {
                  plVar14 = (longlong *)param_1[0x7c0];
                  param_2 = local_res10;
                  do {
                    local_res10 = param_2;
                    if (plVar14 == (longlong *)0x0) goto LAB_140aa1a7e;
                    lVar12 = *plVar14;
                    plVar14 = (longlong *)plVar14[2];
                    plVar23 = (longlong *)(*(longlong *)(lVar12 + 0x30) + 0x28);
                    cVar9 = (**(code **)(*plVar23 + 0x130))(plVar23,param_3);
                    param_2 = local_res10;
                  } while (cVar9 == '\0');
                  uVar13 = FUN_140bd3060(lVar12,local_508,param_3);
                  FUN_140156920(&local_a88,uVar13);
                  goto LAB_140aa1a6b;
                }
                cVar9 = FUN_1400b1830(param_3 + 2,"EndGameScreen");
                if (cVar9 != '\0') {
                  plVar14 = (longlong *)param_1[0xce3];
                  param_2 = local_res10;
                  if (plVar14 != (longlong *)0x0) {
                    if ((undefined **)*plVar14 == &PTR_FUN_1410c9a70) {
                      bVar8 = *(byte *)(plVar14[2] + 0x85) >> 2 & 1;
                    }
                    else {
                      bVar8 = (*(code *)((undefined **)*plVar14)[0x10])();
                    }
                    param_2 = local_res10;
                    if (bVar8 != 0) {
                      uVar13 = (**(code **)(*(longlong *)param_1[0xce3] + 0x40))
                                         ((longlong *)param_1[0xce3],local_508,param_3);
                      FUN_140156920(&local_a88,uVar13);
                      goto LAB_140aa1a6b;
                    }
                  }
                  goto LAB_140aa1a7e;
                }
                local_b00 = 0;
                local_af8 = 0;
                FUN_1400b0200(local_b10,0,0);
                FUN_1400b0300(local_b10,"group_button_1",0xe);
                local_b48 = 0;
                local_b40 = 0;
                FUN_1400b0200(local_b58,0,0);
                FUN_1400b0300(local_b58,"chat_window",0xb);
                local_b68 = 0;
                local_b60 = 0;
                FUN_1400b0200(local_b78,0,0);
                FUN_1400b0300(local_b78,"toolpane",8);
                plVar14 = (longlong *)
                          (**(code **)(*(longlong *)param_1[0xa71] + 0xe8))
                                    ((longlong *)param_1[0xa71],local_b78);
                plVar14 = (longlong *)(**(code **)(*plVar14 + 0xe8))(plVar14,local_b58);
                plVar14 = (longlong *)(**(code **)(*plVar14 + 0x78))(plVar14,local_b10);
                FUN_1400ae4f0(local_b78);
                FUN_1400ae4f0(local_b58);
                FUN_1400ae4f0(local_b10);
                if (plVar14 == param_3) {
                  uVar13 = FUN_140698f70(local_b78,"CHAT_GROUP1");
                  FUN_1400cd750(&local_a88,uVar13);
                  FUN_1400ae4f0(local_b78);
                  param_2 = local_res10;
                  for (plVar14 = (longlong *)param_1[0xd31]; local_res10 = param_2,
                      plVar14 != (longlong *)0x0; plVar14 = (longlong *)plVar14[2]) {
                    uVar13 = FUN_140d5f2e0(local_b78,&DAT_141066f10,*plVar14 + 0x10);
                    FUN_1400b06b0(local_a68,uVar13,0,0xffffffffffffffff);
                    FUN_1400ae4f0(local_b78);
                    param_2 = local_res10;
                  }
                  goto LAB_140aa1a7e;
                }
                FUN_1400afe20(local_b10,"group_button_2");
                FUN_1400afe20(local_b58,"chat_window");
                FUN_1400afe20(local_b78,"toolpane");
                plVar14 = (longlong *)
                          (**(code **)(*(longlong *)param_1[0xa71] + 0xe8))
                                    ((longlong *)param_1[0xa71],local_b78);
                plVar14 = (longlong *)(**(code **)(*plVar14 + 0xe8))(plVar14,local_b58);
                plVar14 = (longlong *)(**(code **)(*plVar14 + 0x78))(plVar14,local_b10);
                FUN_1400ae4f0(local_b78);
                FUN_1400ae4f0(local_b58);
                FUN_1400ae4f0(local_b10);
                if (plVar14 == param_3) {
                  uVar13 = FUN_140698f70(local_b78,"CHAT_GROUP2");
                  FUN_1400cd750(&local_a88,uVar13);
                  FUN_1400ae4f0(local_b78);
                  param_2 = local_res10;
                  for (plVar14 = (longlong *)param_1[0xd34]; local_res10 = param_2,
                      plVar14 != (longlong *)0x0; plVar14 = (longlong *)plVar14[2]) {
                    uVar13 = FUN_140d5f2e0(local_b78,&DAT_141066f10,*plVar14 + 0x10);
                    FUN_1400b06b0(local_a68,uVar13,0,0xffffffffffffffff);
                    FUN_1400ae4f0(local_b78);
                    param_2 = local_res10;
                  }
                  goto LAB_140aa1a7e;
                }
                FUN_1400afe20(local_b10,"group_button_3");
                FUN_1400afe20(local_b58,"chat_window");
                FUN_1400afe20(local_b78,"toolpane");
                plVar14 = (longlong *)
                          (**(code **)(*(longlong *)param_1[0xa71] + 0xe8))
                                    ((longlong *)param_1[0xa71],local_b78);
                plVar14 = (longlong *)(**(code **)(*plVar14 + 0xe8))(plVar14,local_b58);
                plVar14 = (longlong *)(**(code **)(*plVar14 + 0x78))(plVar14,local_b10);
                FUN_1400ae4f0(local_b78);
                FUN_1400ae4f0(local_b58);
                FUN_1400ae4f0(local_b10);
                if (plVar14 == param_3) {
                  uVar13 = FUN_140698f70(local_b78,"CHAT_GROUP3");
                  FUN_1400cd750(&local_a88,uVar13);
                  FUN_1400ae4f0(local_b78);
                  param_2 = local_res10;
                  for (plVar14 = (longlong *)param_1[0xd37]; local_res10 = param_2,
                      plVar14 != (longlong *)0x0; plVar14 = (longlong *)plVar14[2]) {
                    uVar13 = FUN_140d5f2e0(local_b78,&DAT_141066f10,*plVar14 + 0x10);
                    FUN_1400b06b0(local_a68,uVar13,0,0xffffffffffffffff);
                    FUN_1400ae4f0(local_b78);
                    param_2 = local_res10;
                  }
                  goto LAB_140aa1a7e;
                }
                FUN_1400afe20(local_b10,"group_button_4");
                FUN_1400afe20(local_b58,"chat_window");
                FUN_1400afe20(local_b78,"toolpane");
                plVar14 = (longlong *)
                          (**(code **)(*(longlong *)param_1[0xa71] + 0xe8))
                                    ((longlong *)param_1[0xa71],local_b78);
                plVar14 = (longlong *)(**(code **)(*plVar14 + 0xe8))(plVar14,local_b58);
                plVar14 = (longlong *)(**(code **)(*plVar14 + 0x78))(plVar14,local_b10);
                FUN_1400ae4f0(local_b78);
                FUN_1400ae4f0(local_b58);
                FUN_1400ae4f0(local_b10);
                if (plVar14 == param_3) {
                  uVar13 = FUN_140698f70(local_b78,"CHAT_GROUP4");
                  FUN_1400cd750(&local_a88,uVar13);
                  FUN_1400ae4f0(local_b78);
                  param_2 = local_res10;
                  for (plVar14 = (longlong *)param_1[0xd3a]; local_res10 = param_2,
                      plVar14 != (longlong *)0x0; plVar14 = (longlong *)plVar14[2]) {
                    uVar13 = FUN_140d5f2e0(local_b78,&DAT_141066f10,*plVar14 + 0x10);
                    FUN_1400b06b0(local_a68,uVar13,0,0xffffffffffffffff);
                    FUN_1400ae4f0(local_b78);
                    param_2 = local_res10;
                  }
                  goto LAB_140aa1a7e;
                }
                cVar9 = FUN_1400b1830(param_3 + 2,"SingleUnitPanel");
                if (((cVar9 != '\0') ||
                    (cVar9 = FUN_1400b1830(param_3 + 2,"unitpanel_typeicon"), cVar9 != '\0')) ||
                   (cVar9 = FUN_1400b1830(param_3 + 2,"FlankLeader"), cVar9 != '\0')) {
                  uVar13 = FUN_140bc2e70(param_1[0xa7e],local_508,param_3);
                  FUN_140156920(&local_a88,uVar13);
                  goto LAB_140aa1a6b;
                }
                cVar9 = FUN_1400b1830(param_3 + 2,"reorg_typeicon");
                if ((cVar9 != '\0') ||
                   (cVar9 = FUN_1400b1830(param_3 + 2,"reorg_entry"), cVar9 != '\0')) {
                  uVar13 = FUN_140bc8ee0(param_1[0xa7d],local_508,param_3);
                  FUN_140156920(&local_a88,uVar13);
                  goto LAB_140aa1a6b;
                }
                cVar9 = FUN_1400b1830(param_3 + 2,"singleunit_typeicon");
                if (cVar9 != '\0') {
                  uVar13 = FUN_140bc2e70(param_1[0xa7e],local_508,param_3);
                  FUN_140156920(&local_a88,uVar13);
                  goto LAB_140aa1a6b;
                }
                cVar9 = FUN_1400b1830(param_3 + 2,"flankdesigner");
                if (((cVar9 != '\0') ||
                    (cVar9 = FUN_1400b1830(param_3 + 2,"flankdesigner_typeicon"), cVar9 != '\0')) ||
                   (cVar9 = FUN_1400b1830(param_3 + 2,"flankdesigner_entry"), cVar9 != '\0')) {
                  if ((*(byte *)(*(longlong *)(param_1[0xa7e] + 0x38) + 0x85) & 4) != 0) {
                    uVar13 = FUN_140bc28e0(param_1[0xa7e],local_508,param_3);
                    FUN_140156920(&local_a88,uVar13);
                    FUN_14013a6e0(local_508);
                  }
                  lVar12 = param_1[0xa7f];
                  param_2 = local_res10;
                  if ((lVar12 == 0) || ((*(byte *)(*(longlong *)(lVar12 + 0x38) + 0x85) & 4) == 0))
                  goto LAB_140aa1a7e;
                  uVar13 = FUN_1403c2110(lVar12,local_508,param_3);
                  FUN_140156920(&local_a88,uVar13);
                  goto LAB_140aa1a6b;
                }
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,"consolidate_button");
                if (cVar9 != '\0') {
LAB_140aa184e:
                  uVar13 = FUN_140bc2e70(param_1[0xa7e],local_508,param_3);
                  FUN_140156920(&local_a88,uVar13);
                  goto LAB_140aa1a6b;
                }
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,"attach_to_region_button");
                if (cVar9 != '\0') goto LAB_140aa184e;
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,"detach_from_region_button");
                if (cVar9 != '\0') goto LAB_140aa184e;
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,"newunitbuttonremove_unit_from_selection_button");
                if (cVar9 != '\0') {
                  uVar13 = FUN_140698f70(local_b78,"DESELECT_UNIT");
                  FUN_1400cd750(&local_a88,uVar13);
                  FUN_1400ae4f0(local_b78);
                  uVar13 = FUN_140698f70(local_b58,"DESELECT_UNIT_DRO");
LAB_140a9fa57:
                  FUN_1400cd750(local_a68,uVar13);
LAB_140a9fa63:
                  pppppppcVar22 = local_b58;
                  goto LAB_140a9e049;
                }
                cVar9 = FUN_1400b1830(param_3 + 2,"MultiUnitPanel");
                if (cVar9 != '\0') {
                  uVar13 = (**(code **)(*param_3 + 0x90))();
                  cVar9 = FUN_1400b1830(uVar13,"mergebutton");
                  if (cVar9 == '\0') {
                    uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                    cVar9 = FUN_1400b1830(uVar13,"reorganizebutton");
                    if (cVar9 != '\0') {
                      pcVar19 = "REORGANISE_UNITS";
                      if (2 < (int)param_1[0xa70]) {
                        pcVar19 = "NO_REORGANISE_UNITS";
                      }
                      uVar13 = FUN_140698f70(local_b78,pcVar19);
                      FUN_1400cd750(&local_a88,uVar13);
                      FUN_1400ae4f0(local_b78);
                      uVar13 = FUN_140698f70(local_b78,"REORGANISE_UNITS_DRO");
                      goto LAB_140a9e038;
                    }
                    uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                    cVar9 = FUN_1400b1830(uVar13,"loadtoshipbutton");
                    param_2 = local_res10;
                    if (cVar9 == '\0') goto LAB_140aa1a7e;
                    uVar13 = FUN_140698f70(local_b78,"EMBARK_UNITS");
                    FUN_1400cd750(&local_a88,uVar13);
                    FUN_1400ae4f0(local_b78);
                    uVar13 = FUN_140698f70(local_b58,"EMBARK_UNITS_DRO");
                  }
                  else {
                    uVar13 = FUN_140698f70(local_b78,"MERGE_UNITS");
                    FUN_1400cd750(&local_a88,uVar13);
                    FUN_1400ae4f0(local_b78);
                    uVar13 = FUN_140698f70(local_b58,"MERGE_UNITS_DRO");
                  }
                  goto LAB_140a9fa57;
                }
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,"reinforcebutton");
                if (cVar9 != '\0') {
                  uVar13 = FUN_140698f70(local_b78,"REINFORCE_UNITS");
                  FUN_1400cd750(&local_a88,uVar13);
                  FUN_1400ae4f0(local_b78);
                  uVar13 = FUN_140698f70(local_b58,"REINFORCE_UNITS_DRO");
                  goto LAB_140a9fa57;
                }
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,"closebutton");
                if (cVar9 != '\0') goto LAB_140aa1842;
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,"close_button");
                if (cVar9 != '\0') goto LAB_140aa1842;
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,&DAT_1411039bc);
                if (cVar9 != '\0') {
                  pcVar19 = "COMBAT_DICE";
                  goto LAB_140a9fe12;
                }
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,"shock");
                if (cVar9 != '\0') {
                  pcVar19 = "COMBAT_SHOCK";
                  goto LAB_140a9fe12;
                }
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,&DAT_141118ae8);
                if (cVar9 != '\0') {
                  pcVar19 = "COMBAT_FIRE";
                  goto LAB_140a9fe12;
                }
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,"terrain");
                if (cVar9 != '\0') {
                  pcVar19 = "COMBAT_TERRAIN";
                  goto LAB_140a9fe12;
                }
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,"crossing");
                if (cVar9 != '\0') {
                  pcVar19 = "COMBAT_CROSSING";
                  goto LAB_140a9fe12;
                }
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,"modifier_icon");
                if (cVar9 != '\0') {
                  FUN_1400ae4a0(local_b10,param_3 + 2);
                  uVar13 = FUN_14087a180();
                  plVar14 = (longlong *)FUN_14087ae90(uVar13,local_b10);
                  uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffff470 >> 0x20);
                  if (plVar14 == (longlong *)0x0) {
                    if (*(code **)(*param_1 + 0x108) == (code *)&LAB_14064e890) {
                      uVar13 = *(undefined8 *)(DAT_1416e3260 + 0x3f0);
                    }
                    else {
                      uVar13 = (**(code **)(*param_1 + 0x108))(param_1);
                    }
                    lVar12 = FUN_1401ad520(uVar13);
                    if (lVar12 != 0) {
                      if (*(code **)(*param_1 + 0x108) == (code *)&LAB_14064e890) {
                        uVar13 = *(undefined8 *)(DAT_1416e3260 + 0x3f0);
                      }
                      else {
                        uVar13 = (**(code **)(*param_1 + 0x108))(param_1);
                      }
                      lVar12 = FUN_1401ad520(uVar13);
                      plVar23 = *(longlong **)(lVar12 + 8);
                      plVar14 = plVar23 + *(int *)(lVar12 + 0x14);
                      for (; plVar23 != plVar14; plVar23 = plVar23 + 1) {
                        lVar12 = *plVar23;
                        uVar13 = (**(code **)(**(longlong **)(lVar12 + 0x10) + 0x38))();
                        iVar10 = FUN_1400afd70(uVar13,param_3 + 2);
                        uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffff470 >> 0x20);
                        if (iVar10 == 0) {
                          pcVar19 = (char *)(**(code **)(**(longlong **)(lVar12 + 0x10) + 0x30))();
                          if (0xf < *(ulonglong *)(pcVar19 + 0x18)) {
                            pcVar19 = *(char **)pcVar19;
                          }
                          if (*pcVar19 == '\0') {
                            lVar27 = 0;
                          }
                          else {
                            lVar27 = -1;
                            do {
                              lVar27 = lVar27 + 1;
                            } while (pcVar19[lVar27] != '\0');
                          }
                          FUN_1400b0300(&local_a88,pcVar19,lVar27);
                          FUN_1400afe20(local_b58,&DAT_141078ac4);
                          uVar13 = FUN_140621e40(lVar12 + 0x18,local_b38);
                          FUN_1400afe20(local_b78,&DAT_1410d0b70);
                          uVar13 = FUN_140d5f250(local_b78,&local_ac8,uVar13);
                          uVar13 = FUN_140d5f250(uVar13,&local_af0,local_b58);
                          FUN_1400b06b0(&local_a88,uVar13,0,0xffffffffffffffff);
                          FUN_1400ae4f0(&local_af0);
                          FUN_1400ae4f0(&local_ac8);
                          FUN_1400ae4f0(local_b78);
                          FUN_1400ae4f0(local_b38);
                          FUN_1400ae4f0(local_b58);
                          in_stack_fffffffffffff470 = CONCAT44(uVar29,0xbf);
                          uVar13 = (**(code **)(**(longlong **)(lVar12 + 0x10) + 0x70))
                                             (*(longlong **)(lVar12 + 0x10),local_b38,2,0,0,0,1,
                                              in_stack_fffffffffffff470);
                          FUN_1400b06b0(&local_a88,uVar13);
                          FUN_1400ae4f0(local_b38);
                        }
                      }
                    }
                  }
                  else {
                    if ((undefined **)*plVar14 == &PTR_FUN_1410e5ac0) {
                      plVar23 = plVar14 + 0x69;
                    }
                    else {
                      plVar23 = (longlong *)(*(code *)((undefined **)*plVar14)[6])(plVar14);
                    }
                    if (0xf < (ulonglong)plVar23[3]) {
                      plVar23 = (longlong *)*plVar23;
                    }
                    if ((char)*plVar23 != '\0') {
                      lVar12 = -1;
                      do {
                        lVar12 = lVar12 + 1;
                      } while (*(char *)((longlong)plVar23 + lVar12) != '\0');
                    }
                    FUN_1400b0300(&local_a88,plVar23,lVar12);
                    FUN_1400afe20(local_b78,"\n(TODO: trigger explained here)\n");
                    FUN_1400b06b0(&local_a88,local_b78,0,0xffffffffffffffff);
                    FUN_1400ae4f0(local_b78);
                    uVar13 = (**(code **)(*plVar14 + 0x70))
                                       (plVar14,local_b78,2,0,0,0,1,CONCAT44(uVar29,0xbf));
                    FUN_1400b06b0(&local_a88,uVar13,0,0xffffffffffffffff);
                    FUN_1400ae4f0(local_b78);
                  }
                  pppppppcVar22 = local_b10;
                  goto LAB_140a9e049;
                }
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,"province_modifier");
                uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffff470 >> 0x20);
                if (cVar9 != '\0') {
                  if (*(code **)(*param_1 + 0x2a8) == (code *)&LAB_14066c7c0) {
                    lVar27 = param_1[0xcbe];
                  }
                  else {
                    lVar27 = (**(code **)(*param_1 + 0x2a8))(param_1);
                  }
                  plVar14 = *(longlong **)(*(longlong *)(lVar27 + 0x48) + 0xca8);
                  param_2 = local_res10;
                  while (local_res10 = param_2, plVar14 != (longlong *)0x0) {
                    lVar27 = *plVar14;
                    plVar14 = (longlong *)plVar14[2];
                    uVar13 = (**(code **)(**(longlong **)(lVar27 + 0x10) + 0x38))();
                    iVar10 = FUN_1400afd70(uVar13,param_3 + 2);
                    uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffff470 >> 0x20);
                    param_2 = local_res10;
                    if (iVar10 == 0) {
                      pcVar19 = (char *)(**(code **)(**(longlong **)(lVar27 + 0x10) + 0x30))();
                      if (0xf < *(ulonglong *)(pcVar19 + 0x18)) {
                        pcVar19 = *(char **)pcVar19;
                      }
                      lVar28 = lVar12;
                      if (*pcVar19 != '\0') {
                        lVar28 = -1;
                        do {
                          lVar28 = lVar28 + 1;
                        } while (pcVar19[lVar28] != '\0');
                      }
                      FUN_1400b0300(&local_a88,pcVar19,lVar28);
                      FUN_1400afe20(local_b58,&DAT_141078ac4);
                      uVar13 = FUN_140621e40(lVar27 + 0x18,&local_af0);
                      FUN_1400afe20(local_b78,&DAT_1410d0b70);
                      uVar13 = FUN_140d5f250(local_b78,local_b10,uVar13);
                      uVar13 = FUN_140d5f250(uVar13,local_b38,local_b58);
                      FUN_1400b06b0(&local_a88,uVar13,0);
                      FUN_1400ae4f0(local_b38);
                      FUN_1400ae4f0(local_b10);
                      FUN_1400ae4f0(local_b78);
                      FUN_1400ae4f0(&local_af0);
                      FUN_1400ae4f0(local_b58);
                      in_stack_fffffffffffff470 = CONCAT44(uVar29,0xbf);
                      uVar13 = (**(code **)(**(longlong **)(lVar27 + 0x10) + 0x70))
                                         (*(longlong **)(lVar27 + 0x10),local_b38,2,0,0,0,1,
                                          in_stack_fffffffffffff470);
                      FUN_1400b06b0(&local_a88,uVar13);
                      FUN_1400ae4f0(local_b38);
                      param_2 = local_res10;
                    }
                  }
                  goto LAB_140aa1a7e;
                }
                uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                cVar9 = FUN_1400b1830(uVar13,"CustomMapMode1");
                if (cVar9 == '\0') {
                  uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                  cVar9 = FUN_1400b1830(uVar13,"CustomMapMode2");
                  if (cVar9 != '\0') {
                    iVar10 = *(int *)((longlong)param_1 + 0x5a04);
                    goto LAB_140aa0e53;
                  }
                  uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                  cVar9 = FUN_1400b1830(uVar13,"CustomMapMode3");
                  if (cVar9 != '\0') {
                    iVar10 = (int)param_1[0xb41];
                    goto LAB_140aa0e53;
                  }
                  uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                  cVar9 = FUN_1400b1830(uVar13,"CustomMapMode4");
                  if (cVar9 != '\0') {
                    iVar10 = *(int *)((longlong)param_1 + 0x5a0c);
                    goto LAB_140aa0e53;
                  }
                  uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                  cVar9 = FUN_1400b1830(uVar13,"CustomMapMode5");
                  if (cVar9 != '\0') {
                    iVar10 = (int)param_1[0xb42];
                    goto LAB_140aa0e53;
                  }
                  uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                  cVar9 = FUN_1400b1830(uVar13,"minimap_zoomin");
                  if (cVar9 != '\0') {
                    pcVar19 = "ZOOM_IN_INTERFACE_LABEL";
                    goto LAB_140aa0e71;
                  }
                  uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                  cVar9 = FUN_1400b1830(uVar13,"minimap_zoomout");
                  if (cVar9 != '\0') {
                    pcVar19 = "ZOOM_OUT_INTERFACE_LABEL";
                    goto LAB_140aa0e71;
                  }
                  cVar9 = FUN_1400b1830(param_3 + 2,"LEDGER_NATION_COMPARISON_SHIELDS");
                  if (cVar9 == '\0') {
                    cVar9 = FUN_1400b1830(param_3 + 2,"HOSTILE_RELATIONLEDGER_CB_LEFT");
                    if (cVar9 != '\0') {
                      uVar13 = FUN_140698f70(local_b38,"HOSTILE_RELATIONLEDGER_CB_LEFT_S");
                      FUN_1400cd750(&local_a88,uVar13);
                      FUN_1400ae4f0(local_b38);
                      uVar13 = FUN_140698f70(local_b78,"HOSTILE_RELATIONLEDGER_CB_LEFT_L");
                      goto LAB_140a9e038;
                    }
                    cVar9 = FUN_1400b1830(param_3 + 2,"HOSTILE_RELATIONLEDGER_CB_RIGHT");
                    if (cVar9 != '\0') {
                      uVar13 = FUN_140698f70(local_b38,"HOSTILE_RELATIONLEDGER_CB_RIGHT_S");
                      FUN_1400cd750(&local_a88,uVar13);
                      FUN_1400ae4f0(local_b38);
                      uVar13 = FUN_140698f70(local_b78,"HOSTILE_RELATIONLEDGER_CB_RIGHT_L");
                      goto LAB_140a9e038;
                    }
                    cVar9 = FUN_1400b1830(param_3 + 2,"HOSTILE_RELATIONLEDGER_TRUCE");
                    if (cVar9 != '\0') {
                      uVar13 = FUN_140698f70(local_b38,"LEDGER_TRUCE_S");
                      FUN_1400cd750(&local_a88,uVar13);
                      FUN_1400ae4f0(local_b38);
                      uVar13 = FUN_140698f70(local_b78,"LEDGER_TRUCE_L");
                      goto LAB_140a9e038;
                    }
                    cVar9 = FUN_1400b1830(param_3 + 2,"HOSTILE_RELATIONLEDGER_WAR");
                    if (cVar9 != '\0') {
                      uVar13 = FUN_140698f70(local_b38,&DAT_1410a3a64);
                      FUN_1400cd750(&local_a88,uVar13);
                      FUN_1400ae4f0(local_b38);
                      uVar13 = FUN_140698f70(local_b78,"LEDGER_WAR_L");
                      goto LAB_140a9e038;
                    }
                    cVar9 = FUN_1400b1830(param_3 + 2,"LEDGER_FINESSE");
                    if (cVar9 != '\0') {
                      uVar13 = FUN_140698f70(local_b38,"STAT_FINESSE");
                      FUN_1400cd750(&local_a88,uVar13);
                      FUN_1400ae4f0(local_b38);
                      uVar13 = FUN_140698f70(local_b78,"STAT_FINESSE_DESC");
                      goto LAB_140a9e038;
                    }
                    cVar9 = FUN_1400b1830(param_3 + 2,"LEDGER_CHARISMA");
                    if (cVar9 != '\0') {
                      uVar13 = FUN_140698f70(local_b38,"STAT_CHARISMA");
                      FUN_1400cd750(&local_a88,uVar13);
                      FUN_1400ae4f0(local_b38);
                      uVar13 = FUN_140698f70(local_b78,"STAT_CHARISMA_DESC");
                      goto LAB_140a9e038;
                    }
                    cVar9 = FUN_1400b1830(param_3 + 2,"LEDGER_MARTIAL");
                    if (cVar9 != '\0') {
                      uVar13 = FUN_140698f70(local_b38,"STAT_MARTIAL");
                      FUN_1400cd750(&local_a88,uVar13);
                      FUN_1400ae4f0(local_b38);
                      uVar13 = FUN_140698f70(local_b78,"STAT_MARTIAL_DESC");
                      goto LAB_140a9e038;
                    }
                    cVar9 = FUN_1400b1830(param_3 + 2,"LEDGER_WEALTH");
                    if (cVar9 != '\0') {
                      uVar13 = FUN_140698f70(local_b38,"STAT_WEALTH");
                      FUN_1400cd750(&local_a88,uVar13);
                      FUN_1400ae4f0(local_b38);
                      uVar13 = FUN_140698f70(local_b78,"STAT_WEALTH_DESC");
                      goto LAB_140a9e038;
                    }
                    uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                    cVar9 = FUN_1400b1830(uVar13,"ledger_national_stastistics");
                    if (cVar9 != '\0') {
                      pcVar19 = "LEDGER_COUNTRY_OVERVIEW";
                      goto LAB_140aa0e71;
                    }
                    uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                    cVar9 = FUN_1400b1830(uVar13,"ledger_national_comparison");
                    if (cVar9 != '\0') {
                      pcVar19 = "LEDGER_NATIONAL_COMPARISON";
                      goto LAB_140aa0e71;
                    }
                    uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                    cVar9 = FUN_1400b1830(uVar13,"ledger_economics");
                    if (cVar9 != '\0') {
                      pcVar19 = "LEDGER_ECONOMY_OVERVIEW";
                      goto LAB_140aa0e71;
                    }
                    uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                    cVar9 = FUN_1400b1830(uVar13,"ledger_military_statistics");
                    if (cVar9 != '\0') {
                      pcVar19 = "LEDGER_MILITARY_OVERVIEW";
                      goto LAB_140aa0e71;
                    }
                    uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                    cVar9 = FUN_1400b1830(uVar13,"ledger_relations");
                    if (cVar9 != '\0') {
                      pcVar19 = "LEDGER_DIPLOMACY_OVERVIEW";
                      goto LAB_140aa0e71;
                    }
                    uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                    cVar9 = FUN_1400b1830(uVar13,"button_home");
                    if (cVar9 != '\0') {
                      pcVar19 = "M_HOME_BUTTON";
                      goto LAB_140aa0e71;
                    }
                    uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                    cVar9 = FUN_1400b1830(uVar13,"button_goto");
                    if (cVar9 != '\0') {
                      pcVar19 = "M_GOTO_BUTTON";
                      goto LAB_140aa0e71;
                    }
                    uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                    cVar9 = FUN_1400b1830(uVar13,"ledger_button");
                    if (cVar9 != '\0') {
                      pcVar19 = "M_LEDGER_BUTTON";
                      goto LAB_140aa0e71;
                    }
                    uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                    cVar9 = FUN_1400b1830(uVar13,"menu_button");
                    if (cVar9 != '\0') {
                      pcVar19 = "M_MENU_BUTTON";
                      goto LAB_140aa0e71;
                    }
                    uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                    cVar9 = FUN_1400b1830(uVar13,"menu_convert_button");
                    if (cVar9 == '\0') {
                      cVar9 = FUN_1400b1830(param_3 + 2,"crusade_banner");
                      if (cVar9 != '\0') {
                        uVar13 = FUN_1409a3f90(*(undefined8 *)
                                                (*(longlong *)(DAT_1416e3260 + 0x3f0) + 0x168),
                                               local_508,1);
                        FUN_140156920(&local_a88,uVar13);
                        goto LAB_140aa1a6b;
                      }
                      cVar9 = FUN_1400b1830(param_3 + 2,"epidemics_button");
                      if (cVar9 == '\0') {
                        cVar9 = FUN_1400b1830(param_3 + 2,"wonder_view");
                        if (cVar9 == '\0') {
                          uVar13 = (**(code **)(*param_3 + 0x90))(param_3);
                          uVar13 = FUN_1400ae4a0(local_b38,uVar13);
                          FUN_1408e1f60(local_b78,uVar13);
                          if (local_b68 == 0) {
                            uVar13 = FUN_14018aaf0();
                            plVar14 = (longlong *)FUN_14018b6a0(uVar13,param_3 + 2);
                            if ((plVar14 == (longlong *)0x0) ||
                               (cVar9 = (**(code **)(*plVar14 + 0xd0))(plVar14), cVar9 == '\0')) {
                              uVar13 = FUN_140a99da0(param_1,local_508,param_3);
                              FUN_140156920(&local_a88,uVar13);
                              FUN_14013a6e0(local_508);
                            }
                            else {
                              pcVar19 = (char *)FUN_140187eb0(plVar14,DAT_1418d6ab0);
                              if (0xf < *(ulonglong *)(pcVar19 + 0x18)) {
                                pcVar19 = *(char **)pcVar19;
                              }
                              if (*pcVar19 != '\0') {
                                lVar12 = -1;
                                do {
                                  lVar12 = lVar12 + 1;
                                } while (pcVar19[lVar12] != '\0');
                              }
                              FUN_1400b0300(&local_a88,pcVar19,lVar12);
                              uVar13 = (**(code **)(*plVar14 + 0x70))
                                                 (plVar14,local_b58,2,0,0,0,1,CONCAT44(uVar29,0xbf))
                              ;
                              FUN_1400cd750(local_a68,uVar13);
                              FUN_1400ae4f0(local_b58);
                            }
                          }
                          else {
                            uVar13 = FUN_1406991e0(local_b10,local_b78);
                            FUN_1400cd750(&local_a88,uVar13);
                            FUN_1400ae4f0(local_b10);
                            FUN_1400afe20(local_b58,"_DESC");
                            uVar13 = FUN_140d5f250(local_b78,&local_af0,local_b58);
                            uVar13 = FUN_1406991e0(local_b10,uVar13);
                            FUN_1400cd750(local_a68,uVar13);
                            FUN_1400ae4f0(local_b10);
                            FUN_1400ae4f0(&local_af0);
                            FUN_1400ae4f0(local_b58);
                            uVar13 = FUN_140698f70(&local_ac8,"MAPMODE_DRAG");
                            uVar13 = FUN_140d5f2e0(local_b58,&DAT_141066f10,uVar13);
                            FUN_1400b06b0(local_a68,uVar13,0,0xffffffffffffffff);
                            FUN_1400ae4f0(local_b58);
                            FUN_1400ae4f0(&local_ac8);
                          }
                          goto LAB_140a9e044;
                        }
                        lVar12 = FUN_14066c7d0(param_1);
                        (*(code *)**(undefined8 **)(lVar12 + 0x30))
                                  ((undefined8 *)(lVar12 + 0x30),param_3,&local_a88);
                        param_2 = local_res10;
                      }
                      else {
                        uVar13 = FUN_1404e3460();
                        FUN_1404e6a10(uVar13,&local_a88);
                        param_2 = local_res10;
                      }
                      goto LAB_140aa1a7e;
                    }
                    uVar13 = FUN_140698bb0(local_b38,"MENU_BAR_GAME_CONVERT_DEL");
                    FUN_1400cd750(&local_a88,uVar13);
                    FUN_1400ae4f0(local_b38);
                    param_2 = local_res10;
                    if ((DAT_1417efb3f != '\0') ||
                       (iVar10 = (**(code **)(*DAT_1417e6ae8 + 0x38))(DAT_1417e6ae8,0xc),
                       param_2 = local_res10, iVar10 < 1)) goto LAB_140aa1a7e;
                    uVar13 = FUN_140698bb0(local_b38,"MENU_BAR_GAME_CONVERT_DEL");
                    FUN_1400cd750(&local_a88,uVar13);
                    FUN_1400ae4f0(local_b38);
                    FUN_1400afe20(local_b78,"dlc030");
                    lVar12 = FUN_140c76880(DAT_1417e3bb0,local_b78);
                    FUN_1400ae4f0(local_b78);
                    if (lVar12 != 0) {
                      pcVar19 = "DLC_NOT_OWNED";
                      if (*(longlong *)(lVar12 + 0xf0) != 0) {
                        pcVar19 = "DLC_DISABLED";
                      }
                      uVar13 = FUN_140698bb0(local_b78,pcVar19);
                      uVar13 = FUN_140d5f2e0(local_b38,&DAT_141066f10,uVar13);
                      FUN_1400b06b0(&local_a88,uVar13,0,0xffffffffffffffff);
                      FUN_1400ae4f0(local_b38);
                      FUN_1400ae4f0(local_b78);
                    }
                    uVar13 = FUN_140698bb0(local_b38,"DLC_dlc030_RECOMMENDATION_EU4");
                    FUN_1400cd750(local_a68,uVar13);
                    FUN_1400ae4f0(local_b38);
                    FUN_14013a570(local_a68);
                    uVar13 = FUN_140698bb0(local_b78,"DLC_RECOMMENDATION_REASON_EU4");
                    FUN_1400b06b0(local_a68,uVar13,0,0xffffffffffffffff);
                    FUN_1400ae4f0(local_b78);
                    FUN_14013a570(local_a68);
                    uVar13 = FUN_140698bb0(local_b58,"CLICK_TO_VIEW_DLC");
                    uVar13 = FUN_140d5f2e0(local_b38,&DAT_141066f10,uVar13);
                    FUN_1400b06b0(local_a68,uVar13,0,0xffffffffffffffff);
                    FUN_1400ae4f0(local_b38);
                    goto LAB_140a9fa63;
                  }
                  uVar13 = FUN_140698f70(local_b38,"LEDGER_NATION_STATISTICS_SHIELDS_S");
                  FUN_1400cd750(&local_a88,uVar13);
                  FUN_1400ae4f0(local_b38);
                  uVar13 = FUN_140698f70(local_b78,"LEDGER_NATION_STATISTICS_SHIELDS_L");
LAB_140a9e038:
                  puVar21 = local_a68;
                  goto LAB_140a9e03c;
                }
                iVar10 = (int)param_1[0xb40];
LAB_140aa0e53:
                if (-1 < iVar10) {
                  FUN_140677110(param_1,&local_a88);
                  param_2 = local_res10;
                  goto LAB_140aa1a7e;
                }
                pcVar19 = "CUSTOM_MAPMODE_DESC";
                goto LAB_140aa0e71;
              }
              if (*(code **)(*param_1 + 0x108) == (code *)&LAB_14064e890) {
                lVar27 = *(longlong *)(DAT_1416e3260 + 0x3f0);
              }
              else {
                lVar27 = (**(code **)(*param_1 + 0x108))(param_1);
              }
              pcVar19 = (char *)FUN_14099a120(*(undefined8 *)(lVar27 + 0x168));
              if (0xf < *(ulonglong *)(pcVar19 + 0x18)) {
                pcVar19 = *(char **)pcVar19;
              }
              if (*pcVar19 != '\0') {
                lVar12 = -1;
                do {
                  lVar12 = lVar12 + 1;
                } while (pcVar19[lVar12] != '\0');
              }
              FUN_1400b0300(&local_a88,pcVar19,lVar12);
              if (*(code **)(*param_1 + 0x108) == (code *)&LAB_14064e890) {
                lVar12 = *(longlong *)(DAT_1416e3260 + 0x3f0);
              }
              else {
                lVar12 = (**(code **)(*param_1 + 0x108))(param_1);
              }
              plVar14 = (longlong *)(*(longlong *)(lVar12 + 0x168) + 0x758);
              uVar17 = CONCAT44(uVar29,0xbf);
              uVar13 = (**(code **)(*plVar14 + 0x70))(plVar14,local_b78,2,0,0,0,1,uVar17);
              uVar29 = (undefined4)((ulonglong)uVar17 >> 0x20);
              FUN_1400cd750(local_a68,uVar13);
              FUN_1400ae4f0(local_b78);
              if (*(code **)(*param_1 + 0x108) == (code *)&LAB_14064e890) {
                lVar12 = *(longlong *)(DAT_1416e3260 + 0x3f0);
              }
              else {
                lVar12 = (**(code **)(*param_1 + 0x108))(param_1);
              }
              plVar14 = (longlong *)(*(longlong *)(lVar12 + 0x168) + 0x338);
              uVar13 = (**(code **)(*plVar14 + 0x70))
                                 (plVar14,local_b78,2,0,0,0,1,CONCAT44(uVar29,0xbf));
              FUN_1400b06b0(local_a68,uVar13,0,0xffffffffffffffff);
LAB_140a9e044:
              pppppppcVar22 = (char *******)local_b78;
            }
            else {
LAB_140aa1842:
              pcVar19 = "CLOSE";
LAB_140aa0e71:
              uVar13 = FUN_140698f70(local_b38,pcVar19);
              FUN_1400cd750(&local_a88,uVar13);
              pppppppcVar22 = local_b38;
            }
LAB_140a9e049:
            FUN_1400ae4f0(pppppppcVar22);
            param_2 = local_res10;
            goto LAB_140aa1a7e;
          }
          uVar13 = FUN_1408bd8a0(param_1[0xce9],local_508,param_3);
          FUN_140156920(&local_a88,uVar13);
        }
        else {
          uVar13 = FUN_140bf8070(param_1[0xa79],local_508,param_3);
          FUN_140156920(&local_a88,uVar13);
        }
      }
      else {
        uVar13 = FUN_14063b5b0(param_1,local_508,param_3);
        FUN_140156920(&local_a88,uVar13);
      }
LAB_140aa1a6b:
      FUN_14013a6e0(local_508);
      param_2 = local_res10;
    }
  }
  else {
    puVar24 = (undefined8 *)((longlong)(iVar10 + -1) * 0x20 + lVar28);
    if (0xf < (ulonglong)puVar24[3]) {
      puVar24 = (undefined8 *)*puVar24;
    }
    lVar12 = 0;
    do {
      lVar27 = lVar12 + 1;
      if (*(char *)((longlong)puVar24 + lVar12) != "status"[lVar12]) goto LAB_140a9e890;
      lVar12 = lVar27;
    } while (lVar27 != 7);
    pcVar19 = (char *)((longlong)(iVar10 + -2) * 0x20 + lVar28);
    if (0xf < *(ulonglong *)(pcVar19 + 0x18)) {
      pcVar19 = *(char **)pcVar19;
    }
    iVar11 = strcmp(pcVar19,"portrait");
    if (iVar11 != 0) goto LAB_140a9e890;
    local_res8 = (void *)CONCAT44((int)param_3[1],0x42);
    lVar27 = FUN_1400d3090(&local_res8);
    lVar12 = DAT_1416e2360;
    if (lVar27 != 0) {
      lVar12 = lVar27;
    }
    iVar10 = (**(code **)(*param_3 + 0xa0))(param_3);
    if (iVar10 == 1) {
      if ((*(longlong *)(lVar12 + 0x28) == 0) ||
         ((*(byte *)(*(longlong *)(lVar12 + 0x28) + 0xd6c) & 2) == 0)) {
        if (DAT_1417e6c90 < *(int *)(lVar12 + 0xbc)) {
          piVar15 = (int *)FUN_14077c7b0(DAT_1416e3260);
          if ((*piVar15 < *(int *)(lVar12 + 0xb8)) || (*(int *)(lVar12 + 0xbc) <= *piVar15))
          goto LAB_140a9e1f3;
        }
        uVar13 = FUN_1401e4e40(*(undefined8 *)(lVar12 + 0x138),local_b58,0);
        lVar27 = 0x38;
        if (*(longlong *)(lVar12 + 0xa0) != 0) {
          lVar27 = 0x90;
        }
        uVar13 = FUN_140152080(local_b78,"CHAR_STATUS_IMPRISONED",&DAT_1410725c8,lVar27 + lVar12,
                               "JAILOR",uVar13);
        FUN_1400cd750(&local_a88,uVar13);
        FUN_1400ae4f0(local_b78);
        FUN_1400ae4f0(local_b58);
        param_2 = local_res10;
        goto LAB_140aa1a7e;
      }
LAB_140a9e1f3:
      uVar13 = FUN_140698bb0(local_b78,"DIED_IN_PRISON");
LAB_140a9e204:
      FUN_1400cd750(&local_a88,uVar13);
      pppppppcVar22 = (char *******)local_b78;
LAB_140a9e215:
      FUN_1400ae4f0(pppppppcVar22);
      param_2 = local_res10;
    }
    else {
      iVar10 = (**(code **)(*param_3 + 0xa0))(param_3);
      if (iVar10 == 2) {
        param_2 = local_res10;
        if ((*(longlong *)(lVar12 + 0x28) == 0) ||
           ((*(byte *)(*(longlong *)(lVar12 + 0x28) + 0xd6d) & 4) == 0)) goto LAB_140aa1a7e;
        lVar27 = 0x38;
        if (*(longlong *)(lVar12 + 0xa0) != 0) {
          lVar27 = 0x90;
        }
        uVar13 = FUN_140152450(local_b78,"CHAR_STATUS_INCAPABLE",&DAT_1410725c8,lVar27 + lVar12);
        goto LAB_140a9e204;
      }
      iVar10 = (**(code **)(*param_3 + 0xa0))(param_3);
      if (iVar10 == 3) {
        lVar27 = *(longlong *)(lVar12 + 0x28);
        lVar28 = DAT_1416e2368;
        if (lVar27 != 0) {
          lVar28 = *(longlong *)(lVar27 + 0xce0);
        }
        if ((*(byte *)(lVar28 + 0x1e9) & 2) == 0) goto LAB_140a9e42f;
        lVar28 = DAT_1416e2368;
        if (lVar27 != 0) {
          lVar28 = *(longlong *)(lVar27 + 0xce0);
        }
        lVar27 = FUN_140201cc0(lVar28,0);
        pcVar4 = *(code **)(*(longlong *)(lVar27 + 0x10) + 0x30);
        if (pcVar4 == (code *)&LAB_140915c70) {
          lVar27 = *(longlong *)(lVar27 + 0xf0) + 0x10;
        }
        else {
          lVar27 = (*pcVar4)();
        }
        lVar28 = DAT_1416e2368;
        if (*(longlong *)(lVar12 + 0x28) != 0) {
          lVar28 = *(longlong *)(*(longlong *)(lVar12 + 0x28) + 0xce0);
        }
        uVar13 = FUN_1401e4e40(lVar28,local_b58,0);
        lVar28 = 0x38;
        if (*(longlong *)(lVar12 + 0xa0) != 0) {
          lVar28 = 0x90;
        }
        uVar13 = FUN_140269eb0(local_b78,"CHAR_STATUS_EDUCATED",&DAT_1410725c8,lVar28 + lVar12,
                               "OTHER",uVar13,"LOCATION",lVar27);
        FUN_1400cd750(&local_a88,uVar13);
        FUN_1400ae4f0(local_b78);
        pppppppcVar22 = local_b58;
        goto LAB_140a9e215;
      }
LAB_140a9e42f:
      iVar10 = (**(code **)(*param_3 + 0xa0))(param_3);
      if (iVar10 == 4) {
        plVar14 = DAT_1416e3a88;
        if (*(longlong *)(lVar12 + 0x28) != 0) {
          plVar14 = *(longlong **)(*(longlong *)(lVar12 + 0x28) + 0xcf0);
        }
        cVar9 = (**(code **)(*plVar14 + 0x48))();
        lVar27 = *(longlong *)(lVar12 + 0x28);
        if (cVar9 == '\0') {
          param_2 = local_res10;
          if ((lVar27 != 0) && (*(longlong *)(lVar27 + 0xcf8) != 0)) {
            lVar27 = *(longlong *)(*(longlong *)(lVar27 + 0xcf8) + 0x80);
            goto LAB_140a9e4de;
          }
        }
        else {
          plVar14 = DAT_1416e3a88;
          if (lVar27 != 0) {
            plVar14 = *(longlong **)(lVar27 + 0xcf0);
          }
          if (plVar14[5] == 0) {
            plVar14 = DAT_1416e3a88;
            if (lVar27 != 0) {
              plVar14 = *(longlong **)(lVar27 + 0xcf0);
            }
            uVar13 = FUN_1400cd630(plVar14 + 0x10);
            lVar27 = FUN_1409f4f20(uVar13);
          }
          else {
            plVar14 = DAT_1416e3a88;
            if (lVar27 != 0) {
              plVar14 = *(longlong **)(lVar27 + 0xcf0);
            }
            lVar27 = *(longlong *)(plVar14[5] + 0x80);
          }
          param_2 = local_res10;
          if ((lVar27 != 0) && (*(short *)(lVar27 + 0xe8) != 0)) {
LAB_140a9e4de:
            pcVar4 = *(code **)(*(longlong *)(lVar27 + 0x10) + 0x30);
            if (pcVar4 == (code *)&LAB_140915c70) {
              lVar27 = *(longlong *)(lVar27 + 0xf0) + 0x10;
            }
            else {
              lVar27 = (*pcVar4)();
            }
            lVar28 = 0x38;
            if (*(longlong *)(lVar12 + 0xa0) != 0) {
              lVar28 = 0x90;
            }
            uVar13 = FUN_140152080(local_b78,"CHAR_STATUS_LEADING_TROOPS",&DAT_1410725c8,
                                   lVar28 + lVar12,"LOCATION",lVar27);
            goto LAB_140a9e204;
          }
        }
      }
      else {
        iVar10 = (**(code **)(*param_3 + 0xa0))(param_3);
        if (iVar10 == 5) {
          plVar14 = DAT_1416e23a0;
          if (*(longlong *)(lVar12 + 0x28) != 0) {
            plVar14 = *(longlong **)(*(longlong *)(lVar12 + 0x28) + 0xafc);
          }
          cVar9 = (**(code **)(*plVar14 + 0x30))();
          if (cVar9 != '\0') {
            lVar27 = *(longlong *)(lVar12 + 0x28);
            plVar14 = DAT_1416e23a0;
            if (lVar27 != 0) {
              plVar14 = *(longlong **)(lVar27 + 0xafc);
            }
            if (((((char)plVar14[0x30] == '\0') && (lVar27 != 0)) &&
                (*(longlong *)(lVar27 + 0xb04) != 0)) &&
               (lVar27 = *(longlong *)(lVar27 + 0xb04), *(short *)(lVar27 + 0xe8) != 0)) {
              pcVar4 = *(code **)(*(longlong *)(lVar27 + 0x10) + 0x30);
              if (pcVar4 == (code *)&LAB_140915c70) {
                lVar27 = *(longlong *)(lVar27 + 0xf0) + 0x10;
              }
              else {
                lVar27 = (*pcVar4)();
              }
              plVar14 = DAT_1416e23a0;
              if (*(longlong *)(lVar12 + 0x28) != 0) {
                plVar14 = *(longlong **)(*(longlong *)(lVar12 + 0x28) + 0xafc);
              }
              lVar28 = 0x38;
              if (*(longlong *)(lVar12 + 0xa0) != 0) {
                lVar28 = 0x90;
              }
              uVar13 = FUN_140269eb0(local_b78,"CHAR_STATUS_JOBACTION",&DAT_1410725c8,
                                     lVar28 + lVar12,"ACTION",plVar14 + 7,"LOCATION",lVar27);
              goto LAB_140a9e204;
            }
            lVar27 = FUN_140201cc0(lVar12,0);
            pcVar4 = *(code **)(*(longlong *)(lVar27 + 0x10) + 0x30);
            if (pcVar4 != (code *)&LAB_140915c70) {
              (*pcVar4)();
            }
            FUN_1401e4e40(*(undefined8 *)(lVar12 + 0x1a8),local_b58,0);
            uVar13 = FUN_140aa1cf0(local_b78);
            FUN_1400cd750(&local_a88,uVar13);
            FUN_1400ae4f0(local_b78);
            pppppppcVar22 = local_b58;
            goto LAB_140a9e215;
          }
        }
        iVar10 = (**(code **)(*param_3 + 0xa0))(param_3);
        if (iVar10 == 6) {
          param_2 = local_res10;
          if ((*(longlong *)(lVar12 + 0x28) != 0) &&
             ((*(byte *)(*(longlong *)(lVar12 + 0x28) + 0xd6d) & 8) != 0)) {
            lVar27 = 0x38;
            if (*(longlong *)(lVar12 + 0xa0) != 0) {
              lVar27 = 0x90;
            }
            uVar13 = FUN_140152450(local_b78,"CHAR_STATUS_PILGRIM",&DAT_1410725c8,lVar27 + lVar12);
            goto LAB_140a9e204;
          }
        }
        else {
          iVar10 = (**(code **)(*param_3 + 0xa0))(param_3);
          if (iVar10 == 7) {
            param_2 = local_res10;
            if ((*(longlong *)(lVar12 + 0x28) != 0) &&
               ((*(byte *)(*(longlong *)(lVar12 + 0x28) + 0xd6c) & 0x40) != 0)) {
              lVar27 = 0x38;
              if (*(longlong *)(lVar12 + 0xa0) != 0) {
                lVar27 = 0x90;
              }
              uVar13 = FUN_140152450(local_b78,"CHAR_STATUS_IN_HIDING",&DAT_1410725c8,
                                     lVar27 + lVar12);
              goto LAB_140a9e204;
            }
          }
          else {
            iVar10 = (**(code **)(*param_3 + 0xa0))(param_3);
            param_2 = local_res10;
            if ((iVar10 == 8) &&
               (cVar9 = FUN_1400ead40(lVar12), param_2 = local_res10, cVar9 != '\0')) {
              lVar27 = 0x38;
              if (*(longlong *)(lVar12 + 0xa0) != 0) {
                lVar27 = 0x90;
              }
              uVar13 = FUN_140152450(local_b78,"CHAR_STATUS_IN_SECLUSION",&DAT_1410725c8,
                                     lVar27 + lVar12);
              goto LAB_140a9e204;
            }
          }
        }
      }
    }
  }
LAB_140aa1a7e:
  (**(code **)(*param_3 + 0x170))(param_3,local_5b0);
  if (local_5a0 != 0) {
    uVar13 = FUN_140152450(local_b78,"SHORTCUT_DESC","SHORTCUT",local_5b0);
    uVar13 = FUN_140d5f2e0(local_b38,&DAT_141066f10,uVar13);
    FUN_1400b06b0(local_a68,uVar13,0,0xffffffffffffffff);
    FUN_1400ae4f0(local_b38);
    FUN_1400ae4f0(local_b78);
  }
  if (local_a48._1_1_ == '\0') {
    if (local_5cc == '\0') {
      plVar14 = *(longlong **)(DAT_1416e3260 + 0x370);
      lVar12 = (**(code **)(*plVar14 + 0xd8))(plVar14);
      fVar1 = *(float *)(lVar12 + 0x1e8);
      piVar15 = (int *)(**(code **)(*(longlong *)plVar14[99] + 0x90))
                                 ((longlong *)plVar14[99],&local_res8);
      local_res8._0_2_ = (short)(int)((float)*piVar15 / fVar1);
      local_res8._0_4_ =
           CONCAT22((short)(int)((float)piVar15[1] / fVar1) + 0x19,(short)local_res8 + 0x19);
      local_5d0 = (undefined4)local_res8;
    }
    else {
      psVar18 = (short *)(**(code **)(*param_3 + 0xc0))(param_3,&local_res8);
      local_res8._0_4_ = CONCAT22(psVar18[1] + local_5d0._2_2_,(short)local_5d0 + *psVar18);
      local_5d0 = (undefined4)local_res8;
      if (*(code **)(*param_1 + 0x100) == (code *)&LAB_140649c30) {
        piVar15 = (int *)param_1[0xafa];
      }
      else {
        piVar15 = (int *)(**(code **)(*param_1 + 0x100))(param_1);
      }
      if ((float)(int)local_5d0._2_2_ <= (float)*piVar15 * DAT_141164c08) {
        local_5d0 = CONCAT22(local_5d0._2_2_ + 0x40,(short)local_5d0);
      }
      else {
        local_a48 = local_a48 & 0xff00;
      }
    }
  }
  if ((local_a78 == 0) && (local_a58 == 0)) {
    if (*(longlong *)(param_3[6] + 0x58) != 0) {
      uVar13 = FUN_140698f70(local_b38,*(undefined8 *)(param_3[6] + 0x58));
      FUN_1400cd750(&local_a88,uVar13);
      FUN_1400ae4f0(local_b38);
    }
    if (*(longlong *)(param_3[6] + 0x60) != 0) {
      uVar13 = FUN_140698f70(local_b38,*(undefined8 *)(param_3[6] + 0x60));
      FUN_1400cd750(local_a68,uVar13);
      FUN_1400ae4f0(local_b38);
    }
  }
  FUN_14014b0a0(param_2,&local_a88);
  FUN_1400ae4f0(local_5b0);
LAB_140aa1cb5:
  FUN_140158640(&local_aa8);
  FUN_14013a6e0(&local_a88);
  return param_2;
}

