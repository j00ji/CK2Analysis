
void FUN_140a2d950(longlong *param_1,int *param_2,int *param_3,longlong param_4,undefined1 param_5)

{
  undefined1 auVar1 [16];
  char cVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined4 local_res8 [2];
  undefined4 uVar9;
  longlong local_108;
  longlong local_100;
  undefined1 local_f8 [208];
  
  cVar2 = (**(code **)(*param_1 + 0x48))();
  if (cVar2 != '\0') {
    FUN_140e3cff0(local_f8,0,200);
    lVar6 = 0;
    local_res8[0] = 0;
    FUN_140a2d5d0(param_1,local_f8,local_res8);
    lVar8 = *(longlong *)(*(longlong *)(param_4 + 0x10) + 0x28);
    lVar5 = lVar6;
    if (lVar8 != 0) {
      lVar5 = lVar8 + 0xbe4;
    }
    if (*(longlong *)(param_1[0x1e] + 0x28) != 0) {
      lVar6 = *(longlong *)(param_1[0x1e] + 0x28) + 0xbe4;
    }
    uVar9 = *(undefined4 *)(param_4 + 0xb4);
    local_108 = lVar5;
    local_100 = lVar6;
    piVar3 = (int *)FUN_140848320(param_1 + 0x13,local_res8,local_res8[0],local_f8,uVar9,&local_108)
    ;
    iVar4 = 1000;
    iVar7 = 1000;
    *param_2 = *piVar3;
    if (lVar5 != 0) {
      piVar3 = (int *)FUN_1402665f0(lVar5,local_res8,param_4,*(undefined8 *)(param_4 + 0x10),uVar9,
                                    param_5);
      iVar7 = *piVar3 + 1000;
    }
    if (lVar6 != 0) {
      piVar3 = (int *)FUN_1402665f0(lVar6,local_res8,param_4,param_1[0x1e],uVar9,param_5);
      iVar7 = iVar7 + *piVar3;
    }
    lVar8 = 0x20c49ba5e353f7cf;
    iVar7 = (int)(((longlong)*param_2 * (longlong)iVar7) / 1000);
    *param_2 = iVar7;
    *param_3 = iVar7;
    if (lVar5 != 0) {
      piVar3 = (int *)FUN_140266810(lVar5,local_res8);
      iVar4 = *piVar3 + 1000;
    }
    if (lVar6 != 0) {
      piVar3 = (int *)FUN_140266810(lVar6,local_res8);
      iVar4 = iVar4 + *piVar3;
    }
    auVar1 = SEXT816(lVar8) * SEXT816((longlong)*param_3 * (longlong)iVar4);
    *param_3 = (int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f);
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}

