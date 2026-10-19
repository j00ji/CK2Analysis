
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140a2dd60(longlong param_1,ulonglong param_2,undefined4 *param_3,int *param_4,
                       longlong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong local_res10;
  undefined4 *local_res18;
  int *local_res20;
  undefined1 local_108 [208];
  
  lVar14 = 0;
  iVar11 = 0;
  local_res10 = param_2 & 0xffffffff00000000;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_140a2d5d0(param_1,local_108,&local_res10);
  lVar4 = param_5;
  lVar9 = *(longlong *)(*(longlong *)(param_5 + 0x10) + 0x28);
  lVar13 = lVar14;
  if (lVar9 != 0) {
    lVar13 = lVar9 + 0xbe4;
  }
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x28);
  if (lVar9 != 0) {
    lVar14 = lVar9 + 0xbe4;
  }
  iVar10 = 1000;
  iVar12 = 0x1e;
  if (lVar13 != 0) {
    iVar10 = *(int *)(lVar13 + 0x40) + 1000;
    if ((*(char *)(param_5 + 0xc0) != '\0') && (*(int *)(param_5 + 0xb4) == 2)) {
      iVar10 = iVar10 + *(int *)(lVar13 + 0x30);
    }
    if (*(longlong *)(param_5 + 0xa0) != 0) {
      piVar7 = (int *)FUN_140266520(lVar13,&param_5,
                                    *(undefined8 *)(*(longlong *)(param_5 + 0xa0) + 0x40));
      iVar10 = iVar10 + *piVar7;
    }
    iVar11 = *(int *)(lVar13 + 0x38);
    if (*(int *)(lVar4 + 0xb4) < 3) {
      iVar6 = *(int *)(&DAT_141061998 + (longlong)*(int *)(lVar4 + 0xb4) * 4);
    }
    else {
      iVar6 = 0x1e;
    }
    iVar10 = iVar10 + *(int *)(lVar13 + 0x18 + (longlong)iVar6 * 4);
  }
  if (lVar14 != 0) {
    iVar10 = iVar10 + *(int *)(lVar14 + 0x40);
    if ((*(char *)(lVar4 + 0xc0) != '\0') && (*(int *)(lVar4 + 0xb4) == 2)) {
      iVar10 = iVar10 + *(int *)(lVar14 + 0x30);
    }
    if (*(longlong *)(lVar4 + 0xa0) != 0) {
      piVar7 = (int *)FUN_140266520(lVar14,&param_5,
                                    *(undefined8 *)(*(longlong *)(lVar4 + 0xa0) + 0x40));
      iVar10 = iVar10 + *piVar7;
    }
    iVar11 = iVar11 + *(int *)(lVar14 + 0x38);
    if (*(int *)(lVar4 + 0xb4) < 3) {
      iVar12 = *(int *)(&DAT_141061998 + (longlong)*(int *)(lVar4 + 0xb4) * 4);
    }
    iVar10 = iVar10 + *(int *)(lVar14 + 0x18 + (longlong)iVar12 * 4);
  }
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x40))();
  if ((((cVar5 != '\0') && (*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x498) != 0)) &&
      (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x498),
      (*(byte *)(*(longlong *)(*(longlong *)(lVar9 + 0x130) + 0x88) + 0x196c) & 0x40) != 0)) &&
     (*(char *)(*(longlong *)(lVar9 + 0x168) + 0x1a14) != '\0')) {
    lVar9 = *(longlong *)(lVar9 + 0xc0);
    if (*(longlong *)(lVar9 + 0x48) < 0) {
      if (DAT_1418d76a8 == 0) {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = SUB168(SEXT816(0x40000000),8);
        DAT_1418d76a8 =
             SUB168((auVar1 << 0x40 | ZEXT816(0x40000000)) / SEXT816((longlong)_DAT_141164e00),0);
      }
      if (DAT_1418d76b0 == 0) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = SUB168(SEXT816(0x40000000),8);
        DAT_1418d76b0 =
             SUB168((auVar2 << 0x40 | ZEXT816(0x40000000)) / SEXT816((longlong)DAT_141164e08),0);
      }
      lVar13 = DAT_1418d76b0;
      if (*(longlong *)(lVar9 + 0x48) < 0) {
        lVar13 = DAT_1418d76a8;
      }
      lVar9 = SUB168(SEXT816(0x20c49ba5e353f7cf) *
                     SEXT816((longlong)DAT_1416e2a28 *
                             (longlong)
                             -(int)((*(longlong *)(lVar9 + 0x48) * lVar13 >> 0xf) * 0x1f40000 >>
                                   0x1e)),8);
    }
    else {
      plVar8 = (longlong *)FUN_140522160(lVar9,&param_5);
      lVar9 = SUB168(SEXT816(0x20c49ba5e353f7cf) *
                     SEXT816((longlong)DAT_1416e29f8 * (longlong)(int)(*plVar8 * 0x1f40000 >> 0x1e))
                     ,8);
    }
    iVar11 = iVar11 + ((int)(lVar9 >> 7) - (int)(lVar9 >> 0x3f));
  }
  uVar3 = local_res10;
  FUN_140848690(param_1 + 0x98,&local_res10,local_res10 & 0xffffffff,local_108);
  if ((int)local_res10 != 0) {
    iVar11 = 1000 - iVar11;
    if (iVar11 < 0) {
      iVar11 = 0;
    }
    iVar11 = (int)(((longlong)DAT_1416e2b18 *
                   (longlong)
                   (int)(((longlong)
                          (int)(((longlong)*local_res20 *
                                (longlong)
                                (*(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0xac) +
                                 *(int *)(param_1 + 0xb0) + *(int *)(param_1 + 0xb4) +
                                 *(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0xbc) +
                                 *(int *)(param_1 + 0xc0) + *(int *)(param_1 + 0xc4))) / 1000) *
                         (longlong)iVar11) / 1000)) / 1000);
    if (iVar11 + 0x189373U < 0x39580e) {
      iVar11 = (iVar11 * 1000) / (int)local_res10;
    }
    else {
      iVar11 = (int)(((longlong)iVar11 * 1000) / (longlong)(int)local_res10);
    }
    piVar7 = (int *)(param_1 + 0x40);
    *piVar7 = *piVar7 - iVar11;
    if (*piVar7 < 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    else if (1000 < *(int *)(param_1 + 0x40)) {
      *(undefined4 *)(param_1 + 0x40) = 1000;
    }
  }
  local_res10 = CONCAT44(local_res10._4_4_,iVar10);
  local_res18 = (undefined4 *)CONCAT44(local_res18._4_4_,*local_res18);
  FUN_140848850(param_1 + 0x98,param_2,&local_res18,uVar3 & 0xffffffff,local_108,
                *(undefined4 *)(lVar4 + 0xb4),&local_res10);
  return param_2;
}

