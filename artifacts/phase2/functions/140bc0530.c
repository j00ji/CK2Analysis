
void FUN_140bc0530(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  int iVar10;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined8 local_80;
  ulonglong local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  ulonglong local_58;
  undefined1 local_50 [40];
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x38) + 0x85) & 4) != 0) {
    lVar3 = FUN_1400d3090(param_1 + 0x58);
    *(longlong *)(param_1 + 0x50) = lVar3;
    if (lVar3 != 0) {
      local_78 = 0xf;
      lVar3 = 0;
      local_80 = 0;
      local_90 = 0;
      FUN_1400b0300(&local_90,"ship_icon",9);
      plVar4 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x38) + 0x98))
                         (*(longlong **)(param_1 + 0x38),&local_90);
      if (*(code **)(*plVar4 + 0x98) == (code *)&LAB_140c72d90) {
        (**(code **)(*(longlong *)plVar4[0x18] + 0xb8))();
      }
      else {
        (**(code **)(*plVar4 + 0x98))(plVar4,8);
      }
      if (0xf < local_78) {
        FUN_1400b08c0(&local_90,CONCAT71(uStack_8f,local_90),local_78 + 1);
      }
      local_78 = 0xf;
      local_80 = 0;
      local_90 = 0;
      FUN_1400b0300(&local_90,"ship_shield",0xb);
      lVar5 = FUN_1400d3090(param_1 + 0x58);
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + 0x130);
      lVar2 = *(longlong *)(lVar5 + 0x28);
      if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0xb0) == 0)) ||
         (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xb0) + 8),
         (ulonglong)(*(longlong *)(lVar2 + 0x40) - *(longlong *)(lVar2 + 0x38)) < 8)) {
        uVar8 = DAT_1416e3ad0;
        if (0 < (int)(*(longlong *)(lVar5 + 0x78) - *(longlong *)(lVar5 + 0x70) >> 3)) {
          uVar8 = **(undefined8 **)(lVar5 + 0x70);
        }
      }
      else {
        uVar8 = **(undefined8 **)(lVar2 + 0x38);
      }
      plVar4 = *(longlong **)(param_1 + 0x48);
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x78))
                        (*(longlong **)(param_1 + 0x38),&local_90);
      uVar7 = (**(code **)(*plVar4 + 0xb8))(plVar4);
      FUN_140637430(uVar7,uVar6,uVar8,0,0,0,1,0);
      if (0xf < local_78) {
        FUN_1400b08c0(&local_90,CONCAT71(uStack_8f,local_90),local_78 + 1);
      }
      local_78 = 0xf;
      local_80 = 0;
      local_90 = 0;
      FUN_1400b0300(&local_90,"ship_name",9);
      plVar4 = (longlong *)FUN_1400d3090(param_1 + 0x58);
      uVar8 = (**(code **)(*plVar4 + 0x50))(plVar4,&local_70);
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x88))
                        (*(longlong **)(param_1 + 0x38),&local_90);
      FUN_140c58b10(uVar6,uVar8,0);
      if (0xf < local_58) {
        FUN_1400b08c0(&local_70,CONCAT71(uStack_6f,local_70),local_58 + 1);
      }
      local_58 = 0xf;
      local_60 = 0;
      local_70 = 0;
      if (0xf < local_78) {
        FUN_1400b08c0(&local_90,CONCAT71(uStack_8f,local_90),local_78 + 1);
      }
      local_58 = 0xf;
      local_60 = 0;
      local_70 = 0;
      FUN_1400b0300(&local_70,"ship_amount",0xb);
      lVar5 = FUN_1400d3090(param_1 + 0x58);
      iVar1 = *(int *)(lVar5 + 0xc4);
      iVar10 = iVar1 / 1000;
      if (iVar1 % 1000 != 0) {
        iVar10 = (uint)(0 < iVar1) + iVar10;
      }
      local_78 = 0xf;
      local_80 = 0;
      local_90 = 0;
      pcVar9 = (char *)FUN_140d5e4a0((iVar10 * 1000) / 1000,local_50);
      if (*pcVar9 != '\0') {
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (pcVar9[lVar3] != '\0');
      }
      FUN_1400b0300(&local_90,pcVar9,lVar3);
      uVar8 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x88))
                        (*(longlong **)(param_1 + 0x38),&local_70);
      FUN_140c58b10(uVar8,&local_90,0);
      if (0xf < local_78) {
        FUN_1400b08c0(&local_90,CONCAT71(uStack_8f,local_90),local_78 + 1);
      }
      local_78 = 0xf;
      local_80 = 0;
      local_90 = 0;
      if (0xf < local_58) {
        FUN_1400b08c0(&local_70,CONCAT71(uStack_6f,local_70),local_58 + 1);
      }
      local_58 = 0xf;
      local_60 = 0;
      local_70 = 0;
      FUN_1400b0300(&local_70,"transferbutton",0xe);
      plVar4 = (longlong *)
               (**(code **)(**(longlong **)(param_1 + 0x38) + 0x78))
                         (*(longlong **)(param_1 + 0x38),&local_70);
      (**(code **)(*plVar4 + 0x288))(plVar4);
      FUN_1400ae4f0(&local_70);
    }
  }
  return;
}

