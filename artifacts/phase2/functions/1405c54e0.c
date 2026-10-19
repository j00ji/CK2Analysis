
void FUN_1405c54e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined **ppuVar3;
  longlong *plVar4;
  char cVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined8 uVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong *plVar25;
  char *pcVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  int iVar30;
  longlong lVar32;
  int iVar33;
  ulonglong uVar34;
  undefined4 *puVar35;
  bool bVar36;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar37;
  undefined8 local_res10;
  longlong *local_res18;
  longlong *local_res20;
  undefined **local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  longlong *local_1f8;
  longlong *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  longlong *local_1d8;
  longlong *plStack_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong lStack_198;
  longlong local_190;
  longlong local_188;
  undefined **local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  longlong *local_128;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  undefined **local_f8 [2];
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  undefined4 local_d0;
  uint local_cc;
  int local_ac;
  longlong *local_a8;
  undefined8 local_58;
  ulonglong uVar31;
  
  local_58 = 0xfffffffffffffffe;
  lVar13 = param_2[9];
  local_res10 = param_2;
  if (((*(byte *)(lVar13 + 0x1e9) & 2) == 0) ||
     ((*(longlong *)(lVar13 + 0x28) != 0 &&
      ((*(byte *)(*(longlong *)(lVar13 + 0x28) + 0xd6c) & 2) != 0)))) {
LAB_1405c77ce:
    if (DAT_1417e5319 == '\0') {
      return;
    }
    puVar12 = (undefined8 *)FUN_1405541d0(param_1,&local_1d8);
    if (0xf < (ulonglong)puVar12[3]) {
      puVar12 = (undefined8 *)*puVar12;
    }
    iVar7 = 0;
    puVar35 = &DAT_141451200;
    piVar9 = &DAT_141451200;
    do {
      if (*piVar9 == *(int *)(param_1 + 0x28)) {
        puVar35 = &DAT_141451200 + (longlong)iVar7 * 0x81;
        break;
      }
      iVar7 = iVar7 + 1;
      piVar9 = piVar9 + 0x81;
    } while ((longlong)piVar9 < 0x1416d5df8);
    local_1e8 = (longlong *)0x1410bc330;
    local_1e0 = 0x3de1;
    local_1dc = 0x1000;
    FUN_140d65130(&local_1e8,"Script Assert! assert: \"%s\", type: \"%s\", location: \"%s\"",
                  "!\"Invalid character\"",puVar35 + 1,puVar12);
LAB_1405c786b:
    if (0xf < local_1c0) {
      FUN_1400b08c0(&local_1d8,local_1d8,local_1c0 + 1);
    }
    return;
  }
  if (DAT_1417e6c90 < *(int *)(lVar13 + 0xbc)) {
    piVar9 = (int *)FUN_14077c7b0(DAT_1416e3260);
    if ((*piVar9 < *(int *)(lVar13 + 0xb8)) || (*(int *)(lVar13 + 0xbc) <= *piVar9))
    goto LAB_1405c77ce;
  }
  lVar10 = FUN_1406e7b40(param_1 + 600,param_2,0);
  if ((*(byte *)(lVar10 + 0x1e9) & 2) == 0) {
    plVar11 = (longlong *)FUN_1406e7330(param_1 + 0x2a8,param_2,0);
    cVar5 = (**(code **)(*plVar11 + 0x40))(plVar11);
    if ((cVar5 == '\0') &&
       (*(int *)(param_1 + 0xc0) + *(int *)(param_1 + 0xc4) + *(int *)(param_1 + 200) +
        *(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xd0) + *(int *)(param_1 + 0xd4) +
        *(int *)(param_1 + 0xd8) + *(int *)(param_1 + 0xdc) == 0)) {
      if (DAT_1417e5319 == '\0') {
        return;
      }
      puVar12 = (undefined8 *)FUN_1405541d0(param_1,&local_1d8);
      if (0xf < (ulonglong)puVar12[3]) {
        puVar12 = (undefined8 *)*puVar12;
      }
      lVar13 = FUN_140a97fd0(*(undefined4 *)(param_1 + 0x28));
      local_1e8 = (longlong *)0x1410bc330;
      local_1e0 = 0x3de6;
      local_1dc = 0x1000;
      FUN_140d65130(&local_1e8,"Script Assert! assert: \"%s\", type: \"%s\", location: \"%s\"",
                    "!\"No troops scripted\"",lVar13 + 4,puVar12);
      goto LAB_1405c786b;
    }
  }
  iVar7 = FUN_1405c9100(param_1,param_2);
  if (iVar7 == 0) {
    if (DAT_1417e5319 == '\0') {
      return;
    }
    puVar12 = (undefined8 *)FUN_1405541d0(param_1,&local_1d8);
    if (0xf < (ulonglong)puVar12[3]) {
      puVar12 = (undefined8 *)*puVar12;
    }
    lVar13 = FUN_140a97fd0(*(undefined4 *)(param_1 + 0x28));
    local_1e8 = (longlong *)0x1410bc330;
    local_1e0 = 0x3deb;
    local_1dc = 0x1000;
    FUN_140d65130(&local_1e8,"Script Assert! assert: \"%s\", type: \"%s\", location: \"%s\"",
                  "!\"Invalid province\"",lVar13 + 4,puVar12);
    goto LAB_1405c786b;
  }
  lVar10 = FUN_1406e7b40(param_1 + 0x60,param_2,0);
  if ((*(byte *)(lVar10 + 0x1e9) & 2) == 0) {
    lVar10 = *(longlong *)(lVar13 + 0x130);
  }
  lVar13 = *(longlong *)(lVar10 + 0x28);
  plVar11 = DAT_1416e3148;
  if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0xb0) != 0)) {
    plVar11 = *(longlong **)(*(longlong *)(lVar13 + 0xb0) + 8);
  }
  local_1b0 = lVar10;
  cVar5 = (**(code **)(*plVar11 + 0x30))();
  if (cVar5 == '\0') {
    if (DAT_1417e5319 == '\0') {
      return;
    }
    puVar12 = (undefined8 *)FUN_1405541d0(param_1,&local_1d8);
    if (0xf < (ulonglong)puVar12[3]) {
      puVar12 = (undefined8 *)*puVar12;
    }
    lVar13 = FUN_140a97fd0(*(undefined4 *)(param_1 + 0x28));
    local_1e8 = (longlong *)0x1410bc330;
    local_1e0 = 0x3df8;
    local_1dc = 0x1000;
    FUN_140d65130(&local_1e8,"Script Assert! assert: \"%s\", type: \"%s\", location: \"%s\"",
                  "!\"Invalid unit owner\"",lVar13 + 4,puVar12);
    goto LAB_1405c786b;
  }
  lVar13 = FUN_1406e7b40(param_1 + 0x208,param_2,0);
  local_108 = lVar13;
  if ((((*(byte *)(lVar13 + 0x1e9) & 2) != 0) && (cVar5 = FUN_1401ad4a0(lVar13), cVar5 != '\0')) &&
     (*(int *)(param_1 + 0xdc) == 0)) {
    FUN_14023aee0(lVar13);
  }
  lVar13 = DAT_1416e3260;
  uVar6 = FUN_1405c9100(param_1,param_2);
  lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x278) + (ulonglong)uVar6 * 8);
  local_1b8 = lVar13;
  iVar7 = FUN_1406e7e40(param_1 + 0x160,param_2,0);
  uVar6 = (ushort)iVar7;
  if (iVar7 == 0) {
    iVar7 = FUN_1405c9100(param_1,param_2);
    uVar6 = (ushort)iVar7;
    if (iVar7 == 0) {
      if (DAT_1417e5319 == '\0') {
        return;
      }
      puVar12 = (undefined8 *)FUN_1405541d0(param_1,&local_1d8);
      if (0xf < (ulonglong)puVar12[3]) {
        puVar12 = (undefined8 *)*puVar12;
      }
      lVar13 = FUN_140a97fd0(*(undefined4 *)(param_1 + 0x28));
      local_1e8 = (longlong *)0x1410bc330;
      local_1e0 = 0x3e0b;
      local_1dc = 0x1000;
      FUN_140d65130(&local_1e8,"Script Assert! assert: \"%s\", type: \"%s\", location: \"%s\"",
                    "!\"spawn_unit: Invalid home province\"",lVar13 + 4,puVar12);
      goto LAB_1405c786b;
    }
  }
  local_188 = *(longlong *)(*(longlong *)(DAT_1416e3260 + 0x278) + (ulonglong)uVar6 * 8);
  lVar14 = FUN_1406e7b40(param_1 + 600,param_2,0);
  if ((*(byte *)(lVar14 + 0x1e9) & 2) == 0) {
    plVar11 = (longlong *)FUN_1406e7330(param_1 + 0x2a8,param_2,0);
    cVar5 = (**(code **)(*plVar11 + 0x40))(plVar11);
    if (cVar5 == '\0') {
      FUN_1400b7f40(&local_248,param_1 + 0xb0);
      lVar14 = local_1b8;
      uVar31 = 0;
      if (*(char *)(param_1 + 0x108) == '\0') {
        if (0 < *(int *)(param_1 + 0x11c)) {
          iVar7 = (int)local_218 + local_218._4_4_ + (int)local_210 + local_210._4_4_ +
                  (int)local_208 + local_208._4_4_ + (int)local_200 + local_200._4_4_;
          local_res18 = (longlong *)CONCAT71(local_res18._1_7_,iVar7 == 0);
          if (iVar7 == 0) {
            return;
          }
          uVar34 = *(ulonglong *)(local_1b8 + 0xce8);
          iVar20 = 1000;
          while ((*(ulonglong *)(lVar14 + 0xce8) <= uVar34 &&
                 (uVar34 < *(ulonglong *)(lVar14 + 0xcf0)))) {
            uVar28 = uVar34 + 4;
            local_1a8 = FUN_1400cd630(uVar34);
            cVar5 = (**(code **)(*(longlong *)(local_1a8 + 0x10) + 8))();
            uVar34 = uVar28;
            if (cVar5 != '\0') {
              FUN_1408469e0(*(longlong *)(local_1a8 + 0xcc0) + 0x98,&local_res20);
              if (iVar20 < (int)local_res20) {
                iVar20 = (int)local_res20;
              }
            }
          }
          uVar34 = uVar31;
          do {
            iVar19 = *(int *)((longlong)&local_218 + uVar34 * 4);
            if ((char)local_res18 == '\0') {
              if (iVar19 + 0x189373U < 0x39580e) {
                iVar19 = (iVar19 * 1000) / iVar7;
              }
              else {
                iVar19 = (int)(((longlong)iVar19 * 1000) / (longlong)iVar7);
              }
            }
            else {
              iVar19 = -1;
            }
            uVar37 = 0;
            if (0 < iVar19) {
              uVar37 = (undefined4)
                       (((longlong)
                         (int)(((longlong)iVar19 * (longlong)*(int *)(param_1 + 0x11c)) / 1000) *
                        (longlong)iVar20) / 1000);
            }
            *(undefined4 *)((longlong)&local_238 + uVar34 * 4) = uVar37;
            *(undefined4 *)((longlong)&local_218 + uVar34 * 4) = uVar37;
            uVar34 = uVar34 + 1;
            lVar13 = local_1b8;
            param_2 = local_res10;
            lVar10 = local_1b0;
          } while ((longlong)uVar34 < 8);
        }
      }
      else {
        uVar34 = *(ulonglong *)(local_1b8 + 0xce8);
        uVar28 = uVar31;
        while ((iVar7 = (int)uVar28, *(ulonglong *)(lVar14 + 0xce8) <= uVar34 &&
               (uVar34 < *(ulonglong *)(lVar14 + 0xcf0)))) {
          uVar27 = uVar34 + 4;
          lVar13 = FUN_1400cd630(uVar34);
          cVar5 = (**(code **)(*(longlong *)(lVar13 + 0x10) + 8))();
          uVar34 = uVar27;
          if (cVar5 != '\0') {
            uVar28 = (ulonglong)(uint)(iVar7 + *(int *)(lVar13 + 0xc4));
          }
        }
        lVar13 = local_1b8;
        param_2 = local_res10;
        lVar10 = local_1b0;
        if (iVar7 != 1000) {
          uVar34 = uVar31;
          do {
            iVar20 = *(int *)((longlong)&local_238 + uVar34 * 4);
            iVar19 = (int)(((longlong)iVar20 * (longlong)(iVar7 + -1000)) / 1000) / 1000;
            if (iVar19 < 1) {
              *(int *)((longlong)&local_238 + uVar34 * 4) = iVar20 + iVar19 * -1000;
              piVar9 = (int *)((longlong)&local_218 + uVar34 * 4);
              *piVar9 = *piVar9 + iVar19 * -1000;
            }
            else {
              *(int *)((longlong)&local_238 + uVar34 * 4) = iVar19 * 1000 + iVar20;
              piVar9 = (int *)((longlong)&local_218 + uVar34 * 4);
              *piVar9 = *piVar9 + iVar19 * 1000;
            }
            uVar34 = uVar34 + 1;
          } while ((longlong)uVar34 < 8);
        }
      }
      iVar7 = 1000;
      iVar20 = local_238._4_4_ + (int)local_238 + (int)local_230 + local_230._4_4_ + (int)local_228
               + local_228._4_4_ + (int)local_220 + local_220._4_4_;
      if (iVar20 == 0) {
        return;
      }
      iVar19 = *(int *)(param_1 + 0x14c);
      if ((iVar19 < 1) || (iVar20 <= iVar19 * 1000)) {
        if (iVar19 * 1000 <= iVar20) goto LAB_1405c5c13;
        iVar19 = *(int *)(param_1 + 0x148);
      }
      if (iVar20 == 0) {
        iVar7 = -1;
      }
      else if (iVar19 * 1000 + 0x189373U < 0x39580e) {
        iVar7 = (iVar19 * 1000000) / iVar20;
      }
      else {
        iVar7 = (int)(((longlong)(iVar19 * 1000) * 1000) / (longlong)iVar20);
      }
LAB_1405c5c13:
      uVar34 = uVar31;
      do {
        *(int *)((longlong)&local_238 + uVar34 * 4) =
             ((int)(((longlong)*(int *)((longlong)&local_238 + uVar34 * 4) * (longlong)iVar7) / 1000
                   ) / 1000) * 1000;
        *(int *)((longlong)&local_218 + uVar34 * 4) =
             ((int)(((longlong)*(int *)((longlong)&local_218 + uVar34 * 4) * (longlong)iVar7) / 1000
                   ) / 1000) * 1000;
        uVar34 = uVar34 + 1;
      } while ((longlong)uVar34 < 7);
      if (0 < *(int *)(param_1 + 0x158)) {
        local_res10 = (longlong *)FUN_1406e7b40(param_1 + 0x2f8,param_2,0);
        if ((*(byte *)((longlong)local_res10 + 0x1e9) & 2) == 0) {
          uVar15 = FUN_1406e7330(param_1 + 0x2f8,param_2,0);
          if (DAT_1416e3928 == (longlong *)0x0) {
            DAT_1416e3928 = operator_new(0x60);
            *(undefined4 *)(DAT_1416e3928 + 1) = 0x18e;
            *DAT_1416e3928 = (longlong)&PTR_FUN_1410e6698;
            DAT_1416e3928[2] = 0;
            DAT_1416e3928[3] = 0;
            DAT_1416e3928[4] = 0;
            DAT_1416e3928[5] = 0;
            DAT_1416e3928[6] = 0;
            DAT_1416e3928[7] = 0;
            *(undefined1 *)(DAT_1416e3928 + 8) = 0;
            DAT_1416e3928[9] = 0;
            DAT_1416e3928[10] = 0;
            DAT_1416e3928[0xb] = 0;
            local_res10 = DAT_1416e3928;
          }
          plVar11 = (longlong *)FUN_140891750(DAT_1416e3928,uVar15);
        }
        else {
          if (DAT_1416e3928 == (longlong *)0x0) {
            DAT_1416e3928 = operator_new(0x60);
            *(undefined4 *)(DAT_1416e3928 + 1) = 0x18e;
            *DAT_1416e3928 = (longlong)&PTR_FUN_1410e6698;
            DAT_1416e3928[2] = 0;
            DAT_1416e3928[3] = 0;
            DAT_1416e3928[4] = 0;
            DAT_1416e3928[5] = 0;
            DAT_1416e3928[6] = 0;
            DAT_1416e3928[7] = 0;
            *(undefined1 *)(DAT_1416e3928 + 8) = 0;
            DAT_1416e3928[9] = 0;
            DAT_1416e3928[10] = 0;
            DAT_1416e3928[0xb] = 0;
            local_res18 = DAT_1416e3928;
          }
          plVar11 = (longlong *)FUN_1408917a0(DAT_1416e3928,local_res10);
        }
        cVar5 = (**(code **)(*plVar11 + 0x30))(plVar11);
        if (cVar5 != '\0') {
          iVar7 = FUN_14087f910(plVar11,1);
          iVar20 = *(int *)(param_1 + 0x158) * 1000;
          if (iVar20 == 0) {
            iVar20 = -1;
          }
          else if (iVar7 * 1000 + 0x189373U < 0x39580e) {
            iVar20 = (iVar7 * 1000000) / iVar20;
          }
          else {
            iVar20 = (int)(((longlong)(iVar7 * 1000) * 1000) / (longlong)iVar20);
          }
          uVar34 = uVar31;
          do {
            *(int *)((longlong)&local_238 + uVar34 * 4) =
                 ((int)(((longlong)*(int *)((longlong)&local_238 + uVar34 * 4) * (longlong)iVar20) /
                       1000) / 1000) * 1000;
            *(int *)((longlong)&local_218 + uVar34 * 4) =
                 ((int)(((longlong)*(int *)((longlong)&local_218 + uVar34 * 4) * (longlong)iVar20) /
                       1000) / 1000) * 1000;
            uVar34 = uVar34 + 1;
          } while ((longlong)uVar34 < 7);
        }
      }
      uVar29 = local_220._4_4_;
      uVar34 = uVar31;
      if ((local_220._4_4_ != 0) &&
         ((*(short *)(*(longlong *)(lVar13 + 0xf0) + 0x52) != 0 ||
          (*(char *)(*(longlong *)(lVar13 + 0xf0) + 100) == '\0')))) {
        local_res10 = operator_new(0x250);
        uVar34 = FUN_140ba7310(local_res10);
        (**(code **)(*(longlong *)(uVar34 + 0x10) + 0x38))();
        FUN_140b98e30(uVar34,lVar13);
        FUN_140ba5840(uVar34,*(undefined1 *)(param_1 + 0x154));
        *(undefined1 *)(uVar34 + 0x158) = *(undefined1 *)(param_1 + 0x155);
        local_res10 = operator_new(0x1b0);
        plVar11 = (longlong *)FUN_140a2a420(local_res10,0);
        *(undefined1 *)((longlong)plVar11 + 0x13c) = *(undefined1 *)(param_1 + 0x10a);
        *(undefined1 *)((longlong)plVar11 + 0x13d) = *(undefined1 *)(param_1 + 0x10b);
        lVar14 = *(longlong *)(lVar10 + 0x28);
        if ((lVar14 != 0) &&
           ((*(longlong *)(lVar14 + 0xb0) != 0 &&
            ((*(byte *)(*(longlong *)(lVar14 + 0xb0) + 0x1b2) & 1) != 0)))) {
          *(undefined1 *)((longlong)plVar11 + 0x13e) = 1;
        }
        plVar11[0x28] = *(longlong *)(param_1 + 0x110);
        *(undefined4 *)(plVar11 + 0x29) = *(undefined4 *)(param_1 + 0x150);
        (**(code **)(*plVar11 + 0x38))(plVar11);
        FUN_140a2cb40(plVar11);
        plVar11[0xf] = local_188;
        if (*(longlong *)(param_1 + 0x138) != 0) {
          FUN_14055d660(plVar11);
        }
        if (*(int *)(param_1 + 0x124) != 1000) {
          *(int *)(plVar11 + 0x27) = *(int *)(param_1 + 0x124);
        }
        local_170 = 0x18e;
        local_178 = &PTR_FUN_141065928;
        local_128 = DAT_1416e3a70;
        local_168 = 0;
        local_160 = 0;
        local_158 = 0;
        local_148 = 0;
        local_140 = 0;
        local_138 = 0;
        local_150 = (ulonglong)uVar29 << 0x20;
        local_130 = (ulonglong)local_200._4_4_ << 0x20;
        FUN_1400b7ec0(plVar11 + 0x13,&local_178);
        FUN_140b97bb0(uVar34,plVar11,0xffffffff);
        uVar15 = FUN_1400b1d10(lVar10);
        FUN_1404942d0(uVar15,uVar34);
        FUN_140b9b660(uVar34);
        FUN_1403bc0c0(DAT_1416e3260 + 0x230,uVar34,*(undefined8 *)(uVar34 + 0x80));
      }
      if ((0 < (int)local_238 + local_238._4_4_ + (int)local_230 + local_230._4_4_ + (int)local_228
               + local_228._4_4_ + (int)local_220) &&
         ((*(char *)(*(longlong *)(lVar13 + 0xf0) + 100) != '\0' || (uVar34 != 0)))) {
        local_res10 = operator_new(0x240);
        lVar14 = FUN_1401add10(local_res10);
        (**(code **)(*(longlong *)(lVar14 + 0x10) + 0x38))();
        FUN_140b98e30(lVar14,lVar13);
        FUN_140ba5840(lVar14,*(undefined1 *)(param_1 + 0x154));
        *(undefined1 *)(lVar14 + 0x158) = *(undefined1 *)(param_1 + 0x155);
        FUN_1400b7f40(local_f8,&local_248);
        local_cc = 0;
        local_ac = 0;
        local_res10 = operator_new(0x1b0);
        plVar11 = (longlong *)FUN_140a2a420(local_res10,0);
        *(undefined1 *)((longlong)plVar11 + 0x13c) = *(undefined1 *)(param_1 + 0x10a);
        *(undefined1 *)((longlong)plVar11 + 0x13d) = *(undefined1 *)(param_1 + 0x10b);
        lVar13 = *(longlong *)(lVar10 + 0x28);
        if ((lVar13 != 0) &&
           ((*(longlong *)(lVar13 + 0xb0) != 0 &&
            ((*(byte *)(*(longlong *)(lVar13 + 0xb0) + 0x1b2) & 1) != 0)))) {
          *(undefined1 *)((longlong)plVar11 + 0x13e) = 1;
        }
        plVar11[0x28] = *(longlong *)(param_1 + 0x110);
        *(undefined4 *)(plVar11 + 0x29) = *(undefined4 *)(param_1 + 0x150);
        (**(code **)(*plVar11 + 0x38))(plVar11);
        FUN_140a2cb40(plVar11);
        plVar11[0xf] = local_188;
        if (*(longlong *)(param_1 + 0x138) != 0) {
          FUN_14055d660(plVar11);
        }
        if (*(int *)(param_1 + 0x124) != 1000) {
          *(int *)(plVar11 + 0x27) = *(int *)(param_1 + 0x124);
        }
        FUN_1400b7ec0(plVar11 + 0x13,local_f8);
        if ((*(byte *)(local_108 + 0x1e9) & 2) != 0) {
          FUN_14023aa20(local_108,plVar11);
        }
        FUN_140b97bb0(lVar14,plVar11,0xffffffff);
        uVar15 = FUN_1400b1d10(lVar10);
        FUN_1404942d0(uVar15,lVar14);
        FUN_140b9b660(lVar14);
        if (uVar34 != 0) {
          if ((DAT_1417e5319 != '\0') && (cVar5 = FUN_140ba7980(uVar34,lVar14), cVar5 == '\0')) {
            puVar12 = (undefined8 *)FUN_1405541d0(param_1,&local_1d8);
            if (0xf < (ulonglong)puVar12[3]) {
              puVar12 = (undefined8 *)*puVar12;
            }
            lVar13 = FUN_140a97fd0(*(undefined4 *)(param_1 + 0x28));
            local_1e8 = (longlong *)0x1410bc330;
            local_1e0 = 0x406e;
            local_1dc = 0x1000;
            FUN_140d65130(&local_1e8,"Script Assert! assert: \"%s\", type: \"%s\", location: \"%s\""
                          ,"pNavy->CanLoad( pArmy )",lVar13 + 4,puVar12);
            FUN_1400ae4f0(&local_1d8);
          }
          FUN_140ba7c00(uVar34,lVar14);
        }
        FUN_1403bc0c0(DAT_1416e3260 + 0x230,lVar14,*(undefined8 *)(lVar14 + 0x80));
      }
      if (*(char *)(param_1 + 0x118) != '\0') {
        local_1d8 = (longlong *)0x0;
        plStack_1d0 = (longlong *)0x0;
        local_1c8 = local_1c8 & 0xffffff0000000000;
        plVar11 = *(longlong **)(local_1b8 + 0xcc0);
        if (plVar11 != (longlong *)0x0) {
          plVar25 = (longlong *)0x0;
          do {
            plVar24 = (longlong *)*plVar11;
            plVar11 = (longlong *)plVar11[2];
            cVar5 = (**(code **)(*plVar24 + 0x70))(plVar24);
            plVar16 = plVar25;
            plVar23 = local_1d8;
            if (cVar5 == *(char *)(param_1 + 0x109)) {
              lVar13 = plVar24[0x2e];
              if (lVar13 == 0) {
                lVar13 = FUN_140b96ae0(plVar24);
              }
              plVar23 = local_1d8;
              if (lVar13 == lVar10) {
                local_res10 = plVar25;
                plVar16 = operator_new(0x20);
                *plVar16 = (longlong)plVar24;
                plVar16[1] = (longlong)plVar25;
                plVar16[2] = 0;
                *(undefined1 *)(plVar16 + 3) = 0;
                iVar7 = (int)uVar31;
                uVar29 = iVar7 + 1;
                uVar31 = (ulonglong)uVar29;
                local_1c8 = CONCAT44(local_1c8._4_4_,uVar29);
                local_res18 = plVar16;
                plVar23 = plVar16;
                plStack_1d0 = plVar16;
                if (iVar7 != 0) {
                  local_res10[2] = (longlong)plVar16;
                  plVar23 = local_1d8;
                }
              }
            }
            local_1d8 = plVar23;
            plVar25 = plVar16;
          } while (plVar11 != (longlong *)0x0);
          if (1 < (int)uVar31) {
            FUN_140bb1f20(local_f8,&local_1d8);
            FUN_140bb2050(local_f8);
            FUN_1401c9ac0(local_f8);
          }
        }
        FUN_1400b1970(&local_1d8);
      }
      if ((*(char *)(param_1 + 0x154) != '\0') &&
         ((*(longlong *)(lVar10 + 0x28) == 0 ||
          ((*(byte *)(*(longlong *)(lVar10 + 0x28) + 0xd6d) & 2) == 0)))) {
        FUN_1401ca110(lVar10,1);
        FUN_1400f8e30(lVar10);
      }
      if (*(longlong *)(DAT_1416e3260 + 0x3f0) != lVar10) {
        return;
      }
      (**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0x218))();
      return;
    }
  }
  if (*(int *)(param_1 + 0x120) == 0) {
    return;
  }
  lVar13 = FUN_1406e7b40(param_1 + 600,param_2,0);
  local_118 = lVar13;
  lVar14 = FUN_1406e7330(param_1 + 0x2a8,param_2,0);
  plVar11 = (longlong *)0x0;
  if (*(char *)(param_1 + 0x109) != '\0') {
    if ((*(byte *)(lVar13 + 0x1e9) & 2) == 0) {
      local_res10._0_4_ = 1000;
      uVar15 = *(undefined8 *)(lVar14 + 0x498);
      uVar17 = FUN_1400cd630(lVar14 + 0x3e0);
      FUN_1409f7a70(uVar17,local_f8,0,1,uVar15,&local_res10,0);
      uVar15 = FUN_1400cd630(lVar14 + 0x3e0);
      FUN_1409f7e70(uVar15,&local_178);
      local_res10 = (longlong *)CONCAT44(local_res10._4_4_,1000);
      FUN_140846b10(local_f8,&local_178,&local_res10,0);
    }
    else {
      lVar14 = FUN_1400b1d70(lVar13);
      iVar7 = (int)(*(longlong *)(lVar14 + 0x40) - *(longlong *)(lVar14 + 0x38) >> 3) + -1;
      lVar32 = (longlong)iVar7;
      plVar25 = plVar11;
      if (-1 < iVar7) {
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar14 + 0x38) + lVar32 * 8);
          if (1 < *(int *)(lVar2 + 0x3f0)) break;
          local_res10 = (longlong *)CONCAT44(local_res10._4_4_,1000);
          uVar15 = FUN_1400cd630(lVar2 + 0x3e0);
          FUN_1409f7a70(uVar15,local_f8,0,1,lVar13,&local_res10,0);
          plVar25 = (longlong *)(ulonglong)((int)plVar25 + local_cc);
          lVar32 = lVar32 + -1;
        } while (-1 < lVar32);
      }
      lVar14 = FUN_1400b1d70(lVar13);
      plVar24 = *(longlong **)(lVar14 + 0x20);
      while (plVar24 != (longlong *)0x0) {
        plVar16 = (longlong *)*plVar24;
        plVar24 = (longlong *)plVar24[2];
        cVar5 = (**(code **)(*plVar16 + 0x68))(plVar16);
        if (cVar5 == '\0') {
          plVar23 = plVar16 + 7;
          if (plVar16 == (longlong *)0x0) {
            plVar23 = plVar11;
          }
          plVar23 = (longlong *)*plVar23;
          while (plVar23 != (longlong *)0x0) {
            lVar14 = *plVar23;
            plVar23 = (longlong *)plVar23[2];
            if ((*(int *)(lVar14 + 0x44) != 3) &&
               ((*(byte *)(*(longlong *)(lVar14 + 0x88) + 0x9d3) & 0x40) == 0)) {
              plVar25 = (longlong *)(ulonglong)(uint)((int)plVar25 + *(int *)(lVar14 + 0xc4));
            }
          }
        }
      }
      lVar13 = FUN_1400b1d70(lVar13);
      iVar7 = (int)(*(longlong *)(lVar13 + 0x1b8) - *(longlong *)(lVar13 + 0x1b0) >> 3);
      local_cc = (uint)plVar25;
      if (0 < iVar7) {
        do {
          lVar14 = *(longlong *)
                    (*(longlong *)(*(longlong *)(lVar13 + 0x1b0) + (longlong)plVar11 * 8) + 0x28);
          plVar24 = DAT_1416e3148;
          if ((lVar14 != 0) && (*(longlong *)(lVar14 + 0xb0) != 0)) {
            plVar24 = *(longlong **)(*(longlong *)(lVar14 + 0xb0) + 8);
          }
          FUN_14049d190(plVar24,local_f8,0,0);
          local_cc = (int)plVar25 + local_ac;
          plVar25 = (longlong *)(ulonglong)local_cc;
          plVar11 = (longlong *)((longlong)plVar11 + 1);
        } while ((longlong)plVar11 < (longlong)iVar7);
      }
    }
    uVar29 = (uint)(((longlong)*(int *)(param_1 + 0x120) * (longlong)(int)local_cc) / 1000);
    iVar7 = *(int *)(param_1 + 0x14c);
    if (((0 < iVar7) && (iVar7 * 1000 < (int)uVar29)) ||
       (iVar7 = *(int *)(param_1 + 0x148), (int)uVar29 < iVar7 * 1000)) {
      uVar29 = iVar7 * 1000;
    }
    lVar32 = local_1b8;
    if (0 < (int)uVar29) {
      local_res10 = operator_new(0x250);
      lVar14 = FUN_140ba7310(local_res10);
      (**(code **)(*(longlong *)(lVar14 + 0x10) + 0x38))();
      lVar32 = local_1b8;
      FUN_140b98e30(lVar14,local_1b8);
      FUN_140ba5840(lVar14,*(undefined1 *)(param_1 + 0x154));
      *(undefined1 *)(lVar14 + 0x158) = *(undefined1 *)(param_1 + 0x155);
      local_res10 = operator_new(0x1b0);
      plVar11 = (longlong *)FUN_140a2a420(local_res10,0);
      *(undefined1 *)((longlong)plVar11 + 0x13c) = *(undefined1 *)(param_1 + 0x10a);
      *(undefined1 *)((longlong)plVar11 + 0x13d) = *(undefined1 *)(param_1 + 0x10b);
      lVar13 = *(longlong *)(lVar10 + 0x28);
      if (((lVar13 != 0) && (*(longlong *)(lVar13 + 0xb0) != 0)) &&
         ((*(byte *)(*(longlong *)(lVar13 + 0xb0) + 0x1b2) & 1) != 0)) {
        *(undefined1 *)((longlong)plVar11 + 0x13e) = 1;
      }
      plVar11[0x28] = *(longlong *)(param_1 + 0x110);
      *(undefined4 *)(plVar11 + 0x29) = *(undefined4 *)(param_1 + 0x150);
      (**(code **)(*plVar11 + 0x38))(plVar11);
      FUN_140a2cb40(plVar11);
      plVar11[0xf] = local_188;
      if (*(longlong *)(param_1 + 0x138) != 0) {
        FUN_14055d660(plVar11);
      }
      if (*(int *)(param_1 + 0x124) != 1000) {
        *(int *)(plVar11 + 0x27) = *(int *)(param_1 + 0x124);
      }
      plVar25 = DAT_1416e3a70;
      local_240 = 0x18e;
      local_248 = &PTR_FUN_141065928;
      local_1f8 = DAT_1416e3a70;
      local_238 = 0;
      local_230 = 0;
      local_228 = 0;
      local_218 = 0;
      local_210 = 0;
      local_208 = 0;
      local_220 = (ulonglong)uVar29 << 0x20;
      local_200 = (ulonglong)uVar29 << 0x20;
      *(undefined4 *)(plVar11 + 0x14) = 0x18e;
      *(undefined4 *)(plVar11 + 0x15) = 0;
      *(undefined4 *)((longlong)plVar11 + 0xac) = 0;
      *(undefined4 *)(plVar11 + 0x16) = 0;
      *(undefined4 *)((longlong)plVar11 + 0xb4) = 0;
      *(undefined4 *)(plVar11 + 0x17) = 0;
      *(undefined4 *)((longlong)plVar11 + 0xbc) = 0;
      *(undefined4 *)(plVar11 + 0x18) = 0;
      *(uint *)((longlong)plVar11 + 0xc4) = uVar29;
      *(undefined4 *)(plVar11 + 0x19) = 0;
      *(undefined4 *)((longlong)plVar11 + 0xcc) = 0;
      *(undefined4 *)(plVar11 + 0x1a) = 0;
      *(undefined4 *)((longlong)plVar11 + 0xd4) = 0;
      *(undefined4 *)(plVar11 + 0x1b) = 0;
      *(undefined4 *)((longlong)plVar11 + 0xdc) = 0;
      *(undefined4 *)(plVar11 + 0x1c) = 0;
      *(uint *)((longlong)plVar11 + 0xe4) = uVar29;
      plVar11[0x1d] = (longlong)plVar25;
      FUN_140b97bb0(lVar14,plVar11,0xffffffff);
      uVar15 = FUN_1400b1d10(lVar10);
      FUN_1404942d0(uVar15,lVar14);
      FUN_140b9b660(lVar14);
      FUN_1403bc0c0(DAT_1416e3260 + 0x230,lVar14,*(undefined8 *)(lVar14 + 0x80));
    }
    goto LAB_1405c7652;
  }
  local_1d8 = (longlong *)0x0;
  plStack_1d0 = (longlong *)0x0;
  local_1c8 = 0;
  local_1a0 = 0;
  lStack_198 = 0;
  local_190 = 0;
  local_res10 = (longlong *)((ulonglong)local_res10._4_4_ << 0x20);
  local_res18 = (longlong *)CONCAT44(local_res18._4_4_,0x18e);
  local_240 = 0x18e;
  local_248 = &PTR_FUN_141065928;
  local_110 = DAT_1416e3a70;
  local_1f8 = DAT_1416e3a70;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220._0_4_ = 0;
  local_220._4_4_ = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  if ((*(byte *)(lVar13 + 0x1e9) & 2) == 0) {
    local_res20._0_4_ = 1000;
    uVar15 = *(undefined8 *)(lVar14 + 0x498);
    uVar17 = FUN_1400cd630(lVar14 + 0x3e0);
    FUN_1409f7a70(uVar17,&local_178,0,0,uVar15,&local_res20,0);
    uVar15 = FUN_1400cd630(lVar14 + 0x3e0);
    FUN_1409f7e70(uVar15,local_f8);
    local_res20 = (longlong *)CONCAT44(local_res20._4_4_,1000);
    uVar37 = FUN_140846b10(&local_178,local_f8,&local_res20,0);
    local_res20 = local_128;
    if (*(code **)(*local_128 + 0x38) == FUN_1400ae550) {
      FUN_1400b12c0(&local_1d8,&local_res20);
      local_res20 = (longlong *)CONCAT44(local_res20._4_4_,(int)local_150);
      uVar37 = FUN_140377390(&local_1a0,&local_res20);
      lVar13 = lStack_198 - local_1a0 >> 2;
      if (*(int *)(local_1a0 + -4 + lVar13 * 4) < 1) goto LAB_1405c6f27;
      local_res10._0_4_ = (int)lVar13 + -1;
    }
    else {
LAB_1405c6f27:
    }
    iVar21 = (int)local_238 + (int)local_168;
    iVar8 = local_238._4_4_ + local_168._4_4_;
    local_238 = CONCAT44(iVar8,iVar21);
    iVar30 = (int)local_230 + (int)local_160;
    iVar7 = local_230._4_4_ + local_160._4_4_;
    local_230 = CONCAT44(iVar7,iVar30);
    iVar19 = (int)local_228 + (int)local_158;
    iVar20 = local_228._4_4_ + local_158._4_4_;
    local_228 = CONCAT44(iVar20,iVar19);
    local_f8[0] = &PTR_FUN_141065928;
    local_178 = &PTR_FUN_141065928;
    lVar13 = local_1a0;
  }
  else {
    local_1e8 = (longlong *)FUN_1400b1d70(lVar13);
    iVar7 = (int)(local_1e8[8] - local_1e8[7] >> 3) + -1;
    lVar13 = local_1a0;
    iVar20 = local_228._4_4_;
    iVar19 = (int)local_228;
    if (-1 < iVar7) {
      local_1a8 = (longlong)iVar7;
      do {
        lVar10 = *(longlong *)(local_1e8[7] + local_1a8 * 8);
        if (1 < *(int *)(lVar10 + 0x3f0)) break;
        local_res20 = (longlong *)CONCAT44(local_res20._4_4_,1000);
        uVar15 = FUN_1400cd630(lVar10 + 0x3e0);
        FUN_1409f7a70(uVar15,local_f8,0,0,local_118,&local_res20,0);
        local_res20 = local_a8;
        if (*(code **)(*local_a8 + 0x38) == FUN_1400ae550) {
          FUN_1400b12c0(&local_1d8,&local_res20);
          local_res20 = (longlong *)CONCAT44(local_res20._4_4_,local_d0);
          FUN_140377390(&local_1a0,&local_res20);
          lVar10 = lStack_198 - local_1a0 >> 2;
          lVar13 = local_1a0;
          if ((int)plVar11 < *(int *)(local_1a0 + -4 + lVar10 * 4)) {
            plVar11 = (longlong *)(ulonglong)*(uint *)(local_1a0 + -4 + lVar10 * 4);
            local_res10 = (longlong *)CONCAT44(local_res10._4_4_,(int)lVar10 + -1);
          }
        }
        local_238 = CONCAT44(local_238._4_4_ + local_e4,(int)local_238 + local_e8);
        local_230 = CONCAT44(local_230._4_4_ + local_dc,(int)local_230 + local_e0);
        iVar19 = iVar19 + local_d8;
        iVar20 = iVar20 + local_d4;
        local_228 = CONCAT44(iVar20,iVar19);
        local_1a8 = local_1a8 + -1;
      } while (-1 < local_1a8);
    }
    lVar10 = FUN_1400b1d70(local_118);
    if (*(longlong **)(lVar10 + 0x20) != (longlong *)0x0) {
      local_1e8 = *(longlong **)(lVar10 + 0x20);
      iVar7 = (int)local_228;
      do {
        lVar10 = *local_1e8;
        local_1e8 = (longlong *)local_1e8[2];
        plVar25 = (longlong *)(lVar10 + 0x38);
        if (lVar10 == 0) {
          plVar25 = (longlong *)0x0;
        }
        plVar25 = (longlong *)*plVar25;
        if (plVar25 != (longlong *)0x0) {
          iVar19 = local_230._4_4_;
          iVar30 = (int)local_230;
          do {
            lVar10 = *plVar25;
            plVar25 = (longlong *)plVar25[2];
            if ((*(int *)(lVar10 + 0x44) != 3) &&
               ((*(byte *)(*(longlong *)(lVar10 + 0x88) + 0x9d3) & 0x40) == 0)) {
              FUN_1400b7f40(&local_178,lVar10 + 0x98);
              local_res20 = local_128;
              if (*(code **)(*local_128 + 0x38) == FUN_1400ae550) {
                FUN_1400b12c0(&local_1d8,&local_res20);
                local_res20 = (longlong *)CONCAT44(local_res20._4_4_,(int)local_150);
                FUN_140377390(&local_1a0,&local_res20);
                lVar10 = lStack_198 - local_1a0 >> 2;
                lVar13 = local_1a0;
                if ((int)plVar11 < *(int *)(local_1a0 + -4 + lVar10 * 4)) {
                  plVar11 = (longlong *)(ulonglong)*(uint *)(local_1a0 + -4 + lVar10 * 4);
                  local_res10 = (longlong *)CONCAT44(local_res10._4_4_,(int)lVar10 + -1);
                }
              }
              local_238 = CONCAT44(local_238._4_4_ + local_168._4_4_,(int)local_238 + (int)local_168
                                  );
              iVar30 = iVar30 + (int)local_160;
              iVar19 = iVar19 + local_160._4_4_;
              local_230 = CONCAT44(iVar19,iVar30);
              iVar7 = iVar7 + (int)local_158;
              iVar20 = iVar20 + local_158._4_4_;
              local_228 = CONCAT44(iVar20,iVar7);
            }
          } while (plVar25 != (longlong *)0x0);
        }
      } while (local_1e8 != (longlong *)0x0);
      iVar19 = (int)local_228;
    }
    lVar10 = 0;
    local_1a8 = FUN_1400b1d70(local_118);
    local_1e8 = (longlong *)
                (longlong)
                (int)(*(longlong *)(local_1a8 + 0x1b8) - *(longlong *)(local_1a8 + 0x1b0) >> 3);
    iVar7 = local_230._4_4_;
    iVar30 = (int)local_230;
    if ((longlong)local_1e8 < 1) {
      uVar37 = extraout_XMM0_Da;
      iVar8 = local_238._4_4_;
      iVar21 = (int)local_238;
    }
    else {
      do {
        lVar14 = *(longlong *)(*(longlong *)(*(longlong *)(local_1a8 + 0x1b0) + lVar10 * 8) + 0x28);
        plVar25 = DAT_1416e3148;
        if ((lVar14 != 0) && (*(longlong *)(lVar14 + 0xb0) != 0)) {
          plVar25 = *(longlong **)(*(longlong *)(lVar14 + 0xb0) + 8);
        }
        uVar37 = FUN_14049d190(plVar25,&local_178,0,0);
        local_res20 = local_128;
        if (*(code **)(*local_128 + 0x38) == FUN_1400ae550) {
          FUN_1400b12c0(&local_1d8,&local_res20);
          local_res20 = (longlong *)CONCAT44(local_res20._4_4_,(int)local_150);
          uVar37 = FUN_140377390(&local_1a0,&local_res20);
          lVar14 = lStack_198 - local_1a0 >> 2;
          lVar13 = local_1a0;
          if ((int)plVar11 < *(int *)(local_1a0 + -4 + lVar14 * 4)) {
            plVar11 = (longlong *)(ulonglong)*(uint *)(local_1a0 + -4 + lVar14 * 4);
            local_res10 = (longlong *)CONCAT44(local_res10._4_4_,(int)lVar14 + -1);
          }
        }
        iVar21 = (int)local_238 + (int)local_168;
        iVar8 = local_238._4_4_ + local_168._4_4_;
        local_238 = CONCAT44(iVar8,iVar21);
        iVar30 = iVar30 + (int)local_160;
        iVar7 = iVar7 + local_160._4_4_;
        local_230 = CONCAT44(iVar7,iVar30);
        iVar19 = iVar19 + (int)local_158;
        iVar20 = iVar20 + local_158._4_4_;
        local_228 = CONCAT44(iVar20,iVar19);
        local_220._0_4_ = (int)local_220 + (int)local_150;
        lVar10 = lVar10 + 1;
      } while (lVar10 < (longlong)local_1e8);
    }
  }
  plVar11 = local_1d8;
  lVar10 = 0;
  if (7 < (ulonglong)((longlong)plStack_1d0 - (longlong)local_1d8)) {
    lVar32 = (longlong)(int)local_res10;
    local_110 = (longlong *)local_1d8[lVar32];
    local_1f8 = (longlong *)local_1d8[lVar32];
    local_220._0_4_ = (int)local_220 + *(int *)(lVar13 + lVar32 * 4);
    iVar33 = (int)((longlong)plStack_1d0 - (longlong)local_1d8 >> 3);
    lVar14 = lVar10;
    if (0 < iVar33) {
      do {
        if (lVar14 != lVar32) {
          piVar9 = (int *)((longlong)&local_238 + (longlong)*(int *)(plVar11[lVar14] + 100) * 4);
          *piVar9 = *piVar9 + *(int *)(lVar13 + lVar14 * 4);
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < iVar33);
      local_110 = local_1f8;
      local_res18 = (longlong *)CONCAT44(local_res18._4_4_,local_240);
      iVar20 = local_228._4_4_;
      iVar19 = (int)local_228;
      iVar30 = (int)local_230;
      iVar8 = local_238._4_4_;
      iVar21 = (int)local_238;
      iVar7 = local_230._4_4_;
    }
  }
  iVar33 = *(int *)(param_1 + 0x120);
  local_res10 = (longlong *)(longlong)iVar33;
  lVar14 = (longlong)
           (int)(iVar8 + iVar21 + iVar30 + iVar7 + iVar19 + iVar20 + (int)local_220 +
                local_220._4_4_) * (longlong)local_res10;
  iVar22 = (int)(lVar14 / 1000) / 1000;
  if (iVar22 == 0) {
    if (lVar13 != 0) {
      uVar37 = FUN_1400b0c40(lVar14,lVar13,local_190 - lVar13 >> 2);
    }
    if (local_1d8 == (longlong *)0x0) {
      return;
    }
    FUN_1400b09e0(uVar37,local_1d8,(longlong)(local_1c8 - (longlong)local_1d8) >> 3);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14c);
  if ((iVar1 < 1) || (iVar22 <= iVar1)) {
    iVar1 = *(int *)(param_1 + 0x148);
    if (iVar22 < iVar1) {
      iVar22 = iVar22 * 1000;
      if (iVar22 == 0) {
        iVar22 = -1;
      }
      else if (iVar1 * 1000 + 0x189373U < 0x39580e) {
        iVar22 = (iVar1 * 1000000) / iVar22;
      }
      else {
        iVar22 = (int)(((longlong)(iVar1 * 1000) * 1000) / (longlong)iVar22);
      }
      iVar33 = (int)(((longlong)iVar22 * (longlong)local_res10) / 1000);
    }
  }
  else {
    iVar22 = iVar22 * 1000;
    if (iVar22 == 0) {
      iVar22 = -1;
    }
    else if (iVar1 * 1000 + 0x189373U < 0x39580e) {
      iVar22 = (iVar1 * 1000000) / iVar22;
    }
    else {
      iVar22 = (int)(((longlong)(iVar1 * 1000) * 1000) / (longlong)iVar22);
    }
    iVar33 = (int)(((longlong)iVar22 * (longlong)local_res10) / 1000);
  }
  lVar14 = (longlong)iVar33;
  iVar21 = ((int)((iVar21 * lVar14) / 1000) / 1000) * 1000;
  iVar8 = ((int)((iVar8 * lVar14) / 1000) / 1000) * 1000;
  local_238 = CONCAT44(iVar8,iVar21);
  local_218 = CONCAT44(iVar8,iVar21);
  iVar30 = ((int)((iVar30 * lVar14) / 1000) / 1000) * 1000;
  iVar7 = ((int)((iVar7 * lVar14) / 1000) / 1000) * 1000;
  local_230 = CONCAT44(iVar7,iVar30);
  local_210 = CONCAT44(iVar7,iVar30);
  iVar7 = ((int)((iVar19 * lVar14) / 1000) / 1000) * 1000;
  iVar20 = ((int)((iVar20 * lVar14) / 1000) / 1000) * 1000;
  local_228 = CONCAT44(iVar20,iVar7);
  local_208 = CONCAT44(iVar20,iVar7);
  iVar7 = ((int)(((int)local_220 * lVar14) / 1000) / 1000) * 1000;
  local_220 = CONCAT44(local_220._4_4_,iVar7);
  local_200 = CONCAT44(local_200._4_4_,iVar7);
  local_res10 = operator_new(0x240);
  plVar11 = (longlong *)FUN_1401add10(local_res10);
  ppuVar3 = (undefined **)plVar11[2];
  local_res20 = plVar11;
  if (ppuVar3 == &PTR_LAB_141075df8) {
    iVar20 = *(int *)(DAT_1416e3260 + 0x42c) + 1;
    *(int *)(DAT_1416e3260 + 0x42c) = iVar20;
    local_res10 = (longlong *)CONCAT44(iVar20,0x3e);
    FUN_140c425f0(plVar11 + 2,&local_res10);
  }
  else {
    (*(code *)ppuVar3[7])();
  }
  lVar32 = local_1b8;
  FUN_140b98e30(plVar11,local_1b8);
  FUN_140ba5840(plVar11,*(undefined1 *)(param_1 + 0x154));
  *(undefined1 *)(plVar11 + 0x2b) = *(undefined1 *)(param_1 + 0x155);
  local_220 = local_220 & 0xffffffff;
  local_200 = local_200 & 0xffffffff;
  local_res10 = operator_new(0x1b0);
  plVar11 = (longlong *)FUN_140a2a420(local_res10,0);
  lVar2 = local_1b0;
  *(undefined1 *)((longlong)plVar11 + 0x13c) = *(undefined1 *)(param_1 + 0x10a);
  *(undefined1 *)((longlong)plVar11 + 0x13d) = *(undefined1 *)(param_1 + 0x10b);
  lVar14 = *(longlong *)(local_1b0 + 0x28);
  if (((lVar14 != 0) && (*(longlong *)(lVar14 + 0xb0) != 0)) &&
     ((*(byte *)(*(longlong *)(lVar14 + 0xb0) + 0x1b2) & 1) != 0)) {
    *(undefined1 *)((longlong)plVar11 + 0x13e) = 1;
  }
  plVar11[0x28] = *(longlong *)(param_1 + 0x110);
  *(undefined4 *)(plVar11 + 0x29) = *(undefined4 *)(param_1 + 0x150);
  (**(code **)(*plVar11 + 0x38))(plVar11);
  if (*(int *)((longlong)plVar11 + 0x44) == 2) {
    FUN_14023df70(plVar11[10],plVar11);
  }
  *(undefined4 *)((longlong)plVar11 + 0x44) = 4;
  plVar11[0xf] = local_188;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    pcVar26 = (char *)(param_1 + 0x128);
    if (0xf < *(ulonglong *)(param_1 + 0x140)) {
      pcVar26 = *(char **)pcVar26;
    }
    if (*pcVar26 != '\0') {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (pcVar26[lVar10] != '\0');
    }
    FUN_1400b0300(plVar11 + 0x23,pcVar26,lVar10);
  }
  plVar25 = local_res20;
  *(undefined4 *)(plVar11 + 0x14) = local_res18._0_4_;
  *(int *)(plVar11 + 0x15) = (int)local_238;
  *(int *)((longlong)plVar11 + 0xac) = local_238._4_4_;
  *(int *)(plVar11 + 0x16) = (int)local_230;
  *(int *)((longlong)plVar11 + 0xb4) = local_230._4_4_;
  *(int *)(plVar11 + 0x17) = (int)local_228;
  *(int *)((longlong)plVar11 + 0xbc) = local_228._4_4_;
  *(int *)(plVar11 + 0x18) = iVar7;
  *(undefined4 *)((longlong)plVar11 + 0xc4) = 0;
  *(int *)(plVar11 + 0x19) = (int)local_238;
  *(int *)((longlong)plVar11 + 0xcc) = local_238._4_4_;
  *(int *)(plVar11 + 0x1a) = (int)local_230;
  *(int *)((longlong)plVar11 + 0xd4) = local_230._4_4_;
  *(int *)(plVar11 + 0x1b) = (int)local_228;
  *(int *)((longlong)plVar11 + 0xdc) = local_228._4_4_;
  *(int *)(plVar11 + 0x1c) = iVar7;
  *(undefined4 *)((longlong)plVar11 + 0xe4) = 0;
  plVar11[0x1d] = (longlong)local_110;
  if (*(int *)(param_1 + 0x124) != 1000) {
    *(int *)(plVar11 + 0x27) = *(int *)(param_1 + 0x124);
  }
  FUN_140b97bb0(local_res20,plVar11,0xffffffff);
  uVar15 = FUN_1400b1d10(lVar2);
  FUN_1404942d0(uVar15,plVar25);
  lVar10 = local_108;
  if ((*(byte *)(local_108 + 0x1e9) & 2) != 0) {
    cVar5 = FUN_14023cc70(local_108,plVar25,1);
    if (cVar5 == '\0') {
      lVar10 = DAT_1416e2360;
    }
    if ((*(byte *)(lVar10 + 0x1e9) & 2) != 0) {
      FUN_14023aa20(lVar10,plVar11);
    }
  }
  FUN_140b9b660(plVar25);
  uVar37 = FUN_1403bc0c0(DAT_1416e3260 + 0x230,plVar25,plVar25[0x10]);
  if (lVar13 != 0) {
    uVar37 = FUN_1400b0c40(uVar37,lVar13,local_190 - lVar13 >> 2);
  }
  if (local_1d8 != (longlong *)0x0) {
    FUN_1400b09e0(uVar37,local_1d8,(longlong)(local_1c8 - (longlong)local_1d8) >> 3);
  }
LAB_1405c7652:
  iVar7 = 0;
  if (*(char *)(param_1 + 0x118) != '\0') {
    local_1d8 = (longlong *)0x0;
    plStack_1d0 = (longlong *)0x0;
    local_1c8 = local_1c8 & 0xffffff0000000000;
    plVar11 = *(longlong **)(lVar32 + 0xcc0);
    plVar25 = (longlong *)0x0;
    if (plVar11 != (longlong *)0x0) {
      plVar24 = plVar25;
      plVar16 = (longlong *)0x0;
      do {
        plVar23 = (longlong *)*plVar11;
        plVar11 = (longlong *)plVar11[2];
        cVar5 = (**(code **)(*plVar23 + 0x70))(plVar23);
        plVar25 = plVar24;
        plVar18 = plVar16;
        plVar4 = local_1d8;
        if (cVar5 == *(char *)(param_1 + 0x109)) {
          if (plVar23[0x2e] == 0) {
            lVar13 = FUN_1400d3090(plVar23 + 0x2d);
            plVar23[0x2c] = lVar13;
            plVar23[0x2e] = lVar13;
            if (lVar13 == 0) {
              plVar23[0x2e] = DAT_1416e2360;
            }
          }
          plVar4 = local_1d8;
          if (plVar23[0x2e] == local_1b0) {
            local_res10 = plVar16;
            plVar18 = operator_new(0x20);
            *plVar18 = (longlong)plVar23;
            plVar18[1] = (longlong)plVar16;
            plVar18[2] = 0;
            *(undefined1 *)(plVar18 + 3) = 0;
            iVar20 = iVar7 + 1;
            local_1c8 = CONCAT44(local_1c8._4_4_,iVar20);
            bVar36 = iVar7 != 0;
            plVar25 = plVar18;
            local_res18 = plVar18;
            plVar4 = plVar18;
            plStack_1d0 = plVar18;
            iVar7 = iVar20;
            if (bVar36) {
              local_res10[2] = (longlong)plVar18;
              plVar25 = plVar24;
              plVar4 = local_1d8;
            }
          }
        }
        local_1d8 = plVar4;
        plVar24 = plVar25;
        plVar16 = plVar18;
      } while (plVar11 != (longlong *)0x0);
      if (1 < iVar7) {
        FUN_140bb1f20(local_f8,&local_1d8);
        FUN_140bb2050(local_f8);
        FUN_1401c9ac0(local_f8);
      }
    }
    while (plVar25 != (longlong *)0x0) {
      plVar11 = (longlong *)plVar25[2];
      thunk_FUN_140e1c5e4(plVar25,0x20);
      plVar25 = plVar11;
    }
  }
  if (*(char *)(param_1 + 0x154) == '\0') {
    return;
  }
  if ((*(longlong *)(local_1b0 + 0x28) != 0) &&
     ((*(byte *)(*(longlong *)(local_1b0 + 0x28) + 0xd6d) & 2) != 0)) {
    return;
  }
  FUN_1400f8e30(local_1b0);
  return;
}

