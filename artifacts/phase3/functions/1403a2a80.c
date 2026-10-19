
undefined8 FUN_1403a2a80(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong lVar17;
  int iVar18;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_140 [88];
  undefined1 local_e8 [88];
  undefined1 local_90 [88];
  
  plVar15 = (longlong *)FUN_1403a1430(param_1,local_1c0,param_3,param_4,0xfffffffffffffffe);
  lVar17 = *plVar15;
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1b8 + 1;
    lVar12 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_1b8)(local_1b8);
      LOCK();
      piVar1 = (int *)((longlong)local_1b8 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_1b8 + 8))(local_1b8);
      }
    }
  }
  if (lVar17 == 0) {
    return 0;
  }
  puVar16 = (undefined8 *)FUN_1403a1430(param_1,local_1a0);
  bVar10 = false;
  iVar13 = (**(code **)(*(longlong *)*puVar16 + 0x60))();
  if (iVar13 == 3) {
    plVar15 = (longlong *)FUN_1403a1430(param_1,local_1b0);
    bVar10 = true;
    if (*(longlong *)(*plVar15 + 0x18) != param_1) goto LAB_1403a2b51;
    bVar11 = true;
  }
  else {
LAB_1403a2b51:
    bVar11 = false;
  }
  if ((bVar10) && (local_1a8 != (longlong *)0x0)) {
    LOCK();
    plVar15 = local_1a8 + 1;
    lVar17 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_1a8)(local_1a8);
      LOCK();
      piVar1 = (int *)((longlong)local_1a8 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_1a8 + 8))(local_1a8);
      }
    }
  }
  if (local_198 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_198 + 1;
    lVar17 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_198)(local_198);
      LOCK();
      piVar1 = (int *)((longlong)local_198 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_198 + 8))(local_198);
      }
    }
  }
  if (bVar11) {
    return 0;
  }
  plVar15 = (longlong *)FUN_1403a1430(param_1,local_190);
  bVar10 = *(int *)(*plVar15 + 0x38) < DAT_1416e2644;
  if (local_188 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_188 + 1;
    lVar17 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_188)(local_188);
      LOCK();
      piVar1 = (int *)((longlong)local_188 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_188 + 8))(local_188);
      }
    }
  }
  if (bVar10) {
    return 1;
  }
  lVar17 = FUN_140bbb130((longlong *)(param_1 + 0x30),local_140,1);
  iVar13 = *(int *)(lVar17 + 0x10);
  iVar2 = *(int *)(lVar17 + 0x14);
  iVar3 = *(int *)(lVar17 + 0x18);
  iVar4 = *(int *)(lVar17 + 0x1c);
  iVar5 = *(int *)(lVar17 + 0x20);
  iVar6 = *(int *)(lVar17 + 0x24);
  iVar7 = *(int *)(lVar17 + 0x28);
  iVar8 = *(int *)(lVar17 + 0x2c);
  plVar15 = (longlong *)FUN_1403a1430(param_1,local_180);
  lVar17 = *(longlong *)(*plVar15 + 0x10);
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_178 + 1;
    lVar12 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar1 = (int *)((longlong)local_178 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_178 + 8))(local_178);
      }
    }
  }
  if (lVar17 == param_1) {
    plVar15 = (longlong *)FUN_1403a1430(param_1,local_170);
    lVar17 = *(longlong *)(*plVar15 + 0x18);
    if (local_168 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_168 + 1;
      lVar12 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_168)(local_168);
        LOCK();
        piVar1 = (int *)((longlong)local_168 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_168 + 8))(local_168);
        }
      }
    }
  }
  puVar16 = (undefined8 *)FUN_1403a1430(param_1,local_150);
  bVar10 = false;
  iVar14 = (**(code **)(*(longlong *)*puVar16 + 0x60))();
  if (iVar14 == 3) {
    plVar15 = (longlong *)FUN_1403a1430(param_1,local_160);
    bVar10 = true;
    if (*(longlong *)(*plVar15 + 0x18) == lVar17) {
      bVar11 = true;
      goto LAB_1403a2d53;
    }
  }
  bVar11 = false;
LAB_1403a2d53:
  if ((bVar10) && (local_158 != (longlong *)0x0)) {
    LOCK();
    plVar15 = local_158 + 1;
    lVar12 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar1 = (int *)((longlong)local_158 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_158 + 8))(local_158);
      }
    }
  }
  if (local_148 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_148 + 1;
    lVar12 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_148)(local_148);
      LOCK();
      piVar1 = (int *)((longlong)local_148 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*local_148 + 8))(local_148);
      }
    }
  }
  if (bVar11) {
    lVar17 = FUN_1403a3bf0(lVar17,local_e8);
    iVar18 = *(int *)(lVar17 + 0x10) + *(int *)(lVar17 + 0x14) + *(int *)(lVar17 + 0x18) +
             *(int *)(lVar17 + 0x1c) + *(int *)(lVar17 + 0x20) + *(int *)(lVar17 + 0x24) +
             *(int *)(lVar17 + 0x28) + *(int *)(lVar17 + 0x2c);
    iVar14 = 500;
  }
  else {
    lVar17 = FUN_140bbb130(lVar17 + 0x30,local_90,1);
    iVar18 = *(int *)(lVar17 + 0x10) + *(int *)(lVar17 + 0x14) + *(int *)(lVar17 + 0x18) +
             *(int *)(lVar17 + 0x1c) + *(int *)(lVar17 + 0x20) + *(int *)(lVar17 + 0x24) +
             *(int *)(lVar17 + 0x28) + *(int *)(lVar17 + 0x2c);
    iVar14 = 1000;
  }
  if (iVar18 <= (int)(((longlong)(int)(((longlong)iVar14 * (longlong)DAT_1416e261c) / 1000) *
                      (longlong)(iVar13 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8)) /
                     1000)) {
    return 0;
  }
  plVar15 = *(longlong **)(param_1 + 0x30);
  if (plVar15 != (longlong *)0x0) {
    do {
      lVar17 = *plVar15;
      plVar15 = (longlong *)plVar15[2];
      puVar16 = (undefined8 *)(lVar17 + 0x38);
      if (lVar17 == 0) {
        puVar16 = (undefined8 *)0x0;
      }
      plVar9 = (longlong *)*puVar16;
      while (plVar9 != (longlong *)0x0) {
        lVar17 = *plVar9;
        plVar9 = (longlong *)plVar9[2];
        if (*(code **)(**(longlong **)(lVar17 + 0xe8) + 0x38) == FUN_1400ae550) {
          *(longlong **)(param_2 + 0x50) = *(longlong **)(lVar17 + 0xe8);
        }
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + *(int *)(lVar17 + 0xa8);
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + *(int *)(lVar17 + 0xac);
        *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + *(int *)(lVar17 + 0xb0);
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + *(int *)(lVar17 + 0xb4);
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + *(int *)(lVar17 + 0xb8);
        *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + *(int *)(lVar17 + 0xbc);
        *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + *(int *)(lVar17 + 0xc0);
        *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + *(int *)(lVar17 + 0xc4);
      }
    } while (plVar15 != (longlong *)0x0);
  }
  return 1;
}

