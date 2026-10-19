
undefined8 * FUN_140bad820(longlong param_1)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 local_res8;
  longlong local_res10;
  longlong *local_res18;
  longlong local_res20;
  undefined8 *local_90;
  undefined8 uStack_88;
  int local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 local_56;
  
  local_res8 = (undefined8 *)param_1;
  FUN_140bac870();
  lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x28);
  plVar12 = DAT_1416e3148;
  if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0xb0) != 0)) {
    plVar12 = *(longlong **)(*(longlong *)(lVar13 + 0xb0) + 8);
  }
  cVar4 = (**(code **)(*plVar12 + 0x30))();
  if (cVar4 != '\0') {
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x28);
    plVar12 = DAT_1416e3148;
    if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0xb0) != 0)) {
      plVar12 = *(longlong **)(*(longlong *)(lVar13 + 0xb0) + 8);
    }
    cVar4 = (**(code **)(*plVar12 + 0x30))();
    if (cVar4 != '\0') {
      local_res10 = 0;
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x28);
      plVar12 = DAT_1416e3148;
      if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0xb0) != 0)) {
        plVar12 = *(longlong **)(*(longlong *)(lVar13 + 0xb0) + 8);
      }
      local_res18 = DAT_1416e3148;
      if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0xb0) != 0)) {
        local_res18 = *(longlong **)(*(longlong *)(lVar13 + 0xb0) + 8);
      }
      iVar15 = (int)(plVar12[8] - plVar12[7] >> 3);
      if (*(char *)(param_1 + 0xa0) == '\0') {
        lVar17 = 0;
        plVar16 = DAT_1418d6ab0;
        lVar13 = DAT_1418d6ab8;
        if (0 < iVar15) {
          do {
            lVar13 = *(longlong *)(plVar12[7] + lVar17 * 8);
            plVar16 = DAT_1418d6ab0;
            if (((DAT_1418d6ab8 != 0) &&
                (uVar5 = *(uint *)(lVar13 + 0x3e0) & 0xffffff,
                uVar5 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
               (plVar16 = *(longlong **)
                           (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar5 * 0x10),
               plVar16 == (longlong *)0x0)) {
              plVar16 = DAT_1418d6ab0;
            }
            cVar4 = (**(code **)(plVar16[2] + 8))();
            if (cVar4 != '\0') {
              plVar16 = DAT_1418d6ab0;
              if (((DAT_1418d6ab8 != 0) &&
                  (uVar5 = *(uint *)(lVar13 + 0x3e0) & 0xffffff,
                  uVar5 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
                 (plVar16 = *(longlong **)
                             (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar5 * 0x10),
                 plVar16 == (longlong *)0x0)) {
                plVar16 = DAT_1418d6ab0;
              }
              lVar19 = plVar16[7];
              if ((*(byte *)(lVar19 + 0x1e9) & 2) == 0) {
                if (*(code **)(*plVar16 + 0x30) == (code *)&LAB_1403827a0) {
                  if (((*(int *)((longlong)plVar16 + 0x2c) - 3U & 0xfffffffa) != 0) ||
                     (*(int *)((longlong)plVar16 + 0x2c) == 4)) {
LAB_140bade2f:
                    lVar19 = *(longlong *)(plVar16[6] + 0x498);
                    goto LAB_140bade40;
                  }
                }
                else {
                  cVar4 = (**(code **)(*plVar16 + 0x30))(plVar16);
                  if (cVar4 == '\0') goto LAB_140bade2f;
                }
                lVar19 = plVar16[8];
              }
LAB_140bade40:
              if (lVar19 == *(longlong *)(param_1 + 0x88)) {
                plVar12 = DAT_1418d6ab0;
                if (((DAT_1418d6ab8 != 0) &&
                    (uVar5 = *(uint *)(lVar13 + 0x3e0) & 0xffffff,
                    uVar5 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
                   (plVar12 = *(longlong **)
                               (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar5 * 0x10),
                   plVar12 == (longlong *)0x0)) {
                  plVar12 = DAT_1418d6ab0;
                }
                plVar16 = DAT_1418d6ab0;
                lVar13 = DAT_1418d6ab8;
                if ((*(int *)((longlong)plVar12 + 0x2c) == 4) &&
                   (*(char *)(DAT_1416e3260 + 0x34a) == '\0')) {
                  local_res10 = FUN_1401fffd0(*(undefined8 *)(plVar12[6] + 0x498));
                }
                else {
                  local_res10 = plVar12[0xe];
                }
                break;
              }
            }
            lVar17 = lVar17 + 1;
            plVar16 = DAT_1418d6ab0;
            lVar13 = DAT_1418d6ab8;
          } while (lVar17 < iVar15);
        }
        local_res20 = (longlong)(int)(local_res18[0x3a] - local_res18[0x39] >> 3);
        lVar19 = 0;
        lVar17 = local_res10;
        if (0 < local_res20) {
          do {
            if (lVar17 != 0) goto LAB_140bae0c8;
            lVar7 = *(longlong *)(local_res18[0x39] + lVar19 * 8);
            lVar18 = *(longlong *)(lVar7 + 0x28);
            plVar12 = DAT_1416e3148;
            if ((lVar18 != 0) && (*(longlong *)(lVar18 + 0xb0) != 0)) {
              plVar12 = *(longlong **)(*(longlong *)(lVar18 + 0xb0) + 8);
            }
            lVar18 = 0;
            iVar15 = (int)(plVar12[8] - plVar12[7] >> 3);
            if (0 < iVar15) {
              do {
                lVar17 = *(longlong *)(plVar12[7] + lVar18 * 8);
                plVar10 = plVar16;
                if (((lVar13 != 0) &&
                    (uVar5 = *(uint *)(lVar17 + 0x3e0) & 0xffffff, uVar5 < *(uint *)(lVar13 + 0x28))
                    ) && (plVar10 = *(longlong **)
                                     (*(longlong *)(lVar13 + 0x20) + 8 + (ulonglong)uVar5 * 0x10),
                         plVar10 == (longlong *)0x0)) {
                  plVar10 = plVar16;
                }
                cVar4 = (**(code **)(plVar10[2] + 8))();
                if (cVar4 != '\0') {
                  plVar16 = DAT_1418d6ab0;
                  if (((DAT_1418d6ab8 != 0) &&
                      (uVar5 = *(uint *)(lVar17 + 0x3e0) & 0xffffff,
                      uVar5 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
                     (plVar16 = *(longlong **)
                                 (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar5 * 0x10)
                     , plVar16 == (longlong *)0x0)) {
                    plVar16 = DAT_1418d6ab0;
                  }
                  lVar13 = plVar16[7];
                  if ((*(byte *)(lVar13 + 0x1e9) & 2) == 0) {
                    if (*(code **)(*plVar16 + 0x30) == (code *)&LAB_1403827a0) {
                      if (((*(int *)((longlong)plVar16 + 0x2c) - 3U & 0xfffffffa) != 0) ||
                         (*(int *)((longlong)plVar16 + 0x2c) == 4)) {
LAB_140bae019:
                        lVar13 = *(longlong *)(plVar16[6] + 0x498);
                        goto LAB_140bae02a;
                      }
                    }
                    else {
                      cVar4 = (**(code **)(*plVar16 + 0x30))(plVar16);
                      if (cVar4 == '\0') goto LAB_140bae019;
                    }
                    lVar13 = plVar16[8];
                  }
LAB_140bae02a:
                  if (lVar13 == lVar7) {
                    plVar12 = DAT_1418d6ab0;
                    if (((DAT_1418d6ab8 != 0) &&
                        (uVar5 = *(uint *)(lVar17 + 0x3e0) & 0xffffff,
                        uVar5 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
                       (plVar12 = *(longlong **)
                                   (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                                   (ulonglong)uVar5 * 0x10), plVar12 == (longlong *)0x0)) {
                      plVar12 = DAT_1418d6ab0;
                    }
                    plVar16 = DAT_1418d6ab0;
                    lVar13 = DAT_1418d6ab8;
                    if ((*(int *)((longlong)plVar12 + 0x2c) == 4) &&
                       (*(char *)(DAT_1416e3260 + 0x34a) == '\0')) {
                      local_res10 = FUN_1401fffd0(*(undefined8 *)(plVar12[6] + 0x498));
                      lVar17 = local_res10;
                    }
                    else {
                      local_res10 = plVar12[0xe];
                      lVar17 = local_res10;
                    }
                    break;
                  }
                }
                lVar18 = lVar18 + 1;
                plVar16 = DAT_1418d6ab0;
                lVar13 = DAT_1418d6ab8;
                lVar17 = local_res10;
              } while (lVar18 < iVar15);
            }
            lVar19 = lVar19 + 1;
          } while (lVar19 < local_res20);
        }
      }
      else {
        lVar17 = 0;
        plVar16 = DAT_1418d6ab0;
        lVar13 = DAT_1418d6ab8;
        if (0 < iVar15) {
          do {
            lVar19 = *(longlong *)(plVar12[7] + lVar17 * 8);
            plVar10 = plVar16;
            if (((lVar13 != 0) &&
                (uVar5 = *(uint *)(lVar19 + 0x3e0) & 0xffffff, uVar5 < *(uint *)(lVar13 + 0x28))) &&
               (plVar10 = *(longlong **)(*(longlong *)(lVar13 + 0x20) + 8 + (ulonglong)uVar5 * 0x10)
               , plVar10 == (longlong *)0x0)) {
              plVar10 = plVar16;
            }
            cVar4 = (**(code **)(plVar10[2] + 8))();
            plVar16 = DAT_1418d6ab0;
            lVar13 = DAT_1418d6ab8;
            if (cVar4 != '\0') {
              if (((DAT_1418d6ab8 != 0) &&
                  (uVar5 = *(uint *)(lVar19 + 0x3e0) & 0xffffff,
                  uVar5 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
                 (plVar16 = *(longlong **)
                             (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar5 * 0x10),
                 plVar16 == (longlong *)0x0)) {
                plVar16 = DAT_1418d6ab0;
              }
              lVar7 = plVar16[7];
              if ((*(byte *)(lVar7 + 0x1e9) & 2) == 0) {
                if (*(code **)(*plVar16 + 0x30) == (code *)&LAB_1403827a0) {
                  if (((*(int *)((longlong)plVar16 + 0x2c) - 3U & 0xfffffffa) != 0) ||
                     (*(int *)((longlong)plVar16 + 0x2c) == 4)) {
LAB_140bada2f:
                    lVar7 = *(longlong *)(plVar16[6] + 0x498);
                    goto LAB_140bada40;
                  }
                }
                else {
                  cVar4 = (**(code **)(*plVar16 + 0x30))(plVar16);
                  if (cVar4 == '\0') goto LAB_140bada2f;
                }
                lVar7 = plVar16[8];
              }
LAB_140bada40:
              plVar16 = DAT_1418d6ab0;
              lVar13 = DAT_1418d6ab8;
              if (lVar7 == *(longlong *)(param_1 + 0x88)) {
                plVar10 = DAT_1418d6ab0;
                if (((DAT_1418d6ab8 != 0) &&
                    (uVar5 = *(uint *)(lVar19 + 0x3e0) & 0xffffff,
                    uVar5 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
                   (plVar10 = *(longlong **)
                               (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar5 * 0x10),
                   plVar10 == (longlong *)0x0)) {
                  plVar10 = DAT_1418d6ab0;
                }
                if ((*(int *)((longlong)plVar10 + 0x2c) == 4) &&
                   (*(char *)(DAT_1416e3260 + 0x34a) == '\0')) {
                  lVar7 = FUN_1401fffd0(*(undefined8 *)(plVar10[6] + 0x498));
                }
                else {
                  lVar7 = plVar10[0xe];
                }
                if (*(char *)(*(longlong *)(lVar7 + 0xf0) + 0x68) != '\0') {
                  uVar8 = FUN_1400cd630(lVar19 + 0x3e0);
                  local_res10 = FUN_1409f4f20(uVar8);
                  break;
                }
              }
            }
            lVar17 = lVar17 + 1;
          } while (lVar17 < iVar15);
        }
        local_res20 = (longlong)(int)(local_res18[0x3a] - local_res18[0x39] >> 3);
        lVar19 = 0;
        lVar17 = local_res10;
        if (0 < local_res20) {
          do {
            if (lVar17 != 0) goto LAB_140bae0c8;
            lVar7 = *(longlong *)(local_res18[0x39] + lVar19 * 8);
            lVar18 = *(longlong *)(lVar7 + 0x28);
            plVar12 = DAT_1416e3148;
            if ((lVar18 != 0) && (*(longlong *)(lVar18 + 0xb0) != 0)) {
              plVar12 = *(longlong **)(*(longlong *)(lVar18 + 0xb0) + 8);
            }
            lVar18 = 0;
            iVar15 = (int)(plVar12[8] - plVar12[7] >> 3);
            if (0 < iVar15) {
              do {
                lVar17 = *(longlong *)(plVar12[7] + lVar18 * 8);
                plVar10 = plVar16;
                if (((lVar13 != 0) &&
                    (uVar5 = *(uint *)(lVar17 + 0x3e0) & 0xffffff, uVar5 < *(uint *)(lVar13 + 0x28))
                    ) && (plVar10 = *(longlong **)
                                     (*(longlong *)(lVar13 + 0x20) + 8 + (ulonglong)uVar5 * 0x10),
                         plVar10 == (longlong *)0x0)) {
                  plVar10 = plVar16;
                }
                cVar4 = (**(code **)(plVar10[2] + 8))();
                plVar16 = DAT_1418d6ab0;
                lVar13 = DAT_1418d6ab8;
                if (cVar4 != '\0') {
                  if (((DAT_1418d6ab8 != 0) &&
                      (uVar5 = *(uint *)(lVar17 + 0x3e0) & 0xffffff,
                      uVar5 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
                     (plVar16 = *(longlong **)
                                 (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar5 * 0x10)
                     , plVar16 == (longlong *)0x0)) {
                    plVar16 = DAT_1418d6ab0;
                  }
                  lVar9 = plVar16[7];
                  if ((*(byte *)(lVar9 + 0x1e9) & 2) == 0) {
                    if (*(code **)(*plVar16 + 0x30) == (code *)&LAB_1403827a0) {
                      if (((*(int *)((longlong)plVar16 + 0x2c) - 3U & 0xfffffffa) != 0) ||
                         (*(int *)((longlong)plVar16 + 0x2c) == 4)) {
LAB_140badc39:
                        lVar9 = *(longlong *)(plVar16[6] + 0x498);
                        goto LAB_140badc4a;
                      }
                    }
                    else {
                      cVar4 = (**(code **)(*plVar16 + 0x30))(plVar16);
                      if (cVar4 == '\0') goto LAB_140badc39;
                    }
                    lVar9 = plVar16[8];
                  }
LAB_140badc4a:
                  plVar16 = DAT_1418d6ab0;
                  lVar13 = DAT_1418d6ab8;
                  if (lVar9 == lVar7) {
                    plVar10 = DAT_1418d6ab0;
                    if (((DAT_1418d6ab8 != 0) &&
                        (uVar5 = *(uint *)(lVar17 + 0x3e0) & 0xffffff,
                        uVar5 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
                       (plVar10 = *(longlong **)
                                   (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                                   (ulonglong)uVar5 * 0x10), plVar10 == (longlong *)0x0)) {
                      plVar10 = DAT_1418d6ab0;
                    }
                    lVar9 = DAT_1416e3260;
                    if ((*(int *)((longlong)plVar10 + 0x2c) == 4) &&
                       (*(char *)(DAT_1416e3260 + 0x34a) == '\0')) {
                      lVar11 = FUN_1401fffd0(*(undefined8 *)(plVar10[6] + 0x498));
                    }
                    else {
                      lVar11 = plVar10[0xe];
                    }
                    if (*(char *)(*(longlong *)(lVar11 + 0xf0) + 0x68) != '\0') {
                      plVar12 = plVar16;
                      if (((lVar13 != 0) &&
                          (uVar5 = *(uint *)(lVar17 + 0x3e0) & 0xffffff,
                          uVar5 < *(uint *)(lVar13 + 0x28))) &&
                         (plVar12 = *(longlong **)
                                     (*(longlong *)(lVar13 + 0x20) + 8 + (ulonglong)uVar5 * 0x10),
                         plVar12 == (longlong *)0x0)) {
                        plVar12 = plVar16;
                      }
                      if ((*(int *)((longlong)plVar12 + 0x2c) == 4) &&
                         (*(char *)(lVar9 + 0x34a) == '\0')) {
                        local_res10 = FUN_1401fffd0(*(undefined8 *)(plVar12[6] + 0x498));
                        lVar17 = local_res10;
                      }
                      else {
                        local_res10 = plVar12[0xe];
                        lVar17 = local_res10;
                      }
                      break;
                    }
                  }
                }
                lVar18 = lVar18 + 1;
                lVar17 = local_res10;
              } while (lVar18 < iVar15);
            }
            lVar19 = lVar19 + 1;
          } while (lVar19 < local_res20);
        }
      }
      if (lVar17 != 0) {
LAB_140bae0c8:
        lVar13 = (longlong)local_res8;
        if ((*(char *)((longlong)local_res8 + 0xa1) == '\0') ||
           (cVar4 = FUN_140bba180(lVar17 + 0xcc0,*(undefined8 *)((longlong)local_res8 + 0x80)),
           cVar4 == '\0')) {
          if (*(char *)(lVar13 + 0xa0) == '\0') {
            local_90 = (undefined8 *)0x0;
            uStack_88 = 0;
            local_80 = 0;
            local_7c = 0;
            local_res8 = (undefined8 *)CONCAT44(local_res8._4_4_,*(undefined4 *)(lVar13 + 0xa4));
            lVar17 = *(longlong *)(lVar13 + 0x88);
            lVar19 = *(longlong *)(lVar17 + 0x28);
            plVar12 = DAT_1416e3148;
            if ((lVar19 != 0) && (*(longlong *)(lVar19 + 0xb0) != 0)) {
              if ((lVar19 == 0) || (*(longlong *)(lVar19 + 0xb0) == 0)) {
                FUN_1401b3840(lVar17 + 0x20);
              }
              plVar12 = *(longlong **)(*(longlong *)(*(longlong *)(lVar17 + 0x28) + 0xb0) + 8);
            }
            FUN_14049d2b0(plVar12,&local_90,&local_res8);
            if (local_80 != 0) {
              puVar14 = operator_new(0x240);
              local_res8 = puVar14;
              FUN_140b95100(puVar14);
              *puVar14 = &PTR_FUN_141075b70;
              plVar12 = puVar14 + 2;
              *plVar12 = (longlong)&PTR_LAB_141075df8;
              puVar14[6] = &PTR_FUN_141075b68;
              puVar14[0x45] = &PTR_LAB_141075b10;
              puVar14[0x46] = 0;
              puVar14[0x47] = 0;
              if ((undefined **)*plVar12 == &PTR_LAB_141075df8) {
                iVar15 = *(int *)(DAT_1416e3260 + 0x42c) + 1;
                *(int *)(DAT_1416e3260 + 0x42c) = iVar15;
                local_res8 = (undefined8 *)CONCAT44(iVar15,0x3e);
                FUN_140c425f0(plVar12,&local_res8,0);
              }
              else {
                (*(code *)((undefined **)*plVar12)[7])();
              }
              local_70 = *(undefined8 *)(lVar13 + 0x80);
              local_78 = *(undefined8 *)(lVar13 + 0x88);
              local_60 = 0;
              local_58 = 0;
              local_56 = 0;
              local_68 = *(undefined8 *)(DAT_1416e3260 + 0x3f0);
              iVar15 = FUN_140411710(&local_78);
              puVar3 = local_90;
              plVar12 = DAT_1416e3148;
              puVar2 = local_90;
              while (DAT_1416e3148 = plVar12, puVar2 != (undefined8 *)0x0) {
                uVar8 = *puVar2;
                puVar2 = (undefined8 *)puVar2[2];
                if (DAT_1416e2b10 < iVar15) {
                  lVar17 = *(longlong *)(lVar13 + 0x88);
                  cVar4 = FUN_14023ce50(lVar17);
                  if ((((cVar4 == '\0') &&
                       ((*(longlong *)(lVar17 + 0x28) == 0 ||
                        (cVar4 = (**(code **)(**(longlong **)(*(longlong *)(lVar17 + 0x28) + 0xcf0)
                                             + 0x48))(), cVar4 == '\0')))) &&
                      ((*(longlong *)(lVar17 + 0x28) == 0 ||
                       (*(longlong *)(*(longlong *)(lVar17 + 0x28) + 0xcf8) == 0)))) &&
                     ((DAT_1416e2a88 < iVar15 &&
                      (cVar4 = FUN_14023cb20(*(undefined8 *)(lVar13 + 0x88),uVar8,0), cVar4 != '\0')
                      ))) {
                    lVar17 = *(longlong *)(lVar13 + 0x88);
                  }
                  else {
                    if (DAT_1416e3ac8 == 0) {
                      local_res8 = operator_new(0x1e8);
                      DAT_1416e3ac8 = FUN_140a82e10(local_res8);
                    }
                    lVar17 = *(longlong *)(*(longlong *)(lVar13 + 0x88) + 0x28);
                    plVar12 = DAT_1416e3148;
                    if ((lVar17 != 0) && (*(longlong *)(lVar17 + 0xb0) != 0)) {
                      plVar12 = *(longlong **)(*(longlong *)(lVar17 + 0xb0) + 8);
                    }
                    lVar19 = 0;
                    iVar6 = (int)(plVar12[0x11] - plVar12[0x10] >> 3);
                    lVar17 = DAT_1416e2360;
                    if (0 < iVar6) {
                      plVar12 = (longlong *)plVar12[0x10];
                      do {
                        if (*(longlong *)*plVar12 == *(longlong *)(DAT_1416e3ac8 + 0x140)) {
                          lVar17 = ((longlong *)*plVar12)[1];
                          break;
                        }
                        lVar19 = lVar19 + 1;
                        plVar12 = plVar12 + 1;
                      } while (lVar19 < iVar6);
                    }
                    if ((((*(byte *)(lVar17 + 0x1e9) & 2) == 0) ||
                        ((*(longlong *)(lVar17 + 0x28) != 0 &&
                         (cVar4 = (**(code **)(**(longlong **)(*(longlong *)(lVar17 + 0x28) + 0xcf0)
                                              + 0x48))(), cVar4 != '\0')))) ||
                       (((*(longlong *)(lVar17 + 0x28) != 0 &&
                         (*(longlong *)(*(longlong *)(lVar17 + 0x28) + 0xcf8) != 0)) ||
                        ((cVar4 = FUN_14023cef0(lVar17), cVar4 != '\0' ||
                         (cVar4 = FUN_14023c840(lVar17), cVar4 == '\0')))))) goto LAB_140bae53c;
                  }
                  FUN_14023aa20(lVar17,uVar8);
                }
LAB_140bae53c:
                FUN_140b97bb0(puVar14,uVar8);
                plVar12 = DAT_1416e3148;
              }
              lVar17 = *(longlong *)(lVar13 + 0x80);
              lVar19 = *(longlong *)(lVar17 + 0x28);
              if ((lVar19 != 0) && (*(longlong *)(lVar19 + 0xb0) != 0)) {
                if ((lVar19 == 0) || (*(longlong *)(lVar19 + 0xb0) == 0)) {
                  FUN_1401b3840(lVar17 + 0x20);
                }
                plVar12 = *(longlong **)(*(longlong *)(*(longlong *)(lVar17 + 0x28) + 0xb0) + 8);
              }
              FUN_1404942d0(plVar12,puVar14);
              while (puVar3 != (undefined8 *)0x0) {
                puVar2 = (undefined8 *)puVar3[2];
                thunk_FUN_140e1c5e4(puVar3,0x20);
                puVar3 = puVar2;
              }
              goto LAB_140bae5c9;
            }
            local_80 = 0;
            puVar14 = local_90;
            while (puVar14 != (undefined8 *)0x0) {
              puVar2 = (undefined8 *)puVar14[2];
              thunk_FUN_140e1c5e4(puVar14,0x20);
              puVar14 = puVar2;
            }
          }
          else {
            local_res8 = (undefined8 *)CONCAT44(local_res8._4_4_,*(undefined4 *)(lVar13 + 0xa4));
            lVar17 = *(longlong *)(lVar13 + 0x88);
            lVar19 = *(longlong *)(lVar17 + 0x28);
            plVar12 = DAT_1416e3148;
            if ((lVar19 != 0) && (*(longlong *)(lVar19 + 0xb0) != 0)) {
              if ((lVar19 == 0) || (*(longlong *)(lVar19 + 0xb0) == 0)) {
                FUN_1401b3840(lVar17 + 0x20);
              }
              plVar12 = *(longlong **)(*(longlong *)(*(longlong *)(lVar17 + 0x28) + 0xb0) + 8);
            }
            lVar17 = FUN_14049d840(plVar12,&local_res8);
            if (lVar17 != 0) {
              local_res8 = operator_new(0x250);
              puVar14 = (undefined8 *)FUN_140ba7310(local_res8);
              ppuVar1 = (undefined **)puVar14[2];
              if (ppuVar1 == &PTR_LAB_141143228) {
                iVar15 = *(int *)(DAT_1416e3260 + 0x42c) + 1;
                *(int *)(DAT_1416e3260 + 0x42c) = iVar15;
                local_res8 = (undefined8 *)CONCAT44(iVar15,0x3e);
                FUN_140c425f0(puVar14 + 2,&local_res8,0);
              }
              else {
                (*(code *)ppuVar1[7])();
              }
              lVar19 = *(longlong *)(lVar13 + 0x80);
              lVar7 = *(longlong *)(lVar19 + 0x28);
              plVar12 = DAT_1416e3148;
              if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0xb0) != 0)) {
                if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0xb0) == 0)) {
                  FUN_1401b3840(lVar19 + 0x20);
                }
                plVar12 = *(longlong **)(*(longlong *)(*(longlong *)(lVar19 + 0x28) + 0xb0) + 8);
              }
              FUN_1404942d0(plVar12,puVar14);
              FUN_140b97bb0(puVar14,lVar17,0xffffffff);
LAB_140bae5c9:
              lVar17 = local_res10;
              if (*(int *)(lVar13 + 0xa8) != -1) {
                lVar17 = *(longlong *)
                          (*(longlong *)(DAT_1416e3260 + 0x278) +
                          (ulonglong)*(ushort *)(lVar13 + 0xa8) * 8);
              }
              FUN_140b98e30(puVar14,lVar17);
              (**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0x3b0))
                        (*(longlong **)(DAT_1416e3260 + 0x370),puVar14[0x10]);
              FUN_1403bc0c0(DAT_1416e3260 + 0x230,puVar14,puVar14[0x10]);
              if (*(longlong *)(lVar13 + 0x80) != *(longlong *)(DAT_1416e3260 + 0x3f0)) {
                return puVar14;
              }
              (**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0x218))();
              return puVar14;
            }
          }
        }
      }
    }
  }
  return (undefined8 *)0x0;
}

