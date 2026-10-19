
void FUN_140c4a600(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = 0x18d;
  lVar2 = 0x270;
  puVar4 = param_1;
  do {
    uVar1 = (param_1[(iVar5 + -0x18c) % 0x270] ^ *puVar4) & 0x7fffffff ^ *puVar4;
    uVar3 = param_1[iVar5 % 0x270] ^ (int)uVar1 >> 1;
    *puVar4 = uVar3;
    uVar1 = uVar1 & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    if (uVar1 == 1) {
      *puVar4 = uVar3 ^ 0x9908b0df;
    }
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

