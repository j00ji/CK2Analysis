
ulonglong FUN_140ba7980(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_b8 [88];
  undefined1 local_60 [88];
  
  uVar6 = DAT_1416e2360;
  if (*(longlong *)(param_1 + 0x170) == 0) {
    in_RAX = FUN_1400d3090(param_1 + 0x168);
    *(ulonglong *)(param_1 + 0x160) = in_RAX;
    *(ulonglong *)(param_1 + 0x170) = in_RAX;
    if (in_RAX == 0) {
      *(undefined8 *)(param_1 + 0x170) = uVar6;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x170);
  if (*(longlong *)(param_2 + 0x170) == 0) {
    in_RAX = FUN_1400d3090(param_2 + 0x168);
    *(ulonglong *)(param_2 + 0x160) = in_RAX;
    *(ulonglong *)(param_2 + 0x170) = in_RAX;
    if (in_RAX == 0) {
      *(undefined8 *)(param_2 + 0x170) = uVar6;
    }
  }
  if (((lVar4 == *(longlong *)(param_2 + 0x170)) &&
      (((in_RAX = *(ulonglong *)(param_1 + 0x68), in_RAX == 0 || (*(int *)(in_RAX + 8) == 0)) &&
       (*(int *)(param_1 + 0xa0) < 1)))) && (*(int *)(param_1 + 0xb4) < 1)) {
    iVar2 = FUN_140b9f380(param_1);
    lVar4 = FUN_140ba47e0(param_2,local_b8,1);
    lVar5 = FUN_140bbb130(param_1 + 0x230,local_60,1);
    iVar1 = *(int *)(lVar4 + 0x10) + *(int *)(lVar4 + 0x14) + *(int *)(lVar4 + 0x18) +
            *(int *)(lVar4 + 0x1c) + *(int *)(lVar4 + 0x20) + *(int *)(lVar4 + 0x24) +
            *(int *)(lVar4 + 0x28) + *(int *)(lVar4 + 0x2c) +
            *(int *)(lVar5 + 0x10) + *(int *)(lVar5 + 0x14) + *(int *)(lVar5 + 0x18) +
            *(int *)(lVar5 + 0x1c) + *(int *)(lVar5 + 0x20) + *(int *)(lVar5 + 0x24) +
            *(int *)(lVar5 + 0x28) + *(int *)(lVar5 + 0x2c);
    uVar3 = (ulonglong)CONCAT31((int3)((uint)iVar1 >> 8),iVar1 <= iVar2 * 1000);
  }
  else {
    uVar3 = in_RAX & 0xffffffffffffff00;
  }
  return uVar3;
}

