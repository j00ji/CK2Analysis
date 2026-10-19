
void FUN_14039c360(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  __uint64 _Var10;
  void *pvVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  undefined4 *local_res8;
  ulonglong local_258;
  longlong lStack_250;
  longlong local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined1 local_234 [524];
  
  local_240 = 0xfffffffffffffffe;
  lVar15 = *(longlong *)(param_1 + 0x10);
  if (((*(byte *)(lVar15 + 0x1e9) & 2) != 0) &&
     ((*(longlong *)(lVar15 + 0x28) == 0 ||
      ((*(byte *)(*(longlong *)(lVar15 + 0x28) + 0xd6c) & 2) == 0)))) {
    if (DAT_1417e6c90 < *(int *)(lVar15 + 0xbc)) {
      piVar8 = (int *)FUN_14077c7b0(DAT_1416e3260);
      if ((*piVar8 < *(int *)(lVar15 + 0xb8)) || (*(int *)(lVar15 + 0xbc) <= *piVar8))
      goto LAB_14039c3f5;
    }
    FUN_140c33d00(param_2,0x27ff,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x14));
  }
LAB_14039c3f5:
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x1e9) & 2) != 0) {
    lVar15 = *(longlong *)(param_1 + 0x10);
    if ((*(longlong *)(lVar15 + 0x28) == 0) ||
       ((*(byte *)(*(longlong *)(lVar15 + 0x28) + 0xd6c) & 2) == 0)) {
      if (DAT_1417e6c90 < *(int *)(lVar15 + 0xbc)) {
        piVar8 = (int *)FUN_14077c7b0(DAT_1416e3260);
        if ((*piVar8 < *(int *)(lVar15 + 0xb8)) || (*(int *)(lVar15 + 0xbc) <= *piVar8))
        goto LAB_14039c459;
      }
      FUN_140c33d00(param_2,0x2d58,*(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x14));
    }
  }
LAB_14039c459:
  plVar3 = *(longlong **)(param_1 + 0x70);
  lVar15 = 0;
  if (*(code **)(*plVar3 + 0x38) != FUN_1400ae550) {
    if (DAT_1416e3a78 == (undefined4 *)0x0) {
      puVar9 = operator_new(0x28);
      *puVar9 = 0;
      puVar9[1] = 0x1ff;
      _Var10 = SUB168(ZEXT816(8) * ZEXT816(0x1ff),0);
      if (SUB168(ZEXT816(8) * ZEXT816(0x1ff),8) != 0) {
        _Var10 = 0xffffffffffffffff;
      }
      local_res8 = puVar9;
      pvVar11 = operator_new(_Var10);
      *(void **)(puVar9 + 2) = pvVar11;
      FUN_140e3cff0(pvVar11,0,(ulonglong)(uint)puVar9[1] << 3);
      *(undefined8 *)(puVar9 + 4) = 0;
      *(undefined8 *)(puVar9 + 6) = 0;
      *(undefined8 *)(puVar9 + 8) = 0;
      DAT_1416e3a78 = puVar9;
    }
    if (1 < (int)(*(longlong *)(DAT_1416e3a78 + 6) - *(longlong *)(DAT_1416e3a78 + 4) >> 3)) {
      if (DAT_1416e3a78 == (undefined4 *)0x0) {
        puVar9 = operator_new(0x28);
        *puVar9 = 0;
        puVar9[1] = 0x1ff;
        _Var10 = SUB168(ZEXT816(8) * ZEXT816(0x1ff),0);
        if (SUB168(ZEXT816(8) * ZEXT816(0x1ff),8) != 0) {
          _Var10 = 0xffffffffffffffff;
        }
        local_res8 = puVar9;
        pvVar11 = operator_new(_Var10);
        *(void **)(puVar9 + 2) = pvVar11;
        FUN_140e3cff0(pvVar11,0,(ulonglong)(uint)puVar9[1] << 3);
        *(undefined8 *)(puVar9 + 4) = 0;
        *(undefined8 *)(puVar9 + 6) = 0;
        *(undefined8 *)(puVar9 + 8) = 0;
        DAT_1416e3a78 = puVar9;
      }
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(*(longlong *)(DAT_1416e3a78 + 4) + 8);
    }
  }
  FUN_140c34e50(param_2,0x2830);
  (**(code **)(*(longlong *)(param_1 + 0x20) + 8))(param_1 + 0x20,param_2);
  *(longlong **)(param_1 + 0x70) = plVar3;
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  FUN_140c34e50(param_2,0x6b);
  local_238 = 0xc;
  FUN_1407f5cd0(local_234,&DAT_1410debe8,uVar2);
  FUN_140c34490(param_2,&local_238);
  if (*(char *)(param_2 + 0x100) == '\0') {
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
              (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
  }
  local_258 = 0;
  lStack_250 = 0;
  local_248 = 0;
  iVar6 = (int)(*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80) >> 3);
  lVar13 = DAT_1418d6ab0;
  lVar17 = DAT_1418d6ab8;
  if (0 < iVar6) {
    do {
      lVar12 = lVar13;
      if (((lVar17 != 0) &&
          (uVar7 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + lVar15 * 8) + 0x80) &
                   0xffffff, uVar7 < *(uint *)(lVar17 + 0x28))) &&
         (lVar12 = *(longlong *)(*(longlong *)(lVar17 + 0x20) + 8 + (ulonglong)uVar7 * 0x10),
         lVar12 == 0)) {
        lVar12 = lVar13;
      }
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x80) + lVar15 * 8);
      if (lVar4 != *(longlong *)(lVar12 + 0xcc0)) {
        local_res8 = (undefined4 *)CONCAT44(local_res8._4_4_,*(undefined4 *)(lVar4 + 0x14));
        FUN_14011d6b0(&local_258,&local_res8);
        lVar13 = DAT_1418d6ab0;
        lVar17 = DAT_1418d6ab8;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar6);
  }
  lVar15 = local_248;
  uVar5 = local_258;
  FUN_140170690(param_2,0x28c8,local_258,(longlong)(lStack_250 - local_258) >> 2);
  iVar6 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x204);
  if (iVar6 != 0) {
    FUN_140c34e50(param_2,0x2d59);
    local_238 = 0xc;
    FUN_1407f5cd0(local_234,&DAT_1410debe8,iVar6);
    FUN_140c34490(param_2,&local_238);
    if (*(char *)(param_2 + 0x100) == '\0') {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
                (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
    }
  }
  uVar2 = *(undefined4 *)(param_1 + 0xb0);
  FUN_140c34e50(param_2,0x2d5a);
  local_238 = 0xc;
  FUN_1407f5cd0(local_234,&DAT_1410debe8,uVar2);
  FUN_140c34490(param_2,&local_238);
  if (*(char *)(param_2 + 0x100) == '\0') {
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
              (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
  }
  uVar2 = *(undefined4 *)(param_1 + 0xb4);
  FUN_140c34e50(param_2,0x283a);
  local_238 = 0xc;
  FUN_1407f5cd0(local_234,&DAT_1410debe8,uVar2);
  FUN_140c34490(param_2,&local_238);
  if (*(char *)(param_2 + 0x100) == '\0') {
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
              (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
  }
  iVar6 = *(int *)(param_1 + 0xb8);
  if (iVar6 != 0) {
    FUN_140c34e50(param_2,0x2aca);
    local_238 = 0xc;
    FUN_1407f5cd0(local_234,&DAT_1410debe8,iVar6);
    FUN_140c34490(param_2,&local_238);
    if (*(char *)(param_2 + 0x100) == '\0') {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
                (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
    }
  }
  cVar1 = *(char *)(param_1 + 0xc0);
  puVar14 = &DAT_1410d2e70;
  if (cVar1 != '\0') {
    FUN_140c34e50(param_2,0x2842);
    local_238 = 0xe;
    puVar18 = &DAT_1410d2e70;
    if (cVar1 != '\0') {
      puVar18 = &DAT_1410d2e6c;
    }
    FUN_1407f5cd0(local_234,&DAT_141073ac8,puVar18);
    FUN_140c34490(param_2,&local_238);
    if (*(char *)(param_2 + 0x100) == '\0') {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
                (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
    }
  }
  cVar1 = *(char *)(param_1 + 0xc1);
  if (cVar1 != '\0') {
    FUN_140c34e50(param_2,0x2c1c);
    local_238 = 0xe;
    puVar18 = &DAT_1410d2e70;
    if (cVar1 != '\0') {
      puVar18 = &DAT_1410d2e6c;
    }
    FUN_1407f5cd0(local_234,&DAT_141073ac8,puVar18);
    FUN_140c34490(param_2,&local_238);
    if (*(char *)(param_2 + 0x100) == '\0') {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
                (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
    }
  }
  cVar1 = *(char *)(param_1 + 0xc2);
  if (cVar1 != '\0') {
    FUN_140c34e50(param_2,0x2f78);
    local_238 = 0xe;
    if (cVar1 != '\0') {
      puVar14 = &DAT_1410d2e6c;
    }
    FUN_1407f5cd0(local_234,&DAT_141073ac8,puVar14);
    FUN_140c34490(param_2,&local_238);
    if (*(char *)(param_2 + 0x100) == '\0') {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
                (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
    }
  }
  if (uVar5 != 0) {
    uVar16 = (longlong)(lVar15 - uVar5) >> 2;
    if (0x3fffffffffffffff < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_140e3f0ac();
    }
    uVar19 = uVar5;
    if (0xfff < uVar16 * 4) {
      if ((uVar5 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140e3f0ac();
      }
      uVar19 = *(ulonglong *)(uVar5 - 8);
      if (uVar5 <= uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_140e3f0ac();
      }
      if (uVar5 - uVar19 < 8) {
                    /* WARNING: Subroutine does not return */
        FUN_140e3f0ac();
      }
      if (0x27 < uVar5 - uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_140e3f0ac();
      }
    }
    FUN_140e1c5e4(uVar19);
  }
  return;
}

