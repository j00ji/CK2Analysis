
void FUN_140b9cdc0(longlong *param_1,longlong param_2,char param_3)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  char *pcVar9;
  uint in_stack_ffffffffffffffa8;
  undefined1 local_40;
  undefined7 uStack_3f;
  undefined8 local_30;
  ulonglong local_28;
  
  lVar7 = DAT_1416e3260;
  if ((param_2 != param_1[0x10]) || ((param_3 != '\0' && (0 < (int)param_1[0x14])))) {
    cVar1 = (**(code **)(*param_1 + 0x80))();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x70))(param_1);
      if ((((cVar1 != '\0') &&
           (lVar5 = (**(code **)(*param_1 + 0x60))(param_1), 0 < *(int *)(lVar5 + 0x240))) &&
          (*(char *)(*(longlong *)(param_2 + 0xf0) + 100) != '\0')) &&
         (cVar1 = FUN_14093bca0(param_2,*(undefined2 *)(param_1[0x10] + 0xe8)), cVar1 != '\0')) {
        lVar5 = (**(code **)(*param_1 + 0x60))(param_1);
        puVar6 = *(undefined8 **)(lVar5 + 0x230);
        if (puVar6 == (undefined8 *)0x0) {
          return;
        }
        do {
          uVar3 = *puVar6;
          pvVar2 = operator_new(0xd0);
          in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffff00;
          uVar3 = FUN_140ba87a0(pvVar2,uVar3,*(undefined2 *)(param_2 + 0xe8),param_3 == '\0',
                                in_stack_ffffffffffffffa8);
          uVar4 = (**(code **)(**(longlong **)(lVar7 + 0x370) + 0xe0))();
          FUN_140c3d960(uVar4,uVar3);
          puVar6 = (undefined8 *)puVar6[2];
        } while (puVar6 != (undefined8 *)0x0);
        return;
      }
      lVar7 = *(longlong *)(lVar7 + 0x3f0);
      if (param_1[0x2e] == 0) {
        lVar5 = FUN_1400d3090(param_1 + 0x2d);
        param_1[0x2c] = lVar5;
        param_1[0x2e] = lVar5;
        if (lVar5 == 0) {
          param_1[0x2e] = DAT_1416e2360;
        }
      }
      if (lVar7 != param_1[0x2e]) {
        return;
      }
      local_28 = 0xf;
      local_30 = 0;
      local_40 = 0;
      FUN_1400b0300(&local_40,"illegal_move",0xc);
      plVar8 = (longlong *)FUN_140c52b00();
      (**(code **)(*plVar8 + 200))(plVar8,&local_40);
    }
    else {
      pvVar2 = operator_new(0xd0);
      uVar3 = FUN_140ba87a0(pvVar2,param_1,*(undefined2 *)(param_2 + 0xe8),param_3 == '\0',
                            in_stack_ffffffffffffffa8 & 0xffffff00);
      uVar4 = (**(code **)(**(longlong **)(lVar7 + 0x370) + 0xe0))();
      FUN_140c3d960(uVar4,uVar3);
      lVar7 = *(longlong *)(lVar7 + 0x3f0);
      if (param_1[0x2e] == 0) {
        lVar5 = FUN_1400d3090(param_1 + 0x2d);
        param_1[0x2c] = lVar5;
        param_1[0x2e] = lVar5;
        if (lVar5 == 0) {
          param_1[0x2e] = DAT_1416e2360;
        }
      }
      if (lVar7 != param_1[0x2e]) {
        return;
      }
      cVar1 = (**(code **)(*param_1 + 0x68))(param_1);
      pcVar9 = "navy_move";
      if (cVar1 != '\0') {
        pcVar9 = "army_move";
      }
      local_28 = 0xf;
      lVar7 = 0;
      local_30 = 0;
      local_40 = 0;
      if (*pcVar9 != '\0') {
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (pcVar9[lVar7] != '\0');
      }
      FUN_1400b0300(&local_40,pcVar9,lVar7);
      plVar8 = (longlong *)FUN_140c52b00();
      (**(code **)(*plVar8 + 200))(plVar8,&local_40);
    }
    if (0xf < local_28) {
      FUN_1400b08c0(&local_40,CONCAT71(uStack_3f,local_40),local_28 + 1);
    }
    return;
  }
  if (0 < (int)param_1[0x14]) {
    pvVar2 = operator_new(0x90);
    uVar3 = FUN_140ba9440(pvVar2,param_1);
    uVar4 = (**(code **)(**(longlong **)(lVar7 + 0x370) + 0xe0))();
    FUN_140c3d960(uVar4,uVar3);
    return;
  }
  cVar1 = (**(code **)(*param_1 + 0x68))();
  if (cVar1 == '\0') {
    return;
  }
  lVar5 = (**(code **)(*param_1 + 0x50))(param_1);
  if (*(longlong *)(lVar5 + 0x230) == 0) {
    return;
  }
  if (*(char *)(*(longlong *)(param_1[0x10] + 0xf0) + 100) == '\0') {
    return;
  }
  puVar6 = operator_new(0x90);
  FUN_1401554f0(puVar6,0x2ca7);
  *puVar6 = &PTR_FUN_141143cc0;
  puVar6[0x10] = param_1;
  *(int *)(puVar6 + 0x11) = (int)param_1[4];
  *(undefined4 *)((longlong)puVar6 + 0x8c) = *(undefined4 *)((longlong)param_1 + 0x24);
  uVar3 = (**(code **)(**(longlong **)(lVar7 + 0x370) + 0xe0))();
  FUN_140c3d960(uVar3,puVar6);
  return;
}

