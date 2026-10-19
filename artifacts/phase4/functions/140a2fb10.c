
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * FUN_140a2fb10(void *param_1)

{
  char *pcVar1;
  char **ppcVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  char *local_68 [4];
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  
  lVar3 = 8;
  _eh_vector_constructor_iterator_
            (param_1,0x40,8,(_func_void_void_ptr *)&LAB_140a2fcf0,FUN_1400ae4f0);
  ppcVar2 = local_68;
  puVar4 = (undefined4 *)((longlong)param_1 + 0x3c);
  lVar8 = 0;
  lVar7 = 0;
  pvVar6 = param_1;
  do {
    local_68[0] = "LIGHT_INFANTRY";
    local_68[1] = "HEAVY_INFANTRY";
    local_68[2] = "PIKEMEN";
    local_68[3] = "LIGHT_CAVALRY";
    local_48 = "KNIGHTS";
    local_40 = "ARCHERS";
    local_38 = "SPECIAL_TROOPS";
    local_30 = "GALLEYS";
    pcVar1 = *ppcVar2;
    if (*pcVar1 == '\0') {
      lVar5 = 0;
    }
    else {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (pcVar1[lVar5] != '\0');
    }
    FUN_1400b0300(pvVar6,pcVar1,lVar5);
    local_68[0] = _DAT_141165250;
    local_68[1] = (char *)_UNK_141165258;
    local_68[2] = (char *)_DAT_141165260;
    local_68[3] = (char *)_UNK_141165268;
    puVar4[-7] = *(undefined4 *)((longlong)local_68 + lVar8);
    *puVar4 = *(undefined4 *)((longlong)&DAT_1417eae00 + lVar8);
    puVar4[-6] = *(undefined4 *)((longlong)&DAT_1417ead80 + lVar7);
    puVar4[-3] = *(undefined4 *)((longlong)&DAT_1417eacf0 + lVar7);
    puVar4[-5] = *(undefined4 *)((longlong)&DAT_1417ead84 + lVar7);
    puVar4[-2] = *(undefined4 *)((longlong)&DAT_1417eacf4 + lVar7);
    puVar4[-4] = *(undefined4 *)((longlong)&DAT_1417ead88 + lVar7);
    puVar4[-1] = *(undefined4 *)((longlong)&DAT_1417eacf8 + lVar7);
    pvVar6 = (void *)((longlong)pvVar6 + 0x40);
    ppcVar2 = ppcVar2 + 1;
    lVar8 = lVar8 + 4;
    puVar4 = puVar4 + 0x10;
    lVar7 = lVar7 + 0xc;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return param_1;
}

