
/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_14039cf80(longlong param_1,char param_2)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  char local_res18 [8];
  int local_res20 [2];
  undefined8 auStack_1e0 [5];
  undefined8 local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  undefined **local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined ***local_d8;
  undefined ***local_d0;
  undefined ***local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  ushort local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined1 local_70 [88];
  
  local_78 = 0xfffffffffffffffe;
  auStack_1e0[0] = 0x14039cfb8;
  lVar6 = FUN_14039cbf0(param_1,local_70);
  if (*(int *)(lVar6 + 0x10) + *(int *)(lVar6 + 0x14) + *(int *)(lVar6 + 0x18) +
      *(int *)(lVar6 + 0x1c) + *(int *)(lVar6 + 0x20) + *(int *)(lVar6 + 0x24) +
      *(int *)(lVar6 + 0x28) + *(int *)(lVar6 + 0x2c) < 1) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    auStack_1e0[0] = 0x14039d473;
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x60))();
    if (iVar4 == 1) {
      puVar8 = (undefined8 *)(DAT_1416e23d0 + 0x38);
    }
    else {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x10);
      if (((lVar6 + 0x48 != param_1) && (lVar6 + 0x110 != param_1)) && (lVar6 + 0x1d8 != param_1)) {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
      }
      if (*(char *)(lVar6 + 0x18) == '\0') {
        puVar8 = (undefined8 *)(DAT_1416e23d0 + 0x68);
      }
      else {
        puVar8 = (undefined8 *)(DAT_1416e23d0 + 0x50);
      }
    }
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)*puVar8;
    return;
  }
  if ((*(int *)(*(longlong *)(param_1 + 0xa0) + 0x38) < *(int *)(param_1 + 0xb0)) &&
     (param_2 == '\0')) {
    return;
  }
  auStack_1e0[0] = 0x14039d005;
  local_c0 = FUN_140c4a7f0();
  local_180 = 0x18e;
  local_178 = 0;
  local_170 = 0xffffffffffffffff;
  local_168 = DAT_1416e3250;
  local_160 = DAT_1416e3248;
  local_158 = 0xffffffffffffffff;
  local_150 = 0xffffffffffffffff;
  local_148 = 0xffffffff;
  local_188 = &PTR_FUN_1410655c8;
  local_140 = DAT_1416e3238;
  local_138 = DAT_1416e3238;
  local_130 = DAT_1416e3228;
  local_128 = DAT_1416e3228;
  local_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = DAT_1416e3230;
  local_e0 = 0;
  local_d8 = &local_188;
  local_d0 = &local_188;
  local_c8 = &local_188;
  local_b4 = 1;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  auStack_1e0[0] = 0x14039d11d;
  local_bc = local_c0;
  local_b8 = local_c0;
  FUN_1406d4ac0(&local_188);
  plVar9 = (longlong *)(*(longlong *)(param_1 + 0xa8) + 0x160);
  auStack_1e0[0] = 0x14039d13c;
  local_f8 = param_1;
  (**(code **)(*plVar9 + 0x60))(plVar9,&local_188);
  local_b4 = local_b4 & 0xff;
  auStack_1e0[0] = 0x14039d14f;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x60))();
  if (iVar4 == 1) {
    plVar9 = (longlong *)(DAT_1416e23d0 + 0x38);
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x10);
    if (((lVar6 + 0x48 != param_1) && (lVar6 + 0x110 != param_1)) && (lVar6 + 0x1d8 != param_1)) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
    }
    if (*(char *)(lVar6 + 0x18) == '\0') {
      plVar9 = (longlong *)(DAT_1416e23d0 + 0x68);
    }
    else {
      plVar9 = (longlong *)(DAT_1416e23d0 + 0x50);
    }
  }
  local_1a0 = plVar9[1] - *plVar9 >> 3;
  lVar6 = (longlong)(int)local_1a0;
  uVar10 = lVar6 * 4 + 0x17;
  if (uVar10 <= lVar6 * 4 + 8U) {
    uVar10 = 0xffffffffffffff0;
  }
  auStack_1e0[0] = 0x14039d1e5;
  lVar2 = -(uVar10 & 0xfffffffffffffff0);
  local_1b8 = plVar9;
  *(undefined4 *)((longlong)&local_1b8 + lVar2) = 0xa110ca7e;
  local_1b0 = (longlong)&local_1b8 + lVar2 + 4;
  *(undefined4 *)(local_1b0 + lVar6 * 4) = 0xa110ca7e;
  local_1a8 = 0;
  if (0 < lVar6) {
    do {
      lVar12 = local_1a8;
      lVar11 = 0;
      lVar6 = *(longlong *)(*plVar9 + local_1a8 * 8);
      pcVar1 = *(code **)(*(longlong *)(lVar6 + 0x10) + 0x30);
      *(undefined8 *)((longlong)auStack_1e0 + lVar2) = 0x14039d235;
      cVar3 = (*pcVar1)((longlong *)(lVar6 + 0x10),&local_188);
      iVar4 = 0;
      if (cVar3 == '\0') {
        *(undefined4 *)(local_1b0 + lVar12 * 4) = 0;
      }
      else {
        local_res20[0] = *(int *)(lVar6 + 0xf8) * 1000;
        local_res18[0] = '\x01';
        if ((ulonglong)(*(longlong *)(lVar6 + 0xb0) - *(longlong *)(lVar6 + 0xa8)) < 8) {
LAB_14039d281:
          local_198 = (longlong)
                      (int)(*(longlong *)(lVar6 + 0x88) - *(longlong *)(lVar6 + 0x80) >> 3);
          iVar4 = local_res20[0];
          if (0 < local_198) {
            do {
              lVar12 = local_1a8;
              iVar4 = local_res20[0];
              if (local_res18[0] == '\0') break;
              plVar9 = *(longlong **)(*(longlong *)(lVar6 + 0x80) + lVar11 * 8);
              pcVar1 = *(code **)(*plVar9 + 0x30);
              *(undefined8 *)((longlong)auStack_1e0 + lVar2) = 0x14039d2c1;
              cVar3 = (*pcVar1)(plVar9,&local_188);
              if (cVar3 != '\0') {
                pcVar1 = *(code **)(*plVar9 + 0xa0);
                *(undefined8 *)((longlong)auStack_1e0 + lVar2) = 0x14039d2e3;
                (*pcVar1)(plVar9,local_res20,local_res18,&local_188);
              }
              lVar11 = lVar11 + 1;
              lVar12 = local_1a8;
              iVar4 = local_res20[0];
            } while (lVar11 < local_198);
          }
        }
        else {
          pcVar1 = *(code **)(*(longlong *)(lVar6 + 0x98) + 0x30);
          *(undefined8 *)((longlong)auStack_1e0 + lVar2) = 0x14039d279;
          cVar3 = (*pcVar1)((longlong *)(lVar6 + 0x98),&local_188);
          if (cVar3 != '\0') goto LAB_14039d281;
        }
        *(int *)(local_1b0 + lVar12 * 4) = iVar4;
      }
      local_1a8 = lVar12 + 1;
      plVar9 = local_1b8;
    } while (local_1a8 < (int)local_1a0);
  }
  *(undefined8 *)((longlong)auStack_1e0 + lVar2) = 0x14039d32e;
  uVar5 = FUN_140c4a7f0();
  lVar6 = local_1b0;
  uVar10 = local_1a0 & 0xffffffff;
  *(undefined8 *)((longlong)auStack_1e0 + lVar2) = 0x14039d340;
  iVar4 = FUN_140c41f80(uVar10,lVar6,uVar5,0);
  lVar6 = *(longlong *)(*local_1b8 + (longlong)iVar4 * 8);
  *(longlong *)(param_1 + 0xa8) = lVar6;
  plVar9 = (longlong *)(lVar6 + 0x100);
  pcVar1 = *(code **)(*plVar9 + 0x60);
  *(undefined8 *)((longlong)auStack_1e0 + lVar2) = 0x14039d366;
  (*pcVar1)(plVar9,&local_188);
  local_b4 = local_b4 & 0xff;
  if ((*(char *)(param_1 + 0xc0) == '\0') || (*(int *)(param_1 + 0xb4) != 2)) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x10);
    if (lVar6 + 0x48 + (longlong)*(int *)(param_1 + 0x78) * 200 == param_1) {
      lVar6 = (longlong)*(int *)(param_1 + 0x7c) * 200 +
              *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
    }
    else {
      lVar6 = (longlong)*(int *)(param_1 + 0x7c) * 200 + lVar6;
    }
    if (*(int *)(param_1 + 0x78) != *(int *)(lVar6 + 0xc4)) goto LAB_14039d432;
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x210);
  if ((iVar4 != 3) && (iVar4 != *(int *)(param_1 + 0xb4))) {
    *(int *)(param_1 + 0xb4) = iVar4;
    if (iVar4 != 2) {
      *(undefined2 *)(param_1 + 0xc0) = 0;
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    iVar4 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x210);
    *(undefined8 *)((longlong)auStack_1e0 + lVar2) = 0x14039d407;
    lVar6 = FUN_1403a0590(param_1);
    *(int *)(lVar6 + 0xb4) = iVar4;
    if (iVar4 != 2) {
      *(undefined2 *)(lVar6 + 0xc0) = 0;
      *(undefined4 *)(lVar6 + 0xb8) = 0;
    }
    *(undefined8 *)((longlong)auStack_1e0 + lVar2) = 0x14039d428;
    uVar7 = FUN_1403a0590();
    *(undefined8 *)((longlong)auStack_1e0 + lVar2) = 0x14039d432;
    FUN_14039cf80(uVar7,1);
  }
LAB_14039d432:
  *(int *)(param_1 + 0xb0) =
       *(int *)(*(longlong *)(param_1 + 0xa8) + 0x200) +
       *(int *)(*(longlong *)(param_1 + 0xa0) + 0x38);
  *(undefined8 *)((longlong)auStack_1e0 + lVar2) = 0x14039d45a;
  FUN_1406d3280(&local_188);
  return;
}

