
void FUN_140ba1800(longlong *param_1,undefined8 *param_2,char param_3,undefined1 param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  char local_res8 [8];
  undefined1 local_98 [8];
  uint *local_90;
  uint *local_88;
  longlong lStack_80;
  int local_78;
  char local_74;
  undefined4 local_70;
  undefined **local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  cVar6 = (**(code **)(*param_1 + 0x68))();
  if (((cVar6 != '\0') &&
      (lVar9 = (**(code **)(*param_1 + 0x50))(param_1), *(longlong *)(lVar9 + 0x230) != 0)) &&
     (lVar9 = (**(code **)(*param_1 + 0x50))(param_1),
     0 < *(int *)(*(longlong *)(lVar9 + 0x230) + 0xa0))) {
    return;
  }
  if ((param_3 != '\0') || (local_res8[0] = '\0', (int)param_1[0x14] == 0)) {
    local_res8[0] = '\x01';
  }
  uVar15 = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  puVar10 = (undefined4 *)FUN_14077c7b0(DAT_1416e3260);
  *(undefined4 *)((longlong)param_1 + 0x1a4) = *puVar10;
  bVar7 = 0;
  if (param_3 != '\0') {
    cVar6 = FUN_140ba1ff0(param_1);
    if (cVar6 == '\0') {
      if ((((int)param_1[0x14] == 0) || (*(int *)(param_2 + 2) == 0)) ||
         (*(int *)*param_2 != *(int *)param_1[0x12])) goto LAB_140ba1b05;
    }
    else {
      if ((int)param_1[0x14] != 0) {
        plVar12 = param_1 + 0x12;
        uVar2 = *(uint *)*plVar12;
        FUN_1400b1970(plVar12);
        lVar9 = param_1[0x13];
        local_90 = operator_new(0x20);
        *local_90 = uVar2;
        *(longlong *)(local_90 + 2) = lVar9;
        local_90[4] = 0;
        local_90[5] = 0;
        *(undefined1 *)(local_90 + 6) = 0;
        param_1[0x13] = (longlong)local_90;
        lVar14 = param_1[0x14];
        *(int *)(param_1 + 0x14) = (int)lVar14 + 1;
        if ((int)lVar14 == 0) {
          *plVar12 = (longlong)local_90;
        }
        else {
          *(uint **)(lVar9 + 0x10) = local_90;
        }
        if (*(int *)(param_2 + 2) != 0) {
          lVar9 = *(longlong *)
                   (*(longlong *)(DAT_1416e3260 + 0x278) + (ulonglong)*(ushort *)*plVar12 * 8);
          lVar14 = *(longlong *)
                    (*(longlong *)(DAT_1416e3260 + 0x278) + (ulonglong)*(ushort *)*param_2 * 8);
          if (lVar14 == lVar9) {
            lVar9 = *plVar12;
            if (lVar9 != 0) {
              if (*(char *)((longlong)param_1 + 0xa4) == '\0') {
                lVar14 = *(longlong *)(lVar9 + 0x10);
                *plVar12 = lVar14;
                if (lVar14 == 0) {
                  param_1[0x13] = 0;
                }
                else {
                  *(undefined8 *)(lVar14 + 8) = 0;
                }
                thunk_FUN_140e1c5e4(lVar9,0x20);
                *(int *)(param_1 + 0x14) = (int)param_1[0x14] + -1;
              }
              else {
                *(undefined1 *)(lVar9 + 0x18) = 1;
              }
            }
          }
          else {
            cVar6 = FUN_14093bca0(lVar9,*(undefined4 *)*param_2);
            if (cVar6 == '\0') {
              local_88 = (uint *)0x0;
              lStack_80 = 0;
              local_78 = 0;
              local_74 = '\0';
              local_70 = 0;
              local_68 = &PTR_FUN_1410669b0;
              local_60 = &PTR_FUN_1410669c0;
              local_58 = 0;
              local_50 = 0;
              cVar6 = FUN_1408cfdb0(&local_68,param_1,lVar9,lVar14);
              if (cVar6 != '\0') {
                FUN_1408cebc0(&local_68,param_1,lVar9,lVar14,&local_88);
              }
              lVar9 = lStack_80;
              puVar5 = local_88;
              if (lStack_80 != 0) {
                if (local_74 == '\0') {
                  lStack_80 = *(longlong *)(lStack_80 + 8);
                  if (lStack_80 == 0) {
                    local_88 = (uint *)0x0;
                  }
                  else {
                    *(undefined8 *)(lStack_80 + 0x10) = 0;
                  }
                  thunk_FUN_140e1c5e4(lVar9,0x20);
                  local_78 = local_78 + -1;
                  puVar5 = local_88;
                }
                else {
                  *(undefined1 *)(lStack_80 + 0x18) = 1;
                }
              }
              while (puVar5 != (uint *)0x0) {
                uVar2 = *puVar5;
                puVar5 = *(uint **)(puVar5 + 4);
                lVar9 = param_1[0x13];
                local_90 = operator_new(0x20);
                *local_90 = uVar2;
                *(longlong *)(local_90 + 2) = lVar9;
                local_90[4] = 0;
                local_90[5] = 0;
                *(undefined1 *)(local_90 + 6) = 0;
                param_1[0x13] = (longlong)local_90;
                lVar14 = param_1[0x14];
                *(int *)(param_1 + 0x14) = (int)lVar14 + 1;
                if ((int)lVar14 == 0) {
                  *plVar12 = (longlong)local_90;
                }
                else {
                  *(uint **)(lVar9 + 0x10) = local_90;
                }
              }
              local_60 = &PTR_FUN_1410669c0;
              FUN_1400d4ca0(&local_60);
              puVar5 = local_88;
              while (puVar5 != (uint *)0x0) {
                puVar4 = *(uint **)(puVar5 + 4);
                thunk_FUN_140e1c5e4(puVar5,0x20);
                puVar5 = puVar4;
              }
              local_88 = (uint *)0x0;
              lStack_80 = 0;
              local_78 = 0;
            }
          }
        }
        goto LAB_140ba1b18;
      }
LAB_140ba1b05:
      *(undefined4 *)(param_1 + 0x16) = 0;
    }
    FUN_1400b1970(param_1 + 0x12);
  }
LAB_140ba1b18:
  uVar1 = *(ushort *)(param_1[0x10] + 0xe8);
  if ((int)param_1[0x14] != 0) {
    uVar11 = uVar15;
    if (0 < (int)param_1[0x14]) {
      uVar11 = FUN_140822200(DAT_1416e32d8,*(undefined4 *)param_1[0x13]);
    }
    uVar1 = *(ushort *)(uVar11 + 0xe8);
  }
  puVar5 = (uint *)*param_2;
  uVar2 = (uint)uVar1;
  while (puVar5 != (uint *)0x0) {
    uVar3 = *puVar5;
    puVar5 = *(uint **)(puVar5 + 4);
    if (uVar3 != uVar2) {
      lVar9 = param_1[0x13];
      local_90 = operator_new(0x20);
      *local_90 = uVar3;
      *(longlong *)(local_90 + 2) = lVar9;
      local_90[4] = 0;
      local_90[5] = 0;
      *(undefined1 *)(local_90 + 6) = 0;
      param_1[0x13] = (longlong)local_90;
      lVar14 = param_1[0x14];
      *(int *)(param_1 + 0x14) = (int)lVar14 + 1;
      uVar2 = uVar3;
      if ((int)lVar14 == 0) {
        param_1[0x12] = (longlong)local_90;
      }
      else {
        *(uint **)(lVar9 + 0x10) = local_90;
      }
    }
  }
  if (((local_res8[0] != '\0') && ((int)param_1[0x14] != 0)) &&
     (((param_1[0xd] != 0 && (*(int *)(param_1[0xd] + 8) != 0)) ||
      ((param_1[0xf] != 0 && (*(int *)(param_1[0xf] + 8) != 0)))))) {
    bVar7 = 1;
  }
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) | bVar7;
  FUN_140ba57d0(param_1);
  cVar6 = FUN_14093b1a0(param_1[0x10]);
  if (((int)(*(longlong *)(param_1[0x10] + 0xcf0) - *(longlong *)(param_1[0x10] + 0xce8) >> 2) == 0)
     || (cVar6 != '\0')) {
    plVar12 = (longlong *)FUN_140b9a450(param_1);
    if (param_1[0x2e] == 0) {
      lVar9 = FUN_1400d3090(param_1 + 0x2d);
      param_1[0x2c] = lVar9;
      param_1[0x2e] = lVar9;
      if (lVar9 == 0) {
        param_1[0x2e] = DAT_1416e2360;
      }
    }
    local_res8[0] = '\0';
    FUN_14025d050(*(undefined8 *)(*(longlong *)(param_1[0x10] + 0xd48) + 0x498),param_1[0x2e],
                  local_res8,local_98,&local_90);
    if (local_res8[0] != '\0') {
      cVar6 = (**(code **)(*plVar12 + 0x30))(plVar12);
      if ((cVar6 != '\0') &&
         (lVar9 = *(longlong *)(*(longlong *)(param_1[0x10] + 0xd48) + 0x498),
         plVar12 == *(longlong **)(lVar9 + 0x168))) {
        if ((*(longlong *)(lVar9 + 0x28) == 0) ||
           (lVar14 = *(longlong *)(*(longlong *)(lVar9 + 0x28) + 0x108), lVar14 == 0)) {
          lVar14 = *(longlong *)(lVar9 + 0x1a8);
          lVar9 = *(longlong *)(lVar14 + 0x1a8);
          uVar11 = uVar15;
          if (lVar14 != *(longlong *)(lVar14 + 0x1a8)) {
            do {
              lVar13 = lVar9;
              if (4 < (int)uVar11) break;
              uVar11 = (ulonglong)((int)uVar11 + 1);
              lVar9 = *(longlong *)(lVar13 + 0x1a8);
              lVar14 = lVar13;
            } while (lVar13 != *(longlong *)(lVar13 + 0x1a8));
          }
        }
        lVar9 = *(longlong *)(lVar14 + 0x28);
        if (((lVar9 == 0) || (*(longlong *)(lVar9 + 0xb0) == 0)) ||
           (lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0xb0) + 8),
           (*(longlong *)(lVar9 + 0x40) - *(longlong *)(lVar9 + 0x38) & 0xfffffffffffffff8U) == 0))
        {
          lVar9 = DAT_1416e3ad0;
          if (0 < (int)(*(longlong *)(lVar14 + 0x78) - *(longlong *)(lVar14 + 0x70) >> 3)) {
            lVar9 = **(longlong **)(lVar14 + 0x70);
          }
        }
        else {
          lVar9 = **(longlong **)(lVar9 + 0x38);
        }
        if ((*(char *)(lVar9 + 0x394) == '\0') && (*(char *)(lVar9 + 0x395) == '\0'))
        goto LAB_140ba1ded;
      }
      (**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0x128))
                (*(longlong **)(DAT_1416e3260 + 0x370),1,param_1[0x10]);
      lVar9 = param_1[0x10];
      iVar8 = (int)(*(longlong *)(lVar9 + 0xf38) - *(longlong *)(lVar9 + 0xf30) >> 3);
      if (0 < iVar8) {
        do {
          *(undefined1 *)(*(longlong *)(*(longlong *)(lVar9 + 0xf30) + uVar15 * 8) + 0x878) = 1;
          uVar15 = uVar15 + 1;
        } while ((longlong)uVar15 < (longlong)iVar8);
      }
    }
  }
LAB_140ba1ded:
  *(undefined1 *)((longlong)param_1 + 0x222) = param_4;
  return;
}

