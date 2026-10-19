
void FUN_140b9b660(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  char *pcVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  longlong local_88;
  ulonglong local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58 [3];
  ulonglong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  plVar1 = param_1 + 0x17;
  FUN_1400b0300(plVar1,&DAT_14106162d,0);
  if (param_1[0x2e] == 0) {
    lVar5 = FUN_1400d3090(param_1 + 0x2d);
    param_1[0x2c] = lVar5;
    param_1[0x2e] = lVar5;
    if (lVar5 == 0) {
      param_1[0x2e] = DAT_1416e2360;
    }
  }
  lVar5 = param_1[0x2e];
  cVar3 = (**(code **)(*param_1 + 0x68))(param_1);
  if (cVar3 == '\0') {
    uVar8 = FUN_140698bb0(&local_78,"FLEET");
    uVar9 = FUN_1401ad120(lVar5);
    uVar9 = FUN_140a4ccf0(uVar9,&local_b8);
    uVar8 = FUN_140152080(local_58,"UNIT_ARMY_NAME",&DAT_1410774cc,uVar9,&DAT_141072128,uVar8);
    FUN_1400cd750(plVar1,uVar8);
    FUN_1400ae4f0(local_58);
    FUN_1400ae4f0(&local_b8);
    puVar10 = &local_78;
LAB_140b9bc3d:
    FUN_1400ae4f0(puVar10);
    return;
  }
  lVar14 = *(longlong *)(lVar5 + 0x28);
  if (((lVar14 == 0) || (*(longlong *)(lVar14 + 0xb0) == 0)) ||
     (lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0xb0) + 8),
     (ulonglong)(*(longlong *)(lVar14 + 0x40) - *(longlong *)(lVar14 + 0x38)) < 8)) {
    plVar7 = DAT_1416e3ad0;
    if (0 < (int)(*(longlong *)(lVar5 + 0x78) - *(longlong *)(lVar5 + 0x70) >> 3)) {
      plVar7 = (longlong *)**(undefined8 **)(lVar5 + 0x70);
    }
  }
  else {
    plVar7 = (longlong *)**(undefined8 **)(lVar14 + 0x38);
  }
  if ((*(byte *)((longlong)plVar7 + 0x9d2) & 0x20) == 0) {
    lVar14 = param_1[0x27];
    if (((*(byte *)(lVar14 + 0x1e9) & 2) == 0) &&
       (lVar14 = param_1[0x26], (*(byte *)(lVar14 + 0x1e9) & 2) == 0)) {
      lVar14 = param_1[0x28];
    }
    lVar12 = 0;
    lVar15 = -1;
    if ((((0 < (int)param_1[9]) && (*(longlong *)param_1[7] != 0)) &&
        (cVar3 = (**(code **)(**(longlong **)param_1[7] + 0x48))(), cVar3 != '\0')) &&
       (cVar3 = FUN_140a2b3b0(*(undefined8 *)param_1[7]), cVar3 != '\0')) {
      pcVar11 = (char *)(*(longlong *)param_1[7] + 0x118);
      if (0xf < *(ulonglong *)(*(longlong *)param_1[7] + 0x130)) {
        pcVar11 = *(char **)pcVar11;
      }
      local_80 = 0xf;
      local_88 = 0;
      local_98 = 0;
      lVar13 = lVar12;
      if (*pcVar11 != '\0') {
        lVar13 = -1;
        do {
          lVar13 = lVar13 + 1;
        } while (pcVar11[lVar13] != '\0');
      }
      FUN_1400b0300(&local_98,pcVar11,lVar13);
      if (local_88 != 0) {
        plVar2 = (longlong *)param_1[7];
        plVar7 = plVar2;
        do {
          if (plVar7 == (longlong *)0x0) {
            plVar2 = (longlong *)*plVar2;
            uVar8 = (**(code **)(*plVar2 + 0x50))(plVar2,local_58);
            uVar9 = FUN_1401ad120(lVar5);
            uVar9 = FUN_140a4ccf0(uVar9,&local_b8);
            uVar8 = FUN_140152080(&local_78,"UNIT_ARMY_NAME",&DAT_1410774cc,uVar9,&DAT_141072128,
                                  uVar8);
            FUN_1400cd750(plVar1,uVar8);
            if (0xf < local_60) {
              FUN_1400b08c0(&local_78,CONCAT71(uStack_77,local_78),local_60 + 1);
            }
            local_60 = 0xf;
            local_68 = 0;
            local_78 = 0;
            if (0xf < local_a0) {
              FUN_1400b08c0(&local_b8,CONCAT71(uStack_b7,local_b8),local_a0 + 1);
            }
            local_a0 = 0xf;
            local_a8 = 0;
            local_b8 = 0;
            if (0xf < local_40) {
              FUN_1400b08c0(local_58,local_58[0],local_40 + 1);
            }
            if (local_80 < 0x10) {
              return;
            }
            FUN_1400b08c0(&local_98,CONCAT71(uStack_97,local_98),local_80 + 1);
            return;
          }
          lVar13 = *plVar7;
          plVar7 = (longlong *)plVar7[2];
          iVar4 = FUN_1400afd70(&local_98,lVar13 + 0x118);
        } while (iVar4 == 0);
      }
      if (0xf < local_80) {
        FUN_1400b08c0(&local_98,CONCAT71(uStack_97,local_98),local_80 + 1);
      }
    }
    if ((*(byte *)(lVar14 + 0x1e9) & 2) == 0) {
      pcVar11 = "ARMY";
      if (*(char *)((longlong)param_1 + 0x157) != '\0') {
        pcVar11 = "RAIDER_ARMY";
      }
      local_a0 = 0xf;
      local_a8 = 0;
      local_b8 = 0;
      if (*pcVar11 != '\0') {
        lVar12 = -1;
        do {
          lVar12 = lVar12 + 1;
        } while (pcVar11[lVar12] != '\0');
      }
      FUN_1400b0300(&local_b8,pcVar11,lVar12);
      uVar8 = FUN_140698d80(&local_98,&local_b8);
      uVar9 = FUN_1401ad120(lVar5);
      uVar9 = FUN_140a4ccf0(uVar9,&local_78);
      uVar8 = FUN_140152080(local_58,"UNIT_ARMY_NAME",&DAT_1410774cc,uVar9,&DAT_141072128,uVar8);
      FUN_1400cd750(param_1 + 0x17,uVar8);
      FUN_1400ae4f0(local_58);
      FUN_1400ae4f0(&local_78);
      FUN_1400ae4f0(&local_98);
      puVar10 = &local_b8;
    }
    else {
      pcVar11 = "ARMY_NAME";
      if (*(char *)((longlong)param_1 + 0x157) != '\0') {
        pcVar11 = "RAIDER_ARMY_NAME";
      }
      local_80 = 0xf;
      local_88 = 0;
      local_98 = 0;
      cVar3 = *pcVar11;
      while (cVar3 != '\0') {
        lVar15 = lVar15 + 1;
        lVar12 = lVar15;
        cVar3 = pcVar11[lVar15];
      }
      FUN_1400b0300(&local_98,pcVar11,lVar12);
      local_60 = 0xf;
      local_68 = 0;
      local_78 = 0;
      FUN_1400b0300(&local_78,&DAT_1410725c8,4);
      uVar8 = FUN_1401e4510(lVar14,local_58,0,1,1);
      uVar8 = FUN_140152370(&local_b8,&local_98,&local_78,uVar8);
      FUN_1400cd750(param_1 + 0x17,uVar8);
      if (0xf < local_a0) {
        FUN_1400b08c0(&local_b8,CONCAT71(uStack_b7,local_b8),local_a0 + 1);
      }
      local_a0 = 0xf;
      local_a8 = 0;
      local_b8 = 0;
      FUN_1400ae4f0(local_58);
      FUN_1400ae4f0(&local_78);
      puVar10 = &local_98;
    }
    goto LAB_140b9bc3d;
  }
  lVar14 = *(longlong *)(lVar5 + 0x28);
  if (((lVar14 == 0) || (*(longlong *)(lVar14 + 0xb0) == 0)) ||
     (lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0xb0) + 8),
     (*(longlong *)(lVar14 + 0x40) - *(longlong *)(lVar14 + 0x38) & 0xfffffffffffffff8U) == 0)) {
    plVar7 = DAT_1416e3ad0;
    if ((int)(*(longlong *)(lVar5 + 0x78) - *(longlong *)(lVar5 + 0x70) >> 3) < 1)
    goto LAB_140b9b7aa;
    puVar6 = *(undefined8 **)(lVar5 + 0x70);
  }
  else {
    puVar6 = *(undefined8 **)(lVar14 + 0x38);
  }
  plVar7 = (longlong *)*puVar6;
LAB_140b9b7aa:
  if (*(code **)(*plVar7 + 0x38) == FUN_1408358f0) {
    plVar7 = plVar7 + 2;
  }
  else {
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x38))(plVar7);
  }
  if (0xf < (ulonglong)plVar7[3]) {
    plVar7 = (longlong *)*plVar7;
  }
  if ((char)*plVar7 == '\0') {
    lVar5 = 0;
  }
  else {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (*(char *)((longlong)plVar7 + lVar5) != '\0');
  }
  FUN_1400b0300(plVar1,plVar7,lVar5);
  return;
}

