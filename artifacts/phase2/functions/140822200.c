
undefined8 FUN_140822200(longlong param_1,int param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_110 [160];
  undefined **local_70 [13];
  
  if (param_2 < (int)(*(longlong *)(param_1 + 0x3268) - *(longlong *)(param_1 + 0x3260) >> 3)) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x3260) + (longlong)param_2 * 8);
  }
  else {
    uVar2 = FUN_1400ae570(local_110,"D:\\jenkins\\workspace\\ck2-steam\\ck2\\source\\map.cpp",0x7aa,
                          0x10003,0xfffffffffffffffe);
    FUN_140d652c0(uVar2,"Province ",9);
    uVar2 = FUN_1401637b0(uVar2,param_2);
    plVar3 = (longlong *)FUN_1400cdc40(uVar2," referenced but does nor exist");
    uVar1 = FUN_1400b14a0((longlong)*(int *)(*plVar3 + 4) + (longlong)plVar3,10);
    FUN_1400b1350(plVar3,uVar1);
    FUN_1400b0b20(plVar3);
    FUN_140d64ca0(local_70);
    local_70[0] = std::ios_base::vftable;
    std::ios_base::_Ios_base_dtor((ios_base *)local_70);
    uVar2 = **(undefined8 **)(param_1 + 0x3260);
  }
  return uVar2;
}

