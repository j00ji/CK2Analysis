
ulonglong FUN_140b95ce0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  longlong *in_RAX;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 local_c8 [88];
  undefined1 local_70 [88];
  
  puVar10 = *(undefined8 **)(param_2 + 0xcc0);
  do {
    do {
      if (puVar10 == (undefined8 *)0x0) {
        return (ulonglong)in_RAX & 0xffffffffffffff00;
      }
      plVar11 = (longlong *)*puVar10;
      puVar10 = (undefined8 *)puVar10[2];
      in_RAX = (longlong *)(**(code **)(*plVar11 + 0x70))(plVar11);
    } while ((char)in_RAX == '\0');
    lVar13 = (**(code **)(*param_1 + 0x48))(param_1);
    plVar14 = (longlong *)(**(code **)(*plVar11 + 0x60))();
    lVar18 = DAT_1417e3b58;
    lVar15 = DAT_1417e3b50;
    plVar11 = DAT_1416e2360;
    in_RAX = plVar14;
    if (plVar14[0x2e] == 0) {
      uVar1 = *(uint *)(plVar14 + 0x2d);
      lVar17 = DAT_1417e3b58;
      if (0x1268 < uVar1) {
        lVar17 = DAT_1417e3b50;
      }
      if (lVar17 != 0) {
        for (plVar16 = *(longlong **)
                        (*(longlong *)(lVar17 + 8) +
                        ((ulonglong)(uVar1 * 0x10000 + *(int *)((longlong)plVar14 + 0x16c)) %
                        (ulonglong)*(uint *)(lVar17 + 4)) * 8); plVar16 != (longlong *)0x0;
            plVar16 = (longlong *)plVar16[1]) {
          in_RAX = (longlong *)*plVar16;
          if ((*(int *)((longlong)in_RAX + 0x14) == *(int *)((longlong)plVar14 + 0x16c)) &&
             (*(uint *)(in_RAX + 2) == uVar1)) goto LAB_140b95dba;
        }
      }
      in_RAX = (longlong *)0x0;
LAB_140b95dba:
      plVar14[0x2c] = (longlong)in_RAX;
      if (in_RAX == (longlong *)0x0) {
        in_RAX = plVar11;
      }
      plVar14[0x2e] = (longlong)in_RAX;
    }
    lVar17 = plVar14[0x2e];
    if (*(longlong *)(lVar13 + 0x170) == 0) {
      uVar1 = *(uint *)(lVar13 + 0x168);
      if (0x1268 < uVar1) {
        lVar18 = lVar15;
      }
      if (lVar18 != 0) {
        for (in_RAX = *(longlong **)
                       (*(longlong *)(lVar18 + 8) +
                       ((ulonglong)(uVar1 * 0x10000 + *(int *)(lVar13 + 0x16c)) %
                       (ulonglong)*(uint *)(lVar18 + 4)) * 8); in_RAX != (longlong *)0x0;
            in_RAX = (longlong *)in_RAX[1]) {
          plVar16 = (longlong *)*in_RAX;
          if ((*(int *)((longlong)plVar16 + 0x14) == *(int *)(lVar13 + 0x16c)) &&
             (*(uint *)(plVar16 + 2) == uVar1)) goto LAB_140b95e3a;
        }
      }
      plVar16 = (longlong *)0x0;
LAB_140b95e3a:
      *(longlong **)(lVar13 + 0x160) = plVar16;
      if (plVar16 == (longlong *)0x0) {
        plVar16 = plVar11;
      }
      *(longlong **)(lVar13 + 0x170) = plVar16;
    }
    if (((lVar17 == *(longlong *)(lVar13 + 0x170)) &&
        (((in_RAX = (longlong *)plVar14[0xd], in_RAX == (longlong *)0x0 || ((int)in_RAX[1] == 0)) &&
         ((int)plVar14[0x14] < 1)))) && (*(int *)((longlong)plVar14 + 0xb4) < 1)) {
      iVar12 = FUN_140b9f380(plVar14);
      lVar15 = FUN_140ba47e0(lVar13,local_c8,1);
      iVar2 = *(int *)(lVar15 + 0x10);
      iVar3 = *(int *)(lVar15 + 0x14);
      iVar4 = *(int *)(lVar15 + 0x18);
      iVar5 = *(int *)(lVar15 + 0x1c);
      iVar6 = *(int *)(lVar15 + 0x20);
      iVar7 = *(int *)(lVar15 + 0x24);
      iVar8 = *(int *)(lVar15 + 0x28);
      iVar9 = *(int *)(lVar15 + 0x2c);
      lVar15 = FUN_140bbb130(plVar14 + 0x46,local_70,1);
      uVar1 = iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 +
              *(int *)(lVar15 + 0x10) + *(int *)(lVar15 + 0x14) + *(int *)(lVar15 + 0x18) +
              *(int *)(lVar15 + 0x1c) + *(int *)(lVar15 + 0x20) + *(int *)(lVar15 + 0x24) +
              *(int *)(lVar15 + 0x28) + *(int *)(lVar15 + 0x2c);
      in_RAX = (longlong *)(ulonglong)uVar1;
      if ((int)uVar1 <= iVar12 * 1000) {
        return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
      }
    }
  } while( true );
}

