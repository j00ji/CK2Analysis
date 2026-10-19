
void FUN_14039c9e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_res10;
  
  plVar1 = *(longlong **)(param_1 + 0x88);
  local_res10 = param_2;
  if ((&local_res10 < plVar1) && (plVar2 = *(longlong **)(param_1 + 0x80), plVar2 <= &local_res10))
  {
    if (plVar1 == *(longlong **)(param_1 + 0x90)) {
      FUN_1400ce170();
    }
    if (*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x88) =
           *(undefined8 *)
            (*(ulonglong *)(param_1 + 0x80) + ((longlong)&local_res10 - (longlong)plVar2 >> 3) * 8);
    }
  }
  else {
    if (plVar1 == *(longlong **)(param_1 + 0x90)) {
      FUN_1400ce170();
    }
    if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
      **(longlong **)(param_1 + 0x88) = param_2;
    }
  }
  *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 8;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if ((*(int *)(param_1 + 0xb4) == 2) && (*(char *)(param_1 + 0xc1) == '\0')) {
    *(undefined8 *)(param_1 + 0xb4) = 1;
    *(undefined2 *)(param_1 + 0xc0) = 0;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_2 + 0xa8);
  if (*(int *)(param_1 + 0x50) < 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_2 + 0xac);
  if (*(int *)(param_1 + 0x54) < 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_2 + 0xb0);
  if (*(int *)(param_1 + 0x58) < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_2 + 0xb4);
  if (*(int *)(param_1 + 0x5c) < 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_2 + 0xb8);
  if (*(int *)(param_1 + 0x60) < 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + *(int *)(param_2 + 0xbc);
  if (*(int *)(param_1 + 100) < 0) {
    *(undefined4 *)(param_1 + 100) = 0;
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + *(int *)(param_2 + 0xc0);
  if (*(int *)(param_1 + 0x68) < 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + *(int *)(param_2 + 0xc4);
  if (*(int *)(param_1 + 0x6c) < 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return;
}

