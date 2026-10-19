
undefined8 *
FUN_14080e730(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  char local_30;
  undefined7 uStack_2f;
  undefined8 local_20;
  ulonglong local_18;
  
  uVar5 = 0xfffffffffffffffe;
  local_18 = 0xf;
  lVar4 = 0;
  local_20 = 0;
  local_30 = '\0';
  FUN_1400b0300(&local_30,"ChecksumTask",0xc,param_4,0xfffffffffffffffe);
  *param_1 = &PTR_FUN_14108ee58;
  puVar1 = param_1 + 1;
  pcVar3 = &local_30;
  if (0xf < local_18) {
    pcVar3 = (char *)CONCAT71(uStack_2f,local_30);
  }
  param_1[4] = 0xf;
  param_1[3] = 0;
  puVar2 = puVar1;
  if (0xf < (ulonglong)param_1[4]) {
    puVar2 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar2 = 0;
  if (*pcVar3 != '\0') {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (pcVar3[lVar4] != '\0');
  }
  FUN_1400b0300(puVar1,pcVar3,lVar4,param_4,uVar5);
  if (0xf < local_18) {
    FUN_1400b08c0(&local_30,CONCAT71(uStack_2f,local_30),local_18 + 1);
  }
  *param_1 = &PTR_FUN_1410defc0;
  param_1[5] = param_2;
  param_1[6] = param_3;
  return param_1;
}

