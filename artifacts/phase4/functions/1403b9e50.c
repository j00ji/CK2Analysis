
void FUN_1403b9e50(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong *local_70;
  longlong *plStack_68;
  undefined8 local_60;
  longlong *plStack_58;
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  
  uVar10 = 0xfffffffffffffffe;
  if (param_3 == 0x283c) {
    puVar4 = operator_new(0x98);
    FUN_1403a40e0(puVar4);
    *puVar4 = &PTR_FUN_1410902d8;
    local_60 = 0;
    plStack_58 = (longlong *)0x0;
    FUN_1403be470(&local_60,puVar4);
    plVar5 = plStack_58;
    uVar9 = local_60;
    if (plStack_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_58 + 1) = (int)plStack_58[1] + 1;
      UNLOCK();
    }
    local_38 = plStack_58;
    local_40 = local_60;
    lVar3 = *(longlong *)(param_1 + 0x18);
    puVar4 = operator_new(0x28);
    *puVar4 = 0;
    puVar4[1] = 0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      plVar5 = plStack_58;
      uVar9 = local_60;
    }
    FUN_14026d370(puVar4,uVar9,plVar5,param_4,uVar10);
    plVar8 = plStack_58;
    puVar4[2] = 0;
    puVar4[3] = lVar3;
    *(undefined1 *)(puVar4 + 4) = 0;
    *(undefined8 **)(param_1 + 0x18) = puVar4;
    iVar2 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar2 + 1;
    if (iVar2 == 0) {
      *(undefined8 **)(param_1 + 0x20) = puVar4;
    }
    else {
      *(undefined8 **)(lVar3 + 0x10) = puVar4;
    }
    plVar7 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar5 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      plVar7 = plStack_58;
      uVar9 = local_60;
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        plVar7 = plStack_58;
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        uVar9 = local_60;
        if (iVar2 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58);
          uVar9 = local_60;
        }
      }
    }
    FUN_1403b7180(uVar9);
    FUN_140c38110(uVar9,param_2);
    plVar5 = plStack_58;
    if (plVar7 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar7 = plVar7 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 != 1) {
      return;
    }
    (**(code **)*plStack_58)(plStack_58);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    plVar5 = plStack_58;
  }
  else {
    if (param_3 != 0x283e) {
      return;
    }
    puVar4 = operator_new(0xa0);
    FUN_1403a40e0(puVar4);
    *puVar4 = &PTR_FUN_141090000;
    *(undefined1 *)(puVar4 + 0x13) = 0;
    local_70 = (longlong *)0x0;
    plStack_68 = (longlong *)0x0;
    FUN_1403be470(&local_70,puVar4);
    plVar5 = plStack_68;
    plVar8 = local_70;
    if (plStack_68 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_68 + 1) = (int)plStack_68[1] + 1;
      UNLOCK();
    }
    local_48 = plStack_68;
    local_50 = local_70;
    lVar3 = *(longlong *)(param_1 + 0x18);
    puVar4 = operator_new(0x28);
    *puVar4 = 0;
    puVar4[1] = 0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      plVar5 = plStack_68;
      plVar8 = local_70;
    }
    FUN_14026d370(puVar4,plVar8,plVar5,param_4,uVar10);
    plVar7 = plStack_68;
    puVar4[2] = 0;
    puVar4[3] = lVar3;
    *(undefined1 *)(puVar4 + 4) = 0;
    *(undefined8 **)(param_1 + 0x18) = puVar4;
    iVar2 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar2 + 1;
    if (iVar2 == 0) {
      *(undefined8 **)(param_1 + 0x20) = puVar4;
    }
    else {
      *(undefined8 **)(lVar3 + 0x10) = puVar4;
    }
    plVar6 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar5 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      plVar6 = plStack_68;
      plVar8 = local_70;
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_68)(plStack_68);
        plVar6 = plStack_68;
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar8 = local_70;
        if (iVar2 == 1) {
          (**(code **)(*plStack_68 + 8))(plStack_68);
          plVar8 = local_70;
        }
      }
    }
    (**(code **)(*plVar8 + 0x30))(plVar8);
    (**(code **)(*plVar8 + 0x18))(plVar8,param_2);
    plVar5 = plStack_68;
    if (plVar6 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar6 = plVar6 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 != 1) {
      return;
    }
    (**(code **)*plStack_68)(plStack_68);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    plVar5 = plStack_68;
  }
  if (iVar2 == 1) {
    (**(code **)(*plVar5 + 8))();
  }
  return;
}

