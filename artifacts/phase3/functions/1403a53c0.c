
undefined8 FUN_1403a53c0(longlong param_1,longlong *param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  
  cVar1 = (**(code **)(*param_2 + 0x68))(param_2);
  if (cVar1 != '\0') {
    lVar3 = (**(code **)(*param_2 + 0x50))(param_2);
    if (*(longlong *)(lVar3 + 0x230) == 0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
                        (*(longlong **)(param_1 + 0x10),param_2);
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x50))
                        (*(longlong **)(param_1 + 0x18),param_2);
      if (cVar2 == '\0') {
        if (cVar1 != '\0') {
          FUN_1403b6ad0(param_1,param_2);
          return 1;
        }
      }
      else if (cVar1 == '\0') {
        FUN_1403b6910(param_1,param_2);
        return 1;
      }
    }
  }
  return 0;
}

