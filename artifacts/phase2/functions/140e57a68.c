
double FUN_140e57a68(double param_1)

{
  double dVar1;
  
  if (((ulonglong)param_1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if (((ulonglong)param_1 & 0xfffffffffffff) != 0) {
      dVar1 = (double)_handle_nan(param_1);
      return dVar1;
    }
    if (((ulonglong)param_1 & 0x8000000000000000) != 0) goto LAB_140e57abc;
  }
  if (-1 < (longlong)param_1 || ABS(param_1) == 0.0) {
    return SQRT(param_1);
  }
LAB_140e57abc:
  dVar1 = (double)FUN_140e5ee68(&DAT_141046f90,5,0xfff8000000000000,1,8,0x21,param_1,0,1);
  return dVar1;
}

