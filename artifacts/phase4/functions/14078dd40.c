
ulonglong FUN_14078dd40(longlong *param_1,longlong *param_2)

{
  void *_Buf1;
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_var;
  longlong *plVar5;
  longlong lVar6;
  char *pcVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  byte *pbVar19;
  uint uVar20;
  bool bVar21;
  byte *local_res18;
  byte local_1e8 [2];
  undefined6 uStack_1e6;
  longlong local_1d8;
  ulonglong local_1d0;
  byte local_1c8;
  undefined7 uStack_1c7;
  longlong local_1b8;
  ulonglong local_1b0;
  char local_1a8;
  undefined7 uStack_1a7;
  undefined8 local_198;
  ulonglong local_190;
  byte local_188;
  undefined7 uStack_187;
  longlong local_178;
  ulonglong local_170;
  longlong local_168;
  longlong lStack_160;
  undefined8 local_158;
  undefined1 local_150 [16];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [160];
  undefined **local_88 [12];
  
  local_130 = 0xfffffffffffffffe;
  uVar13 = DAT_1416e3260;
  if (*(char *)(DAT_1416e3260 + 0x420) == '\0') {
    _Buf1 = (void *)*param_1;
    if (param_1[1] - (longlong)_Buf1 >> 2 == param_2[1] - *param_2 >> 2) {
      iVar3 = memcmp(_Buf1,(void *)*param_2,param_1[1] - (longlong)_Buf1);
      uVar13 = CONCAT44(extraout_var,iVar3);
      if (iVar3 == 0) goto LAB_14078dd84;
    }
    plVar5 = (longlong *)
             FUN_1400ae570(local_128,"D:\\jenkins\\workspace\\ck2-steam\\ck2\\source\\gamestate.cpp"
                           ,0x1527,0x1000);
    FUN_140d652c0(plVar5,"Out of sync! Dumping checksums",0x1e);
    uVar2 = FUN_1400b14a0((longlong)*(int *)(*plVar5 + 4) + (longlong)plVar5,10);
    FUN_1400b1350(plVar5,uVar2);
    FUN_1400b0b20(plVar5);
    FUN_140d64ca0(local_88);
    local_88[0] = std::ios_base::vftable;
    std::ios_base::_Ios_base_dtor((ios_base *)local_88);
    uVar20 = 0;
    uVar9 = 0;
    uVar18 = param_2[1] - *param_2 >> 2;
    uVar16 = param_1[1] - *param_1 >> 2;
    uVar17 = (uint)uVar18;
    uVar13 = uVar18;
    if ((int)uVar17 < (int)uVar16) {
      uVar13 = uVar16;
    }
    uVar14 = uVar13 & 0xffffffff;
    uVar4 = uVar20;
    uVar12 = uVar20;
    if ((int)uVar13 != 0) {
      do {
        lVar6 = FUN_1408b69d0();
        uVar17 = (uint)uVar18;
        lVar11 = -1;
        do {
          lVar11 = lVar11 + 1;
        } while (*(char *)(lVar6 + lVar11) != '\0');
        uVar9 = (uint)lVar11;
        if ((uint)lVar11 < uVar4) {
          uVar9 = uVar4;
        }
        uVar12 = uVar12 + 1;
        uVar4 = uVar9;
      } while (uVar12 < (uint)uVar14);
    }
    local_168 = 0;
    lStack_160 = 0;
    local_158 = 0;
    local_res18 = (byte *)(ulonglong)uVar17;
    if ((int)uVar17 < (int)uVar16) {
      local_res18 = (byte *)(uVar16 & 0xffffffff);
    }
    uVar17 = (uint)local_res18;
    if (uVar17 != 0) {
      do {
        pcVar7 = (char *)FUN_1408b69d0();
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (pcVar7[lVar6] != '\0');
        uVar4 = uVar9 - (int)lVar6;
        local_190 = 0xf;
        local_198 = 0;
        local_1a8 = '\0';
        if (0 < (int)uVar4) {
          uVar13 = (ulonglong)uVar4;
          do {
            FUN_1400b0560(&local_1a8,&DAT_14106175c,1);
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        lVar11 = 0;
        local_1d0 = 0xf;
        local_1e8[0] = 0;
        local_1d8 = lVar11;
        FUN_1400b0300(local_1e8,&DAT_1410d860c);
        local_170 = 0xf;
        local_188 = 0;
        lVar6 = lVar11;
        if (*pcVar7 != '\0') {
          lVar6 = -1;
          do {
            lVar6 = lVar6 + 1;
          } while (pcVar7[lVar6] != '\0');
        }
        local_178 = lVar11;
        FUN_1400b0300(&local_188,pcVar7,lVar6);
        uVar8 = FUN_140d5f250(&local_188,&local_1c8,local_1e8);
        FUN_1400b06b0(&local_1a8,uVar8,0,0xffffffffffffffff);
        if (0xf < local_1b0) {
          uVar16 = CONCAT71(uStack_1c7,local_1c8);
          uVar13 = uVar16;
          if (0xfff < local_1b0 + 1) {
            if ((local_1c8 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_140e3f0ac();
            }
            uVar13 = *(ulonglong *)(uVar16 - 8);
            if (uVar16 <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_140e3f0ac();
            }
            if (uVar16 - uVar13 < 8) {
                    /* WARNING: Subroutine does not return */
              FUN_140e3f0ac();
            }
            if (0x27 < uVar16 - uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_140e3f0ac();
            }
          }
          FUN_140e1c5e4(uVar13);
        }
        local_1b0 = 0xf;
        local_1c8 = 0;
        local_1b8 = lVar11;
        if (0xf < local_170) {
          uVar16 = CONCAT71(uStack_187,local_188);
          uVar13 = uVar16;
          if (0xfff < local_170 + 1) {
            if ((local_188 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_140e3f0ac();
            }
            uVar13 = *(ulonglong *)(uVar16 - 8);
            if (uVar16 <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_140e3f0ac();
            }
            if (uVar16 - uVar13 < 8) {
                    /* WARNING: Subroutine does not return */
              FUN_140e3f0ac();
            }
            if (0x27 < uVar16 - uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_140e3f0ac();
            }
          }
          FUN_140e1c5e4(uVar13);
        }
        local_170 = 0xf;
        local_178 = 0;
        local_188 = 0;
        if (0xf < local_1d0) {
          uVar16 = CONCAT62(uStack_1e6,CONCAT11(local_1e8[1],local_1e8[0]));
          uVar13 = uVar16;
          if (0xfff < local_1d0 + 1) {
            if ((local_1e8[0] & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_140e3f0ac();
            }
            uVar13 = *(ulonglong *)(uVar16 - 8);
            if (uVar16 <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_140e3f0ac();
            }
            if (uVar16 - uVar13 < 8) {
                    /* WARNING: Subroutine does not return */
              FUN_140e3f0ac();
            }
            if (0x27 < uVar16 - uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_140e3f0ac();
            }
          }
          FUN_140e1c5e4(uVar13);
        }
        if (uVar20 < (uint)(param_2[1] - *param_2 >> 2)) {
          iVar3 = *(int *)(*param_2 + (longlong)(int)uVar20 * 4);
          local_1b0 = 0xf;
          local_1b8 = 0;
          local_1c8 = 0;
          if (iVar3 == 0) {
            local_1e8[0] = 0x30;
            local_1e8[1] = 0;
LAB_14078e197:
            lVar15 = -1;
            do {
              lVar1 = lVar15 + 1;
              lVar6 = lVar15 + 1;
              lVar15 = lVar15 + 1;
            } while (local_1e8[lVar1] != 0);
          }
          else {
            bVar21 = iVar3 < 0;
            if (bVar21) {
              iVar3 = -iVar3;
              local_1e8[0] = 0x2d;
            }
            uVar13 = (ulonglong)bVar21;
            lVar6 = lVar11;
            iVar10 = iVar3;
            if (0 < iVar3) {
              do {
                lVar6 = lVar6 + 1;
                iVar10 = iVar10 / 10;
              } while (0 < iVar10);
              pbVar19 = local_1e8 + uVar13 + lVar6 + -1;
              do {
                iVar10 = iVar3 / 10;
                *pbVar19 = (char)iVar3 + (char)iVar10 * -10 + 0x30;
                pbVar19 = pbVar19 + -1;
                iVar3 = iVar10;
              } while (0 < iVar10);
            }
            local_1e8[uVar13 + lVar6] = 0;
            lVar6 = lVar11;
            if (local_1e8[0] != 0) goto LAB_14078e197;
          }
          FUN_1400b0300(&local_1c8,local_1e8,lVar6);
          FUN_1400b06b0(&local_1a8,&local_1c8,0,0xffffffffffffffff);
          if (0xf < local_1b0) {
            FUN_1400ad750(CONCAT71(uStack_1c7,local_1c8),local_1b0 + 1,1);
          }
        }
        else {
          FUN_1400b0560(&local_1a8,&DAT_141070cf0,3);
        }
        FUN_1400b0560(&local_1a8,&DAT_141078ac8);
        if (uVar20 < (uint)(param_1[1] - *param_1 >> 2)) {
          local_1d0 = 0xf;
          local_1e8[0] = 0;
          local_1d8 = lVar11;
          pcVar7 = (char *)FUN_140d5e4a0(*(undefined4 *)(*param_1 + (longlong)(int)uVar20 * 4),
                                         &local_1c8);
          lVar6 = lVar11;
          if (*pcVar7 != '\0') {
            lVar6 = -1;
            do {
              lVar6 = lVar6 + 1;
            } while (pcVar7[lVar6] != '\0');
          }
          FUN_1400b0300(local_1e8,pcVar7,lVar6);
          FUN_1400b06b0(&local_1a8,local_1e8,0,0xffffffffffffffff);
          if (0xf < local_1d0) {
            FUN_1400b08c0(local_1e8,CONCAT62(uStack_1e6,CONCAT11(local_1e8[1],local_1e8[0])),
                          local_1d0 + 1);
          }
        }
        else {
          FUN_1400b0560(&local_1a8,&DAT_141070cf0,3);
        }
        FUN_1400b0560(&local_1a8,&DAT_141070c9c,1);
        if ((((uint)(param_2[1] - *param_2 >> 2) <= uVar20) ||
            ((uint)(param_1[1] - *param_1 >> 2) <= uVar20)) ||
           (*(int *)(*param_2 + (longlong)(int)uVar20 * 4) !=
            *(int *)(*param_1 + (longlong)(int)uVar20 * 4))) {
          FUN_1400b0560(&local_1a8," <<< Mismatch!");
          local_res18 = (byte *)CONCAT44(local_res18._4_4_,uVar20);
          FUN_140152c20(&local_168,&local_res18);
        }
        local_res18 = &local_1c8;
        pcVar7 = &local_1a8;
        if (0xf < local_190) {
          pcVar7 = (char *)CONCAT71(uStack_1a7,local_1a8);
        }
        local_1b0 = 0xf;
        local_1b8 = 0;
        local_1c8 = 0;
        if (*pcVar7 != '\0') {
          lVar11 = -1;
          do {
            lVar11 = lVar11 + 1;
          } while (pcVar7[lVar11] != '\0');
        }
        FUN_1400b0300(&local_1c8,pcVar7,lVar11);
        uVar8 = FUN_1400ae570(local_128,
                              "D:\\jenkins\\workspace\\ck2-steam\\ck2\\source\\gamestate.cpp",0x1554
                             );
        plVar5 = (longlong *)FUN_140d64fe0(uVar8,&local_1c8);
        uVar2 = FUN_1400b14a0((longlong)*(int *)(*plVar5 + 4) + (longlong)plVar5,10);
        FUN_1400b1350(plVar5,uVar2);
        FUN_1400b0b20(plVar5);
        FUN_140d64ca0(local_88);
        local_88[0] = std::ios_base::vftable;
        std::ios_base::_Ios_base_dtor((ios_base *)local_88);
        if (0xf < local_190) {
          FUN_1400b08c0(&local_1a8,CONCAT71(uStack_1a7,local_1a8));
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar17);
    }
    lVar6 = local_168;
    lVar11 = 0;
    if ((int)(param_2[1] - *param_2 >> 2) == (int)(param_1[1] - *param_1 >> 2)) {
      local_138 = 0xf;
      local_140 = 0;
      local_150[0] = 0;
      FUN_1400b0300(local_150,&DAT_14106162d);
      if ((0 < DAT_1417e3b70) && (iVar3 = (int)(lStack_160 - lVar6 >> 2), 0 < iVar3)) {
        do {
          pcVar7 = (char *)FUN_1408b69d0(*(undefined4 *)(lVar6 + lVar11 * 4));
          if (*pcVar7 == '\0') {
            lVar15 = 0;
          }
          else {
            lVar15 = -1;
            do {
              lVar15 = lVar15 + 1;
            } while (pcVar7[lVar15] != '\0');
          }
          FUN_1400b0560(local_150,pcVar7,lVar15);
          FUN_1400b0560(local_150,&DAT_141066f10);
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar3);
      }
      if (DAT_1416e3260 != 0) {
        FUN_14078f990(local_150);
      }
      uVar13 = 1;
      FUN_1400ae4f0(local_150);
    }
    else {
      uVar13 = 0;
    }
    if (lVar6 != 0) {
      FUN_1400b0c40();
    }
  }
  else {
LAB_14078dd84:
    uVar13 = uVar13 & 0xffffffffffffff00;
  }
  return uVar13;
}

