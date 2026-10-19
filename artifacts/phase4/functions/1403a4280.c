
void FUN_1403a4280(longlong *param_1,longlong param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  char *pcVar11;
  int local_res18 [2];
  int local_res20 [2];
  int local_98;
  undefined4 local_94;
  undefined4 local_90 [2];
  longlong local_88;
  longlong local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58 [3];
  ulonglong local_40;
  undefined8 local_38;
  undefined1 local_30 [8];
  longlong *local_28;
  
  local_38 = 0xfffffffffffffffe;
  if (param_3 < 0x282b) {
    if (param_3 == 0x282a) {
      local_98 = 0;
      iVar4 = FUN_14090fa40(param_2 + 0x43c,&DAT_14114a594,&local_98);
      if (iVar4 == 0) {
        FUN_140c35a00(param_2);
      }
      if (DAT_1417e3b58 != 0) {
        for (plVar10 = *(longlong **)
                        (*(longlong *)(DAT_1417e3b58 + 8) +
                        ((ulonglong)(local_98 + 0x420000) % (ulonglong)*(uint *)(DAT_1417e3b58 + 4))
                        * 8); plVar10 != (longlong *)0x0; plVar10 = (longlong *)plVar10[1]) {
          local_80 = *plVar10;
          if ((*(int *)(local_80 + 0x14) == local_98) && (*(int *)(local_80 + 0x10) == 0x42))
          goto LAB_1403a46f4;
        }
      }
      local_80 = 0;
LAB_1403a46f4:
      FUN_1400ce050(param_1 + 0xe,&local_80);
      return;
    }
    if (param_3 == 0x7a) {
      iVar4 = FID_conflict_atoi((char *)(param_2 + 0x43c));
      *(int *)(param_1 + 7) = iVar4;
      return;
    }
    if (param_3 == 0x2791) {
      iVar4 = FUN_14090fa40(param_2 + 0x43c,&DAT_14114a594,local_90);
      if (iVar4 == 0) {
        FUN_140c35a00(param_2);
      }
      lVar6 = FUN_140822200(DAT_1416e32d8,local_90[0]);
      param_1[6] = lVar6;
      return;
    }
    if (param_3 == 0x27ac) {
      pcVar11 = (char *)(param_2 + 0x43c);
      local_60 = 0xf;
      lVar6 = 0;
      local_68 = 0;
      local_78 = 0;
      if (*pcVar11 != '\0') {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (pcVar11[lVar6] != '\0');
      }
      FUN_1400b0300(&local_78,pcVar11,lVar6);
      lVar6 = FUN_140822120(DAT_1416e32d8,&local_78);
      param_1[8] = lVar6;
      if (0xf < local_60) {
        FUN_1400b08c0(&local_78,CONCAT71(uStack_77,local_78),local_60 + 1);
      }
      FUN_140d5f2e0(local_58,"defenderbonus_",param_1[8] + 0x10);
      uVar8 = FUN_140876c80();
      lVar6 = FUN_14087acd0(uVar8,local_58);
      param_1[9] = lVar6;
      if (local_40 < 0x10) {
        return;
      }
      FUN_1400b08c0(local_58,local_58[0],local_40 + 1);
      return;
    }
    if (param_3 == 0x27bc) {
      iVar4 = FUN_14090fa40(param_2 + 0x43c,&DAT_14114a594,local_res20);
      if (iVar4 == 0) {
        FUN_140c35a00(param_2);
      }
      lVar6 = FUN_140822200(DAT_1416e32d8,local_res20[0] % 100000);
      param_1[5] = lVar6;
      local_res20[0] = local_res20[0] / 100000;
      if (local_res20[0] < (int)(*(longlong *)(lVar6 + 0xcf0) - *(longlong *)(lVar6 + 0xce8) >> 2))
      {
        *(undefined4 *)(param_1 + 4) =
             *(undefined4 *)(*(longlong *)(lVar6 + 0xce8) + (longlong)local_res20[0] * 4);
      }
      else {
        if (local_res20[0] ==
            (int)(*(longlong *)(lVar6 + 0xcf0) - *(longlong *)(lVar6 + 0xce8) >> 2)) {
          uVar5 = *(undefined4 *)(lVar6 + 0xd1c);
        }
        else if ((int)(*(longlong *)(lVar6 + 0xcf0) - *(longlong *)(lVar6 + 0xce8) >> 2) <
                 local_res20[0]) {
          uVar5 = *(undefined4 *)(lVar6 + 0xd28);
        }
        else {
          puVar7 = (undefined4 *)(DAT_1418d6ab0 + 0x18);
          if (DAT_1418d6ab0 == 0) {
            puVar7 = (undefined4 *)&DAT_00000008;
          }
          uVar5 = *puVar7;
        }
        *(undefined4 *)(param_1 + 4) = uVar5;
      }
      lVar6 = FUN_1400cd630(param_1 + 4);
      cVar3 = (**(code **)(*(longlong *)(lVar6 + 0x10) + 8))();
      if ((cVar3 != '\0') && (iVar4 = (**(code **)(*param_1 + 0x60))(param_1), iVar4 == 3)) {
        uVar8 = FUN_1400cd630(param_1 + 4);
        FUN_1409fe3f0(uVar8,param_1,0);
        return;
      }
      puVar9 = (undefined8 *)FUN_1403b9ad0(DAT_1416e3260 + 0x230,local_30,param_1);
      plVar10 = (longlong *)puVar9[1];
      uVar8 = *puVar9;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
      }
      lVar6 = param_1[5];
      if ((*(longlong *)(lVar6 + 0xce0) == 0) || (*(int *)(*(longlong *)(lVar6 + 0xce0) + 8) == 0))
      {
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
          UNLOCK();
        }
        plVar2 = *(longlong **)(lVar6 + 0xce0);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar2 + 8))();
          }
        }
        *(longlong **)(lVar6 + 0xce0) = plVar10;
        *(undefined8 *)(lVar6 + 0xcd8) = uVar8;
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10);
        }
      }
      if (local_28 == (longlong *)0x0) {
        return;
      }
      LOCK();
      plVar10 = local_28 + 1;
      lVar6 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar6 != 1) {
        return;
      }
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 != 1) {
        return;
      }
      (**(code **)(*local_28 + 8))(local_28);
      return;
    }
    if (param_3 == 0x2829) {
      local_res18[0] = 0;
      iVar4 = FUN_14090fa40(param_2 + 0x43c,&DAT_14114a594,local_res18);
      if (iVar4 == 0) {
        FUN_140c35a00(param_2);
      }
      if (DAT_1417e3b58 != 0) {
        for (plVar10 = *(longlong **)
                        (*(longlong *)(DAT_1417e3b58 + 8) +
                        ((ulonglong)(local_res18[0] + 0x420000) %
                        (ulonglong)*(uint *)(DAT_1417e3b58 + 4)) * 8); plVar10 != (longlong *)0x0;
            plVar10 = (longlong *)plVar10[1]) {
          local_88 = *plVar10;
          if ((*(int *)(local_88 + 0x14) == local_res18[0]) && (*(int *)(local_88 + 0x10) == 0x42))
          goto LAB_1403a4361;
        }
      }
      local_88 = 0;
LAB_1403a4361:
      FUN_1400ce050(param_1 + 0xb,&local_88);
      return;
    }
LAB_1403a4725:
    FUN_140c35600(param_2);
  }
  else {
    if (param_3 == 0x282d) {
      plVar10 = (longlong *)param_1[2];
    }
    else {
      if (param_3 != 0x282e) {
        if (param_3 == 0x2875) {
          iVar4 = FUN_14090fa40(param_2 + 0x43c,&DAT_14114a594,param_1 + 0x11);
          if (iVar4 != 0) {
            return;
          }
          FUN_140c35a00(param_2);
          return;
        }
        if (param_3 == 0x28f0) {
          local_94 = 0;
          iVar4 = FUN_14090fa40(param_2 + 0x43c,&DAT_14114a594,&local_94);
          if (iVar4 == 0) {
            FUN_140c35a00(param_2);
          }
          lVar6 = FUN_1403b7020(local_94);
          param_1[0x12] = lVar6;
          return;
        }
        goto LAB_1403a4725;
      }
      plVar10 = (longlong *)param_1[3];
    }
    (**(code **)(*plVar10 + 0x18))();
  }
  return;
}

