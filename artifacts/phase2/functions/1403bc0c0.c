
void FUN_1403bc0c0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  longlong lVar5;
  undefined1 uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_110 [160];
  undefined **local_70 [13];
  
  if ((*(longlong *)(param_2 + 0x68) == 0) || (*(int *)(*(longlong *)(param_2 + 0x68) + 8) == 0)) {
    iVar7 = FUN_1403bb1a0(param_1,param_3,param_2,param_4,0xfffffffffffffffe);
    if (iVar7 == 0) {
      FUN_1403bb5d0(param_1,param_3,param_2);
    }
  }
  else {
    plVar8 = (longlong *)FUN_140b99ce0(param_2,local_120);
    uVar9 = FUN_1400ae570(local_110,
                          "D:\\jenkins\\workspace\\ck2-steam\\ck2\\source\\combatmanager.cpp",0x20d,
                          0x10003);
    uVar2 = *(undefined2 *)(*(longlong *)(*plVar8 + 0x28) + 0xe8);
    uVar3 = *(undefined2 *)(param_3 + 0xe8);
    uVar4 = *(undefined2 *)(*(longlong *)(param_2 + 0x80) + 0xe8);
    FUN_140d652c0(uVar9,"NewUnitArrived: Unit.ProvID=",0x1c);
    uVar9 = FUN_1403bddc0(uVar9,uVar4);
    uVar9 = FUN_1400cdc40(uVar9," Prov.ID=");
    uVar9 = FUN_1403bddc0(uVar9,uVar3);
    uVar9 = FUN_1400cdc40(uVar9," Unit.Combat.ProvID=");
    plVar8 = (longlong *)FUN_1403bddc0(uVar9,uVar2);
    uVar6 = FUN_1400b14a0((longlong)*(int *)(*plVar8 + 4) + (longlong)plVar8,10);
    FUN_1400b1350(plVar8,uVar6);
    FUN_1400b0b20(plVar8);
    FUN_140d64ca0(local_70);
    local_70[0] = std::ios_base::vftable;
    std::ios_base::_Ios_base_dtor((ios_base *)local_70);
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_118 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_118 + 8))(local_118);
        }
      }
    }
  }
  return;
}

