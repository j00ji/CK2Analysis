
void FUN_1403a2150(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  char local_res8 [8];
  char local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 local_fc [4];
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined8 local_e8;
  void *local_e0;
  undefined8 *local_d8;
  longlong *local_c8;
  longlong *local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  
  local_e8 = 0xfffffffffffffffe;
  bVar4 = false;
  plVar1 = (longlong *)param_1[6];
  local_res10 = param_2;
joined_r0x0001403a2187:
  do {
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    lVar2 = *plVar1;
    plVar1 = (longlong *)plVar1[2];
    local_100 = 2;
    lVar20 = 0;
    if (((*(int *)(lVar2 + 0xa0) < 1) ||
        (lVar8 = FUN_140822200(DAT_1416e32d8,**(undefined4 **)(lVar2 + 0x90)), lVar8 == 0)) ||
       (piVar9 = (int *)FUN_140b9e9b0(lVar2,local_fc), *piVar9 < DAT_1416e2670)) {
      puVar14 = (undefined8 *)FUN_1403a1430(param_1);
      cVar6 = (**(code **)(*(longlong *)*puVar14 + 0x68))();
      plVar16 = local_c8;
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_c8 + 1;
        lVar8 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar9 = (int *)((longlong)plVar16 + 0xc);
          iVar7 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16);
          }
        }
      }
      if (cVar6 == '\0') {
        puVar14 = (undefined8 *)FUN_1403a1430(param_1);
        cVar6 = (**(code **)(*(longlong *)*puVar14 + 0x70))();
        plVar16 = local_b8;
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_b8 + 1;
          lVar8 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_b8)(local_b8);
            LOCK();
            piVar9 = (int *)((longlong)plVar16 + 0xc);
            iVar7 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar16 + 8))(plVar16);
            }
          }
        }
        if (cVar6 != '\0') {
          lVar20 = FUN_140b9d430(lVar2);
        }
      }
      else {
        lVar20 = FUN_140b9d9d0(lVar2);
        local_100 = 3;
        if (*(char *)(lVar2 + 0x157) != '\0') {
          if (*(longlong *)(lVar2 + 0x170) == 0) {
            lVar8 = FUN_1400d3090(lVar2 + 0x168);
            *(longlong *)(lVar2 + 0x160) = lVar8;
            *(longlong *)(lVar2 + 0x170) = lVar8;
            if (lVar8 == 0) {
              *(undefined8 *)(lVar2 + 0x170) = DAT_1416e2360;
            }
          }
          lVar8 = *(longlong *)(lVar2 + 0x170);
          lVar18 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x80) + 0xd48) + 0x498);
          lVar17 = *(longlong *)(lVar18 + 0x28);
          if ((lVar17 == 0) || (*(longlong *)(lVar17 + 0x108) == 0)) {
            iVar7 = 0;
            lVar18 = *(longlong *)(lVar18 + 0x1a8);
            lVar17 = *(longlong *)(lVar18 + 0x1a8);
            if (lVar18 != *(longlong *)(lVar18 + 0x1a8)) {
              do {
                lVar10 = lVar17;
                if (4 < iVar7) break;
                iVar7 = iVar7 + 1;
                lVar17 = *(longlong *)(lVar10 + 0x1a8);
                lVar18 = lVar10;
              } while (lVar10 != *(longlong *)(lVar10 + 0x1a8));
            }
          }
          else {
            lVar18 = *(longlong *)(lVar17 + 0x108);
          }
          if (DAT_1416e3950 == 0) {
            local_e0 = operator_new(0x290);
            DAT_1416e3950 = FUN_1408b7c30(local_e0);
          }
          lVar17 = *(longlong *)(DAT_1416e3950 + 0x1b0);
          local_res8[0] = '\0';
          FUN_14025d050(lVar8,lVar18,local_res8,local_res18,local_f8);
          if (local_res8[0] != '\0') {
            if (*(longlong *)(lVar8 + 0x28) != 0) {
              lVar10 = FUN_14025b640(lVar8);
              lVar19 = 0;
              plVar16 = *(longlong **)(lVar10 + 0x10);
              iVar7 = (int)(*(longlong *)(lVar10 + 0x18) - (longlong)plVar16 >> 3);
              if (0 < iVar7) {
                do {
                  if (*(longlong *)(*plVar16 + 0x30) == lVar17) goto LAB_1403a2465;
                  lVar19 = lVar19 + 1;
                  plVar16 = plVar16 + 1;
                } while (lVar19 < iVar7);
              }
            }
            puVar11 = (undefined4 *)FUN_14077c7b0(DAT_1416e3260);
            local_104 = *puVar11;
            FUN_1401ac090(&local_104,DAT_1416e2690);
            FUN_140256f20(lVar8,lVar18,lVar17,&local_104,&DAT_1418d1c70,1);
          }
        }
      }
    }
    else {
      lVar20 = 0;
      if (0 < *(int *)(lVar2 + 0xa0)) {
        lVar20 = FUN_140822200(DAT_1416e32d8,**(undefined4 **)(lVar2 + 0x98));
      }
    }
LAB_1403a2465:
    plVar12 = (longlong *)FUN_1403a1430(param_1,local_a0);
    plVar13 = (longlong *)FUN_140b99ce0(lVar2,local_b0);
    plVar16 = local_a8;
    lVar8 = *plVar13;
    lVar18 = *plVar12;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_a8 + 1;
      lVar17 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar9 = (int *)((longlong)plVar16 + 0xc);
        iVar7 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16);
        }
      }
    }
    plVar16 = local_98;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_98 + 1;
      lVar17 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar9 = (int *)((longlong)plVar16 + 0xc);
        iVar7 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16);
        }
      }
    }
    if (lVar8 == lVar18) {
      plVar16 = *(longlong **)(lVar2 + 0x68);
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        piVar9 = (int *)((longlong)plVar16 + 0xc);
        iVar7 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar16 + 8))();
        }
      }
      *(undefined8 *)(lVar2 + 0x68) = 0;
      *(undefined8 *)(lVar2 + 0x60) = 0;
      if ((*(longlong **)(lVar2 + 0xd8) != (longlong *)0x0) &&
         (cVar6 = (**(code **)(**(longlong **)(lVar2 + 0xd8) + 0x168))(), cVar6 != '\0')) {
        lVar8 = (**(code **)(**(longlong **)(lVar2 + 0xd8) + 0xe0))();
        *(undefined1 *)(lVar8 + 0x140) = 0;
      }
      if ((*(longlong *)(lVar2 + 0x78) != 0) && (*(int *)(*(longlong *)(lVar2 + 0x78) + 8) != 0)) {
        puVar14 = (undefined8 *)FUN_140b99c30(lVar2,local_90);
        FUN_1403b6c40(*puVar14,lVar2,0);
        plVar16 = local_88;
        if (local_88 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_88 + 1;
          lVar8 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_88)(local_88);
            LOCK();
            piVar9 = (int *)((longlong)plVar16 + 0xc);
            iVar7 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar16 + 8))(plVar16);
            }
          }
        }
      }
    }
    else {
      plVar12 = (longlong *)FUN_1403a1430(param_1,local_70);
      plVar13 = (longlong *)FUN_140b99c30(lVar2,local_80);
      plVar16 = local_78;
      lVar8 = *plVar13;
      lVar18 = *plVar12;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_78 + 1;
        lVar17 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar9 = (int *)((longlong)plVar16 + 0xc);
          iVar7 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16);
          }
        }
      }
      plVar16 = local_68;
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_68 + 1;
        lVar17 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar9 = (int *)((longlong)plVar16 + 0xc);
          iVar7 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16);
          }
        }
      }
      if (lVar8 == lVar18) {
        plVar16 = *(longlong **)(lVar2 + 0x78);
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          piVar9 = (int *)((longlong)plVar16 + 0xc);
          iVar7 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar16 + 8))();
          }
        }
        *(undefined8 *)(lVar2 + 0x78) = 0;
        *(undefined8 *)(lVar2 + 0x70) = 0;
        if ((*(longlong **)(lVar2 + 0xd8) != (longlong *)0x0) &&
           (cVar6 = (**(code **)(**(longlong **)(lVar2 + 0xd8) + 0x168))(), cVar6 != '\0')) {
          lVar8 = (**(code **)(**(longlong **)(lVar2 + 0xd8) + 0xe0))();
          *(undefined1 *)(lVar8 + 0x140) = 0;
        }
      }
    }
    iVar7 = 0;
    if (*(code **)(*param_1 + 0x38) == FUN_1403a17b0) {
      for (local_f0 = (longlong *)param_1[6]; local_f0 != (longlong *)0x0;
          local_f0 = (longlong *)local_f0[2]) {
        if (*local_f0 == lVar2) {
          if (local_f0 != (longlong *)0x0) {
            if (*(char *)((longlong)param_1 + 0x44) == '\0') {
              lVar8 = local_f0[1];
              lVar18 = local_f0[2];
              if (lVar8 != 0) {
                *(longlong *)(lVar8 + 0x10) = lVar18;
              }
              if (lVar18 != 0) {
                *(longlong *)(lVar18 + 8) = lVar8;
              }
              if (local_f0 == (longlong *)param_1[6]) {
                param_1[6] = lVar18;
              }
              if (local_f0 == (longlong *)param_1[7]) {
                param_1[7] = lVar8;
              }
              thunk_FUN_140e1c5e4(local_f0,0x20);
              *(int *)(param_1 + 8) = (int)param_1[8] + -1;
            }
            else {
              *(undefined1 *)(local_f0 + 3) = 1;
            }
          }
          break;
        }
      }
      FUN_1403a1cc0(param_1,lVar2);
    }
    else {
      (**(code **)(*param_1 + 0x38))(param_1,lVar2);
    }
    if ((lVar20 == 0) || (lVar20 == *(longlong *)(lVar2 + 0x80))) {
      if (local_res10 == '\0') goto LAB_1403a29e2;
LAB_1403a2a07:
      bVar3 = true;
LAB_1403a2a0a:
      plVar16 = local_58;
      if ((bVar4) && (bVar4 = false, local_58 != (longlong *)0x0)) {
        LOCK();
        plVar12 = local_58 + 1;
        lVar20 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar9 = (int *)((longlong)plVar16 + 0xc);
          iVar7 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16);
          }
        }
      }
      if (bVar3) {
        FUN_140786dc0(DAT_1416e3260,lVar2);
      }
      goto joined_r0x0001403a2187;
    }
    if (local_res10 != '\0') goto LAB_1403a2a07;
    if (*(longlong *)(lVar2 + 0x170) == 0) {
      lVar8 = FUN_1400d3090(lVar2 + 0x168);
      *(longlong *)(lVar2 + 0x160) = lVar8;
      *(longlong *)(lVar2 + 0x170) = lVar8;
      if (lVar8 == 0) {
        *(undefined8 *)(lVar2 + 0x170) = DAT_1416e2360;
      }
    }
    lVar8 = *(longlong *)(*(longlong *)(lVar2 + 0x170) + 0x28);
    if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0x108) == 0)) {
      lVar8 = *(longlong *)(*(longlong *)(lVar2 + 0x170) + 0x1a8);
      lVar18 = *(longlong *)(lVar8 + 0x1a8);
      if (lVar8 != *(longlong *)(lVar8 + 0x1a8)) {
        do {
          lVar17 = lVar18;
          if (4 < iVar7) break;
          iVar7 = iVar7 + 1;
          lVar18 = *(longlong *)(lVar17 + 0x1a8);
          lVar8 = lVar17;
        } while (lVar17 != *(longlong *)(lVar17 + 0x1a8));
      }
    }
    else {
      lVar8 = *(longlong *)(lVar8 + 0x108);
    }
    lVar18 = *(longlong *)(lVar8 + 0x28);
    if (((lVar18 == 0) || (*(longlong *)(lVar18 + 0xb0) == 0)) ||
       (lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0xb0) + 8),
       (ulonglong)(*(longlong *)(lVar18 + 0x40) - *(longlong *)(lVar18 + 0x38)) < 8)) {
      lVar18 = DAT_1416e3ad0;
      if (0 < (int)(*(longlong *)(lVar8 + 0x78) - *(longlong *)(lVar8 + 0x70) >> 3)) {
        lVar18 = **(longlong **)(lVar8 + 0x70);
      }
    }
    else {
      lVar18 = **(longlong **)(lVar18 + 0x38);
    }
    if ((*(char *)(lVar18 + 0x394) != '\0') || (*(char *)(lVar18 + 0x395) != '\0')) {
LAB_1403a29e2:
      puVar14 = (undefined8 *)FUN_1403a1430(param_1,local_60);
      bVar4 = true;
      iVar7 = (**(code **)(*(longlong *)*puVar14 + 0x60))();
      if (iVar7 == 1) goto LAB_1403a2a07;
      bVar3 = false;
      goto LAB_1403a2a0a;
    }
    if (*(longlong *)(lVar2 + 0x170) == 0) {
      lVar8 = FUN_1400d3090(lVar2 + 0x168);
      *(longlong *)(lVar2 + 0x160) = lVar8;
      *(longlong *)(lVar2 + 0x170) = lVar8;
      if (lVar8 == 0) {
        *(undefined8 *)(lVar2 + 0x170) = DAT_1416e2360;
      }
    }
    lVar8 = *(longlong *)(lVar2 + 0x170);
    lVar18 = *(longlong *)(lVar8 + 0x28);
    if (((lVar18 == 0) || (*(longlong *)(lVar18 + 0xb0) == 0)) ||
       (lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0xb0) + 8),
       (ulonglong)(*(longlong *)(lVar18 + 0x40) - *(longlong *)(lVar18 + 0x38)) < 8)) {
      lVar18 = DAT_1416e3ad0;
      if (0 < (int)(*(longlong *)(lVar8 + 0x78) - *(longlong *)(lVar8 + 0x70) >> 3)) {
        lVar18 = **(longlong **)(lVar8 + 0x70);
      }
    }
    else {
      lVar18 = **(longlong **)(lVar18 + 0x38);
    }
    if ((*(byte *)(lVar18 + 0x9d2) & 0x40) != 0) goto LAB_1403a29e2;
    *(undefined4 *)(lVar2 + 0xb4) = 1;
    lVar8 = (**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0xe0))();
    uVar5 = DAT_1417e3b32;
    if (*(char *)(lVar8 + 0x5d) != '\0') {
      local_res20 = DAT_1417e3b32;
      DAT_1417e3b32 = 1;
      FUN_140b9cdc0(lVar2,lVar20);
      DAT_1417e3b32 = uVar5;
      puVar14 = operator_new(0x98);
      local_d8 = puVar14;
      FUN_1401554f0(puVar14,0x32d3);
      *puVar14 = &PTR_FUN_1411443e0;
      puVar14[0x10] = lVar2;
      *(undefined4 *)(puVar14 + 0x11) = *(undefined4 *)(lVar2 + 0x20);
      *(undefined4 *)((longlong)puVar14 + 0x8c) = *(undefined4 *)(lVar2 + 0x24);
      *(undefined4 *)(puVar14 + 0x12) = local_100;
      uVar15 = (**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0xe0))();
      FUN_140c3d960(uVar15,puVar14);
    }
  } while( true );
}

