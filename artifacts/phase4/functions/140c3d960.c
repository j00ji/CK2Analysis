
void FUN_140c3d960(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x5d) == '\0') && (*(char *)(param_1 + 0x392) == '\0')) {
    cVar1 = (**(code **)(*param_2 + 0x60))(param_2);
    if (cVar1 == '\0') goto LAB_140c3d98c;
  }
  if ((*(char *)(param_1 + 0x5d) == '\0') && (*(char *)(param_1 + 0x3f0) != '\0')) {
    cVar1 = (**(code **)(*param_2 + 0x90))(param_2);
    if (cVar1 == '\0') {
LAB_140c3d98c:
                    /* WARNING: Could not recover jumptable at 0x000140c3d9a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_2)(param_2,1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140c3d9d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x28))(*(longlong **)(param_1 + 0x60),param_2);
  return;
}

