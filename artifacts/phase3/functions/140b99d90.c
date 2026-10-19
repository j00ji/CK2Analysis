
ulonglong FUN_140b99d90(longlong *param_1,longlong *param_2,char param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  ulonglong in_RAX;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  char local_res8 [8];
  char local_res10 [8];
  char local_res18;
  char local_res20;
  char local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined1 local_c4 [4];
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  local_90 = 0xfffffffffffffffe;
  if (param_2 == param_1) {
LAB_140b99dc9:
    return in_RAX & 0xffffffffffffff00;
  }
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_1[0x2e] == 0) {
    in_RAX = FUN_1400d3090(param_1 + 0x2d);
    param_1[0x2c] = in_RAX;
    if (in_RAX == 0) {
      in_RAX = DAT_1416e2360;
    }
    param_1[0x2e] = in_RAX;
  }
  lVar10 = param_1[0x2e];
  if ((*(byte *)(lVar10 + 0x1e9) & 2) != 0) {
    if (param_2[0x2e] == 0) {
      in_RAX = FUN_1400d3090(param_2 + 0x2d);
      param_2[0x2c] = in_RAX;
      if (in_RAX == 0) {
        in_RAX = DAT_1416e2360;
      }
      param_2[0x2e] = in_RAX;
    }
    if (lVar10 == param_2[0x2e]) goto LAB_140b99dc9;
  }
  puVar7 = (undefined8 *)FUN_140b99ce0(param_1,local_88);
  plVar3 = (longlong *)puVar7[1];
  local_a0 = *puVar7;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_98 = plVar3;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_80 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_80 + 8))(local_80);
      }
    }
  }
  puVar7 = (undefined8 *)FUN_140b99ce0(param_2,local_78);
  plVar4 = (longlong *)puVar7[1];
  local_b0 = *puVar7;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
  }
  local_a8 = plVar4;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_70 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_70 + 8))(local_70);
      }
    }
  }
  if ((((plVar4 == (longlong *)0x0) || ((int)plVar4[1] == 0)) || (plVar3 == (longlong *)0x0)) ||
     ((int)plVar3[1] == 0)) {
LAB_140b99fc6:
    if ((((((local_res20 != '\0') ||
           ((*(int *)((longlong)param_1 + 0xb4) < 1 && (*(int *)((longlong)param_2 + 0xb4) < 1))))
          && ((param_3 != '\0' ||
              (((cVar6 = (**(code **)(*param_1 + 0x68))(param_1), cVar6 == '\0' ||
                (lVar10 = (**(code **)(*param_1 + 0x48))(param_1),
                *(longlong *)(lVar10 + 0x230) == 0)) &&
               ((cVar6 = (**(code **)(*param_2 + 0x68))(param_2), cVar6 == '\0' ||
                (lVar10 = (**(code **)(*param_2 + 0x48))(param_2),
                *(longlong *)(lVar10 + 0x230) == 0)))))))) &&
         ((cVar6 = (**(code **)(*param_1 + 0x68))(param_1), cVar6 == '\0' ||
          (cVar6 = (**(code **)(*param_2 + 0x70))(param_2), cVar6 == '\0')))) &&
        ((cVar6 = (**(code **)(*param_2 + 0x68))(param_2), cVar6 == '\0' ||
         (cVar6 = (**(code **)(*param_1 + 0x70))(param_1), cVar6 == '\0')))) &&
       ((param_3 != '\0' ||
        (((cVar6 = (**(code **)(*param_1 + 0x68))(param_1), cVar6 == '\0' ||
          (*(char *)(*(longlong *)(param_1[0x10] + 0xf0) + 100) != '\0')) &&
         ((cVar6 = (**(code **)(*param_1 + 0x70))(param_1), cVar6 == '\0' ||
          (*(char *)(*(longlong *)(param_1[0x10] + 0xf0) + 100) == '\0')))))))) {
      plVar8 = (longlong *)param_1[0x38];
      if ((plVar8 == (longlong *)0x0) || (plVar8[0x10] != param_1[0x10])) {
        plVar8 = param_1;
      }
      plVar9 = (longlong *)param_2[0x38];
      if ((plVar9 == (longlong *)0x0) || (plVar9[0x10] != param_2[0x10])) {
        plVar9 = param_2;
      }
      if ((local_res20 != '\0') ||
         ((*(int *)((longlong)plVar8 + 0xb4) < 1 && (*(int *)((longlong)plVar9 + 0xb4) < 1)))) {
        if (plVar8[0x2e] == 0) {
          uVar11 = FUN_1400d3090(plVar8 + 0x2d);
          plVar8[0x2c] = uVar11;
          if (uVar11 == 0) {
            uVar11 = DAT_1416e2360;
          }
          plVar8[0x2e] = uVar11;
        }
        lVar10 = plVar8[0x2e];
        if (plVar9[0x2e] == 0) {
          uVar11 = FUN_1400d3090(plVar9 + 0x2d);
          plVar9[0x2c] = uVar11;
          if (uVar11 == 0) {
            uVar11 = DAT_1416e2360;
          }
          plVar9[0x2e] = uVar11;
        }
        lVar5 = plVar9[0x2e];
        local_res8[0] = '\0';
        FUN_14025d050(lVar10,lVar5,local_res8,&local_c7,local_c4);
        if (local_res8[0] == '\0') {
          if (param_2[0x2e] == 0) {
            uVar11 = FUN_1400d3090(param_2 + 0x2d);
            param_2[0x2c] = uVar11;
            if (uVar11 == 0) {
              uVar11 = DAT_1416e2360;
            }
            param_2[0x2e] = uVar11;
          }
          local_res10[0] = '\0';
          FUN_14025d050(lVar10,param_2[0x2e],local_res10,&local_c6,local_c0);
          if (local_res10[0] == '\0') {
            if (param_1[0x2e] == 0) {
              uVar11 = FUN_1400d3090(param_1 + 0x2d);
              param_1[0x2c] = uVar11;
              if (uVar11 == 0) {
                uVar11 = DAT_1416e2360;
              }
              param_1[0x2e] = uVar11;
            }
            local_c8 = '\0';
            FUN_14025d050(lVar5,param_1[0x2e],&local_c8,&local_c5,local_bc);
            if (local_c8 == '\0') goto LAB_140b9a2f1;
          }
        }
        if (param_2[0x2e] == 0) {
          uVar11 = FUN_1400d3090(param_2 + 0x2d);
          param_2[0x2c] = uVar11;
          if (uVar11 == 0) {
            uVar11 = DAT_1416e2360;
          }
          param_2[0x2e] = uVar11;
        }
        cVar6 = FUN_140b9a350(param_1,param_2[0x2e]);
        if (cVar6 != '\0') {
          if (param_1[0x2e] == 0) {
            uVar11 = FUN_1400d3090(param_1 + 0x2d);
            param_1[0x2c] = uVar11;
            if (uVar11 == 0) {
              uVar11 = DAT_1416e2360;
            }
            param_1[0x2e] = uVar11;
          }
          cVar6 = FUN_140b9a350(param_2,param_1[0x2e]);
          if (cVar6 != '\0') {
            uVar11 = 1;
            goto LAB_140b9a2f3;
          }
        }
      }
    }
  }
  else {
    plVar8 = (longlong *)FUN_1403b96b0(&local_b0,local_58);
    plVar9 = (longlong *)FUN_1403b96b0(&local_a0,local_68);
    lVar10 = *plVar9;
    local_b8 = *plVar8;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_60 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_60 + 8))(local_60);
        }
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_50 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_50 + 8))(local_50);
        }
      }
    }
    param_3 = local_res18;
    if (lVar10 == local_b8) goto LAB_140b99fc6;
  }
LAB_140b9a2f1:
  uVar11 = 0;
LAB_140b9a2f3:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  return uVar11;
}

