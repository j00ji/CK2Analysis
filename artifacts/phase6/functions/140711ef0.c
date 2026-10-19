
void FUN_140711ef0(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  double dVar9;
  int local_res8 [2];
  undefined1 local_348;
  undefined7 uStack_347;
  undefined8 local_338;
  ulonglong local_330;
  undefined **local_328;
  undefined4 local_320;
  undefined1 local_318 [16];
  undefined8 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined2 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined2 local_2e8;
  undefined2 local_2e6;
  undefined4 local_2e4;
  undefined1 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined **local_298;
  undefined4 local_290;
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined2 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined2 local_258;
  undefined2 local_256;
  undefined4 local_254;
  undefined1 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  int local_218;
  undefined8 local_208;
  undefined1 local_1f8 [16];
  undefined1 local_1e8;
  undefined7 uStack_1e7;
  undefined8 local_1d8;
  ulonglong local_1d0;
  undefined4 local_1c8;
  undefined **local_198 [16];
  undefined1 local_118;
  undefined7 uStack_117;
  undefined8 local_108;
  ulonglong local_100;
  undefined1 local_e8 [192];
  
  local_208 = 0xfffffffffffffffe;
  *(undefined1 *)(DAT_1416e3260 + 0x50c) = 1;
  if (DAT_1417e3b38 == (undefined8 *)0x0) {
    DAT_1417e3b38 = operator_new(8);
    *DAT_1417e3b38 = &PTR_FUN_14114aef8;
  }
  dVar9 = (double)(**(code **)(*DAT_1417e3b40 + 0x28))();
  if (DAT_1417e3b38 == (undefined8 *)0x0) {
    DAT_1417e3b38 = operator_new(8);
    *DAT_1417e3b38 = &PTR_FUN_14114aef8;
  }
  DAT_1417e3b4c = (undefined4)(longlong)(dVar9 * DAT_141164d60);
  DAT_1417e3b48 = 0;
  if (DAT_1417e3b38 == (undefined8 *)0x0) {
    DAT_1417e3b38 = operator_new(8);
    *DAT_1417e3b38 = &PTR_FUN_14114aef8;
  }
  uVar3 = DAT_1417e3b4c;
  uVar2 = DAT_1417e3b48;
  local_320 = 0x18e;
  local_328 = &PTR_FUN_141065530;
  local_300 = 0xf;
  local_308 = 0;
  local_318[0] = 0;
  local_2f0 = 0x28e1;
  local_2ec = 0x28e1;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2e8 = 0xffff;
  FUN_1400b0300(local_318,&DAT_14106162d,0);
  local_2f8 = 0;
  local_2f4 = 0;
  local_2e6 = 0;
  local_2e4 = 0;
  local_2e0 = 0;
  local_328 = &PTR_FUN_1410dbff8;
  local_2a8 = uVar3;
  local_2a4 = uVar2;
  if (DAT_1417e3b38 == (undefined8 *)0x0) {
    DAT_1417e3b38 = operator_new(8);
    *DAT_1417e3b38 = &PTR_FUN_14114aef8;
  }
  DAT_1417e3b48 = 0;
  DAT_1417e3b4c = local_2a8;
  if (DAT_1417e3b38 == (undefined8 *)0x0) {
    DAT_1417e3b38 = operator_new(8);
    *DAT_1417e3b38 = &PTR_FUN_14114aef8;
  }
  DAT_1417e3b48 = local_2a4;
  FUN_140c4a720();
  FUN_1407880a0(DAT_1416e3260);
  piVar4 = (int *)FUN_14077c7b0(DAT_1416e3260);
  uVar6 = (int)DAT_1416e2d18 >> 0x1f;
  iVar1 = (*piVar4 + -43800000) / 0x18;
  local_res8[0] =
       (*piVar4 + -43800000) % 0x18 +
       (((uVar6 & 0xfffffffe) + 1) *
        ((iVar1 - (int)((float)(int)((double)iVar1 / DAT_141164d70) * DAT_141164eac)) +
        ((DAT_1416e2d18 ^ uVar6) - uVar6) * 0x16d) + 0x1bd8e8) * 0x18;
  FUN_1401abe80(local_res8,DAT_1416e2d00);
  FUN_14028b400(local_res8,DAT_1416e2cd0);
  local_290 = 0x18e;
  local_298 = &PTR_FUN_141065530;
  local_270 = 0xf;
  local_278 = 0;
  local_288[0] = 0;
  local_260 = 0x28ce;
  local_25c = 0x28ce;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_258 = 0xffff;
  FUN_1400b0300(local_288,&DAT_14106162d,0);
  local_268 = 0;
  local_264 = 0;
  local_256 = 0;
  local_254 = 0;
  local_250 = 0;
  local_298 = &PTR_FUN_1410d8c98;
  local_218 = local_res8[0];
  FUN_140796920(&local_298);
  local_330 = 0xf;
  local_338 = 0;
  local_348 = 0;
  FUN_1400b0300(&local_348,"Mr Human",8);
  if ((undefined **)*param_1 == &PTR_FUN_1410d31c0) {
    lVar5 = *(longlong *)(param_1[0x6d] + 0x218);
  }
  else {
    lVar5 = (*(code *)((undefined **)*param_1)[0x1c])(param_1);
  }
  FUN_1407cc700(local_1f8,&local_348,*(undefined4 *)(lVar5 + 0xac));
  if (0xf < local_330) {
    FUN_1400b08c0(&local_348,CONCAT71(uStack_347,local_348),local_330 + 1);
  }
  local_330 = 0xf;
  local_338 = 0;
  local_348 = 0;
  FUN_1407970b0(local_198,&local_1e8,local_1c8,1);
  FUN_1407971f0(local_198);
  if ((undefined **)*param_1 == &PTR_FUN_1410d31c0) {
    lVar5 = *(longlong *)(param_1[0x6d] + 0x218);
  }
  else {
    lVar5 = (*(code *)((undefined **)*param_1)[0x1c])(param_1);
  }
  lVar8 = 0;
  if (DAT_1417e3b58 != 0) {
    for (plVar7 = *(longlong **)
                   (*(longlong *)(DAT_1417e3b58 + 8) +
                   ((ulonglong)(DAT_1416e2cec + 0x420000) % (ulonglong)*(uint *)(DAT_1417e3b58 + 4))
                   * 8);
        (lVar8 = 0, plVar7 != (longlong *)0x0 &&
        ((lVar8 = *plVar7, *(int *)(lVar8 + 0x14) != DAT_1416e2cec ||
         (*(int *)(lVar8 + 0x10) != 0x42)))); plVar7 = (longlong *)plVar7[1]) {
    }
  }
  FUN_1404047f0(local_e8,lVar8,DAT_1416e2360,*(undefined4 *)(lVar5 + 0xac),0);
  FUN_1404048b0(local_e8);
  *(undefined1 *)((longlong)param_1 + 0x1425) = 1;
  FUN_1400b2310(local_e8);
  local_198[0] = &PTR_FUN_1410d8ad0;
  if (0xf < local_100) {
    FUN_1400b08c0(&local_118,CONCAT71(uStack_117,local_118),local_100 + 1);
  }
  local_100 = 0xf;
  local_108 = 0;
  local_118 = 0;
  FUN_1400b2310(local_198);
  if (0xf < local_1d0) {
    FUN_1400b08c0(&local_1e8,CONCAT71(uStack_1e7,local_1e8),local_1d0 + 1);
  }
  local_1d0 = 0xf;
  local_1d8 = 0;
  local_1e8 = 0;
  local_298 = &PTR_FUN_1410d8c98;
  FUN_1400b2310(&local_298);
  local_328 = &PTR_FUN_1410dbff8;
  FUN_1400b2310(&local_328);
  return;
}

