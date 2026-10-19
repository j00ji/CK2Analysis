
undefined8 * FUN_1403a1230(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined4 local_40 [4];
  undefined1 local_30 [8];
  longlong *local_28;
  
  *(undefined4 *)(param_1 + 1) = 0x18e;
  *param_1 = &PTR_FUN_14108ff40;
  param_1[2] = &PTR_FUN_141090160;
  *(undefined1 *)(param_1 + 3) = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar9 = param_2[1];
  uVar5 = *param_2;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 0xc) = *(int *)(lVar9 + 0xc) + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)param_1[5];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  param_1[5] = lVar9;
  param_1[4] = uVar5;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  lVar9 = 3;
  _eh_vector_constructor_iterator_
            (param_1 + 9,200,3,(_func_void_void_ptr *)&LAB_14039bd90,FUN_14039beb0);
  local_40[0] = 0;
  local_40[1] = 1;
  local_40[2] = 2;
  puVar10 = local_40;
  puVar11 = param_1 + 0x18;
  do {
    uVar4 = *puVar10;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar4;
    *(undefined4 *)puVar11 = uVar4;
    puVar8 = (undefined8 *)FUN_1403b96b0(param_1 + 4,local_30);
    plVar6 = local_28;
    puVar11[5] = *puVar8;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_28 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 0x19;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  return param_1;
}

