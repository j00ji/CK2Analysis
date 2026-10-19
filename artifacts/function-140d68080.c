
undefined8 FUN_140d68080(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  char local_a8;
  undefined7 uStack_a7;
  undefined8 local_98;
  ulonglong local_90;
  char local_88;
  undefined7 uStack_87;
  undefined8 local_78;
  ulonglong local_70;
  undefined **local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  lVar1 = PHYSFS_read(*(undefined8 *)(param_1 + 0x38),param_2,1,param_3);
  if (lVar1 == param_3) {
    return 1;
  }
  pcVar2 = (char *)PHYSFS_getLastError();
  local_70 = 0xf;
  lVar1 = 0;
  local_78 = 0;
  local_88 = '\0';
  if (*pcVar2 == '\0') {
    lVar3 = 0;
  }
  else {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (pcVar2[lVar3] != '\0');
  }
  FUN_1400b0300(&local_88,pcVar2,lVar3);
  local_90 = 0xf;
  local_98 = 0;
  local_a8 = '\0';
  FUN_1400b0300(&local_a8,
                "D:\\jenkins\\workspace\\ck2-steam\\clausewitz\\pdx_core\\virtualfilesystem.cpp");
  local_68 = &PTR_FUN_1410d8908;
  local_60 = 0x347;
  pcVar2 = &local_a8;
  if (0xf < local_90) {
    pcVar2 = (char *)CONCAT71(uStack_a7,local_a8);
  }
  local_40 = 0xf;
  local_48 = 0;
  local_58[0] = 0;
  lVar3 = lVar1;
  if (*pcVar2 != '\0') {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (pcVar2[lVar3] != '\0');
  }
  FUN_1400b0300(local_58,pcVar2,lVar3);
  pcVar2 = &local_88;
  if (0xf < local_70) {
    pcVar2 = (char *)CONCAT71(uStack_87,local_88);
  }
  local_20 = 0xf;
  local_28 = 0;
  local_38[0] = 0;
  if (*pcVar2 != '\0') {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (pcVar2[lVar1] != '\0');
  }
  FUN_1400b0300(local_38,pcVar2,lVar1);
  local_68 = &PTR_FUN_1410d8908;
                    /* WARNING: Subroutine does not return */
  FUN_140e3d190(&local_68,&DAT_141442840);
}


