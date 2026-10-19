
void FUN_1403a1600(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_18 [4];
  
  plVar1 = (longlong *)param_1[6];
  while (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
    plVar1 = (longlong *)plVar1[2];
    local_res8 = *(undefined4 *)(lVar2 + 0x20);
    local_resc = *(undefined4 *)(lVar2 + 0x24);
    FUN_140c34e50(param_2,0x27f2);
    FUN_140c337a0(param_2,&local_res8);
  }
  local_18[0] = 0x2c8a;
  local_18[1] = 0x2c8b;
  lVar2 = 0;
  local_18[2] = 0x2c8c;
  do {
    if (((param_1[0x1a] - param_1[0x19] & 0xfffffffffffffff8U) != 0) ||
       ((*(byte *)(param_1[0xb] + 0x1e9) & 2) != 0)) {
      FUN_140c34e50(param_2,local_18[lVar2]);
      (**(code **)(param_1[9] + 8))(param_1 + 9,param_2);
    }
    lVar2 = lVar2 + 1;
    param_1 = param_1 + 0x19;
  } while (lVar2 < 3);
  return;
}

