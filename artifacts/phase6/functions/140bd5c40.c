
void FUN_140bd5c40(longlong param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int *piVar15;
  undefined1 *puVar16;
  longlong *plVar17;
  int iVar18;
  undefined8 *puVar19;
  char cVar20;
  uint uVar21;
  longlong lVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  undefined8 *puVar27;
  ulonglong local_res8;
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_178;
  undefined7 uStack_177;
  undefined8 local_168;
  ulonglong local_160;
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110 [32];
  undefined1 local_f0 [40];
  undefined **local_c8 [18];
  
  local_118 = 0xfffffffffffffffe;
  local_res8 = local_res8 & 0xffffffff00000000;
  local_160 = 0xf;
  local_168 = 0;
  local_178 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1c0) == 0) {
    FUN_1400b0300(&local_178,"attach_unit_button",0x12);
    plVar11 = (longlong *)
              (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                        (*(longlong **)(param_1 + 0x30),&local_178);
    (**(code **)(*plVar11 + 0x70))(plVar11);
    FUN_1400ae4f0(&local_178);
    local_160 = 0xf;
    local_168 = 0;
    local_178 = 0;
    FUN_1400b0300(&local_178,"detach_unit_button",0x12);
    plVar11 = (longlong *)
              (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                        (*(longlong **)(param_1 + 0x30),&local_178);
    (**(code **)(*plVar11 + 0x78))(plVar11);
    FUN_1400ae4f0(&local_178);
    lVar12 = FUN_140bd8260(param_1);
    if ((lVar12 == 0) || (0 < *(int *)(*(longlong *)(param_1 + 0x38) + 0xb4))) {
      local_160 = 0xf;
      local_168 = 0;
      local_178 = 0;
      FUN_1400b0300(&local_178,"attach_unit_button",0x12);
      plVar11 = (longlong *)
                (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                          (*(longlong **)(param_1 + 0x30),&local_178);
      pcVar1 = *(code **)(*plVar11 + 0x1e8);
      if (pcVar1 == (code *)&LAB_140cfb180) {
        *(undefined4 *)((longlong)plVar11 + 0x8c) = 3;
        (**(code **)(*plVar11 + 0x2a8))(plVar11,0);
      }
      else {
        (*pcVar1)();
      }
      FUN_1400ae4f0(&local_178);
    }
    else {
      local_160 = 0xf;
      local_168 = 0;
      local_178 = 0;
      FUN_1400b0300(&local_178,"attach_unit_button",0x12);
      plVar11 = (longlong *)
                (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                          (*(longlong **)(param_1 + 0x30),&local_178);
      if (*(code **)(*plVar11 + 0x1e0) == (code *)&LAB_140cfb160) {
        if (*(int *)((longlong)plVar11 + 0x8c) == 3) {
          *(undefined4 *)((longlong)plVar11 + 0x8c) = 0;
        }
      }
      else {
        (**(code **)(*plVar11 + 0x1e0))();
      }
      FUN_1400ae4f0(&local_178);
    }
  }
  else {
    FUN_1400b0300(&local_178,"detach_unit_button",0x12);
    plVar11 = (longlong *)
              (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                        (*(longlong **)(param_1 + 0x30),&local_178);
    (**(code **)(*plVar11 + 0x70))(plVar11);
    if (0xf < local_160) {
      FUN_1400b08c0(&local_178,CONCAT71(uStack_177,local_178),local_160 + 1);
    }
    local_160 = 0xf;
    local_168 = 0;
    local_178 = 0;
    FUN_1400b0300(&local_178,"attach_unit_button",0x12);
    plVar11 = (longlong *)
              (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                        (*(longlong **)(param_1 + 0x30),&local_178);
    (**(code **)(*plVar11 + 0x78))(plVar11);
    if (0xf < local_160) {
      FUN_1400b08c0(&local_178,CONCAT71(uStack_177,local_178),local_160 + 1);
    }
    local_160 = 0xf;
    local_168 = 0;
    local_178 = 0;
    if (*(int *)(*(longlong *)(param_1 + 0x38) + 0xb4) < 1) {
      FUN_1400b0300(&local_178,"detach_unit_button",0x12);
      plVar11 = (longlong *)
                (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                          (*(longlong **)(param_1 + 0x30),&local_178);
      if (*(code **)(*plVar11 + 0x1e0) == (code *)&LAB_140cfb160) {
        if (*(int *)((longlong)plVar11 + 0x8c) == 3) {
          *(undefined4 *)((longlong)plVar11 + 0x8c) = 0;
        }
      }
      else {
        (**(code **)(*plVar11 + 0x1e0))();
      }
    }
    else {
      FUN_1400b0300(&local_178,"detach_unit_button",0x12);
      plVar11 = (longlong *)
                (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                          (*(longlong **)(param_1 + 0x30),&local_178);
      pcVar1 = *(code **)(*plVar11 + 0x1e8);
      if (pcVar1 == (code *)&LAB_140cfb180) {
        *(undefined4 *)((longlong)plVar11 + 0x8c) = 3;
        (**(code **)(*plVar11 + 0x2a8))(plVar11,0);
      }
      else {
        (*pcVar1)();
      }
    }
    if (0xf < local_160) {
      FUN_1400b08c0(&local_178,CONCAT71(uStack_177,local_178),local_160 + 1);
    }
  }
  cVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x70))();
  if ((cVar7 == '\0') ||
     (lVar12 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x60))(), *(int *)(lVar12 + 0x240) < 1
     )) {
    local_120 = 0xf;
    local_128 = 0;
    local_138[0] = 0;
    FUN_1400b0300(local_138,"embarked_unit",0xd);
    lVar12 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xe8))
                       (*(longlong **)(param_1 + 0x30),local_138);
    (**(code **)(*(longlong *)(lVar12 + 0x28) + 0x78))();
    FUN_1400ae4f0(local_138);
  }
  else {
    local_120 = 0xf;
    local_128 = 0;
    local_138[0] = 0;
    FUN_1400b0300(local_138,"unit_count",10);
    local_160 = 0xf;
    local_168 = 0;
    local_178 = 0;
    FUN_1400b0300(&local_178,"embarked_unit",0xd);
    plVar11 = (longlong *)
              (**(code **)(**(longlong **)(param_1 + 0x30) + 0xe8))
                        (*(longlong **)(param_1 + 0x30),&local_178);
    lVar12 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x60))();
    uVar13 = FUN_140d5ebc0(local_158,*(undefined4 *)(lVar12 + 0x240));
    uVar14 = (**(code **)(*plVar11 + 0x88))(plVar11,local_138);
    FUN_140c58b10(uVar14,uVar13,0);
    FUN_1400ae4f0(local_158);
    FUN_1400ae4f0(&local_178);
    FUN_1400ae4f0(local_138);
    local_160 = 0xf;
    local_168 = 0;
    local_178 = 0;
    FUN_1400b0300(&local_178,"regiment_count",0xe);
    local_120 = 0xf;
    local_128 = 0;
    local_138[0] = 0;
    FUN_1400b0300(local_138,"embarked_unit",0xd);
    plVar11 = (longlong *)
              (**(code **)(**(longlong **)(param_1 + 0x30) + 0xe8))
                        (*(longlong **)(param_1 + 0x30),local_138);
    lVar12 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x60))();
    lVar12 = FUN_140bbb130(lVar12 + 0x230,local_c8,1);
    iVar18 = *(int *)(lVar12 + 0x10) + *(int *)(lVar12 + 0x14) + *(int *)(lVar12 + 0x18) +
             *(int *)(lVar12 + 0x1c) + *(int *)(lVar12 + 0x20) + *(int *)(lVar12 + 0x24) +
             *(int *)(lVar12 + 0x28) + *(int *)(lVar12 + 0x2c);
    iVar10 = iVar18 / 1000;
    if (iVar18 % 1000 != 0) {
      iVar10 = (uint)(0 < iVar18) + iVar10;
    }
    uVar13 = FUN_140d5ebc0(local_158,(iVar10 * 1000) / 1000);
    uVar14 = (**(code **)(*plVar11 + 0x88))(plVar11,&local_178);
    FUN_140c58b10(uVar14,uVar13,0);
    FUN_1400ae4f0(local_158);
    local_c8[0] = &PTR_FUN_141065928;
    FUN_1400ae4f0(local_138);
    FUN_1400ae4f0(&local_178);
    local_120 = 0xf;
    local_128 = 0;
    local_138[0] = 0;
    FUN_1400b0300(local_138,"embarked_unit",0xd);
    lVar12 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xe8))
                       (*(longlong **)(param_1 + 0x30),local_138);
    (**(code **)(*(longlong *)(lVar12 + 0x28) + 0x70))();
    FUN_1400ae4f0(local_138);
  }
  cVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x68))();
  if (cVar7 == '\0') {
    local_128 = 0;
    local_120 = 0;
    FUN_1400b0200(local_138,0,0);
    FUN_1400b0300(local_138,&DAT_14106162d,0);
    puVar16 = local_138;
    uVar21 = 8;
  }
  else {
    local_140 = 0xf;
    local_148 = 0;
    local_158[0] = 0;
    FUN_1400b0300(local_158,&DAT_14107fd50,1);
    local_res8._0_4_ = 1;
    piVar15 = (int *)FUN_140b9fc20(*(undefined8 *)(param_1 + 0x38),local_res18);
    local_res10[0] = (undefined4)(((longlong)*piVar15 * 100000) / 1000);
    uVar13 = FUN_140d5ede0(local_110,local_res10,1);
    local_res8 = CONCAT44(local_res8._4_4_,3);
    puVar16 = (undefined1 *)FUN_140d5f250(uVar13,local_f0,local_158);
    uVar21 = 7;
  }
  local_res8 = CONCAT44(local_res8._4_4_,uVar21);
  local_168 = 0;
  local_160 = 0;
  FUN_1400b0200(&local_178,0,0);
  FUN_1400b0300(&local_178,"unitattrition",0xd);
  plVar11 = *(longlong **)(param_1 + 0x30);
  if ((undefined **)*plVar11 == &PTR_FUN_141156ab0) {
    uVar13 = FUN_140ceb7c0(&local_178,plVar11 + 0xa3,plVar11 + 0xa0);
  }
  else {
    uVar13 = (*(code *)((undefined **)*plVar11)[0x11])(plVar11,&local_178);
  }
  FUN_140c58b10(uVar13,puVar16,0);
  FUN_1400ae4f0(&local_178);
  if ((uVar21 & 8) != 0) {
    uVar21 = uVar21 & 0xfffffff7;
    FUN_1400ae4f0(local_138);
  }
  if ((uVar21 & 4) != 0) {
    uVar21 = uVar21 & 0xfffffffb;
    FUN_1400ae4f0(local_f0);
  }
  if ((uVar21 & 2) != 0) {
    uVar21 = uVar21 & 0xfffffffd;
    FUN_1400ae4f0(local_110);
  }
  if ((uVar21 & 1) != 0) {
    FUN_1400ae4f0(local_158);
  }
  local_148 = 0;
  local_140 = 0;
  FUN_1400b0200(local_158,0,0);
  FUN_1400b0300(local_158,"toggle_looter_button",0x14);
  plVar11 = (longlong *)
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                      (*(longlong **)(param_1 + 0x30),local_158);
  FUN_1400ae4f0(local_158);
  cVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x68))();
  local_168 = 0;
  local_160 = 0;
  if (cVar7 == '\0') {
    FUN_1400b0200(&local_178,0,0);
    FUN_1400b0300(&local_178,"unitpanel_attrition",0x13);
    plVar17 = *(longlong **)(param_1 + 0x30);
    if ((undefined **)*plVar17 == &PTR_FUN_141156ab0) {
      plVar17 = (longlong *)FUN_140ceb7c0(&local_178,plVar17 + 0x9d,plVar17 + 0x9a);
    }
    else {
      plVar17 = (longlong *)(*(code *)((undefined **)*plVar17)[0x13])(plVar17,&local_178);
    }
    (**(code **)(*plVar17 + 0x288))(plVar17);
    FUN_1400ae4f0(&local_178);
    if (*(char *)(param_1 + 0x618) == '\0') {
      local_128 = 0;
      local_120 = 0;
      FUN_1400b0200(local_138,0,0);
      FUN_1400b0300(local_138,"attach_order_button",0x13);
      plVar17 = (longlong *)
                (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                          (*(longlong **)(param_1 + 0x30),local_138);
      (**(code **)(*plVar17 + 0x288))(plVar17);
      FUN_1400ae4f0(local_138);
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x288))(plVar11);
    }
  }
  else {
    FUN_1400b0200(&local_178,0,0);
    FUN_1400b0300(&local_178,"unitpanel_attrition",0x13);
    plVar17 = *(longlong **)(param_1 + 0x30);
    if ((undefined **)*plVar17 == &PTR_FUN_141156ab0) {
      plVar17 = (longlong *)FUN_140ceb7c0(&local_178,plVar17 + 0x9d,plVar17 + 0x9a);
    }
    else {
      plVar17 = (longlong *)(*(code *)((undefined **)*plVar17)[0x13])(plVar17,&local_178);
    }
    FUN_1400ae4f0(&local_178);
    if ((undefined **)*plVar17 == &PTR_LAB_14114f008) {
      *(undefined1 *)((longlong)plVar17 + 0x142) = 0;
    }
    else {
      (*(code *)((undefined **)*plVar17)[0x52])(plVar17);
    }
    (**(code **)(*plVar17 + 0x70))(plVar17);
    if ((*(char *)(param_1 + 0x618) == '\0') && (DAT_1417efb83 != '\0')) {
      local_128 = 0;
      local_120 = 0;
      FUN_1400b0200(local_138,0,0);
      FUN_1400b0300(local_138,"attach_order_button",0x13);
      plVar17 = (longlong *)
                (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                          (*(longlong **)(param_1 + 0x30),local_138);
      FUN_1400ae4f0(local_138);
      (**(code **)(*plVar17 + 0x290))(plVar17);
      (**(code **)(*plVar17 + 0x70))(plVar17);
      FUN_140bd70e0(param_1);
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x290))(plVar11);
      (**(code **)(*plVar11 + 0x70))(plVar11);
      FUN_140bb7030(local_c8,*(undefined8 *)(param_1 + 0x38));
      (**(code **)(*plVar11 + 0x98))
                (plVar11,(*(char *)(*(longlong *)(param_1 + 0x38) + 0x157) != '\0') + '\x01');
      cVar7 = (*(code *)local_c8[0][0xf])(local_c8,0);
      if (cVar7 == '\0') {
        pcVar1 = *(code **)(*plVar11 + 0x1e8);
        if (pcVar1 == (code *)&LAB_140cfb180) {
          *(undefined4 *)((longlong)plVar11 + 0x8c) = 3;
          (**(code **)(*plVar11 + 0x2a8))(plVar11,0);
        }
        else {
          (*pcVar1)(plVar11);
        }
      }
      else if (*(code **)(*plVar11 + 0x1e0) == (code *)&LAB_140cfb160) {
        if (*(int *)((longlong)plVar11 + 0x8c) == 3) {
          *(undefined4 *)((longlong)plVar11 + 0x8c) = 0;
        }
      }
      else {
        (**(code **)(*plVar11 + 0x1e0))(plVar11);
      }
      FUN_1400b2310(local_c8);
    }
  }
  local_168 = 0;
  local_160 = 0;
  FUN_1400b0200(&local_178,0,0);
  FUN_1400b0300(&local_178,"army_size",9);
  plVar11 = *(longlong **)(param_1 + 0x30);
  if ((undefined **)*plVar11 == &PTR_FUN_141156ab0) {
    uVar13 = FUN_140ceb7c0(&local_178,plVar11 + 0xa3,plVar11 + 0xa0);
  }
  else {
    uVar13 = (*(code *)((undefined **)*plVar11)[0x11])(plVar11,&local_178);
  }
  lVar12 = FUN_140ba47e0(*(undefined8 *)(param_1 + 0x38),local_c8,1);
  iVar18 = *(int *)(lVar12 + 0x10) + *(int *)(lVar12 + 0x14) + *(int *)(lVar12 + 0x18) +
           *(int *)(lVar12 + 0x1c) + *(int *)(lVar12 + 0x20) + *(int *)(lVar12 + 0x24) +
           *(int *)(lVar12 + 0x28) + *(int *)(lVar12 + 0x2c);
  iVar10 = iVar18 / 1000;
  if (iVar18 % 1000 != 0) {
    iVar10 = (uint)(0 < iVar18) + iVar10;
  }
  uVar14 = FUN_140d5ebc0(local_110,(iVar10 * 1000) / 1000);
  FUN_140c58b10(uVar13,uVar14,0);
  FUN_1400ae4f0(local_110);
  local_c8[0] = &PTR_FUN_141065928;
  FUN_1400ae4f0(&local_178);
  local_168 = 0;
  local_160 = 0;
  FUN_1400b0200(&local_178,0,0);
  FUN_1400b0300(&local_178,"army_name",9);
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x38) + 0x30);
  if (pcVar1 == (code *)&LAB_1401add00) {
    plVar11 = *(longlong **)(param_1 + 0x38) + 0x17;
  }
  else {
    plVar11 = (longlong *)(*pcVar1)();
  }
  plVar17 = *(longlong **)(param_1 + 0x30);
  if ((undefined **)*plVar17 == &PTR_FUN_141156ab0) {
    uVar13 = FUN_140ceb7c0(&local_178,plVar17 + 0xa3,plVar17 + 0xa0);
  }
  else {
    uVar13 = (*(code *)((undefined **)*plVar17)[0x11])(plVar17,&local_178);
  }
  FUN_140c58b10(uVar13,plVar11,0);
  FUN_1400ae4f0(&local_178);
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x138);
  lVar22 = *(longlong *)(lVar12 + 0x28);
  if (((lVar22 == 0) || (*(longlong *)(lVar22 + 0xb0) == 0)) ||
     (lVar22 = *(longlong *)(*(longlong *)(lVar22 + 0xb0) + 8),
     (ulonglong)(*(longlong *)(lVar22 + 0x40) - *(longlong *)(lVar22 + 0x38)) < 8)) {
    lVar22 = DAT_1416e3ad0;
    if (0 < (int)(*(longlong *)(lVar12 + 0x78) - *(longlong *)(lVar12 + 0x70) >> 3)) {
      lVar22 = **(longlong **)(lVar12 + 0x70);
    }
  }
  else {
    lVar22 = **(longlong **)(lVar22 + 0x38);
  }
  local_148 = 0;
  local_140 = 0;
  FUN_1400b0200(local_158,0,0);
  FUN_1400b0300(local_158,"army_shield",0xb);
  plVar11 = (longlong *)
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                      (*(longlong **)(param_1 + 0x30),local_158);
  lVar12 = (**(code **)(*plVar11 + 0x178))(plVar11);
  FUN_1400ae4f0(local_158);
  if (lVar12 != lVar22) {
    local_148 = 0;
    local_140 = 0;
    FUN_1400b0200(local_158,0,0);
    FUN_1400b0300(local_158,"army_shield",0xb);
    uVar13 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                       (*(longlong **)(param_1 + 0x30),local_158);
    plVar11 = *(longlong **)(param_1 + 0x48);
    if ((undefined **)*plVar11 == &PTR_FUN_1410c9158) {
      lVar12 = plVar11[0x62];
    }
    else {
      lVar12 = (*(code *)((undefined **)*plVar11)[0x17])(plVar11);
    }
    FUN_140637430(lVar12,uVar13,lVar22,0,0,0,1,0);
    FUN_1400ae4f0(local_158);
  }
  local_168 = 0;
  local_160 = 0;
  FUN_1400b0200(&local_178,0,0);
  FUN_1400b0300(&local_178,"unit_morale",0xb);
  plVar11 = *(longlong **)(param_1 + 0x30);
  if ((undefined **)*plVar11 == &PTR_FUN_141156ab0) {
    lVar12 = FUN_140ceb7c0(&local_178,plVar11 + 0x9d,plVar11 + 0x9a);
  }
  else {
    lVar12 = (*(code *)((undefined **)*plVar11)[0x13])(plVar11,&local_178);
  }
  plVar11 = *(longlong **)(lVar12 + 0xc0);
  piVar15 = (int *)FUN_140b9e9b0(*(undefined8 *)(param_1 + 0x38),local_res10);
  local_res8 = CONCAT44(local_res8._4_4_,(int)(((longlong)*piVar15 * 100000) / 1000));
  uVar9 = FUN_140d65440(&local_res8);
  ppuVar2 = (undefined **)*plVar11;
  if (ppuVar2 != &PTR_LAB_141158048) {
    (*(code *)ppuVar2[0x16])(plVar11,uVar9);
  }
  FUN_1400ae4f0(&local_178);
  cVar7 = FUN_140b96a90(*(undefined8 *)(param_1 + 0x38));
  local_148 = 0;
  local_140 = 0;
  if (cVar7 == '\0') {
    FUN_1400b0200(local_158,0,0);
    FUN_1400b0300(local_158,"disbandbutton",0xd);
    plVar11 = (longlong *)
              (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                        (*(longlong **)(param_1 + 0x30),local_158);
    pcVar1 = *(code **)(*plVar11 + 0x1e8);
    if (pcVar1 == (code *)&LAB_140cfb180) {
      *(undefined4 *)((longlong)plVar11 + 0x8c) = 3;
      (**(code **)(*plVar11 + 0x2a8))(plVar11,0);
    }
    else {
      (*pcVar1)();
    }
    FUN_1400ae4f0(local_158);
  }
  else {
    FUN_1400b0200(local_158,0,0);
    FUN_1400b0300(local_158,"disbandbutton",0xd);
    plVar11 = (longlong *)
              (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                        (*(longlong **)(param_1 + 0x30),local_158);
    if (*(code **)(*plVar11 + 0x1e0) == (code *)&LAB_140cfb160) {
      if (*(int *)((longlong)plVar11 + 0x8c) == 3) {
        *(undefined4 *)((longlong)plVar11 + 0x8c) = 0;
      }
    }
    else {
      (**(code **)(*plVar11 + 0x1e0))();
    }
    FUN_1400ae4f0(local_158);
  }
  cVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x70))();
  if (cVar7 != '\0') {
    lVar12 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x60))();
    bVar5 = true;
    if (0 < *(int *)(lVar12 + 0x240)) goto LAB_140bd6bd8;
  }
  bVar5 = false;
LAB_140bd6bd8:
  cVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x68))();
  if ((cVar7 == '\0') ||
     (lVar12 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x50))(), puVar27 = (undefined8 *)0x1,
     *(longlong *)(lVar12 + 0x230) == 0)) {
    puVar27 = (undefined8 *)0x0;
  }
  bVar4 = 0 < *(int *)(*(longlong *)(param_1 + 0x38) + 0xb4);
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x68);
  if ((lVar12 == 0) || (*(int *)(lVar12 + 8) == 0)) {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  cVar7 = FUN_140ba1ff0();
  iVar10 = (**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0x200))();
  bVar3 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x48) < 2;
  local_148 = 0;
  local_140 = 0;
  if ((((bVar5 || (bVar4 || (char)puVar27 != '\0')) || (cVar7 != '\0' || (bool)(bVar6 ^ 1))) ||
      iVar10 != 1) || bVar3) {
    FUN_1400b0200(local_158,0,0);
    FUN_1400b0300(local_158,"splitinhalfbutton",0x11);
    plVar11 = (longlong *)
              (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                        (*(longlong **)(param_1 + 0x30),local_158);
    pcVar1 = *(code **)(*plVar11 + 0x1e8);
    if (pcVar1 == (code *)&LAB_140cfb180) {
      *(undefined4 *)((longlong)plVar11 + 0x8c) = 3;
      (**(code **)(*plVar11 + 0x2a8))(plVar11,0);
    }
    else {
      (*pcVar1)();
    }
    FUN_1400ae4f0(local_158);
    local_148 = 0;
    local_140 = 0;
    FUN_1400b0200(local_158,0,0);
    FUN_1400b0300(local_158,"newunitbutton",0xd);
    plVar11 = (longlong *)
              (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                        (*(longlong **)(param_1 + 0x30),local_158);
    pcVar1 = *(code **)(*plVar11 + 0x1e8);
    if (pcVar1 == (code *)&LAB_140cfb180) {
      *(undefined4 *)((longlong)plVar11 + 0x8c) = 3;
      (**(code **)(*plVar11 + 0x2a8))(plVar11,0);
    }
    else {
      (*pcVar1)();
    }
  }
  else {
    FUN_1400b0200(local_158,0,0);
    FUN_1400b0300(local_158,"splitinhalfbutton",0x11);
    plVar11 = (longlong *)
              (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                        (*(longlong **)(param_1 + 0x30),local_158);
    if (*(code **)(*plVar11 + 0x1e0) == (code *)&LAB_140cfb160) {
      if (*(int *)((longlong)plVar11 + 0x8c) == 3) {
        *(undefined4 *)((longlong)plVar11 + 0x8c) = 0;
      }
    }
    else {
      (**(code **)(*plVar11 + 0x1e0))();
    }
    FUN_1400ae4f0(local_158);
    local_148 = 0;
    local_140 = 0;
    FUN_1400b0200(local_158,0,0);
    FUN_1400b0300(local_158,"newunitbutton",0xd);
    plVar11 = (longlong *)
              (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                        (*(longlong **)(param_1 + 0x30),local_158);
    if (*(code **)(*plVar11 + 0x1e0) == (code *)&LAB_140cfb160) {
      if (*(int *)((longlong)plVar11 + 0x8c) == 3) {
        *(undefined4 *)((longlong)plVar11 + 0x8c) = 0;
      }
    }
    else {
      (**(code **)(*plVar11 + 0x1e0))();
    }
  }
  FUN_1400ae4f0(local_158);
  local_148 = 0;
  local_140 = 0;
  FUN_1400b0200(local_158,0,0);
  FUN_1400b0300(local_158,"quicksplitbutton");
  plVar11 = (longlong *)
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                      (*(longlong **)(param_1 + 0x30),local_158);
  FUN_1400ae4f0(local_158);
  cVar23 = '\0';
  cVar24 = '\0';
  cVar25 = '\0';
  cVar26 = '\0';
  cVar20 = '\0';
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x38);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    puVar19 = (undefined8 *)0x0;
  }
  plVar17 = (longlong *)*puVar19;
  while ((plVar17 != (longlong *)0x0 &&
         ((((cVar23 == '\0' || (cVar24 == '\0')) || (cVar25 == '\0')) ||
          ((cVar26 == '\0' || (cVar20 == '\0'))))))) {
    lVar12 = *plVar17;
    plVar17 = (longlong *)plVar17[2];
    iVar18 = *(int *)(lVar12 + 0x44);
    if (iVar18 == 4) {
      cVar26 = '\x01';
    }
    else if (iVar18 == 3) {
      cVar23 = '\x01';
    }
    else if (iVar18 == 2) {
      cVar25 = '\x01';
    }
    else if ((*(byte *)(*(longlong *)(lVar12 + 0x88) + 0x9d3) & 0x40) == 0) {
      cVar20 = '\x01';
    }
    else {
      cVar24 = '\x01';
    }
  }
  if (((byte)(cVar20 + cVar26 + cVar25 + cVar24 + cVar23) < 2) ||
     ((((bVar5 || (bVar4 || (char)puVar27 != '\0')) || (cVar7 != '\0' || (bool)(bVar6 ^ 1))) ||
      iVar10 != 1) || bVar3)) {
    pcVar1 = *(code **)(*plVar11 + 0x1e8);
    if (pcVar1 == (code *)&LAB_140cfb180) {
      *(undefined4 *)((longlong)plVar11 + 0x8c) = 3;
      (**(code **)(*plVar11 + 0x2a8))(plVar11,0);
    }
    else {
      (*pcVar1)(plVar11);
    }
  }
  else if (*(code **)(*plVar11 + 0x1e0) == (code *)&LAB_140cfb160) {
    if (*(int *)((longlong)plVar11 + 0x8c) == 3) {
      *(undefined4 *)((longlong)plVar11 + 0x8c) = 0;
    }
  }
  else {
    (**(code **)(*plVar11 + 0x1e0))(plVar11);
  }
  local_148 = 0;
  local_140 = 0;
  FUN_1400b0200(local_158,0,0);
  FUN_1400b0300(local_158,"loadtoshipbutton",0x10);
  plVar11 = (longlong *)
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                      (*(longlong **)(param_1 + 0x30),local_158);
  FUN_1400ae4f0(local_158);
  cVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x68))();
  if ((cVar7 == '\0') ||
     (lVar12 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x50))(),
     *(longlong *)(lVar12 + 0x230) != 0)) {
    (**(code **)(*plVar11 + 0x78))(plVar11);
  }
  else {
    (**(code **)(*plVar11 + 0x70))(plVar11);
    uVar8 = FUN_140b98ba0(*(undefined8 *)(param_1 + 0x38));
    FUN_140172db0(plVar11,uVar8);
  }
  local_148 = 0;
  local_140 = 0;
  FUN_1400b0200(local_158,0,0);
  FUN_1400b0300(local_158,"select_unit_button",0x12);
  plVar11 = (longlong *)
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                      (*(longlong **)(param_1 + 0x30),local_158);
  FUN_1400ae4f0(local_158);
  if (plVar11 != (longlong *)0x0) {
    iVar10 = (**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0x200))();
    if (iVar10 == 1) {
      (**(code **)(*plVar11 + 0x288))();
    }
    else {
      (**(code **)(*plVar11 + 0x290))(plVar11);
      (**(code **)(*plVar11 + 0x70))(plVar11);
    }
  }
  if ((((*(int *)(param_1 + 0x40) != 0) || (*(int *)(param_1 + 0x44) != 0)) &&
      (lVar12 = FUN_1400d3090(param_1 + 0x40), lVar12 != 0)) && (lVar12 != 0x10)) {
    local_res8 = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    (**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0x1a0))();
    (**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0x1e8))();
  }
  return;
}

