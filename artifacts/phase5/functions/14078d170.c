
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14078d170(longlong param_1,int param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  char cVar6;
  uint uVar7;
  int *piVar8;
  ulonglong uVar9;
  undefined ***pppuVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  undefined **local_508;
  undefined4 local_500;
  int local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  int local_4c0;
  undefined4 local_4bc;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined8 local_498;
  undefined **local_488 [14];
  undefined **local_418 [14];
  undefined **local_3a8 [14];
  undefined **local_338 [14];
  undefined **local_2c8 [14];
  undefined **local_258 [14];
  undefined **local_1e8 [14];
  undefined **local_178 [14];
  undefined **local_108 [14];
  undefined **local_98 [14];
  
  local_498 = 0xfffffffffffffffe;
  uVar9 = 0;
  puVar1 = (ulonglong *)(param_1 + 0x510);
  iVar11 = (int)((longlong)(*(longlong *)(param_1 + 0x518) - *puVar1) / 0x70);
  if (0 < iVar11) {
    uVar2 = *puVar1;
    piVar8 = (int *)(uVar2 + 0x48);
    uVar15 = uVar9;
    do {
      iVar14 = (int)uVar15;
      if (*piVar8 == param_2) {
        iVar11 = *(int *)(param_3 + 0x14);
        if (iVar11 != 0) {
          lVar12 = (longlong)iVar14 * 0x70 + uVar2;
          FUN_1406d74b0(lVar12);
          *(int *)(lVar12 + 0x10) = iVar11;
          return;
        }
        lVar12 = *(longlong *)(param_3 + 0x48);
        if ((*(byte *)(lVar12 + 0x1e9) & 2) != 0) {
          lVar13 = (longlong)iVar14 * 0x70 + uVar2;
          FUN_1406d74b0(lVar13);
          *(longlong *)(lVar13 + 0x18) = lVar12;
          if ((*(byte *)(lVar12 + 0x1e9) & 2) == 0) {
            return;
          }
          LOCK();
          *(int *)(lVar12 + 0x1c0) = *(int *)(lVar12 + 0x1c0) + 1;
          UNLOCK();
          return;
        }
        cVar6 = (**(code **)(**(longlong **)(param_3 + 0x60) + 0x40))();
        if (cVar6 != '\0') {
          plVar3 = *(longlong **)(param_3 + 0x60);
          lVar12 = (longlong)iVar14 * 0x70 + *puVar1;
          FUN_1406d74b0(lVar12);
          *(longlong **)(lVar12 + 0x38) = plVar3;
          cVar6 = (**(code **)(*plVar3 + 0x40))(plVar3);
          if (cVar6 == '\0') {
            return;
          }
          LOCK();
          piVar8 = (int *)(*(longlong *)(lVar12 + 0x38) + 0x948);
          *piVar8 = *piVar8 + 1;
          UNLOCK();
          return;
        }
        cVar6 = (**(code **)(**(longlong **)(param_3 + 0xa0) + 0x30))();
        if (cVar6 != '\0') {
          uVar4 = *(undefined8 *)(param_3 + 0xa0);
          lVar12 = (longlong)iVar14 * 0x70 + *puVar1;
          FUN_1406d74b0(lVar12);
          *(undefined8 *)(lVar12 + 0x40) = uVar4;
          return;
        }
        if (*(uint *)(param_3 + 0x18) != 0xffffffff) {
          lVar12 = DAT_1418d6b08;
          if (((DAT_1418d6b00 != 0) &&
              (uVar7 = *(uint *)(param_3 + 0x18) & 0xffffff, uVar7 < *(uint *)(DAT_1418d6b00 + 0x28)
              )) && (lVar12 = *(longlong *)
                               (*(longlong *)(DAT_1418d6b00 + 0x20) + 8 + (ulonglong)uVar7 * 0x10),
                    lVar12 == 0)) {
            lVar12 = DAT_1418d6b08;
          }
          FUN_1406d75b0((longlong)iVar14 * 0x70 + *puVar1,lVar12);
          return;
        }
        if (*(uint *)(param_3 + 0x34) != 0xffffffff) {
          lVar12 = DAT_1418d6b60;
          if (((DAT_1418d6b58 != 0) &&
              (uVar7 = *(uint *)(param_3 + 0x34) & 0xffffff, uVar7 < *(uint *)(DAT_1418d6b58 + 0x28)
              )) && (lVar12 = *(longlong *)
                               (*(longlong *)(DAT_1418d6b58 + 0x20) + 8 + (ulonglong)uVar7 * 0x10),
                    lVar12 == 0)) {
            lVar12 = DAT_1418d6b60;
          }
          FUN_1406d7630((longlong)iVar14 * 0x70 + *puVar1,lVar12);
          return;
        }
        lVar12 = DAT_1418d6ac8;
        if (((DAT_1418d6ad8 != 0) &&
            (uVar7 = *(uint *)(param_3 + 0x3c) & 0xffffff, uVar7 < *(uint *)(DAT_1418d6ad8 + 0x28)))
           && (lVar12 = *(longlong *)
                         (*(longlong *)(DAT_1418d6ad8 + 0x20) + 8 + (ulonglong)uVar7 * 0x10),
              lVar12 == 0)) {
          lVar12 = DAT_1418d6ac8;
        }
        cVar6 = (**(code **)(*(longlong *)(lVar12 + 0x10) + 8))();
        if (cVar6 != '\0') {
          lVar12 = DAT_1418d6ac8;
          if (((DAT_1418d6ad8 != 0) &&
              (uVar7 = *(uint *)(param_3 + 0x3c) & 0xffffff, uVar7 < *(uint *)(DAT_1418d6ad8 + 0x28)
              )) && (lVar12 = *(longlong *)
                               (*(longlong *)(DAT_1418d6ad8 + 0x20) + 8 + (ulonglong)uVar7 * 0x10),
                    lVar12 == 0)) {
            lVar12 = DAT_1418d6ac8;
          }
          FUN_1406d7670((longlong)iVar14 * 0x70 + *puVar1,lVar12);
          return;
        }
        lVar12 = DAT_1418d6b70;
        if (((DAT_1418d6b68 != 0) &&
            (uVar7 = *(uint *)(param_3 + 0x40) & 0xffffff, uVar7 < *(uint *)(DAT_1418d6b68 + 0x28)))
           && (lVar12 = *(longlong *)
                         (*(longlong *)(DAT_1418d6b68 + 0x20) + 8 + (ulonglong)uVar7 * 0x10),
              lVar12 == 0)) {
          lVar12 = DAT_1418d6b70;
        }
        cVar6 = (**(code **)(*(longlong *)(lVar12 + 0x10) + 8))();
        if (cVar6 != '\0') {
          lVar12 = DAT_1418d6b70;
          if (((DAT_1418d6b68 != 0) &&
              (uVar7 = *(uint *)(param_3 + 0x40) & 0xffffff, uVar7 < *(uint *)(DAT_1418d6b68 + 0x28)
              )) && (lVar12 = *(longlong *)
                               (*(longlong *)(DAT_1418d6b68 + 0x20) + 8 + (ulonglong)uVar7 * 0x10),
                    lVar12 == 0)) {
            lVar12 = DAT_1418d6b70;
          }
          FUN_1406d76b0((longlong)iVar14 * 0x70 + *puVar1,lVar12);
          return;
        }
        cVar6 = (**(code **)(**(longlong **)(param_3 + 0x28) + 0x30))();
        if (cVar6 != '\0') {
          uVar4 = *(undefined8 *)(param_3 + 0x28);
          lVar12 = (longlong)iVar14 * 0x70 + *puVar1;
          FUN_1406d74b0(lVar12);
          *(undefined8 *)(lVar12 + 0x50) = uVar4;
          return;
        }
        cVar6 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x30))();
        if (cVar6 != '\0') {
          uVar4 = *(undefined8 *)(param_3 + 0x20);
          lVar12 = (longlong)iVar14 * 0x70 + *puVar1;
          FUN_1406d74b0(lVar12);
          *(undefined8 *)(lVar12 + 0x58) = uVar4;
          return;
        }
        if (*(uint *)(param_3 + 0x30) == 0xffffffff) {
          return;
        }
        lVar12 = DAT_1418d6b28;
        if (((DAT_1418d6b48 != 0) &&
            (uVar7 = *(uint *)(param_3 + 0x30) & 0xffffff, uVar7 < *(uint *)(DAT_1418d6b48 + 0x28)))
           && (lVar12 = *(longlong *)
                         (*(longlong *)(DAT_1418d6b48 + 0x20) + 8 + (ulonglong)uVar7 * 0x10),
              lVar12 == 0)) {
          lVar12 = DAT_1418d6b28;
        }
        FUN_1406d75f0((longlong)iVar14 * 0x70 + *puVar1,lVar12);
        return;
      }
      uVar15 = (ulonglong)(iVar14 + 1);
      uVar9 = uVar9 + 1;
      piVar8 = piVar8 + 0x1c;
    } while ((longlong)uVar9 < (longlong)iVar11);
  }
  iVar11 = *(int *)(param_3 + 0x14);
  if (iVar11 == 0) {
    if ((*(byte *)(*(longlong *)(param_3 + 0x48) + 0x1e9) & 2) == 0) {
      cVar6 = (**(code **)(**(longlong **)(param_3 + 0x60) + 0x40))();
      if (cVar6 == '\0') {
        cVar6 = (**(code **)(**(longlong **)(param_3 + 0xa0) + 0x30))();
        if (cVar6 == '\0') {
          if (*(uint *)(param_3 + 0x18) == 0xffffffff) {
            if (*(uint *)(param_3 + 0x34) == 0xffffffff) {
              lVar12 = DAT_1418d6ac8;
              if (((DAT_1418d6ad8 != 0) &&
                  (uVar7 = *(uint *)(param_3 + 0x3c) & 0xffffff,
                  uVar7 < *(uint *)(DAT_1418d6ad8 + 0x28))) &&
                 (lVar12 = *(longlong *)
                            (*(longlong *)(DAT_1418d6ad8 + 0x20) + 8 + (ulonglong)uVar7 * 0x10),
                 lVar12 == 0)) {
                lVar12 = DAT_1418d6ac8;
              }
              cVar6 = (**(code **)(*(longlong *)(lVar12 + 0x10) + 8))();
              if (cVar6 == '\0') {
                lVar12 = DAT_1418d6b70;
                if (((DAT_1418d6b68 != 0) &&
                    (uVar7 = *(uint *)(param_3 + 0x40) & 0xffffff,
                    uVar7 < *(uint *)(DAT_1418d6b68 + 0x28))) &&
                   (lVar12 = *(longlong *)
                              (*(longlong *)(DAT_1418d6b68 + 0x20) + 8 + (ulonglong)uVar7 * 0x10),
                   lVar12 == 0)) {
                  lVar12 = DAT_1418d6b70;
                }
                cVar6 = (**(code **)(*(longlong *)(lVar12 + 0x10) + 8))();
                if (cVar6 == '\0') {
                  cVar6 = (**(code **)(**(longlong **)(param_3 + 0x28) + 0x30))();
                  if (cVar6 == '\0') {
                    cVar6 = (**(code **)(**(longlong **)(param_3 + 0x20) + 0x30))();
                    if (cVar6 == '\0') {
                      if (*(uint *)(param_3 + 0x30) == 0xffffffff) {
                        return;
                      }
                      lVar12 = DAT_1418d6b28;
                      if (((DAT_1418d6b48 != 0) &&
                          (uVar7 = *(uint *)(param_3 + 0x30) & 0xffffff,
                          uVar7 < *(uint *)(DAT_1418d6b48 + 0x28))) &&
                         (lVar12 = *(longlong *)
                                    (*(longlong *)(DAT_1418d6b48 + 0x20) + 8 +
                                    (ulonglong)uVar7 * 0x10), lVar12 == 0)) {
                        lVar12 = DAT_1418d6b28;
                      }
                      FUN_1406d6ea0(local_98,param_2,lVar12);
                      FUN_1406d8fa0(puVar1,local_98);
                      pppuVar10 = local_98;
                    }
                    else {
                      FUN_1406d6df0(local_108,param_2,*(undefined8 *)(param_3 + 0x20));
                      FUN_1406d8fa0(puVar1,local_108);
                      pppuVar10 = local_108;
                    }
                  }
                  else {
                    FUN_1406d6d40(local_178,param_2,*(undefined8 *)(param_3 + 0x28));
                    FUN_1406d8fa0(puVar1,local_178);
                    pppuVar10 = local_178;
                  }
                }
                else {
                  lVar12 = DAT_1418d6b70;
                  if (((DAT_1418d6b68 != 0) &&
                      (uVar7 = *(uint *)(param_3 + 0x40) & 0xffffff,
                      uVar7 < *(uint *)(DAT_1418d6b68 + 0x28))) &&
                     (lVar12 = *(longlong *)
                                (*(longlong *)(DAT_1418d6b68 + 0x20) + 8 + (ulonglong)uVar7 * 0x10),
                     lVar12 == 0)) {
                    lVar12 = DAT_1418d6b70;
                  }
                  FUN_1406d7220(local_1e8,param_2,lVar12);
                  FUN_1406d8fa0(puVar1,local_1e8);
                  pppuVar10 = local_1e8;
                }
              }
              else {
                lVar12 = DAT_1418d6ac8;
                if (((DAT_1418d6ad8 != 0) &&
                    (uVar7 = *(uint *)(param_3 + 0x3c) & 0xffffff,
                    uVar7 < *(uint *)(DAT_1418d6ad8 + 0x28))) &&
                   (lVar12 = *(longlong *)
                              (*(longlong *)(DAT_1418d6ad8 + 0x20) + 8 + (ulonglong)uVar7 * 0x10),
                   lVar12 == 0)) {
                  lVar12 = DAT_1418d6ac8;
                }
                FUN_1406d7150(local_258,param_2,lVar12);
                FUN_1406d8fa0(puVar1,local_258);
                pppuVar10 = local_258;
              }
            }
            else {
              lVar12 = DAT_1418d6b60;
              if (((DAT_1418d6b58 != 0) &&
                  (uVar7 = *(uint *)(param_3 + 0x34) & 0xffffff,
                  uVar7 < *(uint *)(DAT_1418d6b58 + 0x28))) &&
                 (lVar12 = *(longlong *)
                            (*(longlong *)(DAT_1418d6b58 + 0x20) + 8 + (ulonglong)uVar7 * 0x10),
                 lVar12 == 0)) {
                lVar12 = DAT_1418d6b60;
              }
              FUN_1406d7080(local_2c8,param_2,lVar12);
              FUN_1406d8fa0(puVar1,local_2c8);
              pppuVar10 = local_2c8;
            }
          }
          else {
            lVar12 = DAT_1418d6b08;
            if (((DAT_1418d6b00 != 0) &&
                (uVar7 = *(uint *)(param_3 + 0x18) & 0xffffff,
                uVar7 < *(uint *)(DAT_1418d6b00 + 0x28))) &&
               (lVar12 = *(longlong *)
                          (*(longlong *)(DAT_1418d6b00 + 0x20) + 8 + (ulonglong)uVar7 * 0x10),
               lVar12 == 0)) {
              lVar12 = DAT_1418d6b08;
            }
            FUN_1406d6c80(local_338,param_2,lVar12);
            pppuVar10 = *(undefined ****)(param_1 + 0x518);
            if ((local_338 < pppuVar10) &&
               (pppuVar5 = (undefined ***)*puVar1, pppuVar5 <= local_338)) {
              if (pppuVar10 == *(undefined ****)(param_1 + 0x520)) {
                FUN_1406d9060(puVar1);
              }
              if (*(longlong *)(param_1 + 0x518) != 0) {
                FUN_1406d6f70(*(longlong *)(param_1 + 0x518),
                              (((longlong)local_338 - (longlong)pppuVar5) / 0x70) * 0x70 + *puVar1);
              }
            }
            else {
              if (pppuVar10 == *(undefined ****)(param_1 + 0x520)) {
                FUN_1406d9060(puVar1);
              }
              if (*(longlong *)(param_1 + 0x518) != 0) {
                FUN_1406d6f70(*(longlong *)(param_1 + 0x518),local_338);
              }
            }
            *(longlong *)(param_1 + 0x518) = *(longlong *)(param_1 + 0x518) + 0x70;
            pppuVar10 = local_338;
          }
        }
        else {
          FUN_1406d6bd0(local_3a8,param_2,*(undefined8 *)(param_3 + 0xa0));
          pppuVar10 = *(undefined ****)(param_1 + 0x518);
          if ((local_3a8 < pppuVar10) && (pppuVar5 = (undefined ***)*puVar1, pppuVar5 <= local_3a8))
          {
            if (pppuVar10 == *(undefined ****)(param_1 + 0x520)) {
              FUN_1406d9060(puVar1);
            }
            if (*(longlong *)(param_1 + 0x518) != 0) {
              FUN_1406d6f70(*(longlong *)(param_1 + 0x518),
                            (((longlong)local_3a8 - (longlong)pppuVar5) / 0x70) * 0x70 + *puVar1);
            }
          }
          else {
            if (pppuVar10 == *(undefined ****)(param_1 + 0x520)) {
              FUN_1406d9060(puVar1);
            }
            if (*(longlong *)(param_1 + 0x518) != 0) {
              FUN_1406d6f70(*(longlong *)(param_1 + 0x518),local_3a8);
            }
          }
          *(longlong *)(param_1 + 0x518) = *(longlong *)(param_1 + 0x518) + 0x70;
          pppuVar10 = local_3a8;
        }
      }
      else {
        FUN_1406d6af0(local_418,param_2,*(undefined8 *)(param_3 + 0x60));
        pppuVar10 = *(undefined ****)(param_1 + 0x518);
        if ((local_418 < pppuVar10) && (pppuVar5 = (undefined ***)*puVar1, pppuVar5 <= local_418)) {
          if (pppuVar10 == *(undefined ****)(param_1 + 0x520)) {
            FUN_1406d9060(puVar1);
          }
          if (*(longlong *)(param_1 + 0x518) != 0) {
            FUN_1406d6f70(*(longlong *)(param_1 + 0x518),
                          (((longlong)local_418 - (longlong)pppuVar5) / 0x70) * 0x70 + *puVar1);
          }
        }
        else {
          if (pppuVar10 == *(undefined ****)(param_1 + 0x520)) {
            FUN_1406d9060(puVar1);
          }
          if (*(longlong *)(param_1 + 0x518) != 0) {
            FUN_1406d6f70(*(longlong *)(param_1 + 0x518),local_418);
          }
        }
        *(longlong *)(param_1 + 0x518) = *(longlong *)(param_1 + 0x518) + 0x70;
        pppuVar10 = local_418;
      }
    }
    else {
      FUN_1406d6a30(local_488,param_2);
      pppuVar10 = *(undefined ****)(param_1 + 0x518);
      if ((local_488 < pppuVar10) && (pppuVar5 = (undefined ***)*puVar1, pppuVar5 <= local_488)) {
        if (pppuVar10 == *(undefined ****)(param_1 + 0x520)) {
          FUN_1406d9060(puVar1);
        }
        if (*(longlong *)(param_1 + 0x518) != 0) {
          FUN_1406d6f70(*(longlong *)(param_1 + 0x518),
                        (((longlong)local_488 - (longlong)pppuVar5) / 0x70) * 0x70 + *puVar1);
        }
      }
      else {
        if (pppuVar10 == *(undefined ****)(param_1 + 0x520)) {
          FUN_1406d9060(puVar1);
        }
        if (*(longlong *)(param_1 + 0x518) != 0) {
          FUN_1406d6f70(*(longlong *)(param_1 + 0x518),local_488);
        }
      }
      *(longlong *)(param_1 + 0x518) = *(longlong *)(param_1 + 0x518) + 0x70;
      pppuVar10 = local_488;
    }
  }
  else {
    local_500 = 0x18e;
    local_508 = &PTR_FUN_1410d0bb8;
    local_4f0 = DAT_1416e2360;
    local_4e8 = 0;
    local_4e0 = 0;
    local_4d8 = 0;
    local_4d0 = DAT_1416e3ad0;
    local_4c8 = DAT_1418d6b30;
    local_4bc = 0xffffffff;
    local_4b8 = DAT_1416e39f8;
    local_4b0 = DAT_1416e2418;
    local_4a8 = 0xffffffffffffffff;
    if (DAT_1418d6ac8 == 0) {
      local_4a0 = 0xffffffff;
    }
    else {
      local_4a0 = *(undefined4 *)(DAT_1418d6ac8 + 0x18);
    }
    if (DAT_1418d6b70 == 0) {
      local_49c = 0xffffffff;
    }
    else {
      local_49c = *(undefined4 *)(DAT_1418d6b70 + 0x18);
    }
    _DAT_1416e3224 = _DAT_1416e3224 + 1;
    pppuVar10 = *(undefined ****)(param_1 + 0x518);
    local_4f8 = iVar11;
    local_4c0 = param_2;
    if ((&local_508 < pppuVar10) && (pppuVar5 = (undefined ***)*puVar1, pppuVar5 <= &local_508)) {
      if (pppuVar10 == *(undefined ****)(param_1 + 0x520)) {
        FUN_1406d9060(puVar1);
      }
      if (*(longlong *)(param_1 + 0x518) != 0) {
        FUN_1406d6f70(*(longlong *)(param_1 + 0x518),
                      (((longlong)&local_508 - (longlong)pppuVar5) / 0x70) * 0x70 + *puVar1);
      }
    }
    else {
      if (pppuVar10 == *(undefined ****)(param_1 + 0x520)) {
        FUN_1406d9060(puVar1);
      }
      if (*(longlong *)(param_1 + 0x518) != 0) {
        FUN_1406d6f70(*(longlong *)(param_1 + 0x518),&local_508);
      }
    }
    *(longlong *)(param_1 + 0x518) = *(longlong *)(param_1 + 0x518) + 0x70;
    pppuVar10 = &local_508;
  }
  FUN_1406d73f0(pppuVar10);
  return;
}

