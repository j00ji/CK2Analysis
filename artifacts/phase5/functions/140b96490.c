
void FUN_140b96490(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  int local_res8;
  undefined4 local_resc;
  undefined4 local_248 [4];
  undefined4 local_238;
  undefined1 local_234 [524];
  
  FUN_140c34e50(param_2,0xb);
  FUN_140c337a0(param_2,param_1 + 0x10);
  FUN_140c34e50(param_2,0x1b);
  FUN_140c33f00(param_2,param_1 + 0xa8,0);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_140c33c90(param_2,0x28aa,*(undefined2 *)(*(longlong *)(param_1 + 0x78) + 0xe8));
  }
  puVar10 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)(param_1 + 0x28);
  if (param_1 == 0x10) {
    puVar5 = puVar10;
  }
  puVar5 = (undefined8 *)*puVar5;
  while (puVar5 != (undefined8 *)0x0) {
    plVar6 = (longlong *)*puVar5;
    puVar5 = (undefined8 *)puVar5[2];
    FUN_140c34e50(param_2,0x28c8);
    (**(code **)(*plVar6 + 8))(plVar6,param_2);
  }
  if (*(int *)(param_1 + 0xa0) != 0) {
    local_res8 = *(int *)(param_1 + 0xa0);
    FUN_140c33980(param_2,0x27f3,&local_res8);
  }
  FUN_14037ef90(param_2,0x19d,param_1 + 0x80);
  uVar2 = *(undefined2 *)(*(longlong *)(param_1 + 0x70) + 0xe8);
  FUN_140c34e50(param_2,0x27bc);
  local_238 = 0xc;
  FUN_1407f5cd0(local_234,&DAT_1410debe8,uVar2);
  FUN_140c34490(param_2,&local_238);
  if (*(char *)(param_2 + 0x100) == '\0') {
    (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
              (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
  }
  if (*(longlong *)(param_1 + 0x110) != *(longlong *)(param_1 + 0x108)) {
    FUN_1409ee7f0(param_2,0x2c89,*(undefined8 *)(param_1 + 0x108),
                  (int)*(longlong *)(param_1 + 0x110) - *(int *)(param_1 + 0x108));
  }
  local_248[0] = 0x2c8a;
  puVar11 = local_248;
  local_248[1] = 0x2c8b;
  plVar6 = (longlong *)(param_1 + 0x120);
  local_248[2] = 0x2c8c;
  lVar9 = 3;
  do {
    if ((*(byte *)(*plVar6 + 0x1e9) & 2) != 0) {
      uVar3 = *(undefined4 *)(*plVar6 + 0x14);
      FUN_140c34e50(param_2,*puVar11);
      local_238 = 0x14;
      FUN_1407f5cd0(local_234,&DAT_14114a580,uVar3);
      FUN_140c34490(param_2,&local_238);
      if (*(char *)(param_2 + 0x100) == '\0') {
        (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
                  (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
      }
    }
    plVar6 = plVar6 + 1;
    puVar11 = puVar11 + 1;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  iVar4 = *(int *)(param_1 + 0xa4);
  if (0 < iVar4) {
    FUN_140c34e50(param_2,0x2842);
    local_238 = 0xc;
    FUN_1407f5cd0(local_234,&DAT_1410debe8,iVar4);
    FUN_140c34490(param_2,&local_238);
    if (*(char *)(param_2 + 0x100) == '\0') {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
                (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
    }
  }
  if ((*(longlong *)(param_1 + 0x1a0) - *(longlong *)(param_1 + 0x198) & 0xfffffffffffffff8U) != 0)
  {
    FUN_140184030(param_2,0x2e4a);
    plVar6 = *(longlong **)(param_2 + 0x10);
    if (*(char *)(param_2 + 0x100) == '\0') {
      (**(code **)(*plVar6 + 0x30))(plVar6,param_2 + 0x80);
    }
    else {
      (**(code **)(*plVar6 + 0x48))(plVar6,param_2 + 0x18,2);
    }
    plVar6 = *(longlong **)(param_2 + 0x10);
    if (*(char *)(param_2 + 0x100) == '\0') {
      (**(code **)(*plVar6 + 0x30))(plVar6,param_2 + 0xa0);
    }
    else {
      (**(code **)(*plVar6 + 0x48))(plVar6,param_2 + 0x1a,2);
    }
    iVar4 = (int)(*(longlong *)(param_1 + 0x1a0) - *(longlong *)(param_1 + 0x198) >> 3);
    if (0 < iVar4) {
      do {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x198) + (longlong)puVar10 * 8);
        local_res8 = *(int *)(lVar9 + 0x20);
        local_resc = *(undefined4 *)(lVar9 + 0x24);
        FUN_140c337a0(param_2,&local_res8);
        puVar10 = (undefined8 *)((longlong)puVar10 + 1);
      } while ((longlong)puVar10 < (longlong)iVar4);
    }
    plVar6 = *(longlong **)(param_2 + 0x10);
    if (*(char *)(param_2 + 0x100) == '\0') {
      (**(code **)(*plVar6 + 0x30))(plVar6,param_2 + 0xc0);
    }
    else {
      (**(code **)(*plVar6 + 0x48))(plVar6,param_2 + 0x1c,2);
    }
    if (*(char *)(param_2 + 0x100) == '\0') {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
                (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
    }
  }
  cVar1 = *(char *)(param_1 + 0x147);
  puVar7 = &DAT_1410d2e70;
  if (cVar1 != '\0') {
    FUN_140c34e50(param_2,0x2f2a);
    local_238 = 0xe;
    puVar8 = &DAT_1410d2e70;
    if (cVar1 != '\0') {
      puVar8 = &DAT_1410d2e6c;
    }
    FUN_1407f5cd0(local_234,&DAT_141073ac8,puVar8);
    FUN_140c34490(param_2,&local_238);
    if (*(char *)(param_2 + 0x100) == '\0') {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
                (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
    }
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    FUN_140c34e50(param_2,0x28e5);
    FUN_140184030(param_2,0x2799);
    if (*(char *)(param_2 + 0x100) == '\0') {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
                (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
    }
  }
  iVar4 = *(int *)(param_1 + 0x44);
  if (0 < iVar4) {
    FUN_140c34e50(param_2,0x6b);
    local_238 = 0xc;
    FUN_1407f5cd0(local_234,&DAT_1410debe8,iVar4);
    FUN_140c34490(param_2,&local_238);
    if (*(char *)(param_2 + 0x100) == '\0') {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
                (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
    }
  }
  iVar4 = *(int *)(param_1 + 0x4c);
  if (0 < iVar4) {
    FUN_140c34e50(param_2,0x2abc);
    local_238 = 0xc;
    FUN_1407f5cd0(local_234,&DAT_1410debe8,iVar4);
    FUN_140c34490(param_2,&local_238);
    if (*(char *)(param_2 + 0x100) == '\0') {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
                (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
    }
  }
  iVar4 = *(int *)(param_1 + 0x40);
  if (0 < iVar4) {
    FUN_140c34e50(param_2,0x28e4);
    local_238 = 0xc;
    FUN_1407f5cd0(local_234,&DAT_1410debe8,iVar4);
    FUN_140c34490(param_2,&local_238);
    if (*(char *)(param_2 + 0x100) == '\0') {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
                (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
    }
  }
  if (*(char *)(param_1 + 0x148) == '\0') {
    FUN_140c34e50(param_2,0x316f);
    local_238 = 0xe;
    FUN_1407f5cd0(local_234,&DAT_141073ac8,&DAT_1410d2e70);
    FUN_140c34490(param_2,&local_238);
    if (*(char *)(param_2 + 0x100) == '\0') {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
                (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
    }
  }
  cVar1 = *(char *)(param_1 + 0x212);
  if (cVar1 != '\0') {
    FUN_140c34e50(param_2,0x2f5a);
    local_238 = 0xe;
    if (cVar1 != '\0') {
      puVar7 = &DAT_1410d2e6c;
    }
    FUN_1407f5cd0(local_234,&DAT_141073ac8,puVar7);
    FUN_140c34490(param_2,&local_238);
    if (*(char *)(param_2 + 0x100) == '\0') {
      (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))
                (*(longlong **)(param_2 + 0x10),param_2 + 0x60);
    }
  }
  return;
}

