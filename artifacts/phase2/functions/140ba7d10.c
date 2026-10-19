
void FUN_140ba7d10(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *local_res8;
  
  lVar2 = (**(code **)(*param_2 + 0x50))(param_2);
  plVar1 = *(longlong **)(lVar2 + 0x38);
  *(undefined8 *)(lVar2 + 0x230) = 0;
  while (plVar1 != (longlong *)0x0) {
    lVar2 = *plVar1;
    plVar1 = (longlong *)plVar1[2];
    if (500 < *(int *)(lVar2 + 0x40)) {
      *(undefined4 *)(lVar2 + 0x40) = 500;
    }
  }
  for (local_res8 = *(undefined8 **)(param_1 + 0x230);
      (local_res8 != (undefined8 *)0x0 && ((longlong *)*local_res8 != param_2));
      local_res8 = (undefined8 *)local_res8[2]) {
  }
  FUN_1400d4c30((undefined8 *)(param_1 + 0x230),&local_res8);
  return;
}

