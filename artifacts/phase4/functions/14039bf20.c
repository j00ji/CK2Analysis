
void FUN_14039bf20(longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  int local_res18 [2];
  longlong local_res20;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  
  if (param_3 < 0x2acb) {
    if (param_3 == 0x2aca) {
      iVar6 = FUN_14090fa40(param_2 + 0x43c,&DAT_14114a594,param_1 + 0xb8,param_4,0xfffffffffffffffe
                           );
      bVar11 = iVar6 == 0;
      goto LAB_14039c332;
    }
    if (param_3 < 0x283b) {
      if (param_3 == 0x283a) {
        local_res18[0] = 0;
        iVar6 = FUN_14090fa40(param_2 + 0x43c,&DAT_14114a594,local_res18,param_4,0xfffffffffffffffe)
        ;
        if (iVar6 == 0) {
          FUN_140c35a00(param_2);
        }
        *(int *)(param_1 + 0xb4) = local_res18[0];
        return;
      }
      if (param_3 == 0x6b) {
        local_res18[0] = 0;
        iVar6 = FUN_14090fa40(param_2 + 0x43c,&DAT_14114a594,local_res18,param_4,0xfffffffffffffffe)
        ;
        if (iVar6 == 0) {
          FUN_140c35a00(param_2);
        }
        *(int *)(param_1 + 0x7c) = local_res18[0];
        return;
      }
      if (param_3 == 0x27ff) {
        iVar6 = FUN_14090fa40(param_2 + 0x43c,&DAT_14114a594,local_res18,param_4,0xfffffffffffffffe)
        ;
        if (iVar6 == 0) {
          FUN_140c35a00(param_2);
        }
        if (DAT_1417e3b58 != 0) {
          for (plVar8 = *(longlong **)
                         (*(longlong *)(DAT_1417e3b58 + 8) +
                         ((ulonglong)(local_res18[0] + 0x420000) %
                         (ulonglong)*(uint *)(DAT_1417e3b58 + 4)) * 8); plVar8 != (longlong *)0x0;
              plVar8 = (longlong *)plVar8[1]) {
            lVar9 = *plVar8;
            if ((*(int *)(lVar9 + 0x14) == local_res18[0]) && (*(int *)(lVar9 + 0x10) == 0x42))
            goto LAB_14039c003;
          }
        }
        lVar9 = 0;
LAB_14039c003:
        *(longlong *)(param_1 + 0x10) = lVar9;
        return;
      }
      if (param_3 == 0x2830) {
        (**(code **)(*(longlong *)(param_1 + 0x20) + 0x18))();
        return;
      }
LAB_14039c21d:
      FUN_140c35600(param_2);
      return;
    }
    if (param_3 != 0x2842) {
      if (param_3 == 0x28c8) {
        local_40 = 0;
        lStack_38 = 0;
        lVar10 = 0;
        local_30 = 0;
        FUN_14016fbc0(param_2);
        lVar9 = local_40;
        iVar6 = (int)(lStack_38 - local_40 >> 2);
        if (0 < iVar6) {
          do {
            iVar2 = *(int *)(lVar9 + lVar10 * 4);
            if (DAT_1417e3b58 != 0) {
              for (plVar8 = *(longlong **)
                             (*(longlong *)(DAT_1417e3b58 + 8) +
                             ((ulonglong)(iVar2 + 0x3f0000) %
                             (ulonglong)*(uint *)(DAT_1417e3b58 + 4)) * 8);
                  plVar8 != (longlong *)0x0; plVar8 = (longlong *)plVar8[1]) {
                lVar3 = *plVar8;
                if ((*(int *)(lVar3 + 0x14) == iVar2) && (*(int *)(lVar3 + 0x10) == 0x3f)) {
                  local_res20 = lVar3;
                  if (lVar3 != 0) {
                    puVar1 = (ulonglong *)(param_1 + 0x80);
                    plVar8 = *(longlong **)(param_1 + 0x88);
                    if ((&local_res20 < plVar8) &&
                       (plVar4 = (longlong *)*puVar1, plVar4 <= &local_res20)) {
                      if (plVar8 == *(longlong **)(param_1 + 0x90)) {
                        FUN_1400ce170(puVar1);
                      }
                      if (*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0) {
                        **(undefined8 **)(param_1 + 0x88) =
                             *(undefined8 *)
                              (*puVar1 + ((longlong)&local_res20 - (longlong)plVar4 >> 3) * 8);
                      }
                    }
                    else {
                      if (plVar8 == *(longlong **)(param_1 + 0x90)) {
                        FUN_1400ce170(puVar1);
                      }
                      if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
                        **(longlong **)(param_1 + 0x88) = lVar3;
                      }
                    }
                    *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 8;
                  }
                  break;
                }
              }
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 < iVar6);
        }
        if (lVar9 == 0) {
          return;
        }
        FUN_1400b0c40(&local_40,lVar9,local_30 - lVar9 >> 2);
        return;
      }
      goto LAB_14039c21d;
    }
    param_1 = param_1 + 0xc0;
  }
  else if (param_3 == 0x2c1c) {
    param_1 = param_1 + 0xc1;
  }
  else {
    if (param_3 == 0x2d58) {
      iVar6 = FUN_14090fa40(param_2 + 0x43c,&DAT_14114a594,local_res18,param_4,0xfffffffffffffffe);
      if (iVar6 == 0) {
        FUN_140c35a00(param_2);
      }
      if (DAT_1417e3b58 != 0) {
        for (plVar8 = *(longlong **)
                       (*(longlong *)(DAT_1417e3b58 + 8) +
                       ((ulonglong)(local_res18[0] + 0x420000) %
                       (ulonglong)*(uint *)(DAT_1417e3b58 + 4)) * 8); plVar8 != (longlong *)0x0;
            plVar8 = (longlong *)plVar8[1]) {
          lVar9 = *plVar8;
          if ((*(int *)(lVar9 + 0x14) == local_res18[0]) && (*(int *)(lVar9 + 0x10) == 0x42))
          goto LAB_14039c317;
        }
      }
      lVar9 = 0;
LAB_14039c317:
      *(longlong *)(param_1 + 0x18) = lVar9;
      return;
    }
    if (param_3 == 0x2d59) {
      local_res18[0] = 0;
      iVar6 = FUN_14090fa40(param_2 + 0x43c,&DAT_14114a594,local_res18,param_4,0xfffffffffffffffe);
      if (iVar6 == 0) {
        FUN_140c35a00(param_2);
      }
      if ((local_res18[0] < 0) ||
         ((int)(*(longlong *)(DAT_1416e23d0 + 0x28) - *(longlong *)(DAT_1416e23d0 + 0x20) >> 3) <=
          local_res18[0])) {
        puVar7 = *(undefined8 **)(DAT_1416e23d0 + 0x20);
      }
      else {
        puVar7 = (undefined8 *)(*(longlong *)(DAT_1416e23d0 + 0x20) + (longlong)local_res18[0] * 8);
      }
      *(undefined8 *)(param_1 + 0xa8) = *puVar7;
      return;
    }
    if (param_3 == 0x2d5a) {
      FUN_1401554b0(param_2,param_1 + 0xb0);
      return;
    }
    if (param_3 != 0x2f78) goto LAB_14039c21d;
    param_1 = param_1 + 0xc2;
  }
  cVar5 = FUN_140c37f30(param_2 + 0x438,param_1);
  bVar11 = cVar5 == '\0';
LAB_14039c332:
  if (bVar11) {
    FUN_140c35a00(param_2);
  }
  return;
}

