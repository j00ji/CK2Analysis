
void FUN_140ba57d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (((*(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) & 0xfffffffffffffff8U) != 0)
     && (iVar1 = (int)(*(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) >> 3) + -1,
        lVar2 = (longlong)iVar1, -1 < iVar1)) {
    do {
      FUN_140ba5040(*(undefined8 *)(*(longlong *)(param_1 + 0x1a8) + lVar2 * 8));
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}

