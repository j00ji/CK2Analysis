
void FUN_140ba15e0(longlong *param_1,char param_2)

{
  longlong *plVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  undefined4 *puVar6;
  uint *puVar7;
  longlong lVar8;
  
  if (((param_2 == '\0') && (cVar5 = FUN_140ba1ff0(), cVar5 != '\0')) && ((int)param_1[0x14] != 0))
  {
    plVar1 = param_1 + 0x12;
    *(undefined4 *)(param_1 + 0x34) = 0;
    uVar3 = *(undefined4 *)*plVar1;
    FUN_1400b1970(plVar1);
    lVar8 = param_1[0x13];
    puVar6 = operator_new(0x20);
    *puVar6 = uVar3;
    *(longlong *)(puVar6 + 2) = lVar8;
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined1 *)(puVar6 + 6) = 0;
    lVar4 = param_1[0x14];
    param_1[0x13] = (longlong)puVar6;
    *(int *)(param_1 + 0x14) = (int)lVar4 + 1;
    if ((int)lVar4 == 0) {
      *plVar1 = (longlong)puVar6;
    }
    else {
      *(undefined4 **)(lVar8 + 0x10) = puVar6;
    }
    lVar8 = param_1[0x13];
    uVar2 = *(ushort *)(param_1[0x10] + 0xe8);
    puVar7 = operator_new(0x20);
    *puVar7 = (uint)uVar2;
    *(longlong *)(puVar7 + 2) = lVar8;
    puVar7[4] = 0;
    puVar7[5] = 0;
    *(undefined1 *)(puVar7 + 6) = 0;
    lVar4 = param_1[0x14];
    param_1[0x13] = (longlong)puVar7;
    *(int *)(param_1 + 0x14) = (int)lVar4 + 1;
    if ((int)lVar4 == 0) {
      *plVar1 = (longlong)puVar7;
    }
    else {
      *(uint **)(lVar8 + 0x10) = puVar7;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x16) = 0;
    lVar8 = param_1[0x12];
    while (lVar8 != 0) {
      lVar4 = *(longlong *)(lVar8 + 0x10);
      thunk_FUN_140e1c5e4(lVar8,0x20);
      lVar8 = lVar4;
    }
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x222) = 0;
  cVar5 = (**(code **)(*param_1 + 0x68))(param_1);
  if (cVar5 != '\0') {
    lVar8 = (**(code **)(*param_1 + 0x50))(param_1);
    *(undefined8 *)(lVar8 + 0x238) = 0;
  }
  puVar6 = (undefined4 *)FUN_14077c7b0(DAT_1416e3260);
  *(undefined4 *)((longlong)param_1 + 0x1a4) = *puVar6;
  if (((((int)param_1[0x14] < 1) && (*(int *)((longlong)param_1 + 0xb4) < 1)) &&
      ((param_1[0xf] == 0 || (*(int *)(param_1[0xf] + 8) == 0)))) &&
     ((param_1[0xd] == 0 || (*(int *)(param_1[0xd] + 8) == 0)))) {
    FUN_1403bc0c0(DAT_1416e3260 + 0x230,param_1,param_1[0x10]);
  }
  FUN_140ba57d0(param_1);
  if (((int)param_1[0x14] != 0) &&
     (((param_1[0xd] != 0 && (*(int *)(param_1[0xd] + 8) != 0)) ||
      ((param_1[0xf] != 0 && (*(int *)(param_1[0xf] + 8) != 0)))))) {
    *(undefined1 *)(param_1 + 0x44) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x44) = 0;
  return;
}

