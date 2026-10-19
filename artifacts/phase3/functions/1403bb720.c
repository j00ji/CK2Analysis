
byte FUN_1403bb720(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  char local_res18 [8];
  undefined1 local_18 [4];
  undefined1 local_14 [12];
  
  if ((((param_3 == (longlong *)0x0) || ((int)param_3[9] == 0)) ||
      ((*(longlong *)(param_2 + 0xce0) != 0 && (*(int *)(*(longlong *)(param_2 + 0xce0) + 8) != 0)))
      ) || ((((cVar1 = (**(code **)(*param_3 + 0x68))(param_3), cVar1 == '\0' ||
              (0 < (int)param_3[0x14])) || (0 < *(int *)((longlong)param_3 + 0xb4))) ||
            (lVar2 = (**(code **)(*param_3 + 0x50))(param_3), *(longlong *)(lVar2 + 0x230) != 0))))
  {
    return 0;
  }
  FUN_1403ba150();
  lVar2 = FUN_1400cd630(param_4);
  cVar1 = (**(code **)(*(longlong *)(lVar2 + 0x10) + 8))(lVar2 + 0x10);
  if (cVar1 == '\0') {
    lVar2 = param_3[0x2e];
    if (lVar2 == 0) {
      lVar2 = FUN_1400d3090(param_3 + 0x2d);
      param_3[0x2c] = lVar2;
      param_3[0x2e] = lVar2;
      if (lVar2 == 0) {
        param_3[0x2e] = DAT_1416e2360;
      }
      lVar2 = param_3[0x2e];
    }
    cVar1 = FUN_14093ab90(param_2,lVar2,0);
    if (cVar1 == '\0') {
      plVar3 = (longlong *)FUN_140b9a450(param_3);
      lVar2 = param_3[0x2e];
      if (lVar2 == 0) {
        lVar2 = FUN_1400d3090(param_3 + 0x2d);
        param_3[0x2c] = lVar2;
        param_3[0x2e] = lVar2;
        if (lVar2 == 0) {
          param_3[0x2e] = DAT_1416e2360;
        }
        lVar2 = param_3[0x2e];
      }
      local_res18[0] = '\0';
      FUN_14025d050(*(undefined8 *)(*(longlong *)(param_2 + 0xd48) + 0x498),lVar2,local_res18,
                    local_18,local_14);
      if (local_res18[0] != '\0') {
        cVar1 = (**(code **)(*plVar3 + 0x30))();
        if ((cVar1 != '\0') &&
           (lVar2 = *(longlong *)(*(longlong *)(param_2 + 0xd48) + 0x498),
           plVar3 == *(longlong **)(lVar2 + 0x168))) {
          if ((*(longlong *)(lVar2 + 0x28) == 0) ||
             (lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x108), lVar6 == 0)) {
            lVar6 = *(longlong *)(lVar2 + 0x1a8);
            iVar5 = 0;
            lVar2 = *(longlong *)(lVar6 + 0x1a8);
            if (lVar6 != *(longlong *)(lVar6 + 0x1a8)) {
              do {
                lVar4 = lVar2;
                if (4 < iVar5) break;
                iVar5 = iVar5 + 1;
                lVar2 = *(longlong *)(lVar4 + 0x1a8);
                lVar6 = lVar4;
              } while (lVar4 != *(longlong *)(lVar4 + 0x1a8));
            }
          }
          lVar2 = *(longlong *)(lVar6 + 0x28);
          if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0xb0) == 0)) ||
             (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xb0) + 8),
             (*(longlong *)(lVar2 + 0x40) - *(longlong *)(lVar2 + 0x38) & 0xfffffffffffffff8U) == 0)
             ) {
            lVar2 = DAT_1416e3ad0;
            if (0 < (int)(*(longlong *)(lVar6 + 0x78) - *(longlong *)(lVar6 + 0x70) >> 3)) {
              lVar2 = **(longlong **)(lVar6 + 0x70);
            }
          }
          else {
            lVar2 = **(longlong **)(lVar2 + 0x38);
          }
          if ((*(char *)(lVar2 + 0x394) == '\0') && (*(char *)(lVar2 + 0x395) == '\0'))
          goto LAB_1403bb9ad;
        }
        (**(code **)(**(longlong **)(DAT_1416e3260 + 0x370) + 0x128))
                  (*(longlong **)(DAT_1416e3260 + 0x370),1,param_2);
        FUN_14093d100(param_2);
      }
    }
  }
LAB_1403bb9ad:
  lVar2 = FUN_1400cd630(param_4);
  cVar1 = (**(code **)(*(longlong *)(lVar2 + 0x10) + 8))(lVar2 + 0x10);
  return -(cVar1 != '\0') & 3;
}

