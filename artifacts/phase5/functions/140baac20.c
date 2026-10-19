
void FUN_140baac20(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined1 local_288;
  undefined7 uStack_287;
  undefined8 local_278;
  ulonglong local_270;
  undefined **local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined4 local_228;
  longlong local_220;
  longlong local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined ***local_1b8;
  undefined ***local_1b0;
  undefined ***local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined2 local_194;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined **local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  longlong local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined ***local_a8;
  undefined ***local_a0;
  undefined ***local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined2 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  puVar3 = (undefined8 *)FUN_1400d3090(param_1 + 0x88);
  *(undefined8 **)(param_1 + 0x80) = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  lVar7 = puVar3[5];
  if (lVar7 == 0) {
    return;
  }
  uVar1 = *(undefined8 *)(lVar7 + 0x80);
  if (*(longlong *)(lVar7 + 0x170) == 0) {
    lVar4 = FUN_1400d3090(lVar7 + 0x168);
    *(longlong *)(lVar7 + 0x160) = lVar4;
    if (lVar4 == 0) {
      lVar4 = DAT_1416e2360;
    }
    *(longlong *)(lVar7 + 0x170) = lVar4;
  }
  lVar4 = *(longlong *)(lVar7 + 0x170);
  if (*(int *)((longlong)puVar3 + 0x44) != 1) {
    lVar5 = FUN_1400cd630(puVar3 + 0x10);
    cVar2 = (**(code **)(*(longlong *)(lVar5 + 0x10) + 8))();
    if (cVar2 != '\0') {
      lVar5 = FUN_1400cd630(puVar3 + 0x10);
      if ((puVar3[5] != 0) && (*(longlong *)(puVar3[5] + 0x80) != 0)) {
        lVar5 = *(longlong *)(lVar5 + 0xcc0);
        FUN_1409f8530(local_res8,puVar3);
        local_res10[0] = local_res8[0];
        FUN_140846b10(lVar5 + 0x98,puVar3 + 0x13,local_res10,1);
      }
    }
    if (*(int *)((longlong)puVar3 + 0x44) != 1) goto LAB_140baad65;
  }
  if ((*(longlong *)(puVar3[9] + 0x28) != 0) &&
     (*(longlong *)(*(longlong *)(puVar3[9] + 0x28) + 0xb0) != 0)) {
    uVar6 = FUN_1400b1d10();
    FUN_14049e9b0(uVar6,puVar3);
  }
LAB_140baad65:
  lVar5 = DAT_1418d6ab0;
  if (((DAT_1418d6ab8 != 0) &&
      ((*(uint *)(puVar3 + 0x10) & 0xffffff) < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
     (lVar5 = *(longlong *)
               (*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 +
               (ulonglong)(*(uint *)(puVar3 + 0x10) & 0xffffff) * 0x10), lVar5 == 0)) {
    lVar5 = DAT_1418d6ab0;
  }
  if (lVar5 != 0) {
    lVar5 = FUN_1400cd630(puVar3 + 0x10);
    cVar2 = (**(code **)(*(longlong *)(lVar5 + 0x10) + 8))();
    if (cVar2 != '\0') {
      uVar6 = FUN_1400cd630(puVar3 + 0x10);
      FUN_1409f84f0(uVar6,puVar3);
    }
  }
  FUN_140b987f0(lVar7,puVar3);
  if ((*(char *)(DAT_1416e3260 + 0x62a) == '\x01') && (*(int *)(lVar7 + 0x48) == 0)) {
    FUN_140670920(*(undefined8 *)(DAT_1416e3260 + 0x370),lVar7);
    *(undefined1 *)(lVar7 + 8) = 0;
  }
  if ((*(char *)(param_1 + 0x90) == '\0') && (*(int *)(lVar7 + 0x48) == 0)) {
    FUN_140786dc0(DAT_1416e3260,lVar7,0);
  }
  if (((*(int *)((longlong)puVar3 + 0x44) == 3) && (*(char *)(DAT_1416e3260 + 0x62a) != '\0')) &&
     (lVar7 = puVar3[0x11], (*(byte *)(lVar7 + 0x9d4) & 1) != 0)) {
    lVar5 = FUN_140a78be0(lVar7);
    lVar7 = *(longlong *)(lVar7 + 0x498);
    local_150 = 0x18e;
    local_148 = 0;
    local_140 = 0xffffffffffffffff;
    local_138 = DAT_1416e3250;
    local_130 = DAT_1416e3248;
    local_128 = 0xffffffffffffffff;
    local_120 = 0xffffffffffffffff;
    local_118 = 0xffffffff;
    local_158 = &PTR_FUN_1410655c8;
    local_110 = DAT_1416e3238;
    local_108 = DAT_1416e3238;
    local_100 = DAT_1416e3228;
    local_f8 = DAT_1416e3228;
    local_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = DAT_1416e3230;
    local_b0 = 0;
    local_a8 = &local_158;
    local_a0 = &local_158;
    local_98 = &local_158;
    local_8c = 0;
    local_84 = 1;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_90 = 0;
    if ((lVar5 != DAT_1416e3238) || ((*(byte *)(lVar5 + 0x1e9) & 2) == 0)) {
      FUN_1406d4ac0(&local_158);
      local_110 = lVar5;
      if (lVar5 == 0) {
        local_110 = DAT_1416e3238;
      }
      if ((*(byte *)(local_110 + 0x1e9) & 2) != 0) {
        LOCK();
        *(int *)(local_110 + 0x1c0) = *(int *)(local_110 + 0x1c0) + 1;
        UNLOCK();
      }
    }
    local_260 = 0x18e;
    local_258 = 0;
    local_250 = 0xffffffffffffffff;
    local_248 = DAT_1416e3250;
    local_240 = DAT_1416e3248;
    local_238 = 0xffffffffffffffff;
    local_230 = 0xffffffffffffffff;
    local_228 = 0xffffffff;
    local_268 = &PTR_FUN_1410655c8;
    local_210 = DAT_1416e3228;
    local_208 = DAT_1416e3228;
    local_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = DAT_1416e3230;
    local_1c0 = 0;
    local_1b8 = &local_268;
    local_1b0 = &local_268;
    local_1a8 = &local_268;
    local_19c = 0;
    local_194 = 1;
    local_190 = 0;
    local_188 = 0;
    local_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    local_1a0 = 0;
    local_220 = DAT_1416e3238;
    local_218 = DAT_1416e3238;
    if ((lVar7 != DAT_1416e3238) || ((*(byte *)(lVar7 + 0x1e9) & 2) == 0)) {
      FUN_1406d4ac0(&local_268);
      local_220 = lVar7;
      if (lVar7 == 0) {
        local_220 = DAT_1416e3238;
      }
      if ((*(byte *)(local_220 + 0x1e9) & 2) != 0) {
        LOCK();
        *(int *)(local_220 + 0x1c0) = *(int *)(local_220 + 0x1c0) + 1;
        UNLOCK();
      }
    }
    local_1b0 = &local_158;
    local_270 = 0xf;
    local_278 = 0;
    local_288 = 0;
    FUN_1400b0300(&local_288,"on_mercenary_dismissed",0x16);
    uVar6 = FUN_1408b4ea0();
    lVar7 = FUN_1401abd60(uVar6,&local_288);
    if (lVar7 != 0) {
      FUN_1408b3220(lVar7,&local_268);
    }
    if (0xf < local_270) {
      FUN_1400b08c0(&local_288,CONCAT71(uStack_287,local_288),local_270 + 1);
    }
    FUN_1406d3280(&local_268);
    FUN_1406d3280(&local_158);
  }
  (**(code **)*puVar3)(puVar3,1);
  if ((lVar4 == *(longlong *)(DAT_1416e3260 + 0x3f0)) && (*(char *)(DAT_1416e3260 + 0x62a) != '\0'))
  {
    FUN_14064b160(*(undefined8 *)(DAT_1416e3260 + 0x370),4);
  }
  (**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0x3b0))
            (*(longlong **)(DAT_1416e3260 + 0x370),uVar1);
  return;
}

