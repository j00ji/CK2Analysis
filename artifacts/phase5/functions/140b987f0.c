
void FUN_140b987f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *local_res10;
  longlong local_res18;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  iVar5 = 0;
  for (plVar3 = *(longlong **)(param_1 + 0x38); (plVar3 != (longlong *)0x0 && (param_2 != *plVar3));
      plVar3 = (longlong *)plVar3[2]) {
    iVar5 = iVar5 + 1;
  }
  iVar4 = -1;
  if (plVar3 != (longlong *)0x0) {
    iVar4 = iVar5;
  }
  if (iVar4 != -1) {
    local_res18 = *(longlong *)(param_1 + 0x118);
    lVar1 = iVar4 + local_res18 + 1;
    FUN_140e3b2e0(iVar4 + local_res18,lVar1,*(longlong *)(param_1 + 0x120) - lVar1);
    *(longlong *)(param_1 + 0x120) = *(longlong *)(param_1 + 0x120) + -1;
  }
  for (local_res10 = *(longlong **)(param_1 + 0x38);
      (local_res10 != (longlong *)0x0 && (*local_res10 != param_2));
      local_res10 = (longlong *)local_res10[2]) {
  }
  FUN_1400d4c30(param_1 + 0x38,&local_res10);
  *(undefined8 *)(param_2 + 0x28) = 0;
  if ((*(longlong *)(param_1 + 0x68) != 0) && (*(int *)(*(longlong *)(param_1 + 0x68) + 8) != 0)) {
    plVar3 = (longlong *)FUN_140b99ce0(param_1,local_38);
    lVar1 = *plVar3;
    FUN_1403b6e40(lVar1,*(undefined8 *)(param_2 + 0xf0));
    FUN_1403a1900(*(undefined8 *)(lVar1 + 0x10),param_2);
    FUN_1403a1900(*(undefined8 *)(lVar1 + 0x18),param_2);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      lVar1 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_30 + 8))(local_30);
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x78) != 0) && (*(int *)(*(longlong *)(param_1 + 0x78) + 8) != 0)) {
    plVar3 = (longlong *)FUN_140b99c30(param_1,local_28);
    lVar1 = *plVar3;
    FUN_1403b6e40(lVar1,*(undefined8 *)(param_2 + 0xf0));
    FUN_1403a1900(*(undefined8 *)(lVar1 + 0x10),param_2);
    FUN_1403a1900(*(undefined8 *)(lVar1 + 0x18),param_2);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      lVar1 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar1 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_20 + 8))(local_20);
        }
      }
    }
  }
  FUN_140b9b660(param_1);
  return;
}

