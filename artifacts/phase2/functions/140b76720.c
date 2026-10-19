
ulonglong FUN_140b76720(longlong param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int *piVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_res8 [2];
  int local_res10 [2];
  char *local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40 [3];
  ulonglong local_28;
  
  iVar7 = *(int *)(param_2 + 0x14);
  uVar2 = FUN_1406e7e40(param_1 + 0x90,param_2,0);
  if (iVar7 == 0) {
    if (DAT_1417e5319 == '\0') goto LAB_140b7680c;
    puVar3 = (undefined8 *)FUN_1405541d0(param_1,local_40);
    if (0xf < (ulonglong)puVar3[3]) {
      puVar3 = (undefined8 *)*puVar3;
    }
    iVar7 = 0;
    puVar8 = &DAT_141451200;
    piVar4 = &DAT_141451200;
    do {
      if (*piVar4 == *(int *)(param_1 + 8)) {
        puVar8 = &DAT_141451200 + (longlong)iVar7 * 0x81;
        break;
      }
      iVar7 = iVar7 + 1;
      piVar4 = piVar4 + 0x81;
    } while ((longlong)piVar4 < 0x1416d5df8);
    local_50 = "D:\\jenkins\\workspace\\ck2-steam\\ck2\\source\\triggerimplementation.cpp";
    local_48 = 0x63b6;
    local_44 = 0x1000;
    uVar2 = FUN_140d65130(&local_50,
                          "Script Assert Failure! message: %s, type: \"%s\", location: \"%s\"",
                          "Invalid scope",puVar8 + 1,puVar3);
  }
  else {
    if ((int)uVar2 != 0) {
      uVar2 = FUN_14081b7a0(DAT_1416e32d8,local_res8,iVar7,uVar2 & 0xffffffff);
      local_res10[0] = local_res8[0];
      if (local_res8[0] < 0) goto LAB_140b7680c;
      FUN_140554460(param_1,local_res8,param_2);
      if (local_res8[0] != 0) {
        cVar1 = FUN_140ad1fe0(param_1,local_res10,local_res8);
        if (cVar1 == '\0') {
          bVar6 = 0;
          goto LAB_140b768d9;
        }
      }
      bVar6 = 1;
LAB_140b768d9:
      return (ulonglong)bVar6;
    }
    if (DAT_1417e5319 == (char)uVar2) goto LAB_140b7680c;
    puVar3 = (undefined8 *)FUN_1405541d0(param_1,local_40);
    if (0xf < (ulonglong)puVar3[3]) {
      puVar3 = (undefined8 *)*puVar3;
    }
    lVar5 = FUN_140a97fd0(*(undefined4 *)(param_1 + 8));
    local_50 = "D:\\jenkins\\workspace\\ck2-steam\\ck2\\source\\triggerimplementation.cpp";
    local_48 = 0x63bb;
    local_44 = 0x1000;
    uVar2 = FUN_140d65130(&local_50,
                          "Script Assert Failure! message: %s, type: \"%s\", location: \"%s\"",
                          "Invalid target",lVar5 + 4,puVar3);
  }
  if (0xf < local_28) {
    uVar2 = FUN_1400b08c0(local_40,local_40[0],local_28 + 1);
  }
LAB_140b7680c:
  return uVar2 & 0xffffffffffffff00;
}

