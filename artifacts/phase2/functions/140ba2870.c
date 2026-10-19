
void FUN_140ba2870(longlong *param_1,char param_2)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  undefined **ppuVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  int *piVar21;
  void *pvVar22;
  void *pvVar23;
  longlong *plVar24;
  code *pcVar25;
  uint uVar26;
  undefined4 uVar27;
  void *local_res8;
  char local_res10;
  void *local_res18;
  longlong local_res20;
  undefined8 in_stack_fffffffffffffc68;
  undefined4 uVar29;
  longlong lVar28;
  undefined8 in_stack_fffffffffffffc88;
  undefined8 in_stack_fffffffffffffc90;
  undefined4 uVar32;
  undefined8 uVar30;
  undefined4 *puVar31;
  undefined1 local_348;
  undefined7 uStack_347;
  undefined8 local_338;
  ulonglong local_330;
  void *local_328;
  void *pvStack_320;
  int local_318;
  undefined1 local_314;
  undefined1 local_310;
  undefined7 uStack_30f;
  undefined8 local_300;
  ulonglong local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined1 local_2e0;
  undefined7 uStack_2df;
  undefined8 local_2d0;
  ulonglong local_2c8;
  undefined1 local_2c0 [72];
  undefined **local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined **local_1d8;
  undefined4 local_1d0;
  undefined ***local_1c8;
  undefined ***local_1c0;
  undefined ***local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined2 local_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined **local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined **local_c8;
  undefined4 local_c0;
  undefined ***local_b8;
  undefined ***local_b0;
  undefined ***local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined2 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  uVar14 = 0;
  local_res18 = (void *)((ulonglong)local_res18 & 0xffffffff00000000);
  local_res8 = (void *)((ulonglong)local_res8 & 0xffffffffffffff00);
  local_res10 = param_2;
  if (param_1[0x38] != 0) {
    FUN_140ba5040();
  }
  if ((param_1[0xd] != 0) && (*(int *)(param_1[0xd] + 8) != 0)) {
    return;
  }
  if ((int)param_1[9] < 1) {
    return;
  }
  cVar7 = (**(code **)(*param_1 + 0x68))(param_1);
  if (((cVar7 == '\0') ||
      (lVar11 = (**(code **)(*param_1 + 0x50))(param_1), *(longlong *)(lVar11 + 0x230) == 0)) ||
     (lVar11 = (**(code **)(*param_1 + 0x50))(param_1),
     *(int *)(*(longlong *)(lVar11 + 0x230) + 0xa0) < 1)) {
    uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffffc68 >> 0x20);
    uVar32 = (undefined4)((ulonglong)in_stack_fffffffffffffc90 >> 0x20);
    cVar7 = '\0';
    if (0 < (int)param_1[0x14]) {
      lVar11 = FUN_140822200(DAT_1416e32d8,*(undefined4 *)param_1[0x12]);
      uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffffc68 >> 0x20);
      uVar32 = (undefined4)((ulonglong)in_stack_fffffffffffffc90 >> 0x20);
      *(int *)(param_1 + 0x16) = (int)param_1[0x16] + (int)param_1[0x43];
      param_2 = local_res10;
      local_res20 = lVar11;
      if (*(int *)((longlong)param_1 + 0x21c) < (int)param_1[0x16]) {
        lVar12 = param_1[0x12];
        if (lVar12 != 0) {
          if (*(char *)((longlong)param_1 + 0xa4) == '\0') {
            lVar19 = *(longlong *)(lVar12 + 0x10);
            param_1[0x12] = lVar19;
            if (lVar19 == 0) {
              param_1[0x13] = 0;
            }
            else {
              *(undefined8 *)(lVar19 + 8) = 0;
            }
            thunk_FUN_140e1c5e4(lVar12,0x20);
            *(int *)(param_1 + 0x14) = (int)param_1[0x14] + -1;
          }
          else {
            *(undefined1 *)(lVar12 + 0x18) = 1;
          }
        }
        *(undefined4 *)(param_1 + 0x16) = 0;
        if (*(int *)((longlong)param_1 + 0xb4) == 2) {
          *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
          *(undefined1 *)((longlong)param_1 + 0x221) = 0;
        }
        cVar7 = (**(code **)(*param_1 + 0x68))(param_1);
        if ((cVar7 != '\0') &&
           (lVar12 = (**(code **)(*param_1 + 0x50))(param_1), *(longlong *)(lVar12 + 0x230) != 0)) {
          param_1[0x11] = 0;
          lVar12 = (**(code **)(*param_1 + 0x50))(param_1);
          FUN_140ba7d10(*(undefined8 *)(lVar12 + 0x230),param_1);
        }
        cVar7 = (**(code **)(*param_1 + 0x68))(param_1);
        if ((cVar7 != '\0') && (*(char *)(*(longlong *)(lVar11 + 0xf0) + 100) == '\0')) {
          iVar10 = 1000000000;
          plVar24 = *(longlong **)(lVar11 + 0xcc0);
          if (plVar24 != (longlong *)0x0) {
            do {
              plVar3 = (longlong *)*plVar24;
              plVar24 = (longlong *)plVar24[2];
              cVar7 = (**(code **)(*plVar3 + 0x70))(plVar3);
              if (cVar7 != '\0') {
                uVar13 = (**(code **)(*plVar3 + 0x60))(plVar3);
                cVar7 = FUN_140ba7980(uVar13,param_1);
                if (cVar7 != '\0') {
                  uVar13 = (**(code **)(*plVar3 + 0x60))(plVar3);
                  iVar9 = FUN_140b9f380(uVar13);
                  cVar7 = (**(code **)(*param_1 + 0x68))(param_1);
                  if (cVar7 != '\0') {
                    local_res18 = (void *)CONCAT44(local_res18._4_4_,(int)plVar3[4]);
                    iVar2 = *(int *)((longlong)plVar3 + 0x24);
                    lVar11 = (**(code **)(*param_1 + 0x50))(param_1);
                    if ((*(int *)(lVar11 + 0x23c) == iVar2) &&
                       (*(int *)(lVar11 + 0x238) == (int)local_res18)) {
                      iVar9 = iVar9 + 1000000;
                    }
                  }
                  if (iVar9 < iVar10) {
                    uVar14 = (**(code **)(*plVar3 + 0x60))(plVar3);
                    iVar10 = iVar9;
                  }
                }
              }
              uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffffc68 >> 0x20);
              uVar32 = (undefined4)((ulonglong)in_stack_fffffffffffffc90 >> 0x20);
            } while (plVar24 != (longlong *)0x0);
            if (uVar14 != 0) {
              if (param_1[0x2e] == 0) {
                lVar11 = FUN_1400d3090(param_1 + 0x2d);
                param_1[0x2c] = lVar11;
                param_1[0x2e] = lVar11;
                if (lVar11 == 0) {
                  param_1[0x2e] = DAT_1416e2360;
                }
              }
              if (param_1[0x2e] == *(longlong *)(DAT_1416e3260 + 0x3f0)) {
                local_res8 = (void *)CONCAT71(local_res8._1_7_,1);
                local_328 = (void *)0x0;
                pvStack_320 = (void *)0x0;
                local_318 = 0;
                local_314 = 0;
                FUN_140234050(*(longlong *)(DAT_1416e3260 + 0x3f0),&local_328);
                local_2f8 = 0xf;
                local_300 = 0;
                local_310 = 0;
                FUN_1400b0300(&local_310,"MESSAGE_HEAD_MARS",0x11);
                local_2c8 = 0xf;
                local_2d0 = 0;
                local_2e0 = 0;
                FUN_1400b0300(&local_2e0,"MESSENGER",9);
                uVar27 = FUN_14083a280();
                uVar13 = FUN_1401adec0(uVar27,&local_348,&local_310);
                uVar13 = FUN_1401adde0(local_2c0,&local_2e0,uVar13);
                pvVar22 = pvStack_320;
                pvVar15 = operator_new(0x58);
                local_res18 = pvVar15;
                FUN_1402688d0(pvVar15,uVar13);
                iVar10 = local_318;
                *(void **)((longlong)pvVar15 + 0x40) = pvVar22;
                *(undefined8 *)((longlong)pvVar15 + 0x48) = 0;
                *(undefined1 *)((longlong)pvVar15 + 0x50) = 0;
                iVar9 = local_318 + 1;
                pvVar23 = pvVar15;
                if (local_318 != 0) {
                  *(void **)((longlong)pvVar22 + 0x48) = pvVar15;
                  pvVar23 = local_328;
                }
                local_328 = pvVar23;
                pvVar22 = local_328;
                pvStack_320 = pvVar15;
                local_318 = iVar9;
                FUN_1401b84e0(local_2c0);
                if (0xf < local_330) {
                  FUN_1400b08c0(&local_348,CONCAT71(uStack_347,local_348),local_330 + 1);
                }
                local_330 = 0xf;
                local_338 = 0;
                local_348 = 0;
                if (0xf < local_2c8) {
                  FUN_1400b08c0(&local_2e0,CONCAT71(uStack_2df,local_2e0),local_2c8 + 1);
                }
                local_2c8 = 0xf;
                local_2d0 = 0;
                local_2e0 = 0;
                if (0xf < local_2f8) {
                  FUN_1400b08c0(&local_310,CONCAT71(uStack_30f,local_310),local_2f8 + 1);
                }
                cVar7 = (**(code **)(*param_1 + 0x68))(param_1);
                if (cVar7 == '\0') {
                  local_330 = 0xf;
                  local_338 = 0;
                  local_348 = 0;
                  FUN_1400b0300(&local_348,&DAT_141075020,4);
                  uVar13 = FUN_140698f70(&local_310,&DAT_141142e74);
                  uVar13 = FUN_1401adde0(local_2c0,&local_348,uVar13);
                  pvVar16 = operator_new(0x58);
                  local_res18 = pvVar16;
                  FUN_1402688d0(pvVar16,uVar13);
                  *(void **)((longlong)pvVar16 + 0x40) = pvVar15;
                  *(undefined8 *)((longlong)pvVar16 + 0x48) = 0;
                  *(undefined1 *)((longlong)pvVar16 + 0x50) = 0;
                  local_318 = iVar10 + 2;
                  pvVar23 = pvVar16;
                  pvVar17 = pvVar16;
                  if (iVar9 != 0) {
                    *(void **)((longlong)pvVar15 + 0x48) = pvVar16;
                    pvVar23 = pvVar22;
                    pvVar17 = local_328;
                  }
                  local_328 = pvVar17;
                  pvStack_320 = pvVar16;
                  FUN_1401b84e0(local_2c0);
                  FUN_1400ae4f0(&local_310);
                  FUN_1400ae4f0(&local_348);
                }
                else {
                  local_2f8 = 0xf;
                  local_300 = 0;
                  local_310 = 0;
                  FUN_1400b0300(&local_310,&DAT_141075020,4);
                  uVar13 = FUN_140698f70(&local_348,&DAT_141072128);
                  uVar13 = FUN_1401adde0(local_2c0,&local_310,uVar13);
                  pvVar16 = operator_new(0x58);
                  local_res18 = pvVar16;
                  FUN_1402688d0(pvVar16,uVar13);
                  *(void **)((longlong)pvVar16 + 0x40) = pvVar15;
                  *(undefined8 *)((longlong)pvVar16 + 0x48) = 0;
                  *(undefined1 *)((longlong)pvVar16 + 0x50) = 0;
                  local_318 = iVar10 + 2;
                  pvVar23 = pvVar16;
                  pvVar17 = pvVar16;
                  if (iVar9 != 0) {
                    *(void **)((longlong)pvVar15 + 0x48) = pvVar16;
                    pvVar23 = pvVar22;
                    pvVar17 = local_328;
                  }
                  local_328 = pvVar17;
                  pvStack_320 = pvVar16;
                  FUN_1401b84e0(local_2c0);
                  if (0xf < local_330) {
                    FUN_1400b08c0(&local_348,CONCAT71(uStack_347,local_348),local_330 + 1);
                  }
                  local_330 = 0xf;
                  local_338 = 0;
                  local_348 = 0;
                  if (0xf < local_2f8) {
                    FUN_1400b08c0(&local_310,CONCAT71(uStack_30f,local_310),local_2f8 + 1);
                  }
                }
                local_330 = 0xf;
                local_338 = 0;
                local_348 = 0;
                FUN_1400b0300(&local_348,&DAT_1410725c8,4);
                if (*(code **)(*param_1 + 0x30) == (code *)&LAB_1401add00) {
                  plVar24 = param_1 + 0x17;
                }
                else {
                  plVar24 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
                }
                uVar13 = FUN_1401adde0(local_2c0,&local_348,plVar24);
                pvVar17 = operator_new(0x58);
                local_res18 = pvVar17;
                FUN_1402688d0(pvVar17,uVar13);
                *(void **)((longlong)pvVar17 + 0x40) = pvVar16;
                *(undefined8 *)((longlong)pvVar17 + 0x48) = 0;
                *(undefined1 *)((longlong)pvVar17 + 0x50) = 0;
                pvVar22 = pvVar17;
                pvVar15 = pvVar17;
                if (iVar10 != -2) {
                  *(void **)((longlong)pvVar16 + 0x48) = pvVar17;
                  pvVar22 = pvVar23;
                  pvVar15 = local_328;
                }
                local_328 = pvVar15;
                pvStack_320 = pvVar17;
                local_318 = iVar10 + 3;
                FUN_1401b84e0(local_2c0);
                FUN_1400ae4f0(&local_348);
                local_330 = 0xf;
                local_338 = 0;
                local_348 = 0;
                FUN_1400b0300(&local_348,&DAT_14107210c,4);
                if (*(undefined ***)(local_res20 + 0x10) == &PTR_LAB_1410eea48) {
                  lVar11 = *(longlong *)(local_res20 + 0xf0) + 0x10;
                }
                else {
                  lVar11 = (*(code *)(*(undefined ***)(local_res20 + 0x10))[6])();
                }
                uVar13 = FUN_1401adde0(local_2c0,&local_348,lVar11);
                pvVar16 = operator_new(0x58);
                local_res18 = pvVar16;
                FUN_1402688d0(pvVar16,uVar13);
                *(void **)((longlong)pvVar16 + 0x40) = pvVar17;
                *(undefined8 *)((longlong)pvVar16 + 0x48) = 0;
                *(undefined1 *)((longlong)pvVar16 + 0x50) = 0;
                local_318 = iVar10 + 4;
                pvVar23 = pvVar16;
                pvVar15 = pvVar16;
                if (iVar10 + 3 != 0) {
                  *(void **)((longlong)pvVar17 + 0x48) = pvVar16;
                  pvVar23 = pvVar22;
                  pvVar15 = local_328;
                }
                local_328 = pvVar15;
                pvStack_320 = pvVar16;
                FUN_1401b84e0(local_2c0);
                FUN_1400ae4f0(&local_348);
                pvVar22 = *(void **)(DAT_1416e3260 + 0x3f0);
                local_330 = 0xf;
                local_338 = 0;
                local_348 = 0;
                local_res18 = pvVar22;
                FUN_1400b0300(&local_348,"UNITARRIVED",0xb);
                lVar12 = DAT_1416e2360;
                local_2f0 = *(undefined4 *)(uVar14 + 0x20);
                local_2ec = *(undefined4 *)(uVar14 + 0x24);
                lVar11 = param_1[0x10];
                uVar18 = FUN_14083a280();
                uVar30 = CONCAT44(uVar32,3);
                uVar13 = CONCAT44(uVar29,1);
                FUN_14083b160(uVar18,&local_348,&local_328,&local_res18,uVar13,pvVar22,lVar12,lVar12
                              ,lVar11,uVar30,&local_2f0,0,0,0xffffffff);
                FUN_1400ae4f0(&local_348);
                while( true ) {
                  uVar29 = (undefined4)((ulonglong)uVar13 >> 0x20);
                  uVar32 = (undefined4)((ulonglong)uVar30 >> 0x20);
                  if (pvVar23 == (void *)0x0) break;
                  pvVar22 = *(void **)((longlong)pvVar23 + 0x48);
                  FUN_1401b84e0(pvVar23);
                  thunk_FUN_140e1c5e4(pvVar23,0x58);
                  pvVar23 = pvVar22;
                }
              }
              FUN_140ba7c00(uVar14,param_1);
              param_1[0x11] = param_1[0x10];
              FUN_140b98e30(param_1,local_res20);
              FUN_1400b1970(param_1 + 0x12);
              if (((char)param_1[1] != '\0') &&
                 ((**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0x1b8))
                            (*(longlong **)(DAT_1416e3260 + 0x370),0), *(char *)(uVar14 + 8) == '\0'
                 )) {
                (**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0x1a0))
                          (*(longlong **)(DAT_1416e3260 + 0x370),uVar14);
              }
              param_2 = local_res10;
              cVar7 = (char)local_res8;
              goto LAB_140ba3c43;
            }
          }
          if (1 < DAT_1417e3b70) {
            if (*(code **)(*param_1 + 0x40) == (code *)&LAB_1401add00) {
              plVar24 = param_1 + 0x17;
            }
            else {
              plVar24 = (longlong *)(**(code **)(*param_1 + 0x40))(param_1);
            }
            uVar13 = FUN_1400ae570(&local_278,
                                   "D:\\jenkins\\workspace\\ck2-steam\\ck2\\source\\unit.cpp",0xdf5,
                                   6);
            uVar29 = *(undefined4 *)((longlong)param_1 + 0x24);
            FUN_140d652c0(uVar13," CancelMovement: ",0x11);
            if (0xf < (ulonglong)plVar24[3]) {
              plVar24 = (longlong *)*plVar24;
            }
            uVar13 = FUN_1400cdc40(uVar13,plVar24);
            uVar13 = FUN_1400cdc40(uVar13,&DAT_141075fa4);
            plVar24 = (longlong *)FUN_140268040(uVar13,uVar29);
            uVar8 = FUN_1400b14a0((longlong)*(int *)(*plVar24 + 4) + (longlong)plVar24,10);
            FUN_1400b1350(plVar24,uVar8);
            FUN_1400b0b20(plVar24);
            FUN_140d64ca0(&local_1d8);
            local_1d8 = std::ios_base::vftable;
            std::ios_base::_Ios_base_dtor((ios_base *)&local_1d8);
          }
          goto LAB_140ba322a;
        }
        cVar7 = (**(code **)(*param_1 + 0x80))(param_1,lVar11);
        uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffffc68 >> 0x20);
        uVar32 = (undefined4)((ulonglong)in_stack_fffffffffffffc90 >> 0x20);
        if (cVar7 == '\0') {
          FUN_140ba15e0(param_1,1);
        }
        else if (lVar11 != param_1[0x10]) {
          param_1[0x11] = param_1[0x10];
          FUN_140b98e30(param_1,lVar11);
          if ((param_1[0xd] == 0) || (*(int *)(param_1[0xd] + 8) == 0)) {
            FUN_1403bc0c0(DAT_1416e3260 + 0x230,param_1,param_1[0x10]);
          }
          cVar7 = (**(code **)(*param_1 + 0x68))(param_1);
          uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffffc68 >> 0x20);
          uVar32 = (undefined4)((ulonglong)in_stack_fffffffffffffc90 >> 0x20);
          if (cVar7 == '\0') {
            lVar11 = (**(code **)(*param_1 + 0x60))(param_1);
            uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffffc68 >> 0x20);
            uVar32 = (undefined4)((ulonglong)in_stack_fffffffffffffc90 >> 0x20);
            if (((param_1[0x10] != 0) &&
                (*(char *)(*(longlong *)(param_1[0x10] + 0xf0) + 100) != '\0')) &&
               (0 < *(int *)(lVar11 + 0x248))) {
              if (param_1[0x2e] == 0) {
                lVar12 = FUN_1400d3090(param_1 + 0x2d);
                param_1[0x2c] = lVar12;
                param_1[0x2e] = lVar12;
                if (lVar12 == 0) {
                  param_1[0x2e] = DAT_1416e2360;
                }
              }
              uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffffc68 >> 0x20);
              uVar32 = (undefined4)((ulonglong)in_stack_fffffffffffffc90 >> 0x20);
              local_res20 = param_1[0x2e];
              bVar5 = false;
              lVar12 = param_1[0x10];
              iVar10 = (int)(*(longlong *)(lVar12 + 0xcf0) - *(longlong *)(lVar12 + 0xce8) >> 2);
              if (0 < iVar10) {
                do {
                  uVar27 = (undefined4)((ulonglong)in_stack_fffffffffffffc88 >> 0x20);
                  pcVar25 = (code *)&LAB_1403827a0;
                  if (bVar5) goto LAB_140ba343d;
                  plVar24 = (longlong *)
                            FUN_1400cd630(*(longlong *)(lVar12 + 0xce8) + (longlong)(int)uVar14 * 4)
                  ;
                  if (*(code **)(*plVar24 + 0x30) == pcVar25) {
                    if (((*(int *)((longlong)plVar24 + 0x2c) - 3U & 0xfffffffa) != 0) ||
                       (*(int *)((longlong)plVar24 + 0x2c) == 4)) goto LAB_140ba33cd;
LAB_140ba33f6:
                    lVar19 = plVar24[8];
                  }
                  else {
                    cVar7 = (**(code **)(*plVar24 + 0x30))(plVar24);
                    if (cVar7 != '\0') goto LAB_140ba33f6;
LAB_140ba33cd:
                    lVar19 = DAT_1416e2360;
                    if (((longlong *)plVar24[6] != (longlong *)0x0) &&
                       (cVar7 = (**(code **)(*(longlong *)plVar24[6] + 0x40))(),
                       lVar19 = DAT_1416e2360, cVar7 != '\0')) {
                      lVar19 = *(longlong *)(plVar24[6] + 0x498);
                    }
                  }
                  lVar19 = FUN_1400b1ba0(lVar19,0);
                  lVar20 = FUN_1400b1ba0(local_res20);
                  uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffffc68 >> 0x20);
                  uVar32 = (undefined4)((ulonglong)in_stack_fffffffffffffc90 >> 0x20);
                  uVar27 = (undefined4)((ulonglong)in_stack_fffffffffffffc88 >> 0x20);
                  if (lVar19 == lVar20) {
                    bVar5 = true;
                  }
                  uVar26 = (int)uVar14 + 1;
                  uVar14 = (ulonglong)uVar26;
                } while ((int)uVar26 < iVar10);
                if (bVar5) {
LAB_140ba343d:
                  piVar21 = (int *)FUN_140ba8230(lVar11,&local_res8);
                  iVar10 = *piVar21;
                  if (iVar10 == 0) {
                    iVar10 = -1;
                  }
                  else {
                    iVar9 = *(int *)(lVar11 + 0x248);
                    if (iVar9 + 0x189373U < 0x39580e) {
                      iVar10 = (iVar9 * 1000) / iVar10;
                    }
                    else {
                      iVar10 = (int)(((longlong)iVar9 * 1000) / (longlong)iVar10);
                    }
                  }
                  iVar9 = *(int *)(lVar11 + 0x248);
                  lVar12 = (longlong)iVar9;
                  local_328 = (void *)0x0;
                  pvStack_320 = (void *)0x0;
                  local_318 = 0;
                  local_314 = 0;
                  if (iVar10 < 500) {
                    uVar13 = FUN_140698f70(&local_310,"LOOT_SHIP_RETURNED_AMOUNT_EMPTY");
                    local_res18 = (void *)CONCAT44(local_res18._4_4_,2);
                  }
                  else {
                    uVar13 = FUN_140698f70(&local_2e0,"LOOT_SHIP_RETURNED_AMOUNT_FULL");
                    local_res18 = (void *)CONCAT44(local_res18._4_4_,1);
                  }
                  local_330 = 0xf;
                  local_338 = 0;
                  local_348 = 0;
                  FUN_1400b0300(&local_348,"AMOUNT",6);
                  uVar13 = FUN_1401adde0(local_2c0,&local_348,uVar13);
                  pvVar22 = operator_new(0x58);
                  local_res8 = pvVar22;
                  FUN_1402688d0(pvVar22,uVar13);
                  *(undefined8 *)((longlong)pvVar22 + 0x40) = 0;
                  *(undefined8 *)((longlong)pvVar22 + 0x48) = 0;
                  *(undefined1 *)((longlong)pvVar22 + 0x50) = 0;
                  local_318 = 1;
                  local_328 = pvVar22;
                  pvStack_320 = pvVar22;
                  FUN_1401b84e0(local_2c0);
                  FUN_1400ae4f0(&local_348);
                  if (iVar10 < 500) {
                    FUN_1400ae4f0(&local_310);
                  }
                  else {
                    FUN_1400ae4f0(&local_2e0);
                  }
                  local_330 = 0xf;
                  local_338 = 0;
                  local_348 = 0;
                  FUN_1400b0300(&local_348,"OWNER",5);
                  lVar6 = local_res20;
                  uVar13 = FUN_1401e4e40(local_res20,&local_310,0);
                  uVar13 = FUN_1401adde0(local_2c0,&local_348,uVar13);
                  pvVar23 = operator_new(0x58);
                  local_res8 = pvVar23;
                  FUN_1402688d0(pvVar23,uVar13);
                  *(void **)((longlong)pvVar23 + 0x40) = pvVar22;
                  *(undefined8 *)((longlong)pvVar23 + 0x48) = 0;
                  *(undefined1 *)((longlong)pvVar23 + 0x50) = 0;
                  local_318 = 2;
                  *(void **)((longlong)pvVar22 + 0x48) = pvVar23;
                  pvStack_320 = pvVar23;
                  FUN_1401b84e0(local_2c0);
                  FUN_1400ae4f0(&local_310);
                  FUN_1400ae4f0(&local_348);
                  local_330 = 0xf;
                  local_338 = 0;
                  local_348 = 0;
                  FUN_1400b0300(&local_348,&DAT_141076c14,4);
                  local_res8 = (void *)CONCAT44(local_res8._4_4_,iVar9);
                  uVar13 = FUN_140d5ede0(&local_310,&local_res8,2);
                  uVar13 = FUN_1401adde0(local_2c0,&local_348,uVar13);
                  pvVar22 = operator_new(0x58);
                  local_res8 = pvVar22;
                  FUN_1402688d0(pvVar22,uVar13);
                  *(void **)((longlong)pvVar22 + 0x40) = pvVar23;
                  *(undefined8 *)((longlong)pvVar22 + 0x48) = 0;
                  *(undefined1 *)((longlong)pvVar22 + 0x50) = 0;
                  local_318 = 3;
                  *(void **)((longlong)pvVar23 + 0x48) = pvVar22;
                  pvStack_320 = pvVar22;
                  FUN_1401b84e0(local_2c0);
                  FUN_1400ae4f0(&local_310);
                  FUN_1400ae4f0(&local_348);
                  local_330 = 0xf;
                  local_338 = 0;
                  local_348 = 0;
                  FUN_1400b0300(&local_348,"PRESTIGE",8);
                  local_res8 = (void *)CONCAT44(local_res8._4_4_,
                                                (int)((DAT_1416e26ec * lVar12) / 1000));
                  uVar13 = FUN_140d5ede0(&local_310,&local_res8,2);
                  uVar13 = FUN_1401adde0(local_2c0,&local_348,uVar13);
                  pvVar23 = operator_new(0x58);
                  local_res8 = pvVar23;
                  FUN_1402688d0(pvVar23,uVar13);
                  *(void **)((longlong)pvVar23 + 0x40) = pvVar22;
                  *(undefined8 *)((longlong)pvVar23 + 0x48) = 0;
                  *(undefined1 *)((longlong)pvVar23 + 0x50) = 0;
                  local_318 = 4;
                  *(void **)((longlong)pvVar22 + 0x48) = pvVar23;
                  pvStack_320 = pvVar23;
                  FUN_1401b84e0(local_2c0);
                  FUN_1400ae4f0(&local_310);
                  FUN_1400ae4f0(&local_348);
                  local_330 = 0xf;
                  local_338 = 0;
                  local_348 = 0;
                  FUN_1400b0300(&local_348,"LOOT_SHIP_RETURNED",0x12);
                  lVar20 = DAT_1416e2360;
                  local_2f0 = *(undefined4 *)(lVar11 + 0x20);
                  local_2ec = *(undefined4 *)(lVar11 + 0x24);
                  lVar19 = param_1[0x10];
                  uVar13 = FUN_14083a280();
                  puVar31 = &local_2f0;
                  lVar28 = lVar6;
                  FUN_14083b0c0(uVar13,&local_348,&local_328,lVar6,lVar6,lVar20,lVar20,lVar19,
                                CONCAT44(uVar27,3),puVar31);
                  uVar29 = (undefined4)((ulonglong)lVar28 >> 0x20);
                  uVar32 = (undefined4)((ulonglong)puVar31 >> 0x20);
                  FUN_1400ae4f0(&local_348);
                  local_res8 = (void *)((lVar12 << 0x1e) / 0x1f40000);
                  FUN_14024ab30(lVar6,&local_res8);
                  local_res8._0_4_ = (int)((DAT_1416e26ec * lVar12) / 1000);
                  FUN_1401eee50(lVar6,&local_res8);
                  local_res8 = (void *)CONCAT44(local_res8._4_4_,-*(int *)(lVar11 + 0x248));
                  FUN_140ba81c0(lVar11,&local_res8);
                  local_270 = 0x18e;
                  local_268 = 0;
                  local_260 = 0xffffffffffffffff;
                  local_258 = DAT_1416e3250;
                  local_250 = DAT_1416e3248;
                  local_248 = 0xffffffffffffffff;
                  local_240 = 0xffffffffffffffff;
                  local_238 = 0xffffffff;
                  local_278 = &PTR_FUN_1410655c8;
                  local_230 = DAT_1416e3238;
                  local_228 = DAT_1416e3238;
                  local_220 = DAT_1416e3228;
                  local_218 = DAT_1416e3228;
                  local_210 = 0;
                  local_208 = 0;
                  uStack_200 = 0;
                  local_1f8 = 0;
                  uStack_1f0 = 0;
                  local_1e8 = 0;
                  uStack_1e0 = 0;
                  local_1d8 = DAT_1416e3230;
                  local_1d0 = 0;
                  local_1c8 = &local_278;
                  local_1c0 = &local_278;
                  local_1b8 = &local_278;
                  local_1ac = 0;
                  local_1a4 = 1;
                  local_1a0 = 0;
                  local_198 = 0;
                  local_190 = 0;
                  local_188 = 0;
                  uStack_180 = 0;
                  local_178 = 0;
                  local_1b0 = 0;
                  local_a0 = FUN_140c4a7f0();
                  local_160 = 0x18e;
                  local_158 = 0;
                  local_150 = 0xffffffffffffffff;
                  local_148 = DAT_1416e3250;
                  local_140 = DAT_1416e3248;
                  local_138 = 0xffffffffffffffff;
                  local_130 = 0xffffffffffffffff;
                  local_128 = 0xffffffff;
                  local_168 = &PTR_FUN_1410655c8;
                  local_120 = DAT_1416e3238;
                  local_118 = DAT_1416e3238;
                  local_110 = DAT_1416e3228;
                  local_108 = DAT_1416e3228;
                  local_100 = 0;
                  local_f8 = 0;
                  uStack_f0 = 0;
                  local_e8 = 0;
                  uStack_e0 = 0;
                  local_d8 = 0;
                  uStack_d0 = 0;
                  local_c8 = DAT_1416e3230;
                  local_c0 = 0;
                  local_b8 = &local_168;
                  local_b0 = &local_168;
                  local_a8 = &local_168;
                  local_94 = 1;
                  local_90 = 0;
                  local_88 = 0;
                  local_80 = 0;
                  local_78 = 0;
                  uStack_70 = 0;
                  local_68 = 0;
                  uVar1 = *(ushort *)(param_1[0x10] + 0xe8);
                  local_9c = local_a0;
                  local_98 = local_a0;
                  (*(code *)local_278[7])(&local_278);
                  local_268 = CONCAT44((uint)uVar1,1);
                  local_b0 = &local_278;
                  FUN_1400eab00(&local_168,lVar6);
                  local_338 = 0;
                  local_330 = 0;
                  FUN_1400b0200(&local_348,0,0);
                  FUN_1400b0300(&local_348,"on_navy_returns_with_loot",0x19);
                  uVar13 = FUN_1408b4ea0();
                  lVar12 = FUN_1401abd60(uVar13,&local_348);
                  if (lVar12 != 0) {
                    FUN_1408b3220(lVar12,&local_168);
                  }
                  FUN_1400ae4f0(&local_348);
                  FUN_1406d3280(&local_168);
                  FUN_1406d3280(&local_278);
                  FUN_140269c00(&local_328);
                }
              }
              lVar12 = param_1[0x2e];
              if (lVar12 == 0) {
                lVar12 = FUN_140b96ae0(param_1);
              }
              lVar12 = FUN_1400b1aa0(lVar12);
              if (lVar12 != 0) {
                *(byte *)(lVar12 + 0x1d) = *(byte *)(lVar12 + 0x1d) | 0x10;
              }
            }
            FUN_140132db0(1,&LAB_140132e8c,lVar11);
          }
          else {
            uVar13 = (**(code **)(*param_1 + 0x50))();
            FUN_140132db0(0,&LAB_140132e70,uVar13);
          }
        }
        cVar7 = '\0';
        param_2 = local_res10;
      }
    }
LAB_140ba3c43:
    lVar11 = DAT_1416e3260;
    if (((int)param_1[0x14] < 1) && (param_2 != '\0')) {
      pvVar22 = *(void **)(DAT_1416e3260 + 0x3f0);
      local_res8 = pvVar22;
      if (cVar7 == '\0') {
        pvVar23 = (void *)param_1[0x2e];
        if (pvVar23 == (void *)0x0) {
          pvVar23 = (void *)FUN_140b96ae0(param_1);
        }
        if (pvVar23 == pvVar22) {
          local_328 = (void *)0x0;
          pvStack_320 = (void *)0x0;
          local_318 = 0;
          local_314 = 0;
          FUN_140234050(*(undefined8 *)(lVar11 + 0x3f0),&local_328);
          local_300 = 0;
          local_2f8 = 0;
          FUN_1400b0200(&local_310,0,0);
          FUN_1400b0300(&local_310,"MESSAGE_HEAD_MARS",0x11);
          local_338 = 0;
          local_330 = 0;
          FUN_1400b0200(&local_348,0,0);
          FUN_1400b0300(&local_348,"MESSENGER",9);
          uVar27 = FUN_14083a280();
          uVar13 = FUN_1401adec0(uVar27,&local_2e0,&local_310);
          uVar13 = FUN_1401adde0(local_2c0,&local_348,uVar13);
          pvVar23 = pvStack_320;
          pvVar17 = operator_new(0x58);
          local_res18 = pvVar17;
          FUN_1402688d0(pvVar17,uVar13);
          iVar10 = local_318;
          *(void **)((longlong)pvVar17 + 0x40) = pvVar23;
          *(undefined8 *)((longlong)pvVar17 + 0x48) = 0;
          *(undefined1 *)((longlong)pvVar17 + 0x50) = 0;
          iVar9 = local_318 + 1;
          pvVar15 = pvVar17;
          if (local_318 != 0) {
            *(void **)((longlong)pvVar23 + 0x48) = pvVar17;
            pvVar15 = local_328;
          }
          local_328 = pvVar15;
          pvStack_320 = pvVar17;
          local_318 = iVar9;
          FUN_1401b84e0(local_2c0);
          FUN_1400ae4f0(&local_2e0);
          FUN_1400ae4f0(&local_348);
          FUN_1400ae4f0(&local_310);
          cVar7 = (**(code **)(*param_1 + 0x68))(param_1);
          local_338 = 0;
          local_330 = 0;
          if (cVar7 == '\0') {
            FUN_1400b0200(&local_348,0,0);
            FUN_1400b0300(&local_348,&DAT_141075020,4);
            uVar13 = FUN_140698f70(&local_310,&DAT_141142e74);
            uVar13 = FUN_1401adde0(local_2c0,&local_348,uVar13);
            pvVar15 = operator_new(0x58);
            local_res18 = pvVar15;
            FUN_1402688d0(pvVar15,uVar13);
            *(void **)((longlong)pvVar15 + 0x40) = pvVar17;
            *(undefined8 *)((longlong)pvVar15 + 0x48) = 0;
            *(undefined1 *)((longlong)pvVar15 + 0x50) = 0;
            local_318 = iVar10 + 2;
            pvVar23 = pvVar15;
            if (iVar9 != 0) {
              *(void **)((longlong)pvVar17 + 0x48) = pvVar15;
              pvVar23 = local_328;
            }
            local_328 = pvVar23;
            pvStack_320 = pvVar15;
            FUN_1401b84e0(local_2c0);
            FUN_1400ae4f0(&local_310);
          }
          else {
            FUN_1400b0200(&local_348,0,0);
            FUN_1400b0300(&local_348,&DAT_141075020,4);
            uVar13 = FUN_140698f70(&local_310,&DAT_141072128);
            uVar13 = FUN_1401adde0(local_2c0,&local_348,uVar13);
            pvVar15 = operator_new(0x58);
            local_res18 = pvVar15;
            FUN_1402688d0(pvVar15,uVar13);
            *(void **)((longlong)pvVar15 + 0x40) = pvVar17;
            *(undefined8 *)((longlong)pvVar15 + 0x48) = 0;
            *(undefined1 *)((longlong)pvVar15 + 0x50) = 0;
            local_318 = iVar10 + 2;
            pvVar23 = pvVar15;
            if (iVar9 != 0) {
              *(void **)((longlong)pvVar17 + 0x48) = pvVar15;
              pvVar23 = local_328;
            }
            local_328 = pvVar23;
            pvStack_320 = pvVar15;
            FUN_1401b84e0(local_2c0);
            FUN_1400ae4f0(&local_310);
          }
          FUN_1400ae4f0(&local_348);
          local_338 = 0;
          local_330 = 0;
          FUN_1400b0200(&local_348,0,0);
          FUN_1400b0300(&local_348,&DAT_1410725c8,4);
          if (*(code **)(*param_1 + 0x30) == (code *)&LAB_1401add00) {
            plVar24 = param_1 + 0x17;
          }
          else {
            plVar24 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
          }
          uVar13 = FUN_1401adde0(local_2c0,&local_348,plVar24);
          pvVar17 = operator_new(0x58);
          local_res18 = pvVar17;
          FUN_1402688d0(pvVar17,uVar13);
          *(void **)((longlong)pvVar17 + 0x40) = pvVar15;
          *(undefined8 *)((longlong)pvVar17 + 0x48) = 0;
          *(undefined1 *)((longlong)pvVar17 + 0x50) = 0;
          pvVar23 = pvVar17;
          if (iVar10 != -2) {
            *(void **)((longlong)pvVar15 + 0x48) = pvVar17;
            pvVar23 = local_328;
          }
          local_328 = pvVar23;
          pvStack_320 = pvVar17;
          local_318 = iVar10 + 3;
          FUN_1401b84e0(local_2c0);
          FUN_1400ae4f0(&local_348);
          local_338 = 0;
          local_330 = 0;
          FUN_1400b0200(&local_348,0,0);
          FUN_1400b0300(&local_348,&DAT_14107210c,4);
          ppuVar4 = *(undefined ***)(param_1[0x10] + 0x10);
          if (ppuVar4 == &PTR_LAB_1410eea48) {
            lVar11 = *(longlong *)(param_1[0x10] + 0xf0) + 0x10;
          }
          else {
            lVar11 = (*(code *)ppuVar4[6])();
          }
          uVar13 = FUN_1401adde0(local_2c0,&local_348,lVar11);
          pvVar15 = operator_new(0x58);
          local_res18 = pvVar15;
          FUN_1402688d0(pvVar15,uVar13);
          *(void **)((longlong)pvVar15 + 0x40) = pvVar17;
          *(undefined8 *)((longlong)pvVar15 + 0x48) = 0;
          *(undefined1 *)((longlong)pvVar15 + 0x50) = 0;
          local_318 = iVar10 + 4;
          pvVar23 = pvVar15;
          if (iVar10 + 3 != 0) {
            *(void **)((longlong)pvVar17 + 0x48) = pvVar15;
            pvVar23 = local_328;
          }
          local_328 = pvVar23;
          pvStack_320 = pvVar15;
          FUN_1401b84e0(local_2c0);
          FUN_1400ae4f0(&local_348);
          local_338 = 0;
          local_330 = 0;
          FUN_1400b0200(&local_348,0,0);
          FUN_1400b0300(&local_348,"UNITARRIVED",0xb);
          lVar12 = DAT_1416e2360;
          local_2f0 = (undefined4)param_1[4];
          local_2ec = *(undefined4 *)((longlong)param_1 + 0x24);
          lVar11 = param_1[0x10];
          uVar13 = FUN_14083a280();
          FUN_14083b160(uVar13,&local_348,&local_328,&local_res8,CONCAT44(uVar29,1),pvVar22,lVar12,
                        lVar12,lVar11,CONCAT44(uVar32,3),&local_2f0,0,0,0xffffffff);
          FUN_1400ae4f0(&local_348);
          FUN_140269c00(&local_328);
        }
      }
      if (*(char *)((longlong)param_1 + 0x157) != '\0') {
        lVar11 = param_1[0x2e];
        if (lVar11 == 0) {
          lVar11 = FUN_140b96ae0(param_1);
        }
        cVar7 = FUN_140238d40(lVar11);
        if (cVar7 != '\0') {
          FUN_140934230(param_1[0x10],param_1);
        }
      }
    }
  }
  else {
LAB_140ba322a:
    FUN_140ba15e0(param_1,1);
  }
  return;
}

