
void FUN_140ba5040(longlong *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  undefined1 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  char local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined **local_188;
  undefined **local_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong local_160;
  undefined8 uStack_158;
  int local_150;
  undefined1 local_14c;
  undefined4 local_148;
  undefined8 local_140;
  undefined1 local_138 [160];
  undefined **local_98 [12];
  
  local_140 = 0xfffffffffffffffe;
  if ((param_1[0xd] != 0) && (*(int *)(param_1[0xd] + 8) != 0)) {
    return;
  }
  if (0 < *(int *)((longlong)param_1 + 0xb4)) {
    return;
  }
  if (param_1[0x38] == 0) {
    return;
  }
  cVar7 = (**(code **)(*param_1 + 0x68))();
  uVar15 = 0;
  if (((cVar7 != '\0') && (0 < *(int *)(param_1[0x38] + 0xa0))) &&
     (lVar9 = FUN_140822200(DAT_1416e32d8,**(undefined4 **)(param_1[0x38] + 0x90)),
     *(char *)(*(longlong *)(lVar9 + 0xf0) + 100) == '\0')) goto LAB_140ba5798;
  lVar9 = param_1[0x38];
  lVar12 = param_1[0x10];
  if ((lVar12 == *(longlong *)(lVar9 + 0x80)) && (0 < *(int *)(lVar9 + 0xa0))) {
    bVar6 = false;
    if (*(int *)(lVar9 + 0xa0) != (int)param_1[0x14]) {
LAB_140ba518a:
      if (1 < DAT_1417e3b70) {
        if (*(code **)(*param_1 + 0x30) == (code *)&LAB_1401add00) {
          plVar11 = param_1 + 0x17;
        }
        else {
          plVar11 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
        }
        uVar10 = FUN_1400ae570(local_138,"D:\\jenkins\\workspace\\ck2-steam\\ck2\\source\\unit.cpp",
                               0xfd6,6);
        uVar3 = *(undefined4 *)((longlong)param_1 + 0x24);
        FUN_140d652c0(uVar10," AddMovement: ",0xe);
        if (0xf < (ulonglong)plVar11[3]) {
          plVar11 = (longlong *)*plVar11;
        }
        uVar10 = FUN_1400cdc40(uVar10,plVar11);
        uVar10 = FUN_1400cdc40(uVar10,&DAT_141075fa4);
        plVar11 = (longlong *)FUN_140268040(uVar10,uVar3);
        uVar8 = FUN_1400b14a0((longlong)*(int *)(*plVar11 + 4) + (longlong)plVar11,10);
        FUN_1400b1350(plVar11,uVar8);
        FUN_1400b0b20(plVar11);
        FUN_140d64ca0(local_98);
        local_98[0] = std::ios_base::vftable;
        std::ios_base::_Ios_base_dtor((ios_base *)local_98);
      }
      FUN_140ba1800(param_1,param_1[0x38] + 0x90,1,0);
      return;
    }
    piVar18 = *(int **)(lVar9 + 0x90);
    if (piVar18 != (int *)0x0) {
      uVar14 = uVar15;
      do {
        iVar1 = *piVar18;
        piVar18 = *(int **)(piVar18 + 4);
        iVar20 = (int)uVar14;
        piVar4 = (int *)param_1[0x12];
        uVar14 = uVar15;
        while (((piVar4 != (int *)0x0 && (!bVar6)) && (iVar19 = (int)uVar14, iVar19 <= iVar20))) {
          iVar2 = *piVar4;
          piVar4 = *(int **)(piVar4 + 4);
          if ((iVar2 != iVar1) && (bVar6 = false, iVar19 == iVar20)) {
            bVar6 = true;
          }
          uVar14 = (ulonglong)(iVar19 + 1);
        }
        uVar14 = (ulonglong)(iVar20 + 1);
      } while (!bVar6 && piVar18 != (int *)0x0);
      if (bVar6) goto LAB_140ba518a;
    }
  }
  if (0 < (int)param_1[0x14]) {
    lVar12 = FUN_140822200(DAT_1416e32d8,*(undefined4 *)param_1[0x13]);
  }
  lVar9 = param_1[0x38];
  lVar13 = *(longlong *)(lVar9 + 0x80);
  if (0 < *(int *)(lVar9 + 0xa0)) {
    lVar13 = FUN_140822200(DAT_1416e32d8,**(undefined4 **)(lVar9 + 0x98));
  }
  bVar6 = false;
  if (((int)param_1[0x14] < 1) ||
     (uVar14 = FUN_140822200(DAT_1416e32d8,*(undefined4 *)param_1[0x12]), uVar14 == 0)) {
LAB_140ba5453:
    if (lVar12 == lVar13) {
      return;
    }
  }
  else {
    if (0 < *(int *)(param_1[0x38] + 0xa0)) {
      uVar15 = FUN_140822200(DAT_1416e32d8,**(undefined4 **)(param_1[0x38] + 0x90));
    }
    if (((uVar14 == uVar15) || (uVar14 == *(ulonglong *)(param_1[0x38] + 0x80))) ||
       (plVar11 = *(longlong **)(uVar14 + 0xcc0), plVar11 == (longlong *)0x0)) goto LAB_140ba5453;
    do {
      if (bVar6) goto LAB_140ba545c;
      plVar5 = (longlong *)*plVar11;
      plVar11 = (longlong *)plVar11[2];
      cVar7 = (**(code **)(*plVar5 + 0x68))(plVar5);
      if ((cVar7 != '\0') && (cVar7 = (**(code **)(*param_1 + 0x68))(param_1), cVar7 != '\0')) {
        lVar9 = DAT_1416e2360;
        if (plVar5[0x2e] == 0) {
          lVar16 = FUN_1400d3090(plVar5 + 0x2d);
          plVar5[0x2c] = lVar16;
          plVar5[0x2e] = lVar16;
          if (lVar16 == 0) {
            plVar5[0x2e] = lVar9;
          }
        }
        lVar16 = plVar5[0x2e];
        if (param_1[0x2e] == 0) {
          lVar17 = FUN_1400d3090(param_1 + 0x2d);
          param_1[0x2c] = lVar17;
          param_1[0x2e] = lVar17;
          if (lVar17 == 0) {
            param_1[0x2e] = lVar9;
          }
        }
        local_res8[0] = '\0';
        FUN_14025d050(param_1[0x2e],lVar16,local_res8,local_res10,local_res18);
        if (local_res8[0] != '\0') {
          bVar6 = true;
        }
      }
    } while (plVar11 != (longlong *)0x0);
    if (!bVar6) goto LAB_140ba5453;
  }
LAB_140ba545c:
  lVar9 = param_1[0x10];
  if (lVar9 == lVar13) {
    if (1 < DAT_1417e3b70) {
      if (*(code **)(*param_1 + 0x40) == (code *)&LAB_1401add00) {
        plVar11 = param_1 + 0x17;
      }
      else {
        plVar11 = (longlong *)(**(code **)(*param_1 + 0x40))(param_1);
      }
      uVar10 = FUN_1400ae570(local_138,"D:\\jenkins\\workspace\\ck2-steam\\ck2\\source\\unit.cpp",
                             0xff6,6);
      uVar3 = *(undefined4 *)((longlong)param_1 + 0x24);
      FUN_140d652c0(uVar10," CancelMovement: ",0x11);
      if (0xf < (ulonglong)plVar11[3]) {
        plVar11 = (longlong *)*plVar11;
      }
      uVar10 = FUN_1400cdc40(uVar10,plVar11);
      uVar10 = FUN_1400cdc40(uVar10,&DAT_141075fa4);
      plVar11 = (longlong *)FUN_140268040(uVar10,uVar3);
      uVar8 = FUN_1400b14a0((longlong)*(int *)(*plVar11 + 4) + (longlong)plVar11,10);
      FUN_1400b1350(plVar11,uVar8);
      FUN_1400b0b20(plVar11);
      FUN_140d64ca0(local_98);
      local_98[0] = std::ios_base::vftable;
      std::ios_base::_Ios_base_dtor((ios_base *)local_98);
    }
    FUN_140ba15e0(param_1,0);
    return;
  }
  lVar16 = FUN_14093b650(lVar13);
  lVar17 = FUN_14093b650(lVar12);
  if (lVar17 == lVar16) {
    local_160 = 0;
    uStack_158 = 0;
    local_150 = 0;
    local_14c = 0;
    local_148 = 0;
    local_180 = &PTR_FUN_1410669c0;
    local_178 = 0;
    local_170 = 0;
    local_188 = &PTR_FUN_1410669a0;
    lVar16 = *(longlong *)(param_1[0x38] + 0x80);
    if (lVar9 == lVar16) {
      cVar7 = FUN_1408cfdb0(&local_188,param_1,lVar9,lVar13);
    }
    else {
      if (lVar12 == lVar16) {
        local_180 = &PTR_FUN_1410669c0;
        FUN_1400d4ca0(&local_180);
        lVar9 = local_160;
        while (lVar9 != 0) {
          lVar12 = *(longlong *)(lVar9 + 0x10);
          thunk_FUN_140e1c5e4(lVar9,0x20);
          lVar9 = lVar12;
        }
        return;
      }
      cVar7 = FUN_1408cfdb0(&local_188,param_1,lVar9,lVar16);
      lVar13 = lVar16;
    }
    if (cVar7 != '\0') {
      FUN_1408cebc0(&local_188,param_1,lVar9,lVar13,&local_160);
    }
    if (0 < local_150) {
      if (1 < DAT_1417e3b70) {
        if (*(code **)(*param_1 + 0x40) == (code *)&LAB_1401add00) {
          plVar11 = param_1 + 0x17;
        }
        else {
          plVar11 = (longlong *)(**(code **)(*param_1 + 0x40))(param_1);
        }
        uVar10 = FUN_1400ae570(local_138,"D:\\jenkins\\workspace\\ck2-steam\\ck2\\source\\unit.cpp",
                               0x100b,6);
        uVar3 = *(undefined4 *)((longlong)param_1 + 0x24);
        FUN_140d652c0(uVar10," AddMovement: ",0xe);
        if (0xf < (ulonglong)plVar11[3]) {
          plVar11 = (longlong *)*plVar11;
        }
        uVar10 = FUN_1400cdc40(uVar10,plVar11);
        uVar10 = FUN_1400cdc40(uVar10,&DAT_141075fa4);
        plVar11 = (longlong *)FUN_140268040(uVar10,uVar3);
        uVar8 = FUN_1400b14a0((longlong)*(int *)(*plVar11 + 4) + (longlong)plVar11,10);
        FUN_1400b1350(plVar11,uVar8);
        FUN_1400b0b20(plVar11);
        FUN_140d64ca0(local_98);
        local_98[0] = std::ios_base::vftable;
        std::ios_base::_Ios_base_dtor((ios_base *)local_98);
      }
      FUN_140ba1800(param_1,&local_160,1,0);
    }
    local_180 = &PTR_FUN_1410669c0;
    FUN_1400d4ca0(&local_180);
    lVar9 = local_160;
    while (lVar9 != 0) {
      lVar12 = *(longlong *)(lVar9 + 0x10);
      thunk_FUN_140e1c5e4(lVar9,0x20);
      lVar9 = lVar12;
    }
    return;
  }
LAB_140ba5798:
  FUN_140ba4ed0(param_1[0x38],param_1);
  return;
}

