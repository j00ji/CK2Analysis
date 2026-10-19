
void FUN_140bb2050(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  int iVar20;
  longlong *plVar21;
  int iVar22;
  longlong *plVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar24;
  int local_res10;
  uint local_res20;
  longlong local_148;
  longlong *local_140;
  longlong local_130;
  int local_f8 [4];
  longlong *local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong lStack_b8;
  longlong local_b0;
  longlong local_a8 [3];
  longlong *local_90;
  uint local_88;
  int local_84;
  undefined8 local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  local_78 = 0xfffffffffffffffe;
  if (*(int *)(param_1 + 0x90) != 0) {
    local_c0 = 0;
    lStack_b8 = 0;
    plVar15 = (longlong *)0x0;
    local_b0 = 0;
    FUN_140bb2f50();
    lVar3 = DAT_1416e3260;
    iVar6 = 0;
    local_res10 = 100000000;
    lVar17 = *(longlong *)(param_1 + 0x80);
LAB_140bb20ba:
    plVar19 = plVar15;
    if (lVar17 != 0) {
      lVar16 = *(longlong *)(lVar17 + 0x18);
      local_88 = *(uint *)(lVar17 + 8);
      local_84 = *(int *)(lVar17 + 0xc);
      lVar12 = DAT_1417e3b58;
      if (0x1268 < local_88) {
        lVar12 = DAT_1417e3b50;
      }
      lVar17 = lVar16;
      if (lVar12 != 0) {
        for (plVar19 = *(longlong **)
                        (*(longlong *)(lVar12 + 8) +
                        ((ulonglong)(local_88 * 0x10000 + local_84) %
                        (ulonglong)*(uint *)(lVar12 + 4)) * 8); plVar19 != (longlong *)0x0;
            plVar19 = (longlong *)plVar19[1]) {
          lVar16 = *plVar19;
          if ((*(int *)(lVar16 + 0x14) == local_84) && (*(uint *)(lVar16 + 0x10) == local_88)) {
            if ((lVar16 != 0) &&
               (plVar19 = (longlong *)(lVar16 + -0x10), local_90 = plVar19,
               plVar19 != (longlong *)0x0)) {
              FUN_140b99c30(plVar19);
              if (((local_148 != 0) && (*(int *)(*(longlong *)(local_148 + 0x10) + 0x40) != 0)) &&
                 ((longlong *)**(longlong **)(*(longlong *)(local_148 + 0x10) + 0x30) == plVar19)) {
                if (local_140 != (longlong *)0x0) {
                  LOCK();
                  plVar23 = local_140 + 1;
                  lVar17 = *plVar23;
                  *(int *)plVar23 = (int)*plVar23 + -1;
                  UNLOCK();
                  if ((int)lVar17 == 1) {
                    (**(code **)*local_140)(local_140);
                    LOCK();
                    piVar8 = (int *)((longlong)local_140 + 0xc);
                    iVar22 = *piVar8;
                    *piVar8 = *piVar8 + -1;
                    UNLOCK();
                    if (iVar22 == 1) {
                      (**(code **)(*local_140 + 8))();
                    }
                  }
                }
                goto LAB_140bb21f3;
              }
              if (local_140 != (longlong *)0x0) {
                LOCK();
                plVar19 = local_140 + 1;
                lVar16 = *plVar19;
                *(int *)plVar19 = (int)*plVar19 + -1;
                UNLOCK();
                if ((int)lVar16 == 1) {
                  (**(code **)*local_140)(local_140);
                  LOCK();
                  piVar8 = (int *)((longlong)local_140 + 0xc);
                  iVar22 = *piVar8;
                  *piVar8 = *piVar8 + -1;
                  UNLOCK();
                  if (iVar22 == 1) {
                    (**(code **)(*local_140 + 8))();
                  }
                }
              }
            }
            break;
          }
        }
      }
      goto LAB_140bb20ba;
    }
LAB_140bb21f3:
    local_res20 = 0;
    local_130 = DAT_1416e2360;
    local_a8[0] = DAT_1416e2360;
    local_a8[1] = DAT_1416e2360;
    local_a8[2] = DAT_1416e2360;
    iVar22 = 0;
    local_f8[0] = 0;
    lVar17 = *(longlong *)(param_1 + 0x80);
    if (lVar17 != 0) {
LAB_140bb2240:
      lVar16 = *(longlong *)(lVar17 + 0x18);
      uVar1 = *(uint *)(lVar17 + 8);
      lVar12 = DAT_1417e3b58;
      if (0x1268 < uVar1) {
        lVar12 = DAT_1417e3b50;
      }
      if (lVar12 != 0) {
        for (plVar23 = *(longlong **)
                        (*(longlong *)(lVar12 + 8) +
                        ((ulonglong)(uVar1 * 0x10000 + *(int *)(lVar17 + 0xc)) %
                        (ulonglong)*(uint *)(lVar12 + 4)) * 8); plVar23 != (longlong *)0x0;
            plVar23 = (longlong *)plVar23[1]) {
          lVar12 = *plVar23;
          if ((*(int *)(lVar12 + 0x14) == *(int *)(lVar17 + 0xc)) &&
             (*(uint *)(lVar12 + 0x10) == uVar1)) {
            if ((lVar12 != 0) &&
               (plVar23 = (longlong *)(lVar12 + -0x10), plVar23 != (longlong *)0x0)) {
              cVar5 = (**(code **)(*plVar23 + 0x70))(plVar23);
              if (cVar5 != '\0') goto LAB_140bb23e4;
              plVar21 = (longlong *)(lVar12 + 0x120);
              lVar17 = 3;
              goto LAB_140bb2300;
            }
            break;
          }
        }
      }
      goto LAB_140bb27d4;
    }
LAB_140bb27ec:
    lVar17 = 0;
    cVar5 = (**(code **)(*plVar19 + 0x70))(plVar19);
    if (cVar5 == '\0') {
      if ((*(byte *)(local_130 + 0x1e9) & 2) != 0) {
        FUN_14023ac60(local_130,plVar19,1);
      }
      iVar22 = 2;
      lVar16 = lVar17;
      do {
        lVar12 = local_a8[lVar16];
        if ((*(byte *)(lVar12 + 0x1e9) & 2) == 0) break;
        if (lVar12 != local_130) {
          if (iVar22 == 2) {
            FUN_14023ac60(lVar12,plVar19,0);
            iVar22 = 1;
          }
          else if (iVar22 == 1) {
            FUN_14023ac60(lVar12,plVar19,2);
            break;
          }
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < 3);
    }
    if (0 < (int)plVar19[0x14]) {
      *(int *)(plVar19 + 0x16) = local_res10;
    }
    cVar5 = (**(code **)(*plVar19 + 0x70))(plVar19);
    if ((cVar5 != '\0') && (0 < iVar6)) {
      lVar16 = (**(code **)(*plVar19 + 0x60))(plVar19);
      *(int *)(lVar16 + 0x248) = *(int *)(lVar16 + 0x248) + iVar6;
      iVar6 = FUN_140b9f380(lVar16);
      iVar6 = (int)(((longlong)(iVar6 * 1000) * (longlong)DAT_1416e26fc) / 1000);
      if (*(int *)(lVar16 + 0x248) < 0) {
        *(undefined4 *)(lVar16 + 0x248) = 0;
      }
      else if (iVar6 < *(int *)(lVar16 + 0x248)) {
        *(int *)(lVar16 + 0x248) = iVar6;
      }
    }
    uVar4 = local_c0;
    *(longlong **)(param_1 + 0x98) = plVar19;
    if (plVar19[0x2e] == 0) {
      uVar1 = *(uint *)(plVar19 + 0x2d);
      lVar16 = DAT_1417e3b58;
      if (0x1268 < uVar1) {
        lVar16 = DAT_1417e3b50;
      }
      lVar12 = lVar17;
      if (lVar16 != 0) {
        for (plVar15 = *(longlong **)
                        (*(longlong *)(lVar16 + 8) +
                        ((ulonglong)(uVar1 * 0x10000 + *(int *)((longlong)plVar19 + 0x16c)) %
                        (ulonglong)*(uint *)(lVar16 + 4)) * 8);
            (lVar12 = lVar17, plVar15 != (longlong *)0x0 &&
            ((lVar12 = *plVar15, *(int *)(lVar12 + 0x14) != *(int *)((longlong)plVar19 + 0x16c) ||
             (*(uint *)(lVar12 + 0x10) != uVar1)))); plVar15 = (longlong *)plVar15[1]) {
        }
      }
      plVar19[0x2c] = lVar12;
      if (lVar12 == 0) {
        lVar12 = DAT_1416e2360;
      }
      plVar19[0x2e] = lVar12;
    }
    lVar17 = plVar19[0x2e];
    iVar6 = (int)((longlong)(lStack_b8 - local_c0) >> 3);
    if (0 < iVar6) {
      lVar16 = 0;
      do {
        lVar12 = *(longlong *)(uVar4 + lVar16 * 8);
        plVar23 = operator_new(0x98);
        puVar10 = operator_new(0x60);
        lVar9 = *(longlong *)(param_1 + 0x98);
        *(undefined4 *)(puVar10 + 1) = 0x18e;
        *puVar10 = &PTR_FUN_141072338;
        puVar10[2] = lVar12;
        *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(lVar12 + 0x10);
        *(undefined4 *)((longlong)puVar10 + 0x1c) = *(undefined4 *)(lVar12 + 0x14);
        *(undefined1 *)(puVar10 + 4) = 0;
        puVar10[5] = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        *puVar10 = &PTR_FUN_141072230;
        puVar10[8] = lVar9;
        *(undefined4 *)(puVar10 + 9) = *(undefined4 *)(lVar9 + 0x20);
        *(undefined4 *)((longlong)puVar10 + 0x4c) = *(undefined4 *)(lVar9 + 0x24);
        puVar10[10] = &PTR_LAB_1410722b0;
        puVar10[0xb] = puVar10;
        FUN_140ba6130(lVar9);
        *(undefined4 *)(plVar23 + 1) = 0x18e;
        *plVar23 = (longlong)&PTR_FUN_141065530;
        plVar15 = plVar23 + 2;
        plVar23[5] = 0xf;
        plVar23[4] = 0;
        plVar19 = plVar15;
        if (0xf < (ulonglong)plVar23[5]) {
          plVar19 = (longlong *)*plVar15;
        }
        *(undefined1 *)plVar19 = 0;
        *(undefined4 *)(plVar23 + 7) = 0x34c6;
        *(undefined4 *)((longlong)plVar23 + 0x3c) = 0x34c6;
        plVar23[10] = 0;
        plVar23[0xb] = 0;
        plVar23[0xc] = 0;
        plVar23[0xd] = 0;
        plVar23[0xe] = 0;
        plVar23[0xf] = 0;
        *(undefined2 *)(plVar23 + 8) = 0xffff;
        FUN_1400b0300(plVar15,&DAT_14106162d,0);
        *(undefined4 *)(plVar23 + 6) = 0;
        *(undefined2 *)((longlong)plVar23 + 0x34) = 0;
        *(undefined2 *)((longlong)plVar23 + 0x42) = 0;
        *(undefined4 *)((longlong)plVar23 + 0x44) = 0;
        *(undefined1 *)(plVar23 + 9) = 0;
        *plVar23 = (longlong)&PTR_FUN_1410723b8;
        plVar23[0x10] = lVar17;
        *(undefined4 *)(plVar23 + 0x11) = *(undefined4 *)(lVar17 + 0x10);
        *(undefined4 *)((longlong)plVar23 + 0x8c) = *(undefined4 *)(lVar17 + 0x14);
        plVar23[0x12] = (longlong)puVar10;
        cVar5 = (**(code **)(*plVar23 + 0x78))(plVar23,0);
        if (((cVar5 == '\0') ||
            (((lVar12 = (**(code **)(**(longlong **)(lVar3 + 0x370) + 0xe0))(),
              *(char *)(lVar12 + 0x5d) == '\0' && (*(char *)(lVar12 + 0x392) == '\0')) &&
             (cVar5 = (**(code **)(*plVar23 + 0x60))(plVar23), cVar5 == '\0')))) ||
           (((*(char *)(lVar12 + 0x5d) == '\0' && (*(char *)(lVar12 + 0x3f0) != '\0')) &&
            (cVar5 = (**(code **)(*plVar23 + 0x90))(plVar23), cVar5 == '\0')))) {
          (**(code **)*plVar23)(plVar23,1);
        }
        else {
          (**(code **)(**(longlong **)(lVar12 + 0x60) + 0x28))
                    (*(longlong **)(lVar12 + 0x60),plVar23);
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar6);
    }
    if (uVar4 != 0) {
      uVar13 = (longlong)(local_b0 - uVar4) >> 3;
      if (0x1fffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_140e3f0ac();
      }
      uVar18 = uVar4;
      if (0xfff < uVar13 * 8) {
        if ((uVar4 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
        uVar18 = *(ulonglong *)(uVar4 - 8);
        if (uVar4 <= uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
        if (uVar4 - uVar18 < 8) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
        if (0x27 < uVar4 - uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_140e3f0ac();
        }
      }
      FUN_140e1c5e4(uVar18);
    }
  }
  return;
LAB_140bb2300:
  do {
    lVar9 = *plVar21;
    if (((*(byte *)(lVar9 + 0x1e9) & 2) != 0) &&
       ((*(longlong *)(lVar9 + 0x28) == 0 ||
        ((*(byte *)(*(longlong *)(lVar9 + 0x28) + 0xd6c) & 2) == 0)))) {
      if (DAT_1417e6c90 < *(int *)(lVar9 + 0xbc)) {
        piVar8 = (int *)FUN_14077c7b0(DAT_1416e3260);
        if ((*piVar8 < *(int *)(lVar9 + 0xb8)) || (*(int *)(lVar9 + 0xbc) <= *piVar8))
        goto LAB_140bb23c2;
      }
      iVar6 = FUN_14023b820(lVar9,1);
      iVar7 = FUN_14023b820(lVar9,0);
      iVar20 = 2;
      piVar8 = local_f8;
      plVar14 = local_a8 + 2;
      do {
        if (((*(byte *)(*plVar14 + 0x1e9) & 2) != 0) && (iVar7 <= *piVar8)) break;
        if (iVar20 < 2) {
          plVar14[1] = *plVar14;
          piVar8[1] = *piVar8;
        }
        *plVar14 = lVar9;
        *piVar8 = iVar7;
        plVar14 = plVar14 + -1;
        piVar8 = piVar8 + -1;
        iVar20 = iVar20 + -1;
      } while (-1 < iVar20);
      if (iVar22 < iVar6) {
        iVar22 = iVar6;
        local_130 = lVar9;
      }
    }
LAB_140bb23c2:
    plVar21 = plVar21 + 1;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
LAB_140bb23e4:
  lVar17 = 0;
  if ((plVar19 == (longlong *)0x0) || (plVar19 == plVar23)) {
    plVar19 = plVar23;
    if (*(int *)(lVar12 + 0x90) < 1) {
      local_res10 = 0;
    }
    else {
      local_res10 = *(int *)(lVar12 + 0xa0);
    }
    goto LAB_140bb27d4;
  }
  if (*(int *)(lVar12 + 0x90) < 1) {
LAB_140bb245c:
    local_res10 = 0;
  }
  else {
    lVar9 = FUN_140822200(DAT_1416e32d8,**(undefined4 **)(lVar12 + 0x80));
    if (0 < (int)plVar19[0x14]) {
      lVar17 = FUN_140822200(DAT_1416e32d8,*(undefined4 *)plVar19[0x12]);
    }
    if (lVar9 != lVar17) goto LAB_140bb245c;
    local_f8[2] = *(int *)(lVar12 + 0xa0);
    if (local_f8[2] < local_res10) {
      local_res10 = local_f8[2];
    }
  }
  if (*(int *)(lVar12 + 0x38) != 0) {
    do {
      puVar10 = (undefined8 *)(lVar12 + 0x28);
      if (plVar23 == (longlong *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      lVar17 = *(longlong *)*puVar10;
      cVar5 = FUN_140b99d70(plVar23);
      if (cVar5 != '\0') {
        puVar10 = (undefined8 *)FUN_140b99ce0(extraout_XMM0_Da,local_68);
        lVar9 = FUN_1403b6690(*puVar10);
        plVar15 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar21 = local_60 + 1;
          lVar2 = *plVar21;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar8 = (int *)((longlong)plVar15 + 0xc);
            iVar6 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15);
            }
          }
        }
        if (lVar9 != 0) {
          FUN_1403a10f0(lVar9,lVar17 + 0x98);
        }
      }
      cVar5 = FUN_140b99cc0(plVar23);
      if (cVar5 != '\0') {
        puVar10 = (undefined8 *)FUN_140b99c30(extraout_XMM0_Da_00,local_58);
        lVar9 = FUN_1403b6690(*puVar10);
        plVar15 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar21 = local_50 + 1;
          lVar2 = *plVar21;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar8 = (int *)((longlong)plVar15 + 0xc);
            iVar6 = *piVar8;
            *piVar8 = *piVar8 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15);
            }
          }
        }
        if (lVar9 != 0) {
          FUN_1403a10f0(lVar9,lVar17 + 0x98);
        }
      }
      FUN_140b987f0(plVar23,lVar17);
      FUN_140b97bb0(plVar19,lVar17,0xffffffff);
    } while (*(int *)(lVar12 + 0x38) != 0);
    plVar15 = (longlong *)(ulonglong)local_res20;
  }
  cVar5 = (**(code **)(*plVar23 + 0x70))(plVar23);
  if (((cVar5 != '\0') &&
      (lVar17 = (**(code **)(*plVar23 + 0x60))(plVar23), *(int *)(lVar17 + 0x240) != 0)) &&
     (cVar5 = (**(code **)(*plVar19 + 0x70))(plVar19), cVar5 != '\0')) {
    lVar17 = (**(code **)(*plVar23 + 0x60))(plVar23);
    plVar21 = *(longlong **)(lVar17 + 0x230);
    while (plVar21 != (longlong *)0x0) {
      plVar14 = (longlong *)*plVar21;
      plVar21 = (longlong *)plVar21[2];
      lVar17 = (**(code **)(*plVar23 + 0x60))(plVar23);
      for (local_e8 = *(longlong **)(lVar17 + 0x230);
          (local_e8 != (longlong *)0x0 && ((longlong *)*local_e8 != plVar14));
          local_e8 = (longlong *)local_e8[2]) {
      }
      local_e0 = local_e8;
      FUN_1400d4c30((undefined8 *)(lVar17 + 0x230),&local_e0);
      lVar9 = (**(code **)(*plVar19 + 0x60))(plVar19);
      lVar17 = *(longlong *)(lVar9 + 0x238);
      local_70 = operator_new(0x20);
      *local_70 = (longlong)plVar14;
      local_70[1] = lVar17;
      local_70[2] = 0;
      *(undefined1 *)(local_70 + 3) = 0;
      *(longlong **)(lVar9 + 0x238) = local_70;
      iVar6 = *(int *)(lVar9 + 0x240);
      *(int *)(lVar9 + 0x240) = iVar6 + 1;
      if (iVar6 == 0) {
        *(longlong **)(lVar9 + 0x230) = local_70;
      }
      else {
        *(longlong **)(lVar17 + 0x10) = local_70;
      }
      uVar11 = (**(code **)(*plVar19 + 0x60))(plVar19);
      lVar17 = (**(code **)(*plVar14 + 0x50))(plVar14);
      *(undefined8 *)(lVar17 + 0x230) = uVar11;
      plVar14 = *(longlong **)(lVar17 + 0x38);
      while (plVar14 != (longlong *)0x0) {
        lVar17 = *plVar14;
        plVar14 = (longlong *)plVar14[2];
        local_f8[3] = *(int *)(lVar17 + 0x40);
        if (500 < local_f8[3]) {
          *(undefined4 *)(lVar17 + 0x40) = 500;
        }
      }
    }
  }
  cVar5 = (**(code **)(*plVar23 + 0x70))(plVar23);
  if (cVar5 != '\0') {
    lVar17 = (**(code **)(*plVar23 + 0x60))(plVar23);
    local_res20 = (int)plVar15 + *(int *)(lVar17 + 0x248);
    plVar15 = (longlong *)(ulonglong)local_res20;
  }
  local_d8 = 0;
  lStack_d0 = 0;
  lVar9 = 0;
  local_c8 = 0;
  FUN_1400cd7d0(&local_d8,lVar12 + 0x198);
  lVar17 = local_d8;
  lVar12 = (longlong)(int)(lStack_d0 - local_d8 >> 3);
  if (0 < lVar12) {
    do {
      plVar21 = *(longlong **)(lVar17 + lVar9 * 8);
      FUN_140ba4ed0(plVar23,plVar21);
      if (plVar19 != plVar21) {
        FUN_140ba4da0(plVar19,plVar21);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar12);
  }
  uVar24 = FUN_140786dc0(lVar3,plVar23,0);
  if (lVar17 != 0) {
    FUN_1400b09e0(uVar24,lVar17,local_c8 - lVar17 >> 3);
  }
LAB_140bb27d4:
  iVar6 = (int)plVar15;
  lVar17 = lVar16;
  if (lVar16 == 0) goto LAB_140bb27ec;
  goto LAB_140bb2240;
}

