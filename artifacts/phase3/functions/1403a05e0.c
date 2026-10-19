
/* WARNING: Type propagation algorithm not settling */

void FUN_1403a05e0(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198 [4];
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  undefined1 local_178 [16];
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  undefined8 local_118;
  longlong *local_108;
  undefined1 local_f8 [16];
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  undefined1 local_98 [96];
  
  local_118 = 0xfffffffffffffffe;
  if (0 < *param_2) {
    FUN_14039cbf0(param_1,local_f8);
    iVar6 = local_e8 + local_e4 + local_e0 + local_dc + local_d8 + local_d4 + local_d0 + local_cc;
    if (0 < iVar6) {
      if (iVar6 == 0) {
        local_1a0 = -1;
        local_1a4 = -1;
      }
      else {
        iVar3 = *param_2;
        if (iVar3 + 0x189373U < 0x39580e) {
          local_1a0 = (iVar3 * 1000) / iVar6;
        }
        else {
          local_1a0 = (int)(((longlong)iVar3 * 1000) / (longlong)iVar6);
        }
        iVar3 = *param_3;
        if (iVar3 + 0x189373U < 0x39580e) {
          local_1a4 = (iVar3 * 1000) / iVar6;
        }
        else {
          local_1a4 = (int)(((longlong)iVar3 * 1000) / (longlong)iVar6);
        }
      }
      *(undefined4 *)(param_1 + 0xbc) = 0;
      iVar3 = (int)(*(longlong *)(param_1 + 0x88) - *(longlong *)(param_1 + 0x80) >> 3);
      lVar8 = 0;
      if (0 < iVar3) {
        do {
          piVar9 = (int *)(param_1 + 0x30);
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + lVar8 * 8);
          FUN_140a2dd60(lVar1,local_178,&local_1a0,&local_1a4,param_1);
          local_198[2] = 0;
          lVar7 = 8;
          do {
            local_198[3] = *(int *)(((longlong)local_198 - param_1) + (longlong)piVar9);
            *piVar9 = *piVar9 + local_198[3];
            local_188 = *piVar9;
            if (*piVar9 < 0) {
              *piVar9 = 0;
            }
            local_198[2] = local_198[2] + local_198[3];
            piVar9 = piVar9 + 1;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
          if (0 < DAT_1416e2638) {
            if (iVar6 == 0) {
              local_19c = -1;
            }
            else if (local_198[2] + 0x189373U < 0x39580e) {
              local_19c = (local_198[2] * 1000) / iVar6;
            }
            else {
              local_19c = (int)(((longlong)local_198[2] * 1000) / (longlong)iVar6);
            }
            local_198[0] = (int)(((longlong)local_19c * (longlong)DAT_1416e2638) / 1000);
            local_198[1] = 0;
            local_184 = local_198[0];
            FUN_140a2dd60(lVar1,local_98,local_198 + 1,local_198,param_1);
          }
          iVar4 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x60))();
          if ((((iVar4 == 1) && (*(longlong *)(lVar1 + 0x28) != 0)) &&
              (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x28) + 0x78), lVar1 != 0)) &&
             (*(int *)(lVar1 + 8) != 0)) {
            plVar5 = (longlong *)FUN_140b99c30();
            plVar2 = local_108;
            lVar1 = *plVar5;
            if (local_108 != (longlong *)0x0) {
              LOCK();
              plVar5 = local_108 + 1;
              lVar7 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*local_108)(local_108);
                LOCK();
                piVar9 = (int *)((longlong)plVar2 + 0xc);
                iVar4 = *piVar9;
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar2 + 8))(plVar2);
                }
              }
            }
            lVar1 = *(longlong *)(lVar1 + 0x10);
            *(int *)(lVar1 + 0x160) = *(int *)(lVar1 + 0x160) - local_168;
            if (*(int *)(param_1 + 0x50) < 0) {
              *(undefined4 *)(param_1 + 0x50) = 0;
            }
            *(int *)(lVar1 + 0x164) = *(int *)(lVar1 + 0x164) - local_164;
            if (*(int *)(param_1 + 0x54) < 0) {
              *(undefined4 *)(param_1 + 0x54) = 0;
            }
            *(int *)(lVar1 + 0x168) = *(int *)(lVar1 + 0x168) - local_160;
            if (*(int *)(param_1 + 0x58) < 0) {
              *(undefined4 *)(param_1 + 0x58) = 0;
            }
            *(int *)(lVar1 + 0x16c) = *(int *)(lVar1 + 0x16c) - local_15c;
            if (*(int *)(param_1 + 0x5c) < 0) {
              *(undefined4 *)(param_1 + 0x5c) = 0;
            }
            *(int *)(lVar1 + 0x170) = *(int *)(lVar1 + 0x170) - local_158;
            if (*(int *)(param_1 + 0x60) < 0) {
              *(undefined4 *)(param_1 + 0x60) = 0;
            }
            *(int *)(lVar1 + 0x174) = *(int *)(lVar1 + 0x174) - local_154;
            if (*(int *)(param_1 + 100) < 0) {
              *(undefined4 *)(param_1 + 100) = 0;
            }
            *(int *)(lVar1 + 0x178) = *(int *)(lVar1 + 0x178) - local_150;
            if (*(int *)(param_1 + 0x68) < 0) {
              *(undefined4 *)(param_1 + 0x68) = 0;
            }
            *(int *)(lVar1 + 0x17c) = *(int *)(lVar1 + 0x17c) - local_14c;
            local_180 = *(int *)(param_1 + 0x6c);
            if (local_180 < 0) {
              *(undefined4 *)(param_1 + 0x6c) = 0;
            }
          }
          local_17c = local_164 + local_168 + local_160 + local_15c + local_158 + local_154 +
                      local_150 + local_14c;
          iVar4 = local_17c / 1000;
          if (local_17c != iVar4 * 1000) {
            iVar4 = (uint)(0 < local_17c) + iVar4;
          }
          *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + (iVar4 * 1000) / 1000;
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar3);
      }
    }
  }
  return;
}

