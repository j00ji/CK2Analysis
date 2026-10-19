
void FUN_14062b800(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  void *pvVar11;
  undefined8 *puVar12;
  int *piVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int *piVar19;
  longlong *plVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  int local_res8;
  undefined1 local_638 [4];
  int iStack_634;
  int iStack_62c;
  undefined8 local_628;
  ulonglong local_620;
  longlong local_618;
  undefined1 local_610 [16];
  undefined8 local_600;
  undefined8 local_5f8;
  undefined1 local_5f0 [16];
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined1 local_5d0 [16];
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined1 local_5b0 [16];
  undefined8 local_5a0;
  undefined8 local_598;
  undefined1 local_590 [16];
  undefined8 local_580;
  undefined8 local_578;
  undefined1 local_570 [16];
  undefined8 local_560;
  undefined8 local_558;
  undefined1 local_550 [16];
  undefined8 local_540;
  undefined8 local_538;
  undefined1 local_530 [16];
  undefined8 local_520;
  undefined8 local_518;
  char local_510 [16];
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined1 *local_4e8;
  undefined1 local_4e0 [32];
  undefined1 local_4c0 [32];
  undefined1 local_4a0 [32];
  undefined1 local_480 [32];
  undefined1 local_460 [32];
  undefined1 local_440 [32];
  undefined1 local_420 [32];
  undefined1 local_400 [32];
  undefined1 local_3e0 [32];
  undefined1 local_3c0 [32];
  undefined1 local_3a0 [32];
  undefined1 local_380 [32];
  undefined1 local_360 [32];
  undefined1 local_340 [160];
  undefined **local_2a0 [12];
  int local_240 [130];
  
  local_4f0 = 0xfffffffffffffffe;
  pvVar11 = operator_new(0x688);
  local_620 = 0xf;
  local_628 = 0;
  auVar6[0xf] = 0;
  auVar6._0_15_ = stack0xfffffffffffff9c9;
  _local_638 = auVar6 << 8;
  FUN_1400b0300(local_638,"UNNAMED_SESSION",0xf);
  puVar12 = operator_new(0x220);
  FUN_140c3a300(puVar12,param_2);
  *puVar12 = &PTR_FUN_14114a900;
  puVar12 = (undefined8 *)FUN_140c35150(pvVar11,puVar12,local_638,1);
  if (0xf < local_620) {
    FUN_1400b08c0(local_638,_local_638,local_620 + 1);
  }
  local_620 = 0xf;
  local_628 = 0;
  auVar7[0xf] = 0;
  auVar7._0_15_ = stack0xfffffffffffff9c9;
  _local_638 = auVar7 << 8;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x218) + 0x3d54);
  while( true ) {
    plVar20 = (longlong *)puVar12[5];
    if ((char)plVar20[0x43] == '\0') {
      iVar10 = (**(code **)(*plVar20 + 8))(plVar20);
      *(int *)(plVar20 + 2) = iVar10;
      if (iVar10 == 0) {
        *(undefined4 *)((longlong)plVar20 + 0x14) = 0x13;
      }
      *(undefined1 *)(plVar20 + 0x43) = 1;
    }
    piVar13 = (int *)((longlong)plVar20 + 0x14);
    lVar21 = 4;
    piVar19 = local_240;
    do {
      uVar15 = *(undefined8 *)(piVar13 + 2);
      *(undefined8 *)piVar19 = *(undefined8 *)piVar13;
      *(undefined8 *)(piVar19 + 2) = uVar15;
      uVar15 = *(undefined8 *)(piVar13 + 6);
      *(undefined8 *)(piVar19 + 4) = *(undefined8 *)(piVar13 + 4);
      *(undefined8 *)(piVar19 + 6) = uVar15;
      uVar15 = *(undefined8 *)(piVar13 + 10);
      *(undefined8 *)(piVar19 + 8) = *(undefined8 *)(piVar13 + 8);
      *(undefined8 *)(piVar19 + 10) = uVar15;
      uVar15 = *(undefined8 *)(piVar13 + 0xe);
      *(undefined8 *)(piVar19 + 0xc) = *(undefined8 *)(piVar13 + 0xc);
      *(undefined8 *)(piVar19 + 0xe) = uVar15;
      uVar15 = *(undefined8 *)(piVar13 + 0x12);
      *(undefined8 *)(piVar19 + 0x10) = *(undefined8 *)(piVar13 + 0x10);
      *(undefined8 *)(piVar19 + 0x12) = uVar15;
      uVar15 = *(undefined8 *)(piVar13 + 0x16);
      *(undefined8 *)(piVar19 + 0x14) = *(undefined8 *)(piVar13 + 0x14);
      *(undefined8 *)(piVar19 + 0x16) = uVar15;
      iVar10 = piVar13[0x19];
      iVar4 = piVar13[0x1a];
      iVar5 = piVar13[0x1b];
      piVar19[0x18] = piVar13[0x18];
      piVar19[0x19] = iVar10;
      piVar19[0x1a] = iVar4;
      piVar19[0x1b] = iVar5;
      piVar1 = piVar19 + 0x20;
      uVar15 = *(undefined8 *)(piVar13 + 0x1e);
      *(undefined8 *)(piVar19 + 0x1c) = *(undefined8 *)(piVar13 + 0x1c);
      *(undefined8 *)(piVar19 + 0x1e) = uVar15;
      piVar13 = piVar13 + 0x20;
      lVar21 = lVar21 + -1;
      piVar19 = piVar1;
    } while (lVar21 != 0);
    *piVar1 = *piVar13;
    if (local_240[0] == 0x13) break;
    FUN_140c36000();
    iVar10 = FID_conflict_atoi((char *)((longlong)puVar12 + 0x34));
    if ((iVar10 != 0) &&
       (iVar10 < (int)(*(longlong *)(param_1 + 0x260) - *(longlong *)(param_1 + 600) >> 3))) {
      plVar20 = (longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 600) + (longlong)iVar10 * 8) + 0x300);
      (**(code **)(*plVar20 + 0x18))(plVar20,puVar12);
    }
  }
  (**(code **)*puVar12)(puVar12,1);
  local_res8 = 1;
  local_618 = (longlong)(int)(*(longlong *)(param_1 + 0x260) - *(longlong *)(param_1 + 600) >> 3);
  lVar21 = 1;
  if (1 < local_618) {
    do {
      lVar23 = 0;
      FUN_140949350(*(undefined8 *)(*(longlong *)(param_1 + 600) + lVar21 * 8));
      FUN_14062c0c0(param_1,local_res8);
      lVar24 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x218) + 0x32c0) + lVar21 * 8);
      _local_638 = *(undefined1 (*) [16])(lVar24 + 0x188);
      uVar25 = local_638._0_8_;
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 600) + lVar21 * 8);
      iVar10 = local_638;
      if ((((((int)*(float *)(lVar3 + 0x1bc) < iVar10) ||
            (local_638._8_4_ + iVar10 < (int)*(float *)(lVar3 + 0x1bc))) ||
           ((int)*(float *)(lVar3 + 0x1c4) < local_638._4_4_)) ||
          (local_638._12_4_ + local_638._4_4_ < (int)*(float *)(lVar3 + 0x1c4))) &&
         ((*(char *)(lVar24 + 100) != '\0' && (cVar8 = FUN_140959950(lVar24), cVar8 == '\0')))) {
        local_4f8 = 0xf;
        local_500 = 0;
        local_510[0] = cVar8;
        FUN_1400b0300(local_510,&DAT_141067458,1);
        local_518 = 0xf;
        local_520 = 0;
        local_530[0] = 0;
        FUN_1400b0300(local_530,&DAT_141067458,1);
        local_4e8 = local_4c0;
        local_538 = 0xf;
        local_540 = 0;
        local_550[0] = 0;
        FUN_1400b0300(local_550,", y: ",5);
        local_558 = 0xf;
        local_560 = 0;
        local_570[0] = 0;
        FUN_1400b0300(local_570," has illegal capital location, x: ");
        local_578 = 0xf;
        local_580 = 0;
        local_590[0] = 0;
        iVar5 = iStack_62c;
        iVar4 = iStack_634;
        iVar22 = (iVar2 - iStack_62c) - iStack_634;
        pcVar14 = (char *)FUN_140d5e4a0(iVar22,local_4e0);
        if (*pcVar14 != '\0') {
          lVar24 = -1;
          do {
            lVar24 = lVar24 + 1;
          } while (pcVar14[lVar24] != '\0');
        }
        FUN_1400b0300(local_590,pcVar14);
        local_598 = 0xf;
        local_5a0 = 0;
        local_5b0[0] = 0;
        pcVar14 = (char *)FUN_140d5e4a0(iVar22 - iVar5,local_4e0);
        if (*pcVar14 != '\0') {
          lVar23 = -1;
          do {
            lVar23 = lVar23 + 1;
          } while (pcVar14[lVar23] != '\0');
        }
        FUN_1400b0300(local_5b0,pcVar14,lVar23);
        uVar15 = FUN_140d5f250(local_5b0,local_360,local_510);
        puVar12 = (undefined8 *)FUN_140d5f250(uVar15,local_380);
        local_5b8 = 0xf;
        lVar24 = 0;
        local_5c0 = 0;
        local_5d0[0] = 0;
        pcVar14 = (char *)FUN_140d5e4a0(iVar4 + iVar10,local_4e0);
        if (*pcVar14 != '\0') {
          lVar23 = -1;
          do {
            lVar23 = lVar23 + 1;
          } while (pcVar14[lVar23] != '\0');
        }
        FUN_1400b0300(local_5d0,pcVar14);
        local_5d8 = 0xf;
        local_5e0 = 0;
        local_5f0[0] = 0;
        pcVar14 = (char *)FUN_140d5e4a0(uVar25 & 0xffffffff,local_4e0);
        if (*pcVar14 != '\0') {
          lVar24 = -1;
          do {
            lVar24 = lVar24 + 1;
          } while (pcVar14[lVar24] != '\0');
        }
        FUN_1400b0300(local_5f0,pcVar14,lVar24);
        uVar15 = FUN_140d5f250(local_5f0,local_3a0,local_530);
        puVar16 = (undefined8 *)FUN_140d5f250(uVar15,local_3c0,local_5d0);
        uVar15 = FUN_140d5f020(local_3e0,(float)iVar2 - *(float *)(lVar3 + 0x1c4));
        uVar17 = FUN_140d5f020(local_400);
        uVar18 = FUN_140d5ebc0(local_420,local_res8);
        local_5f8 = 0xf;
        local_600 = 0;
        local_610[0] = 0;
        FUN_1400b0300(local_610,"Province ",9);
        uVar18 = FUN_140d5f250(local_610,local_440,uVar18);
        uVar18 = FUN_140d5f250(uVar18,local_460,local_570);
        uVar17 = FUN_140d5f250(uVar18,local_480,uVar17);
        uVar17 = FUN_140d5f250(uVar17,local_4a0,local_550);
        uVar15 = FUN_140d5f250(uVar17,local_4c0,uVar15);
        uVar17 = FUN_1400ae570(local_340,
                               "D:\\jenkins\\workspace\\ck2-steam\\ck2\\source\\eu3graphicalmap.cpp"
                               ,0x94d,0x10006);
        uVar15 = FUN_140d64fe0(uVar17,uVar15);
        uVar15 = FUN_1400cdc40(uVar15,"(Bounds x: ");
        if (0xf < (ulonglong)puVar16[3]) {
          puVar16 = (undefined8 *)*puVar16;
        }
        uVar15 = FUN_1400cdc40(uVar15,puVar16);
        uVar15 = FUN_1400cdc40(uVar15,", y: ");
        if (0xf < (ulonglong)puVar12[3]) {
          puVar12 = (undefined8 *)*puVar12;
        }
        uVar15 = FUN_1400cdc40(uVar15,puVar12);
        plVar20 = (longlong *)FUN_1400cdc40(uVar15,&DAT_141070c9c);
        uVar9 = FUN_1400b14a0((longlong)*(int *)(*plVar20 + 4) + (longlong)plVar20,10);
        FUN_1400b1350(plVar20,uVar9);
        FUN_1400b0b20(plVar20);
        FUN_140d64ca0(local_2a0);
        local_2a0[0] = std::ios_base::vftable;
        std::ios_base::_Ios_base_dtor((ios_base *)local_2a0);
        FUN_1400ae4f0(local_4a0);
        FUN_1400ae4f0(local_480);
        FUN_1400ae4f0(local_460);
        FUN_1400ae4f0(local_440);
        FUN_1400ae4f0(local_610);
        FUN_1400ae4f0(local_420);
        FUN_1400ae4f0(local_400);
        FUN_1400ae4f0(local_3e0);
        FUN_1400ae4f0(local_3c0);
        FUN_1400ae4f0(local_3a0);
        FUN_1400ae4f0(local_5f0);
        FUN_1400ae4f0(local_5d0);
        FUN_1400ae4f0(local_380);
        FUN_1400ae4f0(local_360);
        FUN_1400ae4f0(local_5b0);
        FUN_1400ae4f0(local_590);
        FUN_1400ae4f0(local_570);
        FUN_1400ae4f0(local_550);
        FUN_1400ae4f0(local_530);
        FUN_1400ae4f0(local_510);
      }
      local_res8 = local_res8 + 1;
      lVar21 = lVar21 + 1;
    } while (lVar21 < local_618);
  }
  return;
}

