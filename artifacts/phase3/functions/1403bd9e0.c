
undefined4 FUN_1403bd9e0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  plVar1 = *(longlong **)(param_1 + 8);
  while (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)*plVar1;
    plVar1 = (longlong *)plVar1[3];
    if (*(code **)(*plVar2 + 0x90) == FUN_1403aa2a0) {
      lVar3 = plVar2[0xb];
      uVar7 = 0;
      uVar6 = (uint)(plVar2[0xc] - lVar3 >> 3);
      if (uVar6 != 0) {
        do {
          param_2 = FUN_1401ac450(lVar3 + (longlong)(int)uVar7 * 8,8,param_2);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar6);
      }
      uVar5 = FUN_1401ac450(plVar2 + 0xb,0x18,param_2);
      lVar3 = plVar2[0xe];
      uVar7 = 0;
      uVar6 = (uint)(plVar2[0xf] - lVar3 >> 3);
      if (uVar6 != 0) {
        do {
          uVar5 = FUN_1401ac450(lVar3 + (longlong)(int)uVar7 * 8,8,uVar5);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar6);
      }
      uVar5 = FUN_1401ac450(plVar2 + 0xe,0x18,uVar5);
      lVar3 = plVar2[2];
      if (lVar3 != 0) {
        if ((code *)**(undefined8 **)(lVar3 + 0x10) == FUN_1403a1af0) {
          lVar4 = *(longlong *)(lVar3 + 0x30);
          while (lVar4 != 0) {
            lVar8 = *(longlong *)(lVar4 + 0x10);
            uVar5 = FUN_1401ac450(lVar4,8,uVar5);
            lVar4 = lVar8;
          }
          uVar5 = FUN_1401ac450(lVar3 + 0x30,0x18,uVar5);
          uVar5 = FUN_1401ac450(lVar3,0x2a0,uVar5);
        }
        else {
          uVar5 = (*(code *)**(undefined8 **)(lVar3 + 0x10))(lVar3 + 0x10,uVar5);
        }
      }
      lVar3 = plVar2[3];
      if (lVar3 != 0) {
        if ((code *)**(undefined8 **)(lVar3 + 0x10) == FUN_1403a1af0) {
          lVar4 = *(longlong *)(lVar3 + 0x30);
          while (lVar4 != 0) {
            lVar8 = *(longlong *)(lVar4 + 0x10);
            uVar5 = FUN_1401ac450(lVar4,8,uVar5);
            lVar4 = lVar8;
          }
          uVar5 = FUN_1401ac450(lVar3 + 0x30,0x18,uVar5);
          uVar5 = FUN_1401ac450(lVar3,0x2a0,uVar5);
        }
        else {
          uVar5 = (*(code *)**(undefined8 **)(lVar3 + 0x10))(lVar3 + 0x10,uVar5);
        }
      }
      param_2 = FUN_1401ac450(plVar2,0x98,uVar5);
    }
    else {
      param_2 = (**(code **)(*plVar2 + 0x90))(plVar2);
    }
  }
  return param_2;
}

