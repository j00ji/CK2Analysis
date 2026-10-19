
void FUN_1403b7180(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  
  lVar5 = DAT_1416e3260;
  uVar8 = 0xfffffffffffffffe;
  puVar6 = operator_new(0x2a0);
  puVar7 = (undefined8 *)FUN_1403b9ad0(lVar5 + 0x230,local_50,param_1,param_4,uVar8);
  plVar3 = (longlong *)puVar7[1];
  local_70 = *puVar7;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_68 = plVar3;
  FUN_1403a1230(puVar6,&local_70,1);
  *puVar6 = &PTR_FUN_14108ffa0;
  puVar6[2] = &PTR_FUN_141090160;
  *(undefined8 **)(param_1 + 0x10) = puVar6;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_48 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_48 + 8))(local_48);
      }
    }
  }
  puVar6 = operator_new(0x2a0);
  puVar7 = (undefined8 *)FUN_1403b9ad0(lVar5 + 0x230,local_40,param_1);
  plVar3 = (longlong *)puVar7[1];
  local_60 = *puVar7;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_58 = plVar3;
  FUN_1403a1230(puVar6,&local_60,0);
  *puVar6 = &PTR_FUN_14108ffa0;
  puVar6[2] = &PTR_FUN_141090160;
  *(undefined8 **)(param_1 + 0x18) = puVar6;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_38 + 8))(local_38);
      }
    }
  }
  return;
}

