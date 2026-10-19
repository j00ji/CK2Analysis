
bool FUN_1403a0c50(longlong param_1)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined **local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined ***local_78;
  undefined ***local_70;
  undefined ***local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined2 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x60))();
  if (iVar1 == 3) {
    piVar2 = (int *)FUN_1403a0a10(param_1,local_res8);
    bVar3 = *piVar2 == 0;
  }
  else {
    local_120 = 0x18e;
    local_118 = 0;
    local_110 = 0xffffffffffffffff;
    local_108 = DAT_1416e3250;
    local_100 = DAT_1416e3248;
    local_f8 = 0xffffffffffffffff;
    local_f0 = 0xffffffffffffffff;
    local_e8 = 0xffffffff;
    local_128 = &PTR_FUN_1410655c8;
    local_e0 = DAT_1416e3238;
    local_d8 = DAT_1416e3238;
    local_d0 = DAT_1416e3228;
    local_c8 = DAT_1416e3228;
    local_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = DAT_1416e3230;
    local_80 = 0;
    local_78 = &local_128;
    local_70 = &local_128;
    local_68 = &local_128;
    local_5c = 0;
    local_54 = 1;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_60 = 0;
    FUN_1406d4ac0(&local_128);
    local_98 = param_1;
    FUN_140834920(DAT_1416e23d0 + 0xf0,local_res8,&local_128);
    piVar2 = (int *)FUN_1403a0a10(param_1,local_res10);
    bVar3 = (int)(((longlong)*piVar2 * 100000) / 1000) < local_res8[0];
    FUN_1406d3280(&local_128);
  }
  return bVar3;
}

