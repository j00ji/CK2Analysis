
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14081b0f0(longlong param_1)

{
  int iVar1;
  char *pcVar2;
  uint local_res10 [6];
  undefined1 local_1d8;
  undefined7 uStack_1d7;
  undefined8 local_1c8;
  ulonglong local_1c0;
  undefined **local_178 [3];
  undefined8 local_160 [3];
  ulonglong local_148;
  longlong local_140;
  undefined8 local_128;
  
  local_128 = 0xfffffffffffffffe;
  local_res10[0] = 0xffffffff;
  if (DAT_1417ee2e8 < 0x10) {
    pcVar2 = &DAT_1417ee2d0;
  }
  else {
    pcVar2 = _DAT_1417ee2d0;
    if (_DAT_1417ee2d0 == (char *)0x0) {
      return 0;
    }
  }
  if ((*pcVar2 == '\0') || (iVar1 = PHYSFS_exists(), iVar1 == 0)) {
    return 0;
  }
  local_1c0 = 0xf;
  local_1c8 = 0;
  local_1d8 = 0;
  FUN_1400b0300(&local_1d8,&DAT_14106162d,0);
  FUN_140d678d0(local_178,&DAT_1417ee2d0,0,0,&local_1d8,0);
  if (0xf < local_1c0) {
    FUN_1400b08c0(&local_1d8,CONCAT71(uStack_1d7,local_1d8),local_1c0 + 1);
  }
  local_1c0 = 0xf;
  local_1c8 = 0;
  local_1d8 = 0;
  FUN_140d68080(local_178,local_res10,4);
  local_178[0] = &PTR_FUN_141161690;
  if (local_140 != 0) {
    PHYSFS_close();
    local_140 = 0;
  }
  local_178[0] = &PTR_FUN_1411617e8;
  if (0xf < local_148) {
    FUN_1400b08c0(local_160,local_160[0],local_148 + 1);
  }
  if (*(uint *)(param_1 + 0x3b48) != local_res10[0]) {
    return 0;
  }
  if (DAT_1417ee3d0 < 0x10) {
    pcVar2 = (char *)&DAT_1417ee3b8;
  }
  else {
    pcVar2 = DAT_1417ee3b8;
    if (DAT_1417ee3b8 == (char *)0x0) {
      return 0;
    }
  }
  if ((*pcVar2 != '\0') && (iVar1 = PHYSFS_exists(), iVar1 != 0)) {
    local_1c0 = 0xf;
    local_1c8 = 0;
    local_1d8 = 0;
    FUN_1400b0300(&local_1d8,&DAT_14106162d,0);
    FUN_140d678d0(local_178,&DAT_1417ee3b8,0,0,&local_1d8,0);
    if (0xf < local_1c0) {
      FUN_1400b08c0(&local_1d8,CONCAT71(uStack_1d7,local_1d8),local_1c0 + 1);
    }
    local_1c0 = 0xf;
    local_1c8 = 0;
    local_1d8 = 0;
    FUN_140d68080(local_178,*(undefined8 *)(param_1 + 0x3b40),
                  *(int *)(param_1 + 0x3b38) * *(int *)(param_1 + 0x3b38) * 4);
    FUN_140d67dd0(local_178);
    return 1;
  }
  return 0;
}


