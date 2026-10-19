
void FUN_140c38110(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int *piVar9;
  undefined8 *puVar10;
  int *piVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  char *local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  ulonglong local_250 [3];
  ulonglong local_238;
  int local_228 [132];
  
  local_258 = 0xfffffffffffffffe;
  bVar7 = false;
  do {
    do {
      plVar2 = *(longlong **)(param_2 + 0x28);
      if ((char)plVar2[0x43] == '\0') {
        iVar8 = (**(code **)(*plVar2 + 8))(plVar2);
        *(int *)(plVar2 + 2) = iVar8;
        if (iVar8 == 0) {
          *(undefined4 *)((longlong)plVar2 + 0x14) = 0x13;
        }
        *(undefined1 *)(plVar2 + 0x43) = 1;
      }
      piVar9 = (int *)((longlong)plVar2 + 0x14);
      lVar13 = 4;
      piVar11 = local_228;
      do {
        uVar6 = *(undefined8 *)(piVar9 + 2);
        *(undefined8 *)piVar11 = *(undefined8 *)piVar9;
        *(undefined8 *)(piVar11 + 2) = uVar6;
        uVar6 = *(undefined8 *)(piVar9 + 6);
        *(undefined8 *)(piVar11 + 4) = *(undefined8 *)(piVar9 + 4);
        *(undefined8 *)(piVar11 + 6) = uVar6;
        uVar6 = *(undefined8 *)(piVar9 + 10);
        *(undefined8 *)(piVar11 + 8) = *(undefined8 *)(piVar9 + 8);
        *(undefined8 *)(piVar11 + 10) = uVar6;
        uVar6 = *(undefined8 *)(piVar9 + 0xe);
        *(undefined8 *)(piVar11 + 0xc) = *(undefined8 *)(piVar9 + 0xc);
        *(undefined8 *)(piVar11 + 0xe) = uVar6;
        uVar6 = *(undefined8 *)(piVar9 + 0x12);
        *(undefined8 *)(piVar11 + 0x10) = *(undefined8 *)(piVar9 + 0x10);
        *(undefined8 *)(piVar11 + 0x12) = uVar6;
        uVar6 = *(undefined8 *)(piVar9 + 0x16);
        *(undefined8 *)(piVar11 + 0x14) = *(undefined8 *)(piVar9 + 0x14);
        *(undefined8 *)(piVar11 + 0x16) = uVar6;
        iVar8 = piVar9[0x19];
        iVar4 = piVar9[0x1a];
        iVar5 = piVar9[0x1b];
        piVar11[0x18] = piVar9[0x18];
        piVar11[0x19] = iVar8;
        piVar11[0x1a] = iVar4;
        piVar11[0x1b] = iVar5;
        piVar1 = piVar11 + 0x20;
        iVar8 = piVar9[0x1d];
        iVar4 = piVar9[0x1e];
        iVar5 = piVar9[0x1f];
        piVar11[0x1c] = piVar9[0x1c];
        piVar11[0x1d] = iVar8;
        piVar11[0x1e] = iVar4;
        piVar11[0x1f] = iVar5;
        piVar9 = piVar9 + 0x20;
        lVar13 = lVar13 + -1;
        piVar11 = piVar1;
      } while (lVar13 != 0);
      *piVar1 = *piVar9;
      if ((local_228[0] == 4) || (local_228[0] == 0x13)) {
        (**(code **)(**(longlong **)(param_2 + 0x28) + 8))();
        if (!bVar7) {
          (**(code **)(*param_1 + 0x28))(param_1);
        }
        return;
      }
      FUN_140c36000(param_2);
      (**(code **)(*param_1 + 0x20))(param_1,param_2,*(undefined4 *)(param_2 + 0x30));
    } while (*(int *)(param_2 + 0x18) == 0);
    lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 8);
    if (*(longlong *)(param_2 + 8) != 0) {
      local_268 = "D:\\jenkins\\workspace\\ck2-steam\\clausewitz\\clausewitzlib\\persistent.cpp";
      local_260 = 0x28;
      local_25c = 0x1000;
      lVar14 = *(longlong *)(param_2 + 8);
      do {
        lVar3 = *(longlong *)(lVar14 + 0x50);
        puVar10 = (undefined8 *)FUN_140c34f20(lVar14,local_250);
        if (*(ulonglong *)(lVar13 + 0x30) < 0x10) {
          lVar14 = lVar13 + 0x18;
        }
        else {
          lVar14 = *(longlong *)(lVar13 + 0x18);
        }
        if (0xf < (ulonglong)puVar10[3]) {
          puVar10 = (undefined8 *)*puVar10;
        }
        FUN_140d65130(&local_268,"Error: \"%s\" in file: \"%s\"",puVar10,lVar14);
        if (0xf < local_238) {
          uVar12 = local_250[0];
          if (0xfff < local_238 + 1) {
            if ((local_250[0] & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_140e3f0ac();
            }
            uVar12 = *(ulonglong *)(local_250[0] - 8);
            if (local_250[0] <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_140e3f0ac();
            }
            if (local_250[0] - uVar12 < 8) {
                    /* WARNING: Subroutine does not return */
              FUN_140e3f0ac();
            }
            if (0x27 < local_250[0] - uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_140e3f0ac();
            }
          }
          FUN_140e1c5e4(uVar12);
        }
        lVar14 = lVar3;
      } while (lVar3 != 0);
    }
    lVar13 = *(longlong *)(param_2 + 8);
    while (lVar13 != 0) {
      lVar14 = *(longlong *)(lVar13 + 0x50);
      FUN_1407fc070(lVar13);
      thunk_FUN_140e1c5e4(lVar13,0x60);
      lVar13 = lVar14;
    }
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    bVar7 = true;
  } while( true );
}

