
void FUN_1403aa310(longlong *param_1)

{
  int *piVar1;
  ushort uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *pvVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  int iVar23;
  ulonglong uVar24;
  uint local_res10;
  longlong local_res20;
  void *local_60;
  longlong *local_58;
  
  lVar21 = DAT_1416e3260;
  lVar14 = param_1[2];
  if (*(int *)(lVar14 + 0x40) != 0) {
    uVar7 = FUN_140ba4600(**(undefined8 **)(lVar14 + 0x30));
    *(undefined8 *)(lVar14 + 0x180) = uVar7;
  }
  lVar14 = param_1[3];
  if (*(int *)(lVar14 + 0x40) != 0) {
    uVar7 = FUN_140ba4600(**(undefined8 **)(lVar14 + 0x30));
    *(undefined8 *)(lVar14 + 0x180) = uVar7;
  }
  iVar4 = (**(code **)(*param_1 + 0x60))(param_1);
  if (iVar4 == 3) {
    lVar14 = DAT_1418d6ab0;
    if (((DAT_1418d6ab8 != 0) &&
        ((*(uint *)(param_1 + 4) & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
       (lVar14 = *(longlong *)
                  (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                  (ulonglong)(*(uint *)(param_1 + 4) & 0xffffff) * 0x10), lVar14 == 0)) {
      lVar14 = DAT_1418d6ab0;
    }
    FUN_1409fe3f0(lVar14,param_1,1);
  }
  else {
    puVar8 = (undefined8 *)FUN_1403b9ad0(lVar21 + 0x230,&local_60,param_1);
    plVar22 = (longlong *)puVar8[1];
    uVar7 = *puVar8;
    if (plVar22 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar22 + 0xc) = *(int *)((longlong)plVar22 + 0xc) + 1;
      UNLOCK();
    }
    lVar14 = param_1[5];
    if ((*(longlong *)(lVar14 + 0xce0) == 0) || (*(int *)(*(longlong *)(lVar14 + 0xce0) + 8) == 0))
    {
      if (plVar22 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar22 + 0xc) = *(int *)((longlong)plVar22 + 0xc) + 1;
        UNLOCK();
      }
      plVar3 = *(longlong **)(lVar14 + 0xce0);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      *(longlong **)(lVar14 + 0xce0) = plVar22;
      *(undefined8 *)(lVar14 + 0xcd8) = uVar7;
    }
    if (plVar22 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar22 + 8))(plVar22);
      }
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar22 = local_58 + 1;
      lVar14 = *plVar22;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_58 + 8))(local_58);
        }
      }
    }
    iVar4 = (**(code **)(*param_1 + 0x60))(param_1);
    if (iVar4 == 1) {
      local_res20 = 0;
      do {
        uVar18 = 0;
        lVar21 = local_res20 + param_1[3] + 0x48;
        iVar4 = *(int *)(param_1[8] + 0x4ac) * 1000;
        lVar14 = *(longlong *)(lVar21 + 0x10);
        if (((lVar14 != 0) && ((*(byte *)(lVar14 + 0x1e9) & 2) != 0)) && (0 < iVar4)) {
          iVar19 = 1000;
          iVar23 = 1000;
          if (*(longlong *)(lVar14 + 0x28) != 0) {
            uVar11 = uVar18;
            if (*(longlong *)(lVar14 + 0x28) != 0) {
              uVar11 = *(longlong *)(lVar14 + 0x28) + 0xbe4;
            }
            iVar19 = *(int *)(uVar11 + 0x54) + 1000;
          }
          lVar10 = lVar21;
          lVar9 = FUN_1403a0590(lVar21);
          if (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x28) != 0) {
            lVar10 = FUN_1403a0590(lVar10);
            lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x28);
            uVar11 = uVar18;
            if (lVar10 != 0) {
              uVar11 = lVar10 + 0xbe4;
            }
            iVar23 = *(int *)(uVar11 + 0x54) + 1000;
          }
          local_res10 = (uint)*(char *)(lVar14 + 0x1e2);
          uVar11 = (ulonglong)local_res10;
          lVar10 = *(longlong *)(lVar14 + 0x28);
          if (lVar10 == 0) {
            iVar5 = (int)(*(longlong *)(lVar14 + 0x158) - *(longlong *)(lVar14 + 0x150) >> 1);
            if (iVar5 < 1) goto LAB_1403aa695;
            lVar9 = (longlong)iVar5;
            iVar16 = FUN_14017efe0(1);
            iVar6 = FUN_14017f040(1);
            lVar10 = DAT_1416e3b00;
            uVar24 = uVar18;
            do {
              lVar13 = *(longlong *)(lVar14 + 0x150);
              uVar17 = (uint)uVar11;
              if (lVar10 == 0) {
                pvVar12 = operator_new(600);
                lVar10 = FUN_140aacc50(pvVar12);
                lVar9 = (longlong)iVar5;
                uVar17 = local_res10;
                DAT_1416e3b00 = lVar10;
              }
              uVar2 = *(ushort *)(lVar13 + uVar24 * 2);
              lVar13 = DAT_1416e3b08;
              if ((int)(uint)uVar2 <
                  (int)(*(longlong *)(lVar10 + 0x18) - *(longlong *)(lVar10 + 0x10) >> 3)) {
                lVar13 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)uVar2 * 8);
              }
              local_res10 = uVar17 + *(int *)(lVar13 + 0x28 + (longlong)iVar16 * 4) / 1000;
              uVar11 = (ulonglong)local_res10;
              uVar17 = (int)uVar18 + *(int *)(lVar13 + 0x28 + (longlong)iVar6 * 4);
              uVar18 = (ulonglong)uVar17;
              uVar24 = uVar24 + 1;
            } while ((longlong)uVar24 < lVar9);
          }
          else {
            local_res10 = local_res10 + *(int *)(lVar10 + 0x790) / 1000;
            uVar18 = (ulonglong)*(uint *)(lVar10 + 0x894);
LAB_1403aa695:
            uVar17 = (uint)uVar18;
            lVar10 = DAT_1416e3b00;
          }
          uVar18 = 0;
          uVar15 = 0;
          if ((int)uVar17 < 0) {
            uVar15 = uVar17;
          }
          local_res10 = (int)uVar15 / 1000 + local_res10;
          uVar17 = 0;
          if (-1 < (int)local_res10) {
            uVar17 = local_res10;
          }
          lVar13 = (longlong)DAT_1416e2610;
          lVar14 = FUN_1403a0590(lVar21);
          lVar14 = *(longlong *)(lVar14 + 0x10);
          local_res10 = (uint)*(char *)(lVar14 + 0x1e2);
          uVar11 = (ulonglong)local_res10;
          lVar9 = *(longlong *)(lVar14 + 0x28);
          if (lVar9 == 0) {
            iVar5 = (int)(*(longlong *)(lVar14 + 0x158) - *(longlong *)(lVar14 + 0x150) >> 1);
            if (0 < iVar5) {
              lVar9 = (longlong)iVar5;
              iVar16 = FUN_14017efe0(1);
              iVar6 = FUN_14017f040(1);
              uVar24 = uVar18;
              do {
                lVar20 = *(longlong *)(lVar14 + 0x150);
                uVar15 = (uint)uVar11;
                if (lVar10 == 0) {
                  local_60 = operator_new(600);
                  lVar10 = FUN_140aacc50(local_60);
                  lVar9 = (longlong)iVar5;
                  uVar15 = local_res10;
                  DAT_1416e3b00 = lVar10;
                }
                uVar2 = *(ushort *)(lVar20 + uVar24 * 2);
                lVar20 = DAT_1416e3b08;
                if ((int)(uint)uVar2 <
                    (int)(*(longlong *)(lVar10 + 0x18) - *(longlong *)(lVar10 + 0x10) >> 3)) {
                  lVar20 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)uVar2 * 8);
                }
                local_res10 = uVar15 + *(int *)(lVar20 + 0x28 + (longlong)iVar16 * 4) / 1000;
                uVar11 = (ulonglong)local_res10;
                uVar18 = (ulonglong)
                         (uint)((int)uVar18 + *(int *)(lVar20 + 0x28 + (longlong)iVar6 * 4));
                uVar24 = uVar24 + 1;
              } while ((longlong)uVar24 < lVar9);
            }
            iVar5 = (int)uVar18;
          }
          else {
            local_res10 = local_res10 + *(int *)(lVar9 + 0x790) / 1000;
            iVar5 = *(int *)(lVar9 + 0x894);
          }
          iVar16 = 0;
          if (iVar5 < 0) {
            iVar16 = iVar5;
          }
          iVar16 = iVar16 / 1000 + local_res10;
          iVar5 = 0;
          if (-1 < iVar16) {
            iVar5 = iVar16;
          }
          iVar4 = (int)(((longlong)iVar19 *
                        (longlong)
                        ((iVar4 + (int)(((int)(uVar17 * 1000) * lVar13) / 1000)) -
                        (int)(((longlong)DAT_1416e2604 * (longlong)(iVar5 * 1000)) / 1000))) / 1000)
          ;
          if (iVar23 != 0) {
            iVar4 = (int)(((longlong)iVar4 * 1000) / (longlong)iVar23);
          }
          iVar23 = iVar4 + -500;
          if (-1 < iVar4) {
            iVar23 = iVar4 + 500;
          }
          iVar4 = DAT_1416e267c;
          if (iVar23 / 1000 < DAT_1416e267c) {
            iVar4 = iVar23 / 1000;
          }
          iVar23 = FUN_140c4a7f0();
          if (iVar23 % DAT_1416e2698 < iVar4) {
            FUN_14039b440(lVar21);
          }
        }
        local_res20 = local_res20 + 200;
      } while (local_res20 < 600);
    }
  }
  iVar23 = 0;
  iVar4 = (**(code **)(*param_1 + 0x60))(param_1);
  if (iVar4 == 1) {
    do {
      if (iVar23 == 0) {
        plVar22 = param_1 + 0xe;
        lVar14 = 0x58;
      }
      else {
        plVar22 = param_1 + 0xb;
        lVar14 = 0x70;
      }
      uVar7 = DAT_1416e2360;
      if ((*(longlong *)(lVar14 + 8 + (longlong)param_1) -
           (longlong)*(undefined8 **)(lVar14 + (longlong)param_1) & 0xfffffffffffffff8U) != 0) {
        uVar7 = **(undefined8 **)(lVar14 + (longlong)param_1);
      }
      if (iVar23 == 0) {
        lVar14 = param_1[3];
        lVar21 = param_1[2];
      }
      else {
        lVar14 = param_1[2];
        lVar21 = param_1[3];
      }
      FUN_1403a5a30(plVar22,uVar7,lVar14,lVar21,1);
      iVar23 = iVar23 + 1;
    } while (iVar23 < 2);
  }
  return;
}

