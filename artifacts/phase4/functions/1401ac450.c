
uint FUN_1401ac450(ushort *param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = param_2;
  if (param_3 != 0) {
    uVar3 = param_3;
  }
  if ((int)param_2 < 1) {
    return uVar3;
  }
  if (param_1 == (ushort *)0x0) {
    return uVar3;
  }
  uVar4 = param_2 & 3;
  for (iVar5 = (int)param_2 >> 2; 0 < iVar5; iVar5 = iVar5 + -1) {
    uVar2 = *param_1;
    puVar1 = param_1 + 1;
    param_1 = param_1 + 2;
    uVar3 = uVar3 + uVar2 ^ (uint)*puVar1 << 0xb ^ (uVar3 + uVar2) * 0x10000;
    uVar3 = uVar3 + (uVar3 >> 0xb);
  }
  if (uVar4 == 1) {
    uVar3 = uVar3 + (int)(char)*param_1;
    uVar3 = uVar3 ^ uVar3 * 0x400;
    uVar4 = uVar3 >> 1;
  }
  else if (uVar4 == 2) {
    uVar3 = uVar3 + *param_1 ^ (uVar3 + *param_1) * 0x800;
    uVar4 = uVar3 >> 0x11;
  }
  else {
    if (uVar4 != 3) goto LAB_1401ac501;
    uVar3 = uVar3 + *param_1 ^ (int)(char)param_1[1] << 0x12 ^ (uVar3 + *param_1) * 0x10000;
    uVar4 = uVar3 >> 0xb;
  }
  uVar3 = uVar3 + uVar4;
LAB_1401ac501:
  uVar3 = uVar3 ^ uVar3 * 8;
  uVar3 = uVar3 + (uVar3 >> 5);
  uVar3 = uVar3 ^ uVar3 * 0x10;
  uVar3 = uVar3 + (uVar3 >> 0x11);
  uVar3 = uVar3 ^ uVar3 * 0x2000000;
  return uVar3 + (uVar3 >> 6);
}

