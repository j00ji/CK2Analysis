
void FUN_140ba94a0(longlong param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 local_110 [160];
  undefined **local_70 [13];
  
  uVar6 = 0xfffffffffffffffe;
  lVar3 = FUN_1400d3090(param_1 + 0x88);
  if (lVar3 == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)(lVar3 + -0x10);
  }
  *(longlong **)(param_1 + 0x80) = plVar5;
  if (1 < DAT_1417e3b70) {
    if (*(code **)(*plVar5 + 0x30) == (code *)&LAB_1401add00) {
      plVar4 = plVar5 + 0x17;
    }
    else {
      plVar4 = (longlong *)(**(code **)(*plVar5 + 0x30))(plVar5);
    }
    uVar6 = FUN_1400ae570(local_110,
                          "D:\\jenkins\\workspace\\ck2-steam\\ck2\\source\\unitcommands.cpp",0xea,6,
                          uVar6);
    uVar1 = *(undefined4 *)((longlong)plVar5 + 0x24);
    FUN_140d652c0(uVar6," CancelMovement: ",0x11);
    if (0xf < (ulonglong)plVar4[3]) {
      plVar4 = (longlong *)*plVar4;
    }
    uVar6 = FUN_1400cdc40(uVar6,plVar4);
    uVar6 = FUN_1400cdc40(uVar6,&DAT_141075fa4);
    plVar4 = (longlong *)FUN_140268040(uVar6,uVar1);
    uVar2 = FUN_1400b14a0((longlong)*(int *)(*plVar4 + 4) + (longlong)plVar4,10);
    FUN_1400b1350(plVar4,uVar2);
    FUN_1400b0b20(plVar4);
    FUN_140d64ca0(local_70);
    local_70[0] = std::ios_base::vftable;
    std::ios_base::_Ios_base_dtor((ios_base *)local_70);
  }
  FUN_140ba15e0(plVar5,0);
  return;
}

