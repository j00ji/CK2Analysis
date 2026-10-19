
void FUN_1403a56a0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  int *piVar12;
  int *piVar13;
  undefined8 local_res8;
  int local_res10 [2];
  longlong local_res18;
  int local_res20;
  longlong local_180;
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
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined ***local_b8;
  undefined ***local_b0;
  undefined ***local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined2 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  
  local_58 = 0xfffffffffffffffe;
  local_res8 = param_1;
  local_res18 = param_3;
  cVar3 = (**(code **)(*param_2 + 0x58))(param_2);
  if (cVar3 != '\0') {
    iVar9 = 0;
    piVar12 = (int *)((longlong)param_2 + 0xfc);
    plVar11 = param_2 + 9;
    lVar5 = param_3 - (longlong)param_2;
    do {
      cVar3 = FUN_1403a0c50(plVar11);
      if ((cVar3 != '\0') && (*piVar12 != 2)) {
        bVar2 = false;
        lVar10 = param_3 + 0x48;
        piVar13 = (int *)(param_3 + 0xfc);
        lVar6 = 3;
        lVar8 = lVar10;
        do {
          if ((piVar13[-0xe] == iVar9) &&
             ((((char)piVar13[3] == '\0' || (*piVar13 != 2)) &&
              (cVar3 = FUN_14039cb40(lVar8), cVar3 != '\0')))) {
            bVar2 = true;
          }
          lVar8 = lVar8 + 200;
          piVar13 = piVar13 + 0x32;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        param_3 = local_res18;
        if (bVar2) {
          *piVar12 = 2;
          *(undefined1 *)(piVar12 + 3) = 1;
          FUN_14039cf80(plVar11,1);
          piVar13 = (int *)(local_res18 + 0xc4);
          local_180 = 3;
          do {
            if (*piVar13 == iVar9) {
              local_160 = 0x18e;
              lVar6 = 0;
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
              iVar7 = 0;
              local_c0 = 0;
              local_b8 = &local_168;
              local_b0 = &local_168;
              local_a8 = &local_168;
              local_9c = 0;
              local_94 = 1;
              local_90 = 0;
              local_88 = 0;
              local_80 = 0;
              local_78 = 0;
              uStack_70 = 0;
              local_68 = 0;
              local_a0 = 0;
              FUN_1406d4ac0(&local_168);
              local_d8 = lVar10;
              local_res20 = FUN_140c4a7f0();
              lVar8 = DAT_1416e23d0;
              local_res20 = local_res20 % 100;
              local_res10[0] = *(int *)(DAT_1416e23d0 + 0x7f0) * 1000;
              local_res8 = CONCAT71(local_res8._1_7_,1);
              if ((((ulonglong)
                    (*(longlong *)(DAT_1416e23d0 + 0x7a8) - *(longlong *)(DAT_1416e23d0 + 0x7a0)) <
                    8) || (cVar3 = (**(code **)(*(longlong *)(DAT_1416e23d0 + 0x790) + 0x30))
                                             ((longlong *)(DAT_1416e23d0 + 0x790),&local_168),
                          cVar3 != '\0')) &&
                 (iVar4 = (int)(*(longlong *)(lVar8 + 0x780) - *(longlong *)(lVar8 + 0x778) >> 3),
                 iVar7 = local_res10[0], 0 < iVar4)) {
                do {
                  iVar7 = local_res10[0];
                  if ((char)local_res8 == '\0') break;
                  plVar1 = *(longlong **)(*(longlong *)(lVar8 + 0x778) + lVar6 * 8);
                  cVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,&local_168);
                  if (cVar3 != '\0') {
                    (**(code **)(*plVar1 + 0xa0))(plVar1,local_res10,&local_res8,&local_168);
                  }
                  lVar6 = lVar6 + 1;
                  iVar7 = local_res10[0];
                } while (lVar6 < iVar4);
              }
              if (local_res20 < iVar7 / 1000) {
                piVar13[0xe] = 2;
                *(undefined1 *)((longlong)piVar13 + 0x45) = 1;
                FUN_14039cf80(lVar5 + (longlong)plVar11,
                              CONCAT71((uint7)(uint3)((uint)(iVar7 / 1000) >> 8),1));
              }
              FUN_1406d3280(&local_168);
            }
            lVar10 = lVar10 + 200;
            piVar13 = piVar13 + 0x32;
            local_180 = local_180 + -1;
            param_3 = local_res18;
          } while (local_180 != 0);
        }
      }
      iVar9 = iVar9 + 1;
      plVar11 = plVar11 + 0x19;
      piVar12 = piVar12 + 0x32;
    } while (iVar9 < 3);
  }
  return;
}

