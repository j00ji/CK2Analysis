
void FUN_140132db0(int param_1,code *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = (longlong)param_1;
  if (*(longlong *)(param_3 + 0xd8) != 0) {
    (*param_2)(*(longlong *)(param_3 + 0xd8),param_3);
  }
  plVar1 = (longlong *)(&DAT_1417e7180)[lVar4 * 3];
  while (plVar3 = plVar1, plVar3 != (longlong *)0x0) {
    if (*plVar3 == 0) {
      plVar1 = (longlong *)plVar3[2];
      if (plVar3 != (longlong *)0x0) {
        if ((&DAT_1417e7194)[lVar4 * 0x18] == '\0') {
          lVar2 = plVar3[1];
          if (lVar2 != 0) {
            *(longlong **)(lVar2 + 0x10) = plVar1;
          }
          if (plVar1 != (longlong *)0x0) {
            plVar1[1] = lVar2;
          }
          if (plVar3 == (longlong *)(&DAT_1417e7180)[lVar4 * 3]) {
            (&DAT_1417e7180)[lVar4 * 3] = plVar1;
          }
          if (plVar3 == (longlong *)(&DAT_1417e7188)[lVar4 * 3]) {
            (&DAT_1417e7188)[lVar4 * 3] = lVar2;
          }
          thunk_FUN_140e1c5e4(plVar3,0x20);
          (&DAT_1417e7190)[lVar4 * 6] = (&DAT_1417e7190)[lVar4 * 6] + -1;
        }
        else {
          *(undefined1 *)(plVar3 + 3) = 1;
        }
      }
    }
    else {
      (*param_2)(*plVar3,param_3);
      plVar1 = (longlong *)plVar3[2];
    }
  }
  return;
}

