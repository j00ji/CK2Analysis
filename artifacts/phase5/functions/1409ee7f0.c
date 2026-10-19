
void FUN_1409ee7f0(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 local_228;
  undefined1 local_224 [524];
  
  if (0 < param_4) {
    FUN_140c34e50();
    FUN_140c342f0(param_1,1);
    uVar3 = 0;
    if ((*(char *)(param_1 + 0x100) == '\0') && (uVar5 = uVar3, 0 < *(int *)(param_1 + 8))) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                  (*(longlong **)(param_1 + 0x10),param_1 + 0x40);
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while ((int)uVar4 < *(int *)(param_1 + 8));
    }
    uVar5 = uVar3;
    if (0 < param_4) {
      do {
        local_228 = 0xc;
        FUN_1407f5cd0(local_224,&DAT_1410debe8,*(undefined1 *)(uVar5 + param_3));
        FUN_140c34490(param_1,&local_228);
        if (*(char *)(param_1 + 0x100) == '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                    (*(longlong **)(param_1 + 0x10),param_1 + 0x20);
        }
        uVar5 = uVar5 + 1;
      } while ((longlong)uVar5 < (longlong)param_4);
    }
    if (*(char *)(param_1 + 0x100) == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                (*(longlong **)(param_1 + 0x10),param_1 + 0x60);
    }
    iVar2 = *(int *)(param_1 + 8) + -1;
    *(int *)(param_1 + 8) = iVar2;
    if ((*(char *)(param_1 + 0x100) == '\0') && (0 < iVar2)) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                  (*(longlong **)(param_1 + 0x10),param_1 + 0x40);
        uVar4 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar4;
      } while ((int)uVar4 < *(int *)(param_1 + 8));
    }
    if (*(int *)(param_1 + 8) != -1) {
      plVar1 = *(longlong **)(param_1 + 0x10);
      if (*(char *)(param_1 + 0x100) == '\0') {
        (**(code **)(*plVar1 + 0x30))(plVar1,param_1 + 0xc0);
      }
      else {
        (**(code **)(*plVar1 + 0x48))(plVar1,param_1 + 0x1c,2);
      }
      if (*(char *)(param_1 + 0x100) == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                  (*(longlong **)(param_1 + 0x10),param_1 + 0x60);
      }
    }
  }
  return;
}

