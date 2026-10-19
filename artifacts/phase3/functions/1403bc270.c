
void FUN_1403bc270(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5,
                  uint *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined **ppuVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  int *piVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  void *pvVar19;
  void *pvVar20;
  undefined8 uVar21;
  longlong *plVar22;
  undefined4 uVar23;
  longlong *plVar24;
  longlong *plVar25;
  double dVar26;
  longlong local_res8;
  undefined8 *local_res10;
  uint local_res18 [2];
  ulonglong uVar27;
  ulonglong in_stack_fffffffffffffec0;
  ulonglong in_stack_fffffffffffffed0;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  void *local_b8;
  void *pvStack_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong *local_98;
  longlong lStack_90;
  undefined1 local_88 [64];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar8 = *(longlong *)(DAT_1416e3260 + 0x3f0);
  local_98 = (longlong *)0x0;
  lStack_90 = 0;
  local_res8 = lVar8;
  if (param_3 == 1) {
    puVar14 = operator_new(0x98);
    local_res10 = puVar14;
    FUN_1403a40e0(puVar14);
    *puVar14 = &PTR_FUN_1410902d8;
    local_d8 = (longlong *)0x0;
    lStack_d0 = 0;
    FUN_1403be470(&local_d8,puVar14);
    plVar25 = local_d8;
    local_res10 = (undefined8 *)lStack_d0;
    lStack_90 = lStack_d0;
    local_98 = local_d8;
    if (0 < (int)(*(longlong *)(param_2 + 0xcf0) - *(longlong *)(param_2 + 0xce8) >> 2)) {
      piVar15 = (int *)FUN_14077c7b0(DAT_1416e3260);
      iVar12 = (*piVar15 + -43800000) / 0x18;
      dVar26 = (double)iVar12 / DAT_141164d70;
      *param_6 = *(uint *)(*(longlong *)(param_2 + 0xce8) +
                          (longlong)
                          (((int)dVar26 * 0x16d +
                           (iVar12 - (int)((float)(int)dVar26 * DAT_141164eac))) %
                          (int)(*(longlong *)(param_2 + 0xcf0) - *(longlong *)(param_2 + 0xce8) >> 2
                               )) * 4);
    }
  }
  else if (param_3 == 3) {
    puVar14 = operator_new(0xa0);
    local_res10 = puVar14;
    FUN_1403a40e0(puVar14);
    *puVar14 = &PTR_FUN_141090000;
    *(undefined1 *)(puVar14 + 0x13) = 0;
    local_d8 = (longlong *)0x0;
    lStack_d0 = 0;
    FUN_1403be470(&local_d8,puVar14);
    local_res10 = (undefined8 *)lStack_d0;
    lStack_90 = lStack_d0;
    local_98 = local_d8;
    plVar25 = local_d8;
  }
  else {
    local_res10 = (undefined8 *)0x0;
    plVar25 = (longlong *)0x0;
  }
  plVar22 = DAT_1418d6ab0;
  if (((DAT_1418d6ab8 != 0) && ((*param_6 & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
     (plVar22 = *(longlong **)
                 (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)(*param_6 & 0xffffff) * 0x10)
     , plVar22 == (longlong *)0x0)) {
    plVar22 = DAT_1418d6ab0;
  }
  if (plVar22 != (longlong *)0x0) {
    plVar22 = DAT_1418d6ab0;
    if (((DAT_1418d6ab8 != 0) && ((*param_6 & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
       (plVar22 = *(longlong **)
                   (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                   (ulonglong)(*param_6 & 0xffffff) * 0x10), plVar22 == (longlong *)0x0)) {
      plVar22 = DAT_1418d6ab0;
    }
    cVar11 = (**(code **)(plVar22[2] + 8))();
    if (cVar11 != '\0') {
      local_res18[0] = *param_6;
      FUN_1403b6770(plVar25,local_res18);
    }
  }
  FUN_1403b6870(plVar25,param_2);
  lVar17 = *(longlong *)(param_4 + 0x88);
  if ((*(longlong *)(param_4 + 0x80) != 0) && (lVar17 != 0)) {
    lVar18 = *(longlong *)(*(longlong *)(param_4 + 0x80) + 0xf0);
    iVar12 = FUN_140959c40(lVar18,*(undefined2 *)(lVar17 + 0xe8));
    if (iVar12 != -1) {
      iVar12 = *(int *)(*(longlong *)(lVar18 + 0x198) + (longlong)iVar12 * 0x18);
      if ((*(char *)(lVar18 + 100) == '\0') ||
         (*(char *)(*(longlong *)(lVar17 + 0xf0) + 100) != '\0')) {
        if (iVar12 == 1) {
          uVar23 = 2;
        }
        else if (iVar12 == 2) {
          uVar23 = 0;
        }
        else {
          if (iVar12 != 4) goto LAB_1403bc599;
          uVar23 = 1;
        }
        lVar17 = FUN_1403b7020(uVar23);
        plVar25[0x12] = lVar17;
      }
      else {
        local_a0 = 0xf;
        local_a8 = 0;
        local_b8 = (void *)((ulonglong)local_b8 & 0xffffffffffffff00);
        FUN_1400b0300(&local_b8,"amphibious_landing",0x12);
        uVar16 = FUN_140876c80();
        lVar17 = FUN_14087acd0(uVar16,&local_b8);
        if (0xf < local_a0) {
          FUN_1400b08c0(&local_b8,local_b8,local_a0 + 1);
        }
        plVar25[0x12] = lVar17;
      }
    }
  }
LAB_1403bc599:
  FUN_1403bdff0(param_1 + 0x18,&local_98);
  (**(code **)(*plVar25 + 0x30))(plVar25);
  FUN_1403b6910(plVar25,param_4);
  FUN_1403b6ad0(plVar25,param_5);
  plVar22 = *(longlong **)(param_2 + 0xcc0);
  if (*(longlong *)(param_4 + 0x170) == 0) {
    lVar17 = FUN_1400d3090(param_4 + 0x168);
    *(longlong *)(param_4 + 0x160) = lVar17;
    *(longlong *)(param_4 + 0x170) = lVar17;
    if (lVar17 == 0) {
      *(undefined8 *)(param_4 + 0x170) = DAT_1416e2360;
    }
  }
  local_res18[0] = CONCAT31(local_res18[0]._1_3_,*(longlong *)(param_4 + 0x170) == lVar8);
  if (param_5 == 0) {
LAB_1403bc661:
    iVar12 = (**(code **)(*plVar25 + 0x60))(plVar25);
    if (iVar12 == 3) {
      plVar24 = DAT_1418d6ab0;
      if (((DAT_1418d6ab8 != 0) &&
          ((*(uint *)(plVar25 + 4) & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
         (plVar24 = *(longlong **)
                     (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                     (ulonglong)(*(uint *)(plVar25 + 4) & 0xffffff) * 0x10),
         plVar24 == (longlong *)0x0)) {
        plVar24 = DAT_1418d6ab0;
      }
      cVar11 = (**(code **)(plVar24[2] + 8))();
      if (cVar11 != '\0') {
        plVar24 = DAT_1418d6ab0;
        if (((DAT_1418d6ab8 != 0) &&
            ((*(uint *)(plVar25 + 4) & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
           (plVar24 = *(longlong **)
                       (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                       (ulonglong)(*(uint *)(plVar25 + 4) & 0xffffff) * 0x10),
           plVar24 == (longlong *)0x0)) {
          plVar24 = DAT_1418d6ab0;
        }
        lVar17 = plVar24[7];
        if ((*(byte *)(lVar17 + 0x1e9) & 2) == 0) {
          if (*(code **)(*plVar24 + 0x30) == (code *)&LAB_1403827a0) {
            if (((*(int *)((longlong)plVar24 + 0x2c) - 3U & 0xfffffffa) != 0) ||
               (*(int *)((longlong)plVar24 + 0x2c) == 4)) {
LAB_1403bc75c:
              lVar17 = *(longlong *)(plVar24[6] + 0x498);
              goto LAB_1403bc76d;
            }
          }
          else {
            cVar11 = (**(code **)(*plVar24 + 0x30))(plVar24);
            if (cVar11 == '\0') goto LAB_1403bc75c;
          }
          lVar17 = plVar24[8];
        }
LAB_1403bc76d:
        if (lVar17 == lVar8) goto LAB_1403bc936;
        plVar24 = DAT_1418d6ab0;
        if (((DAT_1418d6ab8 != 0) &&
            ((*(uint *)(plVar25 + 4) & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
           (plVar24 = *(longlong **)
                       (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                       (ulonglong)(*(uint *)(plVar25 + 4) & 0xffffff) * 0x10),
           plVar24 == (longlong *)0x0)) {
          plVar24 = DAT_1418d6ab0;
        }
        lVar17 = plVar24[7];
        if ((*(byte *)(lVar17 + 0x1e9) & 2) == 0) {
          if (*(code **)(*plVar24 + 0x30) == (code *)&LAB_1403827a0) {
            if (((*(int *)((longlong)plVar24 + 0x2c) - 3U & 0xfffffffa) != 0) ||
               (*(int *)((longlong)plVar24 + 0x2c) == 4)) {
LAB_1403bc7dd:
              lVar17 = *(longlong *)(plVar24[6] + 0x498);
              goto LAB_1403bc7ee;
            }
          }
          else {
            cVar11 = (**(code **)(*plVar24 + 0x30))(plVar24);
            if (cVar11 == '\0') goto LAB_1403bc7dd;
          }
          lVar17 = plVar24[8];
        }
LAB_1403bc7ee:
        cVar11 = FUN_1400b1c30(lVar17,lVar8,0);
        if (cVar11 != '\0') {
          if (*(longlong *)(param_4 + 0x170) == 0) {
            lVar17 = FUN_1400d3090(param_4 + 0x168);
            *(longlong *)(param_4 + 0x160) = lVar17;
            *(longlong *)(param_4 + 0x170) = lVar17;
            if (lVar17 == 0) {
              *(undefined8 *)(param_4 + 0x170) = DAT_1416e2360;
            }
          }
          cVar11 = FUN_1400b2050(lVar8,*(undefined8 *)(param_4 + 0x170));
          if (cVar11 != '\0') goto LAB_1403bc936;
        }
      }
      if (*(short *)(plVar25[5] + 0xe8) != 0) {
        lVar17 = FUN_1409388f0();
        if (lVar17 == lVar8) goto LAB_1403bc936;
        plVar24 = DAT_1418d6ab0;
        if (((DAT_1418d6ab8 != 0) &&
            ((*(uint *)(plVar25 + 4) & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
           (plVar24 = *(longlong **)
                       (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                       (ulonglong)(*(uint *)(plVar25 + 4) & 0xffffff) * 0x10),
           plVar24 == (longlong *)0x0)) {
          plVar24 = DAT_1418d6ab0;
        }
        lVar17 = plVar24[7];
        if ((*(byte *)(lVar17 + 0x1e9) & 2) == 0) {
          if (*(code **)(*plVar24 + 0x30) == (code *)&LAB_1403827a0) {
            if (((*(int *)((longlong)plVar24 + 0x2c) - 3U & 0xfffffffa) != 0) ||
               (*(int *)((longlong)plVar24 + 0x2c) == 4)) {
LAB_1403bc8e5:
              lVar17 = *(longlong *)(plVar24[6] + 0x498);
              goto LAB_1403bc8f6;
            }
          }
          else {
            cVar11 = (**(code **)(*plVar24 + 0x30))(plVar24);
            if (cVar11 == '\0') goto LAB_1403bc8e5;
          }
          lVar17 = plVar24[8];
        }
LAB_1403bc8f6:
        cVar11 = FUN_1400b1c30(lVar17,lVar8,0);
        if (cVar11 != '\0') {
          lVar17 = *(longlong *)(param_4 + 0x170);
          if (lVar17 == 0) {
            lVar17 = FUN_140b96ae0(param_4);
          }
          cVar11 = FUN_1400b2050(lVar8,lVar17);
          if (cVar11 != '\0') goto LAB_1403bc936;
        }
      }
    }
    bVar10 = false;
  }
  else {
    if (*(longlong *)(param_5 + 0x170) == 0) {
      lVar17 = FUN_1400d3090(param_5 + 0x168);
      *(longlong *)(param_5 + 0x160) = lVar17;
      *(longlong *)(param_5 + 0x170) = lVar17;
      if (lVar17 == 0) {
        *(undefined8 *)(param_5 + 0x170) = DAT_1416e2360;
      }
    }
    if (*(longlong *)(param_5 + 0x170) != lVar8) goto LAB_1403bc661;
LAB_1403bc936:
    bVar10 = true;
  }
joined_r0x0001403bc94f:
  if (plVar22 != (longlong *)0x0) {
    lVar17 = *plVar22;
    plVar22 = (longlong *)plVar22[2];
    if ((lVar17 != param_4) && (lVar17 != param_5)) {
      (**(code **)(*plVar25 + 0x80))(plVar25,lVar17);
      if (*(longlong *)(lVar17 + 0x170) == 0) {
        lVar18 = FUN_1400d3090(lVar17 + 0x168);
        *(longlong *)(lVar17 + 0x160) = lVar18;
        *(longlong *)(lVar17 + 0x170) = lVar18;
        if (lVar18 == 0) {
          *(undefined8 *)(lVar17 + 0x170) = DAT_1416e2360;
        }
      }
      if (*(longlong *)(lVar17 + 0x170) == lVar8) {
        for (plVar24 = *(longlong **)(plVar25[2] + 0x30); plVar24 != (longlong *)0x0;
            plVar24 = (longlong *)plVar24[2]) {
          if (*plVar24 == lVar17) {
            local_res18[0] = CONCAT31(local_res18[0]._1_3_,1);
            goto joined_r0x0001403bc94f;
          }
        }
        bVar10 = true;
      }
    }
    goto joined_r0x0001403bc94f;
  }
  if ((char)local_res18[0] == '\0') {
    if (!bVar10) goto LAB_1403bd4be;
    lVar17 = *(longlong *)(param_4 + 0x170);
    if (lVar17 == 0) {
      lVar17 = FUN_140b96ae0(param_4);
    }
    local_b8 = (void *)0x0;
    pvStack_b0 = (void *)0x0;
    local_a8 = local_a8 & 0xffffff0000000000;
    local_e8 = 0;
    local_e0 = 0;
    FUN_1400b0200(local_f8,0,0);
    FUN_1400b0300(local_f8,"OTHER",5);
    in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
    uVar27 = 0;
    uVar16 = FUN_1401e4e40(lVar17,&local_d8,0);
    uVar16 = FUN_1401adde0(local_88,local_f8,uVar16);
    pvVar19 = operator_new(0x58);
    FUN_1402688d0(pvVar19,uVar16);
    *(undefined8 *)((longlong)pvVar19 + 0x40) = 0;
    *(undefined8 *)((longlong)pvVar19 + 0x48) = 0;
    *(undefined1 *)((longlong)pvVar19 + 0x50) = 0;
    local_a8 = CONCAT44(local_a8._4_4_,1);
    local_b8 = pvVar19;
    pvStack_b0 = pvVar19;
    FUN_1401b84e0(local_88);
    FUN_1400ae4f0(&local_d8);
    FUN_1400ae4f0(local_f8);
    local_e8 = 0;
    local_e0 = 0;
    FUN_1400b0200(local_f8,0,0);
    FUN_1400b0300(local_f8,"PROVINCE",8);
    ppuVar9 = *(undefined ***)(plVar25[5] + 0x10);
    if (ppuVar9 == &PTR_LAB_1410eea48) {
      lVar18 = *(longlong *)(plVar25[5] + 0xf0) + 0x10;
    }
    else {
      lVar18 = (*(code *)ppuVar9[6])();
    }
    uVar16 = FUN_1401adde0(local_88,local_f8,lVar18);
    pvVar20 = operator_new(0x58);
    FUN_1402688d0(pvVar20,uVar16);
    *(void **)((longlong)pvVar20 + 0x40) = pvVar19;
    *(undefined8 *)((longlong)pvVar20 + 0x48) = 0;
    *(undefined1 *)((longlong)pvVar20 + 0x50) = 0;
    local_a8 = CONCAT44(local_a8._4_4_,2);
    *(void **)((longlong)pvVar19 + 0x48) = pvVar20;
    pvStack_b0 = pvVar20;
    FUN_1401b84e0(local_88);
    FUN_1400ae4f0(local_f8);
    plVar22 = DAT_1418d6ab0;
    if (((DAT_1418d6ab8 != 0) &&
        ((*(uint *)(plVar25 + 4) & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
       (plVar22 = *(longlong **)
                   (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                   (ulonglong)(*(uint *)(plVar25 + 4) & 0xffffff) * 0x10),
       plVar22 == (longlong *)0x0)) {
      plVar22 = DAT_1418d6ab0;
    }
    cVar11 = (**(code **)(plVar22[2] + 8))();
    if (cVar11 != '\0') {
      local_e8 = 0;
      local_e0 = 0;
      FUN_1400b0200(local_f8,0,0);
      FUN_1400b0300(local_f8,"SETTLEMENT",10);
      plVar22 = DAT_1418d6ab0;
      if (((DAT_1418d6ab8 != 0) &&
          ((*(uint *)(plVar25 + 4) & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
         (plVar22 = *(longlong **)
                     (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                     (ulonglong)(*(uint *)(plVar25 + 4) & 0xffffff) * 0x10),
         plVar22 == (longlong *)0x0)) {
        plVar22 = DAT_1418d6ab0;
      }
      uVar27 = uVar27 & 0xffffffffffffff00;
      uVar16 = FUN_140a4d670(plVar22[6],&local_d8,9,DAT_1416e3268,uVar27,
                             in_stack_fffffffffffffec0 & 0xffffffffffffff00,0,
                             in_stack_fffffffffffffed0 & 0xffffffffffffff00);
      uVar16 = FUN_1401adde0(local_88,local_f8,uVar16);
      pvVar19 = operator_new(0x58);
      FUN_1402688d0(pvVar19,uVar16);
      *(void **)((longlong)pvVar19 + 0x40) = pvVar20;
      *(undefined8 *)((longlong)pvVar19 + 0x48) = 0;
      *(undefined1 *)((longlong)pvVar19 + 0x50) = 0;
      local_a8 = CONCAT44(local_a8._4_4_,3);
      *(void **)((longlong)pvVar20 + 0x48) = pvVar19;
      pvStack_b0 = pvVar19;
      FUN_1401b84e0(local_88);
      FUN_1400ae4f0(&local_d8);
      FUN_1400ae4f0(local_f8);
    }
    uVar23 = (undefined4)(uVar27 >> 0x20);
    iVar12 = (**(code **)(*plVar25 + 0x60))(plVar25);
    if (iVar12 == 3) {
      plVar22 = DAT_1418d6ab0;
      if (((DAT_1418d6ab8 != 0) &&
          ((*(uint *)(plVar25 + 4) & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
         (plVar22 = *(longlong **)
                     (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                     (ulonglong)(*(uint *)(plVar25 + 4) & 0xffffff) * 0x10),
         plVar22 == (longlong *)0x0)) {
        plVar22 = DAT_1418d6ab0;
      }
      lVar18 = plVar22[0x198];
      iVar12 = *(int *)(lVar18 + 200);
      iVar1 = *(int *)(lVar18 + 0xcc);
      iVar2 = *(int *)(lVar18 + 0xd0);
      iVar3 = *(int *)(lVar18 + 0xd4);
      iVar4 = *(int *)(lVar18 + 0xd8);
      iVar5 = *(int *)(lVar18 + 0xdc);
      iVar6 = *(int *)(lVar18 + 0xe0);
      iVar7 = *(int *)(lVar18 + 0xe4);
      iVar13 = FUN_140bba2a0(plVar25[2] + 0x30);
      if (iVar13 * 1000 < iVar12 + iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7)
      goto LAB_1403bd4b5;
      local_e8 = 0;
      local_e0 = 0;
      FUN_1400b0200(local_f8,0,0);
      FUN_1400b0300(local_f8,"SIEGEUS",7);
      uVar16 = DAT_1416e2360;
      local_d8 = (longlong *)0x0;
      lVar18 = plVar25[5];
      uVar21 = FUN_14083a280();
      FUN_14083b160(uVar21,local_f8,&local_b8,&local_res8,CONCAT44(uVar23,1),lVar8,lVar17,uVar16,
                    lVar18,1,&local_d8,0,0,0xffffffff);
    }
    else {
      local_e8 = 0;
      local_e0 = 0;
      FUN_1400b0200(local_f8,0,0);
      FUN_1400b0300(local_f8,"ATTACKUS",8);
      uVar16 = DAT_1416e2360;
      local_d8 = (longlong *)0x0;
      lVar18 = plVar25[5];
      uVar21 = FUN_14083a280();
      FUN_14083b160(uVar21,local_f8,&local_b8,&local_res8,CONCAT44(uVar23,1),lVar8,lVar17,uVar16,
                    lVar18,1,&local_d8,0,0,0xffffffff);
    }
    FUN_1400ae4f0(local_f8);
  }
  else {
    if (param_5 == 0) {
      plVar22 = DAT_1418d6ab0;
      if (((DAT_1418d6ab8 != 0) &&
          ((*(uint *)(plVar25 + 4) & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
         (plVar22 = *(longlong **)
                     (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                     (ulonglong)(*(uint *)(plVar25 + 4) & 0xffffff) * 0x10),
         plVar22 == (longlong *)0x0)) {
        plVar22 = DAT_1418d6ab0;
      }
      cVar11 = (**(code **)(plVar22[2] + 8))();
      if (cVar11 == '\0') {
        lVar17 = FUN_1409388f0(plVar25[5]);
      }
      else {
        plVar22 = DAT_1418d6ab0;
        if (((DAT_1418d6ab8 != 0) &&
            ((*(uint *)(plVar25 + 4) & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
           (plVar22 = *(longlong **)
                       (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                       (ulonglong)(*(uint *)(plVar25 + 4) & 0xffffff) * 0x10),
           plVar22 == (longlong *)0x0)) {
          plVar22 = DAT_1418d6ab0;
        }
        lVar17 = plVar22[7];
        if ((*(byte *)(lVar17 + 0x1e9) & 2) == 0) {
          if (*(code **)(*plVar22 + 0x30) == (code *)&LAB_1403827a0) {
            if (((*(int *)((longlong)plVar22 + 0x2c) - 3U & 0xfffffffa) != 0) ||
               (*(int *)((longlong)plVar22 + 0x2c) == 4)) {
LAB_1403bcaf1:
              lVar17 = *(longlong *)(plVar22[6] + 0x498);
              goto LAB_1403bcb10;
            }
          }
          else {
            cVar11 = (**(code **)(*plVar22 + 0x30))(plVar22);
            if (cVar11 == '\0') goto LAB_1403bcaf1;
          }
          lVar17 = plVar22[8];
        }
      }
    }
    else {
      lVar17 = *(longlong *)(param_5 + 0x170);
      if (lVar17 == 0) {
        lVar17 = FUN_140b96ae0(param_5);
      }
    }
LAB_1403bcb10:
    local_b8 = (void *)0x0;
    pvStack_b0 = (void *)0x0;
    local_a8 = local_a8 & 0xffffff0000000000;
    local_c0 = 0xf;
    local_c8 = 0;
    local_d8 = (longlong *)((ulonglong)local_d8 & 0xffffffffffffff00);
    FUN_1400b0300(&local_d8,"OTHER",5);
    in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
    uVar27 = 0;
    uVar16 = FUN_1401e4e40(lVar17,local_f8,0);
    uVar16 = FUN_1401adde0(local_88,&local_d8,uVar16);
    pvVar19 = operator_new(0x58);
    FUN_1402688d0(pvVar19,uVar16);
    *(undefined8 *)((longlong)pvVar19 + 0x40) = 0;
    *(undefined8 *)((longlong)pvVar19 + 0x48) = 0;
    *(undefined1 *)((longlong)pvVar19 + 0x50) = 0;
    local_a8 = CONCAT44(local_a8._4_4_,1);
    local_b8 = pvVar19;
    pvStack_b0 = pvVar19;
    FUN_1401b84e0(local_88);
    FUN_1400ae4f0(local_f8);
    FUN_1400ae4f0(&local_d8);
    local_c0 = 0xf;
    local_c8 = 0;
    local_d8 = (longlong *)((ulonglong)local_d8 & 0xffffffffffffff00);
    FUN_1400b0300(&local_d8,"PROVINCE",8);
    ppuVar9 = *(undefined ***)(plVar25[5] + 0x10);
    if (ppuVar9 == &PTR_LAB_1410eea48) {
      lVar18 = *(longlong *)(plVar25[5] + 0xf0) + 0x10;
    }
    else {
      lVar18 = (*(code *)ppuVar9[6])();
    }
    uVar16 = FUN_1401adde0(local_88,&local_d8,lVar18);
    pvVar20 = operator_new(0x58);
    FUN_1402688d0(pvVar20,uVar16);
    *(void **)((longlong)pvVar20 + 0x40) = pvVar19;
    *(undefined8 *)((longlong)pvVar20 + 0x48) = 0;
    *(undefined1 *)((longlong)pvVar20 + 0x50) = 0;
    local_a8 = CONCAT44(local_a8._4_4_,2);
    *(void **)((longlong)pvVar19 + 0x48) = pvVar20;
    pvStack_b0 = pvVar20;
    FUN_1401b84e0(local_88);
    FUN_1400ae4f0(&local_d8);
    plVar22 = DAT_1418d6ab0;
    if (((DAT_1418d6ab8 != 0) &&
        ((*(uint *)(plVar25 + 4) & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
       (plVar22 = *(longlong **)
                   (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                   (ulonglong)(*(uint *)(plVar25 + 4) & 0xffffff) * 0x10),
       plVar22 == (longlong *)0x0)) {
      plVar22 = DAT_1418d6ab0;
    }
    cVar11 = (**(code **)(plVar22[2] + 8))();
    if (cVar11 != '\0') {
      local_c0 = 0xf;
      local_c8 = 0;
      local_d8 = (longlong *)((ulonglong)local_d8 & 0xffffffffffffff00);
      FUN_1400b0300(&local_d8,"SETTLEMENT",10);
      plVar22 = DAT_1418d6ab0;
      if (((DAT_1418d6ab8 != 0) &&
          ((*(uint *)(plVar25 + 4) & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
         (plVar22 = *(longlong **)
                     (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                     (ulonglong)(*(uint *)(plVar25 + 4) & 0xffffff) * 0x10),
         plVar22 == (longlong *)0x0)) {
        plVar22 = DAT_1418d6ab0;
      }
      uVar27 = uVar27 & 0xffffffffffffff00;
      uVar16 = FUN_140a4d670(plVar22[6],local_f8,9,DAT_1416e3268,uVar27,
                             in_stack_fffffffffffffec0 & 0xffffffffffffff00,0,
                             in_stack_fffffffffffffed0 & 0xffffffffffffff00);
      uVar16 = FUN_1401adde0(local_88,&local_d8,uVar16);
      pvVar19 = operator_new(0x58);
      FUN_1402688d0(pvVar19,uVar16);
      *(void **)((longlong)pvVar19 + 0x40) = pvVar20;
      *(undefined8 *)((longlong)pvVar19 + 0x48) = 0;
      *(undefined1 *)((longlong)pvVar19 + 0x50) = 0;
      local_a8 = CONCAT44(local_a8._4_4_,3);
      *(void **)((longlong)pvVar20 + 0x48) = pvVar19;
      pvStack_b0 = pvVar19;
      FUN_1401b84e0(local_88);
      FUN_1400ae4f0(local_f8);
      FUN_1400ae4f0(&local_d8);
    }
    uVar23 = (undefined4)(uVar27 >> 0x20);
    iVar12 = (**(code **)(*plVar25 + 0x60))(plVar25);
    if (iVar12 == 3) {
      plVar22 = DAT_1418d6ab0;
      if (((DAT_1418d6ab8 != 0) &&
          ((*(uint *)(plVar25 + 4) & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
         (plVar22 = *(longlong **)
                     (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
                     (ulonglong)(*(uint *)(plVar25 + 4) & 0xffffff) * 0x10),
         plVar22 == (longlong *)0x0)) {
        plVar22 = DAT_1418d6ab0;
      }
      lVar18 = plVar22[0x198];
      iVar12 = *(int *)(lVar18 + 200);
      iVar1 = *(int *)(lVar18 + 0xcc);
      iVar2 = *(int *)(lVar18 + 0xd0);
      iVar3 = *(int *)(lVar18 + 0xd4);
      iVar4 = *(int *)(lVar18 + 0xd8);
      iVar5 = *(int *)(lVar18 + 0xdc);
      iVar6 = *(int *)(lVar18 + 0xe0);
      iVar7 = *(int *)(lVar18 + 0xe4);
      iVar13 = FUN_140bba2a0(plVar25[2] + 0x30);
      if (iVar13 * 1000 < iVar12 + iVar1 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7)
      goto LAB_1403bd4b5;
      local_e0 = 0xf;
      local_e8 = 0;
      local_f8[0] = 0;
      FUN_1400b0300(local_f8,"SIEGETHEM",9);
      uVar16 = DAT_1416e2360;
      local_d8 = (longlong *)0x0;
      lVar18 = plVar25[5];
      uVar21 = FUN_14083a280();
      FUN_14083b160(uVar21,local_f8,&local_b8,&local_res8,CONCAT44(uVar23,1),lVar8,lVar17,uVar16,
                    lVar18,1,&local_d8,0,0,0xffffffff);
    }
    else {
      local_e8 = 0;
      local_e0 = 0;
      FUN_1400b0200(local_f8,0,0);
      FUN_1400b0300(local_f8,"ATTACKTHEM",10);
      uVar16 = DAT_1416e2360;
      local_d8 = (longlong *)0x0;
      lVar18 = plVar25[5];
      uVar21 = FUN_14083a280();
      FUN_14083b160(uVar21,local_f8,&local_b8,&local_res8,CONCAT44(uVar23,1),lVar8,lVar17,uVar16,
                    lVar18,1,&local_d8,0,0,0xffffffff);
    }
    FUN_1400ae4f0(local_f8);
  }
LAB_1403bd4b5:
  FUN_140269c00(&local_b8);
LAB_1403bd4be:
  FUN_1403aa310(plVar25);
  if (local_res10 != (undefined8 *)0x0) {
    FUN_1400b1860(local_res10);
  }
  return;
}

