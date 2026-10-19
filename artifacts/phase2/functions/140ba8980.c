
void FUN_140ba8980(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined **local_30;
  undefined **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  lVar4 = FUN_1400d3090(param_1 + 0x88);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar7;
  if (lVar4 != 0) {
    plVar6 = (longlong *)(lVar4 + -0x10);
  }
  if ((char)plVar6[1] != '\0') {
    pcVar1 = *(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0xc0);
    if (pcVar1 == (code *)&LAB_14063b1b0) {
      lVar4 = *(longlong *)((*(longlong **)(DAT_1416e3260 + 0x370))[0x6d] + 0x208);
    }
    else {
      lVar4 = (*pcVar1)();
    }
    lVar5 = FUN_1400d3090(param_1 + 0x88);
    plVar6 = plVar7;
    if (lVar5 != 0) {
      plVar6 = (longlong *)(lVar5 + -0x10);
    }
    *(undefined1 *)
     (*(longlong *)(*(longlong *)(lVar4 + 600) + (ulonglong)*(ushort *)(plVar6[0x10] + 0xe8) * 8) +
     0x4c9) = 1;
  }
  if (*(int *)(param_1 + 0xb0) < 1) {
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_30 = &PTR_FUN_1410669b0;
    local_28 = &PTR_FUN_1410669c0;
    local_20 = 0;
    local_18 = 0;
    lVar4 = FUN_1400d3090(param_1 + 0x88);
    plVar6 = (longlong *)(lVar4 + -0x10);
    if (lVar4 == 0) {
      plVar6 = plVar7;
    }
    *(longlong **)(param_1 + 0x80) = plVar6;
    if (((*(char *)(param_1 + 0x94) == '\0') && (0 < (int)plVar6[0x14])) &&
       (lVar4 = FUN_140822200(DAT_1416e32d8,*(undefined4 *)plVar6[0x13]), lVar4 != 0)) {
      uVar2 = *(undefined8 *)
               (*(longlong *)(DAT_1416e3260 + 0x278) + (ulonglong)*(ushort *)(param_1 + 0x90) * 8);
      if (0 < (int)plVar6[0x14]) {
        plVar7 = (longlong *)FUN_140822200(DAT_1416e32d8,*(undefined4 *)plVar6[0x13]);
      }
      cVar3 = (*(code *)*local_30)(&local_30,plVar6,plVar7,uVar2);
    }
    else {
      plVar7 = (longlong *)plVar6[0x10];
      cVar3 = FUN_140ba1ff0(plVar6);
      if (cVar3 != '\0') {
        if ((int)plVar6[0x14] < 1) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)FUN_140822200(DAT_1416e32d8,*(undefined4 *)plVar6[0x12]);
        }
      }
      uVar2 = *(undefined8 *)
               (*(longlong *)(DAT_1416e3260 + 0x278) + (ulonglong)*(ushort *)(param_1 + 0x90) * 8);
      cVar3 = (*(code *)*local_30)(&local_30,plVar6,plVar7,uVar2);
    }
    if (cVar3 != '\0') {
      FUN_1408cebc0(&local_30,plVar6,plVar7,uVar2,&local_50);
    }
    FUN_140ba1800(plVar6,&local_50,*(undefined1 *)(param_1 + 0x94),*(undefined1 *)(param_1 + 200));
    local_28 = &PTR_FUN_1410669c0;
    FUN_1400d4ca0(&local_28);
    lVar4 = local_50;
    while (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + 0x10);
      thunk_FUN_140e1c5e4(lVar4,0x20);
      lVar4 = lVar5;
    }
  }
  else {
    if ((*(int *)(param_1 + 0xc0) != 0) || (*(int *)(param_1 + 0xc4) != 0)) {
      lVar4 = FUN_1400d3090(param_1 + 0x88);
      plVar6 = (longlong *)(lVar4 + -0x10);
      if (lVar4 == 0) {
        plVar6 = plVar7;
      }
      lVar4 = (**(code **)(*plVar6 + 0x50))();
      if (lVar4 != 0) {
        lVar4 = FUN_1400d3090(param_1 + 0x88);
        plVar6 = (longlong *)(lVar4 + -0x10);
        if (lVar4 == 0) {
          plVar6 = plVar7;
        }
        lVar4 = (**(code **)(*plVar6 + 0x50))();
        *(undefined8 *)(lVar4 + 0x238) = *(undefined8 *)(param_1 + 0xc0);
      }
    }
    uVar8 = (ulonglong)*(byte *)(param_1 + 200);
    lVar4 = FUN_1400d3090(param_1 + 0x88);
    if (lVar4 != 0) {
      plVar7 = (longlong *)(lVar4 + -0x10);
    }
    FUN_140ba1800(plVar7,param_1 + 0xa0,*(undefined1 *)(param_1 + 0x94),uVar8 & 0xff);
  }
  return;
}

