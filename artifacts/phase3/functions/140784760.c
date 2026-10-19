
/* WARNING: Function: _alloca_probe replaced with injection: alloca_probe */

void FUN_140784760(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  void *pvVar4;
  double dVar5;
  undefined1 uVar6;
  longlong lVar7;
  double dVar8;
  char cVar9;
  longlong lVar10;
  undefined8 uVar11;
  int *piVar12;
  void *pvVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar27;
  undefined8 *local_res8;
  undefined1 local_res10;
  undefined4 local_res18;
  undefined4 local_res20;
  longlong *local_13a8;
  longlong lStack_13a0;
  longlong local_1398;
  void *local_1390;
  undefined **local_1388;
  undefined8 local_1380;
  undefined8 local_1378;
  void *local_1370;
  void *pvStack_1368;
  undefined4 local_1360;
  undefined1 local_135c;
  undefined4 local_1358;
  undefined4 local_1354;
  undefined4 local_1350;
  undefined4 local_134c;
  undefined4 local_1348;
  undefined4 local_1344;
  undefined4 local_1340;
  undefined4 local_133c;
  longlong **local_1338;
  longlong **local_1330;
  longlong **local_1328;
  longlong *local_1320;
  longlong *local_1318;
  undefined ***local_1310;
  undefined1 local_1308;
  undefined7 uStack_1307;
  undefined8 local_12f8;
  ulonglong local_12f0;
  undefined8 local_12e8 [2];
  undefined1 local_12d8;
  undefined7 uStack_12d7;
  undefined8 local_12c8;
  ulonglong local_12c0;
  undefined4 local_12b8;
  double local_12b0;
  longlong **local_12a8;
  undefined1 *local_12a0;
  undefined4 local_1298;
  double local_1290;
  longlong **local_1288;
  undefined1 *local_1280;
  undefined4 local_1278;
  double local_1270;
  longlong **local_1268;
  undefined1 *local_1260;
  undefined4 local_1258;
  double local_1250;
  undefined4 local_1248;
  double local_1240;
  undefined4 local_1238 [2];
  undefined8 local_1230;
  undefined4 local_1228 [2];
  undefined8 local_1220;
  undefined4 local_1218 [2];
  undefined8 local_1210;
  longlong **local_1208;
  undefined1 *local_1200;
  undefined4 local_11f8;
  double local_11f0;
  undefined4 local_11e8;
  double local_11e0;
  undefined4 local_11d8;
  double local_11d0;
  undefined1 local_11c8;
  undefined7 uStack_11c7;
  undefined8 local_11b8;
  ulonglong local_11b0;
  undefined **local_11a8;
  undefined4 local_11a0;
  undefined8 local_1198;
  undefined8 local_1190;
  undefined8 local_1188;
  undefined8 local_1180;
  undefined8 local_1178;
  undefined8 local_1170;
  undefined4 local_1168;
  longlong local_1160;
  longlong local_1158;
  undefined8 local_1150;
  undefined8 local_1148;
  undefined8 local_1140;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 local_1128;
  undefined8 uStack_1120;
  undefined8 local_1118;
  undefined8 uStack_1110;
  undefined8 local_1108;
  undefined4 local_1100;
  undefined ***local_10f8;
  undefined ***local_10f0;
  undefined ***local_10e8;
  undefined4 local_10e0;
  undefined8 local_10dc;
  undefined2 local_10d4;
  undefined8 local_10d0;
  undefined8 local_10c8;
  undefined8 local_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined8 local_10a8;
  longlong *local_1098;
  undefined4 local_1090;
  undefined1 *local_1088;
  longlong *local_1080;
  undefined4 local_1078;
  undefined1 *local_1070;
  longlong local_1068;
  undefined8 local_1060;
  undefined8 local_1058;
  undefined8 local_1050;
  longlong *local_1048;
  undefined1 local_1038 [64];
  undefined1 local_ff8 [4016];
  undefined8 uStack_48;
  ulonglong uVar26;
  
  uStack_48 = 0x14078477f;
  local_1050 = 0xfffffffffffffffe;
  FUN_140789fb0(param_1,0);
  if ((char)param_1[0x93] != '\0') {
    FUN_140785aa0(param_1);
  }
  FUN_140783480(param_1);
  (**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0xa8))();
  FUN_140c4a8c0();
  FUN_140789fb0(param_1,0);
  local_13a8 = (longlong *)0x0;
  lStack_13a0 = 0;
  local_1398 = 0;
  FUN_1400cd7d0(&local_13a8,param_1 + 0x20);
  lVar19 = param_1[0xc3];
  plVar17 = (longlong *)(lVar19 + 0x180);
  if (*(char *)(lVar19 + 0xbe) != '\0') {
    FUN_14079af90(lVar19 + 0x80,plVar17);
    *(undefined1 *)(lVar19 + 0xbe) = 0;
  }
  lVar7 = DAT_1418d6b48;
  lVar1 = DAT_1418d6b28;
  iVar18 = (int)(*(longlong *)(lVar19 + 0x188) - *plVar17 >> 2);
  lVar16 = 0;
  lVar19 = lStack_13a0;
  if (0 < iVar18) {
    do {
      lVar10 = lVar1;
      if (((lVar7 != 0) &&
          (uVar24 = *(uint *)(*plVar17 + lVar16 * 4) & 0xffffff, uVar24 < *(uint *)(lVar7 + 0x28)))
         && (lVar10 = *(longlong *)(*(longlong *)(lVar7 + 0x20) + 8 + (ulonglong)uVar24 * 0x10),
            lVar10 == 0)) {
        lVar10 = lVar1;
      }
      if ((*(byte *)(*(longlong *)(lVar10 + 0xd0) + 0x1e9) & 2) != 0) {
        lVar20 = lVar19 - (longlong)local_13a8 >> 3;
        for (plVar15 = local_13a8; plVar15 != local_13a8 + (int)lVar20; plVar15 = plVar15 + 1) {
          if (*plVar15 == *(longlong *)(lVar10 + 0xd0)) {
            *plVar15 = local_13a8[lVar20 + -1];
            lVar19 = lStack_13a0;
            if (7 < (ulonglong)(lStack_13a0 - (longlong)local_13a8)) {
              lVar19 = lStack_13a0 + -8;
              lStack_13a0 = lVar19;
            }
            break;
          }
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < iVar18);
  }
  DAT_1416e31bc = 1;
  lVar19 = (longlong)(int)(lVar19 - (longlong)local_13a8 >> 3);
  local_12b8 = 1;
  if (*(char *)(DAT_1418d2288 + 0xd) != '\0') {
    local_12b0 = (double)(**(code **)(*(longlong *)*DAT_1418d2288 + 0x28))();
  }
  dVar8 = local_12b0;
  uVar27 = DAT_141450078;
  local_res18 = DAT_141450078;
  DAT_141450078 = 2;
  local_12a8 = &local_13a8;
  local_12a0 = local_ff8;
  FUN_140791b70(param_1,&local_12a8,lVar19);
  puVar3 = DAT_1418d2288;
  DAT_141450078 = uVar27;
  if ((*(char *)(DAT_1418d2288 + 0xd) != '\0') &&
     ((longlong)(DAT_1418d2288[0xb] - DAT_1418d2288[10]) / 0x50 != 0)) {
    dVar5 = (double)(**(code **)(*(longlong *)*DAT_1418d2288 + 0x28))();
    lVar1 = (longlong)(puVar3[0xb] - puVar3[10]) / 0x50;
    *(double *)(puVar3[10] + -0x48 + lVar1 * 0x50) =
         (dVar5 - dVar8) + *(double *)(puVar3[10] + -0x48 + lVar1 * 0x50);
  }
  local_11e8 = 1;
  if (*(char *)(DAT_1418d2288 + 0xd) != '\0') {
    local_11e0 = (double)(**(code **)(*(longlong *)*DAT_1418d2288 + 0x28))();
  }
  dVar8 = local_11e0;
  uVar27 = DAT_141450078;
  local_res20 = DAT_141450078;
  DAT_141450078 = 0x800;
  local_1338 = &local_13a8;
  FUN_140791cf0(param_1,&local_1338,lVar19);
  puVar3 = DAT_1418d2288;
  DAT_141450078 = uVar27;
  if ((*(char *)(DAT_1418d2288 + 0xd) != '\0') &&
     ((longlong)(DAT_1418d2288[0xb] - DAT_1418d2288[10]) / 0x50 != 0)) {
    dVar5 = (double)(**(code **)(*(longlong *)*DAT_1418d2288 + 0x28))();
    lVar1 = (longlong)(puVar3[0xb] - puVar3[10]) / 0x50;
    *(double *)(puVar3[10] + -0x48 + lVar1 * 0x50) =
         (dVar5 - dVar8) + *(double *)(puVar3[10] + -0x48 + lVar1 * 0x50);
  }
  local_11f8 = 3;
  if (*(char *)(DAT_1418d2288 + 0xd) != '\0') {
    local_11f0 = (double)(**(code **)(*(longlong *)*DAT_1418d2288 + 0x28))();
  }
  dVar8 = local_11f0;
  uVar27 = DAT_141450078;
  local_1358 = DAT_141450078;
  DAT_141450078 = 4;
  local_1208 = &local_13a8;
  local_1200 = local_ff8;
  FUN_140791e70(param_1,&local_1208,lVar19);
  puVar3 = DAT_1418d2288;
  DAT_141450078 = uVar27;
  if ((*(char *)(DAT_1418d2288 + 0xd) != '\0') &&
     ((longlong)(DAT_1418d2288[0xb] - DAT_1418d2288[10]) / 0x50 != 0)) {
    dVar5 = (double)(**(code **)(*(longlong *)*DAT_1418d2288 + 0x28))();
    lVar1 = (longlong)(puVar3[0xb] - puVar3[10]) / 0x50;
    *(double *)(puVar3[10] + -0x38 + lVar1 * 0x50) =
         (dVar5 - dVar8) + *(double *)(puVar3[10] + -0x38 + lVar1 * 0x50);
  }
  local_11d8 = 2;
  if (*(char *)(DAT_1418d2288 + 0xd) != '\0') {
    local_11d0 = (double)(**(code **)(*(longlong *)*DAT_1418d2288 + 0x28))();
  }
  dVar8 = local_11d0;
  uVar27 = DAT_141450078;
  local_1354 = DAT_141450078;
  DAT_141450078 = 0x20;
  local_1330 = &local_13a8;
  FUN_140791ff0(param_1,&local_1330,lVar19);
  puVar3 = DAT_1418d2288;
  DAT_141450078 = uVar27;
  if ((*(char *)(DAT_1418d2288 + 0xd) != '\0') &&
     ((longlong)(DAT_1418d2288[0xb] - DAT_1418d2288[10]) / 0x50 != 0)) {
    dVar5 = (double)(**(code **)(*(longlong *)*DAT_1418d2288 + 0x28))();
    lVar1 = (longlong)(puVar3[0xb] - puVar3[10]) / 0x50;
    *(double *)(puVar3[10] + -0x40 + lVar1 * 0x50) =
         (dVar5 - dVar8) + *(double *)(puVar3[10] + -0x40 + lVar1 * 0x50);
  }
  local_1298 = 5;
  if (*(char *)(DAT_1418d2288 + 0xd) != '\0') {
    local_1290 = (double)(**(code **)(*(longlong *)*DAT_1418d2288 + 0x28))();
  }
  dVar8 = local_1290;
  uVar27 = DAT_141450078;
  local_1350 = DAT_141450078;
  DAT_141450078 = 8;
  local_1288 = &local_13a8;
  local_1280 = local_ff8;
  FUN_140792170(param_1,&local_1288,lVar19);
  puVar3 = DAT_1418d2288;
  DAT_141450078 = uVar27;
  if ((*(char *)(DAT_1418d2288 + 0xd) != '\0') &&
     ((longlong)(DAT_1418d2288[0xb] - DAT_1418d2288[10]) / 0x50 != 0)) {
    dVar5 = (double)(**(code **)(*(longlong *)*DAT_1418d2288 + 0x28))();
    lVar1 = (longlong)(puVar3[0xb] - puVar3[10]) / 0x50;
    *(double *)(puVar3[10] + -0x28 + lVar1 * 0x50) =
         (dVar5 - dVar8) + *(double *)(puVar3[10] + -0x28 + lVar1 * 0x50);
  }
  local_1278 = 4;
  if (*(char *)(DAT_1418d2288 + 0xd) != '\0') {
    local_1270 = (double)(**(code **)(*(longlong *)*DAT_1418d2288 + 0x28))();
  }
  dVar8 = local_1270;
  uVar27 = DAT_141450078;
  local_134c = DAT_141450078;
  DAT_141450078 = 0x10;
  local_1268 = &local_13a8;
  local_1260 = local_ff8;
  FUN_1407922f0(param_1,&local_1268,lVar19);
  puVar3 = DAT_1418d2288;
  DAT_141450078 = uVar27;
  if ((*(char *)(DAT_1418d2288 + 0xd) != '\0') &&
     ((longlong)(DAT_1418d2288[0xb] - DAT_1418d2288[10]) / 0x50 != 0)) {
    dVar5 = (double)(**(code **)(*(longlong *)*DAT_1418d2288 + 0x28))();
    lVar1 = (longlong)(puVar3[0xb] - puVar3[10]) / 0x50;
    *(double *)(puVar3[10] + -0x30 + lVar1 * 0x50) =
         (dVar5 - dVar8) + *(double *)(puVar3[10] + -0x30 + lVar1 * 0x50);
  }
  local_1258 = 1;
  if (*(char *)(DAT_1418d2288 + 0xd) != '\0') {
    local_1250 = (double)(**(code **)(*(longlong *)*DAT_1418d2288 + 0x28))();
  }
  dVar8 = local_1250;
  uVar27 = DAT_141450078;
  local_1348 = DAT_141450078;
  DAT_141450078 = 0x40;
  local_1328 = &local_13a8;
  FUN_140792470(param_1,&local_1328,lVar19);
  puVar3 = DAT_1418d2288;
  DAT_141450078 = uVar27;
  if ((*(char *)(DAT_1418d2288 + 0xd) != '\0') &&
     ((longlong)(DAT_1418d2288[0xb] - DAT_1418d2288[10]) / 0x50 != 0)) {
    dVar5 = (double)(**(code **)(*(longlong *)*DAT_1418d2288 + 0x28))();
    lVar19 = (longlong)(puVar3[0xb] - puVar3[10]) / 0x50;
    *(double *)(puVar3[10] + -0x48 + lVar19 * 0x50) =
         (dVar5 - dVar8) + *(double *)(puVar3[10] + -0x48 + lVar19 * 0x50);
  }
  DAT_1416e31bc = 0;
  FUN_140366150(param_1 + 0x1e);
  FUN_140789fb0(param_1,0);
  local_1248 = 6;
  if (*(char *)(DAT_1418d2288 + 0xd) != '\0') {
    local_1240 = (double)(**(code **)(*(longlong *)*DAT_1418d2288 + 0x28))();
  }
  dVar8 = local_1240;
  iVar22 = 0;
  iVar18 = 0;
  if (0 < (int)(lStack_13a0 - (longlong)local_13a8 >> 3)) {
    lVar19 = 0;
    do {
      lVar1 = *(longlong *)(lVar19 + (longlong)local_13a8);
      FUN_1401c7350(lVar1);
      if (iVar18 < (int)(lStack_13a0 - (longlong)local_13a8 >> 3)) {
        if (*(longlong *)(lVar19 + (longlong)local_13a8) != lVar1) {
          iVar18 = iVar18 + -1;
          lVar19 = lVar19 + -8;
        }
        iVar22 = iVar22 + 1;
        if (iVar22 == 100) {
          iVar22 = 0;
          FUN_140789fb0(param_1,0);
        }
      }
      iVar18 = iVar18 + 1;
      lVar19 = lVar19 + 8;
    } while (iVar18 < (int)(lStack_13a0 - (longlong)local_13a8 >> 3));
  }
  puVar3 = DAT_1418d2288;
  if ((*(char *)(DAT_1418d2288 + 0xd) != '\0') &&
     ((longlong)(DAT_1418d2288[0xb] - DAT_1418d2288[10]) / 0x50 != 0)) {
    dVar5 = (double)(**(code **)(*(longlong *)*DAT_1418d2288 + 0x28))();
    lVar19 = (longlong)(puVar3[0xb] - puVar3[10]) / 0x50;
    *(double *)(puVar3[10] + -0x20 + lVar19 * 0x50) =
         (dVar5 - dVar8) + *(double *)(puVar3[10] + -0x20 + lVar19 * 0x50);
  }
  uVar11 = FUN_1404333e0();
  FUN_1404338c0(uVar11);
  FUN_140789fb0(param_1,0);
  local_1238[0] = 7;
  if (*(char *)(DAT_1418d2288 + 0xd) != '\0') {
    local_1230 = (**(code **)(*(longlong *)*DAT_1418d2288 + 0x28))();
  }
  uVar27 = DAT_141450078;
  DAT_1416e31bc = 2;
  iVar18 = *(int *)(DAT_1416e32d8 + 0x3258);
  local_1344 = DAT_141450078;
  DAT_141450078 = 0x100;
  plVar17 = param_1 + 0x4f;
  local_1090 = *(undefined4 *)((longlong)param_1 + 0x34c);
  local_1088 = local_ff8;
  local_1098 = plVar17;
  FUN_1407925f0(param_1,&local_1098,(longlong)iVar18);
  local_1340 = uVar27;
  DAT_141450078 = 0x200;
  local_1078 = *(undefined4 *)((longlong)param_1 + 0x34c);
  local_1070 = local_ff8;
  local_1080 = plVar17;
  FUN_140792780(param_1,&local_1080,(longlong)iVar18);
  DAT_1416e31bc = 0;
  DAT_141450078 = uVar27;
  FUN_140a45470(local_1238);
  local_1228[0] = 8;
  if (*(char *)(DAT_1418d2288 + 0xd) != '\0') {
    local_1220 = (**(code **)(*(longlong *)*DAT_1418d2288 + 0x28))();
  }
  iVar22 = 0;
  iVar18 = (int)(param_1[0x50] - *plVar17 >> 3);
  lVar19 = 0;
  if (0 < iVar18) {
    do {
      FUN_14091f620(*(undefined8 *)(*plVar17 + lVar19 * 8),(longlong)param_1 + 0x34c);
      iVar22 = iVar22 + 1;
      if (iVar22 == 100) {
        iVar22 = 0;
        FUN_140789fb0(param_1,0);
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < iVar18);
  }
  FUN_140a45470(local_1228);
  FUN_140789fb0(param_1,0);
  FUN_1403b9b30(param_1 + 0x46,param_1[0x6e]);
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_140798d40(param_1[0xc3]);
  (**(code **)(*(longlong *)param_1[0x6e] + 0x218))();
  lVar19 = FUN_140994d20();
  plVar15 = *(longlong **)(lVar19 + 0x30);
  plVar17 = *(longlong **)(lVar19 + 0x28);
  local_1048 = plVar17;
  for (; plVar17 != plVar15; plVar17 = plVar17 + 1) {
    plVar2 = (longlong *)*plVar17;
    cVar9 = (**(code **)(*plVar2 + 0x30))(plVar2);
    if (((cVar9 != '\0') && (plVar2[0x352] != 0)) &&
       (cVar9 = FUN_14044cc90(plVar2[0x352]), cVar9 == '\0')) {
      puVar3 = (undefined8 *)plVar2[0x352];
      plVar2[0x352] = 0;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  local_1048 = plVar17;
  FUN_140791500(param_1 + 0x66);
  FUN_140789fb0(param_1,0);
  lVar19 = (**(code **)(*(longlong *)param_1[0x6e] + 0xe0))();
  if ((*(char *)(lVar19 + 0x5d) != '\0') && (*(char *)(DAT_1416e3260 + 0x62a) != '\0')) {
    local_1218[0] = 9;
    if (*(char *)(DAT_1418d2288 + 0xd) != '\0') {
      local_1210 = (**(code **)(*(longlong *)*DAT_1418d2288 + 0x28))();
    }
    lVar19 = DAT_1416e3260;
    *(undefined1 *)(param_1 + 0x69) = 1;
    uVar6 = DAT_1417e3b32;
    local_res10 = DAT_1417e3b32;
    DAT_1417e3b32 = 1;
    if (*(int *)(lVar19 + 0x358) == 6) {
      if (DAT_1416e2310 == (undefined8 *)0x0) {
        DAT_1416e2310 = operator_new(0x20);
        *DAT_1416e2310 = 0;
        DAT_1416e2310[1] = 0;
        DAT_1416e2310[2] = 0;
        *(undefined1 *)(DAT_1416e2310 + 3) = 0;
        local_res8 = DAT_1416e2310;
      }
      FUN_1400ea730();
    }
    FUN_140789fb0(param_1,0);
    if (DAT_141450019 != '\0') {
      uVar21 = 0;
      plVar17 = *(longlong **)param_1[0x5c];
      local_1318 = (longlong *)param_1[0x5c];
      uVar23 = uVar21;
      if (plVar17 != local_1318) {
        do {
          local_1320 = (longlong *)plVar17[3];
          lVar19 = *local_1320;
          if (((*(byte *)(lVar19 + 0x1e9) & 2) != 0) &&
             ((*(longlong *)(lVar19 + 0x28) == 0 ||
              ((*(byte *)(*(longlong *)(lVar19 + 0x28) + 0xd6c) & 2) == 0)))) {
            if (DAT_1417e6c90 < *(int *)(lVar19 + 0xbc)) {
              piVar12 = (int *)FUN_14077c7b0(DAT_1416e3260);
              if ((*piVar12 < *(int *)(lVar19 + 0xb8)) || (*(int *)(lVar19 + 0xbc) <= *piVar12))
              goto LAB_14078540e;
            }
            FUN_14026e570(param_1 + 99,*(int *)((longlong)param_1 + 0x32c) + 1,&local_1320);
          }
LAB_14078540e:
          uVar24 = (int)uVar23 + 1;
          uVar23 = (ulonglong)uVar24;
          if (uVar24 == 100) {
            FUN_140789fb0(param_1,0);
            uVar23 = uVar21;
          }
          plVar17 = (longlong *)*plVar17;
          local_1318 = (longlong *)param_1[0x5c];
        } while (plVar17 != local_1318);
      }
      FUN_140789fb0(param_1,0);
      uVar24 = *(uint *)((longlong)param_1 + 0x32c);
      if (uVar24 != 0) {
        local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffffffffff00);
        FUN_140792910(param_1 + 99,&local_res8);
        local_1388 = &PTR_FUN_1410d89d8;
        local_1380 = 0;
        local_1378 = 0;
        FUN_140779020(&local_1388,param_1 + 99,uVar24);
        uVar27 = DAT_141450078;
        DAT_1416e31bc = 3;
        local_133c = DAT_141450078;
        DAT_141450078 = 0x80;
        local_1310 = &local_1388;
        local_1068 = (longlong)local_1378._4_4_;
        local_1060 = 0;
        local_1058 = 1;
        FUN_140792d20(&local_1068,&local_1310);
        DAT_141450078 = uVar27;
        FUN_140789fb0(param_1,0);
        DAT_1416e31bc = 0;
        uVar23 = uVar21;
        uVar26 = uVar21;
        if (uVar24 != 0) {
          do {
            lVar19 = *(longlong *)(uVar21 + param_1[100]);
            FUN_14012fc30(*(undefined8 *)(lVar19 + 8));
            lVar1 = *(longlong *)(lVar19 + 8);
            if (*(char *)(lVar1 + 0x188) != '\0') {
              *(undefined1 *)(lVar1 + 0x188) = 0;
              FUN_14012ff00(lVar1 + 0x170);
            }
            FUN_14012ec50(*(undefined8 *)(lVar19 + 8));
            FUN_14012f020(*(undefined8 *)(lVar19 + 8));
            FUN_14012f1c0(*(undefined8 *)(lVar19 + 8));
            iVar18 = (int)uVar23;
            uVar23 = (ulonglong)(iVar18 + 1);
            if (100 < iVar18) {
              uVar23 = 0;
              FUN_140789fb0(param_1,0);
            }
            uVar25 = (int)uVar26 + 1;
            uVar26 = (ulonglong)uVar25;
            uVar21 = uVar21 + 8;
          } while (uVar25 < uVar24);
        }
        FUN_14078fa30(&local_1388);
      }
      FUN_140789fb0(param_1,0);
      *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
    }
    *(undefined1 *)(param_1 + 0x69) = 0;
    DAT_1417e3b32 = uVar6;
    FUN_140a45470(local_1218);
  }
  FUN_140789fb0(param_1,0);
  if (param_1[0x7f] == 0) {
    lVar19 = FUN_14020cc90(param_1[0x7e]);
    param_1[0x7f] = lVar19;
  }
  else {
    lVar19 = FUN_14020cc90(param_1[0x7e]);
    if (param_1[0x7f] != lVar19) {
      if ((*(byte *)(lVar19 + 0x1e9) & 2) != 0) {
        local_1370 = (void *)0x0;
        pvStack_1368 = (void *)0x0;
        local_1360 = 0;
        local_135c = 0;
        local_12c0 = 0xf;
        local_12c8 = 0;
        local_12d8 = 0;
        FUN_1400b0300(&local_12d8,"NEW_SUCCESSOR",0xd);
        uVar27 = 0;
        uVar11 = FUN_1401e4e40(lVar19,&local_11c8,0);
        uVar11 = FUN_1401adde0(local_1038,&local_12d8,uVar11);
        pvVar13 = operator_new(0x58);
        local_1390 = pvVar13;
        FUN_1402688d0(pvVar13,uVar11);
        *(undefined8 *)((longlong)pvVar13 + 0x40) = 0;
        *(undefined8 *)((longlong)pvVar13 + 0x48) = 0;
        *(undefined1 *)((longlong)pvVar13 + 0x50) = 0;
        local_1360 = 1;
        local_1370 = pvVar13;
        pvStack_1368 = pvVar13;
        FUN_1401b84e0(local_1038);
        if (0xf < local_11b0) {
          FUN_1400ad750(CONCAT71(uStack_11c7,local_11c8),local_11b0 + 1,1);
        }
        local_11b0 = 0xf;
        local_11b8 = 0;
        local_11c8 = 0;
        if (0xf < local_12c0) {
          FUN_1400ad750(CONCAT71(uStack_12d7,local_12d8),local_12c0 + 1,1);
        }
        local_12f0 = 0xf;
        local_12f8 = 0;
        local_1308 = 0;
        FUN_1400b0300(&local_1308,"PLAYER_SUCCESSOR_CHANGED",0x18);
        uVar11 = DAT_1416e2360;
        local_1390 = (void *)param_1[0x7e];
        uVar14 = FUN_14083a280();
        local_12e8[0] = 0;
        FUN_14083b160(uVar14,&local_1308,&local_1370,&local_1390,CONCAT44(uVar27,1),lVar19,uVar11,
                      uVar11,0,0,local_12e8,0,0,0xffffffff);
        if (0xf < local_12f0) {
          FUN_1400b08c0(&local_1308,CONCAT71(uStack_1307,local_1308),local_12f0 + 1);
        }
        do {
          pvVar4 = *(void **)((longlong)pvVar13 + 0x48);
          FUN_1401b84e0(pvVar13);
          thunk_FUN_140e1c5e4(pvVar13,0x58);
          pvVar13 = pvVar4;
        } while (pvVar4 != (void *)0x0);
      }
      param_1[0x7f] = lVar19;
    }
  }
  if ((DAT_1416e31c3 != '\0') || (cVar9 = FUN_1407b78b0(), cVar9 != '\0')) {
    uVar11 = FUN_1407b77b0();
    FUN_1407b83a0(uVar11);
  }
  lVar19 = *(longlong *)(DAT_1416e3260 + 0x3f0);
  if ((*(byte *)(lVar19 + 0x1e9) & 2) != 0) {
    local_11a0 = 0x18e;
    local_1198 = 0;
    local_1190 = 0xffffffffffffffff;
    local_1188 = DAT_1416e3250;
    local_1180 = DAT_1416e3248;
    local_1178 = 0xffffffffffffffff;
    local_1170 = 0xffffffffffffffff;
    local_1168 = 0xffffffff;
    local_11a8 = &PTR_FUN_1410655c8;
    local_1160 = DAT_1416e3238;
    local_1158 = DAT_1416e3238;
    local_1150 = DAT_1416e3228;
    local_1148 = DAT_1416e3228;
    local_1140 = 0;
    local_1138 = 0;
    uStack_1130 = 0;
    local_1128 = 0;
    uStack_1120 = 0;
    local_1118 = 0;
    uStack_1110 = 0;
    local_1108 = DAT_1416e3230;
    local_1100 = 0;
    local_10f8 = &local_11a8;
    local_10f0 = &local_11a8;
    local_10e8 = &local_11a8;
    local_10dc = 0;
    local_10d4 = 1;
    local_10d0 = 0;
    local_10c8 = 0;
    local_10c0 = 0;
    local_10b8 = 0;
    uStack_10b0 = 0;
    local_10a8 = 0;
    local_10e0 = 0;
    if ((lVar19 != DAT_1416e3238) || ((*(byte *)(lVar19 + 0x1e9) & 2) == 0)) {
      FUN_1406d4ac0(&local_11a8);
      local_1160 = lVar19;
      if (lVar19 == 0) {
        local_1160 = DAT_1416e3238;
      }
      if ((*(byte *)(local_1160 + 0x1e9) & 2) != 0) {
        LOCK();
        *(int *)(local_1160 + 0x1c0) = *(int *)(local_1160 + 0x1c0) + 1;
        UNLOCK();
      }
    }
    uVar11 = FUN_1400aea20();
    FUN_1400aea90(uVar11,&local_11a8);
    FUN_1406d3280(&local_11a8);
  }
  FUN_1409e9b90(DAT_1416e32d8 + 0x3b98);
  if (DAT_1416e3928 == (undefined8 *)0x0) {
    DAT_1416e3928 = operator_new(0x60);
    *(undefined4 *)(DAT_1416e3928 + 1) = 0x18e;
    *DAT_1416e3928 = &PTR_FUN_1410e6698;
    DAT_1416e3928[2] = 0;
    DAT_1416e3928[3] = 0;
    DAT_1416e3928[4] = 0;
    DAT_1416e3928[5] = 0;
    DAT_1416e3928[6] = 0;
    DAT_1416e3928[7] = 0;
    *(undefined1 *)(DAT_1416e3928 + 8) = 0;
    DAT_1416e3928[9] = 0;
    DAT_1416e3928[10] = 0;
    DAT_1416e3928[0xb] = 0;
    local_res8 = DAT_1416e3928;
  }
  FUN_140892270(DAT_1416e3928);
  if (DAT_1416e3af0 == 0) {
    local_res8 = operator_new(0x38);
    DAT_1416e3af0 = FUN_140aa41b0(local_res8);
  }
  FUN_140aa4dd0(DAT_1416e3af0);
  uVar27 = FUN_140789fb0(param_1,0);
  if (local_13a8 != (longlong *)0x0) {
    FUN_1400b09e0(uVar27,local_13a8,local_1398 - (longlong)local_13a8 >> 3);
  }
  return;
}

