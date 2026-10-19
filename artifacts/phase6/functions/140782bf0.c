
void FUN_140782bf0(longlong *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int *piVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 local_res10;
  int local_res18 [2];
  int local_res20 [2];
  longlong local_d0;
  longlong lStack_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  local_res10 = (undefined8 *)param_2;
  if ((DAT_1416e23ba != '\0') && ((longlong *)param_1[0x6e] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)param_1[0x6e] + 0x140))();
  }
  *(undefined1 *)(param_1 + 0x91) = 1;
  if (DAT_1417e3b38 == (undefined8 *)0x0) {
    DAT_1417e3b38 = operator_new(8);
    *DAT_1417e3b38 = &PTR_FUN_14114aef8;
  }
  lVar22 = (**(code **)(*DAT_1417e3b40 + 0x28))();
  param_1[0x92] = lVar22;
  (**(code **)(*param_1 + 0x18))(param_1);
  piVar14 = (int *)((longlong)param_1 + 0x34c);
  iVar5 = FUN_1400eaa50(piVar14);
  dVar26 = DAT_141164d70;
  local_res10 = (undefined8 *)CONCAT44(local_res10._4_4_,iVar5);
  dVar23 = (double)((*piVar14 + -43800000) / 0x18) / DAT_141164d70;
  *piVar14 = *piVar14 + 0x18;
  fVar3 = DAT_141164eac;
  iVar18 = (*piVar14 + -43800000) / 0x18;
  dVar24 = (double)iVar18 / dVar26;
  fVar20 = (float)(int)dVar24 * DAT_141164eac;
  iVar7 = ((int)param_1[0x17] + -43800000) / 0x18;
  dVar25 = (double)iVar7 / dVar26;
  fVar21 = (float)(int)dVar25 * DAT_141164eac;
  uVar8 = FUN_140c84e60();
  FUN_140c84c00(uVar8,((int)dVar24 * 0x16d + (iVar18 - (int)fVar20)) -
                      ((int)dVar25 * 0x16d + (iVar7 - (int)fVar21)));
  iVar18 = (*piVar14 + -43800000) / 0x18;
  dVar24 = (double)iVar18 / dVar26;
  iVar18 = (int)dVar24 * 0x16d + (iVar18 - (int)((float)(int)dVar24 * fVar3));
  local_res18[0] = iVar18;
  lVar22 = param_1[0x33];
  if (param_1[0x33] != 0) {
    do {
      lVar10 = *(longlong *)(lVar22 + 0x68);
      iVar7 = *(int *)(lVar22 + 0x30);
      for (plVar12 = (longlong *)param_1[0x33]; plVar12 != (longlong *)0x0;
          plVar12 = (longlong *)plVar12[0xd]) {
        lVar16 = plVar12[6];
        lVar9 = (**(code **)(*(longlong *)param_1[0x6e] + 0xe0))();
        if ((int)lVar16 == *(int *)(lVar9 + 0xac)) goto LAB_140782e2c;
      }
      plVar12 = param_1 + 0x36;
LAB_140782e2c:
      if (iVar7 != (int)plVar12[6]) {
        iVar7 = (*(int *)(lVar22 + 0x4c) + -43800000) / 0x18;
        dVar24 = (double)iVar7 / dVar26;
        local_res20[0] = (iVar7 - (int)((float)(int)dVar24 * fVar3)) + (int)dVar24 * 0x16d;
        piVar14 = local_res20;
        if (iVar18 <= local_res20[0]) {
          piVar14 = local_res18;
        }
        iVar18 = *piVar14;
        local_res18[0] = iVar18;
      }
      lVar22 = lVar10;
    } while (lVar10 != 0);
    iVar5 = (uint)local_res10;
  }
  piVar14 = (int *)((longlong)param_1 + 0x34c);
  iVar7 = ((int)param_1[0x17] + -43800000) / 0x18;
  dVar24 = (double)iVar7 / dVar26;
  local_res18[0] =
       iVar18 + (-10 - ((int)dVar24 * 0x16d + (iVar7 - (int)((float)(int)dVar24 * fVar3))));
  lVar22 = 0;
  iVar18 = local_res18[0];
  if (local_res18[0] < 0) {
    iVar18 = 0;
  }
  uVar8 = FUN_140c84e60();
  FUN_140c84ce0(uVar8,iVar18);
  lVar10 = FUN_14078a5f0(param_1);
  puVar11 = operator_new(0x88);
  uVar6 = *(undefined4 *)(lVar10 + 0x30);
  local_res10 = puVar11;
  FUN_1401554f0(puVar11,0x2dad);
  *puVar11 = &PTR_FUN_1410fce28;
  *(int *)(puVar11 + 0x10) = *piVar14;
  *(undefined4 *)((longlong)puVar11 + 0x84) = uVar6;
  uVar8 = (**(code **)(*(longlong *)param_1[0x6e] + 0xe0))();
  FUN_140c3d960(uVar8,puVar11);
  if (((char)param_1[0xa0] != '\0') && (*(char *)((longlong)param_1 + 0x501) == '\0')) {
    (**(code **)(*(longlong *)param_1[0x6e] + 800))();
  }
  iVar18 = (*piVar14 + -43800000) / 0x18;
  *(int *)(param_1 + 0x6a) = (int)((double)iVar18 / dVar26);
  uVar6 = FUN_1401ac270(piVar14);
  *(undefined4 *)(param_1 + 0x6b) = uVar6;
  iVar7 = FUN_1400eaa50(piVar14);
  *(int *)(param_1 + 0x6c) = iVar7;
  *(int *)((longlong)param_1 + 0x364) = iVar18;
  iVar18 = (*piVar14 + -43800000) / 0x18;
  dVar24 = (double)iVar18 / dVar26;
  *(int *)(param_1 + 0x6d) = (int)dVar24 * 0x16d + (iVar18 - (int)((float)(int)dVar24 * fVar3));
  iVar18 = (*piVar14 + -43800000) / 0x18;
  *(int *)((longlong)param_1 + 0x35c) =
       iVar18 - (int)((float)(int)((double)iVar18 / dVar26) * fVar3);
  *(undefined4 *)((longlong)param_1 + 0x354) = *(undefined4 *)(&DAT_14106ab88 + (longlong)iVar7 * 4)
  ;
  lVar10 = DAT_1418d2288;
  if (*(char *)(DAT_1418d2288 + 0x68) != '\0') {
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    FUN_140a45830(DAT_1418d2288 + 0x50,&local_b8);
  }
  plVar12 = (longlong *)(**(code **)(*(longlong *)param_1[0x6e] + 0xf8))();
  dVar26 = (double)(**(code **)(*plVar12 + 0x28))(plVar12);
  FUN_140784760(param_1);
  plVar12 = (longlong *)(**(code **)(*(longlong *)param_1[0x6e] + 0xf8))();
  dVar24 = (double)(**(code **)(*plVar12 + 0x28))(plVar12);
  if (*(char *)(lVar10 + 0x68) != '\0') {
    FUN_140a451c0(lVar10,piVar14,SUB84(dVar24 - dVar26,0));
  }
  if (iVar5 != (int)param_1[0x6c]) {
    plVar12 = (longlong *)(**(code **)(*(longlong *)param_1[0x6e] + 0xf8))();
    dVar26 = (double)(**(code **)(*plVar12 + 0x28))(plVar12);
    FUN_140785ed0(param_1);
    plVar12 = (longlong *)(**(code **)(*(longlong *)param_1[0x6e] + 0xf8))();
    dVar24 = (double)(**(code **)(*plVar12 + 0x28))(plVar12);
    if (*(char *)(lVar10 + 0x68) != '\0') {
      FUN_140a45310(lVar10,piVar14,SUB84(dVar24 - dVar26,0));
    }
    (**(code **)(*(longlong *)param_1[0x6e] + 0x208))();
  }
  if ((int)dVar23 != (int)param_1[0x6a]) {
    plVar12 = (longlong *)(**(code **)(*(longlong *)param_1[0x6e] + 0xf8))();
    dVar26 = (double)(**(code **)(*plVar12 + 0x28))(plVar12);
    FUN_140786740(param_1);
    plVar12 = (longlong *)(**(code **)(*(longlong *)param_1[0x6e] + 0xf8))();
    dVar23 = (double)(**(code **)(*plVar12 + 0x28))(plVar12);
    if (*(char *)(lVar10 + 0x68) != '\0') {
      FUN_140a453c0(lVar10,piVar14,SUB84(dVar23 - dVar26,0));
    }
    (**(code **)(*(longlong *)param_1[0x6e] + 0x210))();
  }
LAB_140783220:
  do {
    plVar12 = *(longlong **)(param_1[0x76] + 8);
    if ((plVar12[0x10] == plVar12[0x10]) && (plVar12[0x10] == plVar12[0x22] + *plVar12)) {
      local_d0 = 0;
      lStack_c8 = 0;
      local_c0 = 0;
      puVar1 = (ulonglong *)(param_1 + 0x7b);
      uVar8 = FUN_1400cd7d0(&local_d0,puVar1);
      lVar10 = local_d0;
      iVar18 = (int)(lStack_c8 - local_d0 >> 3);
      if (0 < iVar18) {
        do {
          puVar11 = *(undefined8 **)(lVar10 + lVar22 * 8);
          if (*(char *)(puVar11 + 7) == '\0') {
            plVar2 = (longlong *)param_1[0x7c];
            plVar12 = (longlong *)*puVar1;
            for (plVar15 = plVar12; (plVar15 != plVar2 && ((undefined8 *)*plVar15 != puVar11));
                plVar15 = plVar15 + 1) {
            }
            uVar17 = (longlong)plVar2 - (longlong)plVar12;
            if (((7 < uVar17) && (plVar12 <= plVar15)) && (plVar15 < plVar2)) {
              if (plVar15 != plVar2 + -1) {
                FUN_140e3b2e0(plVar15,plVar15 + 1,(longlong)plVar2 - (longlong)(plVar15 + 1));
                plVar2 = (longlong *)param_1[0x7c];
                uVar17 = (longlong)plVar2 - *puVar1;
              }
              if (7 < uVar17) {
                param_1[0x7c] = (longlong)(plVar2 + -1);
              }
            }
            FUN_14038fda0(puVar11);
            FUN_14038fd00(puVar11);
            *(undefined1 *)(puVar11 + 7) = 0;
            uVar8 = (**(code **)*puVar11)(puVar11,1);
          }
          lVar22 = lVar22 + 1;
        } while (lVar22 < iVar18);
      }
      *(undefined1 *)(param_1 + 0x91) = 0;
      if (*(char *)((longlong)param_1 + 0x50c) != '\0') {
        uVar8 = FUN_140808840(*(undefined8 *)(DAT_1416e3260 + 0x5e8));
      }
      if (lVar10 != 0) {
        FUN_1400b09e0(uVar8,lVar10,local_c0 - lVar10 >> 3);
      }
      return;
    }
    local_res10 = (undefined8 *)0x0;
    lVar10 = param_1[0x76];
    puVar1 = *(ulonglong **)(lVar10 + 8);
    do {
      uVar17 = *puVar1;
      do {
        if (puVar1[0x10] <= uVar17) goto LAB_140783220;
        LOCK();
        uVar13 = *puVar1;
        if (uVar17 == uVar13) {
          *puVar1 = uVar17 + 1;
          uVar13 = uVar17;
        }
        UNLOCK();
        bVar19 = uVar13 != uVar17;
        uVar17 = uVar13;
      } while (bVar19);
      cVar4 = FUN_140793620(puVar1 + (ulonglong)((int)uVar13 * 3 & 7) * 5 + 0x30,&local_res10,uVar13
                            ,lVar10);
    } while (cVar4 == '\0');
    lVar10 = DAT_1417e3b58;
    if (0x1268 < (uint)local_res10) {
      lVar10 = DAT_1417e3b50;
    }
    if (lVar10 != 0) {
      for (plVar12 = *(longlong **)
                      (*(longlong *)(lVar10 + 8) +
                      ((ulonglong)((uint)local_res10 * 0x10000 + local_res10._4_4_) %
                      (ulonglong)*(uint *)(lVar10 + 4)) * 8); plVar12 != (longlong *)0x0;
          plVar12 = (longlong *)plVar12[1]) {
        lVar10 = *plVar12;
        if ((*(int *)(lVar10 + 0x14) == local_res10._4_4_) &&
           (*(uint *)(lVar10 + 0x10) == (uint)local_res10)) goto LAB_140783310;
      }
    }
    lVar10 = 0;
LAB_140783310:
    lVar16 = lVar10 + -0x10;
    if (lVar10 == 0) {
      lVar16 = 0;
    }
    if (lVar16 != 0) {
      FUN_140786dc0(param_1,lVar16,0);
    }
  } while( true );
}

