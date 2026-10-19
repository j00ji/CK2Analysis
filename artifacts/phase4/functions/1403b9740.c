
undefined1 * FUN_1403b9740(undefined1 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == 0) {
    FUN_140698f70(param_1,"RALLY",param_3,param_4,0);
    return param_1;
  }
  if (param_2 == 1) {
    FUN_140698f70(param_1,"ENVELOPE",param_3,param_4,0);
    return param_1;
  }
  if (param_2 == 2) {
    FUN_140698f70(param_1,"WEDGE",param_3,param_4,0);
    return param_1;
  }
  if (param_2 != 3) {
    if (param_2 != 4) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0xf;
      *param_1 = 0;
      FUN_1400b0300(param_1,&DAT_14106162d,0);
      return param_1;
    }
    FUN_140698f70(param_1,"FORCE_ATTACK",param_3,param_4,0);
    return param_1;
  }
  FUN_140698f70(param_1,"HOLD_GROUND",param_3,param_4,0);
  return param_1;
}

