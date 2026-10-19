
void FUN_140b97bb0(longlong *param_1,longlong param_2,int param_3)

{
  ushort uVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  ulonglong *puVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  void *pvVar18;
  ulonglong uVar19;
  int iVar20;
  undefined1 uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong *local_res8;
  longlong local_res10;
  int local_res18;
  ulonglong local_res20;
  uint local_f8 [2];
  ulonglong local_f0;
  int local_e8 [2];
  void *local_e0;
  void *local_d8;
  int local_d0 [4];
  longlong local_c0;
  uint local_b8 [4];
  undefined8 local_a8;
  undefined **local_a0 [12];
  ulonglong uVar12;
  
  local_a8 = 0xfffffffffffffffe;
  plVar5 = (longlong *)param_1[7];
  do {
    if (plVar5 == (longlong *)0x0) {
LAB_140b97c09:
      lVar13 = param_1[0x26];
      lVar4 = DAT_1416e3b00;
      local_res8 = param_1;
      local_res10 = param_2;
      local_res18 = param_3;
      if (*(longlong *)(lVar13 + 0x28) == 0) {
        iVar20 = (int)(*(longlong *)(lVar13 + 0x158) - *(longlong *)(lVar13 + 0x150) >> 1);
        lVar13 = 0;
        if (0 < iVar20) {
          iVar3 = FUN_14017f040(1);
          local_res20 = (longlong)iVar3 * 4 + 0x28;
          lVar4 = DAT_1416e3b00;
          do {
            if (lVar4 == 0) {
              local_e0 = operator_new(600);
              lVar4 = FUN_140aacc50(local_e0);
              DAT_1416e3b00 = lVar4;
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < iVar20);
        }
      }
      lVar13 = param_1[0x27];
      if (*(longlong *)(lVar13 + 0x28) == 0) {
        iVar20 = (int)(*(longlong *)(lVar13 + 0x158) - *(longlong *)(lVar13 + 0x150) >> 1);
        lVar13 = 0;
        if (0 < iVar20) {
          iVar3 = FUN_14017f040(1);
          local_res20 = (longlong)iVar3 * 4 + 0x28;
          do {
            if (lVar4 == 0) {
              local_e0 = operator_new(600);
              lVar4 = FUN_140aacc50(local_e0);
              DAT_1416e3b00 = lVar4;
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < iVar20);
        }
      }
      lVar13 = param_1[0x28];
      if (*(longlong *)(lVar13 + 0x28) == 0) {
        iVar20 = (int)(*(longlong *)(lVar13 + 0x158) - *(longlong *)(lVar13 + 0x150) >> 1);
        lVar13 = 0;
        if (0 < iVar20) {
          iVar3 = FUN_14017f040(1);
          local_res20 = (longlong)iVar3 * 4 + 0x28;
          do {
            if (lVar4 == 0) {
              local_e0 = operator_new(600);
              lVar4 = FUN_140aacc50(local_e0);
              DAT_1416e3b00 = lVar4;
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < iVar20);
        }
      }
      lVar13 = FUN_140ba4c30(param_1,local_a0,0);
      local_d0[0] = *(int *)(lVar13 + 0x10) + *(int *)(lVar13 + 0x14) + *(int *)(lVar13 + 0x18) +
                    *(int *)(lVar13 + 0x1c) + *(int *)(lVar13 + 0x20) + *(int *)(lVar13 + 0x24) +
                    *(int *)(lVar13 + 0x28) + *(int *)(lVar13 + 0x2c);
      lVar13 = FUN_140ba4c30(param_1,local_a0,1);
      local_f8[0] = *(int *)(lVar13 + 0x10) + *(int *)(lVar13 + 0x14) + *(int *)(lVar13 + 0x18) +
                    *(int *)(lVar13 + 0x1c) + *(int *)(lVar13 + 0x20) + *(int *)(lVar13 + 0x24) +
                    *(int *)(lVar13 + 0x28) + *(int *)(lVar13 + 0x2c);
      local_d0[1] = local_f8[0];
      lVar13 = FUN_140ba4c30(param_1,local_a0,2);
      local_d0[2] = *(int *)(lVar13 + 0x10) + *(int *)(lVar13 + 0x14) + *(int *)(lVar13 + 0x18) +
                    *(int *)(lVar13 + 0x1c) + *(int *)(lVar13 + 0x20) + *(int *)(lVar13 + 0x24) +
                    *(int *)(lVar13 + 0x28) + *(int *)(lVar13 + 0x2c);
      local_a0[0] = &PTR_FUN_141065928;
      lVar13 = *(longlong *)(local_res10 + 0xf0);
      iVar3 = (int)*(char *)(lVar13 + 0x1e2);
      iVar20 = 0;
      lVar14 = *(longlong *)(lVar13 + 0x28);
      if (lVar14 == 0) {
        iVar7 = (int)(*(longlong *)(lVar13 + 0x158) - *(longlong *)(lVar13 + 0x150) >> 1);
        uVar22 = (ulonglong)iVar7;
        lVar14 = 0;
        local_res20 = uVar22;
        if (0 < iVar7) {
          iVar7 = FUN_14017efe0(1);
          iVar20 = FUN_14017f040(1);
          lVar17 = (longlong)iVar20 * 4 + 0x28;
          local_c0 = lVar17;
          iVar20 = 0;
          do {
            lVar15 = *(longlong *)(lVar13 + 0x150);
            if (lVar4 == 0) {
              local_e0 = operator_new(600);
              lVar4 = FUN_140aacc50(local_e0);
              uVar22 = local_res20;
              lVar17 = local_c0;
              DAT_1416e3b00 = lVar4;
            }
            uVar1 = *(ushort *)(lVar15 + lVar14 * 2);
            lVar15 = DAT_1416e3b08;
            if ((int)(uint)uVar1 <
                (int)(*(longlong *)(lVar4 + 0x18) - *(longlong *)(lVar4 + 0x10) >> 3)) {
              lVar15 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)uVar1 * 8);
            }
            iVar3 = iVar3 + *(int *)(lVar15 + (longlong)iVar7 * 4 + 0x28) / 1000;
            iVar20 = iVar20 + *(int *)(lVar17 + lVar15);
            lVar14 = lVar14 + 1;
            param_1 = local_res8;
          } while (lVar14 < (longlong)uVar22);
        }
      }
      else {
        iVar3 = iVar3 + *(int *)(lVar14 + 0x790) / 1000;
        iVar20 = *(int *)(lVar14 + 0x894);
      }
      local_e8[0] = 0;
      puVar9 = &local_res20;
      if (-1 < iVar20) {
        puVar9 = (ulonglong *)local_e8;
      }
      iVar3 = (int)*puVar9 / 1000 + iVar3;
      iVar20 = 0;
      uVar22 = 0;
      iVar7 = iVar20;
      if (-1 < iVar3) {
        iVar7 = iVar3;
      }
      local_c0 = CONCAT44(local_c0._4_4_,iVar7);
      iVar3 = *(int *)(local_res10 + 0xa8) + *(int *)(local_res10 + 0xac) +
              *(int *)(local_res10 + 0xb0) + *(int *)(local_res10 + 0xb4) +
              *(int *)(local_res10 + 0xb8) + *(int *)(local_res10 + 0xbc) +
              *(int *)(local_res10 + 0xc0) + *(int *)(local_res10 + 0xc4);
      local_e8[0] = 0;
      local_res20 = local_res20 & 0xffffffff00000000;
      if (local_f8[0] == 0) {
        uVar21 = 1;
      }
      else {
        lVar13 = param_1[0x26];
        uVar16 = (uint)*(char *)(lVar13 + 0x1e2);
        uVar12 = (ulonglong)uVar16;
        lVar14 = *(longlong *)(lVar13 + 0x28);
        if (lVar14 == 0) {
          iVar7 = (int)(*(longlong *)(lVar13 + 0x158) - *(longlong *)(lVar13 + 0x150) >> 1);
          uVar19 = (ulonglong)iVar7;
          local_f0 = uVar19;
          if (0 < iVar7) {
            local_f8[0] = uVar16;
            iVar7 = FUN_14017efe0(1);
            iVar8 = FUN_14017f040(1);
            pvVar18 = (void *)((longlong)iVar8 * 4 + 0x28);
            local_d8 = pvVar18;
            do {
              lVar14 = *(longlong *)(lVar13 + 0x150);
              uVar16 = (uint)uVar12;
              if (lVar4 == 0) {
                local_e0 = operator_new(600);
                lVar4 = FUN_140aacc50(local_e0);
                uVar19 = local_f0;
                pvVar18 = local_d8;
                uVar16 = local_f8[0];
                DAT_1416e3b00 = lVar4;
              }
              uVar1 = *(ushort *)(lVar14 + uVar22 * 2);
              lVar14 = DAT_1416e3b08;
              if ((int)(uint)uVar1 <
                  (int)(*(longlong *)(lVar4 + 0x18) - *(longlong *)(lVar4 + 0x10) >> 3)) {
                lVar14 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)uVar1 * 8);
              }
              uVar16 = uVar16 + *(int *)(lVar14 + (longlong)iVar7 * 4 + 0x28) / 1000;
              uVar12 = (ulonglong)uVar16;
              iVar20 = iVar20 + *(int *)(lVar14 + (longlong)pvVar18);
              uVar22 = uVar22 + 1;
              local_f8[0] = uVar16;
            } while ((longlong)uVar22 < (longlong)uVar19);
            uVar22 = local_res20 & 0xffffffff;
          }
        }
        else {
          uVar16 = uVar16 + *(int *)(lVar14 + 0x790) / 1000;
          iVar20 = *(int *)(lVar14 + 0x894);
        }
        uVar12 = 0;
        uVar10 = 0;
        local_f0 = local_f0 & 0xffffffff00000000;
        local_f8[0] = iVar20;
        puVar9 = (ulonglong *)local_f8;
        if (-1 < iVar20) {
          puVar9 = &local_f0;
        }
        uVar16 = (int)(uint)*puVar9 / 1000 + uVar16;
        local_b8[0] = uVar10;
        if (-1 < (int)uVar16) {
          local_b8[0] = uVar16;
        }
        local_d8 = (void *)local_res8[0x27];
        uVar16 = (uint)*(char *)((longlong)local_d8 + 0x1e2);
        uVar19 = (ulonglong)uVar16;
        lVar13 = *(longlong *)((longlong)local_d8 + 0x28);
        if (lVar13 == 0) {
          iVar20 = (int)(*(longlong *)((longlong)local_d8 + 0x158) -
                         *(longlong *)((longlong)local_d8 + 0x150) >> 1);
          uVar23 = (ulonglong)iVar20;
          local_f0 = uVar23;
          if (0 < iVar20) {
            local_f8[0] = uVar16;
            iVar20 = FUN_14017efe0(1);
            iVar7 = FUN_14017f040(1);
            pvVar2 = local_d8;
            pvVar18 = (void *)((longlong)iVar7 * 4 + 0x28);
            local_e0 = pvVar18;
            uVar22 = uVar12;
            do {
              lVar13 = *(longlong *)((longlong)pvVar2 + 0x150);
              uVar16 = (uint)uVar19;
              if (lVar4 == 0) {
                local_d8 = operator_new(600);
                lVar4 = FUN_140aacc50(local_d8);
                uVar23 = local_f0;
                pvVar18 = local_e0;
                uVar16 = local_f8[0];
                DAT_1416e3b00 = lVar4;
              }
              uVar1 = *(ushort *)(lVar13 + uVar22 * 2);
              lVar13 = DAT_1416e3b08;
              if ((int)(uint)uVar1 <
                  (int)(*(longlong *)(lVar4 + 0x18) - *(longlong *)(lVar4 + 0x10) >> 3)) {
                lVar13 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)uVar1 * 8);
              }
              uVar16 = uVar16 + *(int *)((longlong)iVar20 * 4 + 0x28 + lVar13) / 1000;
              uVar19 = (ulonglong)uVar16;
              uVar10 = (int)uVar12 + *(int *)((longlong)pvVar18 + lVar13);
              uVar12 = (ulonglong)uVar10;
              uVar22 = uVar22 + 1;
              local_f8[0] = uVar16;
            } while ((longlong)uVar22 < (longlong)uVar23);
            uVar22 = local_res20 & 0xffffffff;
          }
        }
        else {
          uVar16 = uVar16 + *(int *)(lVar13 + 0x790) / 1000;
          uVar10 = *(uint *)(lVar13 + 0x894);
        }
        uVar12 = 0;
        uVar11 = 0;
        local_f8[0] = 0;
        local_f0 = CONCAT44(local_f0._4_4_,uVar10);
        puVar9 = &local_f0;
        if (-1 < (int)uVar10) {
          puVar9 = (ulonglong *)local_f8;
        }
        uVar16 = (int)*puVar9 / 1000 + uVar16;
        local_b8[1] = uVar11;
        if (-1 < (int)uVar16) {
          local_b8[1] = uVar16;
        }
        local_e0 = (void *)local_res8[0x28];
        uVar16 = (uint)*(char *)((longlong)local_e0 + 0x1e2);
        uVar19 = (ulonglong)uVar16;
        local_f8[0] = uVar16;
        lVar13 = *(longlong *)((longlong)local_e0 + 0x28);
        if (lVar13 == 0) {
          iVar20 = (int)(*(longlong *)((longlong)local_e0 + 0x158) -
                         *(longlong *)((longlong)local_e0 + 0x150) >> 1);
          pvVar18 = (void *)(longlong)iVar20;
          local_d8 = pvVar18;
          if (0 < iVar20) {
            iVar20 = FUN_14017efe0(1);
            iVar7 = FUN_14017f040(1);
            pvVar2 = local_e0;
            uVar22 = (longlong)iVar7 * 4 + 0x28;
            uVar23 = uVar12;
            local_f0 = uVar22;
            do {
              lVar13 = *(longlong *)((longlong)pvVar2 + 0x150);
              uVar16 = (uint)uVar19;
              if (lVar4 == 0) {
                local_e0 = operator_new(600);
                lVar4 = FUN_140aacc50(local_e0);
                pvVar18 = local_d8;
                uVar22 = local_f0;
                uVar16 = local_f8[0];
                DAT_1416e3b00 = lVar4;
              }
              uVar1 = *(ushort *)(lVar13 + uVar23 * 2);
              lVar13 = DAT_1416e3b08;
              if ((int)(uint)uVar1 <
                  (int)(*(longlong *)(lVar4 + 0x18) - *(longlong *)(lVar4 + 0x10) >> 3)) {
                lVar13 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)uVar1 * 8);
              }
              uVar16 = uVar16 + *(int *)(lVar13 + (longlong)iVar20 * 4 + 0x28) / 1000;
              uVar19 = (ulonglong)uVar16;
              local_f8[0] = uVar16;
              uVar11 = (int)uVar12 + *(int *)(lVar13 + uVar22);
              uVar12 = (ulonglong)uVar11;
              uVar23 = uVar23 + 1;
            } while ((longlong)uVar23 < (longlong)pvVar18);
            uVar22 = local_res20 & 0xffffffff;
          }
        }
        else {
          uVar16 = uVar16 + *(int *)(lVar13 + 0x790) / 1000;
          uVar11 = *(uint *)(lVar13 + 0x894);
        }
        uVar12 = 0;
        iVar20 = 0;
        local_f0 = local_f0 & 0xffffffff00000000;
        local_res20 = CONCAT44(local_res20._4_4_,uVar11);
        puVar9 = &local_res20;
        if (-1 < (int)uVar11) {
          puVar9 = &local_f0;
        }
        iVar7 = (int)*puVar9 / 1000 + uVar16;
        local_b8[2] = iVar20;
        if (-1 < iVar7) {
          local_b8[2] = iVar7;
        }
        uVar19 = uVar12;
        do {
          iVar7 = *(int *)((longlong)local_b8 + uVar19);
          iVar8 = iVar20;
          if ((iVar7 < (int)local_c0) && (iVar7 != 0)) {
            iVar7 = iVar7 * 1000;
            if (iVar7 == 0) {
              iVar8 = -1;
            }
            else if ((int)local_c0 * 1000 + 0x189373U < 0x39580e) {
              iVar8 = ((int)local_c0 * 1000000) / iVar7;
            }
            else {
              iVar8 = (int)(((longlong)((int)local_c0 * 1000) * 1000) / (longlong)iVar7);
            }
          }
          iVar8 = (int)(((longlong)iVar8 * 500) / 1000);
          iVar7 = *(int *)((longlong)local_d0 + uVar19);
          if (iVar7 < 1) {
            uVar16 = iVar8 + 1000000;
          }
          else {
            if (iVar7 == 0) {
              iVar7 = -1;
            }
            else if (iVar3 + 0x189373U < 0x39580e) {
              iVar7 = (iVar3 * 1000) / iVar7;
            }
            else {
              iVar7 = (int)(((longlong)iVar3 * 1000) / (longlong)iVar7);
            }
            uVar16 = iVar8 + iVar7;
          }
          if ((int)uVar22 < (int)uVar16) {
            uVar22 = (ulonglong)uVar16;
            local_e8[0] = (int)uVar12;
          }
          uVar21 = (undefined1)local_e8[0];
          uVar16 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar16;
          uVar19 = uVar19 + 4;
          param_1 = local_res8;
        } while ((int)uVar16 < 3);
      }
      lVar13 = local_res10;
      lVar4 = (longlong)local_res18;
      if ((local_res18 == -1) || (local_res18 == (int)param_1[9])) {
        lVar4 = param_1[8];
        plVar5 = operator_new(0x20);
        *plVar5 = lVar13;
        plVar5[1] = lVar4;
        plVar5[2] = 0;
        *(undefined1 *)(plVar5 + 3) = 0;
        param_1[8] = (longlong)plVar5;
        lVar14 = param_1[9];
        *(int *)(param_1 + 9) = (int)lVar14 + 1;
        if ((int)lVar14 == 0) {
          param_1[7] = (longlong)plVar5;
        }
        else {
          *(longlong **)(lVar4 + 0x10) = plVar5;
        }
        local_res8._1_7_ = (undefined7)((ulonglong)plVar5 >> 8);
        local_res8 = (longlong *)CONCAT71(local_res8._1_7_,uVar21);
        FUN_1409ee960(param_1 + 0x23,&local_res8);
      }
      else {
        plVar5 = (longlong *)param_1[7];
        for (iVar20 = local_res18; iVar20 != 0; iVar20 = iVar20 + -1) {
          plVar5 = (longlong *)plVar5[2];
        }
        for (local_res8 = (longlong *)param_1[7];
            (local_res8 != (longlong *)0x0 && (*local_res8 != *plVar5));
            local_res8 = (longlong *)local_res8[2]) {
        }
        FUN_14012fe50(param_1 + 7,&local_res10,&local_res8);
        local_res8 = (longlong *)CONCAT71(local_res8._1_7_,uVar21);
        FUN_140ba8280(param_1 + 0x23,&local_res20,lVar4 + param_1[0x23],1,&local_res8);
      }
      if (param_1[0x2e] == 0) {
        lVar4 = FUN_1400d3090(param_1 + 0x2d);
        param_1[0x2c] = lVar4;
        param_1[0x2e] = lVar4;
        if (lVar4 == 0) {
          param_1[0x2e] = DAT_1416e2360;
        }
      }
      FUN_140a2c2e0(lVar13,param_1[0x2e]);
      *(longlong **)(lVar13 + 0x28) = param_1;
      if ((param_1[0xd] != 0) && (*(int *)(param_1[0xd] + 8) != 0)) {
        plVar5 = (longlong *)FUN_140b99ce0(param_1,local_d0);
        for (plVar5 = *(longlong **)(*(longlong *)(*plVar5 + 0x10) + 0x30);
            (plVar5 != (longlong *)0x0 && ((longlong *)*plVar5 != param_1));
            plVar5 = (longlong *)plVar5[2]) {
        }
        if (CONCAT44(local_d0[3],local_d0[2]) != 0) {
          FUN_1400b1860();
        }
        plVar6 = (longlong *)FUN_140b99ce0(param_1,local_d0);
        if (plVar5 == (longlong *)0x0) {
          FUN_1403a1810(*(undefined8 *)(*plVar6 + 0x18),lVar13);
        }
        else {
          FUN_1403a1810(*(undefined8 *)(*plVar6 + 0x10),lVar13);
        }
        if (CONCAT44(local_d0[3],local_d0[2]) != 0) {
          FUN_1400b1860();
        }
      }
      if ((param_1[0xf] != 0) && (*(int *)(param_1[0xf] + 8) != 0)) {
        plVar5 = (longlong *)FUN_140b99c30(param_1,local_d0);
        FUN_1403a1810(*(undefined8 *)(*plVar5 + 0x10),lVar13);
        if (CONCAT44(local_d0[3],local_d0[2]) != 0) {
          FUN_1400b1860();
        }
      }
      FUN_140b9b660(param_1);
      return;
    }
    if (*plVar5 == param_2) {
      if (plVar5 != (longlong *)0x0) {
        return;
      }
      goto LAB_140b97c09;
    }
    plVar5 = (longlong *)plVar5[2];
  } while( true );
}

