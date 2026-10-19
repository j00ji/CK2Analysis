
void FUN_1403a1450(longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 local_res20;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  if (param_3 == 0x27f2) {
    local_28 = 0xf;
    local_30 = 0;
    local_40 = local_40 & 0xffffffffffffff00;
    FUN_1400b0300(&local_40,&DAT_14106162d,0);
    uStack_50 = DAT_1417ed630;
    uStack_4c = DAT_1417ed634;
    if (0xf < local_28) {
      FUN_1400b08c0(&local_40,local_40,local_28 + 1,param_4,0);
    }
    local_res20 = 0;
    FUN_140c36c70(param_2,&local_res20);
    lVar2 = *(longlong *)(param_2 + 0x680);
    if (((lVar2 == 0) || (*(char *)(lVar2 + 8) == '\0')) || (*(char *)(lVar2 + 9) == '\0')) {
      uStack_38 = (undefined4)local_res20;
      uStack_34 = local_res20._4_4_;
      local_40 = 0;
      uStack_50 = (undefined4)local_res20;
      uStack_4c = local_res20._4_4_;
    }
    lVar2 = FUN_1400d3090(&uStack_50);
    if ((lVar2 != 0) && (lVar2 != 0x10)) {
      lVar3 = FUN_1400d3090(&uStack_50);
      lVar2 = lVar3 + -0x10;
      if (lVar3 == 0) {
        lVar2 = 0;
      }
      lVar3 = *(longlong *)(param_1 + 0x38);
      plVar4 = operator_new(0x20);
      *plVar4 = lVar2;
      plVar4[1] = lVar3;
      plVar4[2] = 0;
      *(undefined1 *)(plVar4 + 3) = 0;
      iVar1 = *(int *)(param_1 + 0x40);
      *(longlong **)(param_1 + 0x38) = plVar4;
      *(int *)(param_1 + 0x40) = iVar1 + 1;
      if (iVar1 == 0) {
        *(longlong **)(param_1 + 0x30) = plVar4;
      }
      else {
        *(longlong **)(lVar3 + 0x10) = plVar4;
      }
    }
    return;
  }
  if (param_3 == 0x2c8a) {
                    /* WARNING: Could not recover jumptable at 0x0001403a14c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x48) + 0x18))(param_1 + 0x48);
    return;
  }
  if (param_3 == 0x2c8b) {
                    /* WARNING: Could not recover jumptable at 0x0001403a14b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x110) + 0x18))();
    return;
  }
  if (param_3 == 0x2c8c) {
                    /* WARNING: Could not recover jumptable at 0x0001403a149f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x1d8) + 0x18))();
    return;
  }
  FUN_140c35600(param_2);
  return;
}

