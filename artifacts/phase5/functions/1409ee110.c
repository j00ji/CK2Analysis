
void FUN_1409ee110(longlong param_1,ulonglong *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar21;
  int *piVar22;
  undefined8 *puVar23;
  int *piVar24;
  undefined8 *puVar25;
  longlong lVar26;
  ulonglong uVar27;
  char *pcVar28;
  char *pcVar29;
  ulonglong uVar30;
  char *pcVar31;
  char local_res8 [8];
  int local_218 [132];
  
  while( true ) {
    plVar5 = *(longlong **)(param_1 + 0x28);
    if ((char)plVar5[0x43] == '\0') {
      iVar21 = (**(code **)(*plVar5 + 8))(plVar5);
      *(int *)(plVar5 + 2) = iVar21;
      if (iVar21 == 0) {
        *(undefined4 *)((longlong)plVar5 + 0x14) = 0x13;
      }
      *(undefined1 *)(plVar5 + 0x43) = 1;
    }
    lVar26 = 4;
    piVar22 = local_218;
    piVar24 = (int *)((longlong)plVar5 + 0x14);
    do {
      piVar1 = piVar22 + 0x20;
      uVar17 = *(undefined8 *)(piVar24 + 2);
      uVar18 = *(undefined8 *)(piVar24 + 4);
      uVar19 = *(undefined8 *)(piVar24 + 6);
      piVar2 = piVar24 + 0x20;
      *(undefined8 *)piVar22 = *(undefined8 *)piVar24;
      *(undefined8 *)(piVar22 + 2) = uVar17;
      uVar17 = *(undefined8 *)(piVar24 + 8);
      uVar20 = *(undefined8 *)(piVar24 + 10);
      *(undefined8 *)(piVar22 + 4) = uVar18;
      *(undefined8 *)(piVar22 + 6) = uVar19;
      uVar18 = *(undefined8 *)(piVar24 + 0xc);
      uVar19 = *(undefined8 *)(piVar24 + 0xe);
      *(undefined8 *)(piVar22 + 8) = uVar17;
      *(undefined8 *)(piVar22 + 10) = uVar20;
      uVar17 = *(undefined8 *)(piVar24 + 0x10);
      uVar20 = *(undefined8 *)(piVar24 + 0x12);
      *(undefined8 *)(piVar22 + 0xc) = uVar18;
      *(undefined8 *)(piVar22 + 0xe) = uVar19;
      uVar18 = *(undefined8 *)(piVar24 + 0x14);
      uVar19 = *(undefined8 *)(piVar24 + 0x16);
      *(undefined8 *)(piVar22 + 0x10) = uVar17;
      *(undefined8 *)(piVar22 + 0x12) = uVar20;
      iVar21 = piVar24[0x18];
      iVar7 = piVar24[0x19];
      iVar8 = piVar24[0x1a];
      iVar9 = piVar24[0x1b];
      *(undefined8 *)(piVar22 + 0x14) = uVar18;
      *(undefined8 *)(piVar22 + 0x16) = uVar19;
      iVar10 = piVar24[0x1c];
      iVar11 = piVar24[0x1d];
      iVar12 = piVar24[0x1e];
      iVar13 = piVar24[0x1f];
      piVar22[0x18] = iVar21;
      piVar22[0x19] = iVar7;
      piVar22[0x1a] = iVar8;
      piVar22[0x1b] = iVar9;
      piVar22[0x1c] = iVar10;
      piVar22[0x1d] = iVar11;
      piVar22[0x1e] = iVar12;
      piVar22[0x1f] = iVar13;
      lVar26 = lVar26 + -1;
      piVar22 = piVar1;
      piVar24 = piVar2;
    } while (lVar26 != 0);
    *piVar1 = *piVar2;
    if ((local_218[0] == 4) || (local_218[0] == 0x13)) break;
    (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
    lVar26 = 4;
    puVar23 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x14);
    puVar25 = (undefined8 *)(param_1 + 0x438);
    do {
      puVar3 = puVar25 + 0x10;
      uVar17 = puVar23[1];
      puVar4 = puVar23 + 0x10;
      *puVar25 = *puVar23;
      puVar25[1] = uVar17;
      uVar17 = puVar23[3];
      puVar25[2] = puVar23[2];
      puVar25[3] = uVar17;
      uVar17 = puVar23[5];
      puVar25[4] = puVar23[4];
      puVar25[5] = uVar17;
      uVar17 = puVar23[7];
      puVar25[6] = puVar23[6];
      puVar25[7] = uVar17;
      uVar17 = puVar23[9];
      puVar25[8] = puVar23[8];
      puVar25[9] = uVar17;
      uVar17 = puVar23[0xb];
      puVar25[10] = puVar23[10];
      puVar25[0xb] = uVar17;
      uVar14 = *(undefined4 *)((longlong)puVar23 + 100);
      uVar15 = *(undefined4 *)(puVar23 + 0xd);
      uVar16 = *(undefined4 *)((longlong)puVar23 + 0x6c);
      *(undefined4 *)(puVar25 + 0xc) = *(undefined4 *)(puVar23 + 0xc);
      *(undefined4 *)((longlong)puVar25 + 100) = uVar14;
      *(undefined4 *)(puVar25 + 0xd) = uVar15;
      *(undefined4 *)((longlong)puVar25 + 0x6c) = uVar16;
      uVar14 = *(undefined4 *)((longlong)puVar23 + 0x74);
      uVar15 = *(undefined4 *)(puVar23 + 0xf);
      uVar16 = *(undefined4 *)((longlong)puVar23 + 0x7c);
      *(undefined4 *)(puVar25 + 0xe) = *(undefined4 *)(puVar23 + 0xe);
      *(undefined4 *)((longlong)puVar25 + 0x74) = uVar14;
      *(undefined4 *)(puVar25 + 0xf) = uVar15;
      *(undefined4 *)((longlong)puVar25 + 0x7c) = uVar16;
      lVar26 = lVar26 + -1;
      puVar23 = puVar4;
      puVar25 = puVar3;
    } while (lVar26 != 0);
    *(undefined4 *)puVar3 = *(undefined4 *)puVar4;
    iVar21 = FUN_14090fa40(param_1 + 0x43c);
    if (iVar21 == 0) {
      FUN_140c35a00(param_1);
    }
    else {
      local_res8[0] = local_res8[0] + -0x30;
    }
    pcVar6 = (char *)param_2[1];
    if ((local_res8 < pcVar6) && (pcVar28 = (char *)*param_2, pcVar28 <= local_res8)) {
      pcVar29 = (char *)param_2[2];
      if ((pcVar6 == pcVar29) && (pcVar29 == pcVar6)) {
        if ((longlong)pcVar28 - (longlong)pcVar6 == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_140e1913c("vector<T> too long");
        }
        uVar27 = (longlong)pcVar29 - (longlong)pcVar28;
        pcVar29 = (char *)0x0;
        if (uVar27 <= ~(uVar27 >> 1)) {
          pcVar29 = (char *)((uVar27 >> 1) + uVar27);
        }
        pcVar31 = pcVar6 + (1 - (longlong)pcVar28);
        if (pcVar6 + (1 - (longlong)pcVar28) <= pcVar29) {
          pcVar31 = pcVar29;
        }
        FUN_1407059b0(param_2,pcVar31);
      }
      if ((char *)param_2[1] != (char *)0x0) {
        *(char *)param_2[1] = local_res8[*param_2 - (longlong)pcVar28];
      }
      param_2[1] = param_2[1] + 1;
    }
    else {
      pcVar28 = (char *)param_2[2];
      if ((pcVar6 == pcVar28) && (pcVar28 == pcVar6)) {
        uVar27 = *param_2;
        if (uVar27 - (longlong)pcVar6 == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_140e1913c("vector<T> too long");
        }
        uVar30 = (longlong)pcVar28 - uVar27;
        pcVar28 = (char *)0x0;
        if (uVar30 <= ~(uVar30 >> 1)) {
          pcVar28 = (char *)((uVar30 >> 1) + uVar30);
        }
        pcVar29 = pcVar6 + (1 - uVar27);
        if (pcVar6 + (1 - uVar27) <= pcVar28) {
          pcVar29 = pcVar28;
        }
        FUN_1407059b0(param_2,pcVar29);
      }
      if ((char *)param_2[1] != (char *)0x0) {
        *(char *)param_2[1] = local_res8[0];
      }
      param_2[1] = param_2[1] + 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001409ee3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
  return;
}

