
ulonglong FUN_140c425f0(longlong param_1,uint *param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong extraout_RAX;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 local_res20 [8];
  undefined8 uVar8;
  undefined1 local_120 [160];
  undefined **local_80 [13];
  
  uVar8 = 0xfffffffffffffffe;
  lVar4 = FUN_1400d3090(param_2);
  if (lVar4 == 0) {
    if ((param_2[1] != DAT_1417ed634) || (*param_2 != DAT_1417ed630)) goto LAB_140c4272c;
  }
  else {
    uVar8 = FUN_1400ae570(local_120,
                          "D:\\jenkins\\workspace\\ck2-steam\\clausewitz\\clausewitzlib\\id.cpp",
                          0x53,0x1000,uVar8);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    FUN_140d652c0(uVar8,"Failed to create id ",0x14);
    uVar8 = FUN_140268040(uVar8,uVar2);
    uVar8 = FUN_1400cdc40(uVar8,&DAT_14106175c);
    uVar8 = FUN_140268040(uVar8,uVar1);
    plVar5 = (longlong *)FUN_1400cdc40(uVar8,". Already exists in game.");
    uVar3 = FUN_1400b14a0((longlong)*(int *)(*plVar5 + 4) + (longlong)plVar5,10);
    FUN_1400b1350(plVar5,uVar3);
    FUN_1400b0b20(plVar5);
    FUN_140d64ca0(local_80);
    local_80[0] = std::ios_base::vftable;
    std::ios_base::_Ios_base_dtor((ios_base *)local_80);
    if (*param_2 < 0x65) {
      if (param_3 != '\0') {
        return extraout_RAX & 0xffffffffffffff00;
      }
LAB_140c4272c:
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)param_2;
      goto LAB_140c42733;
    }
  }
  puVar6 = (undefined8 *)FUN_140c42c80(local_res20);
  *(undefined8 *)(param_1 + 0x10) = *puVar6;
LAB_140c42733:
  uVar7 = FUN_140c42760(param_1);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return uVar7;
}

