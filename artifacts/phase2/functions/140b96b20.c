
void FUN_140b96b20(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  char *pcVar10;
  
  lVar6 = DAT_1416e3260;
  if ((*(char *)((longlong)param_1 + 0x223) != '\0') && (param_1[0x38] != 0)) {
    FUN_140ba4ed0(param_1[0x38],param_1);
    *(undefined1 *)((longlong)param_1 + 0x223) = 0;
  }
  FUN_140b9d1c0(param_1);
  lVar8 = param_1[0x14];
  FUN_140ba2870(param_1,0 < (int)lVar8);
  FUN_140b9d1c0(param_1);
  puVar5 = (undefined4 *)FUN_14077c7b0(DAT_1416e3260);
  *(undefined4 *)((longlong)param_1 + 0x1a4) = *puVar5;
  if ((int)param_1[0x14] < 1) {
    if (0 < *(int *)((longlong)param_1 + 0xb4)) {
      *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x221) = 0;
  }
  if ((((0 < (int)lVar8) && ((int)param_1[0x14] < 1)) && (*(int *)((longlong)param_1 + 0xb4) < 1))
     && (((param_1[0xf] == 0 || (*(int *)(param_1[0xf] + 8) == 0)) &&
         ((param_1[0xd] == 0 || (*(int *)(param_1[0xd] + 8) == 0)))))) {
    FUN_1403bc0c0(lVar6 + 0x230,param_1,param_1[0x10]);
    if (((longlong *)param_1[0x1b] != (longlong *)0x0) &&
       (cVar4 = (**(code **)(*(longlong *)param_1[0x1b] + 0x168))(), cVar4 != '\0')) {
      lVar6 = (**(code **)(*(longlong *)param_1[0x1b] + 0xe0))();
      *(undefined1 *)(lVar6 + 0x140) = 0;
    }
  }
  cVar4 = (**(code **)(*param_1 + 0x70))(param_1);
  if (cVar4 != '\0') {
    uVar7 = (**(code **)(*param_1 + 0x60))(param_1);
    FUN_140ba7fc0(uVar7);
  }
  if ((param_1[0xd] == 0) || (*(int *)(param_1[0xd] + 8) == 0)) {
    plVar1 = (longlong *)param_1[7];
    while (plVar1 != (longlong *)0x0) {
      puVar2 = (undefined8 *)*plVar1;
      plVar1 = (longlong *)plVar1[2];
      if (*(char *)((longlong)puVar2 + 0x1ad) == '\0') {
        if (*(char *)((longlong)puVar2 + 0x1ae) != '\0') {
          if ((*(byte *)(puVar2[0x1e] + 0x1e9) & 2) != 0) {
            FUN_14023aee0();
          }
          *(undefined1 *)((longlong)puVar2 + 0x1ae) = 0;
        }
      }
      else {
        lVar6 = puVar2[5];
        if (lVar6 != 0) {
          uVar7 = *(undefined8 *)(lVar6 + 0x80);
          if (*(longlong *)(lVar6 + 0x170) == 0) {
            lVar8 = FUN_1400d3090(lVar6 + 0x168);
            *(longlong *)(lVar6 + 0x160) = lVar8;
            *(longlong *)(lVar6 + 0x170) = lVar8;
            if (lVar8 == 0) {
              *(undefined8 *)(lVar6 + 0x170) = DAT_1416e2360;
            }
          }
          lVar8 = *(longlong *)(lVar6 + 0x170);
          if ((((*(int *)((longlong)puVar2 + 0x44) == 1) && (lVar3 = puVar2[9], lVar3 != 0)) &&
              ((*(byte *)(lVar3 + 0x1e9) & 2) != 0)) &&
             ((*(longlong *)(lVar3 + 0x28) != 0 &&
              (*(longlong *)(*(longlong *)(lVar3 + 0x28) + 0xb0) != 0)))) {
            uVar9 = FUN_1400b1d10();
            FUN_14049e9b0(uVar9,puVar2);
          }
          FUN_140b987f0(lVar6,puVar2);
          (**(code **)*puVar2)(puVar2,1);
          if (lVar8 == *(longlong *)(DAT_1416e3260 + 0x3f0)) {
            FUN_14064b160(*(undefined8 *)(DAT_1416e3260 + 0x370),4);
          }
          (**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0x3b0))
                    (*(longlong **)(DAT_1416e3260 + 0x370),uVar7);
        }
      }
    }
    pcVar10 = (char *)((longlong)param_1 + 0x154);
    lVar6 = 3;
    param_1 = param_1 + 0x26;
    do {
      if (*pcVar10 != '\0') {
        if ((*(byte *)(*param_1 + 0x1e9) & 2) != 0) {
          FUN_14023aee0();
        }
        *pcVar10 = '\0';
      }
      param_1 = param_1 + 1;
      pcVar10 = pcVar10 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

