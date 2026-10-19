
longlong FUN_1403b9850(longlong param_1,uint param_2)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1403be180(*(longlong *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    FUN_1400cdaf0();
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  FUN_1403bdf60(param_1 + 0x18);
  if ((param_2 & 1) != 0) {
    thunk_FUN_140e1c5e4(param_1,0x48);
  }
  return param_1;
}

