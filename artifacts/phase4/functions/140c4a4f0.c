
void FUN_140c4a4f0(int *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int *piVar7;
  
  if (param_2 == 0) {
    if (DAT_141450080 == -1) {
      piVar7 = &DAT_141450084;
      iVar6 = 0;
      DAT_141450080 = 0;
      do {
        iVar6 = iVar6 + 1;
        *piVar7 = (piVar7[-1] >> 0x1e ^ piVar7[-1]) * 0x6c078965 + iVar6;
        piVar7 = piVar7 + 1;
      } while ((longlong)piVar7 < 0x141450a40);
    }
    lVar5 = 0x13;
    puVar2 = (undefined8 *)&DAT_141450080;
    do {
      piVar7 = param_1;
      puVar4 = puVar2;
      uVar1 = puVar4[1];
      *(undefined8 *)piVar7 = *puVar4;
      *(undefined8 *)(piVar7 + 2) = uVar1;
      uVar1 = puVar4[3];
      *(undefined8 *)(piVar7 + 4) = puVar4[2];
      *(undefined8 *)(piVar7 + 6) = uVar1;
      uVar1 = puVar4[5];
      *(undefined8 *)(piVar7 + 8) = puVar4[4];
      *(undefined8 *)(piVar7 + 10) = uVar1;
      uVar1 = puVar4[7];
      *(undefined8 *)(piVar7 + 0xc) = puVar4[6];
      *(undefined8 *)(piVar7 + 0xe) = uVar1;
      uVar1 = puVar4[9];
      *(undefined8 *)(piVar7 + 0x10) = puVar4[8];
      *(undefined8 *)(piVar7 + 0x12) = uVar1;
      uVar1 = puVar4[0xb];
      *(undefined8 *)(piVar7 + 0x14) = puVar4[10];
      *(undefined8 *)(piVar7 + 0x16) = uVar1;
      uVar1 = puVar4[0xd];
      *(undefined8 *)(piVar7 + 0x18) = puVar4[0xc];
      *(undefined8 *)(piVar7 + 0x1a) = uVar1;
      uVar1 = puVar4[0xf];
      *(undefined8 *)(piVar7 + 0x1c) = puVar4[0xe];
      *(undefined8 *)(piVar7 + 0x1e) = uVar1;
      lVar5 = lVar5 + -1;
      puVar2 = puVar4 + 0x10;
      param_1 = piVar7 + 0x20;
    } while (lVar5 != 0);
    uVar1 = puVar4[0x11];
    *(undefined8 *)(piVar7 + 0x20) = puVar4[0x10];
    *(undefined8 *)(piVar7 + 0x22) = uVar1;
    uVar1 = puVar4[0x13];
    *(undefined8 *)(piVar7 + 0x24) = puVar4[0x12];
    *(undefined8 *)(piVar7 + 0x26) = uVar1;
    uVar1 = puVar4[0x15];
    *(undefined8 *)(piVar7 + 0x28) = puVar4[0x14];
    *(undefined8 *)(piVar7 + 0x2a) = uVar1;
    uVar1 = puVar4[0x17];
    *(undefined8 *)(piVar7 + 0x2c) = puVar4[0x16];
    *(undefined8 *)(piVar7 + 0x2e) = uVar1;
    return;
  }
  iVar6 = 1;
  *param_1 = param_2;
  lVar5 = 1;
  do {
    iVar3 = (param_1[lVar5 + -1] >> 0x1e ^ param_1[lVar5 + -1]) * 0x6c078965 + iVar6;
    iVar6 = iVar6 + 1;
    param_1[lVar5] = iVar3;
    lVar5 = lVar5 + 1;
  } while (lVar5 < 0x270);
  return;
}

