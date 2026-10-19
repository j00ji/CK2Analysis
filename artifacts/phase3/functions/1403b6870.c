
void FUN_1403b6870(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_30 [3];
  ulonglong local_18;
  
  uVar3 = 0xfffffffffffffffe;
  param_1[5] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_140822200(DAT_1416e32d8);
    param_1[5] = lVar2;
  }
  iVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  if (iVar1 == 1) {
    lVar2 = *(longlong *)(param_1[5] + 0xf50);
    param_1[8] = lVar2;
    FUN_140d5f2e0(local_30,"defenderbonus_",lVar2 + 0x10,param_4,uVar3);
    uVar3 = FUN_140876c80();
    lVar2 = FUN_14087acd0(uVar3,local_30);
    param_1[9] = lVar2;
    if (0xf < local_18) {
      FUN_1400b08c0(local_30,local_30[0],local_18 + 1);
    }
  }
  return;
}

