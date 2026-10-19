
void FUN_140b95f20(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  char *pcVar6;
  undefined1 local_res18 [8];
  undefined8 *local_res20;
  
  iVar2 = (int)param_3;
  if (iVar2 < 0x2abd) {
    if (iVar2 == 0x2abc) {
      iVar2 = FID_conflict_atoi((char *)(param_2 + 0x43c));
      *(int *)(param_1 + 0x4c) = iVar2;
      return;
    }
    if (iVar2 < 0x2843) {
      if (iVar2 == 0x2842) {
        if (*(int *)(param_2 + 0x438) == 0x2799) {
          *(undefined4 *)(param_1 + 0xa4) = 2;
          return;
        }
        iVar2 = FID_conflict_atoi((char *)(param_2 + 0x43c));
        *(int *)(param_1 + 0xa4) = iVar2;
        return;
      }
      if (iVar2 == 0x1b) {
        pcVar6 = (char *)(param_2 + 0x43c);
        if (*pcVar6 == '\0') {
          lVar4 = 0;
        }
        else {
          lVar4 = -1;
          do {
            lVar4 = lVar4 + 1;
          } while (pcVar6[lVar4] != '\0');
        }
        FUN_1400b0300(param_1 + 0xa8,pcVar6,lVar4);
        return;
      }
      if (iVar2 == 0x6b) {
        iVar2 = FID_conflict_atoi((char *)(param_2 + 0x43c));
        *(int *)(param_1 + 0x44) = iVar2;
        return;
      }
      if (iVar2 == 0x19d) {
        FUN_14037edb0(param_2,param_1 + 0x80);
        return;
      }
      if (iVar2 == 0x27bc) {
        iVar2 = FID_conflict_atoi((char *)(param_2 + 0x43c));
        uVar3 = FUN_140822200(DAT_1416e32d8,iVar2);
        FUN_140b98e30(param_1 + -0x10,uVar3);
        return;
      }
      if (iVar2 == 0x27f3) {
        FUN_140c36fc0(param_2,param_1 + 0xa0);
        return;
      }
    }
    else {
      if (iVar2 == 0x28aa) {
        iVar2 = FID_conflict_atoi((char *)(param_2 + 0x43c));
        uVar3 = FUN_140822200(DAT_1416e32d8,iVar2);
        *(undefined8 *)(param_1 + 0x78) = uVar3;
        return;
      }
      if (iVar2 == 0x28c8) {
        local_res20 = operator_new(0x1b0);
        plVar5 = (longlong *)FUN_140a2a420(local_res20,0);
        (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
        if (((int)plVar5[2] == 0) && (*(int *)((longlong)plVar5 + 0x14) == 0)) {
          (**(code **)*plVar5)(plVar5,1);
          return;
        }
        lVar4 = *(longlong *)(param_1 + 0x30);
        local_res20 = operator_new(0x20);
        *local_res20 = plVar5;
        local_res20[1] = lVar4;
        local_res20[2] = 0;
        *(undefined1 *)(local_res20 + 3) = 0;
        *(undefined8 **)(param_1 + 0x30) = local_res20;
        iVar2 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar2 + 1;
        if (iVar2 == 0) {
          *(undefined8 **)(param_1 + 0x28) = local_res20;
        }
        else {
          *(undefined8 **)(lVar4 + 0x10) = local_res20;
        }
        plVar5[5] = param_1 + -0x10;
        FUN_140a2bd60(plVar5);
        return;
      }
      if (iVar2 == 0x28e4) {
        iVar2 = FID_conflict_atoi((char *)(param_2 + 0x43c));
        *(int *)(param_1 + 0x40) = iVar2;
        return;
      }
      if (iVar2 == 0x28e5) {
        *(bool *)(param_1 + 0x48) = *(int *)(param_2 + 0x438) == 0x2799;
        return;
      }
    }
  }
  else if (iVar2 < 0x2dc9) {
    if (0x2dc5 < iVar2) {
      iVar2 = FUN_14090fa40(param_2 + 0x43c,&DAT_14114a594,local_res18);
      if (iVar2 != 0) {
        return;
      }
      FUN_140c35a00(param_2);
      return;
    }
    if (iVar2 == 0x2c89) {
      FUN_1409ee110(param_2,param_1 + 0x108);
      return;
    }
    if (iVar2 == 0x2c8a) {
      FUN_1401554b0(param_2,param_1 + 0x138);
      return;
    }
    if (iVar2 == 0x2c8b) {
      FUN_1401554b0(param_2,param_1 + 0x13c);
      return;
    }
    if (iVar2 == 0x2c8c) {
      FUN_1401554b0(param_2,param_1 + 0x140);
      return;
    }
  }
  else {
    if (iVar2 == 0x2e4a) {
      FUN_140ba8460(param_2,param_1 + 0x1b8,param_3,param_4,0xfffffffffffffffe);
      return;
    }
    if (iVar2 == 0x2f2a) {
      cVar1 = FUN_140c37f30(param_2 + 0x438,param_1 + 0x147);
      if (cVar1 != '\0') {
        return;
      }
      FUN_140c35a00(param_2);
      return;
    }
    if (iVar2 == 0x2f5a) {
      cVar1 = FUN_140c37f30(param_2 + 0x438,param_1 + 0x212);
      if (cVar1 != '\0') {
        return;
      }
      FUN_140c35a00(param_2);
      return;
    }
    if (iVar2 == 0x316f) {
      cVar1 = FUN_140c37f30(param_2 + 0x438,param_1 + 0x148);
      if (cVar1 != '\0') {
        return;
      }
      FUN_140c35a00(param_2);
      return;
    }
  }
  if (iVar2 == 0xb) {
    FUN_140c36c70(param_2,param_1 + 0x10);
  }
  else {
    FUN_140c35600();
  }
  return;
}

