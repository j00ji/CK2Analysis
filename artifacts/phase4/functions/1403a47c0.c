
void FUN_1403a47c0(longlong param_1,longlong param_2)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  longlong *plVar10;
  int *piVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined4 local_418;
  undefined1 local_414 [512];
  undefined4 local_214;
  undefined1 local_210 [520];
  
  plVar10 = *(longlong **)(param_1 + 0x58);
  uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x28) + 0xe8);
  while ((*(longlong **)(param_1 + 0x58) <= plVar10 && (plVar10 < *(longlong **)(param_1 + 0x60))))
  {
    lVar13 = *plVar10;
    plVar10 = plVar10 + 1;
    uVar12 = *(undefined4 *)(lVar13 + 0x14);
    FUN_140c34e50(param_2,0x2829);
    local_214 = 0x14;
    FUN_1407f5cd0(local_210,&DAT_14114a580,uVar12);
    FUN_140c34490(param_2,&local_214);
    if (*(char *)(param_2 + 0x100) == '\0') {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
                (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
    }
  }
  plVar10 = *(longlong **)(param_1 + 0x70);
  while ((*(longlong **)(param_1 + 0x70) <= plVar10 && (plVar10 < *(longlong **)(param_1 + 0x78))))
  {
    lVar13 = *plVar10;
    plVar10 = plVar10 + 1;
    uVar12 = *(undefined4 *)(lVar13 + 0x14);
    FUN_140c34e50(param_2,0x282a);
    local_418 = 0x14;
    FUN_1407f5cd0(local_414,&DAT_14114a580,uVar12);
    FUN_140c34490(param_2,&local_418);
    if (*(char *)(param_2 + 0x100) == '\0') {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
                (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
    }
  }
  iVar9 = 0;
  lVar13 = DAT_1418d6ab0;
  if (((DAT_1418d6ab8 != 0) &&
      (uVar7 = *(uint *)(param_1 + 0x20) & 0xffffff, uVar7 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
     (lVar13 = *(longlong *)(*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar7 * 0x10),
     lVar13 == 0)) {
    lVar13 = DAT_1418d6ab0;
  }
  cVar6 = (**(code **)(*(longlong *)(lVar13 + 0x10) + 8))(lVar13 + 0x10);
  if (cVar6 != '\0') {
    piVar4 = *(int **)(*(longlong *)(param_1 + 0x28) + 0xce8);
    piVar5 = *(int **)(*(longlong *)(param_1 + 0x28) + 0xcf0);
    piVar11 = piVar4;
    if (piVar4 != piVar5) {
      do {
        if (*piVar11 == *(int *)(param_1 + 0x20)) break;
        piVar11 = piVar11 + 1;
      } while (piVar11 != piVar5);
    }
    iVar9 = (int)((longlong)piVar11 - (longlong)piVar4 >> 2);
    lVar13 = DAT_1418d6ab0;
    if (((DAT_1418d6ab8 != 0) &&
        (uVar7 = *(uint *)(param_1 + 0x20) & 0xffffff, uVar7 < *(uint *)(DAT_1418d6ab8 + 0x28))) &&
       (lVar13 = *(longlong *)(*(longlong *)(DAT_1418d6ab8 + 0x20) + 8 + (ulonglong)uVar7 * 0x10),
       lVar13 == 0)) {
      lVar13 = DAT_1418d6ab0;
    }
    if (*(int *)(lVar13 + 0x2c) == 7) {
      iVar9 = iVar9 + 1;
    }
  }
  FUN_140c34e50(param_2,0x27bc);
  local_418 = 0xc;
  FUN_1407f5cd0(local_414,&DAT_1410debe8,iVar9 * 100000 + (uint)uVar2);
  FUN_140c34490(param_2,&local_418);
  if (*(char *)(param_2 + 0x100) == '\0') {
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
              (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
  }
  sVar3 = *(short *)(*(longlong *)(param_1 + 0x30) + 0xe8);
  if (sVar3 != 0) {
    FUN_140c33c90(param_2,0x2791,sVar3);
  }
  uVar12 = *(undefined4 *)(param_1 + 0x38);
  FUN_140c34e50(param_2,0x7a);
  local_418 = 0xc;
  FUN_1407f5cd0(local_414,&DAT_1410debe8,uVar12);
  FUN_140c34490(param_2,&local_418);
  if (*(char *)(param_2 + 0x100) == '\0') {
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
              (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
  }
  plVar10 = *(longlong **)(param_1 + 0x10);
  FUN_140c34e50(param_2,0x282d);
  (**(code **)(*plVar10 + 8))(plVar10,param_2);
  plVar10 = *(longlong **)(param_1 + 0x18);
  FUN_140c34e50(param_2,0x282e);
  (**(code **)(*plVar10 + 8))(plVar10,param_2);
  lVar13 = *(longlong *)(param_1 + 0x40);
  if (lVar13 != 0) {
    FUN_140c34e50(param_2,0x27ac);
    FUN_140c33f00(param_2,lVar13 + 0x10,0);
  }
  uVar12 = *(undefined4 *)(param_1 + 0x88);
  FUN_140c34e50(param_2,0x2875);
  local_418 = 0xc;
  FUN_1407f5cd0(local_414,&DAT_1410debe8,uVar12);
  FUN_140c34490(param_2,&local_418);
  if (*(char *)(param_2 + 0x100) == '\0') {
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
              (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
  }
  if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
    pcVar8 = (char *)(**(code **)(**(longlong **)(param_1 + 0x90) + 0x38))();
    if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
      pcVar8 = *(char **)pcVar8;
    }
    lVar13 = (longlong)"river_crossing" - (longlong)pcVar8;
    do {
      cVar6 = *pcVar8;
      cVar1 = pcVar8[lVar13];
      if (cVar6 != cVar1) break;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    if (cVar6 == cVar1) {
      uVar12 = 0;
    }
    else {
      pcVar8 = (char *)(**(code **)(**(longlong **)(param_1 + 0x90) + 0x38))();
      if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
        pcVar8 = *(char **)pcVar8;
      }
      lVar13 = (longlong)"major_river_crossing" - (longlong)pcVar8;
      do {
        cVar6 = *pcVar8;
        cVar1 = pcVar8[lVar13];
        if (cVar6 != cVar1) break;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      if (cVar6 == cVar1) {
        uVar12 = 1;
      }
      else {
        pcVar8 = (char *)(**(code **)(**(longlong **)(param_1 + 0x90) + 0x38))();
        if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
          pcVar8 = *(char **)pcVar8;
        }
        lVar13 = (longlong)"strait_crossing" - (longlong)pcVar8;
        do {
          cVar6 = *pcVar8;
          cVar1 = pcVar8[lVar13];
          if (cVar6 != cVar1) break;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        if (cVar6 == cVar1) {
          uVar12 = 2;
        }
        else {
          pcVar8 = (char *)(**(code **)(**(longlong **)(param_1 + 0x90) + 0x38))();
          if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
            pcVar8 = *(char **)pcVar8;
          }
          lVar13 = (longlong)"amphibious_landing" - (longlong)pcVar8;
          do {
            cVar6 = *pcVar8;
            cVar1 = pcVar8[lVar13];
            if (cVar6 != cVar1) break;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          if (cVar6 != cVar1) {
            return;
          }
          uVar12 = 3;
        }
      }
    }
    FUN_140c33c90(param_2,0x28f0,uVar12);
  }
  return;
}

