
void FUN_140bb3970(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  lVar3 = FUN_1400d3090(param_1 + 0x90);
  uVar2 = DAT_1417e3b32;
  if ((lVar3 != 0) && (lVar1 = lVar3 + -0x10, lVar1 != 0)) {
    DAT_1417e3b32 = 1;
    lVar4 = FUN_1400d3090(param_1 + 0x88);
    *(longlong *)(param_1 + 0x80) = lVar4;
    if (lVar4 != 0) {
      FUN_140b987f0(*(undefined8 *)(lVar4 + 0x28),lVar4);
      FUN_140b97bb0(lVar1,lVar4,*(undefined4 *)(param_1 + 0x98),param_4,uVar5);
      if (((*(longlong *)(lVar3 + 0x68) == 0) || (*(int *)(*(longlong *)(lVar3 + 0x68) + 8) == 0))
         && (*(int *)(lVar3 + 0x38) == 1)) {
        FUN_1403bc0c0(DAT_1416e3260 + 0x230,lVar1,*(undefined8 *)(lVar3 + 0x70));
      }
    }
  }
  DAT_1417e3b32 = uVar2;
  return;
}

