
undefined8 * FUN_14039d760(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  
  param_2[3] = 0xf;
  param_2[2] = 0;
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar1 = 0;
  local_res20[0] = 0;
  local_res18[0] = 0;
  FUN_14039d7d0(param_1,local_res20,local_res18,param_2,1,0xfffffffffffffffe);
  return param_2;
}

