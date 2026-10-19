
void FUN_1403bd7d0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  *param_1 = &PTR_FUN_1410903c8;
  if (*(char *)(param_1 + 4) != '\0') {
    iVar3 = *(int *)(param_1 + 3);
    while (iVar3 != 0) {
      puVar4 = (undefined8 *)param_1[1];
      FUN_1403aa9c0(*puVar4);
      plVar5 = (longlong *)puVar4[1];
      puVar4[1] = 0;
      *puVar4 = 0;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))();
          }
        }
      }
      lVar8 = param_1[1];
      if (lVar8 != 0) {
        if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
          lVar6 = *(longlong *)(lVar8 + 0x10);
          lVar7 = *(longlong *)(lVar8 + 0x18);
          if (lVar6 != 0) {
            *(longlong *)(lVar6 + 0x18) = lVar7;
          }
          if (lVar7 != 0) {
            *(longlong *)(lVar7 + 0x10) = lVar6;
          }
          if (lVar8 == param_1[1]) {
            param_1[1] = lVar7;
          }
          if (lVar8 == param_1[2]) {
            param_1[2] = lVar6;
          }
          FUN_1403be1f0();
          *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + -1;
        }
        else {
          *(undefined1 *)(lVar8 + 0x20) = 1;
        }
      }
      iVar3 = *(int *)(param_1 + 3);
    }
  }
  FUN_1403bdf60(param_1 + 1);
  return;
}

