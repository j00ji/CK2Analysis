
void FUN_14081eb60(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  __uint64 _Var6;
  undefined4 *puVar7;
  ulonglong uVar8;
  byte *pbVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  byte local_b8;
  undefined7 uStack_b7;
  undefined8 local_a8;
  ulonglong local_a0;
  byte local_98;
  undefined7 uStack_97;
  undefined8 local_88;
  ulonglong local_80;
  undefined **local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_64;
  byte local_58;
  undefined7 uStack_57;
  undefined8 local_48;
  ulonglong local_40;
  undefined1 local_38;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar8 = 0;
  *(undefined4 *)(param_1 + 0x3b38) = 0;
  uVar11 = uVar8;
  uVar13 = uVar8;
  if (0 < *(int *)(param_1 + 0x3258)) {
    do {
      lVar2 = *(longlong *)(uVar13 + *(longlong *)(param_1 + 0x32c0));
      if ((*(int *)(lVar2 + 0x1b8) < 0) &&
         ((*(char *)(lVar2 + 0x68) != '\0' ||
          ((*(char *)(lVar2 + 100) == '\0' && (cVar4 = FUN_140959950(lVar2), cVar4 == '\0')))))) {
        iVar5 = *(int *)(param_1 + 0x3b38);
        *(int *)(param_1 + 0x3b38) = iVar5 + 1;
        *(int *)(lVar2 + 0x1b8) = iVar5;
      }
      uVar10 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      uVar13 = uVar13 + 8;
    } while ((int)uVar10 < *(int *)(param_1 + 0x3258));
  }
  uVar13 = (ulonglong)(*(int *)(param_1 + 0x3b38) * *(int *)(param_1 + 0x3b38));
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar13;
  _Var6 = SUB168(ZEXT816(4) * auVar3,0);
  uVar11 = 0xffffffffffffffff;
  if (SUB168(ZEXT816(4) * auVar3,8) != 0) {
    _Var6 = 0xffffffffffffffff;
  }
  puVar7 = operator_new(_Var6);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar12 = puVar7;
    if (uVar13 != 0) {
      for (; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
    }
  }
  *(undefined4 **)(param_1 + 0x3b40) = puVar7;
  iVar5 = *(int *)(param_1 + 0x3b38) * *(int *)(param_1 + 0x3b38);
  uVar13 = uVar8;
  if (0 < iVar5) {
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x3b40) + uVar13 * 4) = 0xfffffc18;
      uVar13 = uVar13 + 1;
    } while ((longlong)uVar13 < (longlong)iVar5);
  }
  local_80 = 0xf;
  local_88 = 0;
  local_98 = 0;
  FUN_1400b0300(&local_98,"NavalDists",10);
  local_70 = 0x18e;
  local_78 = &PTR_FUN_1410c8ee8;
  local_68 = 0;
  local_40 = 0xf;
  local_48 = 0;
  local_58 = 0;
  pbVar9 = &local_98;
  if (0xf < local_80) {
    pbVar9 = (byte *)CONCAT71(uStack_97,local_98);
  }
  bVar1 = *pbVar9;
  while (bVar1 != 0) {
    uVar11 = uVar11 + 1;
    uVar8 = uVar11;
    bVar1 = pbVar9[uVar11];
  }
  FUN_1400b0300(&local_58,pbVar9,uVar8);
  local_64 = 0;
  local_68 = 0;
  local_38 = 0;
  if (0xf < local_80) {
    uVar11 = CONCAT71(uStack_97,local_98);
    uVar8 = uVar11;
    if (0xfff < local_80 + 1) {
      if ((local_98 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140e3f0ac();
      }
      uVar8 = *(ulonglong *)(uVar11 - 8);
      if (uVar11 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_140e3f0ac();
      }
      if (uVar11 - uVar8 < 8) {
                    /* WARNING: Subroutine does not return */
        FUN_140e3f0ac();
      }
      if (0x27 < uVar11 - uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_140e3f0ac();
      }
    }
    FUN_140e1c5e4(uVar8);
  }
  local_80 = 0xf;
  local_88 = 0;
  local_98 = 0;
  FUN_1404ddb30(DAT_1416e3150,&local_b8,0xc);
  iVar5 = *(int *)(DAT_1416e3150 + 0x88);
  if (iVar5 != 1) {
    FUN_140c89300(&local_78,&DAT_14108d920,&DAT_141073040,0);
    FUN_140c89300(&local_78,&DAT_14108d920,&DAT_14108da5c,0);
    FUN_140c89300(&local_78,&DAT_14108d920,&DAT_14108da64,0);
    FUN_140c89300(&local_78,&DAT_14108d920,&DAT_14108da6c,0);
  }
  if (iVar5 != 0) {
    pbVar9 = &local_b8;
    if (0xf < local_a0) {
      pbVar9 = (byte *)CONCAT71(uStack_b7,local_b8);
    }
    FUN_140c89300(&local_78,pbVar9,&DAT_141073040,0);
    pbVar9 = &local_b8;
    if (0xf < local_a0) {
      pbVar9 = (byte *)CONCAT71(uStack_b7,local_b8);
    }
    FUN_140c89300(&local_78,pbVar9,&DAT_14108da5c,0);
    pbVar9 = &local_b8;
    if (0xf < local_a0) {
      pbVar9 = (byte *)CONCAT71(uStack_b7,local_b8);
    }
    FUN_140c89300(&local_78,pbVar9,&DAT_14108da64,0);
    pbVar9 = &local_b8;
    if (0xf < local_a0) {
      pbVar9 = (byte *)CONCAT71(uStack_b7,local_b8);
    }
    FUN_140c89300(&local_78,pbVar9,&DAT_14108da6c,0);
  }
  *(undefined4 *)(param_1 + 0x3b48) = local_64._4_4_;
  FUN_14062b800(*(undefined8 *)(DAT_1416e3b28 + 0x208),param_1 + 0x3050);
  FUN_14081b0f0(param_1);
  if (0xf < local_a0) {
    uVar11 = CONCAT71(uStack_b7,local_b8);
    uVar8 = uVar11;
    if (0xfff < local_a0 + 1) {
      if ((local_b8 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140e3f0ac();
      }
      uVar8 = *(ulonglong *)(uVar11 - 8);
      if (uVar11 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_140e3f0ac();
      }
      if (uVar11 - uVar8 < 8) {
                    /* WARNING: Subroutine does not return */
        FUN_140e3f0ac();
      }
      if (0x27 < uVar11 - uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_140e3f0ac();
      }
    }
    FUN_140e1c5e4(uVar8);
  }
  local_a0 = 0xf;
  local_a8 = 0;
  local_b8 = 0;
  if (0xf < local_40) {
    uVar11 = CONCAT71(uStack_57,local_58);
    uVar8 = uVar11;
    if (0xfff < local_40 + 1) {
      if ((local_58 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140e3f0ac();
      }
      uVar8 = *(ulonglong *)(uVar11 - 8);
      if (uVar11 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_140e3f0ac();
      }
      if (uVar11 - uVar8 < 8) {
                    /* WARNING: Subroutine does not return */
        FUN_140e3f0ac();
      }
      if (0x27 < uVar11 - uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_140e3f0ac();
      }
    }
    FUN_140e1c5e4(uVar8);
  }
  return;
}


