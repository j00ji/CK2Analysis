
undefined8 FUN_1408cf780(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  float _X;
  double dVar24;
  longlong *local_res10;
  int iStack0000000000000028;
  longlong lStack0000000000000030;
  undefined **local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  void *local_d0;
  undefined8 *local_c8;
  undefined8 *puStack_c0;
  int local_b8;
  undefined1 local_b4;
  undefined8 *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 *local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 local_80;
  
  local_80 = 0xfffffffffffffffe;
  local_88 = DAT_1416e32d8;
  local_c8 = (undefined8 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  local_b4 = 0;
  local_e8 = &PTR_FUN_1410669c0;
  local_e0 = (undefined8 *)0x0;
  local_d8 = 0;
  iVar9 = *(int *)(DAT_1416e32d8 + 0x3258);
  local_d0 = operator_new((longlong)iVar9);
  FUN_140e3cff0(local_d0,0,(longlong)iVar9);
  puVar10 = operator_new(0x18);
  *puVar10 = param_2;
  puVar10[1] = 0;
  puVar10[2] = 0;
  uVar21 = 1;
  uVar23 = 1;
  local_d8 = 0x100000001;
  puVar11 = operator_new(0x18);
  *puVar11 = puVar10;
  puVar11[1] = 0;
  puVar11[2] = 0;
  local_e0 = puVar11;
  local_c8 = operator_new(0x20);
  *local_c8 = puVar10;
  local_c8[1] = 0;
  local_c8[2] = 0;
  *(undefined1 *)(local_c8 + 3) = 0;
  fVar4 = DAT_141164eec;
  fVar3 = DAT_141164be0;
  local_b8 = 1;
  puStack_c0 = local_c8;
  local_b0 = local_c8;
  local_98 = local_c8;
  do {
    if ((uVar21 == 0) || (puVar11 == (undefined8 *)0x0)) {
LAB_1408cf95a:
      local_res10 = (longlong *)0x0;
    }
    else {
      uVar22 = (uint)uVar23;
      if (uVar21 == 1) {
        local_res10 = (longlong *)*puVar11;
        thunk_FUN_140e1c5e4(puVar11,0x18);
        local_e0 = (undefined8 *)0x0;
        puVar11 = (undefined8 *)0x0;
      }
      else {
        iVar9 = (int)(uVar23 >> 1);
        uVar8 = uVar22 + iVar9;
        if (uVar21 < uVar8) {
          lVar17 = 8;
          uVar18 = uVar23;
        }
        else {
          uVar18 = (ulonglong)uVar8;
          lVar17 = 0x10;
        }
        puVar10 = *(undefined8 **)(lVar17 + (longlong)puVar11);
        if (iVar9 == 1) {
          local_res10 = (longlong *)*puVar10;
          thunk_FUN_140e1c5e4(puVar10,0x18);
          *(undefined8 *)(lVar17 + (longlong)puVar11) = 0;
        }
        else {
          local_res10 = (longlong *)FUN_1400d4e30(puVar10,uVar21,uVar18);
        }
      }
      uVar21 = uVar21 - 1;
      if (uVar21 < uVar22) {
        local_d8._4_4_ = uVar22 >> 1;
        uVar23 = (ulonglong)local_d8._4_4_;
      }
      local_d8 = CONCAT44(local_d8._4_4_,uVar21);
      if (local_res10 == (longlong *)0x0) goto LAB_1408cf95a;
      if (puVar11 != (undefined8 *)0x0) {
        plVar12 = (longlong *)*puVar11;
        FUN_1400d4ea0(puVar11,local_res10);
        local_res10 = plVar12;
      }
    }
    lVar17 = *local_res10;
    local_a8 = lVar17;
    if (*(char *)((ulonglong)*(ushort *)(lVar17 + 0xe8) + (longlong)local_d0) == '\0') {
      *(undefined1 *)((ulonglong)*(ushort *)(lVar17 + 0xe8) + (longlong)local_d0) = 1;
      if (param_3 == lVar17) {
        FUN_1408cead0(local_res10,param_4);
        puVar10 = local_98;
        break;
      }
      lVar1 = *(longlong *)(lVar17 + 0xf0);
      iStack0000000000000028 = 0;
      local_a0 = 0;
      lVar14 = *(longlong *)(lVar1 + 0x1a0) - *(longlong *)(lVar1 + 0x198);
      iVar13 = (int)(lVar14 >> 0x3f);
      iVar9 = (int)(lVar14 / 0x18) + iVar13;
      if (iVar9 != iVar13 && -1 < iVar9 - iVar13) {
        lStack0000000000000030 = 0;
        do {
          uVar15 = 0;
          if ((-1 < local_a0) &&
             (iStack0000000000000028 <
              (int)((*(longlong *)(lVar1 + 0x1a0) - *(longlong *)(lVar1 + 0x198)) / 0x18))) {
            uVar15 = *(undefined4 *)(lStack0000000000000030 + 4 + *(longlong *)(lVar1 + 0x198));
          }
          lVar14 = FUN_140822200(local_88,uVar15);
          if ((*(int *)(lStack0000000000000030 + *(longlong *)(lVar1 + 0x198)) != 3) &&
             (((lVar14 == param_3 ||
               (((lVar2 = *(longlong *)(lVar14 + 0xf0), *(char *)(lVar2 + 100) == '\0' &&
                 (cVar7 = FUN_140959950(lVar2), cVar7 == '\0')) && (*(char *)(lVar2 + 0x6b) == '\0')
                ))) && (*(char *)((ulonglong)*(ushort *)(lVar14 + 0xe8) + (longlong)local_d0) ==
                        '\0')))) {
            lVar2 = *(longlong *)(lVar14 + 0xf0);
            iVar9 = (int)(short)(*(short *)(*(longlong *)(lVar17 + 0xf0) + 0xa6) -
                                *(short *)(lVar2 + 0xa6));
            iVar13 = (int)(short)(*(short *)(*(longlong *)(lVar17 + 0xf0) + 0xa4) -
                                 *(short *)(lVar2 + 0xa4));
            dVar24 = (double)FUN_140e57a68((double)(iVar13 * iVar13 + iVar9 * iVar9));
            _X = (float)dVar24 * fVar4 + fVar3;
            if ((float)dVar24 < 0.0) {
              _X = floorf(_X);
            }
            iVar9 = (int)_X;
            if (-1 < iVar9) {
              iVar13 = (int)*(short *)(*(longlong *)(param_3 + 0xf0) + 0xa4) -
                       (int)*(short *)(lVar2 + 0xa4);
              iVar19 = (int)*(short *)(*(longlong *)(param_3 + 0xf0) + 0xa6) -
                       (int)*(short *)(lVar2 + 0xa6);
              iVar20 = iVar19 * iVar19 + iVar13 * iVar13;
              iVar19 = iVar20 / 2;
              iVar13 = iVar20;
              if (1 < iVar20) {
                do {
                  iVar13 = iVar19;
                  iVar19 = (iVar20 / iVar13 + iVar13) / 2;
                } while (iVar19 < iVar13);
              }
              plVar12 = operator_new(0x18);
              puVar10 = local_b0;
              iVar19 = *(int *)((longlong)local_res10 + 0xc);
              *plVar12 = lVar14;
              *(int *)(plVar12 + 1) = iVar9 + iVar19 + iVar13 * 1000;
              *(int *)((longlong)plVar12 + 0xc) = iVar19 + iVar9;
              plVar12[2] = (longlong)local_res10;
              local_90 = plVar12;
              puStack_c0 = operator_new(0x20);
              *puStack_c0 = plVar12;
              puStack_c0[1] = puVar10;
              puStack_c0[2] = 0;
              *(undefined1 *)(puStack_c0 + 3) = 0;
              puVar5 = puStack_c0;
              puVar6 = puStack_c0;
              if (local_b8 != 0) {
                puVar10[2] = puStack_c0;
                puVar5 = local_c8;
                puVar6 = local_98;
              }
              local_98 = puVar6;
              local_c8 = puVar5;
              local_b0 = puStack_c0;
              local_90 = puStack_c0;
              if (puVar11 == (undefined8 *)0x0) {
                uVar21 = 1;
                uVar23 = 1;
                local_d8 = 0x100000001;
                local_b8 = local_b8 + 1;
                puVar11 = operator_new(0x18);
                *puVar11 = plVar12;
                puVar11[1] = 0;
                puVar11[2] = 0;
                lVar17 = local_a8;
                local_e0 = puVar11;
                local_90 = puVar11;
              }
              else {
                uVar21 = uVar21 + 1;
                uVar22 = (int)uVar23 * 2;
                if (uVar22 <= uVar21) {
                  uVar23 = (ulonglong)uVar22;
                }
                local_d8 = CONCAT44((int)uVar23,uVar21);
                local_b8 = local_b8 + 1;
                FUN_1408d1620(puVar11,plVar12,uVar21,uVar23,(int)uVar23);
                lVar17 = local_a8;
              }
            }
          }
          iStack0000000000000028 = iStack0000000000000028 + 1;
          local_a0 = local_a0 + 1;
          lStack0000000000000030 = lStack0000000000000030 + 0x18;
        } while (iStack0000000000000028 <
                 (int)((*(longlong *)(lVar1 + 0x1a0) - *(longlong *)(lVar1 + 0x198)) / 0x18));
      }
    }
    puVar10 = local_98;
  } while (uVar21 != 0);
  while (puVar10 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)puVar10[2];
    thunk_FUN_140e1c5e4(*puVar10,0x18);
    thunk_FUN_140e1c5e4(puVar10,0x20);
    puVar10 = puVar11;
  }
  local_c8 = (undefined8 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  uVar16 = 0;
  local_b8 = 0;
  thunk_FUN_140e1c5e4(local_d0);
  if (0 < (int)param_4[2]) {
    lVar17 = *param_4;
    if (lVar17 != 0) {
      if (*(char *)((longlong)param_4 + 0x14) == '\0') {
        lVar1 = *(longlong *)(lVar17 + 0x10);
        *param_4 = lVar1;
        if (lVar1 == 0) {
          param_4[1] = 0;
        }
        else {
          *(undefined8 *)(lVar1 + 8) = 0;
        }
        thunk_FUN_140e1c5e4(lVar17,0x20);
        *(int *)(param_4 + 2) = (int)param_4[2] + -1;
      }
      else {
        *(undefined1 *)(lVar17 + 0x18) = 1;
      }
    }
    uVar16 = 1;
  }
  local_e8 = &PTR_FUN_1410669c0;
  FUN_1400d4ca0(&local_e8);
  return uVar16;
}

